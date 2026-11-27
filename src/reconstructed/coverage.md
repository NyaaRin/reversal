# Complete reconstructed-source coverage

- Inventory functions: **7656**
- Mapped functions: **7656**
- Unmapped: **0**
- Stubs: **0** (every record carries a non-empty full decompiler body)
- Generated chunks: **60** (at most 128 functions per chunk)
- Mapping table: `src/reconstructed/coverage.tsv` (one row per inventory address)

Each row maps an inventory address to a generated chunk source file and a
unique `Function_0x...` accessor.  The record contains the full decompiled
body, its SHA-256, extracted control-flow lines, call targets, data
references, string literals and TODO markers for unresolved semantics.

The hand-translated executable reconstruction remains under `src/features/`;
this tree is the complete source-level coverage layer for the remaining
inventory and deliberately does not invent executable semantics.
