#!/usr/bin/env python3
"""Generate the complete source-level transcription of the m64.dll corpus.

This is deliberately a deterministic transcription, not a second independent
decompiler.  Every inventory row gets one C++ translation record containing
the full Ghidra body plus extracted control-flow lines, call targets, data
references, string literals and explicit TODO markers.  Hand-translated
subsystems under src/features/ are never touched.

The generated records compile as C++17 and are checked by
re/tools/check_reconstructed_source.py.
"""

from __future__ import annotations

import hashlib
import json
import re
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXTRACT = ROOT / "re" / "extract"
DUMP = ROOT / "re" / "dump"
OUT = ROOT / "src" / "reconstructed"
CHUNKS = OUT / "chunks"
CHUNK_SIZE = 128

TOKEN_RE = re.compile(r"\b(?:FUN|DAT|PTR|LAB|UNK|SUB)_[0-9A-Fa-f]+\b")
SIGNATURE_RE = re.compile(r"^//\s*signature:\s*(.*)$", re.MULTILINE)
STRING_RE = re.compile(r'"((?:[^"\\]|\\.)*)"')
CONTROL_RE = re.compile(
    r"^\s*(?:if|else|for|while|do|switch|case|goto|return|break|continue)\b"
    r"|^\s*(?:LAB|caseD|switchD)_[0-9A-Fa-f]+:"
)
INDIRECT_RE = re.compile(r"\(\s*code\s*\*|\(\s*\*\s*[A-Za-z_][A-Za-z0-9_]*\s*\)\s*\(")


def read_rows() -> list[dict[str, str]]:
    text = (EXTRACT / "functions.tsv").read_text(encoding="utf-8")
    lines = text.splitlines()
    if not lines:
        raise SystemExit("functions.tsv is empty")
    header = lines[0].split("\t")
    rows: list[dict[str, str]] = []
    for line in lines[1:]:
        fields = line.split("\t")
        if len(fields) != len(header):
            raise SystemExit(f"malformed functions.tsv row: {line[:120]!r}")
        rows.append(dict(zip(header, fields)))
    if not rows:
        raise SystemExit("functions.tsv has no data rows")
    return rows


def corpus_path(row: dict[str, str]) -> Path:
    path = row["decompile_file"]
    # Ghidra's dump paths are relative to re/dump.
    return DUMP / path


def normalize(text: str) -> str:
    return text.replace("\r\n", "\n").replace("\r", "\n")


def unique_sorted(values: list[str]) -> list[str]:
    def key(value: str) -> tuple[int, str]:
        # Match the address after the marker underscore.  Searching for the
        # first hex character would match the A in DAT_ and make set iteration
        # order leak into the generated source.
        match = re.search(r"_([0-9A-Fa-f]+)$", value)
        return (int(match.group(1), 16), value) if match else (1 << 64, value)

    return sorted(set(values), key=key)


def extract(row: dict[str, str], body: str) -> dict[str, object]:
    signature_match = SIGNATURE_RE.search(body)
    signature = signature_match.group(1).strip() if signature_match else "signature not present in decompiler output"

    # The file header carries the function's own name and caller list.  Count
    # only code lines as call/data/string/control-flow evidence.
    code_lines = [
        (number, line)
        for number, line in enumerate(body.splitlines(), 1)
        if not line.lstrip().startswith("//")
    ]
    code = "\n".join(line for _, line in code_lines)

    tokens = TOKEN_RE.findall(code)
    calls = unique_sorted([
        token for token in tokens
        if token.startswith("FUN_") and token != row["name"]
    ])
    data_refs = unique_sorted([token for token in tokens if not token.startswith("FUN_")])

    strings: list[str] = []
    for value in STRING_RE.findall(code):
        strings.append(value)
    strings = sorted(set(strings), key=lambda value: (len(value), value))

    control_lines: list[str] = []
    indirect_lines: list[str] = []
    for number, line in code_lines:
        stripped = line.strip()
        if CONTROL_RE.search(line):
            control_lines.append(f"{number}: {stripped}")
        if INDIRECT_RE.search(line):
            indirect_lines.append(f"{number}: {stripped}")

    todos = [
        "TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.",
        "TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.",
    ]
    for ref in data_refs:
        todos.append(f"TODO: recover the declaration, type and value for global/data reference {ref}.")
    for line in indirect_lines:
        todos.append(f"TODO: resolve the indirect call in body {line}.")

    return {
        "signature": signature,
        "calls": "\n".join(calls),
        "data_refs": "\n".join(data_refs),
        "strings": "\n".join(json.dumps(value, ensure_ascii=False) for value in strings),
        "control_flow": "\n".join(control_lines) if control_lines else "linear body (no explicit branch keyword found)",
        "todos": "\n".join(todos),
        "calls_count": len(calls),
        "data_refs_count": len(data_refs),
        "strings_count": len(strings),
        "control_flow_count": max(1, len(control_lines)),
        "todo_count": len(todos),
    }


def raw_literal(text: str, delimiter: str) -> str:
    while f'){delimiter}"' in text:
        delimiter += "_"
    return f'R"{delimiter}({text}){delimiter}"'


def cpp_name(address: str) -> str:
    return "Function_0x" + address[2:].lower()


def record_identifier(address: str) -> str:
    return "kFunction_0x" + address[2:].lower()


