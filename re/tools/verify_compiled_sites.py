#!/usr/bin/env python3
"""Prove every generated site compiles the expression the recording contains.

Checked conditions embed the recorded header next to the compiled lambda, and
call sites name their recorded target.  This tool canonicalizes both sides
through the documented normalizations (type spellings, ``image::``
qualification, explicit cast operators, ``load_at``/``load_bits`` lowering)
and requires exact equality, or in the case of call arguments that the compiled
argument tuple occurs in the recorded body.  A difference is a coverage bug,
not a formatting detail.
"""

from __future__ import annotations

import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))

from gen_reconstructed_source import (  # noqa: E402
    CALL_KEYWORDS, CALL_RE, TYPE_ALIASES, TYPE_WORDS, code_for_translation,
    condition_expression, decode_c_string, for_condition_expression,
    read_rows, recover_declarations, split_top_level,
)

CHUNKS = ROOT / "src" / "reconstructed" / "chunks"
DUMP = ROOT / "re" / "dump"
BODIES = {row["address"].lower(): DUMP / row["decompile_file"] for row in read_rows()}
ACCESSOR_RE = re.compile(
    r"^const sf::reconstructed::FunctionTranslation& (Function_0x[0-9a-f]+)\(\) noexcept \{$",
    re.M,
)

CONDITION_FORMS = (
    ('if (trace.checked_condition("', "if", "bool"),
    ('while (trace.checked_loop_condition("', "while", "bool"),
    ('switch (trace.checked_switch("', "switch", "std::size_t"),
    ('for (auto loop = trace.checked_loop("', "for", "bool"),
)

TYPE_CAST_RE = re.compile(r"\(\s*([A-Za-z_][A-Za-z0-9_:]*(?:\s*\*)*)\s*\)")
CAST_OPEN_RE = re.compile(r"(?:static|reinterpret|const)_cast<[^<>]*>\s*\(")

# Grouping that carries no value, applied repeatedly after cast removal.
PAREN_RULES = (
    (re.compile(r"\*\(\s*&\s*([A-Za-z_][A-Za-z0-9_]*)\s*\)"), r"\1"),
    (re.compile(r"\(\s*&\s*([A-Za-z_][A-Za-z0-9_]*)\s*\)\["), r"\1["),
    (re.compile(r"\(\s*&\s*([A-Za-z_][A-Za-z0-9_]*)\s*\)"), r"&\1"),
    (re.compile(r"\(\s*([A-Za-z_][A-Za-z0-9_]*|\d+|0[xX][0-9A-Fa-f]+)\s*\)"), r"\1"),
    (re.compile(r"\(\s*(\*+[A-Za-z_][A-Za-z0-9_]*)\s*\)"), r"\1"),
    (re.compile(r"\(\s*([A-Za-z_][A-Za-z0-9_]*(?:\[[^\[\]]*\])+)\s*\)"), r"\1"),
    (re.compile(r"\(\(([^()]*)\)\)"), r"(\1)"),
)


def is_type_name(text: str) -> bool:
    base = text.replace("*", "").replace("std::", "").strip()
    if not base:
        return False
    return base in TYPE_ALIASES or ("std::" + base) in TYPE_ALIASES.values()


def strip_cast_operators(text: str) -> str:
    """Delete cast operators, keeping their parenthesized operand."""
    while True:
        match = CAST_OPEN_RE.search(text)
        if not match:
            break
        start = match.end() - 1
        depth = 0
        end = -1
        for index in range(start, len(text)):
            if text[index] == "(":
                depth += 1
            elif text[index] == ")":
                depth -= 1
                if depth == 0:
                    end = index
                    break
        if end < 0:
            break
        text = text[:match.start()] + text[start:end + 1] + text[end + 1:]
    changed = True
    while changed:
        changed = False
        for match in TYPE_CAST_RE.finditer(text):
            if not is_type_name(match.group(1)):
                continue
            text = text[:match.start()] + text[match.end():]
            changed = True
            break
    return text


