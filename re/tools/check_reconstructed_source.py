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
CHECKED_CONDITION_RE = re.compile(
    r"(?:if \(trace\.checked_condition\(|while \(trace\.checked_loop_condition\("
    r"|switch \(trace\.checked_switch\(|for \(auto loop = trace\.checked_loop\()"
)


def extract_accessor_body(text: str, accessor: str) -> str | None:
    match = re.search(rf"\b{re.escape(accessor)}\(\)\s+noexcept\s*\{{", text)
    if not match:
        return None
    start = match.end() - 1
    depth = 0
    quote: str | None = None
    escaped = False
    line_comment = False
    block_comment = False
    index = start
    while index < len(text):
        char = text[index]
        next_char = text[index + 1] if index + 1 < len(text) else ""
        if line_comment:
            if char == "\n":
                line_comment = False
            index += 1
            continue
        if block_comment:
            if char == "*" and next_char == "/":
                block_comment = False
                index += 2
            else:
                index += 1
            continue
        if quote:
            if escaped:
                escaped = False
            elif char == "\\":
                escaped = True
            elif char == quote:
                quote = None
            index += 1
            continue
        if char == "/" and next_char == "/":
            line_comment = True
            index += 2
            continue
        if char == "/" and next_char == "*":
            block_comment = True
            index += 2
            continue
        if char in ('"', "'"):
            quote = char
        elif char == "{":
            depth += 1
        elif char == "}":
            depth -= 1
            if depth == 0:
                return text[start:index + 1]
        index += 1
    return None


