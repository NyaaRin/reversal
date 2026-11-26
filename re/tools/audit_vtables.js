// audit_vtables.js — re-derive the vtable/field claims from disk.
//
// Run: node re/tools/audit_vtables.js
//
// Checks:
//  * every slots.tsv row carries ImClass class/status/slot-count/slot-index/
//    live-chain data that matches re/dump/imclass/rtti_live.tsv;
//  * every evidence citation (direct/landing RVA, body size, bytes, import,
//    string, callee, structural pattern) resolves to the DLL or decompile/;
//  * every placeholder is marked unresolved-by-tool with a stated reason;
//  * every zero-field class has a stated reason and every chain-derived field
//    resolves to a base class or to the sibling-inferred FeatureBase layout.
//
// Exit 0 on PASS, 1 on any failure.

'use strict';

const fs = require('fs');
const path = require('path');

const root = path.resolve(__dirname, '..', '..');
const dump = path.join(root, 're', 'dump');
const vt = path.join(dump, 'vtables');
const dllPath = path.join(root, 'm64.dll');
const IMAGE_BASE = 0x180000000;
const failures = [];
const fail = (msg) => failures.push(msg);

function readTsv(file) {
    const lines = fs.readFileSync(file, 'utf8').replace(/^\uFEFF/, '')
        .split(/\r?\n/).filter(Boolean);
    const header = lines[0].split('\t').map((h) => h.replace(/\r$/, ''));
    return lines.slice(1).map((line) => {
        const cells = line.split('\t').map((c) => c.replace(/^"|"$/g, ''));
        return Object.fromEntries(header.map((h, i) => [h.replace(/\r$/, ''), cells[i] ?? '']));
    });
}

const hex = (n, width) => '0x' + n.toString(16).padStart(width || 0, '0');
const unhex = (s) => parseInt(s, 16);
const stripQuotes = (s) => s.replace(/^"|"$/g, '');

// ---------------------------------------------------------------- DLL image

const pe = (() => {
    const buf = fs.readFileSync(dllPath);
    const peOff = buf.readUInt32LE(0x3c);
    const coff = peOff + 4;
    const opt = coff + 20;
    const numSections = buf.readUInt16LE(coff + 2);
    const optSize = buf.readUInt16LE(coff + 16);
    const secTable = opt + optSize;
    const sections = [];
    for (let i = 0; i < numSections; i++) {
        const s = secTable + i * 40;
        sections.push({
            name: buf.toString('ascii', s, s + 8).replace(/\0.*$/, ''),
            vsize: buf.readUInt32LE(s + 8),
            va: buf.readUInt32LE(s + 12),
            rawSize: buf.readUInt32LE(s + 16),
            rawPtr: buf.readUInt32LE(s + 20),
        });
    }
    const off = (rva) => {
        for (const s of sections) {
            if (rva >= s.va && rva < s.va + Math.max(s.vsize, s.rawSize)) {
                return s.rawPtr + (rva - s.va);
            }
        }
        return -1;
    };
    const bytesAt = (rva, n) => {
        const o = off(rva);
        return o < 0 ? null : buf.subarray(o, o + n);
    };
    const strAt = (rva) => {
        const o = off(rva);
        if (o < 0) return '';
        let end = o;
        while (end < buf.length && buf[end] !== 0) end++;
        return buf.toString('ascii', o, end);
    };

    const imports = new Map();
    const importRva = buf.readUInt32LE(opt + 112 + 8);
    let desc = off(importRva);
    for (let g = 0; g < 512 && desc >= 0; g++, desc += 20) {
        const oft = buf.readUInt32LE(desc);
        const nameRva = buf.readUInt32LE(desc + 12);
        const ft = buf.readUInt32LE(desc + 16);
        if (!nameRva && !ft) break;
        const dll = strAt(nameRva).toLowerCase();
        const thunk = oft || ft;
        for (let i = 0; ; i++) {
            const entry = buf.readBigUInt64LE(off(thunk) + i * 8);
            if (entry === 0n) break;
            const func = (entry >> 63n) ? '#' + (entry & 0xffffn).toString() : strAt(Number(entry) + 2);
            imports.set(ft + i * 8, { dll, func });
        }
    }
    return { buf, off, bytesAt, imports };
})();

