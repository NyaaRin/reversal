#!/usr/bin/env python3
"""Build the 0x1801d5ef0 label/callee inventory from the recovered body.

The inventory is deliberately generated rather than hand-maintained.  It
validates that every LAB_* target and every FUN_* identifier in the recovered
Ghidra body has a row, and that every external callee has a row in the
dependency map.  Run from the Skyfall project root:

    py re/tools/renderer_inventory.py

Outputs:
    re/dump/renderer/INVENTORY.md
    re/dump/renderer/INVENTORY.tsv
"""

from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[2]
BODY = ROOT / "re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c"
DEPENDENCIES = ROOT / "re/dump/renderer/DEPENDENCIES.md"
OUT_MD = ROOT / "re/dump/renderer/INVENTORY.md"
OUT_TSV = ROOT / "re/dump/renderer/INVENTORY.tsv"

# Every recovered label, its recovered role, and the compiled construct or
# provided-runtime path that accounts for it.
LABELS = {
    "LAB_1801d955a": (
        "Chat: player_death not delivered / waiting status",
        "DrawChatEventStatus waiting/refresh branches; RendererResult::chat_event_waiting/chat_event_refresh",
        "RENDERER SELFTEST: the Chat waiting-for-event and refresh branches execute",
    ),
    "LAB_1801d95d3": (
        "Chat: player_hurt live status output",
        "DrawChatEventStatus player_hurt branch; RendererResult::chat_event_hurt",
        "RENDERER SELFTEST: the Chat player_hurt branch executes",
    ),
    "LAB_1801d95df": (
        "Chat: event-status cleanup / right-child handoff",
        "DrawChatEventStatus cleanup; RendererResult::chat_event_cleanup",
        "RENDERER SELFTEST: the Chat player_death branch executes",
    ),
    "LAB_1801d9ddc": (
        "std::mutex reference-count throw path",
        "Provided MSVC STL exception path; no renderer-visible branch",
        "n/a: provided by the MSVC STL runtime",
    ),
    "LAB_1801da306": (
        "std::mutex lock-failure throw path",
        "Provided MSVC STL exception path; no renderer-visible branch",
        "n/a: provided by the MSVC STL runtime",
    ),
    "LAB_1801da32a": (
        "Chat section close / right-child transition",
        "RenderUtilityTab section completion; RendererResult::final_cleanup",
        "RENDERER SELFTEST: walks all top-level sections and final cleanup",
    ),
    "LAB_1801dae78": (
        "Loading screen: file path edited/applied",
        "DrawAntiScreenshot loading_mode==1 file branch; RendererResult::loading_file_edit",
        "RENDERER SELFTEST: the loading-screen file branch executes",
    ),
    "LAB_1801db1c6": (
        "Loading screen: URL edited/applied",
        "DrawAntiScreenshot loading_mode==2 URL branch; RendererResult::loading_url_edit",
        "RENDERER SELFTEST: the loading-screen URL branch executes",
    ),
    "LAB_1801dc26d": (
        "Tools: ConVar Set button",
        "DrawTools Set button; RendererResult::tools_set and EngineHost::console_print",
        "RENDERER SELFTEST: the Tools ConVar set/read/unlock/force branches execute",
    ),
    "LAB_1801dcc6d": (
        "Model browser: scan/list entry point",
        "DrawTools Model browser scan branch; RendererResult::model_scan/model_list",
        "RENDERER SELFTEST: the model-browser scan/list/apply branches execute",
    ),
    "LAB_1801dcf54": (
        "Model browser: filter match / apply",
        "DrawTools model entry loop; RendererResult::model_apply",
        "RENDERER SELFTEST: the model-browser scan/list/apply branches execute",
    ),
    "LAB_1801dd0a7": (
        "Model browser: 500-entry limit message",
        "DrawTools model limit branch; RendererResult::model_limit",
        "RENDERER SELFTEST: the model-browser 500-entry limit branch executes",
    ),
    "LAB_1801dd0b3": (
        "Model browser: list close / status",
        "DrawTools model list completion; RendererResult::model_list",
        "RENDERER SELFTEST: the model-browser scan/list/apply branches execute",
    ),
    "LAB_1801dd114": (
        "Model browser: empty / no-match status",
        "DrawTools empty and no-match branches; RendererResult::model_empty/model_no_match",
        "RENDERER SELFTEST: the model-browser no-match and empty branches execute",
    ),
    "LAB_1801deb97": (
        "File cloak: addon-cache mutex throw path",
        "Provided MSVC STL exception path; no renderer-visible branch",
        "n/a: provided by the MSVC STL runtime",
    ),
    "LAB_1801deb9f": (
        "File cloak: addon-cache reference-count throw path",
        "Provided MSVC STL exception path; no renderer-visible branch",
        "n/a: provided by the MSVC STL runtime",
    ),
    "LAB_1801debab": (
        "File cloak: restore defaults / cache reset",
        "DrawFileCloak restore branch; RendererResult::cloak_restore",
        "RENDERER SELFTEST: the File-cloak restore/status/cleanup branches execute",
    ),
    "LAB_1801debc0": (
        "File cloak: popup close / status line",
        "DrawFileCloak status branch; RendererResult::cloak_status",
        "RENDERER SELFTEST: the File-cloak restore/status/cleanup branches execute",
    ),
    "LAB_1801deebe": (
        "File cloak: status/list loop",
        "DrawFileCloak list loop; RendererResult::cloak_list/cloak_status",
        "RENDERER SELFTEST: the File-cloak list/toggle branch executes",
    ),
    "LAB_1801def34": (
        "File cloak: post-popup cleanup",
        "DrawFileCloak cleanup; RendererResult::cloak_cleanup",
        "RENDERER SELFTEST: the File-cloak restore/status/cleanup branches execute",
    ),
    "LAB_1801def3b": (
        "File cloak: model-cache mutex throw path",
        "Provided MSVC STL exception path; no renderer-visible branch",
        "n/a: provided by the MSVC STL runtime",
    ),
    "LAB_1801df53c": (
        "Renderer: final style-stack cleanup and return",
        "RenderUtilityTab final cleanup; RendererResult::final_cleanup",
        "RENDERER SELFTEST: walks all top-level sections and final cleanup",
    ),
    "LAB_18030b3a0": (
        "Static atexit destructor for the model-list cache",
        "Provided CRT static-destruction path",
        "n/a: provided by the MSVC CRT",
    ),
    "LAB_18030b3b0": (
        "Static atexit destructor for the chat token table",
        "Provided CRT static-destruction path",
        "n/a: provided by the MSVC CRT",
    ),
}

