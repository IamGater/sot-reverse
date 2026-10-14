// decompile_all_blueprints_pipeline.js - bulk pipeline: force-load every
// bp_* Blueprint asset (investigation/all_blueprint_asset_paths.txt, 12556
// entries) via the real LoadPackageInternal (RVA 0x153E4E0 - see
// bulk-sotgame-decompilation-2026-09-06.md "K2 bytecode thread"), find the
// resulting BlueprintGeneratedClass, and disassemble every function's real
// Kismet bytecode to investigation/decompiled_blueprints/<ClassName>.txt.
//
// SPEED: a full virtual-address-space scan (find_by_own_name/classname)
// takes ~20-60s regardless of query - completely impractical 12556 times
// (>60h). Instead: guess the real class name from the file's own basename
// using this codebase's OWN naming convention (empirically confirmed on 2
// real samples: "bp_wheel"->"BP_Wheel_C", "bp_sail"->"BP_Sail_C" - prefix
// "bp"->"BP", each remaining underscore-segment Title-Cased, "_C" suffix),
// then do a FAST targeted FName lookup (single hash-bucket walk, not a
// full table rebuild) for that one candidate name. Only if the candidate
// is confirmed interned do we pay for a (still time-bounded) live-object
// scan. Misses are logged and skipped - full coverage of all 12556 is not
// guaranteed by name-guessing alone, but throughput is what makes this
// pipeline feasible at all.
//
// Resumable: progress checkpoint written every item to
// investigation/decompiled_blueprints_progress.json. Processes a bounded
// batch per invocation (BATCH_SIZE) so an outer driver can health-check the
// game process between batches.
//
// Usage: frida -p <PID> -l scripts/decompile_all_blueprints_pipeline.js

const BATCH_SIZE = 100;
const USE_ALREADY_LOADED_CLASSES = false;
const PROCESS_EVENT_RVA = ptr("0x152A7A0");
const LOADPACKAGE_RVA = ptr("0x153E4E0");
const FNAME_HASHTABLE_RVA = ptr("0x6A2A440"); // CRC table, see below
const FNAME_HASHTABLE_ADDR_RVA = ptr("0x6AF9A30");
const LIST_PATH = "C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\remaining_live_fname_asset_paths.txt";
const CLASSNAMES_PATH = "C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\remaining_live_fname_class_names.json";
const OUT_DIR = "C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\decompiled_blueprints\\";
const PROGRESS_PATH = "C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\remaining_live_fname_progress.json";
const LOG_PATH = "C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\remaining_live_fname_log.txt";

const moduleBase = Process.enumerateModules()[0].base;
const mod = Process.enumerateModules()[0];

const _logFile = new File(LOG_PATH, "a");
function log(s) {
    const line = "[" + new Date().toISOString() + "] " + s;
    console.log(line);
    try { _logFile.write(line + "\n"); _logFile.flush(); } catch (e) {}
}

// ---- FName table helpers (bucket-hash based, FAST single-name lookup) ----
let _crcTableCache = null;
function fnameCrcTable() {
    if (_crcTableCache) return _crcTableCache;
    const addr = moduleBase.add(FNAME_HASHTABLE_RVA);
    const raw = addr.readByteArray(1024);
    const bytes = new Uint8Array(raw);
    const table = new Uint32Array(256);
    for (let i = 0; i < 256; i++) table[i] = (bytes[i * 4] | (bytes[i * 4 + 1] << 8) | (bytes[i * 4 + 2] << 16) | (bytes[i * 4 + 3] << 24)) >>> 0;
    _crcTableCache = table;
    return table;
}
function computeFNameBucket(str) {
    const table = fnameCrcTable();
    let crc = 0 >>> 0;
    for (let i = 0; i < str.length; i++) {
        let c = str.charCodeAt(i);
        if (c >= 0x61 && c <= 0x7a) c -= 0x20;
        const idx = (c ^ (crc & 0xff)) & 0xff;
        crc = (table[idx] ^ (crc >>> 8)) >>> 0;
    }
    return crc & 0xfff;
}
function findExactIndexFast(targetStr) {
    const bucket = computeFNameBucket(targetStr);
    const tableAddr = moduleBase.add(FNAME_HASHTABLE_ADDR_RVA);
    let node = tableAddr.add(bucket * 8).readPointer();
    let depth = 0;
    while (!node.isNull() && depth < 20000) {
        let computedIndex = -1;
        try { computedIndex = node.readU32() >>> 1; } catch (e) { break; }
        try {
            const raw = node.add(0x10).readByteArray(96);
            const bytes = new Uint8Array(raw);
            let asciiEnd = 0;
            while (asciiEnd < bytes.length && bytes[asciiEnd] >= 0x20 && bytes[asciiEnd] < 0x7f) asciiEnd++;
            const text = asciiEnd >= 2 ? Array.from(bytes.slice(0, asciiEnd)).map((b) => String.fromCharCode(b)).join("") : "";
            if (text === targetStr) return computedIndex;
        } catch (e) { break; }
        let nextRaw;
        try { nextRaw = node.add(8).readPointer(); } catch (e) { break; }
        if (nextRaw.equals(node)) break;
        node = nextRaw;
        depth++;
    }
    return -1;
}
function nameStringOfIndex(idx) {
    // reverse lookup is expensive without a full map; only used for logging occasionally.
    return "idx:" + idx;
}

