#!/usr/bin/env python3
"""Check complete inventory-to-source coverage for the reconstructed tree."""

from __future__ import annotations

import hashlib
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXTRACT = ROOT / "re" / "extract"
DUMP = ROOT / "re" / "dump"
OUT = ROOT / "src" / "reconstructed"
COVERAGE = OUT / "coverage.tsv"
CHUNKS = OUT / "chunks"

EXPECTED_COUNT = 7656


def normalize(text: str) -> str:
    return text.replace("\r\n", "\n").replace("\r", "\n")


def read_tsv(path: Path) -> tuple[list[str], list[dict[str, str]]]:
    lines = path.read_text(encoding="utf-8").splitlines()
    if not lines:
        raise ValueError(f"empty TSV: {path}")
    header = lines[0].split("\t")
    rows: list[dict[str, str]] = []
    for line in lines[1:]:
        fields = line.split("\t")
        if len(fields) != len(header):
            raise ValueError(f"malformed row in {path}: {line[:160]!r}")
        rows.append(dict(zip(header, fields)))
    return header, rows


def main() -> int:
    errors: list[str] = []
    _, inventory = read_tsv(EXTRACT / "functions.tsv")
    _, coverage = read_tsv(COVERAGE)

    if len(inventory) != EXPECTED_COUNT:
        errors.append(f"inventory count {len(inventory)} != {EXPECTED_COUNT}")
    if len(coverage) != len(inventory):
        errors.append(f"coverage count {len(coverage)} != inventory count {len(inventory)}")

    inv_by_address = {row["address"].lower(): row for row in inventory}
    if len(inv_by_address) != len(inventory):
        errors.append("inventory contains duplicate addresses")

    cov_by_address: dict[str, dict[str, str]] = {}
    for row in coverage:
        address = row["address"].lower()
        if address in cov_by_address:
            errors.append(f"duplicate coverage address {address}")
        cov_by_address[address] = row

    missing = sorted(set(inv_by_address) - set(cov_by_address), key=lambda value: int(value, 16))
    extra = sorted(set(cov_by_address) - set(inv_by_address), key=lambda value: int(value, 16))
    if missing:
        errors.append(f"unmapped addresses: {len(missing)} (first: {missing[0]})")
    if extra:
        errors.append(f"coverage addresses absent from inventory: {len(extra)} (first: {extra[0]})")

    header_text = (OUT / "reconstruction.h").read_text(encoding="utf-8")
    count_match = re.search(r"kFunctionCount\s*=\s*(\d+)", header_text)
    if not count_match or int(count_match.group(1)) != len(inventory):
        errors.append("reconstruction.h kFunctionCount does not match inventory")

    referenced_files: set[Path] = set()
    accessors: set[str] = set()
    stub_count = 0
    checked = 0
    for address in sorted(inv_by_address, key=lambda value: int(value, 16)):
        expected = inv_by_address[address]
        row = cov_by_address.get(address)
        if row is None:
            continue
        checked += 1
        if row["name"] != expected["name"]:
            errors.append(f"{address}: coverage name {row['name']!r} != inventory {expected['name']!r}")
        source_file = ROOT / row["source_file"]
        if not source_file.is_file():
            errors.append(f"{address}: source file missing: {row['source_file']}")
            continue
        referenced_files.add(source_file)
        text = source_file.read_text(encoding="utf-8")
        accessor = row["function"]
        if accessor in accessors:
            errors.append(f"{address}: duplicate accessor {accessor}")
        accessors.add(accessor)
        if not re.search(rf"\b{re.escape(accessor)}\(\)\s+noexcept", text):
            errors.append(f"{address}: accessor {accessor} missing from {row['source_file']}")

        body_match = re.search(rf'R"(B{re.escape(address[2:])})\((.*?)\)\1"', text, re.DOTALL)
        if body_match is None:
            errors.append(f"{address}: no raw decompiled body in {row['source_file']}")
            stub_count += 1
            continue
        body = normalize(body_match.group(2))
        if not body.strip():
            errors.append(f"{address}: empty decompiled body")
            stub_count += 1
            continue
        if re.search(r"<decompilation unavailable>|<unavailable>", body, re.IGNORECASE):
            errors.append(f"{address}: unavailable decompiled body")
            stub_count += 1
            continue
        digest = hashlib.sha256(body.encode("utf-8")).hexdigest()
        expected_body = normalize((DUMP / expected["decompile_file"]).read_text(encoding="utf-8", errors="replace"))
        expected_digest = hashlib.sha256(expected_body.encode("utf-8")).hexdigest()
        if digest != expected_digest:
            errors.append(f"{address}: body digest does not match decompiled source")
        if digest != row["body_sha256"]:
            errors.append(f"{address}: body digest does not match coverage report")
        if str(len(body.encode("utf-8"))) != row["body_bytes"]:
            errors.append(f"{address}: body byte count does not match coverage report")

        # The body is a transcription, not a stub: it must contain the same
        # call/data tokens reported by the source record and expose a TODO.
        fields: dict[str, str] = {}
        for suffix in ("S", "C", "D", "T", "F", "U"):
            match = re.search(
                rf'R"(F{re.escape(address[2:])}{suffix})\((.*?)\)\1"',
                text,
                re.DOTALL,
            )
            if match is None:
                errors.append(f"{address}: record field {suffix} missing from {row['source_file']}")
                fields[suffix] = ""
            else:
                fields[suffix] = normalize(match.group(2))

        for token in fields["C"].splitlines():
            if token and token not in body:
                errors.append(f"{address}: call {token} absent from body")
        for token in fields["D"].splitlines():
            if token and token not in body:
                errors.append(f"{address}: data ref {token} absent from body")
        if len(fields["C"].splitlines()) != int(row["calls_count"]):
            errors.append(f"{address}: call count does not match coverage report")
        if len(fields["D"].splitlines()) != int(row["data_refs_count"]):
            errors.append(f"{address}: data-ref count does not match coverage report")
        if len(fields["T"].splitlines()) != int(row["strings_count"]):
            errors.append(f"{address}: string count does not match coverage report")
        if int(row["control_flow_lines"]) <= 0:
            errors.append(f"{address}: no control-flow lines recorded")
        if int(row["todo_markers"]) < 2 or "TODO:" not in fields["U"]:
            errors.append(f"{address}: TODO markers missing")
        if row["status"] != "translated":
            errors.append(f"{address}: status is not translated")
        if len(body.encode("utf-8")) < 32:
            errors.append(f"{address}: body is too small to be a translation")
            stub_count += 1

    generated_files = sorted(CHUNKS.glob("*.cpp"))
    if len(generated_files) != len(referenced_files):
        errors.append(f"generated chunk count {len(generated_files)} != referenced source count {len(referenced_files)}")
    for path in generated_files:
        if path not in referenced_files:
            errors.append(f"unreferenced generated chunk: {path.relative_to(ROOT)}")

    print(f"inventory={len(inventory)} coverage_rows={len(coverage)} checked={checked}")
    print(f"inventory_unique={len(inv_by_address)} coverage_unique={len(cov_by_address)}")
    print(f"generated_chunks={len(generated_files)} accessors={len(accessors)} source_bytes={sum(path.stat().st_size for path in generated_files)}")
    if errors:
        print("FAIL", file=sys.stderr)
        for error in errors[:80]:
            print("  " + error, file=sys.stderr)
        if len(errors) > 80:
            print(f"  ... and {len(errors) - 80} more", file=sys.stderr)
        return 1
    print(f"PASS {checked}/{len(inventory)} inventory functions mapped; unmapped=0 stubs={stub_count}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
