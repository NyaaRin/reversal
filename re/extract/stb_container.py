#!/usr/bin/env python3
"""Byte-exact decoder and sfnt validator for the m64.dll `57 BC` containers.

The containers are stb_compress streams (the format used by
`binary_to_compressed_c` / ImGui's `stb_decompress`), not a custom LZSS.
The DLL routines at 0x1802A04E0 and 0x18029FF10 are the driver and token
decoder; this module is a direct, independent implementation of the same
grammar and validates the trailing Adler-32 that the DLL checks.

Container layout (16-byte header, stream at +0x10):

    0x00  4  magic 57 BC 00 00
    0x04  4  zero (uncompressed size must fit in 32 bits)
    0x08  4  uncompressed size, big-endian
    0x0C  4  format flag 00 04 00 00 (constant in all three blobs; not read
              by the DLL decoder, which starts at +0x10)
    0x10  .. stb_compress token stream
    end     05 FA + 4-byte big-endian Adler-32 of the output

Token grammar (all distances are from the current output cursor; a match may
overlap the bytes it is producing):

    0x20..0x3F  literal  len = t - 0x1F, data follows
    0x40..0x7F  match    len = b2 + 1, dist = be16(t,b1) - 0x4000 + 1
    0x80..0xFF  match    len = t - 0x7F, dist = b1 + 1
    0x18..0x1F  match    len = b3 + 1, dist = be24(t,b1,b2) - 0x180000 + 1
    0x10..0x17  match    len = be16(b3,b4) + 1,
                         dist = be24(t,b1,b2) - 0x100000 + 1
    0x08..0x0F  literal  len = be16(t,b1) - 0x0800 + 1, data follows
    0x07        literal  len = be16(b1,b2) + 1, data follows
    0x06        match    len = b4 + 1, dist = be24(b1,b2,b3) + 1
    0x04        match    len = be16(b4,b5) + 1, dist = be24(b1,b2,b3) + 1
    0x05 0xFA   end      followed by the 4-byte Adler-32
"""
from __future__ import annotations

import hashlib
import struct
import zlib

MAGIC = bytes.fromhex("57BC0000")
FLAG = 0x00040000
HEADER_SIZE = 16


class ContainerError(ValueError):
    pass


def _be16(data: bytes, off: int) -> int:
    return (data[off] << 8) | data[off + 1]


def _be24(data: bytes, off: int) -> int:
    return (data[off] << 16) | (data[off + 1] << 8) | data[off + 2]


def _need(data: bytes, off: int, count: int) -> None:
    if off < 0 or off + count > len(data):
        raise ContainerError(f"truncated stream at 0x{off:X} (need {count} bytes)")


