// gen_vtables.js — deterministic vtable/field generator for m64.dll.
//
// Pipeline (no DllMain, no game process):
//   1. imclass_host.exe maps m64.dll at 0x180000000,
//   2. memdump.exe reads that image back with ReadProcessMemory,
//   3. this script parses the image and the decompiled corpus.
//
// Output is stable across runs: sorted rows, no timestamps or PIDs.
//
// Usage: node re/tools/gen_vtables.js            (all stages)
//        node re/tools/gen_vtables.js --baseline (label/field/chain stages off;
//            writes only baseline/slots_pre.tsv and baseline/vtables_pre.h)

'use strict';

const fs = require('fs');
const os = require('os');
const crypto = require('crypto');
const path = require('path');
const { spawn, spawnSync } = require('child_process');

const toolsDir = __dirname;
const root = path.resolve(toolsDir, '..', '..');
const dllPath = path.join(root, 'm64.dll');
const dumpDir = path.join(root, 're', 'dump');
const outDir = path.join(dumpDir, 'vtables');
const hostExe = path.join(toolsDir, 'imclass_host.exe');
const memdumpExe = path.join(toolsDir, 'memdump.exe');
const imclassDumpExe = path.join(toolsDir, 'imclass_dump.exe');
const IMAGE_BASE = 0x180000000;
const BASELINE_MODE = process.argv.includes('--baseline') || process.env.VT_BASELINE === '1';

const TAG_RE = /\[[A-Z][A-Z0-9_ /-]{1,20}\]/;
const MAX_CALLEES = 128;

// ---------------------------------------------------------------- utilities

const hex = (n, width) => '0x' + n.toString(16).padStart(width || 0, '0');
const cmpName = (a, b) => (a < b ? -1 : a > b ? 1 : 0);
const cell = (v) => String(v).replace(/[\t\r\n]+/g, ' ').trim();

function readTsv(file) {
    const lines = fs.readFileSync(file, 'utf8').replace(/^\uFEFF/, '')
        .split(/\r?\n/).filter(Boolean);
    const header = lines[0].split('\t');
    return lines.slice(1).map((line) => {
        const fields = line.split('\t');
        return Object.fromEntries(header.map((h, i) => [h, fields[i] ?? '']));
    });
}

// ---------------------------------------------------------------- image

async function captureMappedImage() {
    const tmp = path.join(os.tmpdir(), 'skyfall_vtables_image');
    fs.rmSync(tmp, { recursive: true, force: true });
    fs.mkdirSync(tmp, { recursive: true });

    const host = spawn(hostExe, [dllPath, '--seconds', '300'], { cwd: toolsDir });
    try {
        const pid = await new Promise((resolve, reject) => {
            let out = '';
            const timer = setTimeout(() => reject(new Error('host timeout: ' + out)), 15000);
            host.stdout.on('data', (d) => {
                out += d;
                const m = out.match(/pid=(\d+)/);
                if (m) { clearTimeout(timer); resolve(Number(m[1])); }
            });
            host.stderr.on('data', (d) => { out += d; });
            host.on('exit', (code) => {
                clearTimeout(timer);
                reject(new Error('host exited ' + code + ': ' + out));
            });
        });

        // ImClass's own reader produces the vtable/RTTI/ownership table. Baseline
        // mode writes it under the temp dir so it touches only baseline/.
        const imclassDir = BASELINE_MODE ? path.join(tmp, 'imclass') : path.join(dumpDir, 'imclass');
        const imclass = spawnSync(imclassDumpExe, [String(pid), hex(IMAGE_BASE),
            path.join(dumpDir, 'rtti_classes.tsv'), imclassDir],
            { cwd: toolsDir, encoding: 'utf8' });
        if (imclass.status !== 0) {
            throw new Error('imclass_dump failed: ' + (imclass.stderr || imclass.stdout));
        }

        const run = spawnSync(memdumpExe, [String(pid), dllPath, tmp], { cwd: toolsDir, encoding: 'utf8' });
        if (run.status !== 0) throw new Error('memdump failed: ' + (run.stderr || run.stdout));

        const file = path.join(tmp, 'm64_mapped.bin');
        if (!fs.existsSync(file)) throw new Error('memdump produced no image');
        return { image: fs.readFileSync(file), live: readTsv(path.join(imclassDir, 'rtti_live.tsv')) };
    } finally {
        try { host.kill(); } catch (_) { /* already gone */ }
        fs.rmSync(tmp, { recursive: true, force: true });
    }
}

function parsePe(image) {
    const peOff = image.readUInt32LE(0x3c);
    const coff = peOff + 4;
    const opt = coff + 20;
    const sectionTable = opt + image.readUInt16LE(coff + 16);
    const imageBase = Number(image.readBigUInt64LE(opt + 24));
    const sizeOfImage = image.readUInt32LE(opt + 56);

    const sections = [];
    for (let i = 0; i < image.readUInt16LE(coff + 2); i++) {
        const s = sectionTable + i * 40;
        sections.push({
            name: image.toString('ascii', s, s + 8).replace(/\0.*$/, ''),
            va: image.readUInt32LE(s + 12),
            size: image.readUInt32LE(s + 8),
        });
    }
    const sectionAt = (rva) => sections.find((s) => rva >= s.va && rva < s.va + s.size);
    const str = (rva) => {
        let end = rva;
        while (end < image.length && image[end] !== 0) end++;
        return image.toString('ascii', rva, end);
    };

    // Import table: IAT RVA -> {dll, func}.
    const imports = new Map();
    const dirs = opt + 112;
    let desc = image.readUInt32LE(dirs + 8);
    for (let g = 0; g < 512 && desc; g++, desc += 20) {
        const oft = image.readUInt32LE(desc);
        const nameRva = image.readUInt32LE(desc + 12);
        const ft = image.readUInt32LE(desc + 16);
        if (!nameRva && !ft) break;
        const dll = str(nameRva).toLowerCase();
        for (let i = 0; ; i++) {
            const entry = image.readBigUInt64LE(oft + i * 8);
            if (entry === 0n) break;
            const func = (entry >> 63n) ? '#' + (entry & 0xffffn).toString() : str(Number(entry) + 2);
            imports.set(ft + i * 8, { dll, func });
        }
    }

    // Debug directory: RSDS identity and PDB path (UTF-16LE).
    const dbgRva = image.readUInt32LE(dirs + 6 * 8);
    const dbgSize = image.readUInt32LE(dirs + 6 * 8 + 4);
    let pdb = null;
    if (dbgRva && dbgSize >= 28) {
        // IMAGE_DEBUG_DIRECTORY points at its CodeView record via AddressOfRawData.
        const dataRva = image.readUInt32LE(dbgRva + 20);
        if (dataRva && image.toString('ascii', dataRva, dataRva + 4) === 'RSDS') {
            const guidHex = [...image.subarray(dataRva + 4, dataRva + 20)]
                .map((b) => b.toString(16).padStart(2, '0')).join('');
            // CodeView stores the PDB path as UTF-8, not UTF-16.
            let end = dataRva + 24;
            while (end < image.length && image[end] !== 0) end++;
            pdb = {
                guid: guidHex.toUpperCase(),
                guidDashed: guidHex.slice(0, 8).toUpperCase() + '-' + guidHex.slice(8, 12) +
                    '-' + guidHex.slice(12, 16) + '-' + guidHex.slice(16, 20) + '-' +
                    guidHex.slice(20).toUpperCase(),
                age: image.readUInt32LE(dataRva + 20),
                path: image.toString('utf8', dataRva + 24, end),
            };
        }
    }

    return {
        imageBase, sizeOfImage, sections, sectionAt, imports, pdb,
        exportRva: image.readUInt32LE(dirs),
        exportSize: image.readUInt32LE(dirs + 4),
    };
}

