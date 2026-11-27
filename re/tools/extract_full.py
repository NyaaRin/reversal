#!/usr/bin/env python3
"""Full m64.dll extraction dossier.

Reads the unpacked PE plus the Ghidra exports already in re/dump and emits a
single reproducible dossier under re/extract/.  No third-party modules.
"""
from __future__ import annotations
import csv, json, os, re, struct, sys, hashlib, collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]          # Gmod/Skyfall
RE = ROOT / "re"
DUMP = RE / "dump"
OUT = RE / "extract"
ASSETS = OUT / "assets"
DLL = ROOT / "m64.dll"
IMAGE_BASE = 0x180000000

OUT.mkdir(parents=True, exist_ok=True)
ASSETS.mkdir(parents=True, exist_ok=True)

def read_tsv(path):
    with open(path, encoding="utf-8", errors="replace", newline="") as f:
        return list(csv.DictReader(f, delimiter="\t"))

def write_tsv(name, header, rows):
    p = OUT / name
    with open(p, "w", encoding="utf-8", newline="") as f:
        w = csv.writer(f, delimiter="\t", lineterminator="\n")
        w.writerow(header)
        w.writerows(rows)
    print(f"{name}: {len(rows)} rows")
    return p

# ---------------------------------------------------------------- PE
data = DLL.read_bytes()
pe = struct.unpack_from("<I", data, 0x3C)[0]
nsec = struct.unpack_from("<H", data, pe + 6)[0]
opt = pe + 24
base = struct.unpack_from("<Q", data, opt + 24)[0]
sec_tab = opt + struct.unpack_from("<H", data, pe + 20)[0]
sections = []
for i in range(nsec):
    o = sec_tab + i * 40
    name = data[o:o+8].split(b"\0")[0].decode("latin1")
    vs, va, rs, ro = struct.unpack_from("<IIII", data, o + 8)
    sections.append(dict(name=name, va=base+va, vs=vs, raw=ro, rs=rs))
def va2off(va):
    for s in sections:
        if s["va"] <= va < s["va"] + max(s["vs"], s["rs"]):
            return s["raw"] + (va - s["va"])
    return None
def off2va(off):
    for s in sections:
        if s["raw"] <= off < s["raw"] + s["rs"]:
            return s["va"] + (off - s["raw"])
    return None
def va_bytes(va, n):
    o = va2off(va)
    return data[o:o+n] if o is not None else b""

# ---------------------------------------------------------------- inputs
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
    try:
        strings_by_addr[int(r["address"], 16)].append(r["string"])
    except ValueError:
        pass

# ---------------------------------------------------------------- functions + call graph
decomp = sorted((DUMP / "decompile").glob("0x*_FUN_*.c"))
call_rows = []
xref_rows = []
fn_rows = []
call_re = re.compile(r"\b(FUN_[0-9a-fA-F]{8,})\s*\(")
data_re = re.compile(r"\b(DAT|PTR|LAB|UNK)_([0-9a-fA-F]{8,})\b")
for p in decomp:
    text = p.read_text(encoding="utf-8", errors="replace")
    m = re.search(r"//\s*(0x[0-9a-fA-F]+)\s+(FUN_[0-9a-fA-F]+)", text)
    if not m:
        continue
    addr = int(m.group(1), 16)
    name = m.group(2)
    calls = collections.Counter(call_re.findall(text))
    for callee, count in sorted(calls.items()):
        call_rows.append([hex(addr), name, callee, "", count])
    refs = collections.Counter(f"{k}_{v}" for k, v in data_re.findall(text))
    for ref, count in sorted(refs.items()):
        xref_rows.append([hex(addr), name, ref, "", count])
    inv = fn_by_addr.get(addr, {})
    strs = strings_by_addr.get(addr, [])
    fn_rows.append([hex(addr), name, inv.get("size", ""), inv.get("callers", ""),
                    inv.get("isThunk", ""), inv.get("stringHits", len(strs)),
                    len(calls), sum(calls.values()), len(refs),
                    (strs[0][:160] if strs else ""), p.name])
# resolve names
addr_by_name = {r["name"]: int(r["address"], 16) for r in inventory}
for row in call_rows:
    row[3] = row[2]
for row in xref_rows:
    row[3] = row[2]
write_tsv("functions.tsv", ["address","name","size","callers","thunk","string_hits","unique_callees","call_sites","data_refs","first_string","decompile_file"], fn_rows)
write_tsv("callgraph.tsv", ["caller","caller_name","callee","callee_name","call_sites"], call_rows)
write_tsv("xrefs.tsv", ["from","from_name","to","to_name","ref_count"], xref_rows)