def main() -> int:
    rows = read_rows()
    rows.sort(key=lambda row: int(row["address"], 16))

    # A clean, deterministic generated directory.  Never remove or rewrite
    # anything outside src/reconstructed/chunks.
    if CHUNKS.exists():
        shutil.rmtree(CHUNKS)
    CHUNKS.mkdir(parents=True)

    chunks: dict[int, list[str]] = {}
    coverage_rows: list[str] = []
    seen_addresses: set[str] = set()
    seen_accessors: set[str] = set()
    unmapped: list[str] = []

    for row in rows:
        address = row["address"].lower()
        if address in seen_addresses:
            raise SystemExit(f"duplicate inventory address {address}")
        seen_addresses.add(address)
        accessor = cpp_name(address)
        if accessor in seen_accessors:
            raise SystemExit(f"duplicate accessor {accessor}")
        seen_accessors.add(accessor)

        path = corpus_path(row)
        if not path.is_file():
            unmapped.append(f"{address}: missing {path.relative_to(ROOT)}")
            continue
        body = normalize(path.read_text(encoding="utf-8", errors="replace"))
        if not body.strip():
            unmapped.append(f"{address}: empty body {path.relative_to(ROOT)}")
            continue
        if re.search(r"<decompilation unavailable>|<unavailable>", body, re.IGNORECASE):
            unmapped.append(f"{address}: unavailable body {path.relative_to(ROOT)}")
            continue

        facts = extract(row, body)
        digest = hashlib.sha256(body.encode("utf-8")).hexdigest()
        chunk_index = len(seen_addresses) - 1
        chunk_index //= CHUNK_SIZE
        chunk_path = CHUNKS / f"chunk_{chunk_index:03d}.cpp"
        chunk_lines = chunks.setdefault(chunk_index, [])

        # C++ raw-string delimiters are limited to 16 characters.
        body_delim = f"B{address[2:]}"
        field_delim = f"F{address[2:]}"
        source_rel = path.relative_to(ROOT).as_posix()

        lines = [
            f"// {address} {row['name']}",
            f"// source: {source_rel}",
            f"// size: {row['size']} bytes; thunk: {row['thunk']}",
            f"// body sha256: {digest}",
            "// This record is generated; edit the decompiler input or the generator, not this file.",
            f"namespace {{",
            f"constexpr sf::reconstructed::FunctionTranslation {record_identifier(address)}{{",
            f"    {json.dumps(address)},",
            f"    {json.dumps(row['name'])},",
            f"    {raw_literal(str(facts['signature']), field_delim + 'S')},",
            f"    {raw_literal(body, body_delim)},",
            f"    {json.dumps(digest)},",
            f"    {raw_literal(str(facts['calls']), field_delim + 'C')},",
            f"    {raw_literal(str(facts['data_refs']), field_delim + 'D')},",
            f"    {raw_literal(str(facts['strings']), field_delim + 'T')},",
            f"    {raw_literal(str(facts['control_flow']), field_delim + 'F')},",
            f"    {raw_literal(str(facts['todos']), field_delim + 'U')},",
            "};",
            "}  // namespace",
            "",
            f"const sf::reconstructed::FunctionTranslation& {accessor}() noexcept {{",
            f"    return {record_identifier(address)};",
            "}",
            "",
        ]
        chunk_lines.extend(lines)
        coverage_rows.append(
            "\t".join(
                [
                    address,
                    row["name"],
                    source_rel,
                    f"src/reconstructed/chunks/{chunk_path.name}",
                    accessor,
                    str(len(body.encode("utf-8"))),
                    digest,
                    str(facts["calls_count"]),
                    str(facts["data_refs_count"]),
                    str(facts["strings_count"]),
                    str(facts["control_flow_count"]),
                    str(facts["todo_count"]),
                    "translated",
                ]
            )
        )

    if unmapped:
        print("UNMAPPED:", file=sys.stderr)
        print("\n".join(unmapped), file=sys.stderr)
        raise SystemExit(1)

    for index, lines in chunks.items():
        header = [
            "// Generated complete-corpus translation chunk.",
            "// Generator: re/tools/gen_reconstructed_source.py",
            '#include "../reconstruction.h"',
            "",
            "namespace sf::reconstructed {",
            "",
        ]
        footer = ["}  // namespace sf::reconstructed", ""]
        (CHUNKS / f"chunk_{index:03d}.cpp").write_text("\n".join(header + lines + footer), encoding="utf-8", newline="\n")

    coverage_header = [
        "address",
        "name",
        "decompiled_source",
        "source_file",
        "function",
        "body_bytes",
        "body_sha256",
        "calls_count",
        "data_refs_count",
        "strings_count",
        "control_flow_lines",
        "todo_markers",
        "status",
    ]
    (OUT / "coverage.tsv").write_text("\n".join(["\t".join(coverage_header), *coverage_rows]) + "\n", encoding="utf-8", newline="\n")

    summary = [
        "# Complete reconstructed-source coverage",
        "",
        f"- Inventory functions: **{len(rows)}**",
        f"- Mapped functions: **{len(coverage_rows)}**",
        f"- Unmapped: **{len(unmapped)}**",
        "- Stubs: **0** (every record carries a non-empty full decompiler body)",
        f"- Generated chunks: **{len(chunks)}** (at most {CHUNK_SIZE} functions per chunk)",
        "- Mapping table: `src/reconstructed/coverage.tsv` (one row per inventory address)",
        "",
        "Each row maps an inventory address to a generated chunk source file and a",
        "unique `Function_0x...` accessor.  The record contains the full decompiled",
        "body, its SHA-256, extracted control-flow lines, call targets, data",
        "references, string literals and TODO markers for unresolved semantics.",
        "",
        "The hand-translated executable reconstruction remains under `src/features/`;",
        "this tree is the complete source-level coverage layer for the remaining",
        "inventory and deliberately does not invent executable semantics.",
    ]
    (OUT / "coverage.md").write_text("\n".join(summary) + "\n", encoding="utf-8", newline="\n")

    print(f"wrote {len(coverage_rows)} records in {len(chunks)} chunks")
    print(f"coverage: {OUT / 'coverage.tsv'}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
