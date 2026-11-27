#!/usr/bin/env python3
"""Mine constant-offset field access shapes from m64.dll.

`mine_data_types.py` resolves RIP-relative globals.  This companion mines
constant displacements off non-stack base registers: for every function in the
inventory, each `[base + disp]` access is grouped by the base register and the
displacement.  A field row is emitted only when every observed access to that
function/base/offset agrees on one width and kind, mirroring the global-data
rule.

The output is evidence for the reconstructed source and the review report.  It
is deterministic and is not needed at build time.
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
        "mine_field_types.py requires pefile and capstone; install them before mining"
    ) from error

ROOT = Path(__file__).resolve().parents[2]
DLL = ROOT / "m64.dll"
INVENTORY = ROOT / "re" / "dump" / "inventory.tsv"
OUTPUT = ROOT / "re" / "dump" / "field_types.tsv"

FLOAT_MNEMONICS = (
    "movss", "addss", "subss", "mulss", "divss", "minss", "maxss",
    "sqrtss", "comiss", "ucomiss", "cvtss",
)
DOUBLE_MNEMONICS = (
    "movsd", "addsd", "subsd", "mulsd", "divsd", "minsd", "maxsd",
    "sqrtsd", "comisd", "ucomisd", "cvtsd",
)
STACK_BASES = {"rsp", "esp", "rbp", "ebp"}


def kind_for(mnemonic: str, width: int) -> str:
    if width == 4 and any(prefix in mnemonic for prefix in FLOAT_MNEMONICS):
        return "float"
    if width == 8 and any(prefix in mnemonic for prefix in DOUBLE_MNEMONICS):
        return "double"
    return "int"


def main() -> int:
    if not DLL.exists():
        raise SystemExit(f"missing {DLL}")
    if not INVENTORY.exists():
        raise SystemExit(f"missing {INVENTORY}")

    pe = pefile.PE(str(DLL), fast_load=True)
    image_base = pe.OPTIONAL_HEADER.ImageBase
    rows = list(csv.DictReader(INVENTORY.open(encoding="utf-8"), delimiter="\t"))
    rows.sort(key=lambda row: int(row["address"], 16))
    disassembler = Cs(CS_ARCH_X86, CS_MODE_64)
    disassembler.detail = True
    accesses: dict[tuple[str, str, int], Counter[tuple[int, str]]] = defaultdict(Counter)
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
                if memory.base in (0, X86_REG_RIP) or memory.index != 0:
                    continue
                base = instruction.reg_name(memory.base)
                if not base or base in STACK_BASES:
                    continue
                if memory.disp < 0 or memory.disp > 0x100000:
                    continue
                width = operand.size
                if width not in (1, 2, 4, 8):
                    continue
                accesses[(row["address"], base, memory.disp)][
                    (width, kind_for(instruction.mnemonic, width))
                ] += 1

    output = [["function", "base", "offset", "width", "kind", "accesses"]]
    for (function, base, offset), candidates in sorted(accesses.items()):
        if len(candidates) != 1:
            continue
        (width, kind), count = next(iter(candidates.items()))
        output.append([function, base, f"0x{offset:x}", str(width), kind, str(count)])

    OUTPUT.write_text(
        "\n".join("\t".join(row) for row in output) + "\n",
        encoding="utf-8",
        newline="\n",
    )
    print(
        f"mined {len(output) - 1} consistent field slots from "
        f"{len(seen)} instructions"
    )
    return 0


if __name__ == "__main__":
    sys.exit(main())
