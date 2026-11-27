#!/usr/bin/env python3
"""Mine durable per-slot and multi-use agreement tables from decompiler dumps.

The tables are evidence, not guesses: every row is derived from a declaration,
a typed-global record, or an explicit dereference in the recorded decompiler
body.  A record with more than one candidate is written as a conflict and is
never admitted by the generator.
"""
from __future__ import annotations

import csv
import re
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
DECOMPILE = ROOT / "re" / "dump" / "decompile"
DATA_TYPES = ROOT / "re" / "dump" / "data_types.tsv"
FIELD_TYPES = ROOT / "re" / "dump" / "field_types.tsv"
OUT_SLOTS = ROOT / "re" / "dump" / "slot_types.tsv"
OUT_GLOBALS = ROOT / "re" / "dump" / "global_agreement.tsv"
OUT_POINTERS = ROOT / "re" / "dump" / "pointer_agreement.tsv"

TYPE_ALIASES = {
    "undefined": "std::uint8_t", "undefined1": "std::uint8_t",
    "undefined2": "std::uint16_t", "undefined4": "std::uint32_t",
    "undefined8": "std::uint64_t", "byte": "std::uint8_t",
    "uchar": "std::uint8_t", "ushort": "std::uint16_t",
    "uint": "std::uint32_t", "ulong": "std::uint32_t",
    "ulonglong": "std::uint64_t", "longlong": "std::int64_t",
    "int": "std::int32_t", "long": "std::int64_t",
    "short": "std::int16_t", "char": "char", "bool": "bool",
    "float": "float", "double": "double", "size_t": "std::size_t",
    "ssize_t": "std::ptrdiff_t", "uintptr_t": "std::uintptr_t",
    "intptr_t": "std::intptr_t", "wchar_t": "wchar_t",
    "WCHAR": "wchar_t", "CHAR": "char", "SHORT": "std::int16_t",
    "USHORT": "std::uint16_t", "INT": "int", "LONG": "std::int32_t",
    "DWORD": "std::uint32_t", "UINT": "std::uint32_t",
    "BYTE": "std::uint8_t", "WORD": "std::uint16_t",
    "SIZE_T": "std::size_t", "INT_PTR": "std::intptr_t",
    "UINT_PTR": "std::uintptr_t", "LSTATUS": "std::int32_t",
    "sbyte": "std::int8_t", "__uint64": "std::uint64_t",
    "__time64_t": "std::int64_t", "__int64": "std::int64_t",
}
WIDTHS = {
    "std::uint8_t": 1, "std::int8_t": 1, "char": 1, "bool": 1,
    "std::uint16_t": 2, "std::int16_t": 2, "wchar_t": 2,
    "std::uint32_t": 4, "std::int32_t": 4, "float": 4, "int": 4,
    "std::uint64_t": 8, "std::int64_t": 8, "double": 8,
    "std::uintptr_t": 8, "std::intptr_t": 8, "std::size_t": 8,
    "std::ptrdiff_t": 8,
}
SLOT_NAME = re.compile(r"^(?:auVar|extraout_|in_|unaff_)")
DECL = re.compile(
    r"^\s*([A-Za-z_][A-Za-z0-9_ ]*?)(\s*\*+\s*|\s+)"
    r"([A-Za-z_][A-Za-z0-9_]*)(?:\s*\[\s*(\d+)\s*\])?\s*;\s*$"
)


def cpp_type(text: str) -> str | None:
    cleaned = re.sub(r"\s+", " ", text.strip())
    stars = cleaned.count("*")
    base = cleaned.replace("*", "").strip()
    mapped = TYPE_ALIASES.get(base)
    if not mapped:
        return None
    if stars:
        mapped = f"{mapped} " + "*" * stars
    return mapped


def function_name(text: str) -> str:
    for line in text.splitlines()[:4]:
        match = re.match(r"//\s+0x[0-9A-Fa-f]+\s+(\S+)", line.strip())
        if match:
            return match.group(1)
    return "unknown"


