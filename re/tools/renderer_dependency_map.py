#!/usr/bin/env python3
"""Build the 0x1801d5ef0 dependency map from recovered Ghidra bodies.

Inputs:
  re/dump/renderer/helpers/map.tsv        address/size/calls/bytes/lines/status
  the classifier table below              one entry per external callee

Outputs:
  re/dump/renderer/helpers/dependencies.tsv
  re/dump/renderer/DEPENDENCIES.md

The renderer's 84 FUN_* identifiers are 83 external callees plus its own
signature reference.  The self reference is included as row 84, with no
invented external dependency.
"""

from pathlib import Path
import csv
from collections import Counter

ROOT = Path(__file__).resolve().parents[2]

GROUPS = {
    "imgui-provided": (
        "provided",
        "ImGui 1.92.8 core implementation, vendored at third_party/imgui",
        "third_party/imgui/UPSTREAM.md and third_party_imgui_build.log",
    ),
    "imgui": (
        "missing",
        "first-party ImGui wrapper logic and engine UI state; vendored ImGui 1.92.8 covers only the core API",
        "helper body is a first-party wrapper; source implementation is "
        "still not reconstructed",
    ),
    "imgui-engine": (
        "missing",
        "first-party ImGui wrapper + engine input state",
        "helper body calls the ImGui key-capture path; "
        "recovered renderer strings include '[Press a key]###%s'",
    ),
    "engine": (
        "missing",
        "engine interface (client state, ConVar, event or chat)",
        "helper body calls engine-facing FUN_* wrappers; exact engine types "
        "are not present in src/",
    ),
    "file": (
        "missing",
        "Windows file-system / STL filesystem",
        "helper body calls file/path cleanup and CRT mutex helpers; no "
        "filesystem implementation exists in src/",
    ),
    "file-sqlite": (
        "missing",
        "file-system enumeration + SQLite execution",
        "src/features/config/sqlite.h implements the wipe decision layer "
        "but not the file scan or sqlite3_exec calls",
    ),
    "stl-provided": (
        "provided",
        "MSVC C++ STL release ABI, supplied by the compiler/runtime",
        "helper body is a compiler-generated container/string operation; the "
        "project is built with the same MSVC x64 release STL",
    ),
    "config": (
        "missing",
        "config store and std::any/RTTI layer",
        "src/features/config/config.h models the file format and typed "
        "accessors, not the in-memory std::any store",
    ),
    "lua": (
        "missing",
        "Lua VM",
        "helper body drives the Lua dumper; the standalone tree has no Lua "
        "VM linked",
    ),
    "crt": (
        "missing",
        "CRT/allocator/logger primitive",
        "helper body calls the MSVC CRT directly; no project wrapper was "
        "reconstructed",
    ),
}