def lower_loads(text: str) -> str:
    """`load_at<T>(addr, 0)` reads the slot at addr."""
    out = []
    index = 0
    while True:
        match = re.search(r"load_at<[^<>]*>\s*\(", text[index:])
        if not match:
            out.append(text[index:])
            break
        start = index + match.start()
        out.append(text[index:start])
        open_index = index + match.end() - 1
        depth = 0
        end = -1
        for pos in range(open_index, len(text)):
            if text[pos] == "(":
                depth += 1
            elif text[pos] == ")":
                depth -= 1
                if depth == 0:
                    end = pos
                    break
        if end < 0:
            out.append(text[start:])
            break
        parts = split_top_level(text[open_index + 1:end], ",")
        out.append(f"*({lower_loads(parts[0].strip())})")
        index = end + 1
    return "".join(out)


def canonical(text: str) -> str:
    value = text.strip()
    value = value.replace("\\\\", "\\")
    value = value.replace("\\'", "'")
    value = value.replace("image::", "")
    for alias, mapped in sorted(TYPE_ALIASES.items(), key=lambda item: len(item[0]), reverse=True):
        value = re.sub(rf"(?<!std::)\b{re.escape(alias)}\b", mapped, value)
    # Functional casts such as `std::uint64_t(x)` carry no value change here.
    value = re.sub(r"\bstd::[A-Za-z_][A-Za-z0-9_]*\s*\(", "(", value)
    value = strip_cast_operators(value)
    value = lower_loads(value)
    value = re.sub(r"SUB(32|16)1\(\s*([^,]+?)\s*>>\s*(\S+?)\s*,\s*0\s*\)", r"BITS\1(\2,\3)", value)
    value = re.sub(r"load_bits(32|16)\(([^,]+),\s*[^,]+,\s*([^)]+)\)", r"BITS\1(\2,\3)", value)
    value = re.sub(r"(?<![&\w])(FUN_[0-9A-Fa-f]+)", r"&\1", value)
    # Ghidra's 4-byte high-half field lowers to a 32-bit shift of the wide value.
    def lower_field(match: re.Match[str]) -> str:
        shift = int(match.group(2)) * 8
        size = int(match.group(3))
        if shift == 0:
            return match.group(1)
        if size in (1, 2, 4, 8):
            # The compiled side casts to a narrow type, which truncates exactly
            # like a mask would; casts are dropped by the canonical form.
            return f"({match.group(1)} >> {shift})"
        return f"(({match.group(1)} >> {shift}) & {(1 << (size * 8)) - 1:#x})"

    value = re.sub(
        r"([A-Za-z_][A-Za-z0-9_]*(?:\[[^\[\]]*\])?)\._(\d+)_(\d+)_",
        lower_field,
        value,
    )
    value = re.sub(r"\s+", " ", value)
    value = value.replace("( ", "(").replace(" )", ")").strip()
    value = re.sub(r"\s*,\s*", ", ", value)
    value = re.sub(r"\s*>>\s*0(?![xX0-9A-Fa-f])", "", value)
    # Strip grouping that survives cast removal: `((x))` -> `x`, and the same
    # for a dereferenced or subscripted atom.  Iterate because each removal can
    # expose another layer; the rule order matters (`(&x)[` before `(&x)`).
    for _ in range(8):
        before = value
        for pattern, replacement in PAREN_RULES:
            value = pattern.sub(replacement, value)
        if value == before:
            break
    while value.startswith("(") and value.endswith(")"):
        depth = 0
        inner = True
        for index, char in enumerate(value):
            if char == "(":
                depth += 1
            elif char == ")":
                depth -= 1
                if depth == 0 and index != len(value) - 1:
                    inner = False
                    break
        if not inner:
            break
        value = value[1:-1].strip()
    return value