def load_data_types() -> dict[int, tuple[int, str]]:
    rows: dict[int, tuple[int, str]] = {}
    if not DATA_TYPES.exists():
        return rows
    with DATA_TYPES.open(encoding="utf-8", newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            try:
                rows[int(row["address"], 16)] = (int(row["width"]), row["kind"])
            except (KeyError, ValueError):
                continue
    return rows


def mine_slots() -> None:
    candidates: dict[tuple[str, str], set[str]] = defaultdict(set)
    declarations: Counter[tuple[str, str]] = Counter()
    for path in sorted(DECOMPILE.glob("*.c")):
        text = path.read_text(encoding="utf-8", errors="replace")
        function = function_name(text)
        for line in text.splitlines():
            match = DECL.match(line)
            if not match:
                continue
            name = match.group(3)
            if not SLOT_NAME.match(name):
                continue
            pointer_part = match.group(2)
            type_text = match.group(1).strip()
            if "*" in pointer_part:
                type_text += " " + "*" * pointer_part.count("*")
            mapped = cpp_type(type_text)
            if not mapped:
                continue
            count = int(match.group(4)) if match.group(4) else 1
            candidates[(function, name)].add(f"{mapped}|{count}")
            declarations[(function, name)] += 1

    with OUT_SLOTS.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.writer(handle, delimiter="\t", lineterminator="\n")
        writer.writerow(["function", "slot", "family", "element_type", "element_count",
                         "declarations", "status", "candidates"])
        for (function, name), shapes in sorted(candidates.items()):
            ordered = sorted(shapes)
            family = "vector" if name.startswith("auVar") else "register"
            if len(ordered) == 1:
                element_type, count = ordered[0].rsplit("|", 1)
                writer.writerow([function, name, family, element_type, count,
                                 declarations[(function, name)], "admissible", ordered[0]])
            else:
                writer.writerow([function, name, family, "", "", declarations[(function, name)],
                                 "conflict", ",".join(ordered)])


def mine_globals() -> None:
    data_types = load_data_types()
    uses: Counter[str] = Counter()
    candidates: dict[str, set[str]] = defaultdict(set)
    details: dict[str, set[str]] = defaultdict(set)
    for path in sorted(DECOMPILE.glob("*.c")):
        text = path.read_text(encoding="utf-8", errors="replace")
        for match in re.finditer(r"\b_?(DAT_[0-9A-Fa-f]+)\b", text):
            symbol = match.group(1)
            uses[symbol] += 1
            address = int(symbol.rsplit("_", 1)[1], 16)
            record = data_types.get(address)
            if record:
                width, kind = record
                candidates[symbol].add(f"{kind}{width}")
                details[symbol].add(f"data_types:0x{address:x}:{kind}{width}")
        # Ghidra's synthetic subfield spelling exposes additional observed widths.
        for match in re.finditer(r"\b_?(DAT_[0-9A-Fa-f]+)\._([0-9A-Fa-f]+)_([0-9A-Fa-f]+)_", text):
            symbol, offset, width = match.group(1), int(match.group(2), 16), int(match.group(3), 16)
            candidates[symbol].add(f"field{width}")
            details[symbol].add(f"subfield:0x{offset:x}:field{width}")

    with OUT_GLOBALS.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.writer(handle, delimiter="\t", lineterminator="\n")
        writer.writerow(["symbol", "address", "uses", "unique_type", "unique_width",
                         "status", "detail"])
        for symbol in sorted(uses, key=lambda name: int(name.rsplit("_", 1)[1], 16)):
            address = int(symbol.rsplit("_", 1)[1], 16)
            shapes = sorted(candidates[symbol])
            record = data_types.get(address)
            if len(shapes) == 1 and record:
                width, kind = record
                writer.writerow([symbol, f"0x{address:x}", uses[symbol], kind, width,
                                 "consistent", ";".join(sorted(details[symbol]))])
            elif len(shapes) > 1:
                writer.writerow([symbol, f"0x{address:x}", uses[symbol], "", "",
                                 "conflict", ";".join(sorted(details[symbol]))])
            else:
                writer.writerow([symbol, f"0x{address:x}", uses[symbol], "", "",
                                 "no-record", ""])


def mine_pointers() -> None:
    uses: dict[str, set[str]] = defaultdict(set)
    details: dict[str, set[str]] = defaultdict(set)
    counts: Counter[str] = Counter()
    # A dereference records the pointee type and the expression's cast depth.
    pattern = re.compile(r"\*\(([A-Za-z_][A-Za-z0-9_ ]*\*+)\)\s*\(([A-Za-z_][A-Za-z0-9_]*)")
    for path in sorted(DECOMPILE.glob("*.c")):
        text = path.read_text(encoding="utf-8", errors="replace")
        for match in pattern.finditer(text):
            pointee = cpp_type(match.group(1).rstrip("*"))
            name = match.group(2)
            if not pointee:
                continue
            uses[name].add(pointee)
            details[name].add(f"{path.name}:{pointee}")
            counts[name] += 1
    with OUT_POINTERS.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.writer(handle, delimiter="\t", lineterminator="\n")
        writer.writerow(["pointer", "uses", "unique_pointee", "status", "detail"])
        for name in sorted(uses):
            shapes = sorted(uses[name])
            if len(shapes) == 1:
                writer.writerow([name, counts[name], shapes[0], "consistent",
                                 ";".join(sorted(details[name]))])
            else:
                writer.writerow([name, counts[name], "", "conflict",
                                 ";".join(sorted(details[name]))])


def main() -> None:
    mine_slots()
    mine_globals()
    mine_pointers()
    print(f"wrote {OUT_SLOTS.relative_to(ROOT)}")
    print(f"wrote {OUT_GLOBALS.relative_to(ROOT)}")
    print(f"wrote {OUT_POINTERS.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
