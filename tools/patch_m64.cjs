'use strict';
/*
 * Build the Skyfall GMod payload from the real mayrrX64 m64.dll.
 *
 * This is a byte-preserving rebrand: only NUL-terminated strings in .rdata and
 * .data are touched, replacements are always shorter than or equal to the
 * original slot, and the PE layout does not move. logonew.jpg is then attached
 * as a real RCDATA resource (200) by add_logo_resource.ps1.
 */
const { execFileSync } = require('child_process');
const crypto = require('crypto');
const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const SRC = path.join(ROOT, 'm64.dll');
const OUT_DIR = path.join(ROOT, 'build');
const OUT = path.join(OUT_DIR, 'm64_skyfall.dll');
const LOGO_CANDIDATES = [
  path.join(ROOT, '..', '..', 'logonew.jpg'),
  path.join(ROOT, '..', 'logonew.jpg'),
];
const ICON_CANDIDATES = [
  path.join(ROOT, '..', '..', 'Loader', 'Assets', 'venom_logo.png'),
  path.join(ROOT, '..', 'Loader', 'Assets', 'venom_logo.png'),
];
const LOGO = LOGO_CANDIDATES.find((candidate) => fs.existsSync(candidate)) || LOGO_CANDIDATES[0];
const ICON = ICON_CANDIDATES.find((candidate) => fs.existsSync(candidate)) || ICON_CANDIDATES[0];
const RESOURCE_SCRIPT = path.join(__dirname, 'add_logo_resource.ps1');

function die(message) {
  console.error('patch_m64: ' + message);
  process.exit(1);
}

function peSections(buf) {
  if (buf.toString('latin1', 0, 2) !== 'MZ') die('source is not a PE file');
  const pe = buf.readUInt32LE(0x3c);
  if (buf.toString('latin1', pe, pe + 4) !== 'PE\0\0') die('missing PE signature');
  const count = buf.readUInt16LE(pe + 6);
  const optSize = buf.readUInt16LE(pe + 20);
  const table = pe + 24 + optSize;
  const sections = [];
  for (let i = 0; i < count; i++) {
    const o = table + i * 40;
    const name = buf.toString('latin1', o, o + 8).replace(/\0+$/, '');
    sections.push({
      name,
      rawPtr: buf.readUInt32LE(o + 20),
      rawSize: buf.readUInt32LE(o + 16),
    });
  }
  return sections;
}