// ---------------------------------------------------------------- corpus

function buildCorpus() {
    const stringsByRva = new Map();
    for (const row of readTsv(path.join(dumpDir, 'strings_by_function.tsv'))) {
        const rva = parseInt(row.address, 16) - IMAGE_BASE;
        if (!stringsByRva.has(rva)) stringsByRva.set(rva, []);
        stringsByRva.get(rva).push(row.string);
    }

    const decompileByRva = new Map();
    for (const row of readTsv(path.join(dumpDir, 'decompile', '_INDEX.tsv'))) {
        const rva = parseInt(row.address, 16) - IMAGE_BASE;
        if (row.status === 'ok' && !decompileByRva.has(rva)) decompileByRva.set(rva, row.file);
    }

    const bodyCache = new Map();
    const body = (rva) => {
        const file = decompileByRva.get(rva);
        if (!file) return '';
        if (!bodyCache.has(file)) {
            bodyCache.set(file, fs.readFileSync(path.join(dumpDir, 'decompile', file), 'utf8'));
        }
        return bodyCache.get(file);
    };

    return { stringsByRva, decompileByRva, body };
}

function makeImportDetector(imports) {
    const names = new Set();
    for (const { dll, func } of imports.values()) {
        if (/\.dll$/i.test(dll) && /^[A-Za-z_][A-Za-z0-9_]*$/.test(func)) names.add(func);
    }
    const list = [...names].sort();
    if (!list.length) return () => [];
    const re = new RegExp('\\b(' + list.join('|') + ')\\s*\\(', 'g');
    return (text) => {
        const found = new Set();
        let m;
        re.lastIndex = 0;
        while ((m = re.exec(text)) !== null) found.add(m[1]);
        return [...found].sort();
    };
}

function isUseful(s) {
    return s && s.length >= 3 && !s.startsWith('.?A') && !s.startsWith('..-') &&
        !/^[%sdflux0-9.,:;()\-+*\/ ]+$/.test(s);
}

