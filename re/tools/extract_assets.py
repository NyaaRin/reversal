#!/usr/bin/env python3
"""Asset extraction for m64.dll.

- PE resources (the two RCDATA fonts and the linker manifest)
- icon id -> Font Awesome codepoint strings used by FUN_18019AB20
- the three 57 BC stb_compress containers, decoded byte-exactly into
  assets/decoded/*.ttf and validated as sfnt fonts
- font/glyph/cmap tables generated from the decoded fonts themselves
- every asset path string in the binary
"""
from __future__ import annotations
import csv, json, re, struct, hashlib, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
RE = ROOT / "re"
DUMP = RE / "dump"
OUT = RE / "extract"
ASSETS = OUT / "assets"
ASSETS.mkdir(parents=True, exist_ok=True)
sys.path.insert(0, str(OUT))
from stb_container import (
    ContainerError, classify_blob, decompress, parse_sfnt, scan_tail,
)

IMAGE_BASE = 0x180000000
data = (ROOT / "m64.dll").read_bytes()

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
    sections.append(dict(
        name=name, va=base+va, vs=vs, raw=ro, rs=rs, raw_end=ro+rs,
    ))


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


def write_tsv(name, header, rows):
    with open(OUT / name, "w", encoding="utf-8", newline="") as f:
        w = csv.writer(f, delimiter="\t", lineterminator="\n")
        w.writerow(header)
        w.writerows(rows)
    print(f"{name}: {len(rows)}")


def rel(path: Path) -> str:
    return str(path.relative_to(OUT)).replace("\\", "/")


# ---- PE resources
def parse_resources():
    rsrc = next((s for s in sections if s["name"] == ".rsrc"), None)
    if not rsrc:
        return []
    baseoff = va2off(rsrc["va"])
    entries = []

    def walk(off, path):
        d = baseoff + off
        if d + 16 > len(data):
            return
        named, ids = struct.unpack_from("<HH", data, d + 12)
        for i in range(named + ids):
            e = d + 16 + i * 8
            if e + 8 > len(data):
                break
            nf, df = struct.unpack_from("<II", data, e)
            if nf & 0x80000000:
                so = baseoff + (nf & 0x7FFFFFFF)
                ln = struct.unpack_from("<H", data, so)[0]
                nm = data[so+2:so+2+ln*2].decode("utf-16le", "replace")
            else:
                nm = str(nf)
            child = df & 0x7FFFFFFF
            if df & 0x80000000:
                walk(child, path + [nm])
            else:
                de = baseoff + child
                if de + 16 > len(data):
                    continue
                drva, size, cp, _ = struct.unpack_from("<IIII", data, de)
                do = va2off(base + drva)
                if do is None:
                    continue
                blob = data[do:do+size]
                safe = "_".join(re.sub(r"[^A-Za-z0-9_.-]", "_", x) for x in path + [nm])
                fn = ASSETS / f"rsrc_{safe}.bin"
                fn.write_bytes(blob)
                entries.append(["/".join(path + [nm]), hex(rsrc["va"]+drva), size, cp, fn.name, hashlib.md5(blob).hexdigest()])
    walk(0, [])
    return entries


rsrc = parse_resources()
write_tsv("resources.tsv", ["path", "va", "size", "codepage", "file", "md5"], rsrc)

# The two RCDATA font leaves are also copied to assets/fonts so the font
# table and the decoder outputs live in one predictable place.
PE_FONT_NAMES = {
    "10/101/1049": "MavenPro-Black.ttf",
    "10/102/1049": "Nexa-Book.ttf",
}
(ASSETS / "fonts").mkdir(parents=True, exist_ok=True)
resource_file = {r[0]: r[4] for r in rsrc}
for path, name in PE_FONT_NAMES.items():
    if path in resource_file:
        (ASSETS / "fonts" / name).write_bytes((ASSETS / resource_file[path]).read_bytes())

