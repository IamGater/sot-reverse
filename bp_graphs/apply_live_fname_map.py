"""Apply only FName strings directly read from the running game.

This does not infer unknown indices.  It updates raw bytecode headings and
their derived C++/graph views where an exact ``fn_idx_N`` key is present in
``live_fname_index_map.json``.
"""
from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent
RAW = ROOT.parent / "decompiled_blueprints"
CPP = ROOT / "cpp"
GRAPHS = ROOT / "graphs"
MAP = ROOT / "live_fname_index_map.json"
TOKEN = re.compile(r"fn_idx_(\d+)")


def rename_text(path: Path, names: dict[str, str]) -> int:
    text = path.read_text(encoding="utf-8", errors="replace")
    changes = 0

    def replace(match: re.Match[str]) -> str:
        nonlocal changes
        resolved = names.get(match.group(1))
        if resolved is None:
            return match.group(0)
        changes += 1
        return resolved

    result = TOKEN.sub(replace, text)
    if result != text:
        path.write_text(result, encoding="utf-8")
    return changes


def main() -> None:
    source = json.loads(MAP.read_text(encoding="utf-8"))
    names: dict[str, str] = source["found"]
    raw_changes = sum(rename_text(path, names) for path in RAW.glob("*.txt"))
    cpp_changes = sum(rename_text(path, names) for path in CPP.glob("*.cpp"))
    graph_changes = sum(rename_text(path, names) for path in GRAPHS.glob("*.json"))
    report = {
        "method": "exact index-to-FName strings read from the live SoTGame FName table",
        "resolved_indices": len(names),
        "unresolved_indices": source["missing"],
        "replacements": {"raw": raw_changes, "cpp": cpp_changes, "graphs": graph_changes},
    }
    (ROOT / "live_fname_apply_report.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
    )
    print(json.dumps(report["replacements"]))


if __name__ == "__main__":
    main()