# address -> (group, role, extra evidence note)
ROWS = {
    "0x180012ac0": ("reconstructed", "vsnprintf wrapper", "src/features/renderer/ui_helpers.cpp:FormatV; body calls __stdio_common_vsprintf"),
    "0x180014410": ("reconstructed", "thread-safe log writer", "src/features/renderer/log_writer.cpp:LogV; body locks a CRT mutex and writes to stdout/global FILE*"),
    "0x18001d080": ("reconstructed", "std::string assign from buffer", "src/features/renderer/ui_helpers.cpp:AssignString; body implements MSVC SSO/heap assignment"),
    "0x18006b0e0": ("config", "two-key feature gate", "body reads two bool keys through 0x180241610/0x1801fcfc0"),
    "0x1800b3740": ("engine", "sv_maxusrcmdprocessticks clamp", "body resolves a ConVar and clamps to 0x18..0x40"),
    "0x180140b70": ("reconstructed", "std::string character-filter helper", "src/features/renderer/ui_helpers.cpp:FilterAndTrim; mask 0x0800000400002401, cap 120, trim spaces"),
    "0x180142570": ("engine", "player_death subscription", "body registers the 'player_death' event"),
    "0x1801425f0": ("engine", "player_hurt subscription", "body registers the 'player_hurt' event"),
    "0x180144cf0": ("file", "thread-safe object copy", "body locks a CRT mutex and calls 0x18016d4c0"),
    "0x180144d80": ("engine", "console/ConVar output", "body prints 'no cvar name' and engine output"),
    "0x180145a20": ("engine", "connection-ready query", "body returns the engine 'Ready' state"),
    "0x180145c40": ("engine", "models/ path builder", "body uses the 'models/' prefix"),
    "0x180145f40": ("engine", "chat send", "body handles 'Not in a server', 'queued' and 'refused'"),
    "0x18014e010": ("file", "thread-safe object copy", "body locks a CRT mutex and calls 0x18016d4c0"),
    "0x18014e0a0": ("file", "global path-vector snapshot", "body locks DAT_1803e7a40 and clones the first-party global vector DAT_1803ea200; not STL-provided"),
    "0x18014e130": ("file", "thread-safe object cleanup", "body locks a CRT mutex and calls 0x18020aa50"),
    "0x180151970": ("file-sqlite", "cleaner rescan", "body walks the data directory; sqlite.h covers only the wipe plan"),
    "0x1801542d0": ("file-sqlite", "post-exit cleaner", "body reports '[DATA] post-exit cleaner failed: game root unresolved'"),
    "0x180154460": ("file-sqlite", "cleaner mutex/flag reset", "body locks a CRT mutex and calls 0x180153bc0"),
    "0x1801544e0": ("file-sqlite", "cleaner run", "body queues 'sql wipe: ...' and file cleanup"),
    "0x1801582f0": ("file", "cache wipe", "body uses 'addons', 'lua/*.lua' and 'lua/bin' paths"),
    "0x180158560": ("file", "one-time cache init", "body guards a one-time 0x1801582f0 cleanup"),
    "0x1801585e0": ("file", "cache entry bookkeeping", "body builds a cache entry vector and path"),
    "0x1801996a0": ("lua", "Lua dump", "body logs '[DUMP] Lua dumper enabled -> %s'"),
    "0x18019a460": ("imgui", "section heading", "renderer calls it with 'Loading screen', 'Data cleaner' (renderer:3104,4186)"),
    "0x18019a680": ("imgui", "help marker/popup", "body calls OpenPopup/0x180281720"),
    "0x18019cb40": ("imgui", "immediate-mode layout wrapper", "body uses '##' and ImGui layout/widget helpers"),
    "0x18019d4d0": ("imgui", "sibling activity slider row", "body uses 'sib_act' and ImGui slider helpers"),
    "0x18019dc00": ("imgui", "control wrapper", "body calls ImGui text/layout helpers"),
    "0x18019fbc0": ("imgui", "foreground color editor", "body uses '##Foreground' and ImGui color widgets"),
    "0x1801a0b60": ("imgui", "theme color resolver", "body uses 'mc_fill'/'mc_hover' and ImGui color APIs; hash primitive reconstructed separately"),
    "0x1801a16e0": ("imgui", "theme swatch/control", "body calls 0x1801a0b60 and keybind/layout helpers"),
    "0x1801a7a20": ("imgui", "formatted text/hint", "body calls vsnprintf (0x180012ac0) and 0x18019a460"),
    "0x1801a85a0": ("imgui", "formatted text/hint", "body calls vsnprintf (0x180012ac0) and 0x18019a460"),
    "0x1801df5d0": ("imgui", "styled label", "body uses PushStyleColor/PopStyleColor and TextEx"),
    "0x1801df700": ("imgui-engine", "spam keybind widget", "body uses '##spam_bind', '[Press a key]' and ImGui key capture"),
    "0x1801fcfc0": ("config", "std::any bool cast", "body performs the RTTI compare; source only records the address as kConfigBoolCast"),
    "0x1802028c0": ("config", "RTTI-checked std::any cast", "body compares a TypeDescriptor and copies the payload"),
    "0x1802029c0": ("config", "std::any int cast", "body performs the RTTI compare; source only records the address as kConfigIntCast"),
    "0x180202dc0": ("config", "RTTI-checked std::any cast", "body compares a TypeDescriptor and copies the payload"),
    "0x18020d5c0": ("stl", "vector<string> destructor", "body walks 0x20-byte string elements and frees the block"),
    "0x18020d6f0": ("stl", "vector<string> growth", "body reallocates and constructs 0x20-byte string elements"),
    "0x18020d830": ("stl", "vector<string> move assignment", "body destroys the old 0x20-byte elements and steals the three pointers"),
    "0x18020d910": ("stl", "vector<string> copy constructor", "body allocates and copies 0x20-byte string elements"),
    "0x18020e450": ("stl", "std::string destructor", "body frees the SSO/heap string block"),
    "0x18020e8a0": ("stl", "std::string move assignment", "body moves the SSO/heap string block"),
    "0x180212700": ("stl", "std::string assign", "body reallocates and memmoves string data"),
    "0x18021c730": ("stl", "vector<0x28-byte element> destructor", "body walks 0x28-byte elements, destroys the string at +8 and frees the block"),
    "0x180220c70": ("engine", "loading-screen picker thread", "body is passed to _beginthreadex, not called inline; uses 'Pick a loading screen page' and 'Web pages'"),
    "0x180241a30": ("config", "red-black map node lookup", "body walks a std::map node; source documents the address but has no map runtime"),
    "0x180268980": ("reconstructed", "ImGui ID CRC-32C hash", "src/features/config/ui_hash.h:ImGuiHash; tested in src/features/config/selftest.cpp; table checked against m64.dll VA 0x180331380 (table[1]=0xf26b8303)"),
    "0x18026a810": ("imgui", "PushStyleColor", "calls the ImGui style-color stack helper"),
    "0x18026a890": ("imgui", "PopStyleColor", "body contains 'Calling PopStyleColor() too many times!'"),
    "0x18026aad0": ("imgui", "PushStyleVar", "body contains 'Calling PushStyleVar() variant with wrong type!'"),
    "0x18026abb0": ("imgui", "PopStyleVar", "body contains 'Calling PopStyleVar() too many times!'"),
    "0x18026ee60": ("imgui", "IsItemHovered", "body contains 'Invalid flags for IsItemHovered()!'"),
    "0x180272ea0": ("imgui", "frame-height query", "body reads the ImGui frame metric"),
    "0x180272fa0": ("imgui", "float-pair layout setter", "body applies a two-float ImGui layout value"),
    "0x180273060": ("imgui", "path/name formatter", "body formats with '%s/%08X' and '%s/%s_%08X'"),
    "0x180273410": ("imgui", "frame begin/end", "body mutates the ImGui frame/context state"),
    "0x18027abf0": ("imgui", "child/window scope", "body enters an ImGui child/window scope"),
    "0x18027ae00": ("imgui", "window constraints", "body sets an ImGui window constraint"),
    "0x18027e9c0": ("imgui", "ErrorLog", "body matches ImGui::ErrorLog; contains '[imgui-error] In window', '(and more errors)' and the ErrorCallback tail; third_party/imgui/imgui.cpp:11138"),
    "0x18027f5b0": ("imgui", "window-size setter", "body applies a two-float ImGui window size"),
    "0x180280d00": ("imgui", "state guard", "body is a 71-byte ImGui state push/pop wrapper"),
    "0x180280fd0": ("imgui", "popup open", "body contains '[popup] OpenPopup'"),
    "0x180281800": ("imgui", "popup end", "body contains 'Calling EndPopup() in wrong window!'"),
    "0x1802899e0": ("imgui", "formatted text", "body formats '%d', '%p' and '0x%08X [override]'"),
    "0x18028a220": ("imgui", "ImVector growth (20-byte)", "body grows a 0x14-byte vector using ImGui allocators"),
    "0x18029e350": ("imgui", "CalcTextSize", "docs/stage-03.8-hvh.md:264,287 identifies this as text size"),
    "0x1802aaae0": ("imgui", "TextEx wrapper", "body forwards to 0x1802aab10"),
    "0x1802aabb0": ("imgui", "colored text", "body pushes a color, emits text and pops the color"),
    "0x1802aac80": ("imgui", "disabled text", "body reads the ImGui style alpha and emits text"),
    "0x1802abf60": ("imgui", "ImFormatStringV", "body formats into the ImGui text buffer"),
    "0x1802ac330": ("imgui", "TextUnformatted", "body forwards text without formatting"),
    "0x1802ae300": ("imgui", "progress bar", "body contains '%.0f%%'"),
    "0x1802af4c0": ("imgui", "tooltip begin", "body opens an ImGui tooltip scope"),
    "0x1802afb40": ("imgui", "tooltip end", "body closes an ImGui tooltip scope"),
    "0x1802b1200": ("imgui", "selectable", "body contains '*Unknown item*' and PopID()"),
    "0x1802b74e0": ("imgui", "window/child scope", "body contains '#SCROLLY' and '%*s%.*s'"),
    "0x1802c1850": ("imgui", "combo/popup scope", "body opens an ImGui combo/popup scope"),
    "0x1802d31a0": ("imgui-engine", "keybind capture widget", "body uses '[Press a key]###%s' and '[%s]###%s'"),
    "0x1802d8350": ("reconstructed", "malloc/new-handler allocator", "src/features/renderer/ui_helpers.cpp:AllocateOrThrow; body loops malloc + _callnewh"),
}

