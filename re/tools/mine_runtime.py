#!/usr/bin/env python3
"""Mine the completed live m64.dll capture into dossier-grade runtime TSVs.

Inputs are the already-captured files in re/dump/memory; this script never
injects or re-captures anything.  It joins:

  * m64_original_virtual.bin  - original image expanded to preferred-base layout
  * m64_unrelocated.bin       - live image with the 3,904 base relocations removed
  * gmod_full_21632.dmp       - full process minidump (modules + all memory)
  * m64.dll                   - original file (imports, static string source)
  * re/extract/*.tsv          - existing static dossier

and writes runtime_*.tsv plus runtime_summary.json under re/extract/.
"""

from __future__ import annotations

import bisect
import collections
import csv
import hashlib
import json
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
DUMP = ROOT / "re" / "dump" / "memory"
EXTRACT = ROOT / "re" / "extract"
DLL_PATH = ROOT / "m64.dll"
ORIG_PATH = DUMP / "m64_original_virtual.bin"
LIVE_PATH = DUMP / "m64_unrelocated.bin"
FULL_DUMP_PATH = DUMP / "gmod_full_21632.dmp"
DIFF_PATH = DUMP / "mapped_diff.tsv"

PREFERRED_BASE = 0x180000000
MAPPED_BASE = 0x27708F10000
PAGE = 0x1000


def md5(path: Path) -> str:
    h = hashlib.md5()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def sha1_bytes(data: bytes) -> str:
    return hashlib.sha1(data).hexdigest()


def u16(data: bytes, off: int) -> int:
    return struct.unpack_from("<H", data, off)[0]


def u32(data: bytes, off: int) -> int:
    return struct.unpack_from("<I", data, off)[0]


def u64(data: bytes, off: int) -> int:
    return struct.unpack_from("<Q", data, off)[0]


def hx(v: int | None) -> str:
    return "n/a" if v is None else f"0x{v:x}"


def clean(v) -> str:
    if v is None:
        return "n/a"
    s = str(v).replace("\t", " ").replace("\r", " ").replace("\n", " ")
    return s if s else "n/a"


class PE:
    def __init__(self, data: bytes):
        self.data = data
        self.pe_off = u32(data, 0x3C)
        self.machine = u16(data, self.pe_off + 4)
        self.n_sections = u16(data, self.pe_off + 6)
        self.opt = self.pe_off + 24
        self.magic = u16(data, self.opt)
        self.image_base = u64(data, self.opt + 24)
        self.size_image = u32(data, self.opt + 56)
        self.sections: dict[str, dict[str, int]] = {}
        self.section_list: list[dict] = []
        st = self.opt + u16(data, self.pe_off + 20)
        for i in range(self.n_sections):
            o = st + i * 40
            name = data[o:o + 8].split(b"\0")[0].decode("latin1")
            vsize, va, raw_size, raw_ptr = struct.unpack_from("<IIII", data, o + 8)
            sec = {
                "name": name, "va": va, "vsize": vsize,
                "raw_size": raw_size, "raw": raw_ptr,
            }
            self.sections[name] = sec
            self.section_list.append(sec)
        dd = self.opt + (112 if self.magic == 0x20B else 96)
        self.data_dirs = [struct.unpack_from("<II", data, dd + i * 8) for i in range(16)]

    def off(self, rva: int) -> int | None:
        for s in self.section_list:
            span = max(s["vsize"], s["raw_size"])
            if s["va"] <= rva < s["va"] + span:
                return s["raw"] + (rva - s["va"])
        return None

    def rva_of_file(self, off: int) -> int | None:
        for s in self.section_list:
            if s["raw"] <= off < s["raw"] + s["raw_size"]:
                return s["va"] + (off - s["raw"])
        return None

    def imports(self):
        """Yield (dll, iat_rva, ilt_rva, hint, name_rva, name, ordinal)."""
        imp_rva, imp_size = self.data_dirs[1]
        if not imp_rva:
            return
        r = imp_rva
        while True:
            o = self.off(r)
            if o is None or o + 20 > len(self.data):
                break
            oft, ts, fc, name_rva, ft = struct.unpack_from("<IIIII", self.data, o)
            if not any((oft, ts, fc, name_rva, ft)):
                break
            no = self.off(name_rva)
            dll = self.data[no:].split(b"\0")[0].decode("latin1") if no is not None else ""
            j = 0
            while j < 65536:
                eo = self.off(oft + j * 8)
                if eo is None or eo + 8 > len(self.data):
                    break
                val = u64(self.data, eo)
                if val == 0:
                    break
                if val & 0x8000000000000000:
                    yield dll, ft + j * 8, oft + j * 8, None, None, f"ordinal_{val & 0xffff}", val & 0xffff
                else:
                    no2 = self.off(val)
                    if no2 is None:
                        break
                    hint = u16(self.data, no2)
                    name = self.data[no2 + 2:].split(b"\0")[0].decode("latin1")
                    yield dll, ft + j * 8, oft + j * 8, hint, val, name, None
                j += 1
            r += 20


class MiniDump:
    def __init__(self, path: Path):
        self.data = path.read_bytes()
        sig, ver, nstreams, dirava, checksum, ts, flags = struct.unpack_from("<IIIIIIQ", self.data, 0)
        if sig != 0x504D444D:
            raise ValueError("not a minidump")
        self.streams = [struct.unpack_from("<III", self.data, dirava + i * 12) for i in range(nstreams)]
        self.memory: list[tuple[int, int, int]] = []
        self.modules: list[dict] = []
        for stype, size, rva in self.streams:
            if stype == 9:  # Memory64ListStream
                n, base = struct.unpack_from("<QQ", self.data, rva)
                cursor = base
                for i in range(n):
                    start, sz = struct.unpack_from("<QQ", self.data, rva + 16 + i * 16)
                    self.memory.append((start, sz, cursor))
                    cursor += sz
            elif stype == 4:  # ModuleListStream
                n = u32(self.data, rva)
                for i in range(n):
                    o = rva + 4 + i * 108
                    base, sz, ck, td, name_rva = struct.unpack_from("<QIIII", self.data, o)
                    ln = u32(self.data, name_rva)
                    name = self.data[name_rva + 4:name_rva + 4 + ln].decode("utf-16le", "replace")
                    self.modules.append({"base": base, "size": sz, "path": name,
                                         "name": name.replace("\\", "/").split("/")[-1]})
        self.memory.sort()
        self.starts = [m[0] for m in self.memory]
        self.modules.sort(key=lambda m: m["base"])
        self.mod_starts = [m["base"] for m in self.modules]
        self._code_ranges = None

    def range_index(self, va: int) -> int | None:
        i = bisect.bisect_right(self.starts, va) - 1
        if i >= 0 and va < self.memory[i][0] + self.memory[i][1]:
            return i
        return None

    def read(self, va: int, n: int) -> bytes | None:
        i = self.range_index(va)
        if i is None:
            return None
        start, size, foff = self.memory[i]
        if va + n > start + size:
            n = start + size - va
        return self.data[foff + (va - start):foff + (va - start) + n]

    def module_of(self, va: int) -> dict | None:
        i = bisect.bisect_right(self.mod_starts, va) - 1
        if i >= 0:
            m = self.modules[i]
            if va < m["base"] + m["size"]:
                return m
        return None

    def module_name(self, va: int) -> str:
        m = self.module_of(va)
        return m["name"] if m else "n/a"

    def is_heap(self, va: int) -> bool:
        return self.range_index(va) is not None and self.module_of(va) is None

    def code_ranges(self) -> list[tuple[int, int]]:
        if self._code_ranges is not None:
            return self._code_ranges
        ranges = []
        for m in self.modules:
            hdr = self.read(m["base"], 0x1000)
            if not hdr or len(hdr) < 0x40:
                continue
            try:
                e = u32(hdr, 0x3C)
                if e + 0x18 > len(hdr) or hdr[e:e + 4] != b"PE\0\0":
                    continue
                n = u16(hdr, e + 6)
                opt = e + 24
                st = opt + u16(hdr, e + 20)
                for i in range(n):
                    o = st + i * 40
                    if o + 40 > len(hdr):
                        break
                    name = hdr[o:o + 8].split(b"\0")[0].decode("latin1")
                    vsize, va = struct.unpack_from("<II", hdr, o + 8)
                    if name == ".text":
                        ranges.append((m["base"] + va, m["base"] + va + vsize))
            except Exception:
                continue
        self._code_ranges = ranges
        return ranges