// ---- native full-scan helpers (used sparingly, with a SHORT timeout) ----
const cmSource = `
#include <stdint.h>
typedef struct _MEMORY_BASIC_INFORMATION {
    void* BaseAddress; void* AllocationBase; uint32_t AllocationProtect; uint32_t __pad0;
    uint64_t RegionSize; uint32_t State; uint32_t Protect; uint32_t Type; uint32_t __pad1;
} MEMORY_BASIC_INFORMATION;
extern uint64_t VirtualQuery(void* lpAddress, MEMORY_BASIC_INFORMATION* lpBuffer, uint64_t dwLength);
extern uint64_t GetTickCount64(void);
typedef struct { void* region_base; uint64_t region_size; int region_readable; int has_cache; } read_cache_t;
static int is_readable_cached(void* addr, uint64_t need, read_cache_t* cache) {
    if (cache->has_cache) {
        uint64_t a = (uint64_t) addr, b = (uint64_t) cache->region_base;
        if (a >= b && a + need <= b + cache->region_size) return cache->region_readable;
    }
    MEMORY_BASIC_INFORMATION mbi;
    if (VirtualQuery(addr, &mbi, sizeof(mbi)) == 0) { cache->has_cache = 0; return 0; }
    cache->region_base = mbi.BaseAddress; cache->region_size = mbi.RegionSize;
    cache->region_readable = (mbi.State == 0x1000 && mbi.Protect != 0x01 && !(mbi.Protect & 0x100));
    cache->has_cache = 1;
    { uint64_t a = (uint64_t) addr, b = (uint64_t) mbi.BaseAddress;
      if (a + need > b + mbi.RegionSize) return 0; }
    return cache->region_readable;
}
uint32_t find_by_own_name(uint8_t* module_base, uint64_t module_size, uint32_t target_name_idx,
                            uint64_t max_wall_ms, void** results_out, uint32_t max_results) {
    uint64_t module_end = (uint64_t) module_base + module_size;
    uint64_t start_tick = GetTickCount64();
    uint64_t addr = 0x10000, ceiling = 0x00007FFFFFFFFFFFULL;
    uint32_t found_count = 0;
    read_cache_t name_cache = {0};
    while (addr < ceiling && found_count < max_results) {
        if (GetTickCount64() - start_tick > max_wall_ms) break;
        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery((void*)addr, &mbi, sizeof(mbi)) == 0) break;
        uint64_t region_size = mbi.RegionSize;
        if (region_size == 0) { addr += 0x1000; continue; }
        uint64_t region_base = (uint64_t) mbi.BaseAddress;
        int ok = (mbi.State == 0x1000 && mbi.Protect != 0x01 && !(mbi.Protect & 0x100));
        if (ok && region_size >= 24) {
            uint64_t count = region_size / 8; void** base = (void**) region_base;
            for (uint64_t j = 0; j + 2 < count; j++) {
                if ((j & 0x3FFFF) == 0 && GetTickCount64() - start_tick > max_wall_ms) break;
                uint64_t vval = (uint64_t) base[j];
                if (vval < (uint64_t)module_base || vval >= module_end) continue;
                void* obj_addr = (void*)&base[j];
                void* name_field = (void*)((uint8_t*)obj_addr + 0x18);
                if (!is_readable_cached(name_field, 4, &name_cache)) continue;
                if (*(uint32_t*)name_field == target_name_idx) {
                    results_out[found_count++] = obj_addr;
                    if (found_count >= max_results) break;
                }
            }
        }
        addr = region_base + region_size;
        if (addr <= region_base) break;
    }
    return found_count;
}
`;
const cm = new CModule(cmSource, {
    VirtualQuery: Process.getModuleByName("kernel32.dll").getExportByName("VirtualQuery"),
    GetTickCount64: Process.getModuleByName("kernel32.dll").getExportByName("GetTickCount64")
});
const findByOwnName = new NativeFunction(cm.find_by_own_name, "uint32", ["pointer", "uint64", "uint32", "uint64", "pointer", "uint32"]);
const SCAN_TIMEOUT_MS = 6000;