SELF = "0x1801d5ef0"

# These are the ImGui core implementations exercised by the renderer.  They are
# satisfied by the pinned v1.92.8 source, not first-party missing wrappers.
IMGUI_CORE = {
    "0x18026a810", "0x18026a890", "0x18026aad0", "0x18026abb0",
    "0x18026ee60", "0x180272ea0", "0x180272fa0", "0x180273060",
    "0x180273410", "0x18027abf0", "0x18027ae00", "0x18027e9c0",
    "0x18027f5b0", "0x180280d00", "0x180280fd0", "0x180281800",
    "0x1802899e0", "0x18028a220", "0x18029e350", "0x1802aaae0",
    "0x1802aabb0", "0x1802aac80", "0x1802abf60", "0x1802ac330",
    "0x1802ae300", "0x1802af4c0", "0x1802afb40", "0x1802b1200",
    "0x1802b74e0", "0x1802c1850",
}

# These are product-owned wrappers around ImGui; the vendored library does not
# provide them.  They remain genuinely unported.
IMGUI_FIRST_PARTY = set()

# MSVC STL release-ABI operations.  The project is compiled by the same x64
# release STL, so these are provided by the runtime rather than reimplemented.
STL_PROVIDED = {
    "0x18020d5c0", "0x18020d6f0", "0x18020d830", "0x18020d910",
    "0x18020e450", "0x18020e8a0", "0x180212700", "0x18021c730",
}

