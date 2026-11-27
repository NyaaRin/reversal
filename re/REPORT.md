# m64.dll — binary dossier (Stage 1)

Everything below is measured from the file or from the Ghidra database built in
Stage 0. Inferences are marked as such.

## Identity

| Property | Value |
|----------|-------|
| File | `m64.dll` |
| Size | 4,431,360 bytes |
| MD5 | `3d9ad8894d9d55e4212b7d800119aaa7` |
| Format | PE32+ (x64), DLL, Windows GUI subsystem |
| Linker | MSVC 14.50, `/MD` (dynamic CRT: `MSVCP140`, `VCRUNTIME140*`) |
| Image base | `0x180000000` |
| SizeOfImage | `0x615000` |
| Entry point | `0x2d8ccc` |
| DllCharacteristics | `HIGH_ENTROPY_VA`, `DYNAMIC_BASE`, `NX_COMPAT` |
| Sections | `.text`, `.rdata`, `.data`, `.pdata`, `.rsrc`, `.reloc` |
| Exports | none |
| TLS | present (TLS directory + callbacks) |
| Functions recovered | 7,656 (110 thunks) |
| Strings | 60,550 raw, 7,035 defined |
| RTTI classes | 159 |
| Internal brand | **mayrrX64** (30 strings; "Skyfall" does not appear in the image) |

## Not packed

The section layout, full MSVC RTTI, import table and CRT linkage are all intact,
and `SizeOfCode` matches the file's text section. There is no unpacking stub, no
`IsDebuggerPresent`, no `NtQueryInformationProcess`, and no self-modifying entry
path. The decompiler reads it directly; no dump-and-fix-up stage is needed.

The `[SKY]` strings are the **skybox override** feature (`[SKY] ResolveFaces:
sky='%s' -> %d/6 faces`), not branding.

## Imports that matter

| Library | Why it is interesting |
|---------|----------------------|
| `CRYPT32.dll` | hashing/encoding alongside the in-house MD5 use |
| `IMM32.dll` | IME handling for the embedded text editor |
| `COMDLG32.dll` | file dialogs (config, Lua files, model export) |
| `SHELL32.dll` | shell integration, file reveal |
| `api-ms-win-crt-*` | UCRT split imports, consistent with a modern MSVC build |
| `KERNEL32` | `CreateToolhelp32Snapshot` (process/module enumeration), `VirtualProtect`, `AddVectoredExceptionHandler` |

## Architecture

`RTTI` recovery (`rtti_classes.tsv`) is the backbone: every feature derives from
`Features::FeatureBase`, and the vtable slots recovered (`vtable_methods.tsv`)
give the framework's virtual surface. 159 classes, 81 namespaces.

### Feature classes (from RTTI)

```
Features::Aimbot            AimbotFeature
Features::AimPoint          AimPointFeature
Features::Airstuck          AirstuckFeature
Features::AutoFire          AutoFireFeature
Features::AutoReload        AutoReloadFeature
Features::Autostrafe        AutostrafeFeature
Features::Autowall          11 backends: ARC9, ArcCW, CW2.0, FAS2, Homigrad, M9K,
                            SWB, SWCS, TFA, TacRP + the dispatcher
Features::Backtrack         BacktrackFeature
Features::BulletPath        BulletPathFeature
Features::BulletTracers     BulletTracersFeature
Features::BunnyHop          BunnyHopFeature
Features::CameraView        CameraViewFeature
Features::ChamsGlow         ChamsGlowFeature
Features::ChatSpam          ChatSpamFeature
Features::DamageFeed        DamageFeedFeature
Features::DamageLogger      DamageLoggerFeature
Features::DataCleaner       DataCleanerFeature
Features::DoubleTap         DoubleTapFeature
Features::EdgeJump          EdgeJumpFeature
Features::EntityChams       EntityChamsFeature
Features::FakeDuck          FakeDuckFeature
Features::FakeLag           FakeLagFeature
Features::FakePing          FakePingFeature
Features::ForceDraw         ForceDrawFeature
Features::FreeCam           FreeCamFeature
Features::Fullbright        FullbrightFeature
Features::HVH::AntiAim      AntiAimFeature
Features::HVH::LagComp      LagCompFeature
Features::HVH::Resolver     ResolverFeature
Features::HVH::Visualize    VisualizeFeature
Features::JumpBug           JumpBugFeature
Features::KillSay           KillSayFeature
Features::LeyHitregCompat   LeyHitregCompatFeature
Features::LoadingUrl        LoadingUrlFeature
Features::LookBeam          LookBeamFeature
Features::LuaFileCloak      LuaFileCloakFeature
Features::LuaLoader         LuaLoaderFeature
Features::MoveFix           MoveFixFeature
Features::NetVars           NetVarsFeature
Features::Nospread          NospreadFeature
Features::NoVisualRecoil    NoVisualRecoilFeature
Features::OctoCompat        OctoCompatFeature, OctoTickFeature
Features::PTPCompat         PTPCompatFeature
Features::Radar             RadarFeature
Features::RageAim           RageAimFeature
Features::SetSkin           SetSkinFeature
Features::SkyEditor         SkyEditorFeature
Features::Spectators        SpectatorsFeature
Features::Speedhack         SpeedhackFeature
Features::ThirdPerson       ThirdPersonFeature
Features::Toolbox           ToolboxFeature
Features::Triggerbot        TriggerbotFeature
Features::Visual::ESP       ESP + 8 element types (box, circle, bbox, text,
                            dynamic text, health bar, armor bar)
Features::Visual::TeamList  TeamListFeature
Features::Visual::UserGroupList GroupListFeature
Features::VMChams           VMChamsFeature
Features::Warp              WarpFeature
Features::Watermark         WatermarkFeature
Features::Weapons::Backends 22 backends (see below)
Features::WorldTint         WorldTintFeature
Features::ZCityCompat       ZCityCompatFeature
```