// ---- real class names, extracted OFFLINE from each .uasset's own name
// table (extract_all_real_class_names.py - 99.1% success rate, MUCH more
// reliable than guessing a naming convention from the file's lowercase
// name, which failed on ~100% of a 50-item smoke test beyond the two
// hand-verified single-word samples). Loaded once at startup.
let realClassNames = {};
function loadRealClassNames() {
    const f = new File(CLASSNAMES_PATH, "r");
    const txt = f.readText();
    f.close();
    return JSON.parse(txt);
}

// ---- minimal disassembler (same as disassemble_bp_wheel.js) ----
// BUG FIXED 2026-09-06: this map was declared but NEVER populated, so every
// function/variable/property name in every output file up to this fix was
// an unresolved "idx:N" placeholder - useless for porting. Fix: build the
// full name table ONCE at startup (same technique as the proven
// load_and_disassemble_bp.js single-target script - walk all 4096 hash
// buckets, ~200k names, a few seconds, done once per Frida session, NOT
// once per asset like the expensive live-object scan).
let nameByIndexCache = new Map();
function buildNameMap() {
    const map = new Map();
    const tableAddr = moduleBase.add(FNAME_HASHTABLE_ADDR_RVA);
    for (let bucket = 0; bucket < 4096; bucket++) {
        let node;
        try { node = tableAddr.add(bucket * 8).readPointer(); } catch (e) { continue; }
        let depth = 0;
        while (!node.isNull() && depth < 100000) {
            let idx = -1;
            try { idx = node.readU32() >>> 1; } catch (e) { break; }
            try {
                const raw = node.add(0x10).readByteArray(128);
                const bytes = new Uint8Array(raw);
                let asciiEnd = 0;
                while (asciiEnd < bytes.length && bytes[asciiEnd] >= 0x20 && bytes[asciiEnd] < 0x7f) asciiEnd++;
                if (asciiEnd >= 2) map.set(idx, Array.from(bytes.slice(0, asciiEnd)).map((b) => String.fromCharCode(b)).join(""));
            } catch (e) { break; }
            let nextRaw;
            try { nextRaw = node.add(8).readPointer(); } catch (e) { break; }
            if (nextRaw.equals(node)) break;
            node = nextRaw;
            depth++;
        }
    }
    return map;
}
function resolveNameIdx(idx) {
    if (nameByIndexCache.has(idx)) return nameByIndexCache.get(idx);
    return "idx:" + idx;
}
function resolveFunctionFName(functionObject) {
    const comparisonIndex = functionObject.add(0x18).readU32();
    const number = functionObject.add(0x1C).readU32();
    const base = nameByIndexCache.get(comparisonIndex);
    if (!base) throw new Error("UFunction FName absent from live name map: " + comparisonIndex);
    return number === 0 ? base : base + "_" + (number - 1);
}
function resolveObjName(p) {
    if (!p || p.isNull()) return "(null)";
    try {
        const nameIdx = p.add(0x18).readU32();
        return resolveNameIdx(nameIdx) + "@" + p;
    } catch (e) { return "(unreadable@" + p + ")"; }
}
const EX = {
    LocalVariable: 0x00, InstanceVariable: 0x01, DefaultVariable: 0x02, Return: 0x04, Jump: 0x06,
    JumpIfNot: 0x07, Assert: 0x09, Nothing: 0x0B, Let: 0x0F, ClassContext: 0x12, MetaCast: 0x13,
    LetBool: 0x14, EndParmValue: 0x15, EndFunctionParms: 0x16, Self: 0x17, Skip: 0x18, Context: 0x19,
    Context_FailSilent: 0x1A, VirtualFunction: 0x1B, FinalFunction: 0x1C, IntConst: 0x1D,
    FloatConst: 0x1E, StringConst: 0x1F, ObjectConst: 0x20, NameConst: 0x21, RotationConst: 0x22,
    VectorConst: 0x23, ByteConst: 0x24, IntZero: 0x25, IntOne: 0x26, True: 0x27, False: 0x28,
    TextConst: 0x29, NoObject: 0x2A, TransformConst: 0x2B, IntConstByte: 0x2C, NoInterface: 0x2D,
    DynamicCast: 0x2E, StructConst: 0x2F, EndStructConst: 0x30, SetArray: 0x31, EndArray: 0x32,
    UnicodeStringConst: 0x34, PrimitiveCast: 0x38, StructMemberContext: 0x42, LetMulticastDelegate: 0x43,
    LetDelegate: 0x44, LocalOutVariable: 0x48, DeprecatedOp4A: 0x4A, InstanceDelegate: 0x4B,
    PushExecutionFlow: 0x4C, PopExecutionFlow: 0x4D, ComputedJump: 0x4E, PopExecutionFlowIfNot: 0x4F,
    Breakpoint: 0x50, InterfaceContext: 0x51, ObjToInterfaceCast: 0x52, EndOfScript: 0x53,
    CrossInterfaceCast: 0x54, InterfaceToObjCast: 0x55, WireTracepoint: 0x5A, SkipOffsetConst: 0x5B,
    AddMulticastDelegate: 0x5C, ClearMulticastDelegate: 0x5D, Tracepoint: 0x5E, LetObj: 0x5F,
    LetWeakObjPtr: 0x60, BindDelegate: 0x61, RemoveMulticastDelegate: 0x62, CallMulticastDelegate: 0x63,
    LetValueOnPersistentFrame: 0x64, ArrayConst: 0x65, EndArrayConst: 0x66, AssetConst: 0x67,
    CallMath: 0x68, SwitchValue: 0x69,
};
const EX_NAME = {}; for (const k in EX) EX_NAME[EX[k]] = k;

