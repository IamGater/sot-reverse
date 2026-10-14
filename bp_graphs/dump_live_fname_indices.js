'use strict';

// Read only the live global FName table. No package loading or UObject calls.
const moduleBase = Process.getModuleByName('SoTGame.exe').base;
const FNAME_HASHTABLE_ADDR_RVA = ptr('0x6AF9A30');
const INPUT_PATH = 'C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\bp_graphs\\live_fname_indices.json';
const OUTPUT_PATH = 'C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\bp_graphs\\live_fname_index_map.json';
const LOG_PATH = 'C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\bp_graphs\\live_fname_index_dump.log';

function log(s) {
    const line = '[' + new Date().toISOString() + '] ' + s;
    console.log(line);
    const f = new File(LOG_PATH, 'a'); f.write(line + '\\n'); f.close();
}

function readTargets() {
    const f = new File(INPUT_PATH, 'r'); const result = JSON.parse(f.readText()); f.close(); return result;
}

function buildTargetMap(targets) {
    const wanted = new Set(targets);
    const found = {};
    const table = moduleBase.add(FNAME_HASHTABLE_ADDR_RVA);
    for (let bucket = 0; bucket < 4096 && wanted.size > 0; ++bucket) {
        let node;
        try { node = table.add(bucket * 8).readPointer(); } catch (_) { continue; }
        for (let depth = 0; !node.isNull() && depth < 100000; ++depth) {
            try {
                const index = node.readU32() >>> 1;
                if (wanted.has(index)) {
                    const raw = node.add(0x10).readByteArray(256);
                    const bytes = new Uint8Array(raw);
                    let end = 0;
                    while (end < bytes.length && bytes[end] >= 0x20 && bytes[end] < 0x7f) ++end;
                    if (end > 0) {
                        let value = '';
                        for (let i = 0; i < end; ++i) value += String.fromCharCode(bytes[i]);
                        found[String(index)] = value;
                        wanted.delete(index);
                    }
                }
                const next = node.add(8).readPointer();
                if (next.equals(node)) break;
                node = next;
            } catch (_) { break; }
        }
    }
    return { found, missing: Array.from(wanted).sort((a, b) => a - b) };
}

setImmediate(function () {
    try {
        const targets = readTargets();
        log('reading ' + targets.length + ' requested FName indices');
        const result = buildTargetMap(targets);
        const f = new File(OUTPUT_PATH, 'w'); f.write(JSON.stringify(result, null, 2)); f.close();
        log('complete: resolved=' + Object.keys(result.found).length + ' missing=' + result.missing.length);
    } catch (e) { log('FAILED: ' + e + '\\n' + e.stack); }
});
