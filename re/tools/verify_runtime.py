#!/usr/bin/env python3
"""Audit the runtime-memory pass against the live image and dossier manifests."""
from __future__ import annotations

import csv
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXTRACT = ROOT / "re" / "extract"
DUMP = ROOT / "re" / "dump" / "memory"
LIVE = DUMP / "m64_unrelocated.bin"
ORIG = DUMP / "m64_original_virtual.bin"
DATA_RVA = 0x3DA000
PREFERRED = 0x180000000
EXPECTED_DIFF_BYTES = 297352
EXPECTED_DIFF_RANGES = 72199
EXPECTED_PAGES = 340


def read_tsv(name):
    with (EXTRACT / name).open(newline="", encoding="utf-8") as f:
        return list(csv.DictReader(f, delimiter="\t"))


def u64(b, off):
    return int.from_bytes(b[off:off + 8], "little") if off >= 0 and off + 8 <= len(b) else 0


def md5(path):
    h = hashlib.md5()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def main():
    errors = []
    summary = json.loads((EXTRACT / "runtime_summary.json").read_text(encoding="utf-8"))
    source_hashes = {
        "dll_md5": ROOT / "m64.dll",
        "original_virtual_md5": ORIG,
        "unrelocated_md5": LIVE,
        "full_dump_md5": DUMP / "gmod_full_21632.dmp",
    }
    for key, path in source_hashes.items():
        if summary["source"][key] != md5(path):
            errors.append(f"source hash mismatch: {key}")
    live = LIVE.read_bytes()
    orig = ORIG.read_bytes()
    data_size = 0x1EE488
    live_data = live[DATA_RVA:DATA_RVA + data_size]
    orig_data = orig[DATA_RVA:DATA_RVA + data_size]

    diff = [i for i in range(data_size) if live_data[i] != orig_data[i]]
    pages = sorted({(DATA_RVA + i) & ~0xFFF for i in diff})
    if len(diff) != EXPECTED_DIFF_BYTES:
        errors.append(f"diff bytes {len(diff)} != {EXPECTED_DIFF_BYTES}")
    if len(pages) != EXPECTED_PAGES:
        errors.append(f"pages {len(pages)} != {EXPECTED_PAGES}")
    if summary["data_delta"]["diff_bytes"] != len(diff):
        errors.append("summary diff bytes mismatch")
    if summary["data_delta"]["pages"] != len(pages):
        errors.append("summary pages mismatch")

    regions = read_tsv("runtime_regions.tsv")
    imports = read_tsv("runtime_imports.tsv")
    modules = read_tsv("runtime_modules.tsv")
    objects = read_tsv("runtime_objects.tsv")
    vtables = read_tsv("runtime_vtables.tsv")
    strings = read_tsv("runtime_strings.tsv")
    guids = read_tsv("runtime_guids.tsv")
    hooks = read_tsv("runtime_hooks.tsv")

    expected_rows = {
        "runtime_regions.tsv": 340,
        "runtime_imports.tsv": 383,
        "runtime_modules.tsv": 185,
        "runtime_objects.tsv": 54,
        "runtime_vtables.tsv": 5,
        "runtime_strings.tsv": 29,
        "runtime_guids.tsv": 1,
        "runtime_hooks.tsv": 24,
    }
    for name, n in expected_rows.items():
        rows = read_tsv(name)
        if len(rows) != n:
            errors.append(f"{name}: {len(rows)} rows != {n}")

    if sum(int(r["diff_bytes"]) for r in regions) != EXPECTED_DIFF_BYTES:
        errors.append("region diff_bytes do not sum to 297352")
    if sum(int(r["diff_ranges"]) for r in regions) != EXPECTED_DIFF_RANGES:
        errors.append("region diff_ranges do not sum to 72199")
    if sum(int(r["ranges"]) for r in imports) != 386:
        errors.append("import ranges do not sum to 386")
    if sum(1 for r in imports if r["changed"] == "yes") != 383:
        errors.append("not all 383 IAT slots changed")
    if sum(1 for r in imports if r["match"] == "yes") != 383:
        errors.append("not all 383 IAT slots match the original hint/name RVA")
    if sum(1 for r in hooks if r["match"] == "yes") != 24:
        errors.append("not all 24 hooks match the runtime stub")
    if sum(1 for r in vtables if int(r["patched_count"]) > 0) != 5:
        errors.append("not all 5 constructed vtables have patched slots")
    if len({r["classification"] for r in regions}) < 10:
        errors.append("region classification collapsed")

    # Every heap string that has a stored .data pointer must resolve to the
    # object base containing that string.  Six runtime-only literals are
    # temporary c_str() results with no stored pointer; they are reported, not
    # failed.
    unresolved_string_refs = 0
    for r in strings:
        if r["refs"] == "n/a":
            unresolved_string_refs += 1
            continue
        if r["source_kind"] == "data-sso":
            continue
        va = int(r["va"], 16)
        for ref in [x.strip() for x in r["refs"].split(",")]:
            try:
                slot = int(ref, 16)
            except ValueError:
                errors.append(f"{r['id']}: bad ref {ref}")
                continue
            q = u64(live_data, slot - DATA_RVA)
            if not (q and q <= va < q + 0x1000):
                errors.append(f"{r['id']}: ref {ref} -> {q:#x}, string {va:#x} outside object window")

    # No blank cells in any of the 31 TSVs; n/a is allowed.
    all_tsvs = sorted(EXTRACT.glob("*.tsv"))
    if len(all_tsvs) != 31:
        errors.append(f"TSV count {len(all_tsvs)} != 31")
    for p in all_tsvs:
        with p.open(newline="", encoding="utf-8") as f:
            reader = csv.reader(f, delimiter="\t")
            header = next(reader)
            for lineno, row in enumerate(reader, 2):
                if len(row) != len(header) or any(c == "" for c in row):
                    errors.append(f"{p.name}:{lineno}: blank/short row")
                    break

    # Checksums recorded in runtime_summary must match the files on disk.
    for name, meta in summary["outputs"].items():
        p = EXTRACT / name
        if not p.exists():
            errors.append(f"missing output {name}")
            continue
        if md5(p) != meta["md5"]:
            errors.append(f"{name}: md5 mismatch")
        if p.stat().st_size != meta["size"]:
            errors.append(f"{name}: size mismatch")
        if meta["rows"] != len(read_tsv(name)):
            errors.append(f"{name}: summary row count mismatch")

    readme = (EXTRACT / "README.md").read_text(encoding="utf-8")
    if "All **31** TSVs" not in readme:
        errors.append("README does not claim 31 TSVs")
    for cls, count in summary["runtime"]["region_classes"].items():
        if f"| `{cls}` | {count} |" not in readme:
            errors.append(f"README region row missing/stale: {cls}={count}")

    summary_md5 = md5(EXTRACT / "runtime_summary.json")
    for name in ("final_summary.json",):
        data = json.loads((EXTRACT / name).read_text(encoding="utf-8"))
        if data.get("runtime") != summary["runtime"]:
            errors.append(f"{name}: runtime counts differ from runtime_summary")
        if data.get("tsvs") != 31:
            errors.append(f"{name}: tsv count != 31")
        if data.get("runtime_tsvs") != 8:
            errors.append(f"{name}: runtime tsv count != 8")
        if data.get("runtime_summary_md5") != summary_md5:
            errors.append(f"{name}: runtime_summary md5 mismatch")
    for name in ("capture_manifest.json", "mapped_summary.json"):
        data = json.loads((DUMP / name).read_text(encoding="utf-8"))
        if data.get("runtime") != summary["runtime"]:
            errors.append(f"{name}: runtime counts differ from runtime_summary")
        if data.get("runtime_tsvs") != 8:
            errors.append(f"{name}: runtime tsv count != 8")
        if data.get("runtime_summary_md5") != summary_md5:
            errors.append(f"{name}: runtime_summary md5 mismatch")
    mapped = json.loads((DUMP / "mapped_summary.json").read_text(encoding="utf-8"))
    data_section = next(s for s in mapped["sections"] if s["name"] == ".data")
    if data_section["diff_bytes"] != len(diff):
        errors.append("mapped_summary .data diff_bytes mismatch")
    rdata_section = next(s for s in mapped["sections"] if s["name"] == ".rdata")
    if rdata_section["diff_ranges"] != 386:
        errors.append("mapped_summary .rdata diff_ranges != 386")

    print(f"diff bytes={len(diff)} pages={len(pages)} regions={len(regions)}")
    print(f"imports={len(imports)} ranges={sum(int(r['ranges']) for r in imports)}")
    print(f"objects={len(objects)} vtables={len(vtables)} strings={len(strings)} (refs={len(strings)-unresolved_string_refs}, no-ref={unresolved_string_refs}) guids={len(guids)} hooks={len(hooks)} modules={len(modules)}")
    print(f"region classes={len({r['classification'] for r in regions})}")
    if errors:
        print("FAIL")
        for e in errors:
            print(" -", e)
        return 1
    print("PASS: runtime TSVs, summary hashes, manifest counts and string refs are consistent")
    return 0


if __name__ == "__main__":
    sys.exit(main())