RECONSTRUCTED = {
    "0x180268980", "0x180012ac0", "0x18001d080", "0x180140b70",
    "0x1802d8350", "0x180014410",
    "0x18019a460", "0x18019a680", "0x18019cb40", "0x18019d4d0",
    "0x18019dc00", "0x18019fbc0", "0x1801a0b60", "0x1801a16e0",
    "0x1801a7a20", "0x1801a85a0", "0x1801df5d0", "0x1802d31a0",
    "0x1801df700",
    # Former missing rows now implemented in dependencies.cpp.
    "0x18006b0e0", "0x1800b3740", "0x180142570", "0x1801425f0",
    "0x180144cf0", "0x180144d80", "0x180145a20", "0x180145c40",
    "0x180145f40", "0x18014e010", "0x18014e0a0", "0x18014e130",
    "0x180151970", "0x1801542d0", "0x180154460", "0x1801544e0",
    "0x1801582f0", "0x180158560", "0x1801585e0", "0x1801996a0",
    "0x1801fcfc0", "0x1802028c0", "0x1802029c0", "0x180202dc0",
    "0x180220c70", "0x180241a30",
}

RECONSTRUCTED_SOURCES = {
    "0x18006b0e0": "src/features/renderer/dependencies.cpp:FeatureGate",
    "0x1800b3740": "src/features/renderer/dependencies.cpp:MaxUsrCmdProcessTicks",
    "0x180142570": "src/features/renderer/dependencies.cpp:PlayerDeathSubscribed",
    "0x1801425f0": "src/features/renderer/dependencies.cpp:PlayerHurtSubscribed",
    "0x180144cf0": "src/features/renderer/dependencies.cpp:SetStatusString",
    "0x180144d80": "src/features/renderer/dependencies.cpp:ConsoleOutput",
    "0x180145a20": "src/features/renderer/dependencies.cpp:ConnectionReady",
    "0x180145c40": "src/features/renderer/dependencies.cpp:NormalizeModelPath",
    "0x180145f40": "src/features/renderer/dependencies.cpp:SendChat",
    "0x18014e010": "src/features/renderer/dependencies.cpp:SetCleanerString",
    "0x18014e0a0": "src/features/renderer/dependencies.cpp:CopyCleanerPaths",
    "0x18014e130": "src/features/renderer/dependencies.cpp:CleanupGlobalState",
    "0x180151970": "src/features/renderer/dependencies.cpp:CleanerRescan",
    "0x1801542d0": "src/features/renderer/dependencies.cpp:CleanerPostExit",
    "0x180154460": "src/features/renderer/dependencies.cpp:CleanerReset",
    "0x1801544e0": "src/features/renderer/dependencies.cpp:ExecuteCleanerPlan",
    "0x1801582f0": "src/features/renderer/dependencies.cpp:ScanAddonCache",
    "0x180158560": "src/features/renderer/dependencies.cpp:InitAddonCache",
    "0x1801585e0": "src/features/renderer/dependencies.cpp:UpdateAddonCache",
    "0x1801996a0": "src/features/renderer/dependencies.cpp:DumpLuaState",
    "0x1801fcfc0": "src/features/renderer/dependencies.cpp:ConfigStore::GetBool",
    "0x1802028c0": "src/features/renderer/dependencies.cpp:AnyCast",
    "0x1802029c0": "src/features/renderer/dependencies.cpp:ConfigStore::GetInt",
    "0x180202dc0": "src/features/renderer/dependencies.cpp:ConfigStore::GetFloat",
    "0x180220c70": "src/features/renderer/dependencies.cpp:PickLoadingScreenPage",
    "0x180241a30": "src/features/renderer/dependencies.cpp:Lookup",
    "0x18019a460": "src/features/renderer/ui_widgets.cpp:QueueUiRecord",
    "0x18019a680": "src/features/renderer/ui_widgets.cpp:PopupUiLabel",
    "0x18019cb40": "src/features/renderer/ui_widgets.cpp:DrawCardButton",
    "0x18019d4d0": "src/features/renderer/ui_widgets.cpp:DrawSiblingActivityRow",
    "0x18019dc00": "src/features/renderer/ui_widgets.cpp:DrawControlCard",
    "0x18019fbc0": "src/features/renderer/ui_widgets.cpp:DrawForegroundEditor",
    "0x1801a0b60": "src/features/renderer/ui_widgets.cpp:DrawThemeColorButton",
    "0x1801a16e0": "src/features/renderer/ui_widgets.cpp:DrawThemeSwatchRow",
    "0x1801a7a20": "src/features/renderer/ui_widgets.cpp:DrawFloatHint",
    "0x1801a85a0": "src/features/renderer/ui_widgets.cpp:DrawIntHint",
    "0x1801df5d0": "src/features/renderer/ui_widgets.cpp:DrawStyledLabel",
    "0x1802d31a0": "src/features/renderer/ui_widgets.cpp:DrawKeybindRow",
    "0x1801df700": "src/features/renderer/ui_widgets.cpp:DrawSpamKeybindRow",
}