### Weapon backends (22)

`ARC9`, `ArcCW`, `CSGO`, `CW20`, `CWBase`, `CombineWeap`, `FAS2`, `Generic`,
`HL2`, `HVH2`, `M9K`, `ORP`, `Octo`, `PTP`, `SWB`, `SWCS`, `TFA`, `TTT`,
`TacRP`, `UTSWB`, `ZCity`, `ZS`.

This is the abstraction that makes per-base spread possible: each backend knows
how its base stores inaccuracy/spread/pellet data, and the no-spread subsystem
asks the active backend for a cone instead of hard-coding one weapon family.

### Subsystems by weight

| Subsystem | Evidence |
|-----------|----------|
| Steam account switcher | `[AS]` — 95 log sites; logon/ownership-ticket/connect-token handling |
| Lua engine | `[LUANET]` 36, `[LUASTACK]`, `[LUAHOOKS]`, `[LUAEDITOR]`, `[LUAFEAT]`, trampolines |
| Netvar / interface resolution | `[IFACE]`, `[VMT]`, `[PAT]`, `[NETVARS]`, `[NWSTORE]` |
| ESP layout editor | element classes + `[ESP]` |
| Config / UI | `Features::Sqlite`, `TextEditor`, imgui, `[CFG]`, `[CVAR-*]` |

## Signature table

The binary resolves game addresses by pattern, not by hard-coded offsets. 16
byte patterns are embedded as strings, for example:

```
48 89 5C 24 08 57 48 83 EC 20 48 8B DA 48 8B F9 0F B6 52 09 0F B6 43 08 24 FC 88 43 08 83 FA 0C
48 85 C9 75 0B C7 05 ?? ?? ?? ?? FF FF FF FF C3
4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00
```

plus RTTI-verified lookups (`g_pMoveHelper = %p (CMoveHelperClient, RTTI-verified)`).
This is what makes the build survive game updates, and it is the source material
for the offset database in Stage 4.

## Stage 2 artifacts

| File | Contents |
|------|----------|
| `dump/inventory.tsv` | 7,656 functions: address, size, caller count, name, string hits, sample strings |
| `dump/strings_by_function.tsv` | every string→function edge (this is how unnamed functions get identified) |
| `dump/vtable_methods.tsv` | every vtable slot: class, slot index, target, name applied |
| `dump/datatypes.tsv` | recovered structures/classes |
| `dump/imports.tsv`, `exports.tsv`, `memory_map.tsv` | PE structure |
| `dump/decompile/` | one `.c` per function, resumable |

Naming: 468 virtual methods carry a unique `Class_vfuncNN` name; 79 addresses are
shared by several classes (identical stubs/overrides) and are named
`vfunc_shared_<addr>` rather than being misattributed to one feature.

## Complete compiled-source coverage

`src/reconstructed/` maps **7,656/7,656 inventory functions** to compiled C++17
accessors, with **0 unmapped** addresses and **0 stubs**. The deterministic
generator `re/tools/gen_reconstructed_source.py` emits 60 chunks (**85,660,178
bytes**, 81.69 MiB) plus `src/reconstructed/coverage.tsv`; each address maps to a
`chunk_NNN.cpp` source file and a unique `Function_0x...` accessor. Every
accessor contains **459,081 audited executable C++ statement/reference lines**,
including **306,161 `trace.statement` calls**, **49,305 real C++ control nodes**
(`if`/`else`/loops/`switch`) and **7,732 actual string-literal calls**.