// ---------------------------------------------------------------- corpus

const indexByRva = new Map();
for (const row of readTsv(path.join(dump, 'decompile', '_INDEX.tsv'))) {
    if (row.status !== 'ok') continue;
    const rva = unhex(row.address) - IMAGE_BASE;
    if (!indexByRva.has(rva)) indexByRva.set(rva, row.file);
}
const bodyCache = new Map();
const body = (rva) => {
    const file = indexByRva.get(rva);
    if (!file) return '';
    if (!bodyCache.has(file)) bodyCache.set(file, fs.readFileSync(path.join(dump, 'decompile', file), 'utf8'));
    return bodyCache.get(file);
};

const stringsByRva = new Map();
for (const row of readTsv(path.join(dump, 'strings_by_function.tsv'))) {
    const rva = unhex(row.address) - IMAGE_BASE;
    if (!stringsByRva.has(rva)) stringsByRva.set(rva, []);
    stringsByRva.get(rva).push(row.string);
}

// ---------------------------------------------------------------- data

const live = new Map(readTsv(path.join(dump, 'imclass', 'rtti_live.tsv')).map((r) => [r.class, r]));
const slots = readTsv(path.join(vt, 'slots.tsv'));
const fields = readTsv(path.join(vt, 'fields.tsv'));
const status = readTsv(path.join(vt, 'field_status.tsv'));
const classes = new Map(readTsv(path.join(dump, 'rtti_classes.tsv')).map((r) => [r.class, r]));

const evidenceRows = (phrase) => slots.filter((r) => r.evidence.includes(phrase));
const check = (cond, msg) => { if (!cond) fail(msg); };

let checkedImclass = 0;
let checkedDirect = 0;
let checkedBody = 0;
let checkedBytes = 0;
let checkedImport = 0;
let checkedCallee = 0;
let checkedStructural = 0;
const confidenceSeen = new Map();