# Concrete missing dependency for rows whose group label alone would be too vague.
DEPENDENCY_OVERRIDES = {
    "0x18019a460": "first-party UI record vector DAT_1803fcbf0/DAT_1803fcbf8/DAT_1803fcc10, append helpers 0x180221dd0/0x18023a090, flag DAT_1803facfd and PTR_DAT_1803dc8c0/PTR_DAT_1803dc910",
    "0x18019a680": "first-party UI vector DAT_1803fcbf0/DAT_1803fcbf8/DAT_1803fcc00, popup string DAT_1803de0f0 and flag DAT_1803facfd",
    "0x18019cb40": "first-party 8,063-byte draw helper 0x18019ab20; body also reads style index DAT_1803fb24c and table DAT_1803dc9a8..DAT_1803dca34",
    "0x18019d4d0": "first-party 8,063-byte draw helper 0x18019ab20; body also reads style index DAT_1803fb24c and table DAT_1803dc9a8..DAT_1803dca34",
    "0x18019dc00": "first-party 8,063-byte draw helper 0x18019ab20; body also reads style table DAT_1803dca18..DAT_1803dca2c",
    "0x18019fbc0": "first-party helpers 0x18019a460 and 0x18019ab20; globals DAT_1803facfd/DAT_1803fa52c/DAT_1803dc900/DAT_1803dc8f0",
    "0x1801a0b60": "first-party helpers 0x18019a460/0x18019a7a0/0x1802ab600; style table DAT_1803dc978..DAT_1803dca34 and globals DAT_1803fb24c/DAT_1803da6a4",
    "0x1801a16e0": "first-party helpers 0x1801a0b60/0x1802d31a0; body also reads global scale DAT_1803da6a4",
    "0x1801a7a20": "first-party widget functions 0x1801a75c0/0x1801a6c50/0x18019a7a0; body also reads ImGuiContext fields through GImGui",
    "0x1801a85a0": "first-party widget functions 0x1801a75c0/0x1801a6c50/0x18019a7a0; body also reads ImGuiContext fields through GImGui",
    "0x1801df5d0": "first-party UI struct in param_1 (offsets +0x38/+0x58/+0x68/+0xa8), selected-tab global DAT_1803ffd74 and style global DAT_1803815e0",
    "0x180144cf0": "first-party global string DAT_1803e9f28 and mutex DAT_1803e83b0",
    "0x18014e010": "first-party global string DAT_1803ea218 and mutex DAT_1803e7a40",
    "0x18014e0a0": "first-party global path vector DAT_1803ea200 and mutex DAT_1803e7a40",
    "0x18014e130": "first-party global mutex DAT_1803e7a40 and 0x18020aa50 state",
    "0x1801582f0": "first-party addon cache vector DAT_1803e9df0..d8 and scan/append helpers 0x180157fb0/0x180223cb0",
    "0x180158560": "first-party addon cache mutex DAT_1803e8780, init flag DAT_180409d40 and 0x1801582f0",
    "0x1801585e0": "first-party addon cache vector DAT_1803e9df0..d8 and scan helper 0x180157fb0",
    "0x1800b3740": "typed EngineHost::convar_int boundary (live ConVar value; clamp policy reconstructed)",
    "0x180142570": "typed EngineHost::event_subscribed boundary (live player_death manager)",
    "0x1801425f0": "typed EngineHost::event_subscribed boundary (live player_hurt manager)",
    "0x180144d80": "typed EngineHost::console_print boundary (live engine console sink)",
    "0x180145a20": "typed EngineHost::connected_ready boundary (live connection state)",
    "0x180145f40": "typed EngineHost::chat_send boundary (live client chat send)",
    "0x180151970": "typed SqliteExecutor boundary (live SQLite connection; wipe plan reconstructed)",
    "0x1801542d0": "typed SqliteExecutor boundary (live SQLite connection; wipe plan reconstructed)",
    "0x1801544e0": "typed SqliteExecutor boundary (live SQLite connection; wipe plan reconstructed)",
    "0x1801996a0": "typed LuaDumpSource boundary (live Lua VM state/path)",
}