def decompress(data: bytes) -> tuple[bytes, dict]:
    """Decode one 57 BC container and verify size + Adler-32.

    Returns (output, stats). Trailing bytes after the 6-byte end record are
    allowed and reported in stats["trailing_bytes"]; callers can trim the
    raw blob to stats["consumed"].
    """
    if len(data) < HEADER_SIZE:
        raise ContainerError("shorter than the 16-byte header")
    if data[:4] != MAGIC:
        raise ContainerError(f"bad magic {data[:4].hex()}")
    if data[4:8] != b"\0\0\0\0":
        raise ContainerError("header bytes 4..7 are not zero")
    out_size = int.from_bytes(data[8:12], "big")
    flags = int.from_bytes(data[12:16], "big")
    if flags != FLAG:
        raise ContainerError(f"unexpected format flag 0x{flags:08X}")
    if out_size == 0:
        raise ContainerError("zero uncompressed size")

    out = bytearray()
    i = HEADER_SIZE
    stats = {
        "uncompressed_size": out_size,
        "flags": flags,
        "tokens": 0,
        "literal_tokens": 0,
        "match_tokens": 0,
        "literal_bytes": 0,
        "match_bytes": 0,
        "max_distance": 0,
        "end_offset": None,
        "stored_adler": None,
        "computed_adler": None,
        "consumed": None,
        "trailing_bytes": None,
    }

    while True:
        _need(data, i, 1)
        token = data[i]

        if token >= 0x20:
            if token >= 0x80:
                _need(data, i, 2)
                length = token - 0x80 + 1
                distance = data[i + 1] + 1
                i += 2
                kind = "match"
            elif token >= 0x40:
                _need(data, i, 3)
                length = data[i + 2] + 1
                distance = _be16(data, i) - 0x4000 + 1
                i += 3
                kind = "match"
            else:
                length = token - 0x20 + 1
                _need(data, i, 1 + length)
                out += data[i + 1:i + 1 + length]
                i += 1 + length
                stats["tokens"] += 1
                stats["literal_tokens"] += 1
                stats["literal_bytes"] += length
                if len(out) > out_size:
                    raise ContainerError("literal run overruns uncompressed size")
                continue
        else:
            if token >= 0x18:
                _need(data, i, 4)
                length = data[i + 3] + 1
                distance = _be24(data, i) - 0x180000 + 1
                i += 4
                kind = "match"
            elif token >= 0x10:
                _need(data, i, 5)
                length = _be16(data, i + 3) + 1
                distance = _be24(data, i) - 0x100000 + 1
                i += 5
                kind = "match"
            elif token >= 0x08:
                _need(data, i, 2)
                length = _be16(data, i) - 0x0800 + 1
                _need(data, i, 2 + length)
                out += data[i + 2:i + 2 + length]
                i += 2 + length
                stats["tokens"] += 1
                stats["literal_tokens"] += 1
                stats["literal_bytes"] += length
                if len(out) > out_size:
                    raise ContainerError("literal run overruns uncompressed size")
                continue
            elif token == 0x07:
                _need(data, i, 3)
                length = _be16(data, i + 1) + 1
                _need(data, i, 3 + length)
                out += data[i + 3:i + 3 + length]
                i += 3 + length
                stats["tokens"] += 1
                stats["literal_tokens"] += 1
                stats["literal_bytes"] += length
                if len(out) > out_size:
                    raise ContainerError("literal run overruns uncompressed size")
                continue
            elif token == 0x06:
                _need(data, i, 5)
                length = data[i + 4] + 1
                distance = _be24(data, i + 1) + 1
                i += 5
                kind = "match"
            elif token == 0x04:
                _need(data, i, 6)
                length = _be16(data, i + 4) + 1
                distance = _be24(data, i + 1) + 1
                i += 6
                kind = "match"
            elif token == 0x05:
                _need(data, i, 2)
                if data[i + 1] != 0xFA:
                    raise ContainerError(f"0x05 token without FA marker at 0x{i:X}")
                _need(data, i, 6)
                stored = int.from_bytes(data[i + 2:i + 6], "big")
                actual = zlib.adler32(out) & 0xFFFFFFFF
                stats.update(
                    end_offset=i,
                    stored_adler=stored,
                    computed_adler=actual,
                    consumed=i + 6,
                    trailing_bytes=len(data) - (i + 6),
                )
                if len(out) != out_size:
                    raise ContainerError(
                        f"decoded {len(out)} bytes, header says {out_size}"
                    )
                if stored != actual:
                    raise ContainerError(
                        f"Adler-32 mismatch: stored 0x{stored:08X}, "
                        f"computed 0x{actual:08X}"
                    )
                return bytes(out), stats
            else:
                raise ContainerError(f"invalid token 0x{token:02X} at 0x{i:X}")

        # match token
        stats["tokens"] += 1
        stats["match_tokens"] += 1
        stats["match_bytes"] += length
        if distance <= 0 or distance > len(out):
            raise ContainerError(
                f"match distance {distance} at 0x{i:X} exceeds output {len(out)}"
            )
        if len(out) + length > out_size:
            raise ContainerError("match overruns uncompressed size")
        stats["max_distance"] = max(stats["max_distance"], distance)
        for _ in range(length):
            out.append(out[-distance])