def accessor_audit(body: str) -> tuple[int, int, int, int]:
    executable = 0
    controls = 0
    literals = 0
    statements = 0
    for line in body.splitlines():
        stripped = line.strip()
        if not stripped or stripped.startswith("//"):
            continue
        if stripped in ("{", "}", "};"):
            continue
        if stripped.startswith(("trace.", "if (", "else", "for (", "while (", "do {", "switch (", "case ", "default:", "goto ", "return ")):
            executable += 1
        if stripped.startswith("trace.statement("):
            statements += 1
        if re.match(r"(?:else\s+)?(?:if|for|while|do|switch)\b", stripped):
            controls += 1
        if "trace.string_literal(" in stripped:
            literals += 1
    return executable, controls, literals, statements


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

    symbols_text = (OUT / "symbols.h").read_text(encoding="utf-8")
    declared_calls = set(re.findall(r"void (FUN_[0-9A-Fa-f]+(?:_[0-9A-Fa-f]+)?)\(\) noexcept", symbols_text))
    declared_data = set(re.findall(
        r"extern\s+[^;\n]+?\s(_?(?:DAT|UNK|SUB)_[0-9A-Fa-f]+(?:_[0-9A-Fa-f]+)?|_?PTR_[A-Za-z0-9_]+)\s*(?:\[[^\]]*\])?\s*;",
        symbols_text,
    ))

    referenced_files: set[Path] = set()
    # Each chunk holds up to 128 accessors; the decompiled bodies are read once
    # per function but only once per file.  Caching keeps the audit linear in
    # corpus size instead of re-reading ~86 MB sixty times.
    chunk_texts: dict[Path, str] = {}
    decompiled_texts: dict[Path, str] = {}
    accessors: set[str] = set()
    stub_count = 0
    checked = 0
    executable_lines_total = 0
    control_nodes_total = 0
    literal_lines_total = 0
    statement_lines_total = 0
    typed_conditions_total = 0
    unresolved_conditions_total = 0
    typed_calls_total = 0
    unresolved_call_args_total = 0
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
        text = chunk_texts.get(source_file)
        if text is None:
            text = source_file.read_text(encoding="utf-8")
            chunk_texts[source_file] = text
        accessor = row["function"]
        if accessor in accessors:
            errors.append(f"{address}: duplicate accessor {accessor}")
        accessors.add(accessor)
        if not re.search(rf"\b{re.escape(accessor)}\(\)\s+noexcept", text):
            errors.append(f"{address}: accessor {accessor} missing from {row['source_file']}")
            continue
        accessor_body = extract_accessor_body(text, accessor)
        if accessor_body is None:
            errors.append(f"{address}: accessor body could not be balanced: {row['source_file']}")
            stub_count += 1
            continue
        executable, controls, literals, statements = accessor_audit(accessor_body)
        executable_lines_total += executable
        control_nodes_total += controls
        literal_lines_total += literals
        statement_lines_total += statements
        if executable < 2 or statements < 1:
            errors.append(f"{address}: accessor has only {executable} executable lines and {statements} statements")
            stub_count += 1
        if int(row["executable_lines"]) < 2 or int(row["statement_lines"]) < 1:
            errors.append(f"{address}: coverage executable/statement count is trivial")
        if executable != int(row["executable_lines"]):
            errors.append(f"{address}: executable accessor lines {executable} != coverage {row['executable_lines']}")
        if statements != int(row["statement_lines"]):
            errors.append(f"{address}: statement lines {statements} != coverage {row['statement_lines']}")
        if controls != int(row["control_flow_nodes"]):
            errors.append(f"{address}: control nodes {controls} != coverage {row['control_flow_nodes']}")
        # Count only statements that the compiler instantiates, i.e. lines that
        # begin with a checked-control construct.  A bare substring count could
        # also match text inside the recorded string literals.
        typed_conditions = sum(
            1 for line in accessor_body.splitlines()
            if CHECKED_CONDITION_RE.match(line.strip())
        )
        if typed_conditions != int(row["typed_conditions"]):
            errors.append(f"{address}: typed conditions {typed_conditions} != coverage {row['typed_conditions']}")
        typed_calls = sum(
            1 for line in accessor_body.splitlines()
            if line.strip().startswith("trace.call_arguments(")
        )
        if typed_calls != int(row["typed_calls"]):
            errors.append(f"{address}: typed call sites {typed_calls} != coverage {row['typed_calls']}")
        unresolved_conditions = len(re.findall(r"// TODO: condition expression type not recovered:", accessor_body))
        if unresolved_conditions != int(row["unresolved_conditions"]):
            errors.append(f"{address}: unresolved conditions {unresolved_conditions} != coverage {row['unresolved_conditions']}")
        unresolved_calls = len(re.findall(r"// TODO: call arguments not type-recovered for ", accessor_body))
        if unresolved_calls != int(row["unresolved_call_args"]):
            errors.append(f"{address}: unresolved call args {unresolved_calls} != coverage {row['unresolved_call_args']}")
        typed_conditions_total += typed_conditions
        unresolved_conditions_total += unresolved_conditions
        typed_calls_total += typed_calls
        unresolved_call_args_total += unresolved_calls
        expected_refs = int(row["strings_count"])
        if literals != expected_refs:
            errors.append(f"{address}: executable string literals {literals} != {expected_refs}")
        if accessor_body.count("trace.call_target(") != int(row["calls_count"]):
            errors.append(f"{address}: executable call refs do not match coverage report")
        if re.search(r'R"B[0-9A-Fa-f]', accessor_body):
            errors.append(f"{address}: accessor body is still a raw decompiler payload")
        if "// TODO:" not in accessor_body or "PDB" not in accessor_body:
            errors.append(f"{address}: accessor lacks named TODO markers")

        body_match = re.search(rf'R"(B{re.escape(address[2:])})\((.*?)\)\1"', text, re.DOTALL)
        if body_match is None:
            errors.append(f"{address}: no raw decompiled body in {row['source_file']}")
            stub_count += 1
            continue
        body = body_match.group(2)
        if not body.strip():
            errors.append(f"{address}: empty decompiled body")
            stub_count += 1
            continue
        if re.search(r"<decompilation unavailable>|<unavailable>", body, re.IGNORECASE):
            errors.append(f"{address}: unavailable decompiled body")
            stub_count += 1
            continue
        digest = hashlib.sha256(body.encode("utf-8")).hexdigest()
        decompiled_path = DUMP / expected["decompile_file"]
        expected_body = decompiled_texts.get(decompiled_path)
        if expected_body is None:
            expected_body = decompiled_path.read_text(encoding="utf-8", errors="replace")
            decompiled_texts[decompiled_path] = expected_body
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
                fields[suffix] = match.group(2)

        for token in fields["C"].splitlines():
            if token and token not in body:
                errors.append(f"{address}: call {token} absent from body")
            if token and token not in declared_calls:
                errors.append(f"{address}: call {token} is not declared in symbols.h")
            if token and f"&image::{token}" not in accessor_body:
                errors.append(f"{address}: call {token} has no resolved accessor reference")
        for token in fields["D"].splitlines():
            if token and token not in body:
                errors.append(f"{address}: data ref {token} absent from body")
            if token and not token.startswith("LAB_"):
                if token not in declared_data:
                    errors.append(f"{address}: data {token} is not declared in symbols.h")
                if f"&image::{token}" not in accessor_body:
                    errors.append(f"{address}: data {token} has no resolved accessor reference")
                if not re.search(rf"// TODO:.*{re.escape(token)}", accessor_body):
                    errors.append(f"{address}: data {token} has no named TODO")
        if int(row["strings_count"]) > 0 and "trace.string_literal(" not in accessor_body:
            errors.append(f"{address}: string literals are not executable references")
        if len(fields["C"].splitlines()) != int(row["calls_count"]):
            errors.append(f"{address}: call count does not match coverage report")
        if len(fields["D"].splitlines()) != int(row["data_refs_count"]):
            errors.append(f"{address}: data-ref count does not match coverage report")
        if len(fields["T"].splitlines()) != int(row["strings_count"]):
            errors.append(f"{address}: string count does not match coverage report")
        expected_data_refs = sum(
            1 for token in fields["D"].splitlines() if token and not token.startswith("LAB_")
        )
        if accessor_body.count("trace.data_ref(") != expected_data_refs:
            errors.append(f"{address}: executable data refs do not match coverage report")
        if int(row["control_flow_lines"]) <= 0:
            errors.append(f"{address}: no control-flow lines recorded")
        if re.search(r"\b(?:if|for|while|switch|do)\b", fields["F"]) and controls == 0:
            errors.append(f"{address}: control-flow body has no executable control construct")
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
    print(f"executable_accessor_lines={executable_lines_total} statement_lines={statement_lines_total} control_nodes={control_nodes_total} literal_refs={literal_lines_total} symbols_calls={len(declared_calls)} symbols_data={len(declared_data)}")
    print(f"typed_conditions={typed_conditions_total} unresolved_conditions={unresolved_conditions_total} typed_calls={typed_calls_total} unresolved_call_args={unresolved_call_args_total}")
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
