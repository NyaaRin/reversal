#!/usr/bin/env python3
"""Reproduce the three decoded m64.dll 57 BC fonts from the raw containers.

Usage:
    py -3 re/extract/decode_containers.py
    py -3 re/extract/decode_containers.py --assets re/extract/assets \
        --out re/extract/assets/decoded

The decoder is byte-exact: it implements the stb_compress token grammar used
by FUN_18029FF10 / FUN_1802A04E0, checks the 05 FA end marker and the trailing
Adler-32, then validates every decoded sfnt table checksum and the head
checkSumAdjustment. It does not patch or special-case any output.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path

from stb_container import (
    ContainerError, classify_blob, decompress, parse_sfnt, pe_sections,
    scan_tail,
)


def main() -> int:
    here = Path(__file__).resolve().parent
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--assets", type=Path, default=here / "assets")
    ap.add_argument("--out", type=Path, default=here / "assets/decoded")
    ap.add_argument("--json", type=Path, default=here / "assets/decoded/decoded_manifest.json")
    args = ap.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)

    dll_path = here.parents[1] / "m64.dll"
    dll = dll_path.read_bytes() if dll_path.exists() else None
    sections = pe_sections(dll) if dll else []
    blobs = sorted(args.assets.glob("font_blob_*.bin"))
    if not blobs:
        raise SystemExit(f"no font_blob_*.bin under {args.assets}")
    manifest = []
    for blob in blobs:
        raw = blob.read_bytes()
        blob_offset = int(blob.stem.rsplit("_", 1)[-1], 16)
        try:
            output, stats = decompress(raw)
        except ContainerError as exc:
            raise SystemExit(f"{blob.name}: {exc}") from exc
        info = parse_sfnt(output)
        if not (info["table_checksums_ok"] and info["checksum_adjustment_ok"]):
            raise SystemExit(f"{blob.name}: sfnt checksum validation failed")
        regions = classify_blob(
            raw, blob_offset, stats, sections, image_data=dll,
        )
        if sum(r["length"] for r in regions) != len(raw):
            raise SystemExit(f"{blob.name}: region lengths do not sum to blob length")
        scan = scan_tail(raw, stats["consumed"], len(raw), sections)
        target = args.out / (blob.stem + ".ttf")
        target.write_bytes(output)
        record = {
            "container": blob.name,
            "container_size": len(raw),
            "container_md5": hashlib.md5(raw).hexdigest(),
            "stream_size": stats["consumed"],
            "stream_md5": hashlib.md5(raw[:stats["consumed"]]).hexdigest(),
            "post_stream_size": len(raw) - stats["consumed"],
            "uncompressed_size": stats["uncompressed_size"],
            "trailing_bytes_after_stream": len(raw) - stats["consumed"],
            "region_bytes_sum": sum(r["length"] for r in regions),
            "regions": [
                {
                    "region": r["region"], "offset": r["offset"],
                    "length": r["length"], "kind": r["kind"],
                    "evidence": r["evidence"],
                }
                for r in regions
            ],
            "post_stream_kind": ";".join(
                f"{r['kind']}:{r['length']}" for r in regions[1:]
            ) or "none",
            "recognized_assets": scan["recognized_assets"],
            "magic_scan": scan["summary"],
            "tokens": stats["tokens"],
            "literal_tokens": stats["literal_tokens"],
            "match_tokens": stats["match_tokens"],
            "literal_bytes": stats["literal_bytes"],
            "match_bytes": stats["match_bytes"],
            "max_match_distance": stats["max_distance"],
            "stored_adler32": f"{stats['stored_adler']:08x}",
            "computed_adler32": f"{stats['computed_adler']:08x}",
            "end_marker_offset": stats["end_offset"],
            "font": target.name,
            "family": info["family"],
            "full_name": info["full"],
            "version": info["version"],
            "glyphs": info["num_glyphs"],
            "cmap_mappings": info["cmap_mappings"],
            "tables": info["num_tables"],
            "units_per_em": info["units_per_em"],
            "table_checksums_ok": info["table_checksums_ok"],
            "checksum_adjustment_ok": info["checksum_adjustment_ok"],
            "md5": info["md5"],
        }
        manifest.append(record)
        print(
            f"{blob.name} ({len(raw)}B, stream {stats['consumed']}B, "
            f"tail {len(raw) - stats['consumed']}B) -> {target.name}: "
            f"{stats['uncompressed_size']} bytes, "
            f"{info['num_glyphs']} glyphs, {info['cmap_mappings']} cmap mappings, "
            f"tables={info['num_tables']}, checksums=ok, adler={stats['stored_adler']:08x}"
        )
    args.json.parent.mkdir(parents=True, exist_ok=True)
    args.json.write_text(json.dumps(manifest, indent=1) + "\n", encoding="utf-8")
    print(f"wrote {args.json} ({len(manifest)} containers)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