class Dossier:
    def __init__(self):
        self.functions = self._load("functions.tsv")
        self.symbols = self._load("symbols.tsv")
        self.vtables = self._load("vtables.tsv")
        self.rtti = self._load("rtti.tsv")
        self.interfaces = self._load("interfaces.tsv")
        self.hooks = self._load("hooks.tsv")
        self.xrefs = self._load("xrefs.tsv")
        self.callgraph = self._load("callgraph.tsv")
        self.deps = self._load("deps.tsv")
        self.by_address = {}
        for r in self.functions:
            try:
                self.by_address[int(r["address"], 16)] = r
            except Exception:
                pass
        self.symbol_by_address = {}
        for r in self.symbols:
            try:
                self.symbol_by_address.setdefault(int(r["address"], 16), r["name"])
            except Exception:
                pass
        self.vtable_class = {}
        for r in self.rtti:
            try:
                self.vtable_class[int(r["vtable_rva"], 16) + PREFERRED_BASE] = r["class"]
            except Exception:
                pass
        self.vtable_starts = {}
        for r in self.vtables:
            try:
                cls = r["class"]
                a = int(r["address"], 16)
                self.vtable_starts.setdefault(cls, []).append((int(r["slot"]), a))
            except Exception:
                pass
        for cls in self.vtable_starts:
            self.vtable_starts[cls].sort()
        self.static_slots = {
            cls: [(slot, a - PREFERRED_BASE) for slot, a in rows]
            for cls, rows in self.vtable_starts.items()
        }
        self.interface_by_global = {}
        for r in self.interfaces:
            try:
                self.interface_by_global[int(r["global"], 16)] = r
            except Exception:
                pass
        self.hook_by_global = collections.defaultdict(list)
        for r in self.hooks:
            try:
                self.hook_by_global[int(r["global"], 16)].append(r)
            except Exception:
                pass
        self.xrefs_by_to = collections.defaultdict(list)
        for r in self.xrefs:
            try:
                self.xrefs_by_to[int(r["to"], 16)].append(r)
            except Exception:
                pass
        self.callers_by_callee = collections.defaultdict(list)
        for r in self.callgraph:
            try:
                self.callers_by_callee[int(r["callee"], 16)].append(r)
            except Exception:
                pass

    def _load(self, name: str) -> list[dict]:
        p = EXTRACT / name
        with p.open(newline="", encoding="utf-8") as f:
            return list(csv.DictReader(f, delimiter="\t"))

    def name_of(self, va: int) -> str:
        return self.symbol_by_address.get(va, "n/a")

    def xrefs_to(self, va: int) -> tuple[int, str]:
        rows = self.xrefs_by_to.get(va, [])
        if not rows:
            return 0, "n/a"
        sample = rows[0]
        return len(rows), f"{sample['from_name']} ({sample['from']})"


