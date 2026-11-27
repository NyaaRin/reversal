#!/usr/bin/env node
// Resolve data constants at virtual addresses in a PE image.
//
// The decompiler shows float/double constants as DAT_180380d00, which hides the
// value that makes an algorithm legible. This reads the raw bytes at each VA and
// prints the same word as double, float and uint32/uint64.
//
// usage: node consts.js <pe-file> <0xVA> [0xVA...]

const fs = require('fs');

const file = process.argv[2];
const addrs = process.argv.slice(3).map(a => parseInt(a.replace(/^0x/i, ''), 16));
if (!file || addrs.length === 0) {
    console.error('usage: node consts.js <pe-file> <0xVA> [...]');
    process.exit(1);
}

const buf = fs.readFileSync(file);
const peOff = buf.readUInt32LE(0x3c);
const coff = peOff + 4;
const numSections = buf.readUInt16LE(coff + 2);
const optSize = buf.readUInt16LE(coff + 16);
const opt = coff + 20;
const imageBase = Number(buf.readBigUInt64LE(opt + 24));

const sections = [];
let secOff = opt + optSize;
for (let i = 0; i < numSections; i++) {
    const s = secOff + i * 40;
    sections.push({
        name: buf.toString('ascii', s, s + 8).replace(/\0.*$/, ''),
        vsize: buf.readUInt32LE(s + 8),
        va: buf.readUInt32LE(s + 12),
        rawSize: buf.readUInt32LE(s + 16),
        rawPtr: buf.readUInt32LE(s + 20),
    });
}

function rvaToOffset(rva) {
    for (const s of sections) {
        if (rva >= s.va && rva < s.va + Math.max(s.vsize, s.rawSize)) {
            const delta = rva - s.va;
            return delta < s.rawSize ? s.rawPtr + delta : -1;
        }
    }
    return -1;
}

for (const va of addrs) {
    const off = rvaToOffset(va - imageBase);
    if (off < 0 || off + 8 > buf.length) {
        console.log(`0x${va.toString(16)}  <unmapped>`);
        continue;
    }
    const d = buf.readDoubleLE(off);
    const f = buf.readFloatLE(off);
    const u32 = buf.readUInt32LE(off);
    const u64 = buf.readBigUInt64LE(off);
    const bytes = buf.subarray(off, off + 8).toString('hex').match(/../g).join(' ');
    const ascii = buf.subarray(off, off + 8).toString('latin1')
        .replace(/[^\x20-\x7e]/g, '.');
    console.log(
        `0x${va.toString(16)}  double=${d.toPrecision(10)}  float=${f.toPrecision(8)}` +
        `  u32=0x${u32.toString(16)}  u64=0x${u64.toString(16)}  [${bytes}] "${ascii}"`
    );
}