HOST_BOUNDARIES = {
    "0x1800b3740": ("EngineHost::convar_int", "live ConVar value; clamp policy is reconstructed"),
    "0x180142570": ("EngineHost::event_subscribed", "live player_death event manager"),
    "0x1801425f0": ("EngineHost::event_subscribed", "live player_hurt event manager"),
    "0x180144d80": ("EngineHost::console_print", "live engine console sink"),
    "0x180145a20": ("EngineHost::connected_ready", "live engine connection state"),
    "0x180145f40": ("EngineHost::chat_send", "live client chat send"),
    "0x180151970": ("SqliteExecutor", "live SQLite connection for the wipe plan"),
    "0x1801542d0": ("SqliteExecutor", "live SQLite connection for the post-exit wipe"),
    "0x1801544e0": ("SqliteExecutor", "live SQLite connection for the run plan"),
    "0x1801996a0": ("LuaDumpSource", "live Lua VM state/path"),
    "0x180220c70": ("dependencies::PickLoadingScreenPage", "implemented Win32 file picker, not a host stub"),
}

def read_dependency_rows():
    rows = {}
    for line in DEPENDENCIES.read_text(encoding="utf-8").splitlines():
        if not line.startswith("| `0x"):
            continue
        parts = line.strip().strip("|").split(" | ")
        if len(parts) != 7:
            continue
        address = parts[0].strip().strip("`")
        rows[address] = {
            "address": address,
            "size": parts[1].strip(),
            "calls": parts[2].strip(),
            "recovered": parts[3].strip(),
            "classification": parts[4].strip().strip("*"),
            "role": parts[5].strip(),
            "evidence": parts[6].strip().strip("`"),
        }
    return rows


def implementation_for(row):
    address = row["address"]
    if address in HOST_BOUNDARIES:
        return HOST_BOUNDARIES[address]
    if row["classification"] == "provided":
        if "MSVC" in row["role"] or "STL" in row["role"]:
            return ("MSVC STL release ABI", "provided by the compiler/runtime")
        return ("third_party/imgui (pinned 1.92.8)", "provided by the vendored ImGui core")
    evidence = row["evidence"]
    source = re.search(r"src/[A-Za-z0-9_./-]+", evidence)
    if source:
        return (source.group(0), "reconstructed source")
    return ("src/features/renderer/dependencies.cpp", "reconstructed dependency layer")