# Standard Macintosh glyph names used by post format 2.0 indices 0..257.
MAC_GLYPH_NAMES = [
    ".notdef", ".null", "nonmarkingreturn", "space", "exclam", "quotedbl",
    "numbersign", "dollar", "percent", "ampersand", "quotesingle", "parenleft",
    "parenright", "asterisk", "plus", "comma", "hyphen", "period", "slash",
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
    "nine", "colon", "semicolon", "less", "equal", "greater", "question", "at",
    "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O",
    "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "bracketleft",
    "backslash", "bracketright", "asciicircum", "underscore", "grave", "a",
    "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p",
    "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "braceleft", "bar",
    "braceright", "asciitilde", "Adieresis", "Aring", "Ccedilla", "Eacute",
    "Ntilde", "Odieresis", "Udieresis", "aacute", "agrave", "acircumflex",
    "adieresis", "atilde", "aring", "ccedilla", "eacute", "egrave",
    "ecircumflex", "edieresis", "iacute", "igrave", "icircumflex", "idieresis",
    "ntilde", "oacute", "ograve", "ocircumflex", "odieresis", "otilde",
    "uacute", "ugrave", "ucircumflex", "udieresis", "dagger", "degree", "cent",
    "sterling", "section", "bullet", "paragraph", "germandbls", "registered",
    "copyright", "trademark", "acute", "dieresis", "notequal", "AE", "Oslash",
    "infinity", "plusminus", "lessequal", "greaterequal", "yen", "mu",
    "partialdiff", "summation", "product", "pi", "integral", "ordfeminine",
    "ordmasculine", "Omega", "ae", "oslash", "questiondown", "exclamdown",
    "logicalnot", "radical", "florin", "approxequal", "Delta", "guillemotleft",
    "guillemotright", "ellipsis", "nonbreakingspace", "Agrave", "Atilde",
    "Otilde", "OE", "oe", "endash", "emdash", "quotedblleft", "quotedblright",
    "quoteleft", "quoteright", "divide", "lozenge", "ydieresis", "Ydieresis",
    "fraction", "currency", "guilsinglleft", "guilsinglright", "fi", "fl",
    "daggerdbl", "periodcentered", "quotesinglbase", "quotedblbase",
    "perthousand", "Acircumflex", "Ecircumflex", "Aacute", "Edieresis",
    "Egrave", "Iacute", "Icircumflex", "Idieresis", "Igrave", "Oacute",
    "Ocircumflex", "apple", "Ograve", "Uacute", "Ucircumflex", "Ugrave",
    "dotlessi", "circumflex", "tilde", "macron", "breve", "dotaccent", "ring",
    "cedilla", "hungarumlaut", "ogonek", "caron", "Lslash", "lslash", "Scaron",
    "scaron", "Zcaron", "zcaron", "brokenbar", "Eth", "eth", "Yacute",
    "yacute", "Thorn", "thorn", "minus", "multiply", "onesuperior",
    "twosuperior", "threesuperior", "onehalf", "onequarter", "threequarters",
    "franc", "Gbreve", "gbreve", "Idotaccent", "Scedilla", "scedilla",
    "Cacute", "cacute", "Ccaron", "ccaron", "dcroat",
]


def _table_checksum(data: bytes, tag: str, off: int, length: int) -> int:
    chunk = bytearray(data[off:off + length])
    if tag == "head":
        chunk[8:12] = b"\0\0\0\0"
    if len(chunk) % 4:
        chunk += b"\0" * (4 - len(chunk) % 4)
    return sum(struct.unpack(f">{len(chunk) // 4}I", chunk)) & 0xFFFFFFFF


def _decode_name(raw: bytes, platform_id: int) -> str:
    try:
        if platform_id in (0, 3):
            return raw.decode("utf-16-be")
        return raw.decode("latin1")
    except UnicodeDecodeError:
        return raw.decode("latin1", "replace")


def _parse_post_names(data: bytes, off: int, length: int, num_glyphs: int) -> tuple[str, dict[int, str]]:
    if length < 32:
        return "unknown", {}
    version = struct.unpack_from(">I", data, off)[0]
    if version != 0x00020000 or length < 34:
        return f"0x{version:08X}", {}
    count = struct.unpack_from(">H", data, off + 32)[0]
    if count > 0xFFFF or 34 + count * 2 > length:
        return "2.0-malformed", {}
    indices = list(struct.unpack_from(f">{count}H", data, off + 34))
    extra: list[str] = []
    p = off + 34 + count * 2
    end = off + length
    while p < end:
        n = data[p]
        if p + 1 + n > end:
            break
        extra.append(data[p + 1:p + 1 + n].decode("latin1"))
        p += 1 + n
    names: dict[int, str] = {}
    for gid in range(num_glyphs):
        idx = indices[gid] if gid < len(indices) else 0xFFFF
        if idx < 258:
            names[gid] = MAC_GLYPH_NAMES[idx] if idx < len(MAC_GLYPH_NAMES) else f"glyph_{gid}"
        elif idx - 258 < len(extra) and extra[idx - 258]:
            names[gid] = extra[idx - 258]
        else:
            names[gid] = f"glyph_{gid}"
    return "2.0", names