Call targets are resolved through **4,331 declared extern `FUN_*` thunks** and
data references through **5,414 declared extern `DAT_*`/`PTR_*`/`PTR_DAT_*`/
`UNK_*`/`SUB_*` symbols** in `src/reconstructed/symbols.h`. The generator also
recovers local/parameter declarations and emits typed condition and call-site
checks where the decompiler gives enough type evidence: **31,647 checked
condition expressions** (including loops and switches) and **47,933
`trace.call_arguments` sites**. Expressions that still contain undeclared
entities, unresolved indirect state or ambiguous types remain explicit
`TODO` comments; **9,957 condition sites** and **6,747 call-argument sites**
are deliberately unresolved rather than guessed. The recovered evidence now
includes Ghidra pointer declarations without a space after `*` (for locals and
parameters), pure string-literal arguments re-escaped through the C++ encoder,
whole-array lvalue-to-pointer decay in call arguments, scalar/pointer
compatibility checks, pointer-depth and pointee-type checks, and rejection of
assignment expressions and function-signature pseudo-calls. A failed generation
leaves the previous complete chunk set in place; each chunk and mapping file is
replaced atomically only after it is fully written.

Recovered field reads are now emitted as compiler-checked `load_at<T>(base,
offset)` operations.  The decompiler's `*(T *)(base + offset)` already supplies
both the pointee type and byte address; the helper preserves those facts and
the compiler checks the resulting access.  Ghidra's synthetic scalar subfields
such as `local_80._4_4_` are recovered as bounded bit extracts, and whole-byte
slices on declared arrays use the same typed field reader.  The independent
Capstone inventory in `re/tools/mine_field_types.py` groups every non-stack
constant-displacement access by function, base register and offset; it emitted
**44,457** slots whose observed width and kind agree, recorded in
`re/dump/field_types.tsv`.  Conflicting or unmapped field shapes remain TODO.

Global-data storage types are mined independently from `m64.dll` by
`re/tools/mine_data_types.py`. Capstone reads every non-LEA memory operand in
the 7,656 inventory functions, resolves RIP-relative targets, and records a
width/kind only when all observed accesses agree (1/2/4/8-byte integer, SSE
float, or SSE double). `re/dump/data_types.tsv` is the committed evidence table;
`gen_reconstructed_source.py` uses it to emit typed scalar globals. Conflicting,
address-only and unknown-family slots retain the byte-array declaration and
remain TODO.

The complete decompiled body remains in each record as a SHA-256-verified audit
payload; it is no longer the accessor payload. The extracted source record also
retains 17,273 call references, 24,126 data references, 80,593 original
control-flow lines and 61,625 explicit TODO markers for unresolved runtime
pages, globals, indirect calls, calling conventions and PDB/layout facts.

`re/tools/check_reconstructed_source.py` independently re-reads the inventory,
coverage table, accessor bodies, symbols header and hashed bodies and reports:

```
inventory=7656 coverage_rows=7656 checked=7656
generated_chunks=60 accessors=7656
executable_accessor_lines=459081 statement_lines=306161 control_nodes=49305
literal_refs=7732 symbols_calls=4331 symbols_data=5414
typed_conditions=31647 unresolved_conditions=9957 typed_calls=47933 unresolved_call_args=6747
PASS 7656/7656 inventory functions mapped; unmapped=0 stubs=0
```

Remaining condition TODOs by first blocking reason: unresolved global storage/width
3,489; pointer-cast target not proven 1,043; pointer depth/pointee not proven
1,121; scalar cast width/kind mismatch 408; scalar cast of pointer element 116;
unknown aggregate layout 56; nested call/return type 7; assignment or side effect
1,079; other ambiguous operand type 2,638. Remaining call-argument TODOs:
ambiguous operand type 4,547; unresolved global storage/width 1,020;
unknown aggregate layout 538; pointer depth/pointee 167; pointer-cast target 91;
scalar cast width/kind 257; scalar cast of pointer element 10; nested call/return
13; assignment 104. `re/dump/cast_report.tsv`
records the admitted and rejected counts with these reasons.

The hand-translated executable reconstruction under `src/features/` is
unchanged. The generated accessors are compile-checked **structural traces**,
not behaviorally equivalent implementations: recovered expression types are
checked by the compiler where evidence is sufficient, while unresolved
globals, indirect calls, calling conventions, loop counts and object layouts
remain TODO-marked and are not executable parity.

## Limitations

* A byte-identical rebuild is not achievable from a stripped binary. The corpus is
  decompiler pseudocode, not original source.
* Operator overloading and inlined STL make some functions look nothing like the
  original source; the reconstruction in `src/` is written from behaviour, not
  from the pseudocode's shape.
* `std::` RTTI entries are runtime noise and are excluded from the feature map.
* The complete-coverage accessors are compiled structural traces, not semantic
  equivalents. Unknown globals, indirect calls, calling conventions and object
  layouts remain marked with specific TODOs; they are not a runnable
  reimplementation of every body. Decompiler blocks nested more than 32 levels
  are flattened into executable trace statements to stay under MSVC's nesting
  limit; no source text or reference is dropped, but that deep nesting is not
  represented as nested C++ control flow.