def main():
    body = BODY.read_text(encoding="utf-8")
    lines = body.splitlines()
    labels_in_body = sorted(set(re.findall(r"LAB_[0-9a-fA-F]+", body)))
    callees_in_body = sorted(set(re.findall(r"FUN_[0-9a-fA-F]+", body)))
    dep_rows = read_dependency_rows()

    missing_labels = [label for label in labels_in_body if label not in LABELS]
    missing_callees = [callee for callee in callees_in_body
                       if callee != "FUN_1801d5ef0" and
                       callee.replace("FUN_", "0x") not in dep_rows]
    assert not missing_labels, f"unmapped labels: {missing_labels}"
    assert not missing_callees, f"unmapped callees: {missing_callees}"
    assert len(labels_in_body) == 24, len(labels_in_body)
    assert len(callees_in_body) == 84, len(callees_in_body)

    label_rows = []
    for label in labels_in_body:
        role, implementation, test = LABELS[label]
        first_line = next(
            (index + 1 for index, line in enumerate(lines) if label in line), 0
        )
        label_rows.append((label, first_line, role, implementation, test))

    callee_rows = []
    for callee in callees_in_body:
        if callee == "FUN_1801d5ef0":
            callee_rows.append(
                (callee, "self", "entry", "src/features/renderer/renderer.cpp",
                 "compiled entry point; called from RenderUtilityFrame")
            )
            continue
        row = dep_rows[callee.replace("FUN_", "0x")]
        implementation, reason = implementation_for(row)
        callee_rows.append(
            (callee, row["calls"], row["classification"], implementation, reason)
        )

    md = []
    md.append("# 0x1801d5ef0 control-flow and callee inventory\n")
    md.append(
        "Generated by `re/tools/renderer_inventory.py` from the recovered body "
        "and the dependency map.  Do not hand-edit; rerun the generator.\n"
    )
    md.append(
        f"**Coverage:** {len(label_rows)}/{len(labels_in_body)} labels and "
        f"{len(callee_rows)}/{len(callees_in_body)} `FUN_*` identifiers "
        "(83 external callees plus the renderer itself).  Every external callee "
        "has a dependency-map row; every label is either compiled in "
        "`src/features/renderer/renderer.cpp` or is a provided MSVC/CRT path.\n"
    )
    md.append(
        "This is a control-flow/callee accounting, not a claim of "
        "instruction-for-instruction equivalence with all 5,142 recovered "
        "lines. Live in-game verification is a separate boundary and was not "
        "performed in this pass.\n"
    )
    md.append("## Branch/label inventory\n")
    md.append("| Label | Recovered line | Recovered role | Compiled implementation / accounting | Selftest |")
    md.append("|---|---:|---|---|---|")
    for label, line, role, implementation, test in label_rows:
        md.append(f"| `{label}` | {line} | {role} | {implementation} | {test} |")
    md.append("\n## Callee inventory\n")
    md.append("| Callee | Calls | Class | Implementation / boundary | Accounting |")
    md.append("|---|---:|---|---|---|")
    for callee, calls, classification, implementation, reason in callee_rows:
        md.append(f"| `{callee}` | {calls} | {classification} | {implementation} | {reason} |")
    md.append("")
    md.append("## Provided runtime paths")
    md.append("These recovered labels are compiler/runtime-generated paths, not first-party renderer actions. They are kept explicit so the label coverage is complete; no host callback is invented for them.")
    md.append("")
    for label, line, role, implementation, test in label_rows:
        if implementation.startswith("Provided"):
            md.append(f"- `{label}` — {implementation} — {role}.")
    md.append("")
    md.append("## Boundary list")
    md.append(
        "The host boundaries are the typed callbacks in "
        "`src/features/renderer/dependencies.h`; they are named here so the "
        "callee inventory never claims fabricated engine behavior.\n"
    )
    for address, (name, reason) in HOST_BOUNDARIES.items():
        if name.startswith("dependencies::"):
            continue
        md.append(f"- `{name}` (`{address}`): {reason}.")
    OUT_MD.write_text("\n".join(md) + "\n", encoding="utf-8")

    tsv = ["kind\tkey\tline_or_calls\trole_or_class\timplementation\tselftest_or_accounting"]
    for label, line, role, implementation, test in label_rows:
        tsv.append(f"label\t{label}\t{line}\t{role}\t{implementation}\t{test}")
    for callee, calls, classification, implementation, reason in callee_rows:
        tsv.append(f"callee\t{callee}\t{calls}\t{classification}\t{implementation}\t{reason}")
    OUT_TSV.write_text("\n".join(tsv) + "\n", encoding="utf-8")
    print(f"wrote {OUT_MD.relative_to(ROOT)} and {OUT_TSV.relative_to(ROOT)}")
    print(f"labels={len(label_rows)} callees={len(callee_rows)}")


if __name__ == "__main__":
    main()