def _parse_cmap(data: bytes, off: int, length: int, num_glyphs: int) -> tuple[dict[int, int], list[dict]]:
    if length < 4:
        raise ContainerError("cmap table too short")
    count = struct.unpack_from(">H", data, off + 2)[0]
    if 4 + count * 8 > length:
        raise ContainerError("cmap encoding records exceed table")
    candidates = []
    for i in range(count):
        platform_id, encoding_id, sub_off = struct.unpack_from(">HHI", data, off + 4 + i * 8)
        so = off + sub_off
        if so + 2 > off + length:
            continue
        fmt = struct.unpack_from(">H", data, so)[0]
        candidates.append((platform_id, encoding_id, fmt, so))

    def rank(item):
        pid, eid, fmt, _ = item
        unicode = 2 if pid == 3 and eid in (1, 10) else 1 if pid == 0 else 0
        return (unicode, fmt in (4, 12), fmt)

    best = max(candidates, key=rank, default=None)
    if best is None:
        raise ContainerError("no usable cmap subtable")
    _, _, fmt, so = best
    mapping: dict[int, int] = {}
    if fmt == 4:
        seg_x2 = struct.unpack_from(">H", data, so + 6)[0]
        seg = seg_x2 // 2
        end_codes = so + 14
        start_codes = end_codes + seg_x2 + 2
        deltas = start_codes + seg_x2
        range_offsets = deltas + seg_x2
        if range_offsets + seg_x2 > off + length:
            raise ContainerError("format 4 cmap exceeds table")
        for j in range(seg):
            end = struct.unpack_from(">H", data, end_codes + j * 2)[0]
            start = struct.unpack_from(">H", data, start_codes + j * 2)[0]
            delta = struct.unpack_from(">h", data, deltas + j * 2)[0]
            ro = struct.unpack_from(">H", data, range_offsets + j * 2)[0]
            if start > end:
                continue
            for cp in range(start, end + 1):
                if cp == 0xFFFF:
                    continue
                if ro == 0:
                    gid = (cp + delta) & 0xFFFF
                else:
                    addr = range_offsets + j * 2 + ro + (cp - start) * 2
                    if addr + 2 > off + length:
                        continue
                    gid = struct.unpack_from(">H", data, addr)[0]
                    if gid:
                        gid = (gid + delta) & 0xFFFF
                if gid:
                    mapping[cp] = gid
    elif fmt == 12:
        n_groups = struct.unpack_from(">I", data, so + 12)[0]
        if so + 16 + n_groups * 12 > off + length:
            raise ContainerError("format 12 cmap exceeds table")
        for j in range(n_groups):
            start, end, gid0 = struct.unpack_from(">III", data, so + 16 + j * 12)
            for k in range(end - start + 1):
                mapping[start + k] = gid0 + k
    elif fmt == 0:
        for cp in range(256):
            gid = data[so + 6 + cp]
            if gid:
                mapping[cp] = gid
    else:
        raise ContainerError(f"unsupported cmap format {fmt}")

    for cp, gid in mapping.items():
        if gid >= num_glyphs:
            raise ContainerError(f"cmap maps U+{cp:04X} to glyph {gid} >= {num_glyphs}")
    recs = [{"platform_id": p, "encoding_id": e, "format": f} for p, e, f, _ in candidates]
    return mapping, recs


