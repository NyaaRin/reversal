# PDB identity and symbol status

The image carries a debug directory but no CodeView symbols beyond the RSDS record;
no vendor PDB is present on this machine.

- export directory: RVA 0x0, size 0 (no exports)
- debug signature: RSDS
- GUID: `170EEFA7-89f8-1646-9cdd-6C8554F89AAC`
- age: 143
- vendor path: `C:\Users\a1995\OneDrive\Документы\GitHub\mayrr_x32-64\x64\Release\mayrrx64-v2-release.pdb`
- PDB present in workspace: no (only Skyfall-built PDBs exist under `build/`)

## What is generated instead

- `symbols.csv`: every resolved slot landing RVA with its label and confidence,
  sorted by address; import into a debugger or a Ghidra label script.
- `slots.tsv` / `vtables.h`: the same labels tied to class and slot.

A real PDB cannot be reconstructed from a stripped image: PDB type/field records
are not present in the PE. The RSDS GUID is only an identity, not symbol data.