def call_of(line: str, match_start: int) -> str:
    """Return the argument text of the call starting at match_start."""
    open_index = line.find("(", match_start)
    depth = 0
    quote: str | None = None
    escaped = False
    for index in range(open_index, len(line)):
        char = line[index]
        if quote:
            if escaped:
                escaped = False
            elif char == "\\":
                escaped = True
            elif char == quote:
                quote = None
            continue
        if char in ('"', "'"):
            quote = char
        elif char == "(":
            depth += 1
        elif char == ")":
            depth -= 1
            if depth == 0:
                return line[open_index + 1:index]
    return ""


def recorded_calls(body: str) -> Counter:
    """Every call-shaped expression in the recorded body, as a superset.

    Extra recorded sites are harmless: analysis only asks whether each compiled
    argument tuple occurs in the recording.  Skipping a real site would hide a
    difference, so this side deliberately over-counts.
    """
    declarations = recover_declarations(body)
    sites: Counter = Counter()
    for line in code_for_translation(body):
        for match in CALL_RE.finditer(line):
            target = match.group(1)
            if target in CALL_KEYWORDS or target in TYPE_WORDS or target in declarations:
                continue
            args_text = call_of(line, match.start())
            sites[(target, canonical(args_text))] += 1
    return sites


def emitted_calls(body: str) -> Counter:
    sites: Counter = Counter()
    for line in body.splitlines():
        start = line.find('trace.call_arguments("')
        if start < 0:
            continue
        open_quote = start + len("trace.call_arguments(")
        close_quote = line.find('"', open_quote + 1)
        target = line[open_quote + 1:close_quote]
        rest = line[close_quote + 1:].strip()
        args_text = ""
        if rest.startswith(","):
            end = line.rfind(");")
            args_text = line[close_quote + 2:end].strip()
        sites[(target, canonical(args_text))] += 1
    return sites


def quoted_after(line: str, marker: str) -> str | None:
    """Return the raw body of the first C++ string literal after marker."""
    start = line.find(marker)
    if start < 0:
        return None
    index = start + len(marker)
    out = []
    escaped = False
    while index < len(line):
        char = line[index]
        if escaped:
            out.append("\\")
            out.append(char)
            escaped = False
        elif char == "\\":
            escaped = True
        elif char == '"':
            return "".join(out)
        else:
            out.append(char)
        index += 1
    return None


def decompiled_body(accessor: str) -> str | None:
    """The recorded decompiler text for an accessor's address."""
    path = BODIES.get(accessor.split("_", 1)[1].lower())
    if path is None or not path.is_file():
        return None
    return path.read_text(encoding="utf-8", errors="replace")


def condition_sites(body: str) -> list[tuple[str, str, str]]:
    """Yield (kind, recorded expression, compiled expression) per checked site."""
    sites = []
    for line in body.splitlines():
        stripped = line.strip()
        for marker, kind, return_type in CONDITION_FORMS:
            if marker not in stripped:
                continue
            header_start = stripped.find(marker) + len(marker)
            anchor = f', [&]() -> {return_type} {{ return static_cast<{return_type}>('
            header_end = stripped.find(anchor, header_start)
            if header_end < 0:
                continue
            header = decode_c_string(stripped[header_start:header_end - 1])
            expr_start = header_end + len(anchor)
            expr_end = stripped.rfind("); })", expr_start)
            if expr_end < 0:
                continue
            compiled = stripped[expr_start:expr_end]
            recorded = condition_expression(header) if kind != "for" else for_condition_expression(header)
            if recorded is None:
                continue
            sites.append((kind, recorded, compiled))
    return sites


