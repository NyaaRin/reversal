#!/usr/bin/env python3
"""Mine global-data access shapes from m64.dll.

Ghidra's DAT_/UNK_/PTR_ labels name storage but the decompiler text does not
retain its width.  The machine code does: every non-LEA memory operand that
addresses a global has an operand width, and SSE scalar loads/stores identify
float and double slots.  A symbol is emitted only when every observed access
agrees on one width and kind; conflicting or address-only symbols are omitted
so the generator leaves them as explicit TODOs.

The output is a deterministic evidence table consumed by
gen_reconstructed_source.py.  This script is a mining tool, not part of the
build: the generated table is committed alongside the reconstruction.
"""

from __future__ import annotations

import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

try:
    import pefile
    from capstone import CS_ARCH_X86, CS_MODE_64, Cs
    from capstone.x86 import X86_OP_MEM, X86_REG_RIP
except ImportError as error:  # pragma: no cover - operator setup error
    raise SystemExit(
        "mine_data_types.py requires pefile and capstone; install them before mining"
    ) from error

ROOT = Path(__file__).resolve().parents[2]
DLL = ROOT / "m64.dll"
INVENTORY = ROOT / "re" / "dump" / "inventory.tsv"
OUTPUT = ROOT / "re" / "dump" / "data_types.tsv"

FLOAT_MNEMONICS = (
    "movss",
    "addss",
    "subss",
    "mulss",
    "divss",
    "minss",
    "maxss",
    "sqrtss",
    "comiss",
    "ucomiss",
    "cvtss",
)
DOUBLE_MNEMONICS = (
    "movsd",
    "addsd",
    "subsd",
    "mulsd",
    "divsd",
    "minsd",
    "maxsd",
    "sqrtsd",
    "comisd",
    "ucomisd",
    "cvtsd",
)


def kind_for(mnemonic: str, width: int) -> str:
    if width == 4 and any(mnemonic.startswith(prefix) or prefix in mnemonic for prefix in FLOAT_MNEMONICS):
        return "float"
    if width == 8 and any(mnemonic.startswith(prefix) or prefix in mnemonic for prefix in DOUBLE_MNEMONICS):
        return "double"
    return "int"


def main() -> int:
    if not DLL.exists():
        raise SystemExit(f"missing {DLL}")
    if not INVENTORY.exists():
        raise SystemExit(f"missing {INVENTORY}")

    pe = pefile.PE(str(DLL), fast_load=True)
    image_base = pe.OPTIONAL_HEADER.ImageBase
    image_end = image_base + pe.OPTIONAL_HEADER.SizeOfImage
    text_ranges = []
    for section in pe.sections:
        start = image_base + section.VirtualAddress
        end = start + max(section.Misc_VirtualSize, section.SizeOfRawData)
        if section.Name.rstrip(b"\x00") == b".text":
            text_ranges.append((start, end))

    def in_text(address: int) -> bool:
        return any(start <= address < end for start, end in text_ranges)

    rows = list(csv.DictReader(INVENTORY.open(encoding="utf-8"), delimiter="\t"))
    rows.sort(key=lambda row: int(row["address"], 16))
    disassembler = Cs(CS_ARCH_X86, CS_MODE_64)
    disassembler.detail = True
    accesses: dict[int, Counter[tuple[int, str]]] = defaultdict(Counter)
    seen: set[int] = set()

    for row in rows:
        address = int(row["address"], 16)
        size = int(row["size"])
        rva = address - image_base
        if rva < 0:
            continue
        code = pe.get_data(rva, size)
        if not code:
            continue
        for instruction in disassembler.disasm(code, address):
            if instruction.address in seen:
                continue
            seen.add(instruction.address)
            if instruction.mnemonic == "lea":
                continue
            for operand in instruction.operands:
                if operand.type != X86_OP_MEM:
                    continue
                memory = operand.mem
                if memory.base == X86_REG_RIP:
                    target = instruction.address + instruction.size + memory.disp
                elif memory.base == 0 and memory.index == 0:
                    target = memory.disp
                else:
                    continue
                if not (image_base <= target < image_end) or in_text(target):
                    continue
                width = operand.size
                if width not in (1, 2, 4, 8):
                    continue
                accesses[target][(width, kind_for(instruction.mnemonic, width))] += 1

    output = [["address", "width", "kind", "accesses"]]
    for target in sorted(accesses):
        candidates = accesses[target]
        if len(candidates) != 1:
            continue
        (width, kind), count = next(iter(candidates.items()))
        output.append([f"0x{target:x}", str(width), kind, str(count)])

    OUTPUT.write_text(
        "\n".join("\t".join(row) for row in output) + "\n",
        encoding="utf-8",
        newline="\n",
    )
    print(f"mined {len(output) - 1} consistent global slots from {len(seen)} instructions")
    return 0


if __name__ == "__main__":
    sys.exit(main())
