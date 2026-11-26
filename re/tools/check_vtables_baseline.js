// check_vtables_baseline.js — prove the all-stages artifacts preserve the
// structural data of the stage-disabled baseline.
//
// Run: node re/tools/check_vtables_baseline.js
// Exit 0 only when class set/order, per-class slot counts, direct RVAs,
// resolved landing RVAs, and the vtables.h struct/slot sequence are identical.
// Labels, evidence, chain text and field comments are allowed to differ.

'use strict';

const fs = require('fs');
const path = require('path');
const crypto = require('crypto');

const root = path.resolve(__dirname, '..', '..');
const vt = path.join(root, 're', 'dump', 'vtables');
const baseSlots = path.join(vt, 'baseline', 'slots_pre.tsv');
const baseHeader = path.join(vt, 'baseline', 'vtables_pre.h');
const curSlots = path.join(vt, 'slots.tsv');
const curHeader = path.join(vt, 'vtables.h');

function readTsv(file) {
    const lines = fs.readFileSync(file, 'utf8').replace(/^\uFEFF/, '')
        .split(/\r?\n/).filter(Boolean);
    const header = lines[0].split('\t');
    return lines.slice(1).map((line) => {
        const cells = line.split('\t');
        return Object.fromEntries(header.map((h, i) => [h, cells[i] ?? '']));
    });
}

const hex = (n, width) => '0x' + n.toString(16).padStart(width || 0, '0');
const sha = (s) => crypto.createHash('sha256').update(s).digest('hex');
const fail = [];

function projection(rows, classKey) {
    return rows.map((r) => [r[classKey], r.slot, hex(parseInt(r.rva, 16)),
        hex(parseInt(r.landing_rva ?? r.target_rva, 16))].join('\t')).join('\n') + '\n';
}

function headerModel(file) {
    const classes = [];
    let pending = null;
    for (const line of fs.readFileSync(file, 'utf8').split(/\r?\n/)) {
        const c = line.match(/^\/\/ class: (.+)$/);
        if (c) { pending = { name: c[1], struct: null, slots: [] }; continue; }
        const s = line.match(/^struct (\w+) \{/);
        if (s) {
            if (!pending) { fail.push(file + ': struct without // class: ' + s[1]); continue; }
            pending.struct = s[1];
            classes.push(pending);
            continue;
        }
        const slot = line.match(/^    void\* slot\d+;  \/\/ (0x[0-9a-f]+)/);
        if (slot && classes.length) classes[classes.length - 1].slots.push(slot[1]);
    }
    return classes;
}

if (!fs.existsSync(baseSlots) || !fs.existsSync(baseHeader)) {
    console.error('FAIL baseline missing; run: node re/tools/gen_vtables.js --baseline');
    process.exit(1);
}

const pre = readTsv(baseSlots);
const cur = readTsv(curSlots);
const preProj = projection(pre, 'class');
const curProj = projection(cur, 'class');
// slots.tsv uses the header name `class` on disk for both artifacts.

if (preProj !== curProj) {
    const a = preProj.split('\n');
    const b = curProj.split('\n');
    for (let i = 0; i < Math.max(a.length, b.length); i++) {
        if (a[i] !== b[i]) {
            fail.push('structural projection differs at line ' + (i + 1) +
                ': baseline `' + a[i] + '` current `' + b[i] + '`');
            break;
        }
    }
}

const preClasses = [...new Set(pre.map((r) => r.class))];
const curClasses = [...new Set(cur.map((r) => r.class))];
if (preClasses.length !== curClasses.length || preClasses.some((n, i) => n !== curClasses[i])) {
    fail.push('class set/order differs');
}

const count = (rows, key) => {
    const m = new Map();
    for (const r of rows) m.set(r[key], (m.get(r[key]) || 0) + 1);
    return m;
};
const preCount = count(pre, 'class');
const curCount = count(cur, 'class');
for (const n of preClasses) {
    if (preCount.get(n) !== curCount.get(n)) {
        fail.push('slot count differs for ' + n + ': baseline ' + preCount.get(n) +
            ' current ' + curCount.get(n));
    }
}

const preH = headerModel(baseHeader);
const curH = headerModel(curHeader);
if (preH.length !== curH.length) fail.push('header class count differs');
for (let i = 0; i < Math.max(preH.length, curH.length); i++) {
    const a = preH[i];
    const b = curH[i];
    if (!a || !b) { fail.push('header missing class at index ' + i); continue; }
    if (a.name !== b.name) fail.push('header class order differs at ' + i + ': ' + a.name + ' vs ' + b.name);
    if (a.struct !== b.struct) fail.push('struct name differs for ' + a.name + ': ' + a.struct + ' vs ' + b.struct);
    if (a.slots.length !== b.slots.length) {
        fail.push('header slot count differs for ' + a.name + ': ' + a.slots.length + ' vs ' + b.slots.length);
    }
    for (let k = 0; k < Math.max(a.slots.length, b.slots.length); k++) {
        if (a.slots[k] !== b.slots[k]) {
            fail.push('header slot RVA differs for ' + a.name + ' slot ' + k + ': ' +
                a.slots[k] + ' vs ' + b.slots[k]);
            break;
        }
    }
}

// Informational only: these are the columns/content allowed to differ.
let labelDiff = 0;
let chainDiff = 0;
for (let i = 0; i < Math.min(pre.length, cur.length); i++) {
    if (pre[i].name !== cur[i].name || pre[i].evidence !== cur[i].evidence) labelDiff++;
    if (pre[i].base_chain !== cur[i].base_chain) chainDiff++;
}

console.log('baseline rows=' + pre.length + ' current rows=' + cur.length);
console.log('structural SHA-256 baseline=' + sha(preProj));
console.log('structural SHA-256 current =' + sha(curProj));
console.log('allowed differences: label/evidence rows=' + labelDiff + ' chain rows=' + chainDiff);

if (fail.length) {
    console.error('FAIL');
    for (const f of fail.slice(0, 25)) console.error('  ' + f);
    if (fail.length > 25) console.error('  ... ' + (fail.length - 25) + ' more');
    process.exit(1);
}
console.log('PASS class set/order, per-class slot counts, direct/landing RVAs and vtables.h slot sequence are identical');