# ---------------------------------------------------------------- hooks / offsets / signatures
hooks = []
for h in offsets.get("hooks", []) + offsets.get("core_hooks", []):
    hooks.append([h.get("id",""), h.get("interface",""), h.get("global",""), h.get("slot",""),
                  h.get("vtable_offset",""), h.get("stub",""), h.get("original",""),
                  h.get("purpose",""), h.get("abi",""), h.get("feature",""), h.get("runtime","")])
write_tsv("hooks.tsv", ["id","interface","global","slot","vtable_offset","stub","original","purpose","abi","feature","runtime"], hooks)

iface_rows = []
for i in offsets.get("interfaces", []):
    iface_rows.append([i.get("name",""), i.get("module",""), i.get("global",""), i.get("role","")])
# every CreateInterface-style version string in the binary
iface_re = re.compile(r"^(V[A-Z][A-Za-z0-9_]{2,}|LUASHARED\d+|VGUI_Panel\d+|InputSystemVersion\d+|VEngine[A-Za-z]+\d+|VClient[A-Za-z]*\d+|VMaterialSystem\d+|VDebugOverlay\d+)$")
seen = {r[0] for r in iface_rows}
for s in all_strings:
    if iface_re.match(s) and s not in seen:
        seen.add(s); iface_rows.append([s, "", "", "string-only"])
write_tsv("interfaces.tsv", ["name","module","global","role"], iface_rows)

sig_rows = []
for s in offsets.get("signatures", []):
    sig_rows.append([s.get("id",""), s.get("module",""), s.get("name",""), s.get("bytes",""), "offsets.json"])
# signature-like strings in the binary
for s in all_strings:
    if re.fullmatch(r"(?:[0-9A-Fa-f]{2} ){5,}[0-9A-Fa-f?]{2}", s.strip()):
        sig_rows.append(["string-pattern", "", "", s.strip(), "strings_all"])
write_tsv("signatures.tsv", ["id","module","name","pattern","source"], sig_rows)

# ---------------------------------------------------------------- vtables / types / rtti
vt_rows = [[r["class"], r["slot"], r["address"], r["currentName"], r["applied"]] for r in vtable_methods]
write_tsv("vtables.tsv", ["class","slot","address","current_name","applied_name"], vt_rows)
type_rows = [[r["kind"], r["name"], r["length"], r["path"]] for r in datatypes]
write_tsv("datatypes.tsv", ["kind","name","length","path"], type_rows)
rtti_rows = [[r["class"], r["vtableRva"], r["vtableCount"], r["colRva"], r["numContainedBases"], r["bases"]] for r in rtti]
write_tsv("rtti.tsv", ["class","vtable_rva","vtable_count","col_rva","num_bases","bases"], rtti_rows)

# ---------------------------------------------------------------- strings -> netvars/cvars/lua/events
netvar_re = re.compile(r"\bm_[A-Za-z0-9_]{2,}")
cvar_re = re.compile(r"\b(?:sv|cl|r|mat|host|mp|gm|ai|phys|sound|ui|vgui|game|sensitivity|zoom|fov|view|weapon|hud|demo|tv|nb|scene|mod|pp|lb|build|cc|spec|ent|prop|npc|player|skill|ammo|item|physcannon)_[A-Za-z0-9_]{1,}")
lua_re = re.compile(r"\b(?:mayrr|sf|skyfall)\.[A-Za-z0-9_.]+|\b(?:lua_|Lua)[A-Za-z0-9_]+")
event_re = re.compile(r"\b(?:player_hurt|entity_killed|OnEntityCreated|EntityRemoved|player_spawn|player_death|weapon_fire|postrender|prerender|render|think|Tick|CreateMove|FrameStageNotify|FireGameEvent|ClientMode)[A-Za-z0-9_]*\b")
def collect(regex, label, min_len=3):
    counts = collections.Counter()
    for s in all_strings:
        for m in regex.findall(s):
            if len(m) >= min_len:
                counts[m] += 1
    return [[k, v] for k, v in sorted(counts.items())]
netvars = collect(netvar_re, "netvar")
cvars = collect(cvar_re, "cvar")
lua = collect(lua_re, "lua")
events = collect(event_re, "event")
write_tsv("netvars.tsv", ["name","occurrences"], netvars)
write_tsv("cvars.tsv", ["name","occurrences"], cvars