# ---- icon id -> codepoint used by FUN_18019ab20
src = (DUMP / "decompile/0x18019ab20_FUN_18019ab20.c").read_text(encoding="utf-8", errors="replace")
pairs = re.findall(r"case\s+(0x[0-9a-fA-F]+|\d+):\s*\n\s*puVar11\s*=\s*&DAT_([0-9a-fA-F]+);", src)
known = {
    0xF05B: "crosshairs", 0xF06E: "eye", 0xF0E7: "bolt", 0xF013: "cog",
    0xF121: "code", 0xF07B: "folder", 0xF03D: "", 0xF140: "", 0xF132: "shield",
    0xF3ED: "shield-alt", 0xF0C9: "bars", 0xF0AC: "globe", 0xF00A: "th-large",
    0xF085: "cogs",
}
hand_icons = []
for cid, va in pairs:
    cid = int(cid, 16) if cid.lower().startswith("0x") else int(cid)
    va = int(va, 16)
    b = va_bytes(va, 16)
    s = b.split(b"\0")[0]
    try:
        ch = s.decode("utf-8")
    except UnicodeDecodeError:
        ch = s.decode("latin1", "replace")
    cp = ord(ch[0]) if ch else 0
    hand_icons.append([cid, va, s.hex(), cp, ch])

# ---- 57 BC containers: keep the original blob, discover the stream, classify tail
sig = bytes.fromhex("57BC000000000000")
blobs = []
decoded_infos = []
region_rows = []
i = 0
while True:
    i = data.find(sig, i)
    if i < 0:
        break
    nxt = data.find(sig, i + 16)
    raw_all = data[i:(nxt if nxt > 0 else len(data))]
    outsz = struct.unpack_from(">I", data, i + 8)[0]
    stats = None
    info = None
    regions = []
    scan = {}
    try:
        output, stats = decompress(raw_all)
        info = parse_sfnt(output)
        if not (info["table_checksums_ok"] and info["checksum_adjustment_ok"]):
            raise ContainerError("sfnt checksum validation failed")
        regions = classify_blob(
            raw_all, i, stats, sections, image_data=data,
        )
        if sum(r["length"] for r in regions) != len(raw_all):
            raise ContainerError("region lengths do not sum to blob length")
        scan = scan_tail(raw_all, stats["consumed"], len(raw_all), sections)
    except ContainerError as exc:
        print(f"container at 0x{i:X}: {exc}")
    fn = ASSETS / f"font_blob_{len(blobs)}_{i:x}.bin"
    # The raw file is the complete original scan region, not a trimmed stream.
    fn.write_bytes(raw_all)
    decoded = None
    if info is not None:
        (ASSETS / "decoded").mkdir(parents=True, exist_ok=True)
        decoded = ASSETS / "decoded" / (fn.stem + ".ttf")
        decoded.write_bytes(output)
        decoded_infos.append((info, decoded, i, fn.name))
    for reg in regions:
        abs_off = i + reg["offset"]
        region_rows.append([
            fn.name, reg["region"], hex(abs_off), hex(off2va(abs_off) or 0),
            reg["length"], reg["kind"], reg["evidence"],
        ])
    post_kind = ";".join(
        f"{r['kind']}:{r['length']}" for r in regions[1:]
    ) or "none"
    post_evidence = "; ".join(
        f"{r['kind']} {r['length']}B: {r['evidence']}" for r in regions[1:]
    ) or "none"
    blobs.append([
        i, hex(off2va(i) or 0), len(raw_all),
        stats["consumed"] if stats else len(raw_all),
        (len(raw_all) - stats["consumed"]) if stats else 0,
        outsz, data[i+0x10:i+0x30].hex(), fn.name,
        hashlib.md5(raw_all).hexdigest(),
        rel(decoded) if decoded else "n/a",
        info["size"] if info else "n/a",
        info["md5"] if info else "n/a",
        f"0x{info['sfnt_version']:08X}" if info else "n/a",
        info["num_tables"] if info else "n/a",
        info["num_glyphs"] if info else "n/a",
        info["cmap_mappings"] if info else "n/a",
        info["family"] if info else "n/a",
        "yes" if info and info["table_checksums_ok"] else "no",
        "yes" if info and info["checksum_adjustment_ok"] else "no",
        "yes" if stats and stats["stored_adler"] == stats["computed_adler"] else "no",
        stats["tokens"] if stats else "n/a",
        stats["literal_tokens"] if stats else "n/a",
        stats["match_tokens"] if stats else "n/a",
        stats["literal_bytes"] if stats else "n/a",
        stats["match_bytes"] if stats else "n/a",
        stats["max_distance"] if stats else "n/a",
        hex(stats["end_offset"]) if stats else "n/a",
        sum(r["length"] for r in regions) if regions else 0,
        ";".join(f"{r['kind']}:{r['length']}" for r in regions) or "none",
        post_kind, post_evidence,
        scan.get("recognized_assets", "none"),
        scan.get("summary", "n/a"),
    ])
    i += max(stats["consumed"], 1) if stats else 16

