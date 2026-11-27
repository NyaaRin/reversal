#!/usr/bin/env python3
"""Normalize and diff the live m64.dll image captured by memdump.exe.

The manual mapper places the image at a random base and applies base
relocations. This script:
  1. subtracts the load delta using the image's own .reloc table;
  2. rebuilds the preferred-base virtual image from the original file;
  3. writes a byte-range diff report (text/rdata/pdata/rsrc/reloc) plus a
     .data summary.

Usage:
  py -3 re/tools/analyze_memdump.py \
      --mapped re/dump/memory/m64_mapped.bin \
      --original m64.dll \
      --info re/dump/memory/dump_info.txt \
      --outdir re/dump/memory
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
from pathlib import Path


def parse_pe(data: bytes):
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    machine = struct.unpack_from("<H", data, pe + 4)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    opt_size = struct.unpack_from("<H", data, pe + 20)[0]
    opt = pe + 24
    magic = struct.unpack_from("<H", data, opt)[0]
    if magic != 0x20B:
        raise ValueError("not a PE32+ image")
    image_base = struct.unpack_from("<Q", data, opt + 24)[0]
    size_image = struct.unpack_from("<I", data, opt + 56)[0]
    size_headers = struct.unpack_from("<I", data, opt + 60)[0]
    sec_table = opt + opt_size
    sections = []
    for i in range(nsec):
        o = sec_table + i * 40
        name = data[o:o + 8].split(b"\0")[0].decode("latin1")
        vs, va, rs, ro = struct.unpack_from("<IIII", data, o + 8)
        sections.append({
            "name": name, "va": va, "vs": vs, "raw": ro, "rs": rs,
        })
    return {
        "pe": pe, "opt": opt, "machine": machine, "image_base": image_base,
        "size_image": size_image, "size_headers": size_headers,
        "sections": sections,
    }


def read_mapped_base(info_path: Path) -> int:
    text = info_path.read_text(encoding="utf-8", errors="replace")
    m = re.search(r"mapped_base=0x([0-9a-fA-F]+)", text)
    if not m:
        raise ValueError(f"no mapped_base in {info_path}")
    return int(m.group(1), 16)


def apply_relocations(mapped: bytes, pe: dict, delta: int) -> bytes:
    out = bytearray(mapped)
    reloc = next((s for s in pe["sections"] if s["name"] == ".reloc"), None)
    if reloc is None:
        raise ValueError("no .reloc section")
    start = reloc["va"]
    end = start + reloc["vs"]
    o = start
    applied = 0
    while o + 8 <= end:
        page_va, block_size = struct.unpack_from("<II", out, o)
        if block_size < 8 or o + block_size > end:
            break
        for j in range(8, block_size, 2):
            entry = struct.unpack_from("<H", out, o + j)[0]
            typ = entry >> 12
            off = entry & 0x0FFF
            if typ == 10:  # IMAGE_REL_BASED_DIR64
                target = page_va + off
                if target + 8 <= len(out):
                    value = struct.unpack_from("<Q", out, target)[0]
                    value = (value - delta) & 0xFFFFFFFFFFFFFFFF
                    struct.pack_into("<Q", out, target, value)
                    applied += 1
        o += block_size
    print(f"relocations applied: {applied}")
    return bytes(out)


def build_original_virtual(original: bytes, pe: dict) -> bytes:
    out = bytearray(pe["size_image"])
    n = min(pe["size_headers"], len(original), len(out))
    out[:n] = original[:n]
    for s in pe["sections"]:
        n = min(s["rs"], s["vs"], len(original) - s["raw"], len(out) - s["va"])
        if n > 0:
            out[s["va"]:s["va"] + n] = original[s["raw"]:s["raw"] + n]
    return bytes(out)


def parse_iat_rvas(original_virtual: bytes, pe: dict) -> set[int]:
    """Return the RVAs of every 8-byte import-address-table slot."""
    opt = pe["opt"]
    import_rva, import_size = struct.unpack_from(
        "<II", original_virtual, opt + 112 + 8)
    slots: set[int] = set()
    if not import_rva or not import_size:
        return slots
    o = import_rva
    for _ in range(import_size // 20 + 1):
        if o + 20 > len(original_virtual):
            break
        original_thunk, timestamp, forwarder, name_rva, first_thunk = \
            struct.unpack_from("<IIIII", original_virtual, o)
        if not any((original_thunk, timestamp, forwarder, name_rva, first_thunk)):
            break
        iat = first_thunk
        for _ in range(65536):
            if iat + 8 > len(original_virtual):
                break
            value = struct.unpack_from("<Q", original_virtual, iat)[0]
            if value == 0:
                break
            slots.add(iat)
            iat += 8
        o += 20
    return slots


def diff_ranges(a: bytes, b: bytes, limit: int | None = None):
    ranges = []
    i = 0
    n = min(len(a), len(b))
    while i < n:
        if a[i] == b[i]:
            i += 1
            continue
        j = i + 1
        while j < n and a[j] != b[j]:
            j += 1
        ranges.append((i, j - i))
        if limit is not None and len(ranges) >= limit:
            break
        i = j
    return ranges


def main() -> int:
    here = Path(__file__).resolve().parent
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--mapped", type=Path,
                    default=here.parent / "dump/memory/m64_mapped.bin")
    ap.add_argument("--original", type=Path, default=here.parents[1] / "m64.dll")
    ap.add_argument("--info", type=Path,
                    default=here.parent / "dump/memory/dump_info.txt")
    ap.add_argument("--outdir", type=Path,
                    default=here.parent / "dump/memory")
    args = ap.parse_args()

    mapped = args.mapped.read_bytes()
    original = args.original.read_bytes()
    pe = parse_pe(mapped)
    mapped_base = read_mapped_base(args.info)
    delta = (mapped_base - pe["image_base"]) & 0xFFFFFFFFFFFFFFFF
    print(f"mapped base 0x{mapped_base:X}; preferred 0x{pe['image_base']:X}; "
          f"delta 0x{delta:X}")

    unrelocated = apply_relocations(mapped, pe, delta)
    unreloc_path = args.outdir / "m64_unrelocated.bin"
    unreloc_path.write_bytes(unrelocated)

    original_virtual = build_original_virtual(original, pe)
    original_virtual_path = args.outdir / "m64_original_virtual.bin"
    original_virtual_path.write_bytes(original_virtual)

    iat_slots = parse_iat_rvas(original_virtual, pe)
    reconstructed = bytearray(unrelocated)
    for slot in iat_slots:
        reconstructed[slot:slot + 8] = original_virtual[slot:slot + 8]
    reconstructed_path = args.outdir / "m64_reconstructed.bin"

    rows = []
    summary = {
        "mapped": str(args.mapped),
        "original": str(args.original),
        "mapped_base": f"0x{mapped_base:X}",
        "preferred_base": f"0x{pe['image_base']:X}",
        "delta": f"0x{delta:X}",
        "size_of_image": pe["size_image"],
        "mapped_md5": hashlib.md5(mapped).hexdigest(),
        "unrelocated_md5": hashlib.md5(unrelocated).hexdigest(),
        "original_virtual_md5": hashlib.md5(original_virtual).hexdigest(),
        "iat_slots": len(iat_slots),
        "sections": [],
    }
    for s in pe["sections"]:
        va, vs = s["va"], s["vs"]
        if va >= len(unrelocated):
            continue
        a = original_virtual[va:va + vs]
        b = unrelocated[va:va + vs]
        ranges = diff_ranges(a, b)
        diff_bytes = sum(length for _, length in ranges)
        entry = {
            "name": s["name"], "rva": f"0x{va:X}", "size": vs,
            "diff_ranges": len(ranges), "diff_bytes": diff_bytes,
        }
        summary["sections"].append(entry)
        if s["name"] == ".data":
            continue
        for off, length in ranges:
            orig_hex = a[off:off + min(length, 32)].hex()
            map_hex = b[off:off + min(length, 32)].hex()
            kind = "runtime-patch"
            if s["name"] == ".text":
                first = b[off] if off < len(b) else 0
                if first == 0xE9:
                    kind = "hook-jmp-rel32"
                elif first == 0xEB:
                    kind = "hook-jmp-rel8"
                elif first == 0xFF:
                    kind = "hook-indirect"
                elif first == 0xCC:
                    kind = "int3-patch"
            elif s["name"] == ".rdata":
                absolute = va + off
                import_window = None
                for start in range(max(0, off - 7), off + 1):
                    if start + 8 > len(a) or start + 8 > len(b):
                        continue
                    orig_val = struct.unpack_from("<Q", a, start)[0]
                    map_val = struct.unpack_from("<Q", b, start)[0]
                    if (orig_val < pe["size_image"] and
                            map_val >= pe["image_base"] + pe["size_image"]):
                        import_window = start
                        break
                if import_window is not None:
                    kind = "import-thunk-resolution"
                    reconstructed[va + import_window:va + import_window + 8] = \
                        a[import_window:import_window + 8]
                elif all((absolute + k) in iat_slots for k in range(length)):
                    kind = "iat-resolution"
                else:
                    kind = "rdata-runtime-diff"
            rows.append([
                s["name"], f"0x{pe['image_base'] + va + off:X}",
                f"0x{va + off:X}", length,
                orig_hex, map_hex, kind,
            ])

    reconstructed_path.write_bytes(reconstructed)
    summary["reconstructed_md5"] = hashlib.md5(reconstructed).hexdigest()

    diff_path = args.outdir / "mapped_diff.tsv"
    with diff_path.open("w", encoding="utf-8", newline="") as f:
        f.write("section\tva\trva\tlength\toriginal_hex\tmapped_hex\tkind\n")
        for row in rows:
            f.write("\t".join(str(x) for x in row) + "\n")
    summary["diff_rows"] = len(rows)
    summary["diff_report"] = str(diff_path)
    summary["unrelocated_image"] = str(unreloc_path)
    summary["original_virtual"] = str(original_virtual_path)
    summary["reconstructed_image"] = str(reconstructed_path)
    (args.outdir / "mapped_summary.json").write_text(
        json.dumps(summary, indent=1) + "\n", encoding="utf-8")

    print(json.dumps(summary, indent=1))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