def parse_sfnt(data: bytes) -> dict:
    """Parse and validate a TrueType/OpenType font. Raises ContainerError."""
    if len(data) < 12:
        raise ContainerError("font shorter than sfnt header")
    version = struct.unpack_from(">I", data, 0)[0]
    if version not in (0x00010000, 0x4F54544F, 0x74727565):
        raise ContainerError(f"bad sfnt version 0x{version:08X}")
    num_tables = struct.unpack_from(">H", data, 4)[0]
    if num_tables == 0 or 12 + num_tables * 16 > len(data):
        raise ContainerError("bad table count")
    search_range = struct.unpack_from(">H", data, 6)[0]
    entry_selector = struct.unpack_from(">H", data, 8)[0]
    range_shift = struct.unpack_from(">H", data, 10)[0]
    expected_search = 16 * (1 << (num_tables.bit_length() - 1))
    if (search_range, entry_selector, range_shift) != (
        expected_search, num_tables.bit_length() - 1, num_tables * 16 - expected_search
    ):
        raise ContainerError("bad sfnt searchRange/entrySelector/rangeShift")

    tables: dict[str, tuple[int, int, int]] = {}
    table_checks: dict[str, bool] = {}
    for i in range(num_tables):
        rec = 12 + i * 16
        tag = data[rec:rec + 4].decode("latin1")
        checksum, off, length = struct.unpack_from(">III", data, rec + 4)
        if off + length > len(data):
            raise ContainerError(f"table {tag!r} exceeds file")
        if off < 12 + num_tables * 16:
            raise ContainerError(f"table {tag!r} overlaps table directory")
        tables[tag] = (checksum, off, length)
        table_checks[tag] = _table_checksum(data, tag, off, length) == checksum
    for required in ("head", "maxp", "hhea", "hmtx", "cmap"):
        if required not in tables:
            raise ContainerError(f"missing required table {required}")

    head_off = tables["head"][1]
    head_len = tables["head"][2]
    if head_len < 54:
        raise ContainerError("head table too short")
    if struct.unpack_from(">I", data, head_off + 12)[0] != 0x5F0F3CF5:
        raise ContainerError("bad head magic")
    units_per_em = struct.unpack_from(">H", data, head_off + 18)[0]
    if not 16 <= units_per_em <= 16384:
        raise ContainerError("bad unitsPerEm")
    loca_format = struct.unpack_from(">h", data, head_off + 50)[0]
    if loca_format not in (0, 1):
        raise ContainerError("bad indexToLocFormat")
    adjustment = struct.unpack_from(">I", data, head_off + 8)[0]
    whole = bytearray(data)
    whole[head_off + 8:head_off + 12] = b"\0\0\0\0"
    if len(whole) % 4:
        whole += b"\0" * (4 - len(whole) % 4)
    total = sum(struct.unpack(f">{len(whole) // 4}I", whole)) & 0xFFFFFFFF
    adjustment_ok = (total + adjustment) & 0xFFFFFFFF == 0xB1B0AFBA

    maxp_off = tables["maxp"][1]
    maxp_version = struct.unpack_from(">I", data, maxp_off)[0]
    if maxp_version not in (0x00010000, 0x00005000):
        raise ContainerError("bad maxp version")
    num_glyphs = struct.unpack_from(">H", data, maxp_off + 4)[0]
    if num_glyphs == 0:
        raise ContainerError("zero glyphs")

    hhea_off = tables["hhea"][1]
    num_hmetrics = struct.unpack_from(">H", data, hhea_off + 34)[0]
    if not 1 <= num_hmetrics <= num_glyphs:
        raise ContainerError("bad numberOfHMetrics")
    hmtx_off, hmtx_len = tables["hmtx"][1], tables["hmtx"][2]
    needed_hmtx = num_hmetrics * 4 + (num_glyphs - num_hmetrics) * 2
    if hmtx_len < needed_hmtx:
        raise ContainerError("hmtx shorter than metrics")

    if "loca" in tables and "glyf" in tables:
        loca_off, loca_len = tables["loca"][1], tables["loca"][2]
        entry_size = 4 if loca_format else 2
        if loca_len < (num_glyphs + 1) * entry_size:
            raise ContainerError("loca shorter than glyph count")
        if loca_format:
            offsets = list(struct.unpack_from(f">{num_glyphs + 1}I", data, loca_off))
        else:
            offsets = [x * 2 for x in struct.unpack_from(f">{num_glyphs + 1}H", data, loca_off)]
        glyf_len = tables["glyf"][2]
        if any(a > b for a, b in zip(offsets, offsets[1:])):
            raise ContainerError("loca offsets not monotonic")
        if offsets[-1] > glyf_len:
            raise ContainerError("loca end exceeds glyf")

    mapping, cmap_records = _parse_cmap(
        data, tables["cmap"][1], tables["cmap"][2], num_glyphs
    )

    names: dict[int, str] = {}
    name_off, name_len = tables.get("name", (0, 0, 0))[1], tables.get("name", (0, 0, 0))[2]
    if name_off and name_len >= 6:
        count = struct.unpack_from(">H", data, name_off + 2)[0]
        string_off = struct.unpack_from(">H", data, name_off + 4)[0]
        for i in range(count):
            rec = name_off + 6 + i * 12
            if rec + 12 > name_off + name_len:
                break
            pid, eid, lid, nid, ln, off = struct.unpack_from(">HHHHHH", data, rec)
            start = name_off + string_off + off
            if start + ln > name_off + name_len:
                continue
            text = _decode_name(data[start:start + ln], pid)
            names.setdefault(nid, text)
    for nid in (0, 1, 2, 3, 4, 5, 6, 13, 14):
        if nid in names:
            names[nid] = names[nid].replace("\r", " ").replace("\n", " ").strip()

    post_format, post_names = _parse_post_names(
        data, tables["post"][1], tables["post"][2], num_glyphs
    ) if "post" in tables else ("none", {})

    advances: list[int] = []
    lsbs: list[int] = []
    for gid in range(num_glyphs):
        if gid < num_hmetrics:
            adv, lsb = struct.unpack_from(">Hh", data, hmtx_off + gid * 4)
        else:
            adv = struct.unpack_from(">H", data, hmtx_off + (num_hmetrics - 1) * 4)[0]
            lsb = struct.unpack_from(">h", data, hmtx_off + num_hmetrics * 4 + (gid - num_hmetrics) * 2)[0]
        advances.append(adv)
        lsbs.append(lsb)

    glyph_to_cps: dict[int, list[int]] = {}
    for cp, gid in mapping.items():
        glyph_to_cps.setdefault(gid, []).append(cp)
    glyphs = []
    for gid in range(num_glyphs):
        glyphs.append({
            "glyph_id": gid,
            "glyph_name": post_names.get(gid, f"glyph_{gid}"),
            "advance_width": advances[gid],
            "left_side_bearing": lsbs[gid],
            "codepoints": sorted(glyph_to_cps.get(gid, [])),
        })

    family = names.get(1) or names.get(4) or "."
    full = names.get(4) or family
    return {
        "sfnt_version": version,
        "num_tables": num_tables,
        "tables": {tag: {"checksum": c, "offset": o, "length": l}
                   for tag, (c, o, l) in sorted(tables.items())},
        "table_checksums_ok": all(table_checks.values()),
        "checksum_adjustment_ok": adjustment_ok,
        "checksum_adjustment": adjustment,
        "units_per_em": units_per_em,
        "num_glyphs": num_glyphs,
        "num_hmetrics": num_hmetrics,
        "loca_format": loca_format,
        "cmap": mapping,
        "cmap_records": cmap_records,
        "cmap_mappings": len(mapping),
        "glyphs": glyphs,
        "names": names,
        "family": family,
        "subfamily": names.get(2, ""),
        "full": full,
        "version": names.get(5, ""),
        "postscript": names.get(6, ""),
        "copyright": names.get(0, ""),
        "license": names.get(13) or names.get(14) or names.get(0) or "",
        "post_format": post_format,
        "md5": hashlib.md5(data).hexdigest(),
        "size": len(data),
    }