function disassemble(bytes, label) {
    const lines = []; let indent = "";
    const add = (s) => lines.push(indent + s);
    let i = 0;
    function u8() { const v = bytes[i]; i += 1; return v; }
    function u16() { const v = bytes[i] | (bytes[i + 1] << 8); i += 2; return v; }
    function u32() { const v = (bytes[i] | (bytes[i + 1] << 8) | (bytes[i + 2] << 16) | (bytes[i + 3] << 24)) >>> 0; i += 4; return v; }
    function i32() { const v = u32(); return v | 0; }
    function f32() {
        const buf = new ArrayBuffer(4); const dv = new DataView(buf);
        dv.setUint8(0, bytes[i]); dv.setUint8(1, bytes[i + 1]); dv.setUint8(2, bytes[i + 2]); dv.setUint8(3, bytes[i + 3]);
        i += 4; return dv.getFloat32(0, true);
    }
    function u64ptr() { let hex = ""; for (let k = 7; k >= 0; k--) hex += bytes[i + k].toString(16).padStart(2, "0"); i += 8; return ptr("0x" + hex); }
    function scriptName() { const cmp = u32(); u32(); u32(); return resolveNameIdx(cmp); }
    function readPtrName() { return resolveObjName(u64ptr()); }
    function readString8() { let s = "", c; do { c = u8(); if (c) s += String.fromCharCode(c); } while (c !== 0); return s; }
    function readString16() { let s = "", c; do { c = u16(); if (c) s += String.fromCharCode(c); } while (c !== 0); return s; }
    function serializeExpr() {
        if (i >= bytes.length) { add("<<< out of bytes >>>"); return -1; }
        const startOff = i; const opcode = u8(); const opName = EX_NAME[opcode] || ("UNKNOWN_0x" + opcode.toString(16));
        processCommon(opcode, opName, startOff); return opcode;
    }
    function processCommon(opcode, opName, startOff) {
        switch (opcode) {
            case EX.PrimitiveCast: { const conv = u8(); add("$" + startOff + ": PrimitiveCast type=" + conv); indent += "  "; add("Argument:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.ObjToInterfaceCast: case EX.CrossInterfaceCast: case EX.InterfaceToObjCast: { const cls = readPtrName(); add("$" + startOff + ": " + opName + " to " + cls); serializeExpr(); break; }
            case EX.Let: { add("$" + startOff + ": Let (Variable = Expression)"); indent += "  "; readPtrName(); add("Variable:"); serializeExpr(); add("Expression:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.LetObj: case EX.LetWeakObjPtr: { add("$" + startOff + ": " + opName + " (Variable = Expression)"); indent += "  "; add("Variable:"); serializeExpr(); add("Expression:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.LetBool: { add("$" + startOff + ": LetBool (Variable = Expression)"); indent += "  "; add("Variable:"); serializeExpr(); add("Expression:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.LetValueOnPersistentFrame: { add("$" + startOff + ": LetValueOnPersistentFrame dest=" + readPtrName()); indent += "  "; add("Expression:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.StructMemberContext: { add("$" + startOff + ": StructMemberContext prop=" + readPtrName()); indent += "  "; add("Expression to struct:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.LetDelegate: case EX.LetMulticastDelegate: { add("$" + startOff + ": " + opName + " (Variable = Expression)"); indent += "  "; add("Variable:"); serializeExpr(); add("Expression:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.ComputedJump: { add("$" + startOff + ": Computed Jump, offset by expr:"); indent += "  "; serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.Jump: { const skip = u32(); add("$" + startOff + ": Jump to offset 0x" + skip.toString(16)); break; }
            case EX.LocalVariable: case EX.DefaultVariable: case EX.InstanceVariable: case EX.LocalOutVariable: { add("$" + startOff + ": " + opName + " named " + readPtrName()); break; }
            case EX.InterfaceContext: { add("$" + startOff + ": InterfaceContext:"); serializeExpr(); break; }
            case EX.DeprecatedOp4A: add("$" + startOff + ": DeprecatedOp4A (no-op)"); break;
            case EX.Nothing: add("$" + startOff + ": Nothing"); break;
            case EX.EndOfScript: add("$" + startOff + ": EndOfScript"); break;
            case EX.EndFunctionParms: add("$" + startOff + ": EndFunctionParms"); break;
            case EX.EndStructConst: add("$" + startOff + ": EndStructConst"); break;
            case EX.EndArray: add("$" + startOff + ": EndArray"); break;
            case EX.EndArrayConst: add("$" + startOff + ": EndArrayConst"); break;
            case EX.IntZero: add("$" + startOff + ": IntZero (0)"); break;
            case EX.IntOne: add("$" + startOff + ": IntOne (1)"); break;
            case EX.True: add("$" + startOff + ": True"); break;
            case EX.False: add("$" + startOff + ": False"); break;
            case EX.NoObject: add("$" + startOff + ": NoObject"); break;
            case EX.NoInterface: add("$" + startOff + ": NoInterface"); break;
            case EX.Self: add("$" + startOff + ": Self"); break;
            case EX.EndParmValue: add("$" + startOff + ": EndParmValue"); break;
            case EX.Return: { add("$" + startOff + ": Return expression:"); indent += "  "; serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.CallMath: case EX.FinalFunction: { const target = readPtrName(); add("$" + startOff + ": " + opName + " target=" + target + " ("); indent += "  "; let op; do { op = serializeExpr(); } while (op !== EX.EndFunctionParms && op !== -1); indent = indent.slice(0, -2); add(")"); break; }
            case EX.CallMulticastDelegate: { const target = readPtrName(); add("$" + startOff + ": CallMulticastDelegate target=" + target + " delegate:"); indent += "  "; serializeExpr(); add("Params:"); let op; do { op = serializeExpr(); } while (op !== EX.EndFunctionParms && op !== -1); indent = indent.slice(0, -2); break; }
            case EX.VirtualFunction: { const fname = scriptName(); add("$" + startOff + ": VirtualFunction call \"" + fname + "\" ("); indent += "  "; let op; do { op = serializeExpr(); } while (op !== EX.EndFunctionParms && op !== -1); indent = indent.slice(0, -2); add(")"); break; }
            case EX.ClassContext: case EX.Context: case EX.Context_FailSilent: {
                add("$" + startOff + ": " + (opcode === EX.ClassContext ? "ClassContext" : "Context") + (opcode === EX.Context_FailSilent ? " (FailSilent)" : ""));
                indent += "  "; add("ObjectExpression:"); serializeExpr();
                const skip = u32(); add("SkipBytes: 0x" + skip.toString(16));
                add("RValueProperty: " + readPtrName());
                add("ContextExpression:"); serializeExpr(); indent = indent.slice(0, -2); break;
            }
            case EX.IntConst: add("$" + startOff + ": literal int32 " + i32()); break;
            case EX.SkipOffsetConst: add("$" + startOff + ": literal CodeSkipSizeType 0x" + u32().toString(16)); break;
            case EX.FloatConst: add("$" + startOff + ": literal float " + f32()); break;
            case EX.StringConst: add("$" + startOff + ": literal ansi string \"" + readString8() + "\""); break;
            case EX.UnicodeStringConst: add("$" + startOff + ": literal unicode string \"" + readString16() + "\""); break;
            case EX.TextConst: add("$" + startOff + ": literal text (not decoded)"); break;
            case EX.ObjectConst: add("$" + startOff + ": ObjectConst " + readPtrName()); break;
            case EX.AssetConst: { add("$" + startOff + ": AssetConst"); serializeExpr(); break; }
            case EX.NameConst: add("$" + startOff + ": literal name \"" + scriptName() + "\""); break;
            case EX.RotationConst: { const p = f32(), y = f32(), r = f32(); add("$" + startOff + ": literal rotation (" + p + "," + y + "," + r + ")"); break; }
            case EX.VectorConst: { const x = f32(), y = f32(), z = f32(); add("$" + startOff + ": literal vector (" + x + "," + y + "," + z + ")"); break; }
            case EX.TransformConst: { const rx = f32(), ry = f32(), rz = f32(), rw = f32(); const tx = f32(), ty = f32(), tz = f32(); const sx = f32(), sy = f32(), sz = f32(); add("$" + startOff + ": literal transform R(" + rx + "," + ry + "," + rz + "," + rw + ") T(" + tx + "," + ty + "," + tz + ") S(" + sx + "," + sy + "," + sz + ")"); break; }
            case EX.StructConst: { const sp = readPtrName(); const sz = i32(); add("$" + startOff + ": literal struct " + sp + " (size " + sz + ")"); indent += "  "; let op; do { op = serializeExpr(); } while (op !== EX.EndStructConst && op !== -1); indent = indent.slice(0, -2); break; }
            case EX.SetArray: { add("$" + startOff + ": SetArray"); indent += "  "; serializeExpr(); let op; do { op = serializeExpr(); } while (op !== EX.EndArray && op !== -1); indent = indent.slice(0, -2); break; }
            case EX.ArrayConst: { const ip = readPtrName(); const num = i32(); add("$" + startOff + ": ArrayConst num=" + num + " inner=" + ip); indent += "  "; let op; do { op = serializeExpr(); } while (op !== EX.EndArrayConst && op !== -1); indent = indent.slice(0, -2); break; }
            case EX.ByteConst: add("$" + startOff + ": literal byte " + u8()); break;
            case EX.IntConstByte: add("$" + startOff + ": literal int(byte) " + u8()); break;
            case EX.MetaCast: case EX.DynamicCast: { const cls = readPtrName(); add("$" + startOff + ": " + opName + " to " + cls + " of expr:"); serializeExpr(); break; }
            case EX.JumpIfNot: { const skip = u32(); add("$" + startOff + ": JumpIfNot -> 0x" + skip.toString(16) + ", cond:"); indent += "  "; serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.Assert: { const line = u16(); const dbg = u8(); add("$" + startOff + ": assert line=" + line + " debug=" + dbg + " expr:"); serializeExpr(); break; }
            case EX.Skip: { const w = u32(); add("$" + startOff + ": possibly-skip 0x" + w.toString(16) + " of expr:"); serializeExpr(); break; }
            case EX.InstanceDelegate: add("$" + startOff + ": InstanceDelegate func=\"" + scriptName() + "\""); break;
            case EX.AddMulticastDelegate: case EX.RemoveMulticastDelegate: { add("$" + startOff + ": " + opName); serializeExpr(); serializeExpr(); break; }
            case EX.ClearMulticastDelegate: { add("$" + startOff + ": ClearMulticastDelegate"); serializeExpr(); break; }
            case EX.BindDelegate: { const fn = scriptName(); add("$" + startOff + ": BindDelegate '" + fn + "'"); indent += "  "; add("Delegate:"); serializeExpr(); add("Object:"); serializeExpr(); indent = indent.slice(0, -2); break; }
            case EX.PushExecutionFlow: add("$" + startOff + ": FlowStack.Push(0x" + u32().toString(16) + ")"); break;
            case EX.PopExecutionFlow: add("$" + startOff + ": PopExecutionFlow (jump to popped addr)"); break;
            case EX.PopExecutionFlowIfNot: { add("$" + startOff + ": PopExecutionFlowIfNot, cond:"); serializeExpr(); break; }
            case EX.Breakpoint: add("$" + startOff + ": <<BREAKPOINT>>"); break;
            case EX.WireTracepoint: add("$" + startOff + ": ..wire tracepoint.."); break;
            case EX.Tracepoint: add("$" + startOff + ": ..tracepoint.."); break;
            case EX.SwitchValue: {
                const numCases = u16(); const afterSkip = u32();
                add("$" + startOff + ": SwitchValue " + numCases + " cases, end@0x" + afterSkip.toString(16));
                indent += "  "; add("Index:"); serializeExpr();
                for (let c = 0; c < numCases; c++) { add("[" + c + "] CaseIndexValue:"); serializeExpr(); const off = u32(); add("[" + c + "] OffsetToNext: 0x" + off.toString(16)); add("[" + c + "] CaseResult:"); serializeExpr(); }
                add("Default:"); serializeExpr(); indent = indent.slice(0, -2); break;
            }
            default: add("$" + startOff + ": <<UNKNOWN OPCODE 0x" + opcode.toString(16) + " - ABORTING>>"); i = bytes.length; break;
        }
    }
    add("=== " + label + " (" + bytes.length + " bytes) ===");
    let guard = 0;
    while (i < bytes.length && guard < 5000) { serializeExpr(); guard++; }
    return lines.join("\n");
}

// ---- progress persistence ----
function loadProgress() {
    try {
        const f = new File(PROGRESS_PATH, "r");
        const txt = f.readText();
        f.close();
        return JSON.parse(txt);
    } catch (e) {
        return { index: 0, done: 0, no_class: 0, timeout: 0, failed: 0 };
    }
}
function saveProgress(p) {
    const f = new File(PROGRESS_PATH, "w");
    f.write(JSON.stringify(p));
    f.close();
}

function sanitizeFilename(s) {
    return s.replace(/[^a-zA-Z0-9_\-]/g, "_");
}

function toGamePackagePath(assetPath) {
    const marker = String.fromCharCode(92) + "Content" + String.fromCharCode(92);
    const lower = assetPath.toLowerCase();
    const at = lower.indexOf(marker.toLowerCase());
    if (at < 0) throw new Error("asset path has no Content directory: " + assetPath);
    const relative = assetPath.substring(at + marker.length).replace(/\\\\/g, "/").replace(/\\.uasset$/i, "");
    return "/Game/" + relative;
}

function runPipelineOnGameThread() {
    log("=== decompile_all_blueprints_pipeline starting ===");

    const listFile = new File(LIST_PATH, "r");
    const allPaths = listFile.readText().split("\n").map(s => s.trim()).filter(s => s.length > 0);
    listFile.close();
    log("total blueprint asset paths: " + allPaths.length);

    realClassNames = loadRealClassNames();
    log("loaded " + Object.keys(realClassNames).length + " real class names");

    const nameMapStart = Date.now();
    nameByIndexCache = buildNameMap();
    log("built full FName index->string map: " + nameByIndexCache.size + " names in " + (Date.now() - nameMapStart) + "ms");

    const progress = loadProgress();
    log("resuming at index " + progress.index + " (done=" + progress.done + " no_class=" + progress.no_class + " timeout=" + progress.timeout + " failed=" + progress.failed + ")");

    const loadPackageFn = new NativeFunction(moduleBase.add(LOADPACKAGE_RVA), "pointer", ["pointer", "pointer", "uint32", "pointer"]);

    const endIndex = Math.min(progress.index + BATCH_SIZE, allPaths.length);
    for (let idx = progress.index; idx < endIndex; idx++) {
        const assetPath = allPaths[idx];
        const guessedClass = realClassNames[assetPath];
        if (!guessedClass) { progress.no_class++; progress.index = idx + 1; saveProgress(progress); continue; }

        if (!USE_ALREADY_LOADED_CLASSES) {
            let loadResult = null;
            try {
                const packagePath = toGamePackagePath(assetPath);
                const pathWide = Memory.allocUtf16String(packagePath);
                loadResult = loadPackageFn(ptr(0), pathWide, 0, ptr(0));
                // Loading a cooked package interns its UFunction FNames.
                // Refresh before reading the class so names are never lost to GC.
                nameByIndexCache = buildNameMap();
            } catch (e) {
                log("[" + idx + "] " + assetPath + " LOAD THREW: " + e);
                progress.failed++; progress.index = idx + 1; saveProgress(progress);
                continue;
            }
            if (!loadResult || loadResult.isNull()) {
                log("[" + idx + "] " + assetPath + " load returned null");
                progress.failed++; progress.index = idx + 1; saveProgress(progress);
                continue;
            }
        }

        const classIdx = findExactIndexFast(guessedClass);
        if (classIdx < 0) {
            log("[" + idx + "] " + assetPath + " guessed class '" + guessedClass + "' NOT interned - skipping");
            progress.no_class++; progress.index = idx + 1; saveProgress(progress);
            continue;
        }

        const buf = Memory.alloc(8 * 4);
        let count = 0;
        try { count = findByOwnName(mod.base, uint64(mod.size), classIdx, uint64(SCAN_TIMEOUT_MS), buf, 4); }
        catch (e) { log("[" + idx + "] " + assetPath + " scan threw: " + e); }

        if (count === 0) {
            log("[" + idx + "] " + assetPath + " class name interned but object not found within " + SCAN_TIMEOUT_MS + "ms - skipping");
            progress.timeout++; progress.index = idx + 1; saveProgress(progress);
            continue;
        }

        const classObj = buf.readPointer();
        try {
            const targets = [];
            let field = classObj.add(0x38).readPointer();
            let n = 0;
            while (!field.isNull() && n < 300) {
                const fClass = field.add(0x10).readPointer();
                const fClassNameIdx = fClass.add(0x18).readU32();
                // "Function" classIdx is stable across the whole session - resolve once via a direct compare of the class object pointer itself would be faster, but name compare via fast lookup is simplest:
                let fClassName = "?";
                try {
                    const raw = new Uint8Array(fClass.add(0x0).readByteArray(0)); // no-op just to catch bad ptr early
                } catch (e) {}
                targets.push({ field, fClassNameIdx });
                let next; try { next = field.add(0x28).readPointer(); } catch (e) { break; }
                field = next; n++;
            }

            const functionClassIdx = findExactIndexFast("Function");
            const realTargets = targets.filter(t => t.fClassNameIdx === functionClassIdx);

            if (realTargets.length === 0) {
                log("[" + idx + "] " + assetPath + " (" + guessedClass + ") - 0 functions found");
                progress.no_class++; progress.index = idx + 1; saveProgress(progress);
                continue;
            }

            const outLines = [];
            let anyBytecode = false;
            for (const t of realTargets) {
                let fName;
                try { fName = resolveFunctionFName(t.field); }
                catch (e) { log("[" + idx + "] " + assetPath + " unresolved UFunction FName: " + e); continue; }
                const scriptNum = t.field.add(0x50).readU32();
                const scriptData = t.field.add(0x48).readPointer();
                if (scriptNum > 0 && !scriptData.isNull()) {
                    anyBytecode = true;
                    try {
                        const raw = new Uint8Array(scriptData.readByteArray(scriptNum));
                        outLines.push(disassemble(raw, guessedClass + "::" + fName));
                        outLines.push("");
                    } catch (e) {
                        outLines.push(fName + " read FAILED: " + e);
                    }
                }
            }

            if (anyBytecode) {
                const outPath = OUT_DIR + sanitizeFilename(guessedClass) + ".txt";
                const outFile = new File(outPath, "w");
                outFile.write("// " + assetPath + " -> " + guessedClass + "\n\n");
                outFile.write(outLines.join("\n"));
                outFile.close();
                log("[" + idx + "] " + assetPath + " -> " + guessedClass + " OK (" + realTargets.length + " functions)");
                progress.done++;
            } else {
                log("[" + idx + "] " + assetPath + " -> " + guessedClass + " - all functions empty/no bytecode");
                progress.done++;
            }
        } catch (e) {
            log("[" + idx + "] " + assetPath + " field-walk THREW: " + e);
            progress.failed++;
        }

        progress.index = idx + 1;
        saveProgress(progress);
    }

    log("=== BATCH COMPLETE === processed up to index " + progress.index + "/" + allPaths.length +
        " (done=" + progress.done + " no_class=" + progress.no_class + " timeout=" + progress.timeout + " failed=" + progress.failed + ")");
    log("all_done: " + (progress.index >= allPaths.length));
}

setImmediate(function () {
    let fired = false;
    const processEvent = moduleBase.add(PROCESS_EVENT_RVA);
    log("waiting for UObject::ProcessEvent post-return trampoline @ " + processEvent);
    const listener = Interceptor.attach(processEvent, {
        onEnter: function () {
            this.shouldRun = !fired;
            if (!this.shouldRun) return;
            fired = true;
        },
        onLeave: function () {
            if (!this.shouldRun) return;
            try { listener.detach(); } catch (e) {}
            try { runPipelineOnGameThread(); }
            catch (e) { log("GAME-THREAD PIPELINE FAILED: " + e + "\n" + e.stack); }
        }
    });
});
