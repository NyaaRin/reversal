#!/usr/bin/env python3
"""Verify that every inventory function has one authoritative readable body.

The full-corpus pass left two timeout stubs in re/dump/decompile/. Those
addresses have authoritative longer bodies in re/dump/recovered_f30/ and
re/dump/renderer/. The extraction pass originally matched only files named
0x*_FUN_*.c, so renamed vfunc/class bodies were falsely reported as missing.
This checker keys every body by its address header instead.
"""
from __future__ import annotations

import csv
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
DUMP = ROOT / "re/dump"
EX = ROOT / "re/extract"
HEADER = re.compile(r"//\s*(?:0x)?([0-9a-fA-F]{8,})\s+(\S+)")
STATUS = re.compile(r"// status:\s*(\S+)")


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", errors="replace", newline="") as f:
        return list(csv.DictReader(f, delimiter="\t"))


def load_bodies() -> dict[int, tuple[str, str]]:
    paths = sorted((DUMP / "decompile").glob("0x*.c"))
    paths += sorted((DUMP / "recovered_f30").glob("0x*.c"))
    paths += sorted((DUMP / "renderer").glob("0x*.c"))
    bodies: dict[int, tuple[str, str]] = {}
    for path in paths:
        text = path.read_text(encoding="utf-8", errors="replace")
        m = HEADER.match(text)
        status = STATUS.search(text[:500])
        if not m or not status or not status.group(1).startswith("ok"):
            continue
        addr = int(m.group(1), 16)
        previous = bodies.get(addr)
        if previous is None or len(text) > previous[0]:
            bodies[addr] = (str(path.relative_to(ROOT)), m.group(2))
    return bodies


def main() -> int:
    inventory = read_tsv(DUMP / "inventory.tsv")
    inv = {int(r["address"], 16): r for r in inventory}
    bodies = load_bodies()
    functions = read_tsv(EX / "functions.tsv")
    errors: list[str] = []

    missing = sorted(set(inv) - set(bodies))
    extra = sorted(set(bodies) - set(inv))
    if missing:
        errors.append(f"{len(missing)} inventory functions have no ok body: "
                      + ", ".join(hex(a) for a in missing[:10]))
    if extra:
        errors.append(f"{len(extra)} ok bodies are outside the inventory: "
                      + ", ".join(hex(a) for a in extra[:10]))

    if len(functions) != len(inventory):
        errors.append(f"functions.tsv has {len(functions)} rows, inventory has {len(inventory)}")
    no_file = [r["address"] for r in functions if r.get("decompile_file") in ("", "n/a", None)]
    if no_file:
        errors.append(f"{len(no_file)} functions.tsv rows still have no decompile_file")
    bad_path = []
    for r in functions:
        p = DUMP / r["decompile_file"]
        if not p.is_file():
            bad_path.append(f"{r['address']} -> {r['decompile_file']}")
    if bad_path:
        errors.append(f"{len(bad_path)} functions.tsv bodies do not exist: " + ", ".join(bad_path[:5]))

    for name, key in (("callgraph.tsv", "caller"), ("xrefs.tsv", "from")):
        rows = read_tsv(EX / name)
        bad = sorted({r[key] for r in rows if int(r[key], 16) not in inv})
        if bad:
            errors.append(f"{name} has {len(bad)} caller addresses outside the inventory: "
                          + ", ".join(bad[:5]))

    index = read_tsv(DUMP / "decompile" / "_INDEX.tsv")
    stub_count = sum(1 for r in index if r.get("status", "").startswith("incomplete"))
    recovered = len(list((DUMP / "recovered_f30").glob("0x*.c"))) + \
        len(list((DUMP / "renderer").glob("0x*.c")))

    print(f"inventory={len(inventory)} bodies={len(bodies)} functions_rows={len(functions)}")
    print(f"decompile_index={len(index)} unresolved_stubs={stub_count} recovered_bodies={recovered}")
    print(f"callgraph_rows={len(read_tsv(EX / 'callgraph.tsv'))} "
          f"xref_rows={len(read_tsv(EX / 'xrefs.tsv'))}")
    if errors:
        for error in errors:
            print("FAIL " + error)
        return 1
    if stub_count != recovered:
        print(f"FAIL {stub_count} timeout stubs but {recovered} recovered bodies")
        return 1
    print("PASS every inventory function has an ok body; timeout stubs are covered by recovered bodies")
    return 0


if __name__ == "__main__":
    sys.exit(main())