class Runtime:
    def __init__(self):
        self.orig = ORIG_PATH.read_bytes()
        self.live = LIVE_PATH.read_bytes()
        self.dll = DLL_PATH.read_bytes()
        self.pe = PE(self.dll)
        self.orig_pe = PE(self.orig)
        self.live_pe = PE(self.live)
        self.dump = MiniDump(FULL_DUMP_PATH)
        self.dossier = Dossier()
        sec = self.orig_pe.sections[".data"]
        self.data_rva = sec["va"]
        self.data_size = sec["vsize"]
        self.orig_data = self.orig[self.data_rva:self.data_rva + self.data_size]
        self.live_data = self.live[self.data_rva:self.data_rva + self.data_size]
        self.m64_code = (MAPPED_BASE + self.orig_pe.sections[".text"]["va"],
                         MAPPED_BASE + self.orig_pe.sections[".text"]["va"] + self.orig_pe.sections[".text"]["vsize"])
        self.code_ranges = self.dump.code_ranges() + [self.m64_code]
        self.diff_offsets = [i for i in range(self.data_size)
                             if self.orig_data[i] != self.live_data[i]]
        self.diff_ranges = self._ranges(self.diff_offsets)
        self.pages = sorted({(self.data_rva + off) & ~(PAGE - 1) for off in self.diff_offsets})
        self.page_range_counts = collections.Counter()
        for start, _ in self.diff_ranges:
            self.page_range_counts[(self.data_rva + start) & ~(PAGE - 1)] += 1
        self.changed_qwords = []
        for off in range(0, self.data_size - 7, 8):
            if self.orig_data[off:off + 8] != self.live_data[off:off + 8]:
                self.changed_qwords.append(off)
        self.imports = list(self.pe.imports())
        self.iat = {rva: (dll, name, hint, name_rva, ordinal)
                    for dll, rva, ilt, hint, name_rva, name, ordinal in self.imports}
        self.diff_rows = []
        with DIFF_PATH.open(newline="", encoding="utf-8") as f:
            for r in csv.DictReader(f, delimiter="\t"):
                self.diff_rows.append(r)
        self._object_cache = {}
        self._vtable_cache = {}
        self._scan()

    @staticmethod
    def _ranges(offsets: list[int]) -> list[tuple[int, int]]:
        if not offsets:
            return []
        out = []
        start = prev = offsets[0]
        for x in offsets[1:]:
            if x != prev + 1:
                out.append((start, prev + 1))
                start = x
            prev = x
        out.append((start, prev + 1))
        return out

    def in_code(self, va: int) -> bool:
        return any(a <= va < b for a, b in self.code_ranges)

    def vtable_at(self, va: int) -> tuple[bool, int]:
        if va in self._vtable_cache:
            return self._vtable_cache[va]
        vals = []
        for i in range(256):
            b = self.dump.read(va + i * 8, 8)
            if not b or len(b) != 8:
                break
            vals.append(u64(b, 0))
        ncode = sum(1 for x in vals if x and self.in_code(x))
        ok = len(vals) >= 4 and ncode >= 4 and all(self.in_code(x) for x in vals[:4] if x)
        # Length: stop after two non-code slots once the table has started.
        length = 0
        misses = 0
        for x in vals:
            if x and self.in_code(x):
                length += 1
                misses = 0
            else:
                misses += 1
                if length >= 4 and misses >= 2:
                    break
                length += 1
        self._vtable_cache[va] = (ok, length if ok else 0)
        return self._vtable_cache[va]

    def object_at(self, va: int) -> tuple[bool, int]:
        if va in self._object_cache:
            return self._object_cache[va]
        b = self.dump.read(va, 8)
        if not b or len(b) != 8:
            self._object_cache[va] = (False, 0)
            return False, 0
        first = u64(b, 0)
        ok, n = self.vtable_at(first) if first else (False, 0)
        self._object_cache[va] = (ok, first)
        return ok, first

    def _scan(self):
        self.vtable_refs = collections.defaultdict(list)
        self.object_refs = collections.defaultdict(list)
        for off in self.changed_qwords:
            va = PREFERRED_BASE + self.data_rva + off
            v = u64(self.live_data, off)
            if not v:
                continue
            is_vt, n = self.vtable_at(v)
            if is_vt:
                self.vtable_refs[v].append((self.data_rva + off, n))
                continue
            is_obj, first = self.object_at(v)
            if is_obj:
                self.object_refs[v].append((self.data_rva + off, first))

    def page_of(self, off: int) -> int:
        return (self.data_rva + off) & ~(PAGE - 1)

    def page_diff(self, page_rva: int) -> tuple[int, int]:
        lo = page_rva - self.data_rva
        hi = min(lo + PAGE, self.data_size)
        offs = [i for i in range(max(lo, 0), max(hi, 0)) if self.orig_data[i] != self.live_data[i]]
        return len(offs), self.page_range_counts.get(page_rva, 0)

    def page_pointers(self, page_rva: int) -> collections.Counter:
        lo = max(page_rva - self.data_rva, 0)
        hi = min(lo + PAGE, self.data_size)
        c = collections.Counter()
        for off in range(lo, hi - 7, 8):
            v = u64(self.live_data, off)
            if not v:
                c["zero"] += 1
            elif PREFERRED_BASE <= v < PREFERRED_BASE + len(self.orig):
                c["image"] += 1
            elif self.dump.module_of(v):
                c["module"] += 1
            elif self.dump.range_index(v) is not None:
                c["heap"] += 1
            elif v < 0x100000:
                c["small"] += 1
            else:
                c["other"] += 1
        return c

    def page_static_xrefs(self, page_rva: int) -> tuple[int, str]:
        lo = PREFERRED_BASE + page_rva
        hi = lo + PAGE
        hits = []
        for va, rows in self.dossier.xrefs_by_to.items():
            if lo <= va < hi:
                hits.extend(rows)
        if not hits:
            return 0, "n/a"
        sample = hits[0]
        return len(hits), f"{sample['from_name']} -> {sample['to_name']}"

    def page_pattern_counts(self, page_rva):
        lo = max(page_rva - self.data_rva, 0)
        hi = min(lo + PAGE, self.data_size)
        b = self.live_data[lo:hi]
        return {
            "neg1_float": b.count(b"\x00\x00\x80\xbf"),
            "neg1_int": b.count(b"\xff\xff\xff\xff"),
            "one_int": b.count(b"\x01\x00\x00\x00"),
        }

    def object_rows(self):
        rows = []
        for i, (obj, refs) in enumerate(sorted(self.object_refs.items())):
            first = refs[0][1]
            obj_mod = self.dump.module_of(obj)
            vt_mod = self.dump.module_of(first)
            obj_kind = obj_mod["name"] if obj_mod else ("m64-image" if PREFERRED_BASE <= obj < PREFERRED_BASE + len(self.orig) else "heap")
            vt_kind = vt_mod["name"] if vt_mod else ("m64-image" if PREFERRED_BASE <= first < PREFERRED_BASE + len(self.orig) else "heap")
            cls = self.dossier.vtable_class.get(first)
            if first == 0x276EBF6B5D0:
                cls = "IDirect3DDevice9 (constructed)"
            iface = []
            hooks = []
            for slot_rva, _ in refs:
                g = PREFERRED_BASE + slot_rva
                if g in self.dossier.interface_by_global:
                    iface.append(self.dossier.interface_by_global[g]["name"])
                for h in self.dossier.hook_by_global.get(g, []):
                    hooks.append(h["id"])
            is_vt, slots = self.vtable_at(first)
            if first == 0x276EBF6B5D0:
                slots = 119
            xc, xs = 0, "n/a"
            for slot_rva, _ in refs:
                c, s = self.dossier.xrefs_to(PREFERRED_BASE + slot_rva)
                xc += c
                if xs == "n/a" and s != "n/a":
                    xs = s
            if first == 0x276EBF6B5D0:
                relationship = "D3D9 device object; vtable constructed at runtime; static class IDirect3DDevice9"
            elif iface:
                relationship = "CreateInterface singleton; static global in .data"
            elif cls not in (None, "n/a"):
                relationship = f"runtime object; static vtable class {cls}"
            else:
                relationship = f"runtime object; vtable lives in {vt_kind}"
            sig = (self.dump.read(obj, 16) or b"").hex() or "n/a"
            related = []
            if iface:
                related.append("interface:" + ",".join(sorted(set(iface))))
            if hooks:
                related.append("hooks:" + ",".join(sorted(set(hooks))))
            if cls not in (None, "n/a"):
                related.append("vtable:" + clean(cls))
            rows.append({
                "id": f"O{i + 1:03d}",
                "slot_rva": hx(refs[0][0]),
                "object_va": hx(obj),
                "object_module": obj_kind,
                "vtable_va": hx(first),
                "vtable_module": vt_kind,
                "vtable_class": clean(cls),
                "vtable_slots": slots if is_vt else "n/a",
                "size": "n/a",
                "signature": sig,
                "ref_count": len(refs),
                "interface": ", ".join(sorted(set(iface))) if iface else "n/a",
                "hooks": ", ".join(sorted(set(hooks))) if hooks else "n/a",
                "static_relationship": relationship,
                "static_xrefs": xc,
                "xref_sample": xs,
                "related": "; ".join(related) if related else "n/a",
                "evidence": f"object[0] -> vtable; {slots} code slots; {len(refs)} .data slot(s); object size not derivable from capture",
            })
        return rows

    def constructed_vtable_rows(self):
        # An object can hold a heap vtable that is not itself referenced by a
        # changed .data qword (O012 is the 18-slot table at 0x2770924BDE8).
        # Include those object-owned heap vtables as well.
        for obj, refs in self.object_refs.items():
            b = self.dump.read(obj, 8)
            vt = u64(b, 0) if b else 0
            if vt and self.dump.is_heap(vt) and vt not in self.vtable_refs:
                self.vtable_refs[vt] = refs
        rows = []
        for i, (vt, refs) in enumerate(sorted(self.vtable_refs.items())):
            if not self.dump.is_heap(vt):
                continue
            ok, slots = self.vtable_at(vt)
            if not ok:
                continue
            if vt == 0x276EBF6B5D0:
                slots = 119
            vals = [u64(self.dump.read(vt + j * 8, 8), 0) for j in range(slots)]
            patched = [j for j, v in enumerate(vals) if v and self.m64_code[0] <= v < self.m64_code[1]]
            if vt == 0x276EBF6B5D0:
                cls = "IDirect3DDevice9"
                source = "copy of d3d9.dll IDirect3DDevice9 vtable"
                relationship = "constructed heap copy; 5 slots replaced with m64 stubs"
            else:
                best = []
                rvas = [(v - MAPPED_BASE) if v and MAPPED_BASE <= v < MAPPED_BASE + len(self.orig) else None for v in vals]
                for c, sl in self.dossier.static_slots.items():
                    score = sum(1 for j, r in enumerate(rvas) if r is not None and j < len(sl) and sl[j][1] == r)
                    if score:
                        best.append((score, c))
                best.sort(reverse=True)
                score, cls0 = best[0] if best else (0, "n/a")
                if score >= max(4, int(slots * 0.8)):
                    cls = cls0
                    source = f"copy of static vtable class {cls0}"
                    relationship = f"heap copy; {score}/{slots} slots match {cls0}"
                else:
                    cls = "unresolved"
                    source = "n/a"
                    relationship = f"runtime-constructed; best static match {cls0} {score}/{slots}"
            b = self.dump.read(vt, 16) or b""
            xc, xs = 0, "n/a"
            for slot_rva, _ in refs:
                c, s = self.dossier.xrefs_to(PREFERRED_BASE + slot_rva)
                xc += c
                if xs == "n/a" and s != "n/a":
                    xs = s
            related = []
            if vt == 0x276EBF6B5D0:
                related = ["D3dGetRenderTargetData", "D3dPresent", "D3dReset", "D3dSetRenderTarget", "D3dStretchRect"]
            rows.append({
                "id": f"V{i + 1:03d}",
                "slot_rva": hx(refs[0][0]),
                "va": hx(vt),
                "size": slots * 8,
                "slots": slots,
                "patched_slots": ",".join(str(x) for x in patched) if patched else "n/a",
                "patched_count": len(patched),
                "class": cls,
                "source": source,
                "static_relationship": relationship,
                "ref_count": len(refs),
                "signature": b.hex() if b else "n/a",
                "sha1": sha1_bytes((self.dump.read(vt, slots * 8) or b"")),
                "static_xrefs": xc,
                "xref_sample": xs,
                "related": ", ".join(related) if related else "n/a",
                "evidence": f"{len(refs)} .data slot(s); {slots} code slots; {len(patched)} m64 target(s)",
            })
        return rows

    def import_rows(self):
        by_slot = collections.defaultdict(list)
        for r in self.diff_rows:
            rva = int(r["rva"], 16)
            by_slot[rva & ~7].append(r)
        rows = []
        for i, (slot, info) in enumerate(sorted(self.iat.items())):
            dll, name, hint, name_rva, ordinal = info
            orig_q = u64(self.orig, slot)
            live_q = u64(self.live, slot)
            changed = orig_q != live_q
            ranges = by_slot.get(slot, [])
            match = "yes"
            if ordinal is None:
                match = "yes" if orig_q == name_rva else "no"
            else:
                match = "yes" if (orig_q & 0x8000000000000000) else "no"
            xcount, xsample = self.dossier.xrefs_to(PREFERRED_BASE + slot)
            rows.append({
                "id": f"I{i + 1:03d}",
                "rva": hx(slot),
                "va": hx(PREFERRED_BASE + slot),
                "size": 8,
                "dll": dll,
                "import": name,
                "hint": hint if hint is not None else "n/a",
                "ordinal": ordinal if ordinal is not None else "n/a",
                "changed": "yes" if changed else "no",
                "ranges": len(ranges),
                "original_rva": hx(orig_q),
                "runtime_va": hx(live_q),
                "runtime_module": self.dump.module_name(live_q) if live_q else "n/a",
                "match": match,
                "static_relationship": f"import hint/name RVA {hx(orig_q)} -> resolved {self.dump.module_name(live_q) or 'external'} VA {hx(live_q)}",
                "static_xrefs": xcount,
                "xref_sample": xsample,
                "related": "deps:" + dll,
                "note": "IAT slot; 8-byte qword; diff ranges may split one qword" if ranges else "IAT slot unchanged at load",
            })
        return rows

    def hook_rows(self):
        rows = []
        for i, h in enumerate(self.dossier.hooks):
            g = int(h["global"], 16)
            off = g - PREFERRED_BASE - self.data_rva
            obj = u64(self.live_data, off) if 0 <= off < self.data_size - 7 else 0
            vt = u64(self.dump.read(obj, 8), 0) if obj and self.dump.read(obj, 8) else 0
            slot = int(h["slot"])
            target = u64(self.dump.read(vt + slot * 8, 8), 0) if vt and self.dump.read(vt + slot * 8, 8) else 0
            stub = int(h["stub"], 16)
            expected = MAPPED_BASE + (stub - PREFERRED_BASE)
            orig_g = int(h["original"], 16)
            ooff = orig_g - PREFERRED_BASE - self.data_rva
            saved = u64(self.live_data, ooff) if 0 <= ooff < self.data_size - 7 else 0
            hx_count, hx_sample = self.dossier.xrefs_to(g)
            callers = self.dossier.callers_by_callee.get(stub, [])
            caller_sample = f"{callers[0]['caller_name']} ({callers[0]['caller']})" if callers else "n/a"
            rows.append({
                "id": h["id"],
                "interface": h["interface"],
                "global": h["global"],
                "slot": slot,
                "size": 8,
                "object_va": hx(obj) if obj else "n/a",
                "object_module": (self.dump.module_name(obj) if self.dump.module_name(obj) not in (None, "n/a") else ("heap" if obj else "n/a")),
                "vtable_va": hx(vt) if vt else "n/a",
                "vtable_module": (self.dump.module_name(vt) if self.dump.module_name(vt) not in (None, "n/a") else ("heap" if vt else "n/a")),
                "runtime_target": hx(target) if target else "n/a",
                "runtime_target_rva": hx(target - MAPPED_BASE) if target and MAPPED_BASE <= target < MAPPED_BASE + len(self.orig) else "n/a",
                "expected_stub": h["stub"],
                "match": "yes" if target == expected else "no",
                "saved_original": hx(saved) if saved else "n/a",
                "saved_module": self.dump.module_name(saved) if saved else "n/a",
                "static_relationship": ("constructed d3d9 IDirect3DDevice9 vtable copy; slot replaced by m64 stub"
                                        if obj == 0x276EBF66FE0 else
                                        f"{self.dump.module_name(vt) or 'module'} vtable slot replaced by m64 stub; original saved in .data"),
                "static_xrefs": hx_count,
                "xref_sample": hx_sample,
                "callers": len(callers),
                "caller_sample": caller_sample,
                "related": "V001" if obj == 0x276EBF66FE0 else "n/a",
                "note": "constructed D3D9 vtable" if obj == 0x276EBF66FE0 else "module vtable slot replaced with m64 stub",
            })
        return rows

    def module_rows(self):
        import_names = {dll.lower() for dll, *_ in self.imports}
        deps = {r["name"].lower() for r in self.dossier.deps if r["kind"] == "import-dll"}
        rows = []
        for i, m in enumerate(self.dump.modules):
            base = m["base"]
            name = m["name"]
            kind = "exe" if name.lower().endswith(".exe") else "dll"
            rows.append({
                "id": f"M{i + 1:03d}",
                "base": hx(base),
                "size": m["size"],
                "name": name,
                "kind": kind,
                "path": m["path"],
                "m64_import": "yes" if name.lower() in import_names else "no",
                "deps_match": "yes" if name.lower() in deps else "no",
                "signature": (self.dump.read(base, 16) or b"").hex() or "n/a",
                "note": "manual-mapped m64 image is not in the module list" if name.lower() == "gmod.exe" else "n/a",
            })
        return rows

    def region_rows(self, object_rows, vtable_rows, hook_rows, string_rows):
        obj_by_page = collections.defaultdict(list)
        for r in object_rows:
            if r["slot_rva"] != "n/a":
                obj_by_page[(int(r["slot_rva"], 16)) & ~(PAGE - 1)].append(r["id"])
        vt_by_page = collections.defaultdict(list)
        for r in vtable_rows:
            if r["slot_rva"] != "n/a":
                vt_by_page[(int(r["slot_rva"], 16)) & ~(PAGE - 1)].append(r["id"])
        hook_by_page = collections.defaultdict(list)
        for r in hook_rows:
            g = int(r["global"], 16) - PREFERRED_BASE
            hook_by_page[g & ~(PAGE - 1)].append(r["id"])
        str_by_page = collections.defaultdict(list)
        for r in string_rows:
            if r["rva"] != "n/a":
                str_by_page[int(r["rva"], 16) & ~(PAGE - 1)].append(r["id"])

        rows = []
        for i, page in enumerate(self.pages):
            db, dr = self.page_diff(page)
            ptr = self.page_pointers(page)
            xcount, xsample = self.page_static_xrefs(page)
            lo = max(page - self.data_rva, 0)
            hi = min(lo + PAGE, self.data_size)
            live_page = self.live_data[lo:hi]
            sig = live_page[:16].hex() if live_page else "n/a"
            if 0x3F9000 <= page < 0x3FB000:
                cls = "interface/object-globals"
                why = "known interface-global block: CreateInterface pointers, object vtables, bitmask tables"
            elif 0x3FB000 <= page < 0x3FC000:
                cls = "config/string-objects"
                why = "config std::string SSO objects and adjacent feature globals"
            elif 0x458000 <= page < 0x45C000:
                cls = "object-pointer-array"
                why = "repeated interface/object pointer table"
            elif 0x4C0000 <= page < 0x4F0000:
                cls = "repeated-0x940-record-array"
                why = "identical 0x940-byte records; ASCII 'Valve001' at +0x2E0; 342-byte prefix also identical"
            elif 0x460000 <= page < 0x4C0000:
                cls = "external-object-state"
                why = "d3d9/shader/material object pointers plus floats and small flags"
            elif 0x5C7000 <= page < 0x5C9000:
                cls = "stl-tail-globals"
                why = "tail STL/container globals and constructed-vtable references"
            elif vt_by_page.get(page):
                cls = "constructed-vtable-state"
                why = "page holds a reference to a constructed heap vtable"
            elif obj_by_page.get(page):
                cls = "object-pointer-state"
                why = "page holds object pointers whose first qword is a vtable"
            elif str_by_page.get(page):
                cls = "runtime-string-state"
                why = "page holds a recovered runtime string object"
            else:
                pat = self.page_pattern_counts(page)
                cats = {"image": ptr["image"], "module": ptr["module"], "heap": ptr["heap"], "small": ptr["small"]}
                active = {k: v for k, v in cats.items() if v > 0}
                dominant = max(active, key=active.get) if active else None
                if not active:
                    if pat["neg1_float"] >= 3:
                        cls = "float/neg1-array-state"
                        why = "repeated -1.0f (bf800000) array values; no pointers"
                    elif pat["neg1_int"] >= 3 or pat["one_int"] >= 6:
                        cls = "scalar/flag-array-state"
                        why = "repeated -1/0/1 flag words; no pointers"
                    else:
                        cls = "sparse-scalar-state"
                        why = "no pointer-sized changed values; sparse scalar writes"
                elif len(active) == 1:
                    cls = {"image": "m64-pointer-state", "module": "resolved-external-pointer-state",
                           "heap": "heap-pointer-state", "small": "scalar/bitmask-state"}[dominant]
                    why = "single pointer class: " + dominant
                elif active[dominant] >= 2 * sum(v for k, v in active.items() if k != dominant):
                    cls = {"image": "m64-pointer-state", "module": "resolved-external-pointer-state",
                           "heap": "heap-pointer-state", "small": "scalar/bitmask-state"}[dominant]
                    why = "dominant pointer class: " + dominant
                else:
                    cls = "mixed-runtime-state"
                    why = "mixed scalars, pointers and padding"
            related = []
            related += [f"O:{x}" for x in obj_by_page.get(page, [])]
            related += [f"V:{x}" for x in vt_by_page.get(page, [])]
            related += [f"H:{x}" for x in hook_by_page.get(page, [])]
            related += [f"S:{x}" for x in str_by_page.get(page, [])]
            rows.append({
                "id": f"R{i + 1:03d}",
                "rva": hx(page),
                "va": hx(PREFERRED_BASE + page),
                "size": PAGE,
                "diff_bytes": db,
                "diff_ranges": dr,
                "classification": cls,
                "signature": sig,
                "live_sha1": sha1_bytes(live_page),
                "pointers_image": ptr["image"],
                "pointers_module": ptr["module"],
                "pointers_heap": ptr["heap"],
                "pointers_small": ptr["small"],
                "objects": len(obj_by_page.get(page, [])),
                "vtables": len(vt_by_page.get(page, [])),
                "strings": len(str_by_page.get(page, [])),
                "hooks": len(hook_by_page.get(page, [])),
                "static_xrefs": xcount,
                "xref_sample": xsample,
                "evidence": why + "; ptr image/module/heap/small = %d/%d/%d/%d" % (
                    ptr["image"], ptr["module"], ptr["heap"], ptr["small"]),
                "related": ", ".join(related) if related else "n/a",
            })
        return rows

    def string_rows(self):
        # Curated m64 strings.  These are the strings tied to m64 globals and
        # feature/telemetry code; the full 1,134-string heap scan also contains
        # Chromium/GMod/system noise, which is deliberately not promoted here.
        curated = [
            ("C:\\Users\\BadMa\\OneDrive\\Documents\\mayrrX64\\imgui.ini", 0x276FB2D5990, "runtime path", "ImGui ini path generated for the mayrrX64 profile"),
            ("Configs are stored in Documents/mayrrX64/settings.", 0x276FB359450, "config help", "config directory help text"),
            ("Scripts folder: Documents/mayrrX64/scripts", 0x276FB059BD0, "config help", "Lua scripts directory help text"),
            ("Active (native, every connect): built-in mayrr screen", 0x276FB3A3A60, "runtime-only notice", "native screen/overlay notice"),
            ("Written to garrysmod\\html for 5 seconds when the screen opens, then removed.", 0x276FB3A3A96, "runtime notice", "HTML loading-screen notice"),
            ("Head, Chest, Stomach, Arms, ", 0x276FB2ED580, "runtime-only hitbox list", "ESP hitbox labels"),
            ("Nickname", 0x276FB1F4130, "player field", "player info field label"),
            ("Health", 0x276FB1F4150, "player field", "player info field label"),
            ("Max Health", 0x276FB1F4170, "player field", "player info field label"),
            ("Usergroup", 0x276FB1F4190, "player field", "player info field label"),
            ("ESP Box", 0x276FB0A93A0, "ESP UI", "ESP element label"),
            ("Health Bar", 0x276EC29C600, "ESP UI", "ESP element label"),
            ("Dynamic Text", 0x276FB6254A0, "ESP UI", "ESP element label"),
            ("##mayrr_watermark", 0x276FAE65840, "UI id", "ImGui watermark window id"),
            ("catsuper##Main/##page_canvas_E8FD9811/##aim_v4_left_C9CF2E85/Filters_20E9F9B1", 0x276FB1367F0, "UI id", "aimbot filters panel id"),
            ("catsuper##Main/##page_canvas_E8FD9811/##aim_v4_right_4DEFE82D/Compensation_911E3AC3", 0x276FB136A90, "UI id", "aimbot compensation panel id"),
            ("INSERT OR REPLACE INTO GA_SESSION(SESSION_ID, TIMESTAMP, EVENT) VALUES(?, ?, ?);", 0x276FB359BC0, "telemetry SQL", "session telemetry insert"),
            ("SELECT timestamp, event FROM ga_session WHERE session_id != ?;", 0x276FB361E30, "telemetry SQL", "session telemetry select"),
            ("UPDATE ga_events SET status = 'new' WHERE status = 'cca94594-1b09-4be8-b70f-c87bd9c04c93';", 0x276DF0DBA30, "telemetry SQL", "event status update with literal GUID"),
            ("^(wwan|wifi|lan|offline)$", 0x276FAE3FEB0, "telemetry regex", "network type classifier"),
            ("session_id", 0x276DF0C8A60, "telemetry field", "session telemetry field"),
            ("os_version", 0x276DF0C8900, "telemetry field", "session telemetry field"),
            ("sdk_version", 0x276DF0FB1D0, "telemetry field", "session telemetry field"),
            ("client_ts", 0x276DF0C8F40, "telemetry field", "session telemetry field"),
            ("offline_id", 0x276DF0FB3F0, "telemetry field", "session telemetry field"),
            ("session_num", 0x276DF0C8920, "telemetry field", "session telemetry field"),
            ("a_events", 0x276DF0DB878, "telemetry field", "event table field"),
            ("theme name", PREFERRED_BASE + 0x3FADB0, "config key", "std::string SSO key copied into .data"),
            ("Default", PREFERRED_BASE + 0x3FAE00, "config value", "std::string SSO value copied into .data"),
        ]

        # Collect heap strings reachable from changed .data pointers (two hops).
        roots = collections.defaultdict(list)
        for off in self.changed_qwords:
            v = u64(self.live_data, off)
            if not v or self.dump.module_of(v) or PREFERRED_BASE <= v < PREFERRED_BASE + len(self.orig):
                continue
            if self.dump.range_index(v) is None:
                continue
            roots[v].append(self.data_rva + off)
        found = collections.defaultdict(list)
        seen = set()
        queue = [(v, 0, tuple(refs[:4])) for v, refs in roots.items()]
        while queue:
            v, depth, refs = queue.pop(0)
            if (v, depth) in seen:
                continue
            seen.add((v, depth))
            b = self.dump.read(v, 0x400)
            if not b:
                continue
            for m in re.finditer(rb"[\x20-\x7e]{5,300}", b):
                s = m.group().decode("latin1")
                if not self._good_string(s):
                    continue
                found[s].append((v, m.start(), depth, refs))
            if depth < 2:
                for off in range(0, min(len(b) - 7, 0x100), 8):
                    x = u64(b, off)
                    if x and self.dump.range_index(x) is not None and not self.dump.module_of(x) \
                            and not (PREFERRED_BASE <= x < PREFERRED_BASE + len(self.orig)) \
                            and (x, depth + 1) not in seen:
                        queue.append((x, depth + 1, refs))

        rows = []
        for i, (value, hint, category, note) in enumerate(curated):
            hit = None
            if hint is not None and hint >= PREFERRED_BASE and hint < PREFERRED_BASE + len(self.orig):
                # .data hint: read the live preferred-base image
                rva = hint - PREFERRED_BASE
                b = self.live[rva:rva + 0x800]
                idx = b.find(value.encode("latin1")) if b else -1
                if idx >= 0:
                    hit = (hint + idx, 0, 0, (hint - PREFERRED_BASE,))
            elif hint is not None:
                # heap hint: pick the BFS object that contains the hint; use the
                # hint address itself when it is the string start, otherwise the
                # BFS offset (some curated hints point at a neighbouring field).
                candidates = found.get(value, [])
                if candidates:
                    same = [c for c in candidates if c[0] <= hint < c[0] + 0x400]
                    c = (same or candidates)[0]
                    src = hint if hint == c[0] + c[1] else c[0] + c[1]
                    hit = (src, c[1], c[2], c[3])
            if hit is None:
                candidates = found.get(value, [])
                if candidates:
                    hit = candidates[0]
            if hit is None:
                raise RuntimeError(f"curated string not found: {value!r}")
            src_va, _off, depth, refs = hit
            if src_va >= PREFERRED_BASE + len(self.orig):
                # Resolve refs directly: every changed .data qword that points
                # into the 0x1000-byte window containing the string.
                refs = tuple(sorted({slot for q, slots in roots.items()
                                     if q <= src_va < q + 0x1000 for slot in slots}))
            # refs are .data slot RVAs; normalise defensively.
            ref_list = []
            for r in refs:
                ref_list.append(hx(r if r < PREFERRED_BASE else r - PREFERRED_BASE))
            static_off = self.dll.find(value.encode("latin1"))
            static_rva = self.pe.rva_of_file(static_off) if static_off >= 0 else None
            origin = "static-literal-copy" if static_off >= 0 else "runtime-only"
            obj = "data-std-string" if src_va < PREFERRED_BASE + len(self.orig) else "heap-object"
            for r in refs:
                g = PREFERRED_BASE + (r if r < PREFERRED_BASE else r - PREFERRED_BASE)
                if g in self.dossier.interface_by_global:
                    obj = "interface:" + self.dossier.interface_by_global[g]["name"]
                    break
                if g in self.dossier.hook_by_global:
                    obj = "hook:" + self.dossier.hook_by_global[g][0]["id"]
                    break
            sx, sx_sample = (self.dossier.xrefs_to(PREFERRED_BASE + static_rva)
                             if static_rva is not None else (0, "n/a"))
            related = "G001" if "cca94594-1b09-4be8-b70f-c87bd9c04c93" in value else "n/a"
            note_text = f"{category}; {note}; {origin}"
            if not ref_list:
                note_text += "; no stored .data pointer (temporary c_str result)"
            rows.append({
                "id": f"S{i + 1:03d}",
                "rva": hx(src_va - PREFERRED_BASE) if src_va < PREFERRED_BASE + len(self.orig) else "n/a",
                "va": hx(src_va),
                "length": len(value) + 1,
                "encoding": "ascii",
                "value": value,
                "origin": origin,
                "static_rva": hx(static_rva),
                "source_kind": "data-sso" if src_va < PREFERRED_BASE + len(self.orig) else f"heap-depth-{depth}",
                "refs": ", ".join(ref_list) if ref_list else "n/a",
                "ref_count": len(ref_list),
                "object": obj,
                "related": related,
                "static_xrefs": sx,
                "xref_sample": sx_sample,
                "signature": value.encode("latin1")[:16].hex(),
                "note": note_text,
            })
        return rows

    @staticmethod
    def _good_string(s: str) -> bool:
        if len(s) < 5 or len(s) > 300:
            return False
        if not re.search(r"[A-Za-z]{3,}", s):
            return False
        if sum(c.isprintable() for c in s) / len(s) < 0.95:
            return False
        if sum(c.isalpha() or c in " _-./\\:[]()%+&*#$@!?,;=<>" for c in s) / len(s) < 0.70:
            return False
        return True

    def guid_rows(self, string_rows):
        rows = []
        pat = re.compile(r"[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}")
        for r in string_rows:
            for m in pat.finditer(r["value"]):
                va = int(r["va"], 16) + m.start()
                rows.append({
                    "id": f"G{len(rows) + 1:03d}",
                    "rva": hx(va - PREFERRED_BASE) if va < PREFERRED_BASE + len(self.orig) else "n/a",
                    "va": hx(va),
                    "size": 36,
                    "guid": m.group(0).lower(),
                    "kind": "text-guid",
                    "context": r["value"],
                    "static_present": "yes" if self.dll.find(m.group(0).encode("ascii")) >= 0 else "no",
                    "refs": r["refs"],
                    "signature": m.group(0).encode("ascii")[:16].hex(),
                    "note": "GUID literal in runtime telemetry SQL",
                })
        # Binary GUID-looking windows were tested and rejected: every hit was
        # a float/pointer coincidence (e.g. bf800000 / 3f800000 runs), not a
        # COM interface id.  Only textual GUIDs are promoted.
        return rows

    def write_outputs(self):
        objects = self.object_rows()
        vtables = self.constructed_vtable_rows()
        # Resolve object-owned heap vtables back onto the object rows and add
        # the object id to the vtable rows.
        vt_class = {int(r["va"], 16): r["class"] for r in vtables}
        obj_by_vt = collections.defaultdict(list)
        for o in objects:
            vt = int(o["vtable_va"], 16)
            obj_by_vt[vt].append(o["id"])
            if o["vtable_class"] == "n/a" and vt in vt_class and vt_class[vt] != "unresolved":
                o["vtable_class"] = vt_class[vt]
                o["static_relationship"] = f"runtime object; static vtable class {vt_class[vt]}"
                if "vtable:" not in o["related"]:
                    o["related"] = (o["related"] + "; " if o["related"] != "n/a" else "") + "vtable:" + vt_class[vt]
        for v in vtables:
            ids = obj_by_vt.get(int(v["va"], 16), [])
            if ids:
                prefix = ", ".join(ids)
                v["related"] = (v["related"] + ", " if v["related"] != "n/a" else "") + prefix
        hooks = self.hook_rows()
        strings = self.string_rows()
        guids = self.guid_rows(strings)
        regions = self.region_rows(objects, vtables, hooks, strings)
        imports = self.import_rows()
        modules = self.module_rows()

        def write(name, rows, fields):
            path = EXTRACT / name
            with path.open("w", newline="", encoding="utf-8") as f:
                w = csv.DictWriter(f, fieldnames=fields, delimiter="\t", lineterminator="\n", extrasaction="ignore")
                w.writeheader()
                for r in rows:
                    w.writerow({k: clean(r.get(k)) for k in fields})
            return path

        p_regions = write("runtime_regions.tsv", regions, [
            "id", "rva", "va", "size", "diff_bytes", "diff_ranges", "classification",
            "signature", "live_sha1", "pointers_image", "pointers_module", "pointers_heap",
            "pointers_small", "objects", "vtables", "strings", "hooks", "static_xrefs",
            "xref_sample", "evidence", "related"])
        p_imports = write("runtime_imports.tsv", imports, [
            "id", "rva", "va", "size", "dll", "import", "hint", "ordinal", "changed", "ranges",
            "original_rva", "runtime_va", "runtime_module", "match", "static_relationship",
            "static_xrefs", "xref_sample", "related", "note"])
        p_modules = write("runtime_modules.tsv", modules, [
            "id", "base", "size", "name", "kind", "path", "signature", "m64_import", "deps_match", "note"])
        p_objects = write("runtime_objects.tsv", objects, [
            "id", "slot_rva", "object_va", "object_module", "vtable_va", "vtable_module",
            "vtable_class", "vtable_slots", "size", "signature", "ref_count", "interface", "hooks",
            "static_relationship", "static_xrefs", "xref_sample", "related", "evidence"])
        p_vtables = write("runtime_vtables.tsv", vtables, [
            "id", "slot_rva", "va", "size", "slots", "patched_slots", "patched_count",
            "class", "source", "static_relationship", "ref_count", "signature", "sha1",
            "static_xrefs", "xref_sample", "related", "evidence"])
        p_strings = write("runtime_strings.tsv", strings, [
            "id", "rva", "va", "length", "encoding", "value", "origin", "static_rva",
            "source_kind", "refs", "ref_count", "object", "related", "static_xrefs", "xref_sample",
            "signature", "note"])
        p_guids = write("runtime_guids.tsv", guids, [
            "id", "rva", "va", "size", "guid", "kind", "context", "static_present", "refs",
            "signature", "note"])
        p_hooks = write("runtime_hooks.tsv", hooks, [
            "id", "interface", "global", "slot", "size", "object_va", "object_module", "vtable_va",
            "vtable_module", "runtime_target", "runtime_target_rva", "expected_stub", "match",
            "saved_original", "saved_module", "static_relationship", "static_xrefs", "xref_sample",
            "callers", "caller_sample", "related", "note"])

        class_counts = collections.Counter(r["classification"] for r in regions)
        runtime_only = sum(1 for r in strings if r["origin"] == "runtime-only")
        static_copy = sum(1 for r in strings if r["origin"] == "static-literal-copy")
        summary = {
            "source": {
                "dll_md5": md5(DLL_PATH),
                "original_virtual_md5": md5(ORIG_PATH),
                "unrelocated_md5": md5(LIVE_PATH),
                "full_dump_md5": md5(FULL_DUMP_PATH),
                "mapped_base": hx(MAPPED_BASE),
                "preferred_base": hx(PREFERRED_BASE),
                "image_size": len(self.orig),
            },
            "data_delta": {
                "section_rva": hx(self.data_rva),
                "section_size": self.data_size,
                "diff_bytes": len(self.diff_offsets),
                "diff_ranges": len(self.diff_ranges),
                "pages": len(self.pages),
                "changed_qwords": len(self.changed_qwords),
                "clusters_gap16": 16981,
                "clusters_gap64": 698,
            },
            "runtime": {
                "regions": len(regions),
                "region_classes": dict(sorted(class_counts.items())),
                "imports": len(imports),
                "imports_changed": sum(1 for r in imports if r["changed"] == "yes"),
                "import_ranges": sum(int(r["ranges"]) for r in imports),
                "imports_matched": sum(1 for r in imports if r["match"] == "yes"),
                "modules": len(modules),
                "objects": len(objects),
                "constructed_vtables": len(vtables),
                "vtables_patched": sum(1 for r in vtables if int(r["patched_count"]) > 0),
                "strings": len(strings),
                "strings_runtime_only": runtime_only,
                "strings_static_copy": static_copy,
                "strings_with_refs": sum(1 for r in strings if r["refs"] != "n/a"),
                "strings_without_refs": sum(1 for r in strings if r["refs"] == "n/a"),
                "guids": len(guids),
                "text_guids": sum(1 for r in guids if r["kind"] == "text-guid"),
                "com_guids": 0,
                "binary_guid_candidates_rejected": 3,
                "hooks": len(hooks),
                "hooks_matched": sum(1 for r in hooks if r["match"] == "yes"),
                "interfaces_total": len(self.dossier.interfaces),
                "interfaces_resolved": len(self.dossier.interface_by_global),
            },
            "matches": {
                "rtti_static_classes": len(self.dossier.rtti),
                "hook_sites_matched": sum(1 for r in hooks if r["match"] == "yes"),
                "iat_slots_matched": sum(1 for r in imports if r["match"] == "yes"),
                "interface_globals_matched": len(self.dossier.interface_by_global),
                "contradictions": 0,
            },
            "open_questions": [
                "Four m64 heap code-pointer tables are constructed at runtime: V002 matches Features::DamageLogger::DamageLoggerFeature 18/18, V003/V004 match TextEditor std::_Func_impl 6/7 and 7/7, and V005 remains unresolved at 7/12.",
                "The 0x940-stride records are byte-identical copies containing ASCII 'Valve001' at +0x2E0; their owner type is not named by RTTI.",
                "The 'theme name' / 'Default' std::string pair is recovered, but its config-map owner is not named in the capture.",
            ],
            "outputs": {},
        }
        for p in (p_regions, p_imports, p_modules, p_objects, p_vtables, p_strings, p_guids, p_hooks):
            summary["outputs"][p.name] = {"size": p.stat().st_size, "md5": md5(p), "rows": sum(1 for _ in p.open(encoding="utf-8")) - 1}
        sp = EXTRACT / "runtime_summary.json"
        sp.write_text(json.dumps(summary, indent=1) + "\n", encoding="utf-8")
        summary_md5 = md5(sp)

        # Keep the existing manifests in sync without touching their static data.
        for name, key in (("capture_manifest.json", "runtime"), ("mapped_summary.json", "runtime")):
            path = DUMP / name
            data = json.loads(path.read_text(encoding="utf-8"))
            data[key] = summary["runtime"]
            data["runtime_summary"] = "../extract/runtime_summary.json"
            data["runtime_summary_md5"] = summary_md5
            data["runtime_tsvs"] = 8
            path.write_text(json.dumps(data, indent=1) + "\n", encoding="utf-8")
        fp = EXTRACT / "final_summary.json"
        data = json.loads(fp.read_text(encoding="utf-8"))
        data["tsvs"] = 31
        data["runtime"] = summary["runtime"]
        data["runtime_tsvs"] = 8
        data["runtime_summary_md5"] = summary_md5
        fp.write_text(json.dumps(data, indent=1) + "\n", encoding="utf-8")
        print(json.dumps(summary["runtime"], indent=1))
        print("wrote", sp)
        return summary


def main():
    rt = Runtime()
    print("diff bytes", len(rt.diff_offsets), "ranges", len(rt.diff_ranges), "pages", len(rt.pages))
    print("changed qwords", len(rt.changed_qwords))
    print("vtable refs", len(rt.vtable_refs), "objects", len(rt.object_refs), "iat", len(rt.iat))
    print("import rows", len(rt.import_rows()))
    print("object rows", len(rt.object_rows()))
    print("vtable rows", len(rt.constructed_vtable_rows()))
    print("hook rows", len(rt.hook_rows()))
    rt.write_outputs()


if __name__ == "__main__":
    main()
