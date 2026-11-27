#!/usr/bin/env node
// MSVC x64 RTTI extractor for m64.dll.
//
// Walks the PE, finds every RTTICompleteObjectLocator in .rdata, resolves its
// type descriptor and class hierarchy, and locates the vtable slot that points
// back at each locator. Output is a class graph (name, bases, vtable RVA) that
// names the cheat's architecture without needing a decompiler.
//
// usage: node rtti.js <pe-file> <outdir>

const fs = require('fs');
const path = require('path');

const file = process.argv[2];
const outDir = process.argv[3] || '.';
if (!file) {
    console.error('usage: node rtti.js <pe-file> <outdir>');
    process.exit(1);
}

const buf = fs.readFileSync(file);
if (buf.readUInt16LE(0) !== 0x5a4d) throw new Error('not a PE (no MZ)');
const peOff = buf.readUInt32LE(0x3c);
if (buf.readUInt32LE(peOff) !== 0x00004550) throw new Error('not a PE (no PE\\0\\0)');

const coff = peOff + 4;
const numSections = buf.readUInt16LE(coff + 2);
const optSize = buf.readUInt16LE(coff + 16);
const opt = coff + 20;
const magic = buf.readUInt16LE(opt);
if (magic !== 0x20b) throw new Error('expected PE32+ (0x20b), got 0x' + magic.toString(16));
const imageBase = Number(buf.readBigUInt64LE(opt + 24));
const sections = [];
let secOff = opt + optSize;
for (let i = 0; i < numSections; i++) {
    const s = secOff + i * 40;
    const name = buf.toString('ascii', s, s + 8).replace(/\0.*$/, '');
    sections.push({
        name,
        vsize: buf.readUInt32LE(s + 8),
        va: buf.readUInt32LE(s + 12),
        rawSize: buf.readUInt32LE(s + 16),
        rawPtr: buf.readUInt32LE(s + 20),
    });
}
console.log(`imageBase=0x${imageBase.toString(16)} sections=${sections.map(s => s.name).join(',')}`);

function toOffset(rva) {
    for (const s of sections) {
        const span = Math.max(s.vsize, s.rawSize);
        if (rva >= s.va && rva < s.va + span) {
            const delta = rva - s.va;
            if (delta >= s.rawSize) return -1;
            return s.rawPtr + delta;
        }
    }
    return -1;
}
function u32(rva) {
    const off = toOffset(rva);
    if (off < 0 || off + 4 > buf.length) return null;
    return buf.readUInt32LE(off);
}
function bytes(rva, len) {
    const off = toOffset(rva);
    if (off < 0 || off + len > buf.length) return null;
    return buf.subarray(off, off + len);
}
function cstr(rva, max = 512) {
    const off = toOffset(rva);
    if (off < 0) return null;
    let end = off;
    while (end < buf.length && buf[end] !== 0 && end - off < max) end++;
    return buf.toString('ascii', off, end);
}

// MSVC type descriptor has a vftable pointer and spare field before the name.
const TYPE_DESC_NAME_OFFSET = 16;

function readTypeDescriptor(rva) {
    if (rva == null) return null;
    const off = toOffset(rva);
    if (off < 0 || off + TYPE_DESC_NAME_OFFSET >= buf.length) return null;
    // vftable pointer must land inside the image; this rejects random RVAs.
    const vft = Number(buf.readBigUInt64LE(off));
    if (vft < imageBase || vft > imageBase + 0x10000000) return null;
    const name = cstr(rva + TYPE_DESC_NAME_OFFSET);
    if (!name || !/^\.\?A[VU]/.test(name)) return null;
    return { rva, name };
}

// AimbotFeature@Aimbot@Features@@ -> Features::Aimbot::AimbotFeature
function demangle(raw) {
    let s = raw.replace(/^\.\?A[VU]/, '');
    s = s.replace(/@@$/, '');
    const parts = s.split('@').filter(Boolean);
    parts.reverse();
    return parts.join('::');
}

// BaseClassDescriptor is 24 bytes: typeDescriptor, numContainedBases, PMD, attributes, hierarchy.
function readBaseClass(rva) {
    const td = u32(rva);
    const contained = u32(rva + 4);
    const attr = u32(rva + 20);
    const type = readTypeDescriptor(td);
    return type ? { type: demangle(type.name), contained, attr } : null;
}

const rdata = sections.find(s => s.name === '.rdata') || sections.find(s => s.name.includes('rdata'));
if (!rdata) throw new Error('no .rdata');

