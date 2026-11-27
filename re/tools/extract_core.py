#!/usr/bin/env python3
"""Core m64.dll extraction: functions, call graph, hooks, interfaces, signatures,
vtables, RTTI, types, netvars, cvars, Lua API strings, events, deps, symbols."""
from __future__ import annotations
import csv, json, re, hashlib, collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
RE = ROOT / "re"
DUMP = RE / "dump"
OUT = RE / "extract"
OUT.mkdir(parents=True, exist_ok=True)

def read_tsv(path):
    with open(path, encoding="utf-8", errors="replace", newline="") as f:
        return list(csv.DictReader(f, delimiter="\t"))

def write_tsv(name, header, rows):
    with open(OUT / name, "w", encoding="utf-8", newline="") as f:
        w = csv.writer(f, delimiter="\t", lineterminator="\n")
        w.writerow(header); w.writerows(rows)
    print(f"{name}: {len(rows)}")

inventory = read_tsv(DUMP / "inventory.tsv")
vtable_methods = read_tsv(DUMP / "vtable_methods.tsv")
datatypes = read_tsv(DUMP / "datatypes.tsv")
rtti = read_tsv(DUMP / "rtti_classes.tsv")
imports = read_tsv(DUMP / "imports.tsv")
strings_by_fn = read_tsv(DUMP / "strings_by_function.tsv")
offsets = json.loads((ROOT / "src/offsets/offsets.json").read_text(encoding="utf-8"))
all_strings = [ln.rstrip("\r\n") for ln in open(DUMP / "strings_all.txt", encoding="utf-8", errors="replace")]
fn_by_addr = {int(r["address"], 16): r for r in inventory}
strings_by_addr = collections.defaultdict(list)
for r in strings_by_fn:
    try: strings_by_addr[int(r["address"], 16)].append(r["string"])
    except ValueError: pass

# functions + call graph + data refs
call_re = re.compile(r"\b(FUN_[0-9a-fA-F]{8,})\s*\(")
data_re = re.compile(r"\b(DAT|PTR|LAB|UNK)_([0-9a-fA-F]{8,})\b")
call_rows, xref_rows, fn_rows = [], [], []
# Ghidra renamed many bodies from FUN_* to class/vfunc names after the first
# extraction pass. Scan every function file and key by its address header;
# include the two recovered long bodies in preference to their timeout stubs.
body_paths = sorted((DUMP / "decompile").glob("0x*.c"))
body_paths += sorted((DUMP / "recovered_f30").glob("0x*.c"))
body_paths += sorted((DUMP / "renderer").glob("0x*.c"))
# Parse every decompiled body, then merge with the full inventory so the
# inventory-only functions (thunks / zero-size / no body) keep their rows.
decomp_by_addr = {}
for p in body_paths:
    text = p.read_text(encoding="utf-8", errors="replace")
    m = re.match(r"//\s*(?:0x)?([0-9a-fA-F]{8,})\s+(\S+)", text)
    if not m: continue
    status_match = re.search(r"// status:\s*(\S+)", text[:500])
    if status_match and not status_match.group(1).startswith("ok"):
        continue
    addr, name = int(m.group(1), 16), m.group(2)
    previous = decomp_by_addr.get(addr)
    if previous is not None and len(previous[3]) >= len(text):
        continue
    calls = collections.Counter(call_re.findall(text))
    for callee, count in sorted(calls.items()):
        call_rows.append([hex(addr), name, callee, callee, count])
    refs = collections.Counter(f"{k}_{v}" for k, v in data_re.findall(text))
    for ref, count in sorted(refs.items()):
        xref_rows.append([hex(addr), name, ref, ref, count])
    decomp_by_addr[addr] = (name, calls, refs, str(p.relative_to(DUMP)).replace("\\", "/"))
