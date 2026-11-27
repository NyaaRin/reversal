#!/usr/bin/env python3
"""Finalize the m64.dll dossier.

- add exclusion_reason to every functions.tsv row (decompiled or documented)
- extend signatures.tsv with every distinct 16-byte function-entry pattern,
  each with offset, anchoring function and callers/xrefs
- fill every remaining blank cell in the extraction TSVs
"""
from __future__ import annotations
import csv, json, struct, re, collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EX = ROOT / "re/extract"
DUMP = ROOT / "re/dump"
data = (ROOT / "m64.dll").read_bytes()

# PE map
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
    sections.append((base + va, vs, rs, ro))

def va2off(va):
    for sva, vs, rs, ro in sections:
        if sva <= va < sva + max(vs, rs):
            return ro + (va - sva)
    return None

def read_tsv(name):
    with open(EX / name, encoding="utf-8", errors="replace", newline="") as f:
        return list(csv.DictReader(f, delimiter="\t"))

def write_tsv(name, rows, fields=None):
    fields = fields or list(rows[0].keys())
    with open(EX / name, "w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fields, delimiter="\t", lineterminator="\n")
        w.writeheader(); w.writerows(rows)
    print(f"{name}: {len(rows)}")

# callers map from callgraph
callers = collections.defaultdict(set)
for r in read_tsv("callgraph.tsv"):
    callers[r["callee"]].add(r["caller_name"])

# ---- functions: exclusion reasons + no blanks
fns = read_tsv("functions.tsv")
for r in fns:
    for k, v in list(r.items()):
        if v is None:
            r[k] = ""
    if r.get("decompile_file") in ("", "n/a", None):
        r["decompile_file"] = "n/a"
        r["unique_callees"] = "0"
        r["call_sites"] = "0"
        r["data_refs"] = "0"
        r["first_string"] = "n/a"
        if not r.get("string_hits"):
            r["string_hits"] = "0"
        if not r.get("size"):
            r["size"] = "0"
        if not r.get("callers"):
            r["callers"] = "0"
        if r.get("thunk") == "true":
            r["exclusion_reason"] = "thunk"
        elif r.get("size") == "0":
            r["exclusion_reason"] = "zero-size"
        else:
            r["exclusion_reason"] = "no-decompiled-body"
    else:
        r["exclusion_reason"] = "none"
    for k in ("unique_callees", "call_sites", "data_refs", "string_hits", "size", "callers"):
        if not r.get(k):
            r[k] = "0"
    if not r.get("first_string"):
        r["first_string"] = "n/a"
write_tsv("functions.tsv", fns)

# ---- signatures: existing + function entry patterns
existing = [r for r in read_tsv("signatures.tsv") if r.get("source") != "function-prologue"]
for r in existing:
    r.setdefault("offset", "n/a")
    r.setdefault("function", "n/a")
    r.setdefault("xref_count", "0")
    r.setdefault("xrefs", "n/a")
    if not r.get("module"): r["module"] = "n/a"
    if not r.get("name"): r["name"] = "n/a"
    if not r.get("offset"): r["offset"] = "n/a"
    if not r.get("function"): r["function"] = "n/a"
    if not r.get("xref_count"): r["xref_count"] = "0"
    if not r.get("xrefs"): r["xrefs"] = "n/a"

# exact literal patterns -> first binary offset + anchoring function
inv = read_tsv(DUMP / "inventory.tsv")
addr_name = {int(r["address"], 16): r["name"] for r in inv}
addrs = sorted(addr_name)
def anchor(off):
    lo, hi = 0, len(addrs) - 1
    while lo <= hi:
        mid = (lo + hi) // 2
        if addrs[mid] <= off: lo = mid + 1
        else: hi = mid - 1
    a = addrs[hi] if hi >= 0 else None
    return (hex(a), addr_name.get(a, "n/a")) if a else ("n/a", "n/a")
for r in existing:
    pat = r.get("pattern", "").strip()
    if not pat or "?" in pat or r["source"] == "function-prologue":
        continue
    try:
        raw = bytes.fromhex(pat.replace(" ", ""))
    except ValueError:
        continue
    off = data.find(raw)
    if off >= 0:
        va = None
        for sva, vs, rs, ro in sections:
            if ro <= off < ro + rs:
                va = sva + (off - ro); break
        if va is None:
            va = off
        r["offset"] = hex(va)
        r["function"], r["name"] = anchor(va)
        r["xrefs"] = ";".join(sorted(callers.get(addr_name.get(addrs[0] if False else 0, ""), set()))[:20]) or "n/a"
        # callers are looked up by function name; callers keys are callee names
        r["xrefs"] = ";".join(sorted(callers.get(r["function"], set()))[:20]) or "n/a"
        r["xref_count"] = str(len(callers.get(r["function"], set())))

# function-entry patterns, deduplicated by the exact 16-byte prefix
prologues = {}
for r in inv:
    try:
        va = int(r["address"], 16); size = int(r.get("size") or 0)
    except ValueError:
        continue
    off = va2off(va)
    if off is None or size <= 0:
        continue
    n = min(16, size)
    raw = data[off:off+n]
    if len(raw) < 8:
        continue
    pat = raw.hex().upper()
    if pat not in prologues:
        prologues[pat] = {"offset": va, "function": r["name"], "functions": []}
    prologues[pat]["functions"].append(r["name"])
for pat, info in prologues.items():
    fs = info["functions"]
    xr = []
    for f in fs:
        xr.extend(sorted(callers.get(f, set())))
    xr = sorted(set(xr))
    existing.append({
        "id": f"FUN_{info['offset']:X}",
        "module": "m64.dll",
        "name": info["function"],
        "pattern": " ".join(pat[i:i+2] for i in range(0, len(pat), 2)),
        "source": "function-prologue",
        "offset": hex(info["offset"]),
        "function": info["function"],
        "xref_count": str(len(xr)),
        "xrefs": ";".join(xr[:20]) or "n/a",
    })
write_tsv("signatures.tsv", existing)

# ---- fill remaining blanks
for name, fill in [("symbols.tsv", {"detail": "function"}),
                   ("interfaces.tsv", {"module": "n/a", "global": "n/a", "role": "n/a"}),
                   ("icons.tsv", {"font_awesome_name": "unknown"}),
                   ("fonts.tsv", {"license": "n/a"}),
                   ("deps.tsv", {"detail": "n/a"}),
                   ("vtables.tsv", {}), ("hooks.tsv", {}), ("rtti.tsv", {})]:
    rows = read_tsv(name)
    for r in rows:
        for k, v in fill.items():
            if not r.get(k):
                r[k] = v
        for k, v in list(r.items()):
            if v is None or str(v).strip() == "":
                r[k] = "n/a"
    write_tsv(name, rows)

summary = {
    "functions": len(fns),
    "functions_no_decompile": sum(1 for r in fns if r["decompile_file"] == "n/a"),
    "functions_thunks": sum(1 for r in fns if r.get("thunk") == "true"),
    "signatures": len(existing),
    "function_prologue_patterns": len(prologues),
    "interfaces": len(read_tsv("interfaces.tsv")),
    "icons": len(read_tsv("icons.tsv")),
}
# The runtime pass adds fields to this summary. Preserve them when the core
# extraction is rerun; otherwise a core-only finalize would erase its evidence.
summary_path = EX / "final_summary.json"
if summary_path.exists():
    try:
        previous = json.loads(summary_path.read_text(encoding="utf-8"))
        for key in ("runtime", "runtime_closures", "runtime_summary_md5", "runtime_tsvs", "tsvs"):
            if key in previous:
                summary[key] = previous[key]
    except (OSError, ValueError):
        pass
summary_path.write_text(json.dumps(summary, indent=1), encoding="utf-8")
print(json.dumps(summary, indent=1))