const locators = [];
for (let rva = rdata.va; rva < rdata.va + rdata.vsize - 24; rva += 4) {
    if (u32(rva) !== 1) continue;                 // signature 1 => x64 locator
    const pType = u32(rva + 12);
    const pClass = u32(rva + 16);
    const pSelf = u32(rva + 20);
    if (pSelf !== rva) continue;                   // self pointer must agree
    const type = readTypeDescriptor(pType);
    if (!type) continue;
    if (u32(pClass) !== 0) continue;               // hierarchy signature 0
    locators.push({ rva, type, pClass });
}
console.log(`complete object locators: ${locators.length}`);

// Vtable slot scan. The 8-byte slot immediately before the first virtual
// function holds the locator. Both encodings occur across MSVC versions: a
// zero-extended 32-bit RVA, and a full relocated pointer. Accept either, but
// only when it resolves to a locator that was actually found, so a constant
// that happens to equal some RVA cannot invent a vtable.
const colSet = new Set(locators.map(l => l.rva));
const vtableByCol = new Map();
const rstart = rdata.rawPtr;
const rend = rdata.rawPtr + rdata.rawSize;
for (let off = rstart; off + 8 <= rend; off += 8) {
    const rva = rdata.va + (off - rstart);
    const low = buf.readUInt32LE(off);
    const high = buf.readUInt32LE(off + 4);
    const wide = Number(buf.readBigUInt64LE(off)) - imageBase;
    let colRva = null;
    if (high === 0 && colSet.has(low)) colRva = low;
    else if (colSet.has(wide)) colRva = wide;
    if (colRva == null) continue;
    if (!vtableByCol.has(colRva)) vtableByCol.set(colRva, []);
    const list = vtableByCol.get(colRva);
    if (!list.includes(rva + 8)) list.push(rva + 8);
}

const rows = [];
for (const loc of locators) {
    const hierarchy = [];
    const baseArrayRva = u32(loc.pClass + 12);
    const count = u32(loc.pClass + 8);
    if (baseArrayRva != null && count != null && count < 64) {
        for (let i = 0; i < count; i++) {
            const entry = u32(baseArrayRva + i * 4);
            if (entry == null) break;
            const bc = readBaseClass(entry);
            if (bc) hierarchy.push(bc);
        }
    }
    const name = demangle(loc.type.name);
    const bases = hierarchy.slice(1).map(h => h.type);
    const vts = vtableByCol.get(loc.rva) || [];
    rows.push({
        name,
        raw: loc.type.name,
        colRva: loc.rva,
        vtable: vts.length ? vts[0] : null,
        vtableCount: vts.length,
        bases,
        numContained: hierarchy.length ? hierarchy[0].contained : 0,
    });
}

// A class can appear twice (multiple-inheritance subobjects). Keep the richest row.
const merged = new Map();
for (const r of rows) {
    const prev = merged.get(r.name);
    if (!prev || (r.vtable && !prev.vtable) || r.bases.length > prev.bases.length) {
        if (prev && prev.vtable && !r.vtable) r.vtable = prev.vtable;
        merged.set(r.name, r);
    }
}
const classes = [...merged.values()].sort((a, b) => a.name.localeCompare(b.name));

fs.mkdirSync(outDir, { recursive: true });
const tsv = ['class\tvtableRva\tvtableCount\tcolRva\tnumContainedBases\tbases'];
for (const c of classes) {
    tsv.push([
        c.name,
        c.vtable == null ? '' : '0x' + c.vtable.toString(16),
        c.vtableCount,
        '0x' + c.colRva.toString(16),
        c.numContained,
        c.bases.join(','),
    ].join('\t'));
}
fs.writeFileSync(path.join(outDir, 'rtti_classes.tsv'), tsv.join('\n') + '\n');

// Namespace summary: Features::Aimbot::AimbotFeature -> Features::Aimbot
const groups = new Map();
for (const c of classes) {
    const ns = c.name.includes('::') ? c.name.slice(0, c.name.lastIndexOf('::')) : '(global)';
    if (!groups.has(ns)) groups.set(ns, []);
    groups.get(ns).push(c.name.slice(c.name.lastIndexOf('::') + 2));
}
const groupLines = [...groups.entries()].sort((a, b) => a[0].localeCompare(b[0]))
    .map(([ns, names]) => `## ${ns} (${names.length})\n${names.sort().join(', ')}`);
fs.writeFileSync(path.join(outDir, 'rtti_namespaces.md'), groupLines.join('\n\n') + '\n');

const withVtable = classes.filter(c => c.vtable != null).length;
console.log(`classes: ${classes.length} (with vtable: ${withVtable}) namespaces: ${groups.size}`);
console.log(`wrote rtti_classes.tsv, rtti_namespaces.md`);