for inv in inventory:
    addr = int(inv["address"], 16)
    strs = strings_by_addr.get(addr, [])
    if addr in decomp_by_addr:
        name, calls, refs, decomp_file = decomp_by_addr[addr]
        fn_rows.append([hex(addr), name, inv.get("size",""), inv.get("callers",""),
                        inv.get("isThunk",""), inv.get("stringHits",len(strs)),
                        len(calls), sum(calls.values()), len(refs),
                        (strs[0][:160] if strs else ""), decomp_file])
    else:
        fn_rows.append([hex(addr), inv["name"], inv.get("size","0"), inv.get("callers","0"),
                        inv.get("isThunk","false"), inv.get("stringHits",len(strs)),
                        0, 0, 0, (strs[0][:160] if strs else ""), "n/a"])
write_tsv("functions.tsv", ["address","name","size","callers","thunk","string_hits","unique_callees","call_sites","data_refs","first_string","decompile_file"], fn_rows)
write_tsv("callgraph.tsv", ["caller","caller_name","callee","callee_name","call_sites"], call_rows)
write_tsv("xrefs.tsv", ["from","from_name","to","to_name","ref_count"], xref_rows)

# hooks / offsets / signatures
hooks = []
for h in offsets.get("hooks", []) + offsets.get("core_hooks", []):
    hooks.append([h.get("id",""), h.get("interface",""), h.get("global",""), h.get("slot",""),
                  h.get("vtable_offset",""), h.get("stub",""), h.get("original",""),
                  h.get("purpose",""), h.get("abi",""), h.get("feature",""), h.get("runtime","")])
write_tsv("hooks.tsv", ["id","interface","global","slot","vtable_offset","stub","original","purpose","abi","feature","runtime"], hooks)

# The runtime pass resolves the CreateInterface call sites and owns the
# authoritative module/global table. Preserve it when present; rebuilding it
# from strings alone would regress the resolved rows to "string-only".
if (OUT / "interfaces.tsv").exists():
    iface_rows = [[r.get("name",""), r.get("module",""), r.get("global",""), r.get("role","")]
                  for r in read_tsv(OUT / "interfaces.tsv")]
else:
    iface_rows = [[i.get("name",""), i.get("module",""), i.get("global",""), i.get("role","")] for i in offsets.get("interfaces", [])]
    iface_re = re.compile(r"^(V[A-Z][A-Za-z0-9_]{2,}|LUASHARED\d+|VGUI_Panel\d+|InputSystemVersion\d+|VEngine[A-Za-z]+\d+|VClient[A-Za-z]*\d+|VMaterialSystem\d+|VDebugOverlay\d+)$")
    # Reject the short mangled strings that also match the broad V... shape
    # (VWAVH, VUUU, VECTOR, VGui, ...). Keep only real CreateInterface names.
    iface_family = re.compile(r"^(?:VGUI_|VBaseFileSystem|VFileSystem|VEngine|VModelInfoClient|VPhysics|VClientDllSharedAppSystems|VENGINE_LAUNCHER)")
    seen = {r[0] for r in iface_rows}
    for s in all_strings:
        if iface_re.match(s) and iface_family.match(s) and s not in seen:
            seen.add(s); iface_rows.append([s, "", "", "string-only"])
write_tsv("interfaces.tsv", ["name","module","global","role"], iface_rows)

sig_rows = [[s.get("id",""), s.get("module",""), s.get("name",""), s.get("bytes",""), "offsets.json"] for s in offsets.get("signatures", [])]
for s in all_strings:
    if re.fullmatch(r"(?:[0-9A-Fa-f]{2} ){5,}[0-9A-Fa-f?]{2}", s.strip()):
        sig_rows.append(["string-pattern", "", "", s.strip(), "strings_all"])
write_tsv("signatures.tsv", ["id","module","name","pattern","source"], sig_rows)

# vtables / types / rtti
write_tsv("vtables.tsv", ["class","slot","address","current_name","applied_name"],
          [[r["class"],r["slot"],r["address"],r["currentName"],r["applied"]] for r in vtable_methods])
write_tsv("datatypes.tsv", ["kind","name","length","path"],
          [[r["kind"],r["name"],r["length"],r["path"]] for r in datatypes])