def pe_sections(data: bytes) -> list[dict]:
    """Return PE sections with raw-file ranges (used to classify tails)."""
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    opt = pe + 24
    base = struct.unpack_from("<Q", data, opt + 24)[0]
    sec_tab = opt + struct.unpack_from("<H", data, pe + 20)[0]
    out = []
    for i in range(nsec):
        o = sec_tab + i * 40
        name = data[o:o + 8].split(b"\0")[0].decode("latin1")
        vs, va, rs, ro = struct.unpack_from("<IIII", data, o + 8)
        out.append({
            "name": name, "va": base + va, "vs": vs, "rs": rs,
            "raw": ro, "raw_end": ro + rs,
        })
    return out


def _section_for_raw(off: int, sections: list[dict] | None):
    if not sections:
        return None
    for s in sections:
        if s["raw"] <= off < s["raw_end"]:
            return s
    return None


def _read_va(data: bytes, va: int, sections: list[dict] | None, limit: int = 96):
    if not sections:
        return None
    for s in sections:
        if s["va"] <= va < s["va"] + s["vs"]:
            off = s["raw"] + (va - s["va"])
            if off < 0 or off >= len(data):
                return None
            raw = data[off:off + limit].split(b"\0")[0]
            try:
                text = raw.decode("ascii")
            except UnicodeDecodeError:
                return None
            if text and all(32 <= ord(c) < 127 for c in text):
                return text
    return None


