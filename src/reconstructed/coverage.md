# Complete compiled-source coverage

- Inventory functions: **7656**
- Mapped functions: **7656**
- Unmapped: **0**
- Stubs: **0** (every accessor contains executable C++ and statement/trace code)
- Compiled accessors: **7656**
- Executable accessor lines: **457271**
- Structured control nodes: **49305**
- Type-checked recovered condition expressions: **27539**
- Type-checked recovered call-argument sites: **46123**
- Generated chunks: **60** (84928705 bytes; at most 128 functions per chunk)
- Resolved call-thunk declarations: **4331**
- Resolved data-table declarations: **5414**
- Mapping table: `src/reconstructed/coverage.tsv` (one row per inventory address)

Each row maps an inventory address to a generated chunk source file and a
unique `Function_0x...` accessor.  The accessor is real C++17 that the compiler
type-checks: structured `if`/`else`/loop/`switch` trace code, resolved
`&FUN_...` call-thunk references, resolved `&DAT_...`/`&PTR_...` data-table
references, string literals, and named TODO comments.  The full decompiler
body remains in the record as a SHA-256-verified audit payload, but is not the
executable accessor payload.

The generated accessors are structural traces, not behaviourally equivalent
implementations of the original machine functions.  Hand-translated code under
`src/features/` remains the authoritative executable reconstruction.