function rebrand(text, short) {
  const brand = short ? 'Sky' : 'Skyfall';
  let out = text;
  out = out.replace(/Created by Somik \| mayrr?cheat/gi, 'made by Autumn');
  out = out.replace(/mayrr_x32-64/g, 'Skyfall_x64');
  out = out.replace(/mayrrX64/g, 'Skyfall');
  out = out.replace(/mayrrx64/g, 'skyfall');
  out = out.replace(/##mayrr_watermark/g, '##skyfall_wm');
  out = out.replace(/##mayrr_damagefeed/g, '##skyfall_feed');
  out = out.replace(/built-in mayrr screen/gi, 'Skyfall screen');
  out = out.replace(/mayrr \(built-in\)/g, 'Skyfall screen');
  out = out.replace(/mayrr\.stack/g, 'skyfall');
  out = out.replace(/mayrr\.esp/g, 'sf.esp');
  out = out.replace(/\bmayrr\b/g, brand);
  return out;
}

if (!fs.existsSync(SRC)) die('missing ' + SRC);
if (!fs.existsSync(LOGO)) die('missing ' + LOGO);
if (!fs.existsSync(ICON)) die('missing ' + ICON);
fs.mkdirSync(OUT_DIR, { recursive: true });

const source = fs.readFileSync(SRC);
const buf = Buffer.from(source);
const sections = peSections(buf);
const ranges = sections
  .filter(s => s.name === '.rdata' || s.name === '.data')
  .map(s => ({ start: s.rawPtr, end: s.rawPtr + s.rawSize }))
  .filter(s => s.end <= buf.length);

// The menu's wordmark sits in an 8-byte slot (5 letters plus 3 NUL pad), so
// it can hold the full Skyfall name even though most mayrr strings cannot.
const menuOld = Buffer.from('DrawMenu\0\0\0\0mayrr\0\0\0End\0', 'latin1');
const menuNew = Buffer.from('DrawMenu\0\0\0\0Skyfall\0End\0', 'latin1');
let menuPatched = false;
const menuAt = buf.indexOf(menuOld);
if (menuAt >= 0) {
  menuNew.copy(buf, menuAt);
  menuPatched = true;
  console.log(`0x${menuAt.toString(16)}  menu wordmark mayrr -> Skyfall`);
}

// The built-in loading page's brand line can also fit Skyfall by dropping one
// redundant CSS space and the empty accent dot, keeping the HTML string length.
let htmlPatched = false;
const htmlStart = buf.indexOf('<html>', 0, 'latin1');
if (htmlStart >= 0) {
  const htmlEnd = buf.indexOf(0, htmlStart);
  let html = buf.toString('latin1', htmlStart, htmlEnd);
  html = html.replace(' .brand{font-size:21px}', '.brand{font-size:21px}');
  html = html.replace('<div class="brand">mayrr<i>.</i><em>loading</em></div>',
                      '<div class="brand">Skyfall<i></i><em>loading</em></div>');
  if (html.length === htmlEnd - htmlStart) {
    buf.write(html, htmlStart, 'latin1');
    htmlPatched = true;
    console.log(`0x${htmlStart.toString(16)}  loading page brand mayrr -> Skyfall`);
  }
}

// The developer credit is a separate string that does not contain the
// lowercase "mayrr" spelling, so it is patched directly. "made by Autumn" is
// well inside the 28-byte slot and leaves the rest NUL padded.
let creditPatched = false;
for (const credit of ['Created by Somik | mayrrcheat', 'Created by Somik | mayrcheat']) {
  const at = buf.indexOf(Buffer.from(credit, 'latin1'));
  if (at < 0) continue;
  const end = buf.indexOf(0, at);
  if (end < 0) die('unterminated developer credit');
  const replacement = 'made by Autumn';
  if (replacement.length > end - at) die('developer credit slot is too small');
  buf.fill(0, at, end + 1);
  buf.write(replacement, at, 'latin1');
  console.log(`0x${at.toString(16)}  ${JSON.stringify(credit)} -> ${JSON.stringify(replacement)}`);
  creditPatched = true;
}

const starts = new Set();
for (const range of ranges) {
  let at = range.start;
  while (at < range.end) {
    const hit = buf.indexOf('mayrr', at, 'latin1');
    if (hit < 0 || hit >= range.end) break;
    let begin = hit;
    while (begin > range.start && buf[begin - 1] !== 0) begin--;
    const nul = buf.indexOf(0, hit);
    if (nul < 0 || nul >= range.end) { at = hit + 1; continue; }
    const text = buf.toString('latin1', begin, nul);
    // Strings can contain UTF-8 bullets, CR/LF and tabs; only replace the
    // ASCII mayrr spelling inside them, so keeping the surrounding bytes is safe.
    if (/^[\x09\x0a\x0d\x20-\x7e\x80-\xff]*$/.test(text)) starts.add(begin);
    at = hit + 1;
  }
}

let changed = 0;
let skipped = 0;
for (const begin of [...starts].sort((a, b) => a - b)) {
  const nul = buf.indexOf(0, begin);
  if (nul < 0) continue;
  const oldText = buf.toString('latin1', begin, nul);
  let newText = rebrand(oldText, false);
  // A handful of slots only have room for the short form; the full Skyfall
  // name is preferred whenever the original slot can hold it.
  if (newText.length > oldText.length) newText = rebrand(oldText, true);
  if (newText === oldText) continue;
  if (newText.length > oldText.length) {
    console.error(`SKIP (${newText.length} > ${oldText.length}) ${JSON.stringify(oldText)}`);
    skipped++;
    continue;
  }
  buf.fill(0, begin, nul + 1);
  buf.write(newText, begin, 'latin1');
  console.log(`0x${begin.toString(16)}  ${JSON.stringify(oldText)} -> ${JSON.stringify(newText)}`);
  changed++;
}

// Some labels (the storage title and the DPAPI description) are UTF-16. Scan
// the same sections as wide text and apply the same rebranding in place.
let wideChanged = 0;
const wideText = buf.toString('utf16le');
const wideRe = /[\x20-\x7e]{4,}/g;
let wideMatch;
while ((wideMatch = wideRe.exec(wideText))) {
  const oldText = wideMatch[0];
  if (!/mayrr|Somik|Created by/i.test(oldText)) continue;
  const begin = wideMatch.index * 2;
  const end = (wideMatch.index + oldText.length) * 2;
  if (end + 2 > buf.length) continue;
  if (!ranges.some(r => begin >= r.start && end <= r.end)) continue;
  let newText = rebrand(oldText, false);
  if (newText.length > oldText.length) newText = rebrand(oldText, true);
  if (newText === oldText) continue;
  buf.fill(0, begin, end + 2);
  buf.write(newText, begin, 'utf16le');
  console.log(`0x${begin.toString(16)}  (wide) ${JSON.stringify(oldText)} -> ${JSON.stringify(newText)}`);
  wideChanged++;
}

if (menuPatched) changed++;
if (htmlPatched) changed++;
if (creditPatched) changed++;
changed += wideChanged;
if (changed === 0) die('no mayrr branding strings were rebranded');
if (buf.includes(Buffer.from('mayrrX64', 'latin1'))) die('mayrrX64 survived the rebrand');
if (buf.includes(Buffer.from('mayrrX64', 'utf16le'))) die('wide mayrrX64 survived the rebrand');
if (buf.includes(Buffer.from('Created by Somik', 'latin1'))) die('developer credit survived the rebrand');

fs.writeFileSync(OUT, buf);
console.log(`\nwrote ${OUT} (${buf.length} bytes, ${changed} strings changed, ${skipped} skipped)`);

execFileSync('powershell.exe', [
  '-NoProfile',
  '-NonInteractive',
  '-ExecutionPolicy', 'Bypass',
  '-File', RESOURCE_SCRIPT,
  '-Path', OUT,
  '-Logo', LOGO,
  '-Icon', ICON,
], { stdio: 'inherit' });

const final = fs.readFileSync(OUT);
if (final.toString('latin1', 0, 2) !== 'MZ') die('output is not a PE file');
const hash = crypto.createHash('sha256').update(final).digest('hex');
console.log(`m64_skyfall.dll  ${final.length} bytes  sha256 ${hash}`);