def main() -> None:
    rows = []
    with (ROOT / "re/dump/renderer/helpers/map.tsv").open(newline="") as f:
        for row in csv.DictReader(f, delimiter="\t"):
            a = row["address"]
            if a not in ROWS:
                raise SystemExit(f"unclassified helper: {a}")
            group, role, note = ROWS[a]
            if a in RECONSTRUCTED_SOURCES:
                note = f"{RECONSTRUCTED_SOURCES[a]}; {note}"
            if a in IMGUI_CORE:
                group = "imgui-provided"
            elif a in IMGUI_FIRST_PARTY:
                group = "imgui"
            elif a in STL_PROVIDED:
                group = "stl-provided"
            elif a in RECONSTRUCTED:
                group = "reconstructed"
            fname = Path(row["path"]).name
            rows.append(
                {
                    "address": a,
                    "group": group,
                    "size": row["size"],
                    "calls": row["calls"],
                    "bytes": row["bytes"],
                    "lines": row["lines"],
                    "status": row["status"],
                    "classification": GROUPS[group][0] if group != "reconstructed" else "reconstructed",
                    "dep": DEPENDENCY_OVERRIDES.get(a, GROUPS[group][1] if group != "reconstructed" else "standalone source"),
                    "role": role,
                    "evidence": f"{fname}:1; {note}",
                }
            )

    self_entry = {
        "address": SELF,
        "group": "entry",
        "size": "38613",
        "calls": "0 (self-reference)",
        "bytes": "194287",
        "lines": "5142",
        "status": "ok",
        "classification": "entry",
        "dep": "none",
        "role": "renderer entry point",
        "evidence": "0x1801d5ef0_FUN_1801d5ef0.c:1; body has only its own signature name, no call instruction to itself",
    }
    # Keep the map in the same order as the recovered body; the self row closes it.
    rows.append(self_entry)

    out_dir = ROOT / "re/dump/renderer"
    with (out_dir / "helpers/dependencies.tsv").open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=rows[0].keys(), delimiter="\t")
        w.writeheader()
        w.writerows(rows)

    counts = Counter(r["classification"] for r in rows)
    group_counts = Counter(r["group"] for r in rows)
    provided_imgui = group_counts.get("imgui-provided", 0)
    provided_stl = group_counts.get("stl-provided", 0)
    blocked = sum(group_counts.get(g, 0) for g in
                  ("engine", "imgui-engine", "config", "lua", "file-sqlite"))
    not_closed = sum(group_counts.get(g, 0) for g in
                     ("imgui", "file", "crt"))
    assert provided_imgui + provided_stl == counts["provided"]
    assert blocked + not_closed == counts["missing"]
    assert sum(counts.values()) == len(rows) == 84
    assert sum(group_counts.values()) == len(rows)
    assert counts["reconstructed"] == len(RECONSTRUCTED)
    assert group_counts.get("imgui", 0) == 0
    for address, source in RECONSTRUCTED_SOURCES.items():
        assert address in RECONSTRUCTED
        assert (ROOT / source.split(":", 1)[0]).is_file(), source
    header = (ROOT / "re/dump/renderer/DEPENDENCIES.header.md").read_text(encoding="utf-8")
    footer = (ROOT / "re/dump/renderer/DEPENDENCIES.footer.md").read_text(encoding="utf-8")
    lines = []
    lines.append("| Address | Size | Calls | Recovered | Class | Role / dependency | Evidence |")
    lines.append("|---|---:|---:|---|---|---|---|")
    for r in rows:
        rec = f"{r['bytes']} B / {r['lines']} L"
        if r["status"] != "ok":
            rec = r["status"]
        lines.append(
            f"| `{r['address']}` | {r['size']} | {r['calls']} | {rec} | "
            f"**{r['classification']}** | {r['role']} — {r['dep']} | "
            f"`{r['evidence']}` |"
        )
    newline = chr(10)
    out = header + newline.join(lines) + newline + newline + footer
    (out_dir / "DEPENDENCIES.md").write_text(out, encoding="utf-8", newline=chr(10))


if __name__ == "__main__":
    main()
