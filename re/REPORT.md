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

## Complete source-level coverage

`src/reconstructed/` now maps **7,656/7,656 inventory functions** to compilable
C++17 records, with **0 unmapped** addresses and **0 stubs**. The deterministic
generator `re/tools/gen_reconstructed_source.py` emits 60 translation chunks
(30.18 MiB) plus `src/reconstructed/coverage.tsv`; each address maps to a
`src/reconstructed/chunks/chunk_NNN.cpp` file and a unique `Function_0x...`
accessor. The generated records contain the full decompiled body (16.29 MiB),
its SHA-256, 17,273 call-target references, 22,280 data references, 7,732
string literals, 80,593 control-flow lines and 52,123 explicit TODO markers.

`re/tools/check_reconstructed_source.py` independently re-reads the inventory,
coverage table and source chunks and reports:

```
inventory=7656 coverage_rows=7656 checked=7656
generated_chunks=60 accessors=7656
PASS 7656/7656 inventory functions mapped; unmapped=0 stubs=0
```

The hand-translated executable reconstruction under `src/features/` is
unchanged. The generated layer is a source-level transcription, not a claim of
semantic parity: it preserves the decompiler body, control-flow lines, calls,
data/string references and named TODOs, but does not invent executable
semantics for unknown globals, indirect calls or missing PDB layouts.

## Limitations

* A byte-identical rebuild is not achievable from a stripped binary. The corpus is
  decompiler pseudocode, not original source.
* Operator overloading and inlined STL make some functions look nothing like the
  original source; the reconstruction in `src/` is written from behaviour, not
  from the pseudocode's shape.
* `std::` RTTI entries are runtime noise and are excluded from the feature map.
* The complete-coverage records are source-level transcriptions. Unknown
  globals, indirect calls, calling conventions and object layouts remain marked
  with specific TODOs; they are not a runnable reimplementation of every body.