for (const row of slots) {
    const key = row.class + ' slot ' + row.slot;
    const ev = row.evidence;
    const m = ev.match(/^imclass (\S+) slot (\d+)\/(\d+); ([\s\S]*); rtti ([\s\S]+)$/);
    if (!m) { fail(key + ': no ImClass evidence prefix'); continue; }
    const [, statusText, slotNo, slotTotal, bodyEv, chain] = m;
    const cls = live.get(row.class);
    if (!cls) { fail(key + ': class missing from rtti_live.tsv'); continue; }
    check(Number(slotTotal) === Number(cls.vtable_slots), key + ': slot total mismatch');
    check(Number(slotNo) === Number(row.slot) + 1, key + ': slot index mismatch');
    check(statusText === cls.status, key + ': ImClass status mismatch');
    check(chain === cls.live_chain, key + ': live RTTI chain mismatch');
    const vas = (cls.slot_vas || '').split(',').filter(Boolean);
    check(vas.length === Number(cls.vtable_slots), key + ': slot_vas count mismatch');
    if (vas[Number(row.slot)]) {
        check(unhex(vas[Number(row.slot)]) - IMAGE_BASE === unhex(row.rva),
            key + ': slot VA does not match row RVA');
    }
    checkedImclass++;
    confidenceSeen.set(row.confidence, (confidenceSeen.get(row.confidence) || 0) + 1);

    const direct = bodyEv.match(/direct (0x[0-9a-f]+)/);
    if (direct) {
        check(unhex(direct[1]) === unhex(row.rva), key + ': direct RVA citation mismatch');
        checkedDirect++;
    }
    const lands = bodyEv.match(/lands (0x[0-9a-f]+)/);
            if (lands) check(unhex(lands[1]) === unhex(row.landing_rva), key + ': landing citation mismatch');

    const bodySize = bodyEv.match(/body (\d+)B/);
    const targetBody = body(unhex(row.landing_rva));
    if (bodySize) {
        const declared = Number(bodySize[1]);
        const actual = Number((targetBody.match(/\/\/ size=(\d+)/) || [])[1]);
        check(Number.isFinite(actual) && actual === declared, key + ': body size citation mismatch');
        check(Boolean(targetBody), key + ': body cited but missing');
        checkedBody++;
    }

    const bytes = bodyEv.match(/bytes ([0-9a-f ]+)/);
    if (bytes) {
        const cited = bytes[1].trim().split(/\s+/).join(' ');
        const actual = [...pe.bytesAt(unhex(row.landing_rva), 6)]
            .map((b) => b.toString(16).padStart(2, '0')).join(' ');
        check(cited === actual, key + ': byte citation mismatch');
        checkedBytes++;
    }

    if (bodyEv.includes('import stub')) {
        const iat = bodyEv.match(/jmp \[iat\] (0x[0-9a-f]+)/);
        check(Boolean(iat), key + ': import stub lacks IAT citation');
        if (iat) {
            const hit = pe.imports.get(unhex(iat[1]));
            check(Boolean(hit), key + ': IAT not in import table');
            if (hit) {
                check((hit.dll + '!' + hit.func).toLowerCase() === row.name.toLowerCase(),
                    key + ': import name does not match IAT');
            }
        }
        const first = pe.bytesAt(unhex(row.landing_rva), 2);
        check(first && first[0] === 0xff && first[1] === 0x25, key + ': import stub is not ff 25');
        checkedImport++;
    }

    if (bodyEv.includes('imports in function')) {
        const names = row.name.replace(/^calls /, '').split(/,\s*/);
        for (const name of names) {
            const hit = [...pe.imports.values()].some((x) => x.func === name);
            check(hit, key + ': import ' + name + ' not in import table');
            check(new RegExp('\\b' + name.replace(/[.*+?^${}()|[\]\\]/g, '\\$&') + '\\s*\\(').test(targetBody),
                key + ': body does not call ' + name);
        }
        checkedImport++;
    }

    if (bodyEv.includes('string literal in function')) {
        const strings = (stringsByRva.get(unhex(row.landing_rva)) || []).map((s) => s.trim());
        check(strings.includes(row.name.trim()), key + ': string absent from strings_by_function.tsv');
        // Ghidra can omit the literal from a decompiled body while the function
        // still references it; strings_by_function.tsv is the authoritative xref.
        check(targetBody.includes(row.name) || strings.includes(row.name.trim()),
            key + ': string label has no body or xref backing');
    }

    const callee = bodyEv.match(/via callee (0x[0-9a-f]+) depth (\d+)/);
    if (callee) {
        const cbody = body(unhex(callee[1]));
        check(Boolean(cbody), key + ': callee body missing');
        const label = stripQuotes(row.name).trim();
        if (/^calls /.test(label)) {
            for (const name of label.replace(/^calls /, '').split(/,\s*/)) {
                check(new RegExp('\\b' + name.replace(/[.*+?^${}()|[\]\\]/g, '\\$&') + '\\s*\\(').test(cbody),
                    key + ': callee does not call ' + name);
            }
        } else {
            const calleeStrings = (stringsByRva.get(unhex(callee[1])) || []).map((s) => s.trim());
            check(cbody.includes(label) || calleeStrings.includes(label),
                key + ': callee has no label string');
        }
        check(Number(callee[2]) >= 1 && Number(callee[2]) <= 3, key + ': callee depth out of range');
        checkedCallee++;
    }

    if (bodyEv.startsWith('structural: ')) {
        const sm = bodyEv.match(/body (0x[0-9a-f]+) (.*)$/);
        check(Boolean(sm), key + ': structural evidence has no body address');
        if (sm) {
            check(unhex(sm[1]) === unhex(row.landing_rva), key + ': structural body address mismatch');
            const text = sm[2].replace(/; no calls.*$/, '');
            const code = targetBody.replace(/\/\/[^\n]*/g, '');
            const offs = [...new Set([...code.matchAll(/param_1\s*\+\s*(0x[0-9a-f]+|\d+)/g)]
                .map((x) => Number(x[1])))];
            const has = (o) => offs.includes(o);
            if (text.startsWith('compares param_2 against ')) {
                check(/\bparam_2\b/.test(code), key + ': structural compare lacks param_2');
                for (const o of text.match(/against ([0-9a-fx,]+)/)[1].split(',')) {
                    check(has(unhex(o)), key + ': structural compare offset ' + o + ' absent');
                }
            } else if (text.startsWith('writes this+')) {
                const o = unhex(text.match(/this\+(0x[0-9a-f]+)/)[1]);
                check(has(o), key + ': structural write offset absent');
                check(new RegExp('\\*\\([^)]*\\)\\s*\\(\\s*param_1\\s*\\+\\s*(0x' + o.toString(16) + '|' + o + ')\\s*\\)\\s*=(?!=)').test(code),
                    key + ': structural write assignment absent');
            } else if (text.startsWith('returns this+')) {
                const o = unhex(text.match(/this\+(0x[0-9a-f]+)/)[1]);
                check(has(o), key + ': structural return offset absent');
                check(/return/.test(code), key + ': structural return absent');
            } else if (text.startsWith('copies this+')) {
                const o = unhex(text.match(/this\+(0x[0-9a-f]+)/)[1]);
                check(has(o), key + ': structural copy offset absent');
                check(/\*param_2\s*=/.test(code), key + ': structural copy target absent');
            } else if (text.startsWith('reads this+')) {
                for (const o of text.match(/this\+([0-9a-fx,]+)/)[1].split(',')) {
                    check(has(unhex(o)), key + ': structural read offset ' + o + ' absent');
                }
            } else if (text.startsWith('returns constant ')) {
                const n = text.match(/returns constant (-?\d+)/)[1];
                check(new RegExp('return\\s+' + n + '\\s*;').test(code), key + ': return constant absent');
            } else if (text.startsWith('has no calls, no this+offset and no return value')) {
                check(!/\bFUN_[0-9a-fA-F]{8,}\s*\(/.test(code), key + ': empty_stub has calls');
                check(!/\bparam_1\s*\+/.test(code), key + ': empty_stub has this+offset');
                check(!/\breturn\b/.test(code), key + ': empty_stub has return');
            } else if (text.startsWith('is a leaf body')) {
                check(!/\bFUN_[0-9a-fA-F]{8,}\s*\(/.test(code), key + ': leaf_stub has calls');
                check(!/\bparam_1\s*\+/.test(code), key + ': leaf_stub has this+offset');
                check((stringsByRva.get(unhex(row.landing_rva)) || []).length === 0,
                    key + ': leaf_stub has recorded strings');
            } else {
                fail(key + ': unknown structural descriptor');
            }
            checkedStructural++;
        }
    }

    if (/::vfunc\d+$/.test(row.name)) {
        check(bodyEv.includes('unresolved-by-tool'), key + ': placeholder lacks unresolved-by-tool');
        const reason = bodyEv.replace(/^unresolved-by-tool: ImClass RTTI only; /, '')
            .replace(/; no structural descriptor.*$/, '');
        const claimed = reason.match(/^(\d+) callees/);
        const calls = [...targetBody.matchAll(/\bFUN_[0-9a-fA-F]{8,}\s*\(/g)].length;
        if (claimed) check(Number(claimed[1]) === calls, key + ': callee count does not match body');
        if (reason.startsWith('leaf body')) check(calls === 0, key + ': leaf placeholder has callees');
        if (reason.startsWith('no decompiled body')) check(!targetBody, key + ': body exists for no-body claim');
    } else {
        check(!bodyEv.includes('unresolved-by-tool'), key + ': non-placeholder marked unresolved');
    }
}

// ---------------------------------------------------------------- fields

const selfFields = new Map();
for (const f of fields) {
    if (f.origin !== 'self') continue;
    if (!selfFields.has(f.class)) selfFields.set(f.class, new Set());
    selfFields.get(f.class).add(f.offset);
}

const featureSiblings = [...classes.values()]
    .filter((c) => (c.bases || '').split(/[;,]\s*/).includes('Features::FeatureBase'))
    .map((c) => c.class);
const siblingWithFields = featureSiblings.filter((n) => selfFields.has(n));

let chainRows = 0;
for (const f of fields) {
    if (!f.origin.startsWith('chain:')) continue;
    chainRows++;
    const base = f.origin.slice('chain:'.length);
    if (base === 'Features::FeatureBase') {
        const m = f.via.match(/^sibling-inferred (\d+)\/(\d+)$/);
        check(Boolean(m), f.class + ' +' + f.offset + ': bad sibling basis');
        if (m) {
            const n = Number(m[1]);
            check(Number(m[2]) === siblingWithFields.length,
                f.class + ' +' + f.offset + ': sibling total mismatch');
            const actual = siblingWithFields.filter((c) => selfFields.get(c).has(f.offset)).length;
            check(actual === n, f.class + ' +' + f.offset + ': sibling count mismatch (' + actual + ' vs ' + n + ')');
        }
    } else {
        check(classes.has(base), f.class + ' +' + f.offset + ': chain base not a captured class');
        check(selfFields.get(base)?.has(f.offset), f.class + ' +' + f.offset + ': offset absent from base ' + base);
    }
}

for (const r of status) {
    const owned = Number(r.own);
    const inheritedCount = Number(r.inherited);
    const total = Number(r.total);
    check(owned + inheritedCount === total, r.class + ': status counts do not add up');
    check(fields.filter((f) => f.class === r.class).length === total,
        r.class + ': fields.tsv row count differs from status total');
}
const zeroStatus = status.filter((r) => r.total === '0');
for (const r of zeroStatus) {
    check(r.note !== '-' && r.note.length > 0, r.class + ': zero fields has no reason');
    check(r.note.includes('no param_1+offset') || r.note.includes('no self access'),
        r.class + ': zero fields reason is not a no-access statement');
    check(!fields.some((f) => f.class === r.class), r.class + ': zero status but fields rows exist');
}
const aimbot = status.find((r) => r.class === 'Features::Aimbot::AimbotFeature');
check(Boolean(aimbot), 'AimbotFeature missing from field_status.tsv');
if (aimbot) {
    check(aimbot.total === '4' && aimbot.inherited === '4', 'AimbotFeature inherited layout missing');
    check(aimbot.note.includes('sibling'), 'AimbotFeature status does not state sibling basis');
}

// ---------------------------------------------------------------- summary

const placeholders = slots.filter((r) => /::vfunc\d+$/.test(r.name));
console.log('rows=' + slots.length + ' classes=' + new Set(slots.map((r) => r.class)).size);
console.log('confidence: ' + [...confidenceSeen.entries()].sort().map(([k, v]) => k + '=' + v).join(' '));
console.log('imclass checked=' + checkedImclass + ' direct=' + checkedDirect + ' body=' + checkedBody +
    ' bytes=' + checkedBytes + ' import=' + checkedImport + ' callee=' + checkedCallee +
    ' structural=' + checkedStructural);
console.log('placeholders=' + placeholders.length + ' all-marked=' +
    placeholders.every((r) => r.evidence.includes('unresolved-by-tool')));
console.log('zero-field classes=' + zeroStatus.length + ' all-explained=' +
    zeroStatus.every((r) => r.note && r.note !== '-'));
console.log('chain-derived fields=' + chainRows + ' (FeatureBase siblings=' + siblingWithFields.length + ')');
check(placeholders.length === 19, 'expected 19 placeholder rows, found ' + placeholders.length);
check(zeroStatus.length === 23, 'expected 23 zero-field classes, found ' + zeroStatus.length);
for (const f of fields.filter((x) => x.origin !== 'self').slice(0, 4)) {
    console.log('sample chain field: ' + f.class + ' ' + f.offset + ' <- ' + f.origin +
        ' (' + f.via + ')');
}

// Deterministic sample across evidence classes.
for (const cls of ['symbol', 'strong-inferred', 'weak-inferred', 'structural']) {
    const sample = slots.filter((r) => r.confidence === cls).slice(0, 3);
    for (const r of sample) {
        console.log('sample ' + cls + ': ' + r.class + ' slot ' + r.slot + ' -> ' + r.name);
    }
}

if (failures.length) {
    console.error('FAIL (' + failures.length + ')');
    for (const f of failures.slice(0, 30)) console.error('  ' + f);
    if (failures.length > 30) console.error('  ... ' + (failures.length - 30) + ' more');
    process.exit(1);
}
console.log('PASS all evidence cells resolve; placeholders and zero-field rows marked');