write_tsv("font_blobs.tsv", [
    "file_offset", "va", "container_size", "stream_size", "post_stream_size",
    "uncompressed_size", "stream_head", "file", "md5", "decoded_file",
    "decoded_size", "decoded_md5",
    "sfnt_version", "num_tables", "glyphs", "cmap_mappings", "font_name",
    "table_checksums_ok", "checksum_adjustment_ok", "adler_ok", "tokens",
    "literal_tokens", "match_tokens", "literal_bytes", "match_bytes",
    "max_distance", "end_offset", "region_bytes_sum", "regions",
    "post_stream_kind", "post_stream_evidence", "recognized_assets",
    "magic_scan",
], blobs)
write_tsv("font_blob_regions.tsv", [
    "blob", "region", "file_offset", "va", "length", "kind", "evidence",
], region_rows)

# ---- font table: two PE RCDATA fonts + three decoded containers
def font_row(info, source, resource, file_path):
    return [
        info["family"], info["subfamily"], info["full"], info["version"],
        info["postscript"], info["license"], resource, rel(file_path),
        info["size"], info["md5"], source, info["num_glyphs"],
        info["cmap_mappings"], info["units_per_em"],
        "yes" if info["table_checksums_ok"] and info["checksum_adjustment_ok"] else "no",
    ]


font_rows = []
font_sources = []
for path, name in PE_FONT_NAMES.items():
    p = ASSETS / "fonts" / name
    if p.exists():
        info = parse_sfnt(p.read_bytes())
        font_rows.append(font_row(info, "PE RCDATA", path, p))
        font_sources.append((info, p))
for info, decoded, off, _ in decoded_infos:
    font_rows.append(font_row(info, "57BC container", f"57BC@{hex(off)}", decoded))
    font_sources.append((info, decoded))
write_tsv("fonts.tsv", [
    "family", "subfamily", "full", "version", "postscript", "license",
    "resource", "file", "size", "md5", "source", "glyphs", "cmap_mappings",
    "units_per_em", "checksum_ok",
], font_rows)

# ---- glyph maps straight from each decoded font's cmap + post + hmtx
glyph_rows = []
metric_rows = []
for info, p in font_sources:
    glyphs = {g["glyph_id"]: g for g in info["glyphs"]}
    for gid in range(info["num_glyphs"]):
        g = glyphs[gid]
        cps = g["codepoints"]
        mapped_cp = f"U+{cps[0]:04X}" if cps else "n/a"
        metric_rows.append([
            info["family"], rel(p), gid, g["glyph_name"], g["advance_width"],
            g["left_side_bearing"], mapped_cp, "yes" if cps else "no",
        ])
        for cp in cps:
            glyph_rows.append([
                info["family"], rel(p), f"U+{cp:04X}", gid, g["glyph_name"],
                g["advance_width"], g["left_side_bearing"],
            ])
write_tsv("glyphs.tsv", [
    "font", "file", "codepoint", "glyph_id", "glyph_name", "advance_width",
    "left_side_bearing",
], glyph_rows)
write_tsv("font_metrics.tsv", [
    "font", "file", "glyph_id", "glyph_name", "advance_width",
    "left_side_bearing", "mapped_codepoint", "mapped",
], metric_rows)

