#!/usr/bin/env python3
"""Summarize compiler-admitted and rejected cast sites in the generated corpus.

The table is derived from the final generated chunks after
`gen_reconstructed_source.py` has run.  It records, per site type, how many
expressions contain an explicit `static_cast`/`reinterpret_cast` admitted by
the recovered declaration evidence, and how many TODOs carry each rejection
reason.
"""

from __future__ import annotations

import csv
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CHUNKS = ROOT / "src" / "reconstructed" / "chunks"
OUTPUT = ROOT / "re" / "dump" / "cast_report.tsv"

COND_RE = re.compile(r'trace\.(?:checked_condition|checked_loop_condition|checked_switch|checked_loop)\("[^"]*",\s*\[&\]\(\) -> (?:bool|std::size_t) \{ return (?:static_cast<bool>|static_cast<std::size_t>)?\(?(.*)\)?; \}\)')
CALL_RE = re.compile(r'trace\.call_arguments\("([^"]*)",?\s*(.*?)\);')
REASON_RE = re.compile(r"\[reason: ([^\]]+)\]")


def main() -> int:
    if not CHUNKS.exists():
        raise SystemExit(f"missing {CHUNKS}")
    rows: list[list[str]] = [["site_type", "decision", "reason", "count"]]
    admitted = Counter()
    rejected = Counter()

    for path in sorted(CHUNKS.glob("chunk_*.cpp")):
        for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
            match = COND_RE.search(line)
            if match:
                expression = match.group(1)
                if "reinterpret_cast<" in expression:
                    admitted[("condition", "declared pointer-to-64-bit integer")] += 1
                elif re.search(r"static_cast<(?!bool)[^>]+>", expression):
                    admitted[("condition", "declared scalar or indexed element")] += 1
                continue
            match = CALL_RE.search(line)
            if match:
                arguments = match.group(2)
                if match.group(1) in ("load_bits32", "load_bits16"):
                    admitted[("call", "table-admitted vector/register slot")] += 1
                elif "reinterpret_cast<" in arguments:
                    admitted[("call", "declared pointer-to-64-bit integer")] += 1
                elif re.search(r"static_cast<(?!bool)[^>]+>", arguments):
                    admitted[("call", "declared scalar or indexed element")] += 1
                continue
            if "// TODO: condition expression type not recovered:" in line:
                reason = REASON_RE.search(line)
                rejected[("condition", reason.group(1) if reason else "ambiguous operand type")] += 1
            elif "// TODO: call arguments not type-recovered for " in line:
                reason = REASON_RE.search(line)
                rejected[("call", reason.group(1) if reason else "ambiguous operand type")] += 1

    for site_type in ("condition", "call"):
        for (kind, reason), count in sorted(admitted.items()):
            if kind == site_type:
                rows.append([site_type, "admitted", reason, str(count)])
        for (kind, reason), count in sorted(rejected.items()):
            if kind == site_type:
                rows.append([site_type, "rejected", reason, str(count)])

    OUTPUT.write_text(
        "\n".join("\t".join(row) for row in rows) + "\n",
        encoding="utf-8",
        newline="\n",
    )
    print(f"wrote {len(rows) - 1} cast evidence rows to {OUTPUT}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