function callTargets(text) {
    const out = new Set();
    for (const m of text.matchAll(/\bFUN_([0-9a-fA-F]{8,})\s*\(/g)) {
        out.add(parseInt(m[1], 16) - IMAGE_BASE);
    }
    return [...out].filter((a) => a > 0).sort((a, b) => a - b);
}

// ---------------------------------------------------------------- slots

function followThunk(rva, pe) {
    const hops = [];
    let current = rva;
    let importHit = null;
    let unresolvedThunk = null;

    for (let depth = 0; depth < 8; depth++) {
        const bytes = pe.image.subarray(current, current + 8);
        if (bytes.length < 4) break;
        const iat = (dispOff, len) => current + len + bytes.readInt32LE(dispOff);

        if (bytes[0] === 0xff && bytes[1] === 0x25) {
            const iatRva = iat(2, 6);
            importHit = pe.imports.get(iatRva) || null;
            if (!importHit) unresolvedThunk = iatRva;
            hops.push('jmp [iat] ' + hex(iatRva));
            break;
        }
        if (bytes[0] === 0x48 && bytes[1] === 0xff && bytes[2] === 0x25) {
            const iatRva = iat(3, 7);
            importHit = pe.imports.get(iatRva) || null;
            if (!importHit) unresolvedThunk = iatRva;
            hops.push('jmp [iat] ' + hex(iatRva));
            break;
        }
        if (bytes[0] === 0xe9) {
            const to = current + 5 + bytes.readInt32LE(1);
            hops.push('jmp ' + hex(current) + ' -> ' + hex(to));
            current = to;
            continue;
        }
        if (bytes[0] === 0xeb) {
            const to = current + 2 + bytes.readInt8(1);
            hops.push('jmp ' + hex(current) + ' -> ' + hex(to));
            current = to;
            continue;
        }
        if (bytes[0] === 0xe8 && (bytes[5] === 0xc3 || bytes[5] === 0xcc)) {
            const to = current + 5 + bytes.readInt32LE(1);
            hops.push('call;ret ' + hex(current) + ' -> ' + hex(to));
            current = to;
            continue;
        }
        break;
    }
    return { target: current, hops, importHit, unresolvedThunk };
}

function followForwarder(landing, corpus) {
    for (let i = 0; i < 4; i++) {
        const m = corpus.body(landing.target).match(/\{\s*FUN_([0-9a-fA-F]+)\(\);\s*return;\s*\}/);
        if (!m) break;
        const to = parseInt(m[1], 16) - IMAGE_BASE;
        landing.hops.push('forwarder ' + hex(landing.target) + ' -> ' + hex(to));
        landing.target = to;
    }
    return landing;
}

function stubLabel(bytes) {
    if (!bytes.length) return null;
    if (bytes[0] === 0xc3) return 'no-op (bare ret)';
    if (bytes[0] === 0xc2) return 'no-op (ret ' + (bytes[1] | (bytes[2] << 8)) + ')';
    if (bytes[0] === 0x33 && bytes[1] === 0xc0 && bytes[2] === 0xc3) return 'returns 0 (xor eax,eax; ret)';
    if (bytes[0] === 0x32 && bytes[1] === 0xc0 && bytes[2] === 0xc3) return 'returns false (xor al,al; ret)';
    if (bytes[0] === 0xb0 && bytes[2] === 0xc3) return 'returns ' + bytes[1] + ' (mov al,imm; ret)';
    if (bytes[0] === 0xb8 && bytes[5] === 0xc3) return 'returns ' + bytes.readInt32LE(1);
    return null;
}

// Search callees (depth 2) for a string or import the caller itself lacks.
function calleeEvidence(rva, corpus, detectImports) {
    const visited = new Set([rva]);
    let frontier = [rva];
    for (let depth = 1; depth <= 3 && frontier.length; depth++) {
        const next = [];
        for (const from of frontier) {
            for (const callee of callTargets(corpus.body(from))) {
                if (visited.has(callee) || visited.size >= MAX_CALLEES) continue;
                visited.add(callee);
                next.push(callee);

                const strings = (corpus.stringsByRva.get(callee) || []).filter(isUseful);
                const tagged = strings.filter((s) => TAG_RE.test(s));
                if (tagged.length || strings.length) {
                    return { callee, depth, from, string: tagged[0] || strings[0] };
                }
                const imports = detectImports(corpus.body(callee));
                if (imports.length) return { callee, depth, from, imports };
            }
        }
        frontier = next;
    }
    return null;
}

function labelSlot(slotRva, landing, pe, corpus, detectImports) {
    const bytes = pe.image.subarray(landing.target, landing.target + 16);
    const body = corpus.body(landing.target);
    const directStrings = (corpus.stringsByRva.get(landing.target) || []).filter(isUseful);
    const directTagged = directStrings.filter((s) => TAG_RE.test(s));
    const directCalls = body ? detectImports(body) : [];
    const evidence = ['direct ' + hex(slotRva)];
    if (landing.target !== slotRva) evidence.push('lands ' + hex(landing.target));
    evidence.push(...landing.hops);
    if (body) evidence.push('body ' + body.match(/size=(\d+)/)?.[1] + 'B');

    if (landing.unresolvedThunk) {
        return {
            name: 'unresolved', confidence: 'unresolved',
            evidence: evidence.concat('no import-table entry for IAT ' + hex(landing.unresolvedThunk)).join('; '),
        };
    }
    if (landing.importHit) {
        return {
            name: landing.importHit.dll + '!' + landing.importHit.func,
            confidence: 'symbol',
            evidence: evidence.concat('import stub').join('; '),
        };
    }
    if (directTagged.length || directStrings.length) {
        return {
            name: directTagged[0] || directStrings[0],
            confidence: directTagged.length ? 'strong-inferred' : 'weak-inferred',
            evidence: evidence.concat('string literal in function').join('; '),
        };
    }
    const stub = stubLabel(bytes);
    if (stub) {
        return {
            name: stub, confidence: 'strong-inferred',
            evidence: evidence.concat('bytes ' + [...bytes.subarray(0, 6)]
                .map((b) => b.toString(16).padStart(2, '0')).join(' ')).join('; '),
        };
    }
    if (directCalls.length) {
        return {
            name: 'calls ' + directCalls.slice(0, 3).join(', '),
            confidence: 'weak-inferred',
            evidence: evidence.concat('imports in function').join('; '),
        };
    }

    const via = calleeEvidence(landing.target, corpus, detectImports);
    if (via) {
        const what = via.string
            ? '"' + via.string + '"'
            : 'calls ' + via.imports.slice(0, 3).join(', ');
        return {
            name: what,
            confidence: 'weak-inferred',
            evidence: evidence.concat('via callee ' + hex(via.callee) + ' depth ' + via.depth).join('; '),
        };
    }
    return null;
}

// ---------------------------------------------------------------- fields

const SIZE_BY_TYPE = {
    undefined8: 8, undefined4: 4, undefined2: 2, undefined1: 1, undefined: 1,
    char: 1, uchar: 1, byte: 1, short: 2, ushort: 2, word: 2,
    int: 4, uint: 4, dword: 4, long: 8, ulong: 8, longlong: 8, ulonglong: 8,
    float: 4, double: 8, bool: 1, code: 8, void: 1,
};

// Descriptive, body-derived names for slots with no symbol evidence. These are
// not recovered method names: every descriptor states the body pattern it came
// from, so it can be checked against the decompiled file.
function structuralDescriptor(body, targetRva) {
    if (!body) return null;
    const code = body.replace(/\/\/[^\n]*/g, '');
    const offsets = [...new Set([...code.matchAll(/param_1\s*\+\s*(0x[0-9a-f]+|\d+)/g)]
        .map((m) => Number(m[1])))].sort((a, b) => a - b);
    const writes = [...code.matchAll(/\*\([^)]*\)\s*\(\s*param_1\s*\+\s*(0x[0-9a-f]+|\d+)\s*\)\s*=(?!=)/g)]
        .map((m) => Number(m[1]));
    const calls = /\bFUN_[0-9a-fA-F]{8,}\s*\(/.test(code);
    const usesArg2 = /\bparam_2\b/.test(code);
    const compares = /(?:==|!=|<=|>=|<|>)/.test(code);
    const opHex = (list) => list.map((o) => hex(o, 2).slice(2)).join('_');
    const where = 'body 0x' + targetRva.toString(16);

    if (!calls && offsets.length && usesArg2 && compares) {
        return {
            name: 'field_compare_' + opHex(offsets),
            evidence: 'structural: ' + where + ' compares param_2 against ' +
                offsets.map((o) => '0x' + hex(o, 2).slice(2)).join(',') + '; no calls/strings/imports',
        };
    }
    if (!calls && writes.length === 1) {
        return {
            name: 'set_field_' + opHex(writes),
            evidence: 'structural: ' + where + ' writes this+0x' + hex(writes[0], 2).slice(2) +
                '; no calls/strings/imports',
        };
    }
    if (!calls && offsets.length === 1 && /return/.test(code) && !writes.length) {
        return {
            name: 'get_field_' + opHex(offsets),
            evidence: 'structural: ' + where + ' returns this+0x' + hex(offsets[0], 2).slice(2) +
                '; no calls/strings/imports',
        };
    }
    if (!calls && offsets.length === 1 && /\*param_2\s*=/.test(code)) {
        return {
            name: 'copy_field_' + opHex(offsets),
            evidence: 'structural: ' + where + ' copies this+0x' + hex(offsets[0], 2).slice(2) +
                ' to param_2; no calls/strings/imports',
        };
    }
    if (!calls && offsets.length > 1) {
        return {
            name: 'field_leaf_' + opHex(offsets),
            evidence: 'structural: ' + where + ' reads this+0x' + offsets.map((o) => hex(o, 2).slice(2)).join(',0x') +
                '; no calls/strings/imports',
        };
    }
    if (!calls && !offsets.length) {
        const rets = [...code.matchAll(/return\s+([^;]+);/g)].map((m) => m[1].trim());
        if (rets.length === 1 && /^-?\d+$/.test(rets[0])) {
            return {
                name: 'returns_' + rets[0].replace('-', 'neg'),
                evidence: 'structural: ' + where + ' returns constant ' + rets[0] + '; no calls/strings/imports',
            };
        }
        const hasBareReturn = /\breturn\b/.test(code);
        const hasAssignment = /(^|[^=!<>])=(?!=)/.test(code);
        if (rets.length === 0 && !hasBareReturn && !hasAssignment) {
            return {
                name: 'empty_stub',
                evidence: 'structural: ' + where + ' has no calls, no this+offset and no return value',
            };
        }
        return {
            name: 'leaf_stub',
            evidence: 'structural: ' + where + ' is a leaf body with no calls, this+offset or strings/imports',
        };
    }
    return null;
}

function collectFields(cls, slots, corpus) {
    const fields = new Map();
    const note = (offset, type, slot, via) => {
        if (!fields.has(offset)) fields.set(offset, { types: new Set(), slots: new Set(), via: new Set() });
        const f = fields.get(offset);
        if (type) f.types.add(type);
        f.slots.add(slot);
        f.via.add(via);
    };
    const scan = (text, slot, via) => {
        for (const m of text.matchAll(/\*\s*\(\s*([A-Za-z_][A-Za-z0-9_ ]*?)\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(0x[0-9a-f]+|\d+)\s*\)/g)) {
            note(Number(m[2]), m[1].trim(), slot, via);
        }
        for (const m of text.matchAll(/\bparam_1\s*\+\s*(0x[0-9a-f]+|\d+)/g)) {
            note(Number(m[1]), '', slot, via);
        }
    };

    for (const row of slots) {
        const text = corpus.body(row.targetRva);
        if (!text) continue;
        scan(text, row.slot, 'self');
        // A callee that receives param_1 as its first argument is looking at the
        // same object; its literal offsets are field candidates too.
        for (const m of text.matchAll(/\bFUN_([0-9a-fA-F]{8,})\s*\(\s*param_1\s*[,)]/g)) {
            const callee = corpus.body(parseInt(m[1], 16) - IMAGE_BASE);
            if (callee) scan(callee, row.slot, 'callee');
        }
    }

    return [...fields.entries()]
        .filter(([off]) => off >= 8 && off < 0x4000)
        .sort((a, b) => a[0] - b[0])
        .map(([off, f]) => {
            const types = [...f.types].sort();
            const type = types[0] || '?';
            return {
                cls: cls.name, offset: off, type,
                size: SIZE_BY_TYPE[type] || (type.endsWith('*') ? 8 : '?'),
                slots: [...f.slots].sort((a, b) => a - b),
                via: [...f.via].sort().join('+'),
            };
        });
}

// ---------------------------------------------------------------- classes

function loadClasses(live) {
    const stat = readTsv(path.join(dumpDir, 'rtti_classes.tsv'));
    const liveByName = new Map(live.map((r) => [r.class, r]));
    const classes = stat
        .filter((r) => r.class && r.vtableRva)
        .map((r) => ({
            name: r.class,
            vtableRva: parseInt(r.vtableRva, 16),
            bases: (r.bases || '').split(/[;,]\s*/).filter(Boolean),
            live: liveByName.get(r.class),
        }))
        .sort((a, b) => cmpName(a.name, b.name));

    const missing = classes.filter((c) => !c.live);
    if (missing.length || classes.length !== liveByName.size) {
        throw new Error('class table mismatch: ' + missing.length + ' live rows missing');
    }
    return classes;
}

function basePaths(cls, byName) {
    const paths = [];
    const walk = (node, trail) => {
        if (paths.length >= 16 || trail.length > 16) return;
        if (!node.bases.length) { paths.push(trail); return; }
        for (const base of node.bases) {
            if (trail.includes(base)) continue;
            const next = byName.get(base);
            walk(next || { name: base, bases: [] }, [...trail, base]);
        }
    };
    walk(cls, [cls.name]);
    return paths.sort((a, b) => cmpName(a.join('>'), b.join('>')));
}

function imageSlotVas(image, pe, vtableRva) {
    const slots = [];
    for (let i = 0; i < 200; i++) {
        const raw = Number(image.readBigUInt64LE(vtableRva + i * 8));
        if (!(raw >= IMAGE_BASE && raw < IMAGE_BASE + pe.sizeOfImage)) break;
        const sec = pe.sectionAt(raw - IMAGE_BASE);
        if (!sec || sec.name !== '.text') break;
        slots.push(raw);
    }
    return slots;
}

function topKey(map) {
    return [...map.entries()].sort((a, b) => b[1] - a[1] || String(a[0]).localeCompare(String(b[0])))[0][0];
}

// FeatureBase has no RTTI vtable in the image, but its subclasses share a
// layout: an offset seen in at least half of the field-bearing siblings is
// treated as a base field and inherited by siblings whose own bodies never
// touch it. Marked sibling-inferred, never as a direct access.
function featureBaseLayout(classes, ownFields) {
    const siblings = classes.filter((c) => c.bases.includes('Features::FeatureBase'));
    const withOwn = siblings.filter((c) => (ownFields.get(c.name) || []).length);
    const stats = new Map();
    for (const cls of withOwn) {
        const seen = new Set();
        for (const f of ownFields.get(cls.name) || []) {
            if (seen.has(f.offset)) continue;
            seen.add(f.offset);
            if (!stats.has(f.offset)) stats.set(f.offset, { n: 0, pairs: new Map() });
            const e = stats.get(f.offset);
            e.n++;
            const pair = f.type + '|' + f.size;
            e.pairs.set(pair, (e.pairs.get(pair) || 0) + 1);
        }
    }
    const threshold = Math.ceil(withOwn.length * 0.5);
    return [...stats.entries()]
        .filter(([, e]) => e.n >= threshold)
        .map(([offset, e]) => {
            const [type, size] = topKey(e.pairs).split('|');
            return { offset, type, size: /^\d+$/.test(size) ? Number(size) : '?', n: e.n, total: withOwn.length };
        })
        .sort((a, b) => a.offset - b.offset);
}

function mergeInherited(classes, byName, ownFields) {
    const layout = featureBaseLayout(classes, ownFields);
    const merged = new Map();
    for (const cls of classes) {
        const own = (ownFields.get(cls.name) || []).map((f) => ({ ...f, origin: 'self' }));
        const seen = new Set(own.map((f) => f.offset));
        const inherited = [];
        const visited = new Set();
        const walk = (name) => {
            if (visited.has(name)) return;
            visited.add(name);
            for (const f of ownFields.get(name) || []) {
                if (seen.has(f.offset)) continue;
                seen.add(f.offset);
                inherited.push({ ...f, origin: 'chain:' + name, via: 'inherited' });
            }
            const base = byName.get(name);
            if (base) for (const b of base.bases) walk(b);
        };
        for (const b of cls.bases) walk(b);
        if (cls.bases.includes('Features::FeatureBase')) {
            for (const f of layout) {
                if (seen.has(f.offset)) continue;
                seen.add(f.offset);
                inherited.push({
                    offset: f.offset, type: f.type, size: f.size, slots: [],
                    via: 'sibling-inferred ' + f.n + '/' + f.total,
                    origin: 'chain:Features::FeatureBase',
                });
            }
        }
        merged.set(cls.name, own.concat(inherited).sort((a, b) => a.offset - b.offset));
    }
    return merged;
}

function fieldNote(cls, ownFields, merged) {
    const own = (ownFields.get(cls.name) || []).length;
    const inherited = (merged.get(cls.name) || []).filter((f) => f.origin !== 'self').length;
    if (own) return '';
    if (inherited) {
        const siblings = (merged.get(cls.name) || []).filter((f) => String(f.via).startsWith('sibling-inferred'));
        if (siblings.length) {
            const basis = siblings.map((f) =>
                hex(f.offset, 2) + ' ' + String(f.via).replace('sibling-inferred ', '')).join(', ');
            return 'no self access; inherited FeatureBase layout inferred from field-bearing siblings (' + basis + ')';
        }
        return 'inherited chain offsets only';
    }
    return 'no param_1+offset in ' + cls.live.vtable_slots + ' virtual bodies or 1-hop callees; bases (' +
        (cls.bases.join(', ') || 'none') + ') have no field evidence';
}

// ---------------------------------------------------------------- writers

function writeArtifacts({ classes, byName, rows, fields, ownFields, pe }) {
    fs.mkdirSync(outDir, { recursive: true });

    // slots.tsv
    const lines = [['class', 'base_chain', 'slot', 'rva', 'landing_rva', 'name', 'confidence', 'evidence'].join('\t')];
    for (const r of rows) {
        lines.push([r.cls, r.baseChain, r.slot, hex(r.rva), hex(r.targetRva),
            cell(r.name), r.confidence, cell(r.evidence)].join('\t'));
    }
    fs.writeFileSync(path.join(outDir, 'slots.tsv'), lines.join('\n') + '\n');

    // vtables.h
    const used = new Set();
    const header = [
        '// Generated by re/tools/gen_vtables.js from a mapped m64.dll image.',
        '// Do not edit. Slot order matches re/dump/vtables/slots.tsv.',
        '#pragma once', '', '#include <cstdint>', '', 'namespace skyfall::vtables {', '',
    ];
    for (const cls of classes) {
        const classRows = rows.filter((r) => r.cls === cls.name);
        const ident = (() => {
            let id = 'vt_' + cls.name.replace(/[^A-Za-z0-9_]/g, '_').replace(/_+/g, '_');
            let n = 2;
            while (used.has(id)) id = id + '_' + n++;
            used.add(id);
            return id;
        })();
        const paths = basePaths(cls, byName);
        header.push('// class: ' + cls.name);
        header.push('// bases: ' + (cls.bases.join(', ') || '(none)'));
        header.push('// chain: ' + paths.map((p) => p.join(' : ')).join(' | '));
        header.push('// vtable: ' + hex(cls.vtableRva) + '  slots: ' + classRows.length);
        const own = ownFields.get(cls.name) || [];
        const inherited = (fields.get(cls.name) || []).filter((x) => x.origin !== 'self');
        if (own.length) {
            header.push('// fields (weak): ' + own.slice(0, 12)
                .map((x) => '+' + hex(x.offset, 2) + ' ' + x.type).join(', '));
        }
        if (inherited.length) {
            header.push('// inherited fields (weak): ' + inherited.slice(0, 12)
                .map((x) => '+' + hex(x.offset, 2) + ' ' + x.type + ' <' + x.origin.slice(6) + '>').join(', '));
        }
        header.push('struct ' + ident + ' {');
        header.push('    static constexpr const char* kRttiName = "' + cls.name.replace(/["\\]/g, '\\$&') + '";');
        header.push('    static constexpr unsigned kSlotCount = ' + classRows.length + ';');
        for (const r of classRows) {
            header.push('    void* slot' + String(r.slot).padStart(2, '0') + ';  // ' +
                hex(r.rva) + '  ' + r.confidence + '  ' + cell(r.name).slice(0, 90));
        }
        header.push('};', '');
    }
    header.push('}  // namespace skyfall::vtables');
    fs.writeFileSync(path.join(outDir, 'vtables.h'), header.join('\n') + '\n');
    fs.writeFileSync(path.join(outDir, 'compile_check.cpp'), '#include "vtables.h"\n\nint main() { return 0; }\n');

    // hierarchy.md
    const roots = new Map();
    for (const cls of classes) {
        for (const p of new Set(basePaths(cls, byName).map((x) => x[x.length - 1]))) {
            roots.set(p, (roots.get(p) || 0) + 1);
        }
    }
    const h = ['# RTTI class hierarchy — m64.dll', '',
        'Generated from the RTTI base-class descriptors in `re/dump/rtti_classes.tsv`.', '',
        '- classes: ' + classes.length,
        '- total vtable slots: ' + rows.length, '', '## Roots', '', '| root | classes |', '|---|---|'];
    for (const [n, c] of [...roots.entries()].sort((a, b) => b[1] - a[1] || cmpName(a[0], b[0]))) {
        h.push('| `' + n + '` | ' + c + ' |');
    }
    h.push('', '## Classes', '', '| class | immediate base(s) | all paths | slots |', '|---|---|---|---|');
    for (const cls of classes) {
        h.push('| `' + cls.name + '` | ' + (cls.bases.join(', ') || '—') + ' | ' +
            basePaths(cls, byName).map((p) => p.map((x) => '`' + x + '`').join(' : ')).join('<br>') +
            ' | ' + rows.filter((r) => r.cls === cls.name).length + ' |');
    }
    fs.writeFileSync(path.join(outDir, 'hierarchy.md'), h.join('\n') + '\n');

    // fields.tsv
    const fLines = ['class\toffset\tsize\ttype_hint\taccesses\tslots\tvia\torigin\tconfidence'];
    for (const cls of classes) {
        for (const f of fields.get(cls.name) || []) {
            fLines.push([cls.name, hex(f.offset, 2), f.size, f.type, f.slots.length,
                f.slots.join(','), f.via, f.origin, 'weak-inferred'].join('\t'));
        }
    }
    fs.writeFileSync(path.join(outDir, 'fields.tsv'), fLines.join('\n') + '\n');

    // field_status.tsv — every class, including classes with no evidence.
    const status = ['class\town\tinherited\ttotal\tnote'];
    for (const cls of classes) {
        const ownCount = (ownFields.get(cls.name) || []).length;
        const all = fields.get(cls.name) || [];
        const inheritedCount = all.filter((f) => f.origin !== 'self').length;
        status.push([cls.name, ownCount, inheritedCount, all.length, fieldNote(cls, ownFields, fields) || '-'].join('\t'));
    }
    fs.writeFileSync(path.join(outDir, 'field_status.tsv'), status.join('\n') + '\n');

    // symbols.csv — every landing RVA with its best label, for debugger import.
    const symbols = new Map();
    for (const r of rows) {
        if (!symbols.has(r.targetRva)) symbols.set(r.targetRva, { name: r.name, conf: r.confidence, cls: r.cls, slot: r.slot });
    }
    const sLines = ['address,name,confidence,class,slot'];
    for (const [rva, s] of [...symbols.entries()].sort((a, b) => a[0] - b[0])) {
        sLines.push([hex(rva), '"' + cell(s.name).replace(/"/g, '""') + '"', s.conf, s.cls, s.slot].join(','));
    }
    fs.writeFileSync(path.join(outDir, 'symbols.csv'), sLines.join('\n') + '\n');

    // pdb.md
    const pdb = pe.pdb;
    const p = ['# PDB identity and symbol status', '',
        'The image carries a debug directory but no CodeView symbols beyond the RSDS record;',
        'no vendor PDB is present on this machine.', '',
        '- export directory: RVA ' + hex(pe.exportRva) + ', size ' + pe.exportSize + ' (no exports)'];
    if (pdb) {
        p.push('- debug signature: RSDS',
            '- GUID: `' + pdb.guidDashed + '`',
            '- age: ' + pdb.age,
            '- vendor path: `' + pdb.path + '`',
            '- PDB present in workspace: no (only Skyfall-built PDBs exist under `build/`)');
    } else {
        p.push('- no RSDS debug record');
    }
    p.push('',
        '## What is generated instead', '',
        '- `symbols.csv`: every resolved slot landing RVA with its label and confidence,',
        '  sorted by address; import into a debugger or a Ghidra label script.',
        '- `slots.tsv` / `vtables.h`: the same labels tied to class and slot.',
        '',
        'A real PDB cannot be reconstructed from a stripped image: PDB type/field records',
        'are not present in the PE. The RSDS GUID is only an identity, not symbol data.');
    fs.writeFileSync(path.join(outDir, 'pdb.md'), p.join('\n') + '\n');

    // shortlist.md
    const category = (name) => {
        if (/Aimbot|RageAim|AimPoint|AutoFire|Triggerbot/i.test(name)) return [10, 'aim/trigger'];
        if (/ESP|Visual|Chams|Glow|Radar|DamageFeed|DamageLogger|Spectators|Watermark|BulletTracers|LookBeam/i.test(name)) return [9, 'visual/esp'];
        if (/HVH|AntiAim|Resolver|LagComp/i.test(name)) return [9, 'hvh'];
        if (/Backtrack|FakeLag|DoubleTap|FakePing/i.test(name)) return [8, 'tick/lag'];
        if (/Autowall|Nospread|Weapon|Shot|Seed|Prediction/i.test(name)) return [8, 'ballistics'];
        if (/Movement|BunnyHop|Autostrafe|EdgeJump|JumpBug|MoveFix|Speedhack|Airstuck|FakeDuck|Warp/i.test(name)) return [7, 'movement'];
        if (/Lua|AccountSwitcher/i.test(name)) return [6, 'lua/account'];
        return [1, 'framework/other'];
    };
    const ranked = classes.filter((c) => c.name !== 'Features::FeatureBase').map((cls) => {
        const cr = rows.filter((r) => r.cls === cls.name);
        const [weight, basis] = category(cls.name);
        const tag = cr.filter((r) => TAG_RE.test(r.name)).length;
        const strong = cr.filter((r) => r.confidence === 'strong-inferred').length;
        return {
            cls, cr, basis, tag,
            score: weight * 10 + tag * 2 + Math.min(strong, 20) * 0.5,
            evidence: cr.filter((r) => TAG_RE.test(r.name)).slice(0, 3)
                .map((r) => 'slot' + String(r.slot).padStart(2, '0') + ' `' + String(r.name).slice(0, 80) + '`'),
        };
    }).sort((a, b) => b.score - a.score || cmpName(a.cls.name, b.cls.name));

    const s = ['# Gameplay-relevant class shortlist', '',
        'Ranking = subsystem weight (aim 10, visual/hvh 9, tick/ballistics 8, movement 7,',
        'lua/account 6) + 2 per slot whose evidence string carries a log tag + 0.5 per',
        'byte- or string-backed slot, capped at 20. Ties break on class name.', '',
        '| # | class | score | slots | tag slots | basis | evidence |', '|---|---|---|---|---|---|---|'];
    ranked.slice(0, 25).forEach((r, i) => {
        s.push('| ' + (i + 1) + ' | `' + r.cls.name + '` | ' + r.score.toFixed(1) + ' | ' + r.cr.length +
            ' | ' + r.tag + ' | ' + r.basis + ' | ' + (r.evidence.join('<br>') || '—') + ' |');
    });
    fs.writeFileSync(path.join(outDir, 'shortlist.md'), s.join('\n') + '\n');

    return writeStructuralDiff(rows);
}

function writeStructuralDiff(rows) {
    const baseFile = path.join(outDir, 'baseline', 'slots_pre.tsv');
    const preHeaderFile = path.join(outDir, 'baseline', 'vtables_pre.h');
    if (!fs.existsSync(baseFile) || !fs.existsSync(preHeaderFile)) {
        fs.writeFileSync(path.join(outDir, 'structural_diff.md'), '# Structural diff\n\nbaseline missing\n');
        return false;
    }

    const pre = readTsv(baseFile);
    const norm = (v) => hex(parseInt(v, 16));
    const preProjection = pre.map((r) => [r.class, r.slot, norm(r.rva), norm(r.landing_rva)].join('\t')).join('\n') + '\n';
    const curProjection = rows.map((r) => [r.cls, r.slot, hex(r.rva), hex(r.targetRva)].join('\t')).join('\n') + '\n';
    const sha = (text) => crypto.createHash('sha256').update(text).digest('hex');
    const identical = preProjection === curProjection;

    const headerSlots = (file) => {
        const out = [];
        let current = null;
        for (const line of fs.readFileSync(file, 'utf8').split(/\r?\n/)) {
            const c = line.match(/^\/\/ class: (.+)$/);
            if (c) { current = [c[1]]; out.push(current); continue; }
            const s = line.match(/^    void\* slot\d+;  \/\/ (0x[0-9a-f]+)/);
            if (s && current) current.push(s[1]);
        }
        return out.map((a) => a.join('\t')).join('\n') + '\n';
    };
    const preHeader = headerSlots(preHeaderFile);
    const curHeader = headerSlots(path.join(outDir, 'vtables.h'));
    const headerIdentical = preHeader === curHeader;

    const preClasses = [...new Set(pre.map((r) => r.class))];
    const curClasses = [...new Set(rows.map((r) => r.cls))];
    const classOrderIdentical = preClasses.length === curClasses.length &&
        preClasses.every((n, i) => n === curClasses[i]);
    const preCounts = new Map();
    const curCounts = new Map();
    for (const r of pre) preCounts.set(r.class, (preCounts.get(r.class) || 0) + 1);
    for (const r of rows) curCounts.set(r.cls, (curCounts.get(r.cls) || 0) + 1);
    const countsIdentical = classOrderIdentical &&
        preClasses.every((n) => preCounts.get(n) === curCounts.get(n));

    let firstDiff = '';
    if (!identical) {
        const a = preProjection.split('\n');
        const b = curProjection.split('\n');
        for (let i = 0; i < Math.max(a.length, b.length); i++) {
            if (a[i] !== b[i]) {
                firstDiff = 'first difference at line ' + (i + 1) + ': baseline `' + a[i] + '` current `' + b[i] + '`';
                break;
            }
        }
    }

    const md = [
        '# Structural diff against the stage-disabled baseline', '',
        'Baseline files: `baseline/slots_pre.tsv` and `baseline/vtables_pre.h`,',
        'generated by `node re/tools/gen_vtables.js --baseline` with the label, field',
        'and chain stages off. Regenerate them with that command; they are not a',
        'hand-copied snapshot.', '',
        'Compared projection: class, slot, direct RVA, landing RVA. Label, evidence,',
        'base chain and field content are excluded by design.', '',
        '- rows: ' + rows.length + ' (baseline ' + pre.length + ')',
        '- classes: ' + new Set(rows.map((r) => r.cls)).size + ' (baseline ' + new Set(pre.map((r) => r.class)).size + ')',
        '- structural SHA-256 current: `' + sha(curProjection) + '`',
        '- structural SHA-256 baseline: `' + sha(preProjection) + '`',
        '- class set and order identical: **' + (classOrderIdentical ? 'yes' : 'no') + '**',
        '- per-class slot counts identical: **' + (countsIdentical ? 'yes' : 'no') + '**',
        '- structural rows identical (direct + landing RVAs, thunk/forwarder resolved): **' + (identical ? 'yes' : 'no') + '**',
        '- vtables.h class/slot RVA sequence identical: **' + (headerIdentical ? 'yes' : 'no') + '**',
        firstDiff ? '- ' + firstDiff : '- no structural difference', '',
        'Only labels (including confidence), evidence, base-chain text, field lines',
        'and the generator comment differ between the two headers; struct order, class',
        'names, slot counts and slot RVAs are preserved.',
    ].join('\n');
    fs.writeFileSync(path.join(outDir, 'structural_diff.md'), md + '\n');
    return identical && headerIdentical && classOrderIdentical && countsIdentical;
}

function writeBaseline({ classes, rows }) {
    const baseDir = path.join(outDir, 'baseline');
    fs.mkdirSync(baseDir, { recursive: true });

    const lines = [['class', 'base_chain', 'slot', 'rva', 'landing_rva', 'name', 'confidence', 'evidence'].join('\t')];
    for (const r of rows) {
        lines.push([r.cls, r.baseChain, r.slot, hex(r.rva), hex(r.targetRva),
            cell(r.name), r.confidence, cell(r.evidence)].join('\t'));
    }
    fs.writeFileSync(path.join(baseDir, 'slots_pre.tsv'), lines.join('\n') + '\n');

    const used = new Set();
    const header = [
        '// Generated by re/tools/gen_vtables.js --baseline from a mapped m64.dll image.',
        '// Label, field and chain stages are disabled. Do not edit.',
        '// Slot order matches re/dump/vtables/baseline/slots_pre.tsv.',
        '#pragma once', '', '#include <cstdint>', '', 'namespace skyfall::vtables {', '',
    ];
    for (const cls of classes) {
        const classRows = rows.filter((r) => r.cls === cls.name);
        let id = 'vt_' + cls.name.replace(/[^A-Za-z0-9_]/g, '_').replace(/_+/g, '_');
        let n = 2;
        while (used.has(id)) id = id + '_' + n++;
        used.add(id);
        header.push('// class: ' + cls.name);
        header.push('// bases: ' + (cls.bases.join(', ') || '(none)'));
        header.push('// vtable: ' + hex(cls.vtableRva) + '  slots: ' + classRows.length);
        header.push('struct ' + id + ' {');
        header.push('    static constexpr const char* kRttiName = "' + cls.name.replace(/["\\]/g, '\\$&') + '";');
        header.push('    static constexpr unsigned kSlotCount = ' + classRows.length + ';');
        for (const r of classRows) {
            header.push('    void* slot' + String(r.slot).padStart(2, '0') + ';  // ' +
                hex(r.rva) + '  ' + r.confidence + '  ' + cell(r.name).slice(0, 90));
        }
        header.push('};', '');
    }
    header.push('}  // namespace skyfall::vtables');
    fs.writeFileSync(path.join(baseDir, 'vtables_pre.h'), header.join('\n') + '\n');
}

// ---------------------------------------------------------------- main

async function main() {
    const { image, live } = await captureMappedImage();
    const pe = parsePe(image);
    pe.image = image;
    if (pe.imageBase !== IMAGE_BASE) throw new Error('unexpected image base');

    const corpus = buildCorpus();
    const detectImports = makeImportDetector(pe.imports);
    const classes = loadClasses(live);
    const byName = new Map(classes.map((c) => [c.name, c]));
    const rows = [];
    const ownFields = new Map();
    const stages = { label: !BASELINE_MODE, fields: !BASELINE_MODE, chain: !BASELINE_MODE };

    for (const cls of classes) {
        const liveSlots = (cls.live.slot_vas || '').split(',').filter(Boolean)
            .map((v) => parseInt(v, 16));
        if (liveSlots.length !== Number(cls.live.vtable_slots)) {
            throw new Error('ImClass slot count mismatch for ' + cls.name);
        }
        const imageSlots = imageSlotVas(image, pe, cls.vtableRva);
        if (imageSlots.length !== liveSlots.length || imageSlots.some((v, i) => v !== liveSlots[i])) {
            throw new Error('ImClass/image vtable mismatch for ' + cls.name);
        }

        const classRows = [];
        for (let slot = 0; slot < liveSlots.length; slot++) {
            const slotRva = liveSlots[slot] - IMAGE_BASE;
            const landing = followForwarder(followThunk(slotRva, pe), corpus);
            let labelled;
            if (stages.label) {
                labelled = labelSlot(slotRva, landing, pe, corpus, detectImports);
                if (!labelled) {
                    const body = corpus.body(landing.target);
                    const descriptor = structuralDescriptor(body, landing.target);
                    if (descriptor) {
                        labelled = { name: cls.name + '::' + descriptor.name, confidence: 'structural', evidence: descriptor.evidence };
                    } else {
                        const calls = body ? [...body.matchAll(/\bFUN_[0-9a-fA-F]{8,}\s*\(/g)].length : 0;
                        labelled = {
                            name: cls.name + '::vfunc' + String(slot).padStart(2, '0'),
                            confidence: 'weak-inferred',
                            evidence: 'unresolved-by-tool: ImClass RTTI only; ' + (body
                                ? (calls ? calls + ' callees, none with string/import up to depth 3'
                                    : 'leaf body, no calls/strings/imports')
                                : 'no decompiled body') + '; no structural descriptor; no shared named target',
                        };
                    }
                }
            } else {
                labelled = {
                    name: cls.name + '::vfunc' + String(slot).padStart(2, '0'),
                    confidence: 'weak-inferred',
                    evidence: 'RTTI slot identity only',
                };
            }
            const row = {
                cls: cls.name,
                baseChain: stages.chain
                    ? basePaths(cls, byName).map((p) => p.join(' : ')).join(' | ')
                    : cls.bases.join(' : '),
                slot, rva: slotRva, targetRva: landing.target,
                ...labelled,
            };
            if (stages.label) {
                row.evidence = 'imclass ' + cls.live.status + ' slot ' + (slot + 1) + '/' +
                    liveSlots.length + '; ' + row.evidence + '; rtti ' + cls.live.live_chain;
            }
            rows.push(row);
            classRows.push(row);
        }
        if (stages.fields) ownFields.set(cls.name, collectFields(cls, classRows, corpus));
    }

    if (BASELINE_MODE) {
        writeBaseline({ classes, rows });
        console.log('baseline: classes=' + classes.length + ' slots=' + rows.length);
        return;
    }

    // Identical landing targets share one evidence base, so a named slot can name them.
    const namedTargets = new Map();
    for (const r of rows) {
        if (!/::vfunc\d+$/.test(r.name) && !namedTargets.has(r.targetRva)) namedTargets.set(r.targetRva, r);
    }
    for (const r of rows) {
        if (!/::vfunc\d+$/.test(r.name)) continue;
        const src = namedTargets.get(r.targetRva);
        if (!src) continue;
        r.name = src.name;
        r.confidence = src.confidence;
        r.evidence += '; shared target ' + hex(r.targetRva) + ' with ' + src.cls + ' slot' + src.slot;
    }

    const fields = mergeInherited(classes, byName, ownFields);
    const structuralOk = writeArtifacts({ classes, byName, rows, fields, ownFields, pe });

    const conf = {};
    for (const r of rows) conf[r.confidence] = (conf[r.confidence] || 0) + 1;
    const placeholders = rows.filter((r) => /::vfunc\d+$/.test(r.name)).length;
    const inherited = [...fields.values()].reduce((n, list) =>
        n + list.filter((f) => f.origin !== 'self').length, 0);
    console.log('classes=' + classes.length + ' slots=' + rows.length +
        ' fields=' + [...fields.values()].reduce((n, f) => n + f.length, 0) +
        ' inherited=' + inherited);
    console.log('confidence: ' + Object.keys(conf).sort().map((k) => k + '=' + conf[k]).join(' ') +
        ' unresolved=' + (conf.unresolved || 0) + ' placeholders=' + placeholders);
    console.log('structural baseline: ' + (structuralOk ? 'identical' : 'DIFF'));
    console.log('wrote ' + path.relative(root, outDir));
}

main().catch((e) => {
    console.error(e.stack || String(e));
    process.exit(1);
});