# ---- icon table generated from the decoded Font Awesome cmap
fa = next((info for info, _, _, _ in decoded_infos if "Font Awesome" in info["family"]), None)
if fa is None:
    raise SystemExit("Font Awesome container did not decode")
fa_glyphs = {g["glyph_id"]: g for g in fa["glyphs"]}
fa_by_cp = fa["cmap"]
icons = []
for cid, va, utf8_hex, cp, ch in hand_icons:
    gid = fa_by_cp.get(cp)
    g = fa_glyphs.get(gid) if gid is not None else None
    name = g["glyph_name"] if g else "n/a"
    advance = g["advance_width"] if g else "n/a"
    hand_name = known.get(cp, "") or "n/a"
    if gid is None:
        note = "missing from decoded cmap"
    elif hand_name == "n/a":
        note = "hand name absent; filled from decoded post table"
    elif hand_name == name:
        note = "codepoint and name match hand list"
    else:
        note = f"hand name {hand_name} vs decoded {name}"
    icons.append([
        cid, hex(va), utf8_hex, f"U+{cp:04X}", name, ch,
        gid if gid is not None else "n/a", advance, f"U+{cp:04X}",
        hand_name, "yes" if gid is not None else "no",
        "n/a" if hand_name == "n/a" else ("yes" if hand_name == name else "no"),
        note,
    ])
write_tsv("icons.tsv", [
    "id", "string_va", "utf8_hex", "codepoint", "font_awesome_name", "decoded",
    "glyph_id", "advance_width", "hand_codepoint", "hand_name",
    "codepoint_match", "name_match", "note",
], icons)

# ---- asset path strings
all_strings = [ln.rstrip("\r\n") for ln in open(DUMP / "strings_all.txt", encoding="utf-8", errors="replace")]
ext_re = re.compile(r"[^\s\"']+\.(?:ttf|otf|png|jpg|jpeg|vtf|vmt|wav|mp3|mdl|vvd|vtx|phy|ani|pcf|txt|lua|json|xml|cfg|ini|dll|bin|dat|res|ico|bmp|tga|dds)\b", re.I)
seen = set()
assets = []
for s in all_strings:
    for m in ext_re.findall(s):
        if m not in seen:
            seen.add(m)
            assets.append([m, m.rsplit(".", 1)[-1].lower(), s[:200]])
write_tsv("asset_strings.tsv", ["path", "type", "source_string"], assets)

# ---- machine-readable validation and summary
validation = []
for info, p in font_sources:
    validation.append({
        "family": info["family"], "file": rel(p), "size": info["size"],
        "md5": info["md5"], "sfnt_version": f"0x{info['sfnt_version']:08X}",
        "num_tables": info["num_tables"], "units_per_em": info["units_per_em"],
        "glyphs": info["num_glyphs"], "cmap_mappings": info["cmap_mappings"],
        "table_checksums_ok": info["table_checksums_ok"],
        "checksum_adjustment_ok": info["checksum_adjustment_ok"],
        "tables": info["tables"],
    })
(OUT / "font_validation.json").write_text(json.dumps(validation, indent=1) + "\n", encoding="utf-8")

summary = {
    "resources": len(rsrc),
    "fonts": len(font_rows),
    "decoded_fonts": len(decoded_infos),
    "icons": len(icons),
    "font_blobs": len(blobs),
    "font_blob_regions": len(region_rows),
    "glyph_mappings": len(glyph_rows),
    "glyph_metrics": len(metric_rows),
    "asset_paths": len(assets),
    "rsrc_bytes": sum(int(r[2]) for r in rsrc),
    "md5": hashlib.md5(data).hexdigest(),
}
(OUT / "asset_summary.json").write_text(json.dumps(summary, indent=1) + "\n", encoding="utf-8")
print(json.dumps(summary, indent=1))