def _parse_netvar_records(data: bytes, start: int, end: int,
                          image_data: bytes,
                          sections: list[dict] | None) -> list[dict]:
    """Parse the 24-byte {name_ptr, var_ptr, len, 0} records in blob 0's tail."""
    records = []
    o = start
    while o + 24 <= end:
        p1, p2, length, zero = struct.unpack_from("<QQII", data, o)
        if zero != 0 or not (1 <= length <= 200):
            break
        n1 = _read_va(image_data, p1, sections)
        n2 = _read_va(image_data, p2, sections)
        if not n1 or not n2:
            break
        records.append({"offset": o, "class": n1, "var": n2, "length": length})
        o += 24
    return records


def classify_blob(data: bytes, blob_offset: int, stats: dict,
                  sections: list[dict] | None = None,
                  image_data: bytes | None = None) -> list[dict]:
    """Classify every byte of one original (untrimmed) 57 BC blob.

    Region offsets are relative to the blob start. The sum of region lengths
    always equals len(data); the caller can assert that before writing TSVs.
    """
    stream_len = stats["consumed"]
    end = len(data)
    regions: list[dict] = []

    def add(kind: str, start: int, length: int, evidence: str):
        if length <= 0:
            return
        regions.append({
            "region": len(regions), "offset": start, "length": length,
            "kind": kind, "evidence": evidence,
        })

    add(
        "stb-compress-stream", 0, stream_len,
        f"magic 57BC0000; 05 FA end marker; Adler-32 "
        f"{stats['stored_adler']:08x}; output {stats['uncompressed_size']} bytes",
    )
    pos = stream_len
    if pos >= end:
        return regions

    sec0 = _section_for_raw(blob_offset + pos, sections)
    sec1 = _section_for_raw(blob_offset + end - 1, sections)
    if sec0 and sec1 and sec0["name"] != sec1["name"]:
        cur = pos
        while cur < end:
            s = _section_for_raw(blob_offset + cur, sections)
            if s is None:
                add("post-stream-data", cur, end - cur,
                    "outside the mapped PE sections")
                break
            stop = min(end, s["raw_end"] - blob_offset)
            add(
                f"pe-section:{s['name']}", cur, stop - cur,
                f"PE section {s['name']} raw 0x{s['raw']:X}..0x{s['raw_end']:X}",
            )
            cur = stop
        return regions

    # Blob 0 / 1 tails stay inside .rdata: classify their static structures.
    pad_start = pos
    while (pos < end and data[pos] == 0
           and ((blob_offset + pos) & 15) != 0):
        pos += 1
    if pos > pad_start and ((blob_offset + pos) & 15) == 0:
        add("alignment-padding", pad_start, pos - pad_start,
            f"zero fill to 16-byte boundary 0x{blob_offset + pos:X}")

    if data[pos:pos + 6] == bytes.fromhex("00F0FFF80000"):
        add("font-glyph-ranges", pos, 6,
            "ImWchar ranges {0xF000,0xF8FF,0}; FUN_1801EA560 sets "
            "GlyphRanges=&DAT_180330F00 and FUN_1802983A0 copies it")
        pos += 6

    if pos + 58 <= end:
        records = _parse_netvar_records(
            data, pos + 58, end, image_data if image_data is not None else data,
            sections,
        )
        if len(records) >= 3:
            dwords = " ".join(
                f"{struct.unpack_from('<I', data, pos + i)[0]:08X}"
                for i in range(0, 16, 4)
            )
            add("static-rdata-header", pos, 58,
                f"58-byte static header; first dwords {dwords}; "
                f"pointer 0x{struct.unpack_from('<Q', data, pos + 42)[0]:X}")
            add("netvar-name-table", pos + 58, len(records) * 24,
                f"{len(records)} records of {{name_ptr,var_ptr,len,0}}; "
                f"first {records[0]['class']}/{records[0]['var']}; "
                f"last {records[-1]['class']}/{records[-1]['var']}")
            pos += 58 + len(records) * 24

    if pos < end:
        head = data[pos:pos + 16]
        add("static-rdata-block", pos, end - pos,
            f"static .rdata block; head {head.hex()}; no 57BC/zlib/gzip/"
            f"LZMA/LZ4; sfnt/image magic hits fail validation")

    return regions