def main() -> int:
    start = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 0
    files = sorted(CHUNKS.glob("*.cpp"))[start:]
    if count:
        files = files[:count]
    counts = Counter()
    mismatches: list[str] = []
    for path in files:
        text = path.read_text(encoding="utf-8")
        starts = [(match.start(), match.group(1)) for match in ACCESSOR_RE.finditer(text)]
        for index, (start, accessor) in enumerate(starts):
            end = starts[index + 1][0] if index + 1 < len(starts) else len(text)
            body = text[start:end]
            for kind, recorded, compiled in condition_sites(body):
                counts[f"condition:{kind}"] += 1
                if canonical(recorded) != canonical(compiled):
                    mismatches.append(
                        f"{accessor} {kind} condition\n  recorded: {canonical(recorded)}\n  compiled: {canonical(compiled)}"
                    )
            recorded_body = decompiled_body(accessor)
            if recorded_body is None:
                mismatches.append(f"{accessor}: no decompiled body")
                continue
            code_lines = [re.sub(r"\s+", " ", line).strip() for line in code_for_translation(recorded_body)]
            recorded_flat = " ".join(code_lines)
            recorded_bits = {
                (match.group(1), match.group(2), int(match.group(3), 0))
                for match in re.finditer(
                    r"SUB(32|16)1\(\s*([A-Za-z_][A-Za-z0-9_]*)\s*>>\s*(0[xX][0-9A-Fa-f]+|\d+)\s*,\s*0\s*\)",
                    recorded_body,
                )
            }
            # The emitted literal keeps the recording's escape text (cpp_string
            # escapes the backslash), so accept either escape spelling.
            recorded_literals = set()
            for match in re.finditer(r'"((?:[^"\\]|\\.)*)"', recorded_body):
                recorded_literals.add(match.group(1))
                recorded_literals.add(decode_c_string(match.group(1)))
            for line in body.splitlines():
                for marker, label in (
                    ('trace.statement("', "statement"),
                    ('trace.string_literal("', "string_literal"),
                ):
                    raw = quoted_after(line, marker)
                    if raw is None:
                        continue
                    counts[label] += 1
                    body_text = decode_c_string(raw)
                    if label == "statement":
                        # Statement text is emitted verbatim (wrapped lines are
                        # joined), so it must occur in the recording as-is.
                        if body_text != "body had no executable decompiler lines" and re.sub(r"\s+", " ", body_text).strip() not in recorded_flat:
                            mismatches.append(f"{accessor} statement\n  compiled: {body_text[:160]}")
                    elif body_text not in recorded_literals:
                        mismatches.append(f"{accessor} string literal\n  compiled: {body_text[:160]}")
                for marker, label in (
                    ('trace.call_target("', "call_target"),
                    ('trace.data_ref("', "data_ref"),
                ):
                    raw = quoted_after(line, marker)
                    if raw is None:
                        continue
                    counts[label] += 1
                    name = decode_c_string(raw)
                    if not re.search(rf"\b{re.escape(name)}\b", recorded_body):
                        mismatches.append(f"{accessor} {label}\n  compiled: {name}")

            recorded_sites = recorded_calls(recorded_body)
            for site, count in emitted_calls(body).items():
                counts["call_args"] += count
                target, rendered = site
                if target in ("load_bits32", "load_bits16"):
                    # Ghidra's vector subpiece lowers to a checked bit extractor;
                    # the recording must contain exactly that subpiece.
                    parts = split_top_level(rendered, ",")
                    wanted = None
                    if len(parts) == 3:
                        try:
                            wanted = (target[9:11], parts[0].strip(), int(parts[2].strip(), 0))
                        except ValueError:
                            wanted = None
                    if wanted not in recorded_bits:
                        mismatches.append(f"{accessor} {target}\n  compiled: {rendered}")
                    continue
                if recorded_sites[site] < count:
                    candidates = sorted({key[1] for key in recorded_sites if key[0] == site[0]})[:3]
                    mismatches.append(
                        f"{accessor} call args {site[0]}\n  compiled: {site[1]}\n  recorded: {candidates}"
                    )
    for line in mismatches[:30]:
        print(line)
    summary = " ".join(f"{key}={value}" for key, value in sorted(counts.items()))
    print(f"files={len(files)} {summary} mismatches={len(mismatches)}")
    return 1 if mismatches else 0


if __name__ == "__main__":
    raise SystemExit(main())