write_tsv("rtti.tsv", ["class","vtable_rva","vtable_count","col_rva","num_bases","bases"],
          [[r["class"],r["vtableRva"],r["vtableCount"],r["colRva"],r["numContainedBases"],r["bases"]] for r in rtti])

# strings -> netvars, cvars, lua, events
def collect(regex, min_len=3):
    c = collections.Counter()
    for s in all_strings:
        for m in regex.findall(s):
            if len(m) >= min_len: c[m] += 1
    return [[k,v] for k,v in sorted(c.items())]
netvars = collect(re.compile(r"\bm_[A-Za-z0-9_]{2,}"))
cvars = collect(re.compile(r"\b(?:sv|cl|r|mat|host|mp|gm|ai|phys|sound|ui|vgui|game|sensitivity|zoom|fov|view|weapon|hud|demo|tv|nb|scene|mod|pp|lb|build|cc|spec|ent|prop|npc|player|skill|ammo|item|physcannon)_[A-Za-z0-9_]{1,}"))
lua = collect(re.compile(r"\b(?:mayrr|sf|skyfall)\.[A-Za-z0-9_.]+|\b(?:lua_|Lua)[A-Za-z0-9_]+"))
events = collect(re.compile(r"\b(?:player_hurt|entity_killed|OnEntityCreated|EntityRemoved|player_spawn|player_death|weapon_fire|postrender|prerender|render|think|Tick|CreateMove|FrameStageNotify|FireGameEvent|ClientMode)[A-Za-z0-9_]*\b"))
write_tsv("netvars.tsv", ["name","occurrences"], netvars)
write_tsv("cvars.tsv", ["name","occurrences"], cvars)
write_tsv("lua_api.tsv", ["name","occurrences"], lua)
write_tsv("events.tsv", ["name","occurrences"], events)

# deps
dep_rows, by_lib = [], collections.defaultdict(list)
for r in imports: by_lib[r["library"]].append(r["name"])
for lib, names in sorted(by_lib.items()):
    dep_rows.append([lib, "import-dll", len(names), ";".join(sorted(set(names))[:40])])
for s in ["ImGui","Lua","lua_shared","MinHook","Detours","imgui","stb","Freetype","freetype","OpenSSL","curl","zlib","Font Awesome","DirectX","D3D9"]:
    hits = sum(1 for x in all_strings if s in x)
    if hits: dep_rows.append([s, "string", hits, ""])
write_tsv("deps.tsv", ["name","kind","count","detail"], dep_rows)

# symbols
sym_rows = []
for r in inventory: sym_rows.append([r["address"], r["name"], "function", r.get("size","")])
for r in vtable_methods: sym_rows.append([r["address"], r["applied"], "vtable", r["class"]+":"+r["slot"]])
for r in rtti: sym_rows.append([hex(0x180000000+int(r["vtableRva"],16)), r["class"], "rtti", r["bases"]])
for h in hooks:
    if h[5]: sym_rows.append([h[5], h[0]+"_stub", "hook-stub", h[1]])
    if h[6]: sym_rows.append([h[6], h[0]+"_original", "hook-original", h[1]])
write_tsv("symbols.tsv", ["address","name","kind","detail"], sym_rows)

summary = {"functions":len(fn_rows),"call_edges":len(call_rows),"xrefs":len(xref_rows),
           "hooks":len(hooks),"interfaces":len(iface_rows),"signatures":len(sig_rows),
           "vtables":len(vtable_methods),"rtti":len(rtti),"datatypes":len(datatypes),
           "netvars":len(netvars),"cvars":len(cvars),"lua":len(lua),"events":len(events),
           "deps":len(dep_rows),"symbols":len(sym_rows),
           "decompiled":sum(1 for a in decomp_by_addr if a in {int(r["address"],16) for r in inventory}),
           "strings":len(all_strings),"md5":hashlib.md5((ROOT/"m64.dll").read_bytes()).hexdigest()}
(OUT/"core_summary.json").write_text(json.dumps(summary, indent=1), encoding="utf-8")
print(json.dumps(summary, indent=1))