def scan_tail(data: bytes, start: int, end: int,
              sections: list[dict] | None = None) -> dict:
    """Scan a post-stream region for independently valid assets/streams."""
    import lzma
    tail = data[start:end]
    out = {
        "tail_size": len(tail),
        "stb_magic": tail.count(MAGIC),
        "zlib_candidates": 0, "zlib_valid": 0,
        "gzip_magic": tail.count(b"\x1f\x8b"),
        "lzma_candidates": 0, "lzma_valid": 0,
        "lz4_magic": tail.count(b"\x04\x22\x4d\x18"),
        "sfnt_candidates": 0, "valid_sfnt": [],
        "png_magic": tail.count(b"\x89PNG"),
        "jpeg_candidates": 0, "valid_jpeg": 0,
        "dds_magic": tail.count(b"DDS "),
        "vtf_magic": tail.count(b"VTF\0"),
        "zip_magic": tail.count(b"PK\x03\x04"),
    }
    for i in range(max(0, len(tail) - 1)):
        if tail[i] == 0x78 and tail[i + 1] in (0x01, 0x9C, 0xDA):
            out["zlib_candidates"] += 1
            try:
                zlib.decompress(tail[i:])
                out["zlib_valid"] += 1
            except Exception:
                pass
    for i in range(max(0, len(tail) - 3)):
        if tail[i] in (0x5D, 0x6D, 0x7D) and tail[i + 1:i + 4] == b"\0\0\0":
            out["lzma_candidates"] += 1
            try:
                lzma.decompress(tail[i:])
                out["lzma_valid"] += 1
            except Exception:
                pass
    pos = 0
    while True:
        i = tail.find(b"\x00\x01\x00\x00", pos)
        if i < 0:
            break
        out["sfnt_candidates"] += 1
        try:
            info = parse_sfnt(tail[i:])
            out["valid_sfnt"].append({
                "offset": i, "family": info["family"],
                "glyphs": info["num_glyphs"], "tables": info["num_tables"],
            })
        except Exception:
            pass
        pos = i + 1
    pos = 0
    while True:
        i = tail.find(b"OTTO", pos)
        if i < 0:
            break
        out["sfnt_candidates"] += 1
        try:
            info = parse_sfnt(tail[i:])
            out["valid_sfnt"].append({
                "offset": i, "family": info["family"],
                "glyphs": info["num_glyphs"], "tables": info["num_tables"],
            })
        except Exception:
            pass
        pos = i + 1
    try:
        from PIL import Image
        import io
        pil_ok = True
    except Exception:
        pil_ok = False
    for i in range(max(0, len(tail) - 2)):
        if tail[i:i + 3] == b"\xff\xd8\xff":
            out["jpeg_candidates"] += 1
            marker = tail[i + 3] if i + 3 < len(tail) else 0
            # SOI must be followed by a real segment marker, not a restart.
            if marker in (0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7,
                          0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF,
                          0xDB, 0xDD, 0xDA, 0xD9, 0xFE) or 0xE0 <= marker <= 0xEF:
                end_marker = tail.find(b"\xff\xd9", i + 2)
                if end_marker >= 0 and pil_ok:
                    try:
                        Image.open(io.BytesIO(tail[i:end_marker + 2])).load()
                        out["valid_jpeg"] += 1
                    except Exception:
                        pass
    out["recognized_assets"] = "; ".join(
        f"{x['family']} (sfnt at +0x{x['offset']:X})" for x in out["valid_sfnt"]
    ) or "none"
    out["summary"] = (
        f"57BC={out['stb_magic']}; zlib={out['zlib_candidates']}/"
        f"{out['zlib_valid']}; gzip={out['gzip_magic']}; "
        f"lzma={out['lzma_candidates']}/{out['lzma_valid']}; "
        f"lz4={out['lz4_magic']}; sfnt={out['sfnt_candidates']}/"
        f"{len(out['valid_sfnt'])}; jpeg={out['jpeg_candidates']}/"
        f"{out['valid_jpeg']}; png={out['png_magic']}; "
        f"dds={out['dds_magic']}; vtf={out['vtf_magic']}"
    )
    return out
