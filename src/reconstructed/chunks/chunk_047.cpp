// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802e46fc FUN_1802e46fc
// source: re/dump/decompile/0x1802e46fc_FUN_1802e46fc.c
// size: 29 bytes; thunk: false
// body sha256: bbb79c90d42c26e1a637d68dc86f27952c79bd0d98c6c3568bbfb24b5dfad5dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e46fc{
    "0x1802e46fc",
    "FUN_1802e46fc",
    R"F1802e46fcS(undefined FUN_1802e46fc())F1802e46fcS",
    R"B1802e46fc(// 0x1802e46fc  FUN_1802e46fc
// size=29 thunk=false
// signature: undefined FUN_1802e46fc()
// status: ok


undefined8 FUN_1802e46fc(void)

{
  return 0;
}


)B1802e46fc",
    "bbb79c90d42c26e1a637d68dc86f27952c79bd0d98c6c3568bbfb24b5dfad5dc",
    R"F1802e46fcC()F1802e46fcC",
    R"F1802e46fcD()F1802e46fcD",
    R"F1802e46fcT()F1802e46fcT",
    R"F1802e46fcF(10: return 0;)F1802e46fcF",
    R"F1802e46fcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e46fcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e46fc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e46fc", "FUN_1802e46fc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bbb79c90d42c26e1a637d68dc86f27952c79bd0d98c6c3568bbfb24b5dfad5dc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e46fc(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e46fc;
}

// 0x1802e4810 FUN_1802e4810
// source: re/dump/decompile/0x1802e4810_FUN_1802e4810.c
// size: 38 bytes; thunk: false
// body sha256: 1f24c2dd7e63ab0052e1c034ca113f0a4d3a3409a1a7419626dbad01b1482a0f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4810{
    "0x1802e4810",
    "FUN_1802e4810",
    R"F1802e4810S(undefined FUN_1802e4810())F1802e4810S",
    R"B1802e4810(// 0x1802e4810  FUN_1802e4810
// size=38 thunk=false
// signature: undefined FUN_1802e4810()
// status: ok


void FUN_1802e4810(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802e4810",
    "1f24c2dd7e63ab0052e1c034ca113f0a4d3a3409a1a7419626dbad01b1482a0f",
    R"F1802e4810C()F1802e4810C",
    R"F1802e4810D()F1802e4810D",
    R"F1802e4810T()F1802e4810T",
    R"F1802e4810F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802e4810F",
    R"F1802e4810U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4810() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4810", "FUN_1802e4810");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1f24c2dd7e63ab0052e1c034ca113f0a4d3a3409a1a7419626dbad01b1482a0f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4810(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4810;
}

// 0x1802e4850 FUN_1802e4850
// source: re/dump/decompile/0x1802e4850_FUN_1802e4850.c
// size: 38 bytes; thunk: false
// body sha256: 028bee828b695d9d171fe0abfbcc1334729cd5b3892f3651182a5dccea80766d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4850{
    "0x1802e4850",
    "FUN_1802e4850",
    R"F1802e4850S(undefined FUN_1802e4850())F1802e4850S",
    R"B1802e4850(// 0x1802e4850  FUN_1802e4850
// size=38 thunk=false
// signature: undefined FUN_1802e4850()
// status: ok


void FUN_1802e4850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802e4850",
    "028bee828b695d9d171fe0abfbcc1334729cd5b3892f3651182a5dccea80766d",
    R"F1802e4850C()F1802e4850C",
    R"F1802e4850D()F1802e4850D",
    R"F1802e4850T()F1802e4850T",
    R"F1802e4850F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802e4850F",
    R"F1802e4850U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4850() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4850", "FUN_1802e4850");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 028bee828b695d9d171fe0abfbcc1334729cd5b3892f3651182a5dccea80766d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4850(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4850;
}

// 0x1802e4890 FUN_1802e4890
// source: re/dump/decompile/0x1802e4890_FUN_1802e4890.c
// size: 41 bytes; thunk: false
// body sha256: 12423cfe53e7fe62ed6a43e467999e5b237d9164b479969a4fbc12e746541b59
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4890{
    "0x1802e4890",
    "FUN_1802e4890",
    R"F1802e4890S(undefined FUN_1802e4890())F1802e4890S",
    R"B1802e4890(// 0x1802e4890  FUN_1802e4890
// size=41 thunk=false
// signature: undefined FUN_1802e4890()
// status: ok


void FUN_1802e4890(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802e4890",
    "12423cfe53e7fe62ed6a43e467999e5b237d9164b479969a4fbc12e746541b59",
    R"F1802e4890C()F1802e4890C",
    R"F1802e4890D()F1802e4890D",
    R"F1802e4890T()F1802e4890T",
    R"F1802e4890F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802e4890F",
    R"F1802e4890U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4890() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4890", "FUN_1802e4890");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 12423cfe53e7fe62ed6a43e467999e5b237d9164b479969a4fbc12e746541b59
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4890(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4890;
}

// 0x1802e48b9 FUN_1802e48b9
// source: re/dump/decompile/0x1802e48b9_FUN_1802e48b9.c
// size: 41 bytes; thunk: false
// body sha256: eeb81c57b92954b403d9d06f2209fc4064fe5ad62d3e3277e1ee61df81fbd8f9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e48b9{
    "0x1802e48b9",
    "FUN_1802e48b9",
    R"F1802e48b9S(undefined FUN_1802e48b9())F1802e48b9S",
    R"B1802e48b9(// 0x1802e48b9  FUN_1802e48b9
// size=41 thunk=false
// signature: undefined FUN_1802e48b9()
// status: ok


void FUN_1802e48b9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802e48b9",
    "eeb81c57b92954b403d9d06f2209fc4064fe5ad62d3e3277e1ee61df81fbd8f9",
    R"F1802e48b9C()F1802e48b9C",
    R"F1802e48b9D()F1802e48b9D",
    R"F1802e48b9T()F1802e48b9T",
    R"F1802e48b9F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802e48b9F",
    R"F1802e48b9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e48b9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e48b9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e48b9", "FUN_1802e48b9");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: eeb81c57b92954b403d9d06f2209fc4064fe5ad62d3e3277e1ee61df81fbd8f9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e48b9(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e48b9;
}

// 0x1802e48ee FUN_1802e48ee
// source: re/dump/decompile/0x1802e48ee_FUN_1802e48ee.c
// size: 41 bytes; thunk: false
// body sha256: c2e213165f68582e21196b32a353616c0467181e2c8f5fe0e23191a37c03eda8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e48ee{
    "0x1802e48ee",
    "FUN_1802e48ee",
    R"F1802e48eeS(undefined FUN_1802e48ee())F1802e48eeS",
    R"B1802e48ee(// 0x1802e48ee  FUN_1802e48ee
// size=41 thunk=false
// signature: undefined FUN_1802e48ee()
// status: ok


void FUN_1802e48ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802e48ee",
    "c2e213165f68582e21196b32a353616c0467181e2c8f5fe0e23191a37c03eda8",
    R"F1802e48eeC()F1802e48eeC",
    R"F1802e48eeD()F1802e48eeD",
    R"F1802e48eeT()F1802e48eeT",
    R"F1802e48eeF(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802e48eeF",
    R"F1802e48eeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e48eeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e48ee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e48ee", "FUN_1802e48ee");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c2e213165f68582e21196b32a353616c0467181e2c8f5fe0e23191a37c03eda8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e48ee(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e48ee;
}

// 0x1802e4917 FUN_1802e4917
// source: re/dump/decompile/0x1802e4917_FUN_1802e4917.c
// size: 41 bytes; thunk: false
// body sha256: 11fbdd5051dd86632f1a4fee2c03413f2d88ba9a70ab86a27b0cba2c20571e0a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4917{
    "0x1802e4917",
    "FUN_1802e4917",
    R"F1802e4917S(undefined FUN_1802e4917())F1802e4917S",
    R"B1802e4917(// 0x1802e4917  FUN_1802e4917
// size=41 thunk=false
// signature: undefined FUN_1802e4917()
// status: ok


void FUN_1802e4917(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802e4917",
    "11fbdd5051dd86632f1a4fee2c03413f2d88ba9a70ab86a27b0cba2c20571e0a",
    R"F1802e4917C()F1802e4917C",
    R"F1802e4917D()F1802e4917D",
    R"F1802e4917T()F1802e4917T",
    R"F1802e4917F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802e4917F",
    R"F1802e4917U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4917U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4917() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4917", "FUN_1802e4917");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 11fbdd5051dd86632f1a4fee2c03413f2d88ba9a70ab86a27b0cba2c20571e0a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4917(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4917;
}

// 0x1802e494c FUN_1802e494c
// source: re/dump/decompile/0x1802e494c_FUN_1802e494c.c
// size: 41 bytes; thunk: false
// body sha256: c2f877070354f523f5bd39ae1564e224cd4b0295ded797c52ec20c723af01e76
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e494c{
    "0x1802e494c",
    "FUN_1802e494c",
    R"F1802e494cS(undefined FUN_1802e494c())F1802e494cS",
    R"B1802e494c(// 0x1802e494c  FUN_1802e494c
// size=41 thunk=false
// signature: undefined FUN_1802e494c()
// status: ok


void FUN_1802e494c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}


)B1802e494c",
    "c2f877070354f523f5bd39ae1564e224cd4b0295ded797c52ec20c723af01e76",
    R"F1802e494cC(FUN_1800668e0)F1802e494cC",
    R"F1802e494cD()F1802e494cD",
    R"F1802e494cT()F1802e494cT",
    R"F1802e494cF(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802e494cF",
    R"F1802e494cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e494cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e494c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e494c", "FUN_1802e494c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: c2f877070354f523f5bd39ae1564e224cd4b0295ded797c52ec20c723af01e76
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e494c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0xb0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e494c;
}

// 0x1802e498d FUN_1802e498d
// source: re/dump/decompile/0x1802e498d_FUN_1802e498d.c
// size: 41 bytes; thunk: false
// body sha256: cbc7562743b3e52fdc7e1fab644aff2bb5bf14e3bfac052288e972b3a5a4d490
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e498d{
    "0x1802e498d",
    "FUN_1802e498d",
    R"F1802e498dS(undefined FUN_1802e498d())F1802e498dS",
    R"B1802e498d(// 0x1802e498d  FUN_1802e498d
// size=41 thunk=false
// signature: undefined FUN_1802e498d()
// status: ok


void FUN_1802e498d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802e498d",
    "cbc7562743b3e52fdc7e1fab644aff2bb5bf14e3bfac052288e972b3a5a4d490",
    R"F1802e498dC()F1802e498dC",
    R"F1802e498dD()F1802e498dD",
    R"F1802e498dT()F1802e498dT",
    R"F1802e498dF(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802e498dF",
    R"F1802e498dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e498dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e498d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e498d", "FUN_1802e498d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: cbc7562743b3e52fdc7e1fab644aff2bb5bf14e3bfac052288e972b3a5a4d490
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e498d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e498d;
}

// 0x1802e49b6 FUN_1802e49b6
// source: re/dump/decompile/0x1802e49b6_FUN_1802e49b6.c
// size: 41 bytes; thunk: false
// body sha256: 9ae541acff78aa69a522967ea762ce98a3b0bbab122cf9278f25970892605d1a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e49b6{
    "0x1802e49b6",
    "FUN_1802e49b6",
    R"F1802e49b6S(undefined FUN_1802e49b6())F1802e49b6S",
    R"B1802e49b6(// 0x1802e49b6  FUN_1802e49b6
// size=41 thunk=false
// signature: undefined FUN_1802e49b6()
// status: ok


void FUN_1802e49b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802e49b6",
    "9ae541acff78aa69a522967ea762ce98a3b0bbab122cf9278f25970892605d1a",
    R"F1802e49b6C()F1802e49b6C",
    R"F1802e49b6D()F1802e49b6D",
    R"F1802e49b6T()F1802e49b6T",
    R"F1802e49b6F(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802e49b6F",
    R"F1802e49b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e49b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e49b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e49b6", "FUN_1802e49b6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9ae541acff78aa69a522967ea762ce98a3b0bbab122cf9278f25970892605d1a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e49b6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e49b6;
}

// 0x1802e49eb FUN_1802e49eb
// source: re/dump/decompile/0x1802e49eb_FUN_1802e49eb.c
// size: 46 bytes; thunk: false
// body sha256: bcdadd247c2227c71a183fd56f9be9e742880589a55749ba22ba9b6e88da6f75
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e49eb{
    "0x1802e49eb",
    "FUN_1802e49eb",
    R"F1802e49ebS(undefined FUN_1802e49eb())F1802e49ebS",
    R"B1802e49eb(// 0x1802e49eb  FUN_1802e49eb
// size=46 thunk=false
// signature: undefined FUN_1802e49eb()
// status: ok


void FUN_1802e49eb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802e49eb",
    "bcdadd247c2227c71a183fd56f9be9e742880589a55749ba22ba9b6e88da6f75",
    R"F1802e49ebC()F1802e49ebC",
    R"F1802e49ebD()F1802e49ebD",
    R"F1802e49ebT()F1802e49ebT",
    R"F1802e49ebF(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802e49ebF",
    R"F1802e49ebU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e49ebU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e49eb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e49eb", "FUN_1802e49eb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bcdadd247c2227c71a183fd56f9be9e742880589a55749ba22ba9b6e88da6f75
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e49eb(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e49eb;
}

// 0x1802e4a19 FUN_1802e4a19
// source: re/dump/decompile/0x1802e4a19_FUN_1802e4a19.c
// size: 46 bytes; thunk: false
// body sha256: a43df5cedf95b5b480964753b5c07131374e90287e08dc148d73c0686bdd5a0b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4a19{
    "0x1802e4a19",
    "FUN_1802e4a19",
    R"F1802e4a19S(undefined FUN_1802e4a19())F1802e4a19S",
    R"B1802e4a19(// 0x1802e4a19  FUN_1802e4a19
// size=46 thunk=false
// signature: undefined FUN_1802e4a19()
// status: ok


void FUN_1802e4a19(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802e4a19",
    "a43df5cedf95b5b480964753b5c07131374e90287e08dc148d73c0686bdd5a0b",
    R"F1802e4a19C()F1802e4a19C",
    R"F1802e4a19D()F1802e4a19D",
    R"F1802e4a19T()F1802e4a19T",
    R"F1802e4a19F(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802e4a19F",
    R"F1802e4a19U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4a19U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4a19() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4a19", "FUN_1802e4a19");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a43df5cedf95b5b480964753b5c07131374e90287e08dc148d73c0686bdd5a0b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4a19(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4a19;
}

// 0x1802e4a53 FUN_1802e4a53
// source: re/dump/decompile/0x1802e4a53_FUN_1802e4a53.c
// size: 46 bytes; thunk: false
// body sha256: 9682cb1ca324d4f015a771ce980b10761114b0ffdc5464fdfd8920524bc519dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4a53{
    "0x1802e4a53",
    "FUN_1802e4a53",
    R"F1802e4a53S(undefined FUN_1802e4a53())F1802e4a53S",
    R"B1802e4a53(// 0x1802e4a53  FUN_1802e4a53
// size=46 thunk=false
// signature: undefined FUN_1802e4a53()
// status: ok


void FUN_1802e4a53(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802e4a53",
    "9682cb1ca324d4f015a771ce980b10761114b0ffdc5464fdfd8920524bc519dc",
    R"F1802e4a53C()F1802e4a53C",
    R"F1802e4a53D()F1802e4a53D",
    R"F1802e4a53T()F1802e4a53T",
    R"F1802e4a53F(10: if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
14: return;)F1802e4a53F",
    R"F1802e4a53U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4a53U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4a53() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4a53", "FUN_1802e4a53");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9682cb1ca324d4f015a771ce980b10761114b0ffdc5464fdfd8920524bc519dc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4a53(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4a53;
}

// 0x1802e4a81 FUN_1802e4a81
// source: re/dump/decompile/0x1802e4a81_FUN_1802e4a81.c
// size: 46 bytes; thunk: false
// body sha256: c21ac193b6e330df151c35a0e1c4cb3142924d0682c21043b1e6ea778cb46152
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4a81{
    "0x1802e4a81",
    "FUN_1802e4a81",
    R"F1802e4a81S(undefined FUN_1802e4a81())F1802e4a81S",
    R"B1802e4a81(// 0x1802e4a81  FUN_1802e4a81
// size=46 thunk=false
// signature: undefined FUN_1802e4a81()
// status: ok


void FUN_1802e4a81(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802e4a81",
    "c21ac193b6e330df151c35a0e1c4cb3142924d0682c21043b1e6ea778cb46152",
    R"F1802e4a81C()F1802e4a81C",
    R"F1802e4a81D()F1802e4a81D",
    R"F1802e4a81T()F1802e4a81T",
    R"F1802e4a81F(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802e4a81F",
    R"F1802e4a81U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4a81U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4a81() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4a81", "FUN_1802e4a81");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c21ac193b6e330df151c35a0e1c4cb3142924d0682c21043b1e6ea778cb46152
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4a81(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4a81;
}

// 0x1802e4af7 FUN_1802e4af7
// source: re/dump/decompile/0x1802e4af7_FUN_1802e4af7.c
// size: 46 bytes; thunk: false
// body sha256: 3c59c23cddf751e1a089edea3ddf18f6976fe3ec9c8b7c05953631bbc41117e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4af7{
    "0x1802e4af7",
    "FUN_1802e4af7",
    R"F1802e4af7S(undefined FUN_1802e4af7())F1802e4af7S",
    R"B1802e4af7(// 0x1802e4af7  FUN_1802e4af7
// size=46 thunk=false
// signature: undefined FUN_1802e4af7()
// status: ok


void FUN_1802e4af7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802e4af7",
    "3c59c23cddf751e1a089edea3ddf18f6976fe3ec9c8b7c05953631bbc41117e3",
    R"F1802e4af7C()F1802e4af7C",
    R"F1802e4af7D()F1802e4af7D",
    R"F1802e4af7T()F1802e4af7T",
    R"F1802e4af7F(10: if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
14: return;)F1802e4af7F",
    R"F1802e4af7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4af7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4af7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4af7", "FUN_1802e4af7");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3c59c23cddf751e1a089edea3ddf18f6976fe3ec9c8b7c05953631bbc41117e3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4af7(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4af7;
}

// 0x1802e4b25 FUN_1802e4b25
// source: re/dump/decompile/0x1802e4b25_FUN_1802e4b25.c
// size: 46 bytes; thunk: false
// body sha256: 20006f6b3a81cf3f008fc1cdd9b2ad7de9a19c66c9385b8612cc80257733e23c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4b25{
    "0x1802e4b25",
    "FUN_1802e4b25",
    R"F1802e4b25S(undefined FUN_1802e4b25())F1802e4b25S",
    R"B1802e4b25(// 0x1802e4b25  FUN_1802e4b25
// size=46 thunk=false
// signature: undefined FUN_1802e4b25()
// status: ok


void FUN_1802e4b25(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802e4b25",
    "20006f6b3a81cf3f008fc1cdd9b2ad7de9a19c66c9385b8612cc80257733e23c",
    R"F1802e4b25C()F1802e4b25C",
    R"F1802e4b25D()F1802e4b25D",
    R"F1802e4b25T()F1802e4b25T",
    R"F1802e4b25F(10: if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
14: return;)F1802e4b25F",
    R"F1802e4b25U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4b25U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4b25() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4b25", "FUN_1802e4b25");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 20006f6b3a81cf3f008fc1cdd9b2ad7de9a19c66c9385b8612cc80257733e23c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4b25(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4b25;
}

// 0x1802e4b90 FUN_1802e4b90
// source: re/dump/decompile/0x1802e4b90_FUN_1802e4b90.c
// size: 38 bytes; thunk: false
// body sha256: 0ff1c7f4ed1168839895b4edaf4d1f43a4505799c187cfa25b7966d5165ec6ea
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4b90{
    "0x1802e4b90",
    "FUN_1802e4b90",
    R"F1802e4b90S(undefined FUN_1802e4b90())F1802e4b90S",
    R"B1802e4b90(// 0x1802e4b90  FUN_1802e4b90
// size=38 thunk=false
// signature: undefined FUN_1802e4b90()
// status: ok


void FUN_1802e4b90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802e4b90",
    "0ff1c7f4ed1168839895b4edaf4d1f43a4505799c187cfa25b7966d5165ec6ea",
    R"F1802e4b90C()F1802e4b90C",
    R"F1802e4b90D()F1802e4b90D",
    R"F1802e4b90T()F1802e4b90T",
    R"F1802e4b90F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e4b90F",
    R"F1802e4b90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4b90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4b90", "FUN_1802e4b90");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0ff1c7f4ed1168839895b4edaf4d1f43a4505799c187cfa25b7966d5165ec6ea
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4b90(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4b90;
}

// 0x1802e4bb6 FUN_1802e4bb6
// source: re/dump/decompile/0x1802e4bb6_FUN_1802e4bb6.c
// size: 38 bytes; thunk: false
// body sha256: 47a8ad5c2544e32f8cbe2ef0c75ec8965880bf6bbf250862784b7dda5d203a0b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4bb6{
    "0x1802e4bb6",
    "FUN_1802e4bb6",
    R"F1802e4bb6S(undefined FUN_1802e4bb6())F1802e4bb6S",
    R"B1802e4bb6(// 0x1802e4bb6  FUN_1802e4bb6
// size=38 thunk=false
// signature: undefined FUN_1802e4bb6()
// status: ok


void FUN_1802e4bb6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802e4bb6",
    "47a8ad5c2544e32f8cbe2ef0c75ec8965880bf6bbf250862784b7dda5d203a0b",
    R"F1802e4bb6C()F1802e4bb6C",
    R"F1802e4bb6D()F1802e4bb6D",
    R"F1802e4bb6T()F1802e4bb6T",
    R"F1802e4bb6F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e4bb6F",
    R"F1802e4bb6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4bb6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4bb6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4bb6", "FUN_1802e4bb6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 47a8ad5c2544e32f8cbe2ef0c75ec8965880bf6bbf250862784b7dda5d203a0b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4bb6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4bb6;
}

// 0x1802e4bf4 FUN_1802e4bf4
// source: re/dump/decompile/0x1802e4bf4_FUN_1802e4bf4.c
// size: 38 bytes; thunk: false
// body sha256: 926633d5d9e43cf799b2fa68be683bebf3c7658b4b4b10554ac090e012d12940
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4bf4{
    "0x1802e4bf4",
    "FUN_1802e4bf4",
    R"F1802e4bf4S(undefined FUN_1802e4bf4())F1802e4bf4S",
    R"B1802e4bf4(// 0x1802e4bf4  FUN_1802e4bf4
// size=38 thunk=false
// signature: undefined FUN_1802e4bf4()
// status: ok


void FUN_1802e4bf4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802e4bf4",
    "926633d5d9e43cf799b2fa68be683bebf3c7658b4b4b10554ac090e012d12940",
    R"F1802e4bf4C(FUN_1800668e0)F1802e4bf4C",
    R"F1802e4bf4D()F1802e4bf4D",
    R"F1802e4bf4T()F1802e4bf4T",
    R"F1802e4bf4F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e4bf4F",
    R"F1802e4bf4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4bf4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4bf4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4bf4", "FUN_1802e4bf4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 926633d5d9e43cf799b2fa68be683bebf3c7658b4b4b10554ac090e012d12940
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4bf4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4bf4;
}

// 0x1802e4c4c FUN_1802e4c4c
// source: re/dump/decompile/0x1802e4c4c_FUN_1802e4c4c.c
// size: 38 bytes; thunk: false
// body sha256: 28053fee1a8a4a9f3ae7b26b58afdb1271cd1f4927c11440e2418728a6fa730f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4c4c{
    "0x1802e4c4c",
    "FUN_1802e4c4c",
    R"F1802e4c4cS(undefined FUN_1802e4c4c())F1802e4c4cS",
    R"B1802e4c4c(// 0x1802e4c4c  FUN_1802e4c4c
// size=38 thunk=false
// signature: undefined FUN_1802e4c4c()
// status: ok


void FUN_1802e4c4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802e4c4c",
    "28053fee1a8a4a9f3ae7b26b58afdb1271cd1f4927c11440e2418728a6fa730f",
    R"F1802e4c4cC()F1802e4c4cC",
    R"F1802e4c4cD()F1802e4c4cD",
    R"F1802e4c4cT()F1802e4c4cT",
    R"F1802e4c4cF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e4c4cF",
    R"F1802e4c4cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4c4cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4c4c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4c4c", "FUN_1802e4c4c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 28053fee1a8a4a9f3ae7b26b58afdb1271cd1f4927c11440e2418728a6fa730f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4c4c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4c4c;
}

// 0x1802e4c72 FUN_1802e4c72
// source: re/dump/decompile/0x1802e4c72_FUN_1802e4c72.c
// size: 38 bytes; thunk: false
// body sha256: bfedd280eb9b26f47081b905a9d8b0f73dd610e472990d5c01165d120541a9dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4c72{
    "0x1802e4c72",
    "FUN_1802e4c72",
    R"F1802e4c72S(undefined FUN_1802e4c72())F1802e4c72S",
    R"B1802e4c72(// 0x1802e4c72  FUN_1802e4c72
// size=38 thunk=false
// signature: undefined FUN_1802e4c72()
// status: ok


void FUN_1802e4c72(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802e4c72",
    "bfedd280eb9b26f47081b905a9d8b0f73dd610e472990d5c01165d120541a9dd",
    R"F1802e4c72C()F1802e4c72C",
    R"F1802e4c72D()F1802e4c72D",
    R"F1802e4c72T()F1802e4c72T",
    R"F1802e4c72F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e4c72F",
    R"F1802e4c72U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4c72U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4c72() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4c72", "FUN_1802e4c72");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bfedd280eb9b26f47081b905a9d8b0f73dd610e472990d5c01165d120541a9dd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4c72(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4c72;
}

// 0x1802e4cbc FUN_1802e4cbc
// source: re/dump/decompile/0x1802e4cbc_FUN_1802e4cbc.c
// size: 38 bytes; thunk: false
// body sha256: e6482dca56f242443a032e2df2e12ffe58f2672e82a9b834f91ba6a2ad0196a6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4cbc{
    "0x1802e4cbc",
    "FUN_1802e4cbc",
    R"F1802e4cbcS(undefined FUN_1802e4cbc())F1802e4cbcS",
    R"B1802e4cbc(// 0x1802e4cbc  FUN_1802e4cbc
// size=38 thunk=false
// signature: undefined FUN_1802e4cbc()
// status: ok


void FUN_1802e4cbc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802e4cbc",
    "e6482dca56f242443a032e2df2e12ffe58f2672e82a9b834f91ba6a2ad0196a6",
    R"F1802e4cbcC()F1802e4cbcC",
    R"F1802e4cbcD()F1802e4cbcD",
    R"F1802e4cbcT()F1802e4cbcT",
    R"F1802e4cbcF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e4cbcF",
    R"F1802e4cbcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4cbcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4cbc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4cbc", "FUN_1802e4cbc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e6482dca56f242443a032e2df2e12ffe58f2672e82a9b834f91ba6a2ad0196a6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4cbc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4cbc;
}

// 0x1802e4cf0 FUN_1802e4cf0
// source: re/dump/decompile/0x1802e4cf0_FUN_1802e4cf0.c
// size: 41 bytes; thunk: false
// body sha256: fdf248325fe3816c77bfd1fdb222347bc05a4d3cc3ac6f7cee53c238d02f16d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4cf0{
    "0x1802e4cf0",
    "FUN_1802e4cf0",
    R"F1802e4cf0S(undefined FUN_1802e4cf0())F1802e4cf0S",
    R"B1802e4cf0(// 0x1802e4cf0  FUN_1802e4cf0
// size=41 thunk=false
// signature: undefined FUN_1802e4cf0()
// status: ok


void FUN_1802e4cf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0x90);
  }
  return;
}


)B1802e4cf0",
    "fdf248325fe3816c77bfd1fdb222347bc05a4d3cc3ac6f7cee53c238d02f16d2",
    R"F1802e4cf0C(FUN_1800668e0)F1802e4cf0C",
    R"F1802e4cf0D()F1802e4cf0D",
    R"F1802e4cf0T()F1802e4cf0T",
    R"F1802e4cf0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e4cf0F",
    R"F1802e4cf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4cf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4cf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4cf0", "FUN_1802e4cf0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: fdf248325fe3816c77bfd1fdb222347bc05a4d3cc3ac6f7cee53c238d02f16d2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4cf0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4cf0;
}

// 0x1802e4d19 FUN_1802e4d19
// source: re/dump/decompile/0x1802e4d19_FUN_1802e4d19.c
// size: 38 bytes; thunk: false
// body sha256: c11e0c81496dfe85bbe192d7f0183190451320af6289fe0261e5c8bad5d7099c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4d19{
    "0x1802e4d19",
    "FUN_1802e4d19",
    R"F1802e4d19S(undefined FUN_1802e4d19())F1802e4d19S",
    R"B1802e4d19(// 0x1802e4d19  FUN_1802e4d19
// size=38 thunk=false
// signature: undefined FUN_1802e4d19()
// status: ok


void FUN_1802e4d19(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802e4d19",
    "c11e0c81496dfe85bbe192d7f0183190451320af6289fe0261e5c8bad5d7099c",
    R"F1802e4d19C()F1802e4d19C",
    R"F1802e4d19D()F1802e4d19D",
    R"F1802e4d19T()F1802e4d19T",
    R"F1802e4d19F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e4d19F",
    R"F1802e4d19U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4d19U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4d19() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4d19", "FUN_1802e4d19");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c11e0c81496dfe85bbe192d7f0183190451320af6289fe0261e5c8bad5d7099c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4d19(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4d19;
}

// 0x1802e4d3f FUN_1802e4d3f
// source: re/dump/decompile/0x1802e4d3f_FUN_1802e4d3f.c
// size: 38 bytes; thunk: false
// body sha256: 64621827bd3d658bb192b8a62e82162348fd77194909ab62558ca5612c2fbc6e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4d3f{
    "0x1802e4d3f",
    "FUN_1802e4d3f",
    R"F1802e4d3fS(undefined FUN_1802e4d3f())F1802e4d3fS",
    R"B1802e4d3f(// 0x1802e4d3f  FUN_1802e4d3f
// size=38 thunk=false
// signature: undefined FUN_1802e4d3f()
// status: ok


void FUN_1802e4d3f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802e4d3f",
    "64621827bd3d658bb192b8a62e82162348fd77194909ab62558ca5612c2fbc6e",
    R"F1802e4d3fC()F1802e4d3fC",
    R"F1802e4d3fD()F1802e4d3fD",
    R"F1802e4d3fT()F1802e4d3fT",
    R"F1802e4d3fF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e4d3fF",
    R"F1802e4d3fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4d3fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4d3f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4d3f", "FUN_1802e4d3f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 64621827bd3d658bb192b8a62e82162348fd77194909ab62558ca5612c2fbc6e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4d3f(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4d3f;
}

// 0x1802e4da1 FUN_1802e4da1
// source: re/dump/decompile/0x1802e4da1_FUN_1802e4da1.c
// size: 41 bytes; thunk: false
// body sha256: 8b2ad3dae7b6dbec542bcf72d4d74b1b3439a2303e79bcd326ff7ed62408fc9d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4da1{
    "0x1802e4da1",
    "FUN_1802e4da1",
    R"F1802e4da1S(undefined FUN_1802e4da1())F1802e4da1S",
    R"B1802e4da1(// 0x1802e4da1  FUN_1802e4da1
// size=41 thunk=false
// signature: undefined FUN_1802e4da1()
// status: ok


void FUN_1802e4da1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_1800668e0(param_2 + 0x90);
  }
  return;
}


)B1802e4da1",
    "8b2ad3dae7b6dbec542bcf72d4d74b1b3439a2303e79bcd326ff7ed62408fc9d",
    R"F1802e4da1C(FUN_1800668e0)F1802e4da1C",
    R"F1802e4da1D()F1802e4da1D",
    R"F1802e4da1T()F1802e4da1T",
    R"F1802e4da1F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802e4da1F",
    R"F1802e4da1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4da1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4da1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4da1", "FUN_1802e4da1");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 8b2ad3dae7b6dbec542bcf72d4d74b1b3439a2303e79bcd326ff7ed62408fc9d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4da1(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("FUN_1800668e0(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4da1;
}

// 0x1802e4dca FUN_1802e4dca
// source: re/dump/decompile/0x1802e4dca_FUN_1802e4dca.c
// size: 38 bytes; thunk: false
// body sha256: 86ea2a49a0e4293fd77b4d8b5935701269347f23c2440cd271d7a8a276432816
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4dca{
    "0x1802e4dca",
    "FUN_1802e4dca",
    R"F1802e4dcaS(undefined FUN_1802e4dca())F1802e4dcaS",
    R"B1802e4dca(// 0x1802e4dca  FUN_1802e4dca
// size=38 thunk=false
// signature: undefined FUN_1802e4dca()
// status: ok


void FUN_1802e4dca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802e4dca",
    "86ea2a49a0e4293fd77b4d8b5935701269347f23c2440cd271d7a8a276432816",
    R"F1802e4dcaC()F1802e4dcaC",
    R"F1802e4dcaD()F1802e4dcaD",
    R"F1802e4dcaT()F1802e4dcaT",
    R"F1802e4dcaF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802e4dcaF",
    R"F1802e4dcaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4dcaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4dca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4dca", "FUN_1802e4dca");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 86ea2a49a0e4293fd77b4d8b5935701269347f23c2440cd271d7a8a276432816
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4dca(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4dca;
}

// 0x1802e4df0 FUN_1802e4df0
// source: re/dump/decompile/0x1802e4df0_FUN_1802e4df0.c
// size: 38 bytes; thunk: false
// body sha256: ccd2c635881886398901aa69d379ca30046ce39f8ff13987616caa5ea7710fb6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4df0{
    "0x1802e4df0",
    "FUN_1802e4df0",
    R"F1802e4df0S(undefined FUN_1802e4df0())F1802e4df0S",
    R"B1802e4df0(// 0x1802e4df0  FUN_1802e4df0
// size=38 thunk=false
// signature: undefined FUN_1802e4df0()
// status: ok


void FUN_1802e4df0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802e4df0",
    "ccd2c635881886398901aa69d379ca30046ce39f8ff13987616caa5ea7710fb6",
    R"F1802e4df0C()F1802e4df0C",
    R"F1802e4df0D()F1802e4df0D",
    R"F1802e4df0T()F1802e4df0T",
    R"F1802e4df0F(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802e4df0F",
    R"F1802e4df0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4df0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4df0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4df0", "FUN_1802e4df0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ccd2c635881886398901aa69d379ca30046ce39f8ff13987616caa5ea7710fb6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4df0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4df0;
}

// 0x1802e4ee2 FUN_1802e4ee2
// source: re/dump/decompile/0x1802e4ee2_FUN_1802e4ee2.c
// size: 46 bytes; thunk: false
// body sha256: c24b95b13ecfb8acbb2a906bec9eba4b9115710e0bcc8ab6b4cddfbde19091a3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4ee2{
    "0x1802e4ee2",
    "FUN_1802e4ee2",
    R"F1802e4ee2S(undefined FUN_1802e4ee2())F1802e4ee2S",
    R"B1802e4ee2(// 0x1802e4ee2  FUN_1802e4ee2
// size=46 thunk=false
// signature: undefined FUN_1802e4ee2()
// status: ok


void FUN_1802e4ee2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


)B1802e4ee2",
    "c24b95b13ecfb8acbb2a906bec9eba4b9115710e0bcc8ab6b4cddfbde19091a3",
    R"F1802e4ee2C()F1802e4ee2C",
    R"F1802e4ee2D()F1802e4ee2D",
    R"F1802e4ee2T()F1802e4ee2T",
    R"F1802e4ee2F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802e4ee2F",
    R"F1802e4ee2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4ee2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4ee2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4ee2", "FUN_1802e4ee2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c24b95b13ecfb8acbb2a906bec9eba4b9115710e0bcc8ab6b4cddfbde19091a3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e4ee2(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e4ee2;
}

// 0x1802e4fec FUN_1802e4fec
// source: re/dump/decompile/0x1802e4fec_FUN_1802e4fec.c
// size: 62 bytes; thunk: false
// body sha256: 5ef77938411bbd7d558e918e2a2db69330ec166e7e3acf2bebcd17ab18b9cc2a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e4fec{
    "0x1802e4fec",
    "FUN_1802e4fec",
    R"F1802e4fecS(undefined FUN_1802e4fec())F1802e4fecS",
    R"B1802e4fec(// 0x1802e4fec  FUN_1802e4fec
// size=62 thunk=false
// signature: undefined FUN_1802e4fec()
// status: ok


undefined8 FUN_1802e4fec(undefined8 param_1,longlong param_2)

{
  FUN_180212700(*(longlong *)(param_2 + 0x80) + 0xa58,"Error loading script.",0x15);
  return 0;
}


)B1802e4fec",
    "5ef77938411bbd7d558e918e2a2db69330ec166e7e3acf2bebcd17ab18b9cc2a",
    R"F1802e4fecC(FUN_180212700)F1802e4fecC",
    R"F1802e4fecD()F1802e4fecD",
    R"F1802e4fecT("Error loading script.")F1802e4fecT",
    R"F1802e4fecF(11: return 0;)F1802e4fecF",
    R"F1802e4fecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e4fecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e4fec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e4fec", "FUN_1802e4fec");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180212700", reinterpret_cast<const void*>(&image::FUN_180212700));
    trace.string_literal("Error loading script.");
    // body sha256: 5ef77938411bbd7d558e918e2a2db69330ec166e7e3acf2bebcd17ab18b9cc2a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e4fec(undefined8 param_1,longlong param_2)");
        {
            trace.statement("FUN_180212700(*(longlong *)(param_2 + 0x80) + 0xa58,\"Error loading script.\",0x15);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e4fec;
}

// 0x1802e5048 FUN_1802e5048
// source: re/dump/decompile/0x1802e5048_FUN_1802e5048.c
// size: 41 bytes; thunk: false
// body sha256: b8b2f18df8feec2a2a2a2bfd553e18fb6b552d3382ae99d62fb6985e8609ad7c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5048{
    "0x1802e5048",
    "FUN_1802e5048",
    R"F1802e5048S(undefined FUN_1802e5048())F1802e5048S",
    R"B1802e5048(// 0x1802e5048  FUN_1802e5048
// size=41 thunk=false
// signature: undefined FUN_1802e5048()
// status: ok


void FUN_1802e5048(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0xa0);
  }
  return;
}


)B1802e5048",
    "b8b2f18df8feec2a2a2a2bfd553e18fb6b552d3382ae99d62fb6985e8609ad7c",
    R"F1802e5048C(FUN_1800668e0)F1802e5048C",
    R"F1802e5048D()F1802e5048D",
    R"F1802e5048T()F1802e5048T",
    R"F1802e5048F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802e5048F",
    R"F1802e5048U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5048U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5048() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5048", "FUN_1802e5048");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: b8b2f18df8feec2a2a2a2bfd553e18fb6b552d3382ae99d62fb6985e8609ad7c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5048(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5048;
}

// 0x1802e5071 FUN_1802e5071
// source: re/dump/decompile/0x1802e5071_FUN_1802e5071.c
// size: 38 bytes; thunk: false
// body sha256: 72c3ae4110d15933d8e73dfc949c6a2f9b83d0a88041862b7052c6acae530f79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5071{
    "0x1802e5071",
    "FUN_1802e5071",
    R"F1802e5071S(undefined FUN_1802e5071())F1802e5071S",
    R"B1802e5071(// 0x1802e5071  FUN_1802e5071
// size=38 thunk=false
// signature: undefined FUN_1802e5071()
// status: ok


void FUN_1802e5071(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802e5071",
    "72c3ae4110d15933d8e73dfc949c6a2f9b83d0a88041862b7052c6acae530f79",
    R"F1802e5071C()F1802e5071C",
    R"F1802e5071D()F1802e5071D",
    R"F1802e5071T()F1802e5071T",
    R"F1802e5071F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802e5071F",
    R"F1802e5071U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5071U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5071() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5071", "FUN_1802e5071");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 72c3ae4110d15933d8e73dfc949c6a2f9b83d0a88041862b7052c6acae530f79
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5071(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5071;
}

// 0x1802e5097 FUN_1802e5097
// source: re/dump/decompile/0x1802e5097_FUN_1802e5097.c
// size: 38 bytes; thunk: false
// body sha256: e335724bb4e8dc336ae1aa8d5c46c166555ef9249c847fd8bad29ccfabe09cfa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5097{
    "0x1802e5097",
    "FUN_1802e5097",
    R"F1802e5097S(undefined FUN_1802e5097())F1802e5097S",
    R"B1802e5097(// 0x1802e5097  FUN_1802e5097
// size=38 thunk=false
// signature: undefined FUN_1802e5097()
// status: ok


void FUN_1802e5097(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802e5097",
    "e335724bb4e8dc336ae1aa8d5c46c166555ef9249c847fd8bad29ccfabe09cfa",
    R"F1802e5097C()F1802e5097C",
    R"F1802e5097D()F1802e5097D",
    R"F1802e5097T()F1802e5097T",
    R"F1802e5097F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802e5097F",
    R"F1802e5097U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5097U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5097() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5097", "FUN_1802e5097");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e335724bb4e8dc336ae1aa8d5c46c166555ef9249c847fd8bad29ccfabe09cfa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5097(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5097;
}

// 0x1802e511d FUN_1802e511d
// source: re/dump/decompile/0x1802e511d_FUN_1802e511d.c
// size: 41 bytes; thunk: false
// body sha256: cc47939430b6db9e4efecfde4b855243b7c0d20700abc7cc14aa59de21b80743
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e511d{
    "0x1802e511d",
    "FUN_1802e511d",
    R"F1802e511dS(undefined FUN_1802e511d())F1802e511dS",
    R"B1802e511d(// 0x1802e511d  FUN_1802e511d
// size=41 thunk=false
// signature: undefined FUN_1802e511d()
// status: ok


void FUN_1802e511d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    FUN_1800668e0(param_2 + 0xe0);
  }
  return;
}


)B1802e511d",
    "cc47939430b6db9e4efecfde4b855243b7c0d20700abc7cc14aa59de21b80743",
    R"F1802e511dC(FUN_1800668e0)F1802e511dC",
    R"F1802e511dD()F1802e511dD",
    R"F1802e511dT()F1802e511dT",
    R"F1802e511dF(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802e511dF",
    R"F1802e511dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e511dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e511d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e511d", "FUN_1802e511d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: cc47939430b6db9e4efecfde4b855243b7c0d20700abc7cc14aa59de21b80743
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e511d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("FUN_1800668e0(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e511d;
}

// 0x1802e5146 FUN_1802e5146
// source: re/dump/decompile/0x1802e5146_FUN_1802e5146.c
// size: 38 bytes; thunk: false
// body sha256: 08e6c5941cbc072213edc16c101bd37d59e51fc0625d7469615b11ec20fd8e23
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5146{
    "0x1802e5146",
    "FUN_1802e5146",
    R"F1802e5146S(undefined FUN_1802e5146())F1802e5146S",
    R"B1802e5146(// 0x1802e5146  FUN_1802e5146
// size=38 thunk=false
// signature: undefined FUN_1802e5146()
// status: ok


void FUN_1802e5146(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802e5146",
    "08e6c5941cbc072213edc16c101bd37d59e51fc0625d7469615b11ec20fd8e23",
    R"F1802e5146C()F1802e5146C",
    R"F1802e5146D()F1802e5146D",
    R"F1802e5146T()F1802e5146T",
    R"F1802e5146F(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802e5146F",
    R"F1802e5146U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5146U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5146() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5146", "FUN_1802e5146");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 08e6c5941cbc072213edc16c101bd37d59e51fc0625d7469615b11ec20fd8e23
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5146(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5146;
}

// 0x1802e516c FUN_1802e516c
// source: re/dump/decompile/0x1802e516c_FUN_1802e516c.c
// size: 38 bytes; thunk: false
// body sha256: d561c8e048630bfc65632c5533b648f7f4959951e4c4402c83c72d457beaab1a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e516c{
    "0x1802e516c",
    "FUN_1802e516c",
    R"F1802e516cS(undefined FUN_1802e516c())F1802e516cS",
    R"B1802e516c(// 0x1802e516c  FUN_1802e516c
// size=38 thunk=false
// signature: undefined FUN_1802e516c()
// status: ok


void FUN_1802e516c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802e516c",
    "d561c8e048630bfc65632c5533b648f7f4959951e4c4402c83c72d457beaab1a",
    R"F1802e516cC()F1802e516cC",
    R"F1802e516cD()F1802e516cD",
    R"F1802e516cT()F1802e516cT",
    R"F1802e516cF(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802e516cF",
    R"F1802e516cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e516cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e516c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e516c", "FUN_1802e516c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d561c8e048630bfc65632c5533b648f7f4959951e4c4402c83c72d457beaab1a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e516c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e516c;
}

// 0x1802e520a FUN_1802e520a
// source: re/dump/decompile/0x1802e520a_FUN_1802e520a.c
// size: 46 bytes; thunk: false
// body sha256: 5ccaaf08d5e063b162f0a7576240f3bacae85fe954d8b24e61e01b4c21fb5df9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e520a{
    "0x1802e520a",
    "FUN_1802e520a",
    R"F1802e520aS(undefined FUN_1802e520a())F1802e520aS",
    R"B1802e520a(// 0x1802e520a  FUN_1802e520a
// size=46 thunk=false
// signature: undefined FUN_1802e520a()
// status: ok


void FUN_1802e520a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


)B1802e520a",
    "5ccaaf08d5e063b162f0a7576240f3bacae85fe954d8b24e61e01b4c21fb5df9",
    R"F1802e520aC()F1802e520aC",
    R"F1802e520aD()F1802e520aD",
    R"F1802e520aT()F1802e520aT",
    R"F1802e520aF(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802e520aF",
    R"F1802e520aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e520aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e520a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e520a", "FUN_1802e520a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5ccaaf08d5e063b162f0a7576240f3bacae85fe954d8b24e61e01b4c21fb5df9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e520a(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e520a;
}

// 0x1802e5350 FUN_1802e5350
// source: re/dump/decompile/0x1802e5350_FUN_1802e5350.c
// size: 72 bytes; thunk: false
// body sha256: d11b3d665ac32c556f9b943515d3911fa0e96bc86375366320a3476ac9726307
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5350{
    "0x1802e5350",
    "FUN_1802e5350",
    R"F1802e5350S(undefined FUN_1802e5350())F1802e5350S",
    R"B1802e5350(// 0x1802e5350  FUN_1802e5350
// size=72 thunk=false
// signature: undefined FUN_1802e5350()
// status: ok


undefined8 FUN_1802e5350(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  (**(code **)(*plVar1 + 0xf8))(plVar1,0);
  (**(code **)(*plVar1 + 0xe8))(plVar1,"read failed",0);
  return 0;
}


)B1802e5350",
    "d11b3d665ac32c556f9b943515d3911fa0e96bc86375366320a3476ac9726307",
    R"F1802e5350C()F1802e5350C",
    R"F1802e5350D()F1802e5350D",
    R"F1802e5350T("read failed")F1802e5350T",
    R"F1802e5350F(15: return 0;)F1802e5350F",
    R"F1802e5350U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 13: (**(code **)(*plVar1 + 0xf8))(plVar1,0);.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xe8))(plVar1,"read failed",0);.)F1802e5350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5350() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5350", "FUN_1802e5350");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 13: (**(code **)(*plVar1 + 0xf8))(plVar1,0);.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xe8))(plVar1,"read failed",0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.string_literal("read failed");
    // body sha256: d11b3d665ac32c556f9b943515d3911fa0e96bc86375366320a3476ac9726307
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e5350(undefined8 param_1,longlong param_2)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = *(longlong **)(param_2 + 0x50);");
            trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,0);");
            trace.statement("(**(code **)(*plVar1 + 0xe8))(plVar1,\"read failed\",0);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e5350;
}

// 0x1802e53f0 FUN_1802e53f0
// source: re/dump/decompile/0x1802e53f0_FUN_1802e53f0.c
// size: 22 bytes; thunk: false
// body sha256: 98ffb7ec7e516fd269186db135f0d3fff4d466c05366b3ce672cfc9a46c87cdc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e53f0{
    "0x1802e53f0",
    "FUN_1802e53f0",
    R"F1802e53f0S(undefined FUN_1802e53f0())F1802e53f0S",
    R"B1802e53f0(// 0x1802e53f0  FUN_1802e53f0
// size=22 thunk=false
// signature: undefined FUN_1802e53f0()
// status: ok


void FUN_1802e53f0(void)

{
  DAT_1805c3910 = DAT_1805c3910 & 0xfffffffe;
  return;
}


)B1802e53f0",
    "98ffb7ec7e516fd269186db135f0d3fff4d466c05366b3ce672cfc9a46c87cdc",
    R"F1802e53f0C()F1802e53f0C",
    R"F1802e53f0D(DAT_1805c3910)F1802e53f0D",
    R"F1802e53f0T()F1802e53f0T",
    R"F1802e53f0F(11: return;)F1802e53f0F",
    R"F1802e53f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c3910.)F1802e53f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e53f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e53f0", "FUN_1802e53f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c3910.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c3910", static_cast<const void*>(&image::DAT_1805c3910));
    // body sha256: 98ffb7ec7e516fd269186db135f0d3fff4d466c05366b3ce672cfc9a46c87cdc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e53f0(void)");
        {
            trace.statement("DAT_1805c3910 = DAT_1805c3910 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802e53f0;
}

// 0x1802e54a4 FUN_1802e54a4
// source: re/dump/decompile/0x1802e54a4_FUN_1802e54a4.c
// size: 41 bytes; thunk: false
// body sha256: 303e3865359d0ecc3b61f75106cf413a4ed3f8e7b9cef3c5a9ea8b1e77879033
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e54a4{
    "0x1802e54a4",
    "FUN_1802e54a4",
    R"F1802e54a4S(undefined FUN_1802e54a4())F1802e54a4S",
    R"B1802e54a4(// 0x1802e54a4  FUN_1802e54a4
// size=41 thunk=false
// signature: undefined FUN_1802e54a4()
// status: ok


void FUN_1802e54a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_1800f57b0(*(undefined8 *)(param_2 + 0x120));
  }
  return;
}


)B1802e54a4",
    "303e3865359d0ecc3b61f75106cf413a4ed3f8e7b9cef3c5a9ea8b1e77879033",
    R"F1802e54a4C(FUN_1800f57b0)F1802e54a4C",
    R"F1802e54a4D()F1802e54a4D",
    R"F1802e54a4T()F1802e54a4T",
    R"F1802e54a4F(10: if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
14: return;)F1802e54a4F",
    R"F1802e54a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e54a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e54a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e54a4", "FUN_1802e54a4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800f57b0", reinterpret_cast<const void*>(&image::FUN_1800f57b0));
    // body sha256: 303e3865359d0ecc3b61f75106cf413a4ed3f8e7b9cef3c5a9ea8b1e77879033
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e54a4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x34) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;");
                trace.statement("FUN_1800f57b0(*(undefined8 *)(param_2 + 0x120));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e54a4;
}

// 0x1802e57cc FUN_1802e57cc
// source: re/dump/decompile/0x1802e57cc_FUN_1802e57cc.c
// size: 38 bytes; thunk: false
// body sha256: 59f476c2f63f393610e54c0d6677688a105c2fa4c25b5961fb6588eb741bf531
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e57cc{
    "0x1802e57cc",
    "FUN_1802e57cc",
    R"F1802e57ccS(undefined FUN_1802e57cc())F1802e57ccS",
    R"B1802e57cc(// 0x1802e57cc  FUN_1802e57cc
// size=38 thunk=false
// signature: undefined FUN_1802e57cc()
// status: ok


void FUN_1802e57cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802e57cc",
    "59f476c2f63f393610e54c0d6677688a105c2fa4c25b5961fb6588eb741bf531",
    R"F1802e57ccC()F1802e57ccC",
    R"F1802e57ccD()F1802e57ccD",
    R"F1802e57ccT()F1802e57ccT",
    R"F1802e57ccF(10: if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
14: return;)F1802e57ccF",
    R"F1802e57ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e57ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e57cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e57cc", "FUN_1802e57cc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 59f476c2f63f393610e54c0d6677688a105c2fa4c25b5961fb6588eb741bf531
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e57cc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x34) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e57cc;
}

// 0x1802e580a FUN_1802e580a
// source: re/dump/decompile/0x1802e580a_FUN_1802e580a.c
// size: 22 bytes; thunk: false
// body sha256: 07c2038e4d187210cadec7309aa36b4813bc3a479cf29bf7b77c2bac272d247d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e580a{
    "0x1802e580a",
    "FUN_1802e580a",
    R"F1802e580aS(undefined FUN_1802e580a())F1802e580aS",
    R"B1802e580a(// 0x1802e580a  FUN_1802e580a
// size=22 thunk=false
// signature: undefined FUN_1802e580a()
// status: ok


void FUN_1802e580a(void)

{
  DAT_1805c3910 = DAT_1805c3910 & 0xfffffffe;
  return;
}


)B1802e580a",
    "07c2038e4d187210cadec7309aa36b4813bc3a479cf29bf7b77c2bac272d247d",
    R"F1802e580aC()F1802e580aC",
    R"F1802e580aD(DAT_1805c3910)F1802e580aD",
    R"F1802e580aT()F1802e580aT",
    R"F1802e580aF(11: return;)F1802e580aF",
    R"F1802e580aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c3910.)F1802e580aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e580a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e580a", "FUN_1802e580a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c3910.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c3910", static_cast<const void*>(&image::DAT_1805c3910));
    // body sha256: 07c2038e4d187210cadec7309aa36b4813bc3a479cf29bf7b77c2bac272d247d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e580a(void)");
        {
            trace.statement("DAT_1805c3910 = DAT_1805c3910 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802e580a;
}

// 0x1802e5880 FUN_1802e5880
// source: re/dump/decompile/0x1802e5880_FUN_1802e5880.c
// size: 38 bytes; thunk: false
// body sha256: d4f2cae5999141b77415d2b60256983d576cb120b1d4a51e4b29346ed7c80feb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5880{
    "0x1802e5880",
    "FUN_1802e5880",
    R"F1802e5880S(undefined FUN_1802e5880())F1802e5880S",
    R"B1802e5880(// 0x1802e5880  FUN_1802e5880
// size=38 thunk=false
// signature: undefined FUN_1802e5880()
// status: ok


void FUN_1802e5880(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802e5880",
    "d4f2cae5999141b77415d2b60256983d576cb120b1d4a51e4b29346ed7c80feb",
    R"F1802e5880C()F1802e5880C",
    R"F1802e5880D()F1802e5880D",
    R"F1802e5880T()F1802e5880T",
    R"F1802e5880F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e5880F",
    R"F1802e5880U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5880U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5880() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5880", "FUN_1802e5880");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d4f2cae5999141b77415d2b60256983d576cb120b1d4a51e4b29346ed7c80feb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5880(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5880;
}

// 0x1802e58a6 FUN_1802e58a6
// source: re/dump/decompile/0x1802e58a6_FUN_1802e58a6.c
// size: 38 bytes; thunk: false
// body sha256: 09554c573bd1c86071e8f9d8287ba8a0be702bf2720bb270f40075f31dc8c278
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e58a6{
    "0x1802e58a6",
    "FUN_1802e58a6",
    R"F1802e58a6S(undefined FUN_1802e58a6())F1802e58a6S",
    R"B1802e58a6(// 0x1802e58a6  FUN_1802e58a6
// size=38 thunk=false
// signature: undefined FUN_1802e58a6()
// status: ok


void FUN_1802e58a6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802e58a6",
    "09554c573bd1c86071e8f9d8287ba8a0be702bf2720bb270f40075f31dc8c278",
    R"F1802e58a6C()F1802e58a6C",
    R"F1802e58a6D()F1802e58a6D",
    R"F1802e58a6T()F1802e58a6T",
    R"F1802e58a6F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e58a6F",
    R"F1802e58a6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e58a6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e58a6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e58a6", "FUN_1802e58a6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 09554c573bd1c86071e8f9d8287ba8a0be702bf2720bb270f40075f31dc8c278
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e58a6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e58a6;
}

// 0x1802e5960 FUN_1802e5960
// source: re/dump/decompile/0x1802e5960_FUN_1802e5960.c
// size: 38 bytes; thunk: false
// body sha256: e9fec1c88bc0667d763c4a43d093dfbc89f0c8b0689c6d3a288e0ad318c9447d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5960{
    "0x1802e5960",
    "FUN_1802e5960",
    R"F1802e5960S(undefined FUN_1802e5960())F1802e5960S",
    R"B1802e5960(// 0x1802e5960  FUN_1802e5960
// size=38 thunk=false
// signature: undefined FUN_1802e5960()
// status: ok


void FUN_1802e5960(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802e5960",
    "e9fec1c88bc0667d763c4a43d093dfbc89f0c8b0689c6d3a288e0ad318c9447d",
    R"F1802e5960C()F1802e5960C",
    R"F1802e5960D()F1802e5960D",
    R"F1802e5960T()F1802e5960T",
    R"F1802e5960F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e5960F",
    R"F1802e5960U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5960U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5960() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5960", "FUN_1802e5960");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e9fec1c88bc0667d763c4a43d093dfbc89f0c8b0689c6d3a288e0ad318c9447d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5960(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5960;
}

// 0x1802e5986 FUN_1802e5986
// source: re/dump/decompile/0x1802e5986_FUN_1802e5986.c
// size: 38 bytes; thunk: false
// body sha256: 152fbda568e6030d68c4223934c73db8d694b4796d3957128b2907b7f66abb07
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5986{
    "0x1802e5986",
    "FUN_1802e5986",
    R"F1802e5986S(undefined FUN_1802e5986())F1802e5986S",
    R"B1802e5986(// 0x1802e5986  FUN_1802e5986
// size=38 thunk=false
// signature: undefined FUN_1802e5986()
// status: ok


void FUN_1802e5986(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802e5986",
    "152fbda568e6030d68c4223934c73db8d694b4796d3957128b2907b7f66abb07",
    R"F1802e5986C()F1802e5986C",
    R"F1802e5986D()F1802e5986D",
    R"F1802e5986T()F1802e5986T",
    R"F1802e5986F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e5986F",
    R"F1802e5986U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5986U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5986() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5986", "FUN_1802e5986");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 152fbda568e6030d68c4223934c73db8d694b4796d3957128b2907b7f66abb07
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5986(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5986;
}

// 0x1802e59dc FUN_1802e59dc
// source: re/dump/decompile/0x1802e59dc_FUN_1802e59dc.c
// size: 41 bytes; thunk: false
// body sha256: 5f2e02ba57acecea27ffd5948f3b5a03f4d90db5a0b3d22199cf40e7e959ff85
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e59dc{
    "0x1802e59dc",
    "FUN_1802e59dc",
    R"F1802e59dcS(undefined FUN_1802e59dc())F1802e59dcS",
    R"B1802e59dc(// 0x1802e59dc  FUN_1802e59dc
// size=41 thunk=false
// signature: undefined FUN_1802e59dc()
// status: ok


void FUN_1802e59dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


)B1802e59dc",
    "5f2e02ba57acecea27ffd5948f3b5a03f4d90db5a0b3d22199cf40e7e959ff85",
    R"F1802e59dcC()F1802e59dcC",
    R"F1802e59dcD()F1802e59dcD",
    R"F1802e59dcT()F1802e59dcT",
    R"F1802e59dcF(10: if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
14: return;)F1802e59dcF",
    R"F1802e59dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e59dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e59dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e59dc", "FUN_1802e59dc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5f2e02ba57acecea27ffd5948f3b5a03f4d90db5a0b3d22199cf40e7e959ff85
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e59dc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e59dc;
}

// 0x1802e5a05 FUN_1802e5a05
// source: re/dump/decompile/0x1802e5a05_FUN_1802e5a05.c
// size: 41 bytes; thunk: false
// body sha256: 3bfabc69c5a70082bee6a2bebe3aef438fcbb6d229bb07c2b45c2645e12dd521
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5a05{
    "0x1802e5a05",
    "FUN_1802e5a05",
    R"F1802e5a05S(undefined FUN_1802e5a05())F1802e5a05S",
    R"B1802e5a05(// 0x1802e5a05  FUN_1802e5a05
// size=41 thunk=false
// signature: undefined FUN_1802e5a05()
// status: ok


void FUN_1802e5a05(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x430);
  }
  return;
}


)B1802e5a05",
    "3bfabc69c5a70082bee6a2bebe3aef438fcbb6d229bb07c2b45c2645e12dd521",
    R"F1802e5a05C()F1802e5a05C",
    R"F1802e5a05D()F1802e5a05D",
    R"F1802e5a05T()F1802e5a05T",
    R"F1802e5a05F(10: if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
14: return;)F1802e5a05F",
    R"F1802e5a05U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5a05U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5a05() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5a05", "FUN_1802e5a05");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3bfabc69c5a70082bee6a2bebe3aef438fcbb6d229bb07c2b45c2645e12dd521
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5a05(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x430);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5a05;
}

// 0x1802e5a2e FUN_1802e5a2e
// source: re/dump/decompile/0x1802e5a2e_FUN_1802e5a2e.c
// size: 41 bytes; thunk: false
// body sha256: 3545d6af0a539d7132378f6c328cafea6b11fef6695dc9aee003922d0a1423ce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5a2e{
    "0x1802e5a2e",
    "FUN_1802e5a2e",
    R"F1802e5a2eS(undefined FUN_1802e5a2e())F1802e5a2eS",
    R"B1802e5a2e(// 0x1802e5a2e  FUN_1802e5a2e
// size=41 thunk=false
// signature: undefined FUN_1802e5a2e()
// status: ok


void FUN_1802e5a2e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x410);
  }
  return;
}


)B1802e5a2e",
    "3545d6af0a539d7132378f6c328cafea6b11fef6695dc9aee003922d0a1423ce",
    R"F1802e5a2eC()F1802e5a2eC",
    R"F1802e5a2eD()F1802e5a2eD",
    R"F1802e5a2eT()F1802e5a2eT",
    R"F1802e5a2eF(10: if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
14: return;)F1802e5a2eF",
    R"F1802e5a2eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5a2eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5a2e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5a2e", "FUN_1802e5a2e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3545d6af0a539d7132378f6c328cafea6b11fef6695dc9aee003922d0a1423ce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5a2e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x410);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5a2e;
}

// 0x1802e5a57 FUN_1802e5a57
// source: re/dump/decompile/0x1802e5a57_FUN_1802e5a57.c
// size: 41 bytes; thunk: false
// body sha256: 87ed2a6af96d21e82b8b08d4c3b5474ef4323cc5528ccb5e0f0804e45c9c9b5f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5a57{
    "0x1802e5a57",
    "FUN_1802e5a57",
    R"F1802e5a57S(undefined FUN_1802e5a57())F1802e5a57S",
    R"B1802e5a57(// 0x1802e5a57  FUN_1802e5a57
// size=41 thunk=false
// signature: undefined FUN_1802e5a57()
// status: ok


void FUN_1802e5a57(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3f0);
  }
  return;
}


)B1802e5a57",
    "87ed2a6af96d21e82b8b08d4c3b5474ef4323cc5528ccb5e0f0804e45c9c9b5f",
    R"F1802e5a57C()F1802e5a57C",
    R"F1802e5a57D()F1802e5a57D",
    R"F1802e5a57T()F1802e5a57T",
    R"F1802e5a57F(10: if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
14: return;)F1802e5a57F",
    R"F1802e5a57U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5a57U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5a57() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5a57", "FUN_1802e5a57");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 87ed2a6af96d21e82b8b08d4c3b5474ef4323cc5528ccb5e0f0804e45c9c9b5f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5a57(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5a57;
}

// 0x1802e5a80 FUN_1802e5a80
// source: re/dump/decompile/0x1802e5a80_FUN_1802e5a80.c
// size: 41 bytes; thunk: false
// body sha256: bf8ff00f636cb3e30a2071e4d6c0f7ea7f854099404b4cd6d3a3f1a81e25658d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5a80{
    "0x1802e5a80",
    "FUN_1802e5a80",
    R"F1802e5a80S(undefined FUN_1802e5a80())F1802e5a80S",
    R"B1802e5a80(// 0x1802e5a80  FUN_1802e5a80
// size=41 thunk=false
// signature: undefined FUN_1802e5a80()
// status: ok


void FUN_1802e5a80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


)B1802e5a80",
    "bf8ff00f636cb3e30a2071e4d6c0f7ea7f854099404b4cd6d3a3f1a81e25658d",
    R"F1802e5a80C()F1802e5a80C",
    R"F1802e5a80D()F1802e5a80D",
    R"F1802e5a80T()F1802e5a80T",
    R"F1802e5a80F(10: if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
14: return;)F1802e5a80F",
    R"F1802e5a80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5a80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5a80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5a80", "FUN_1802e5a80");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bf8ff00f636cb3e30a2071e4d6c0f7ea7f854099404b4cd6d3a3f1a81e25658d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5a80(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5a80;
}

// 0x1802e5aa9 FUN_1802e5aa9
// source: re/dump/decompile/0x1802e5aa9_FUN_1802e5aa9.c
// size: 41 bytes; thunk: false
// body sha256: a41a9e85261d7a07ff30e0c374d9656f4a21e62aef5bcfe6ddd6f14912312fb5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5aa9{
    "0x1802e5aa9",
    "FUN_1802e5aa9",
    R"F1802e5aa9S(undefined FUN_1802e5aa9())F1802e5aa9S",
    R"B1802e5aa9(// 0x1802e5aa9  FUN_1802e5aa9
// size=41 thunk=false
// signature: undefined FUN_1802e5aa9()
// status: ok


void FUN_1802e5aa9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x20) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3d0);
  }
  return;
}


)B1802e5aa9",
    "a41a9e85261d7a07ff30e0c374d9656f4a21e62aef5bcfe6ddd6f14912312fb5",
    R"F1802e5aa9C()F1802e5aa9C",
    R"F1802e5aa9D()F1802e5aa9D",
    R"F1802e5aa9T()F1802e5aa9T",
    R"F1802e5aa9F(10: if ((*(uint *)(param_2 + 0x60) & 0x20) != 0) {
14: return;)F1802e5aa9F",
    R"F1802e5aa9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5aa9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5aa9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5aa9", "FUN_1802e5aa9");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a41a9e85261d7a07ff30e0c374d9656f4a21e62aef5bcfe6ddd6f14912312fb5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5aa9(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5aa9;
}

// 0x1802e5ad2 FUN_1802e5ad2
// source: re/dump/decompile/0x1802e5ad2_FUN_1802e5ad2.c
// size: 41 bytes; thunk: false
// body sha256: 9f9db8d2cfa5adf8ef6b84df4b218963ea186a67399cc3a74d5f0dbe6c98004b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5ad2{
    "0x1802e5ad2",
    "FUN_1802e5ad2",
    R"F1802e5ad2S(undefined FUN_1802e5ad2())F1802e5ad2S",
    R"B1802e5ad2(// 0x1802e5ad2  FUN_1802e5ad2
// size=41 thunk=false
// signature: undefined FUN_1802e5ad2()
// status: ok


void FUN_1802e5ad2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x40) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3b0);
  }
  return;
}


)B1802e5ad2",
    "9f9db8d2cfa5adf8ef6b84df4b218963ea186a67399cc3a74d5f0dbe6c98004b",
    R"F1802e5ad2C()F1802e5ad2C",
    R"F1802e5ad2D()F1802e5ad2D",
    R"F1802e5ad2T()F1802e5ad2T",
    R"F1802e5ad2F(10: if ((*(uint *)(param_2 + 0x60) & 0x40) != 0) {
14: return;)F1802e5ad2F",
    R"F1802e5ad2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5ad2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5ad2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5ad2", "FUN_1802e5ad2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9f9db8d2cfa5adf8ef6b84df4b218963ea186a67399cc3a74d5f0dbe6c98004b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5ad2(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5ad2;
}

// 0x1802e5afb FUN_1802e5afb
// source: re/dump/decompile/0x1802e5afb_FUN_1802e5afb.c
// size: 46 bytes; thunk: false
// body sha256: ac13d0a1cbd13377aed407bdd2ac45a8d00047aa0303ff85ea62ebbbd4ad4fdc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5afb{
    "0x1802e5afb",
    "FUN_1802e5afb",
    R"F1802e5afbS(undefined FUN_1802e5afb())F1802e5afbS",
    R"B1802e5afb(// 0x1802e5afb  FUN_1802e5afb
// size=46 thunk=false
// signature: undefined FUN_1802e5afb()
// status: ok


void FUN_1802e5afb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x80) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x390);
  }
  return;
}


)B1802e5afb",
    "ac13d0a1cbd13377aed407bdd2ac45a8d00047aa0303ff85ea62ebbbd4ad4fdc",
    R"F1802e5afbC()F1802e5afbC",
    R"F1802e5afbD()F1802e5afbD",
    R"F1802e5afbT()F1802e5afbT",
    R"F1802e5afbF(10: if ((*(uint *)(param_2 + 0x60) & 0x80) != 0) {
14: return;)F1802e5afbF",
    R"F1802e5afbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5afbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5afb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5afb", "FUN_1802e5afb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ac13d0a1cbd13377aed407bdd2ac45a8d00047aa0303ff85ea62ebbbd4ad4fdc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5afb(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x390);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5afb;
}

// 0x1802e5b35 FUN_1802e5b35
// source: re/dump/decompile/0x1802e5b35_FUN_1802e5b35.c
// size: 46 bytes; thunk: false
// body sha256: a55aa1a93f22ddcbab4d78106090955545fd8caf2b9d51c16e6f8fee97628c7e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5b35{
    "0x1802e5b35",
    "FUN_1802e5b35",
    R"F1802e5b35S(undefined FUN_1802e5b35())F1802e5b35S",
    R"B1802e5b35(// 0x1802e5b35  FUN_1802e5b35
// size=46 thunk=false
// signature: undefined FUN_1802e5b35()
// status: ok


void FUN_1802e5b35(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


)B1802e5b35",
    "a55aa1a93f22ddcbab4d78106090955545fd8caf2b9d51c16e6f8fee97628c7e",
    R"F1802e5b35C()F1802e5b35C",
    R"F1802e5b35D()F1802e5b35D",
    R"F1802e5b35T()F1802e5b35T",
    R"F1802e5b35F(10: if ((*(uint *)(param_2 + 0x60) & 0x400000) != 0) {
14: return;)F1802e5b35F",
    R"F1802e5b35U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5b35U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5b35() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5b35", "FUN_1802e5b35");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a55aa1a93f22ddcbab4d78106090955545fd8caf2b9d51c16e6f8fee97628c7e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5b35(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x400000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffbfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5b35;
}

// 0x1802e5b63 FUN_1802e5b63
// source: re/dump/decompile/0x1802e5b63_FUN_1802e5b63.c
// size: 46 bytes; thunk: false
// body sha256: de1adcebb427ad50008ea94ecfc19865e3e3f716a0ad57a11649a7fbe1d66f15
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5b63{
    "0x1802e5b63",
    "FUN_1802e5b63",
    R"F1802e5b63S(undefined FUN_1802e5b63())F1802e5b63S",
    R"B1802e5b63(// 0x1802e5b63  FUN_1802e5b63
// size=46 thunk=false
// signature: undefined FUN_1802e5b63()
// status: ok


void FUN_1802e5b63(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x288);
  }
  return;
}


)B1802e5b63",
    "de1adcebb427ad50008ea94ecfc19865e3e3f716a0ad57a11649a7fbe1d66f15",
    R"F1802e5b63C()F1802e5b63C",
    R"F1802e5b63D()F1802e5b63D",
    R"F1802e5b63T()F1802e5b63T",
    R"F1802e5b63F(10: if ((*(uint *)(param_2 + 0x60) & 0x200000) != 0) {
14: return;)F1802e5b63F",
    R"F1802e5b63U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5b63U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5b63() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5b63", "FUN_1802e5b63");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: de1adcebb427ad50008ea94ecfc19865e3e3f716a0ad57a11649a7fbe1d66f15
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5b63(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x200000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffdfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x288);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5b63;
}

// 0x1802e5bb5 FUN_1802e5bb5
// source: re/dump/decompile/0x1802e5bb5_FUN_1802e5bb5.c
// size: 45 bytes; thunk: false
// body sha256: f24e4c81235689b96fdb409ba6c5f6d605ccdba9e49fd0c760ed24b9f872ce62
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5bb5{
    "0x1802e5bb5",
    "FUN_1802e5bb5",
    R"F1802e5bb5S(undefined FUN_1802e5bb5())F1802e5bb5S",
    R"B1802e5bb5(// 0x1802e5bb5  FUN_1802e5bb5
// size=45 thunk=false
// signature: undefined FUN_1802e5bb5()
// status: ok


void FUN_1802e5bb5(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(param_2 + 0x650),0x20,3,
             Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
  return;
}


)B1802e5bb5",
    "f24e4c81235689b96fdb409ba6c5f6d605ccdba9e49fd0c760ed24b9f872ce62",
    R"F1802e5bb5C()F1802e5bb5C",
    R"F1802e5bb5D()F1802e5bb5D",
    R"F1802e5bb5T()F1802e5bb5T",
    R"F1802e5bb5F(13: return;)F1802e5bb5F",
    R"F1802e5bb5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5bb5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5bb5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5bb5", "FUN_1802e5bb5");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f24e4c81235689b96fdb409ba6c5f6d605ccdba9e49fd0c760ed24b9f872ce62
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5bb5(undefined8 param_1,longlong param_2)");
        {
            trace.statement("_eh_vector_destructor_iterator_");
            trace.statement("((void *)(param_2 + 0x650),0x20,3,");
            trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);");
            trace.statement("return;");
        }
    return kFunction_0x1802e5bb5;
}

// 0x1802e5be2 FUN_1802e5be2
// source: re/dump/decompile/0x1802e5be2_FUN_1802e5be2.c
// size: 62 bytes; thunk: false
// body sha256: 2a054c0709740372bc629eacde55653e192a3103e27c7505eb9c9e8c0b557503
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5be2{
    "0x1802e5be2",
    "FUN_1802e5be2",
    R"F1802e5be2S(undefined FUN_1802e5be2())F1802e5be2S",
    R"B1802e5be2(// 0x1802e5be2  FUN_1802e5be2
// size=62 thunk=false
// signature: undefined FUN_1802e5be2()
// status: ok


undefined8 FUN_1802e5be2(undefined8 param_1,longlong param_2)

{
  FUN_180212700(*(longlong *)(param_2 + 0x128) + 0xa58,"Crash loading script",0x14);
  return 0;
}


)B1802e5be2",
    "2a054c0709740372bc629eacde55653e192a3103e27c7505eb9c9e8c0b557503",
    R"F1802e5be2C(FUN_180212700)F1802e5be2C",
    R"F1802e5be2D()F1802e5be2D",
    R"F1802e5be2T("Crash loading script")F1802e5be2T",
    R"F1802e5be2F(11: return 0;)F1802e5be2F",
    R"F1802e5be2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5be2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5be2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5be2", "FUN_1802e5be2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180212700", reinterpret_cast<const void*>(&image::FUN_180212700));
    trace.string_literal("Crash loading script");
    // body sha256: 2a054c0709740372bc629eacde55653e192a3103e27c7505eb9c9e8c0b557503
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e5be2(undefined8 param_1,longlong param_2)");
        {
            trace.statement("FUN_180212700(*(longlong *)(param_2 + 0x128) + 0xa58,\"Crash loading script\",0x14);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e5be2;
}

// 0x1802e5c21 FUN_1802e5c21
// source: re/dump/decompile/0x1802e5c21_FUN_1802e5c21.c
// size: 29 bytes; thunk: false
// body sha256: 5c311184203dfffdcc6072355b39d889219f23c5f07a1e0a55321c2d5790cdcf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5c21{
    "0x1802e5c21",
    "FUN_1802e5c21",
    R"F1802e5c21S(undefined FUN_1802e5c21())F1802e5c21S",
    R"B1802e5c21(// 0x1802e5c21  FUN_1802e5c21
// size=29 thunk=false
// signature: undefined FUN_1802e5c21()
// status: ok


undefined8 FUN_1802e5c21(void)

{
  return 0;
}


)B1802e5c21",
    "5c311184203dfffdcc6072355b39d889219f23c5f07a1e0a55321c2d5790cdcf",
    R"F1802e5c21C()F1802e5c21C",
    R"F1802e5c21D()F1802e5c21D",
    R"F1802e5c21T()F1802e5c21T",
    R"F1802e5c21F(10: return 0;)F1802e5c21F",
    R"F1802e5c21U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5c21U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5c21() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5c21", "FUN_1802e5c21");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5c311184203dfffdcc6072355b39d889219f23c5f07a1e0a55321c2d5790cdcf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e5c21(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e5c21;
}

// 0x1802e5c57 FUN_1802e5c57
// source: re/dump/decompile/0x1802e5c57_FUN_1802e5c57.c
// size: 46 bytes; thunk: false
// body sha256: 7122b3502f53a10b62d9af022e66352e51b6bd6ec3adf426513de2c42a2bff30
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5c57{
    "0x1802e5c57",
    "FUN_1802e5c57",
    R"F1802e5c57S(undefined FUN_1802e5c57())F1802e5c57S",
    R"B1802e5c57(// 0x1802e5c57  FUN_1802e5c57
// size=46 thunk=false
// signature: undefined FUN_1802e5c57()
// status: ok


void FUN_1802e5c57(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x400) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);
  }
  return;
}


)B1802e5c57",
    "7122b3502f53a10b62d9af022e66352e51b6bd6ec3adf426513de2c42a2bff30",
    R"F1802e5c57C()F1802e5c57C",
    R"F1802e5c57D()F1802e5c57D",
    R"F1802e5c57T()F1802e5c57T",
    R"F1802e5c57F(10: if ((*(uint *)(param_2 + 0x60) & 0x400) != 0) {
14: return;)F1802e5c57F",
    R"F1802e5c57U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5c57U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5c57() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5c57", "FUN_1802e5c57");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7122b3502f53a10b62d9af022e66352e51b6bd6ec3adf426513de2c42a2bff30
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5c57(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5c57;
}

// 0x1802e5c85 FUN_1802e5c85
// source: re/dump/decompile/0x1802e5c85_FUN_1802e5c85.c
// size: 46 bytes; thunk: false
// body sha256: 473f10b7364f15ff757b3f4500167ba6a1db29a356106b32088321ce82ba048c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5c85{
    "0x1802e5c85",
    "FUN_1802e5c85",
    R"F1802e5c85S(undefined FUN_1802e5c85())F1802e5c85S",
    R"B1802e5c85(// 0x1802e5c85  FUN_1802e5c85
// size=46 thunk=false
// signature: undefined FUN_1802e5c85()
// status: ok


void FUN_1802e5c85(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x800) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);
  }
  return;
}


)B1802e5c85",
    "473f10b7364f15ff757b3f4500167ba6a1db29a356106b32088321ce82ba048c",
    R"F1802e5c85C()F1802e5c85C",
    R"F1802e5c85D()F1802e5c85D",
    R"F1802e5c85T()F1802e5c85T",
    R"F1802e5c85F(10: if ((*(uint *)(param_2 + 0x60) & 0x800) != 0) {
14: return;)F1802e5c85F",
    R"F1802e5c85U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5c85U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5c85() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5c85", "FUN_1802e5c85");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 473f10b7364f15ff757b3f4500167ba6a1db29a356106b32088321ce82ba048c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5c85(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5c85;
}

// 0x1802e5cb3 FUN_1802e5cb3
// source: re/dump/decompile/0x1802e5cb3_FUN_1802e5cb3.c
// size: 46 bytes; thunk: false
// body sha256: 89b8510384a69cc227e9d21a76c5ac3946ee13f4b7fd7f34dc6aab6db67092ce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5cb3{
    "0x1802e5cb3",
    "FUN_1802e5cb3",
    R"F1802e5cb3S(undefined FUN_1802e5cb3())F1802e5cb3S",
    R"B1802e5cb3(// 0x1802e5cb3  FUN_1802e5cb3
// size=46 thunk=false
// signature: undefined FUN_1802e5cb3()
// status: ok


void FUN_1802e5cb3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x100) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


)B1802e5cb3",
    "89b8510384a69cc227e9d21a76c5ac3946ee13f4b7fd7f34dc6aab6db67092ce",
    R"F1802e5cb3C()F1802e5cb3C",
    R"F1802e5cb3D()F1802e5cb3D",
    R"F1802e5cb3T()F1802e5cb3T",
    R"F1802e5cb3F(10: if ((*(uint *)(param_2 + 0x60) & 0x100) != 0) {
14: return;)F1802e5cb3F",
    R"F1802e5cb3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5cb3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5cb3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5cb3", "FUN_1802e5cb3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 89b8510384a69cc227e9d21a76c5ac3946ee13f4b7fd7f34dc6aab6db67092ce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5cb3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5cb3;
}

// 0x1802e5ce1 FUN_1802e5ce1
// source: re/dump/decompile/0x1802e5ce1_FUN_1802e5ce1.c
// size: 46 bytes; thunk: false
// body sha256: 4e3c484ee187fd1521745d51a35e8790a2bd8690eed71427abad934d9351f526
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5ce1{
    "0x1802e5ce1",
    "FUN_1802e5ce1",
    R"F1802e5ce1S(undefined FUN_1802e5ce1())F1802e5ce1S",
    R"B1802e5ce1(// 0x1802e5ce1  FUN_1802e5ce1
// size=46 thunk=false
// signature: undefined FUN_1802e5ce1()
// status: ok


void FUN_1802e5ce1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x200) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5c0);
  }
  return;
}


)B1802e5ce1",
    "4e3c484ee187fd1521745d51a35e8790a2bd8690eed71427abad934d9351f526",
    R"F1802e5ce1C()F1802e5ce1C",
    R"F1802e5ce1D()F1802e5ce1D",
    R"F1802e5ce1T()F1802e5ce1T",
    R"F1802e5ce1F(10: if ((*(uint *)(param_2 + 0x60) & 0x200) != 0) {
14: return;)F1802e5ce1F",
    R"F1802e5ce1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5ce1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5ce1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5ce1", "FUN_1802e5ce1");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4e3c484ee187fd1521745d51a35e8790a2bd8690eed71427abad934d9351f526
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5ce1(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5c0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5ce1;
}

// 0x1802e5d27 FUN_1802e5d27
// source: re/dump/decompile/0x1802e5d27_FUN_1802e5d27.c
// size: 46 bytes; thunk: false
// body sha256: 256e752d8ab3042fbe0ee4638cfd24dd82c623878b7248d6d6d414e46f72ec0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5d27{
    "0x1802e5d27",
    "FUN_1802e5d27",
    R"F1802e5d27S(undefined FUN_1802e5d27())F1802e5d27S",
    R"B1802e5d27(// 0x1802e5d27  FUN_1802e5d27
// size=46 thunk=false
// signature: undefined FUN_1802e5d27()
// status: ok


void FUN_1802e5d27(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);
  }
  return;
}


)B1802e5d27",
    "256e752d8ab3042fbe0ee4638cfd24dd82c623878b7248d6d6d414e46f72ec0d",
    R"F1802e5d27C()F1802e5d27C",
    R"F1802e5d27D()F1802e5d27D",
    R"F1802e5d27T()F1802e5d27T",
    R"F1802e5d27F(10: if ((*(uint *)(param_2 + 0x60) & 0x4000) != 0) {
14: return;)F1802e5d27F",
    R"F1802e5d27U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5d27U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5d27() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5d27", "FUN_1802e5d27");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 256e752d8ab3042fbe0ee4638cfd24dd82c623878b7248d6d6d414e46f72ec0d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5d27(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x4000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5d27;
}

// 0x1802e5d55 FUN_1802e5d55
// source: re/dump/decompile/0x1802e5d55_FUN_1802e5d55.c
// size: 46 bytes; thunk: false
// body sha256: 27d4368821c74b92281665e8b4049a4ceb07aace0e887efedb219394144c62c5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5d55{
    "0x1802e5d55",
    "FUN_1802e5d55",
    R"F1802e5d55S(undefined FUN_1802e5d55())F1802e5d55S",
    R"B1802e5d55(// 0x1802e5d55  FUN_1802e5d55
// size=46 thunk=false
// signature: undefined FUN_1802e5d55()
// status: ok


void FUN_1802e5d55(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


)B1802e5d55",
    "27d4368821c74b92281665e8b4049a4ceb07aace0e887efedb219394144c62c5",
    R"F1802e5d55C()F1802e5d55C",
    R"F1802e5d55D()F1802e5d55D",
    R"F1802e5d55T()F1802e5d55T",
    R"F1802e5d55F(10: if ((*(uint *)(param_2 + 0x60) & 0x2000) != 0) {
14: return;)F1802e5d55F",
    R"F1802e5d55U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5d55U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5d55() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5d55", "FUN_1802e5d55");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 27d4368821c74b92281665e8b4049a4ceb07aace0e887efedb219394144c62c5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5d55(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x2000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5d55;
}

// 0x1802e5d83 FUN_1802e5d83
// source: re/dump/decompile/0x1802e5d83_FUN_1802e5d83.c
// size: 46 bytes; thunk: false
// body sha256: b4da03863f508b9caf99fed749becdf3efb1c89f2470ea759265148a81b01310
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5d83{
    "0x1802e5d83",
    "FUN_1802e5d83",
    R"F1802e5d83S(undefined FUN_1802e5d83())F1802e5d83S",
    R"B1802e5d83(// 0x1802e5d83  FUN_1802e5d83
// size=46 thunk=false
// signature: undefined FUN_1802e5d83()
// status: ok


void FUN_1802e5d83(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);
  }
  return;
}


)B1802e5d83",
    "b4da03863f508b9caf99fed749becdf3efb1c89f2470ea759265148a81b01310",
    R"F1802e5d83C()F1802e5d83C",
    R"F1802e5d83D()F1802e5d83D",
    R"F1802e5d83T()F1802e5d83T",
    R"F1802e5d83F(10: if ((*(uint *)(param_2 + 0x60) & 0x1000) != 0) {
14: return;)F1802e5d83F",
    R"F1802e5d83U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5d83U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5d83() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5d83", "FUN_1802e5d83");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b4da03863f508b9caf99fed749becdf3efb1c89f2470ea759265148a81b01310
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5d83(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5d83;
}

// 0x1802e5dbd FUN_1802e5dbd
// source: re/dump/decompile/0x1802e5dbd_FUN_1802e5dbd.c
// size: 46 bytes; thunk: false
// body sha256: 8c2312a482c10c8235e51306fdd549c5f14b10711d59876a1cec88c76da96507
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5dbd{
    "0x1802e5dbd",
    "FUN_1802e5dbd",
    R"F1802e5dbdS(undefined FUN_1802e5dbd())F1802e5dbdS",
    R"B1802e5dbd(// 0x1802e5dbd  FUN_1802e5dbd
// size=46 thunk=false
// signature: undefined FUN_1802e5dbd()
// status: ok


void FUN_1802e5dbd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


)B1802e5dbd",
    "8c2312a482c10c8235e51306fdd549c5f14b10711d59876a1cec88c76da96507",
    R"F1802e5dbdC()F1802e5dbdC",
    R"F1802e5dbdD()F1802e5dbdD",
    R"F1802e5dbdT()F1802e5dbdT",
    R"F1802e5dbdF(10: if ((*(uint *)(param_2 + 0x60) & 0x10000) != 0) {
14: return;)F1802e5dbdF",
    R"F1802e5dbdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5dbdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5dbd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5dbd", "FUN_1802e5dbd");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8c2312a482c10c8235e51306fdd549c5f14b10711d59876a1cec88c76da96507
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5dbd(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x10000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5dbd;
}

// 0x1802e5deb FUN_1802e5deb
// source: re/dump/decompile/0x1802e5deb_FUN_1802e5deb.c
// size: 46 bytes; thunk: false
// body sha256: 0436c7d88d17f65adf9c83d86ff77e8672d0243c03dc71032a040efb4fb2b0dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5deb{
    "0x1802e5deb",
    "FUN_1802e5deb",
    R"F1802e5debS(undefined FUN_1802e5deb())F1802e5debS",
    R"B1802e5deb(// 0x1802e5deb  FUN_1802e5deb
// size=46 thunk=false
// signature: undefined FUN_1802e5deb()
// status: ok


void FUN_1802e5deb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);
  }
  return;
}


)B1802e5deb",
    "0436c7d88d17f65adf9c83d86ff77e8672d0243c03dc71032a040efb4fb2b0dd",
    R"F1802e5debC()F1802e5debC",
    R"F1802e5debD()F1802e5debD",
    R"F1802e5debT()F1802e5debT",
    R"F1802e5debF(10: if ((*(uint *)(param_2 + 0x60) & 0x8000) != 0) {
14: return;)F1802e5debF",
    R"F1802e5debU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5debU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5deb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5deb", "FUN_1802e5deb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0436c7d88d17f65adf9c83d86ff77e8672d0243c03dc71032a040efb4fb2b0dd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5deb(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x8000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5deb;
}

// 0x1802e5ecd FUN_1802e5ecd
// source: re/dump/decompile/0x1802e5ecd_FUN_1802e5ecd.c
// size: 46 bytes; thunk: false
// body sha256: 12fd929d27a8ed1cd61ab4a646a3ffca001e2e376e55cb38b24d387db6c70d2c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5ecd{
    "0x1802e5ecd",
    "FUN_1802e5ecd",
    R"F1802e5ecdS(undefined FUN_1802e5ecd())F1802e5ecdS",
    R"B1802e5ecd(// 0x1802e5ecd  FUN_1802e5ecd
// size=46 thunk=false
// signature: undefined FUN_1802e5ecd()
// status: ok


void FUN_1802e5ecd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


)B1802e5ecd",
    "12fd929d27a8ed1cd61ab4a646a3ffca001e2e376e55cb38b24d387db6c70d2c",
    R"F1802e5ecdC()F1802e5ecdC",
    R"F1802e5ecdD()F1802e5ecdD",
    R"F1802e5ecdT()F1802e5ecdT",
    R"F1802e5ecdF(10: if ((*(uint *)(param_2 + 0x60) & 0x100000) != 0) {
14: return;)F1802e5ecdF",
    R"F1802e5ecdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5ecdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5ecd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5ecd", "FUN_1802e5ecd");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 12fd929d27a8ed1cd61ab4a646a3ffca001e2e376e55cb38b24d387db6c70d2c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5ecd(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x100000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5ecd;
}

// 0x1802e5efb FUN_1802e5efb
// source: re/dump/decompile/0x1802e5efb_FUN_1802e5efb.c
// size: 46 bytes; thunk: false
// body sha256: 7718c829a1c618d53d4e5755d46e0568d2b1ba67cc943c389af134bc748dcbc8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e5efb{
    "0x1802e5efb",
    "FUN_1802e5efb",
    R"F1802e5efbS(undefined FUN_1802e5efb())F1802e5efbS",
    R"B1802e5efb(// 0x1802e5efb  FUN_1802e5efb
// size=46 thunk=false
// signature: undefined FUN_1802e5efb()
// status: ok


void FUN_1802e5efb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);
  }
  return;
}


)B1802e5efb",
    "7718c829a1c618d53d4e5755d46e0568d2b1ba67cc943c389af134bc748dcbc8",
    R"F1802e5efbC()F1802e5efbC",
    R"F1802e5efbD()F1802e5efbD",
    R"F1802e5efbT()F1802e5efbT",
    R"F1802e5efbF(10: if ((*(uint *)(param_2 + 0x60) & 0x80000) != 0) {
14: return;)F1802e5efbF",
    R"F1802e5efbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e5efbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e5efb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e5efb", "FUN_1802e5efb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7718c829a1c618d53d4e5755d46e0568d2b1ba67cc943c389af134bc748dcbc8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e5efb(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x80000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e5efb;
}

// 0x1802e6720 FUN_1802e6720
// source: re/dump/decompile/0x1802e6720_FUN_1802e6720.c
// size: 49 bytes; thunk: false
// body sha256: ef1a59b325f8da95a00c1887adb7589aef30def962d1958003013638475879ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6720{
    "0x1802e6720",
    "FUN_1802e6720",
    R"F1802e6720S(undefined FUN_1802e6720())F1802e6720S",
    R"B1802e6720(// 0x1802e6720  FUN_1802e6720
// size=49 thunk=false
// signature: undefined FUN_1802e6720()
// status: ok


void FUN_1802e6720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 4) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffb;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x118));
  }
  return;
}


)B1802e6720",
    "ef1a59b325f8da95a00c1887adb7589aef30def962d1958003013638475879ba",
    R"F1802e6720C()F1802e6720C",
    R"F1802e6720D()F1802e6720D",
    R"F1802e6720T()F1802e6720T",
    R"F1802e6720F(10: if ((*(uint *)(param_2 + 0x28) & 4) != 0) {
15: return;)F1802e6720F",
    R"F1802e6720U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6720() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6720", "FUN_1802e6720");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ef1a59b325f8da95a00c1887adb7589aef30def962d1958003013638475879ba
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6720(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x28) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffb;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x118));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6720;
}

// 0x1802e678d FUN_1802e678d
// source: re/dump/decompile/0x1802e678d_FUN_1802e678d.c
// size: 38 bytes; thunk: false
// body sha256: 51aae922f040b505181e45e75d2fff08874d26bf0a31ec1b640a70ced15d194c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e678d{
    "0x1802e678d",
    "FUN_1802e678d",
    R"F1802e678dS(undefined FUN_1802e678d())F1802e678dS",
    R"B1802e678d(// 0x1802e678d  FUN_1802e678d
// size=38 thunk=false
// signature: undefined FUN_1802e678d()
// status: ok


void FUN_1802e678d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


)B1802e678d",
    "51aae922f040b505181e45e75d2fff08874d26bf0a31ec1b640a70ced15d194c",
    R"F1802e678dC()F1802e678dC",
    R"F1802e678dD()F1802e678dD",
    R"F1802e678dT()F1802e678dT",
    R"F1802e678dF(10: if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
14: return;)F1802e678dF",
    R"F1802e678dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e678dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e678d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e678d", "FUN_1802e678d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 51aae922f040b505181e45e75d2fff08874d26bf0a31ec1b640a70ced15d194c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e678d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x28) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e678d;
}

// 0x1802e67b3 FUN_1802e67b3
// source: re/dump/decompile/0x1802e67b3_FUN_1802e67b3.c
// size: 38 bytes; thunk: false
// body sha256: 895e86aa9152528ecf12c0ea03a84cedc4663135e2636010fe7cde4138dc969f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e67b3{
    "0x1802e67b3",
    "FUN_1802e67b3",
    R"F1802e67b3S(undefined FUN_1802e67b3())F1802e67b3S",
    R"B1802e67b3(// 0x1802e67b3  FUN_1802e67b3
// size=38 thunk=false
// signature: undefined FUN_1802e67b3()
// status: ok


void FUN_1802e67b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 2) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


)B1802e67b3",
    "895e86aa9152528ecf12c0ea03a84cedc4663135e2636010fe7cde4138dc969f",
    R"F1802e67b3C()F1802e67b3C",
    R"F1802e67b3D()F1802e67b3D",
    R"F1802e67b3T()F1802e67b3T",
    R"F1802e67b3F(10: if ((*(uint *)(param_2 + 0x28) & 2) != 0) {
14: return;)F1802e67b3F",
    R"F1802e67b3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e67b3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e67b3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e67b3", "FUN_1802e67b3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 895e86aa9152528ecf12c0ea03a84cedc4663135e2636010fe7cde4138dc969f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e67b3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x28) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e67b3;
}

// 0x1802e6810 FUN_1802e6810
// source: re/dump/decompile/0x1802e6810_FUN_1802e6810.c
// size: 38 bytes; thunk: false
// body sha256: 687079f1b14df98f33dd2306e833e6b71e97d77d2110e821217329fea92c11b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6810{
    "0x1802e6810",
    "FUN_1802e6810",
    R"F1802e6810S(undefined FUN_1802e6810())F1802e6810S",
    R"B1802e6810(// 0x1802e6810  FUN_1802e6810
// size=38 thunk=false
// signature: undefined FUN_1802e6810()
// status: ok


void FUN_1802e6810(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802e6810",
    "687079f1b14df98f33dd2306e833e6b71e97d77d2110e821217329fea92c11b5",
    R"F1802e6810C()F1802e6810C",
    R"F1802e6810D()F1802e6810D",
    R"F1802e6810T()F1802e6810T",
    R"F1802e6810F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e6810F",
    R"F1802e6810U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6810() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6810", "FUN_1802e6810");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 687079f1b14df98f33dd2306e833e6b71e97d77d2110e821217329fea92c11b5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6810(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6810;
}

// 0x1802e6836 FUN_1802e6836
// source: re/dump/decompile/0x1802e6836_FUN_1802e6836.c
// size: 38 bytes; thunk: false
// body sha256: bcd68c1251dfb7c1c768f09ecf12fe4e76f1b50814b5c10885dd8bdd54ba710f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6836{
    "0x1802e6836",
    "FUN_1802e6836",
    R"F1802e6836S(undefined FUN_1802e6836())F1802e6836S",
    R"B1802e6836(// 0x1802e6836  FUN_1802e6836
// size=38 thunk=false
// signature: undefined FUN_1802e6836()
// status: ok


void FUN_1802e6836(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802e6836",
    "bcd68c1251dfb7c1c768f09ecf12fe4e76f1b50814b5c10885dd8bdd54ba710f",
    R"F1802e6836C()F1802e6836C",
    R"F1802e6836D()F1802e6836D",
    R"F1802e6836T()F1802e6836T",
    R"F1802e6836F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e6836F",
    R"F1802e6836U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6836U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6836() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6836", "FUN_1802e6836");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bcd68c1251dfb7c1c768f09ecf12fe4e76f1b50814b5c10885dd8bdd54ba710f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6836(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6836;
}

// 0x1802e685c FUN_1802e685c
// source: re/dump/decompile/0x1802e685c_FUN_1802e685c.c
// size: 38 bytes; thunk: false
// body sha256: 74557b1ab839e8259e7972170de3d869125ba747ba666c42912c458a2c0e260d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e685c{
    "0x1802e685c",
    "FUN_1802e685c",
    R"F1802e685cS(undefined FUN_1802e685c())F1802e685cS",
    R"B1802e685c(// 0x1802e685c  FUN_1802e685c
// size=38 thunk=false
// signature: undefined FUN_1802e685c()
// status: ok


void FUN_1802e685c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802e685c",
    "74557b1ab839e8259e7972170de3d869125ba747ba666c42912c458a2c0e260d",
    R"F1802e685cC()F1802e685cC",
    R"F1802e685cD()F1802e685cD",
    R"F1802e685cT()F1802e685cT",
    R"F1802e685cF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e685cF",
    R"F1802e685cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e685cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e685c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e685c", "FUN_1802e685c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 74557b1ab839e8259e7972170de3d869125ba747ba666c42912c458a2c0e260d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e685c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e685c;
}

// 0x1802e6890 FUN_1802e6890
// source: re/dump/decompile/0x1802e6890_FUN_1802e6890.c
// size: 41 bytes; thunk: false
// body sha256: 39edbf83c7d8d54d25d8b103779723c86c965ec2bdf485d2714b06a55bd97d5f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6890{
    "0x1802e6890",
    "FUN_1802e6890",
    R"F1802e6890S(undefined FUN_1802e6890())F1802e6890S",
    R"B1802e6890(// 0x1802e6890  FUN_1802e6890
// size=41 thunk=false
// signature: undefined FUN_1802e6890()
// status: ok


void FUN_1802e6890(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802e6890",
    "39edbf83c7d8d54d25d8b103779723c86c965ec2bdf485d2714b06a55bd97d5f",
    R"F1802e6890C()F1802e6890C",
    R"F1802e6890D()F1802e6890D",
    R"F1802e6890T()F1802e6890T",
    R"F1802e6890F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e6890F",
    R"F1802e6890U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6890() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6890", "FUN_1802e6890");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 39edbf83c7d8d54d25d8b103779723c86c965ec2bdf485d2714b06a55bd97d5f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6890(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6890;
}

// 0x1802e68dd FUN_1802e68dd
// source: re/dump/decompile/0x1802e68dd_FUN_1802e68dd.c
// size: 41 bytes; thunk: false
// body sha256: b6cc867f543257505b606b5f15760abe4d96e5aad7d34dfd8d0c471f6b89d835
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e68dd{
    "0x1802e68dd",
    "FUN_1802e68dd",
    R"F1802e68ddS(undefined FUN_1802e68dd())F1802e68ddS",
    R"B1802e68dd(// 0x1802e68dd  FUN_1802e68dd
// size=41 thunk=false
// signature: undefined FUN_1802e68dd()
// status: ok


void FUN_1802e68dd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802e68dd",
    "b6cc867f543257505b606b5f15760abe4d96e5aad7d34dfd8d0c471f6b89d835",
    R"F1802e68ddC()F1802e68ddC",
    R"F1802e68ddD()F1802e68ddD",
    R"F1802e68ddT()F1802e68ddT",
    R"F1802e68ddF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e68ddF",
    R"F1802e68ddU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e68ddU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e68dd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e68dd", "FUN_1802e68dd");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b6cc867f543257505b606b5f15760abe4d96e5aad7d34dfd8d0c471f6b89d835
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e68dd(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e68dd;
}

// 0x1802e6910 FUN_1802e6910
// source: re/dump/decompile/0x1802e6910_FUN_1802e6910.c
// size: 41 bytes; thunk: false
// body sha256: a440d736984295be79534c37763043a37e31d410b0ceb0b3c9d6e4e049db2357
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6910{
    "0x1802e6910",
    "FUN_1802e6910",
    R"F1802e6910S(undefined FUN_1802e6910())F1802e6910S",
    R"B1802e6910(// 0x1802e6910  FUN_1802e6910
// size=41 thunk=false
// signature: undefined FUN_1802e6910()
// status: ok


void FUN_1802e6910(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x120));
  }
  return;
}


)B1802e6910",
    "a440d736984295be79534c37763043a37e31d410b0ceb0b3c9d6e4e049db2357",
    R"F1802e6910C()F1802e6910C",
    R"F1802e6910D()F1802e6910D",
    R"F1802e6910T()F1802e6910T",
    R"F1802e6910F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e6910F",
    R"F1802e6910U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6910U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6910() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6910", "FUN_1802e6910");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a440d736984295be79534c37763043a37e31d410b0ceb0b3c9d6e4e049db2357
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6910(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x120));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6910;
}

// 0x1802e6945 FUN_1802e6945
// source: re/dump/decompile/0x1802e6945_FUN_1802e6945.c
// size: 38 bytes; thunk: false
// body sha256: 2106d2b85e2fb84c24c0c66e3bb941024b352514a49e96614a00ec3c5173ee43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6945{
    "0x1802e6945",
    "FUN_1802e6945",
    R"F1802e6945S(undefined FUN_1802e6945())F1802e6945S",
    R"B1802e6945(// 0x1802e6945  FUN_1802e6945
// size=38 thunk=false
// signature: undefined FUN_1802e6945()
// status: ok


void FUN_1802e6945(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802e6945",
    "2106d2b85e2fb84c24c0c66e3bb941024b352514a49e96614a00ec3c5173ee43",
    R"F1802e6945C()F1802e6945C",
    R"F1802e6945D()F1802e6945D",
    R"F1802e6945T()F1802e6945T",
    R"F1802e6945F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e6945F",
    R"F1802e6945U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6945U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6945() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6945", "FUN_1802e6945");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2106d2b85e2fb84c24c0c66e3bb941024b352514a49e96614a00ec3c5173ee43
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6945(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6945;
}

// 0x1802e696b FUN_1802e696b
// source: re/dump/decompile/0x1802e696b_FUN_1802e696b.c
// size: 38 bytes; thunk: false
// body sha256: af2ee47f4739ddde471fdd3ca9b3db4564be2337a92fcc75ffa3761dcaba630b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e696b{
    "0x1802e696b",
    "FUN_1802e696b",
    R"F1802e696bS(undefined FUN_1802e696b())F1802e696bS",
    R"B1802e696b(// 0x1802e696b  FUN_1802e696b
// size=38 thunk=false
// signature: undefined FUN_1802e696b()
// status: ok


void FUN_1802e696b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802e696b",
    "af2ee47f4739ddde471fdd3ca9b3db4564be2337a92fcc75ffa3761dcaba630b",
    R"F1802e696bC()F1802e696bC",
    R"F1802e696bD()F1802e696bD",
    R"F1802e696bT()F1802e696bT",
    R"F1802e696bF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e696bF",
    R"F1802e696bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e696bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e696b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e696b", "FUN_1802e696b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: af2ee47f4739ddde471fdd3ca9b3db4564be2337a92fcc75ffa3761dcaba630b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e696b(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e696b;
}

// 0x1802e699d FUN_1802e699d
// source: re/dump/decompile/0x1802e699d_FUN_1802e699d.c
// size: 38 bytes; thunk: false
// body sha256: 381d087af77d24b7315d9273c92cd77b5814afcbb61678d22c78a6b01d2b7cef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e699d{
    "0x1802e699d",
    "FUN_1802e699d",
    R"F1802e699dS(undefined FUN_1802e699d())F1802e699dS",
    R"B1802e699d(// 0x1802e699d  FUN_1802e699d
// size=38 thunk=false
// signature: undefined FUN_1802e699d()
// status: ok


void FUN_1802e699d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802e699d",
    "381d087af77d24b7315d9273c92cd77b5814afcbb61678d22c78a6b01d2b7cef",
    R"F1802e699dC()F1802e699dC",
    R"F1802e699dD()F1802e699dD",
    R"F1802e699dT()F1802e699dT",
    R"F1802e699dF(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802e699dF",
    R"F1802e699dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e699dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e699d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e699d", "FUN_1802e699d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 381d087af77d24b7315d9273c92cd77b5814afcbb61678d22c78a6b01d2b7cef
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e699d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e699d;
}

// 0x1802e69dc FUN_1802e69dc
// source: re/dump/decompile/0x1802e69dc_FUN_1802e69dc.c
// size: 41 bytes; thunk: false
// body sha256: ae74186fdeb7fa0bb036ba31ab135ebe98e0660d892f3b71330985becc79e48f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e69dc{
    "0x1802e69dc",
    "FUN_1802e69dc",
    R"F1802e69dcS(undefined FUN_1802e69dc())F1802e69dcS",
    R"B1802e69dc(// 0x1802e69dc  FUN_1802e69dc
// size=41 thunk=false
// signature: undefined FUN_1802e69dc()
// status: ok


void FUN_1802e69dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802e69dc",
    "ae74186fdeb7fa0bb036ba31ab135ebe98e0660d892f3b71330985becc79e48f",
    R"F1802e69dcC()F1802e69dcC",
    R"F1802e69dcD()F1802e69dcD",
    R"F1802e69dcT()F1802e69dcT",
    R"F1802e69dcF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e69dcF",
    R"F1802e69dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e69dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e69dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e69dc", "FUN_1802e69dc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ae74186fdeb7fa0bb036ba31ab135ebe98e0660d892f3b71330985becc79e48f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e69dc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e69dc;
}

// 0x1802e6a05 FUN_1802e6a05
// source: re/dump/decompile/0x1802e6a05_FUN_1802e6a05.c
// size: 41 bytes; thunk: false
// body sha256: 29ecfeff60e17785ec84dfc2635327283d9300b337f1308808e12988090c9918
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6a05{
    "0x1802e6a05",
    "FUN_1802e6a05",
    R"F1802e6a05S(undefined FUN_1802e6a05())F1802e6a05S",
    R"B1802e6a05(// 0x1802e6a05  FUN_1802e6a05
// size=41 thunk=false
// signature: undefined FUN_1802e6a05()
// status: ok


void FUN_1802e6a05(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802e6a05",
    "29ecfeff60e17785ec84dfc2635327283d9300b337f1308808e12988090c9918",
    R"F1802e6a05C()F1802e6a05C",
    R"F1802e6a05D()F1802e6a05D",
    R"F1802e6a05T()F1802e6a05T",
    R"F1802e6a05F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e6a05F",
    R"F1802e6a05U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6a05U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6a05() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6a05", "FUN_1802e6a05");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 29ecfeff60e17785ec84dfc2635327283d9300b337f1308808e12988090c9918
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6a05(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6a05;
}

// 0x1802e6a3a FUN_1802e6a3a
// source: re/dump/decompile/0x1802e6a3a_FUN_1802e6a3a.c
// size: 38 bytes; thunk: false
// body sha256: 8fa8d36bacbd589b0f2a785b740d25572c6c5203e51ebeb41dcdbe87ea89b0c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6a3a{
    "0x1802e6a3a",
    "FUN_1802e6a3a",
    R"F1802e6a3aS(undefined FUN_1802e6a3a())F1802e6a3aS",
    R"B1802e6a3a(// 0x1802e6a3a  FUN_1802e6a3a
// size=38 thunk=false
// signature: undefined FUN_1802e6a3a()
// status: ok


void FUN_1802e6a3a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1800f5670(param_2 + 0x40);
  }
  return;
}


)B1802e6a3a",
    "8fa8d36bacbd589b0f2a785b740d25572c6c5203e51ebeb41dcdbe87ea89b0c8",
    R"F1802e6a3aC(FUN_1800f5670)F1802e6a3aC",
    R"F1802e6a3aD()F1802e6a3aD",
    R"F1802e6a3aT()F1802e6a3aT",
    R"F1802e6a3aF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e6a3aF",
    R"F1802e6a3aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6a3aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6a3a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6a3a", "FUN_1802e6a3a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800f5670", reinterpret_cast<const void*>(&image::FUN_1800f5670));
    // body sha256: 8fa8d36bacbd589b0f2a785b740d25572c6c5203e51ebeb41dcdbe87ea89b0c8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6a3a(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_1800f5670(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6a3a;
}

// 0x1802e6b30 FUN_1802e6b30
// source: re/dump/decompile/0x1802e6b30_FUN_1802e6b30.c
// size: 22 bytes; thunk: false
// body sha256: 6af96149b14f9491e5c2c8fd37d4cd131090391a75b4e854171b91b3992c41b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6b30{
    "0x1802e6b30",
    "FUN_1802e6b30",
    R"F1802e6b30S(undefined FUN_1802e6b30())F1802e6b30S",
    R"B1802e6b30(// 0x1802e6b30  FUN_1802e6b30
// size=22 thunk=false
// signature: undefined FUN_1802e6b30()
// status: ok


void FUN_1802e6b30(void)

{
  DAT_180427610 = DAT_180427610 & 0xfffffffe;
  return;
}


)B1802e6b30",
    "6af96149b14f9491e5c2c8fd37d4cd131090391a75b4e854171b91b3992c41b9",
    R"F1802e6b30C()F1802e6b30C",
    R"F1802e6b30D(DAT_180427610)F1802e6b30D",
    R"F1802e6b30T()F1802e6b30T",
    R"F1802e6b30F(11: return;)F1802e6b30F",
    R"F1802e6b30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427610.)F1802e6b30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6b30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6b30", "FUN_1802e6b30");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427610.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180427610", static_cast<const void*>(&image::DAT_180427610));
    // body sha256: 6af96149b14f9491e5c2c8fd37d4cd131090391a75b4e854171b91b3992c41b9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6b30(void)");
        {
            trace.statement("DAT_180427610 = DAT_180427610 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802e6b30;
}

// 0x1802e6c42 FUN_1802e6c42
// source: re/dump/decompile/0x1802e6c42_FUN_1802e6c42.c
// size: 42 bytes; thunk: false
// body sha256: 40be6d2d22dffdabf3f7abae5cffeea3507a7318a7993f8b175488029a80a6c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6c42{
    "0x1802e6c42",
    "FUN_1802e6c42",
    R"F1802e6c42S(undefined FUN_1802e6c42())F1802e6c42S",
    R"B1802e6c42(// 0x1802e6c42  FUN_1802e6c42
// size=42 thunk=false
// signature: undefined FUN_1802e6c42()
// status: ok


void FUN_1802e6c42(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x30),0x70,3,FUN_1800f5670);
  return;
}


)B1802e6c42",
    "40be6d2d22dffdabf3f7abae5cffeea3507a7318a7993f8b175488029a80a6c4",
    R"F1802e6c42C(FUN_1800f5670)F1802e6c42C",
    R"F1802e6c42D()F1802e6c42D",
    R"F1802e6c42T()F1802e6c42T",
    R"F1802e6c42F(11: return;)F1802e6c42F",
    R"F1802e6c42U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6c42U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6c42() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6c42", "FUN_1802e6c42");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800f5670", reinterpret_cast<const void*>(&image::FUN_1800f5670));
    // body sha256: 40be6d2d22dffdabf3f7abae5cffeea3507a7318a7993f8b175488029a80a6c4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6c42(undefined8 param_1,longlong param_2)");
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x30),0x70,3,FUN_1800f5670);");
            trace.statement("return;");
        }
    return kFunction_0x1802e6c42;
}

// 0x1802e6d3c FUN_1802e6d3c
// source: re/dump/decompile/0x1802e6d3c_FUN_1802e6d3c.c
// size: 38 bytes; thunk: false
// body sha256: 399eecc80a80affb7414005cb9bc0400571dfa714d110ed448532415e9f8d82f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6d3c{
    "0x1802e6d3c",
    "FUN_1802e6d3c",
    R"F1802e6d3cS(undefined FUN_1802e6d3c())F1802e6d3cS",
    R"B1802e6d3c(// 0x1802e6d3c  FUN_1802e6d3c
// size=38 thunk=false
// signature: undefined FUN_1802e6d3c()
// status: ok


void FUN_1802e6d3c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18020baa0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802e6d3c",
    "399eecc80a80affb7414005cb9bc0400571dfa714d110ed448532415e9f8d82f",
    R"F1802e6d3cC()F1802e6d3cC",
    R"F1802e6d3cD()F1802e6d3cD",
    R"F1802e6d3cT()F1802e6d3cT",
    R"F1802e6d3cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e6d3cF",
    R"F1802e6d3cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6d3cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6d3c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6d3c", "FUN_1802e6d3c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 399eecc80a80affb7414005cb9bc0400571dfa714d110ed448532415e9f8d82f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6d3c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18020baa0(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6d3c;
}

// 0x1802e6dc8 FUN_1802e6dc8
// source: re/dump/decompile/0x1802e6dc8_FUN_1802e6dc8.c
// size: 36 bytes; thunk: false
// body sha256: fbd05be2e4aea202fffdb5178a06075873182374a93268fe4cb95e1fed492d24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6dc8{
    "0x1802e6dc8",
    "FUN_1802e6dc8",
    R"F1802e6dc8S(undefined FUN_1802e6dc8())F1802e6dc8S",
    R"B1802e6dc8(// 0x1802e6dc8  FUN_1802e6dc8
// size=36 thunk=false
// signature: undefined FUN_1802e6dc8()
// status: ok


undefined8 FUN_1802e6dc8(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x44) = 0;
  return 0;
}


)B1802e6dc8",
    "fbd05be2e4aea202fffdb5178a06075873182374a93268fe4cb95e1fed492d24",
    R"F1802e6dc8C()F1802e6dc8C",
    R"F1802e6dc8D()F1802e6dc8D",
    R"F1802e6dc8T()F1802e6dc8T",
    R"F1802e6dc8F(11: return 0;)F1802e6dc8F",
    R"F1802e6dc8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6dc8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6dc8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6dc8", "FUN_1802e6dc8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fbd05be2e4aea202fffdb5178a06075873182374a93268fe4cb95e1fed492d24
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e6dc8(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x44) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e6dc8;
}

// 0x1802e6e2d FUN_1802e6e2d
// source: re/dump/decompile/0x1802e6e2d_FUN_1802e6e2d.c
// size: 40 bytes; thunk: false
// body sha256: 5ed0d795f1273cd9f61da57ffeb4c4248b5290f1c111ef9382e6bd94e68a8f32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6e2d{
    "0x1802e6e2d",
    "FUN_1802e6e2d",
    R"F1802e6e2dS(undefined FUN_1802e6e2d())F1802e6e2dS",
    R"B1802e6e2d(// 0x1802e6e2d  FUN_1802e6e2d
// size=40 thunk=false
// signature: undefined FUN_1802e6e2d()
// status: ok


undefined8 FUN_1802e6e2d(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xa8) = 0;
  return 0;
}


)B1802e6e2d",
    "5ed0d795f1273cd9f61da57ffeb4c4248b5290f1c111ef9382e6bd94e68a8f32",
    R"F1802e6e2dC()F1802e6e2dC",
    R"F1802e6e2dD()F1802e6e2dD",
    R"F1802e6e2dT()F1802e6e2dT",
    R"F1802e6e2dF(11: return 0;)F1802e6e2dF",
    R"F1802e6e2dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6e2dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6e2d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6e2d", "FUN_1802e6e2d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5ed0d795f1273cd9f61da57ffeb4c4248b5290f1c111ef9382e6bd94e68a8f32
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e6e2d(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined8 *)(param_2 + 0xa8) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e6e2d;
}

// 0x1802e6e56 FUN_1802e6e56
// source: re/dump/decompile/0x1802e6e56_FUN_1802e6e56.c
// size: 41 bytes; thunk: false
// body sha256: 9b517b32ebe6d5c44fd432972a30db5e00682c432a1a3af1a854553694028de3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6e56{
    "0x1802e6e56",
    "FUN_1802e6e56",
    R"F1802e6e56S(undefined FUN_1802e6e56())F1802e6e56S",
    R"B1802e6e56(// 0x1802e6e56  FUN_1802e6e56
// size=41 thunk=false
// signature: undefined FUN_1802e6e56()
// status: ok


void FUN_1802e6e56(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802e6e56",
    "9b517b32ebe6d5c44fd432972a30db5e00682c432a1a3af1a854553694028de3",
    R"F1802e6e56C()F1802e6e56C",
    R"F1802e6e56D()F1802e6e56D",
    R"F1802e6e56T()F1802e6e56T",
    R"F1802e6e56F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e6e56F",
    R"F1802e6e56U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6e56U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6e56() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6e56", "FUN_1802e6e56");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9b517b32ebe6d5c44fd432972a30db5e00682c432a1a3af1a854553694028de3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6e56(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6e56;
}

// 0x1802e6e7f FUN_1802e6e7f
// source: re/dump/decompile/0x1802e6e7f_FUN_1802e6e7f.c
// size: 41 bytes; thunk: false
// body sha256: b8e00e6e79c2ee67139d11bfd9fd672df0b49cc3f4aa189753f7cc8bfb169901
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6e7f{
    "0x1802e6e7f",
    "FUN_1802e6e7f",
    R"F1802e6e7fS(undefined FUN_1802e6e7f())F1802e6e7fS",
    R"B1802e6e7f(// 0x1802e6e7f  FUN_1802e6e7f
// size=41 thunk=false
// signature: undefined FUN_1802e6e7f()
// status: ok


void FUN_1802e6e7f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


)B1802e6e7f",
    "b8e00e6e79c2ee67139d11bfd9fd672df0b49cc3f4aa189753f7cc8bfb169901",
    R"F1802e6e7fC()F1802e6e7fC",
    R"F1802e6e7fD()F1802e6e7fD",
    R"F1802e6e7fT()F1802e6e7fT",
    R"F1802e6e7fF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e6e7fF",
    R"F1802e6e7fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6e7fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6e7f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6e7f", "FUN_1802e6e7f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b8e00e6e79c2ee67139d11bfd9fd672df0b49cc3f4aa189753f7cc8bfb169901
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6e7f(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6e7f;
}

// 0x1802e6ea8 FUN_1802e6ea8
// source: re/dump/decompile/0x1802e6ea8_FUN_1802e6ea8.c
// size: 41 bytes; thunk: false
// body sha256: 21a581e0949b14ae6ef93e42227aaf4c20b06bea515f136a5581ed38ac40fc2a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6ea8{
    "0x1802e6ea8",
    "FUN_1802e6ea8",
    R"F1802e6ea8S(undefined FUN_1802e6ea8())F1802e6ea8S",
    R"B1802e6ea8(// 0x1802e6ea8  FUN_1802e6ea8
// size=41 thunk=false
// signature: undefined FUN_1802e6ea8()
// status: ok


void FUN_1802e6ea8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1802e6ea8",
    "21a581e0949b14ae6ef93e42227aaf4c20b06bea515f136a5581ed38ac40fc2a",
    R"F1802e6ea8C()F1802e6ea8C",
    R"F1802e6ea8D()F1802e6ea8D",
    R"F1802e6ea8T()F1802e6ea8T",
    R"F1802e6ea8F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e6ea8F",
    R"F1802e6ea8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6ea8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6ea8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6ea8", "FUN_1802e6ea8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 21a581e0949b14ae6ef93e42227aaf4c20b06bea515f136a5581ed38ac40fc2a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6ea8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6ea8;
}

// 0x1802e6f2d FUN_1802e6f2d
// source: re/dump/decompile/0x1802e6f2d_FUN_1802e6f2d.c
// size: 29 bytes; thunk: false
// body sha256: 182e9ebe9e613dcabf22883d3311d7c3df10e72c439aa079ffbe40c90a4f6c03
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6f2d{
    "0x1802e6f2d",
    "FUN_1802e6f2d",
    R"F1802e6f2dS(undefined FUN_1802e6f2d())F1802e6f2dS",
    R"B1802e6f2d(// 0x1802e6f2d  FUN_1802e6f2d
// size=29 thunk=false
// signature: undefined FUN_1802e6f2d()
// status: ok


undefined8 FUN_1802e6f2d(void)

{
  return 0;
}


)B1802e6f2d",
    "182e9ebe9e613dcabf22883d3311d7c3df10e72c439aa079ffbe40c90a4f6c03",
    R"F1802e6f2dC()F1802e6f2dC",
    R"F1802e6f2dD()F1802e6f2dD",
    R"F1802e6f2dT()F1802e6f2dT",
    R"F1802e6f2dF(10: return 0;)F1802e6f2dF",
    R"F1802e6f2dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6f2dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6f2d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6f2d", "FUN_1802e6f2d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 182e9ebe9e613dcabf22883d3311d7c3df10e72c439aa079ffbe40c90a4f6c03
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802e6f2d(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e6f2d;
}

// 0x1802e6f9c FUN_1802e6f9c
// source: re/dump/decompile/0x1802e6f9c_FUN_1802e6f9c.c
// size: 46 bytes; thunk: false
// body sha256: fa9e805ea865ecd0978b3ac8d8e8f8c9dcf18ecc5082981d942177009e887707
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6f9c{
    "0x1802e6f9c",
    "FUN_1802e6f9c",
    R"F1802e6f9cS(undefined FUN_1802e6f9c())F1802e6f9cS",
    R"B1802e6f9c(// 0x1802e6f9c  FUN_1802e6f9c
// size=46 thunk=false
// signature: undefined FUN_1802e6f9c()
// status: ok


void FUN_1802e6f9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802e6f9c",
    "fa9e805ea865ecd0978b3ac8d8e8f8c9dcf18ecc5082981d942177009e887707",
    R"F1802e6f9cC()F1802e6f9cC",
    R"F1802e6f9cD()F1802e6f9cD",
    R"F1802e6f9cT()F1802e6f9cT",
    R"F1802e6f9cF(10: if ((*(uint *)(param_2 + 0x44) & 0x40000) != 0) {
14: return;)F1802e6f9cF",
    R"F1802e6f9cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6f9cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6f9c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6f9c", "FUN_1802e6f9c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fa9e805ea865ecd0978b3ac8d8e8f8c9dcf18ecc5082981d942177009e887707
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6f9c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x40000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffbffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6f9c;
}

// 0x1802e6fca FUN_1802e6fca
// source: re/dump/decompile/0x1802e6fca_FUN_1802e6fca.c
// size: 46 bytes; thunk: false
// body sha256: 02a65414046f8d20d2b39690dbdb4aa049a65167e0200b56d774f7d9f6b1eccb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e6fca{
    "0x1802e6fca",
    "FUN_1802e6fca",
    R"F1802e6fcaS(undefined FUN_1802e6fca())F1802e6fcaS",
    R"B1802e6fca(// 0x1802e6fca  FUN_1802e6fca
// size=46 thunk=false
// signature: undefined FUN_1802e6fca()
// status: ok


void FUN_1802e6fca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802e6fca",
    "02a65414046f8d20d2b39690dbdb4aa049a65167e0200b56d774f7d9f6b1eccb",
    R"F1802e6fcaC()F1802e6fcaC",
    R"F1802e6fcaD()F1802e6fcaD",
    R"F1802e6fcaT()F1802e6fcaT",
    R"F1802e6fcaF(10: if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0) {
14: return;)F1802e6fcaF",
    R"F1802e6fcaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e6fcaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e6fca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e6fca", "FUN_1802e6fca");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 02a65414046f8d20d2b39690dbdb4aa049a65167e0200b56d774f7d9f6b1eccb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e6fca(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e6fca;
}

// 0x1802e7004 FUN_1802e7004
// source: re/dump/decompile/0x1802e7004_FUN_1802e7004.c
// size: 41 bytes; thunk: false
// body sha256: d8c5d6f7b50b325a0a41af0d6e5619d2ccd082fef5ac0bce9e3e10e7d6dcff79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7004{
    "0x1802e7004",
    "FUN_1802e7004",
    R"F1802e7004S(undefined FUN_1802e7004())F1802e7004S",
    R"B1802e7004(// 0x1802e7004  FUN_1802e7004
// size=41 thunk=false
// signature: undefined FUN_1802e7004()
// status: ok


void FUN_1802e7004(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x288);
  }
  return;
}


)B1802e7004",
    "d8c5d6f7b50b325a0a41af0d6e5619d2ccd082fef5ac0bce9e3e10e7d6dcff79",
    R"F1802e7004C()F1802e7004C",
    R"F1802e7004D()F1802e7004D",
    R"F1802e7004T()F1802e7004T",
    R"F1802e7004F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802e7004F",
    R"F1802e7004U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7004U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7004() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7004", "FUN_1802e7004");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d8c5d6f7b50b325a0a41af0d6e5619d2ccd082fef5ac0bce9e3e10e7d6dcff79
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7004(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x288);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7004;
}

// 0x1802e702d FUN_1802e702d
// source: re/dump/decompile/0x1802e702d_FUN_1802e702d.c
// size: 41 bytes; thunk: false
// body sha256: d0ea5bc4104c5471e049b8bc01acf9fc884db6bb3feb942d01a26ddaa3d5a65d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e702d{
    "0x1802e702d",
    "FUN_1802e702d",
    R"F1802e702dS(undefined FUN_1802e702d())F1802e702dS",
    R"B1802e702d(// 0x1802e702d  FUN_1802e702d
// size=41 thunk=false
// signature: undefined FUN_1802e702d()
// status: ok


void FUN_1802e702d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4c8);
  }
  return;
}


)B1802e702d",
    "d0ea5bc4104c5471e049b8bc01acf9fc884db6bb3feb942d01a26ddaa3d5a65d",
    R"F1802e702dC()F1802e702dC",
    R"F1802e702dD()F1802e702dD",
    R"F1802e702dT()F1802e702dT",
    R"F1802e702dF(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802e702dF",
    R"F1802e702dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e702dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e702d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e702d", "FUN_1802e702d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d0ea5bc4104c5471e049b8bc01acf9fc884db6bb3feb942d01a26ddaa3d5a65d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e702d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e702d;
}

// 0x1802e7056 FUN_1802e7056
// source: re/dump/decompile/0x1802e7056_FUN_1802e7056.c
// size: 41 bytes; thunk: false
// body sha256: 80553b3e0d898ac1625f06ad82b8779e82baca8d64dd50c09422fa6648afa055
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7056{
    "0x1802e7056",
    "FUN_1802e7056",
    R"F1802e7056S(undefined FUN_1802e7056())F1802e7056S",
    R"B1802e7056(// 0x1802e7056  FUN_1802e7056
// size=41 thunk=false
// signature: undefined FUN_1802e7056()
// status: ok


void FUN_1802e7056(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a8);
  }
  return;
}


)B1802e7056",
    "80553b3e0d898ac1625f06ad82b8779e82baca8d64dd50c09422fa6648afa055",
    R"F1802e7056C()F1802e7056C",
    R"F1802e7056D()F1802e7056D",
    R"F1802e7056T()F1802e7056T",
    R"F1802e7056F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802e7056F",
    R"F1802e7056U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7056U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7056() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7056", "FUN_1802e7056");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 80553b3e0d898ac1625f06ad82b8779e82baca8d64dd50c09422fa6648afa055
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7056(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7056;
}

// 0x1802e707f FUN_1802e707f
// source: re/dump/decompile/0x1802e707f_FUN_1802e707f.c
// size: 41 bytes; thunk: false
// body sha256: 6e87aa5efc641375f1623487f4e1f71dfa7cf72b89e39092cb6a06111e9fc8ff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e707f{
    "0x1802e707f",
    "FUN_1802e707f",
    R"F1802e707fS(undefined FUN_1802e707f())F1802e707fS",
    R"B1802e707f(// 0x1802e707f  FUN_1802e707f
// size=41 thunk=false
// signature: undefined FUN_1802e707f()
// status: ok


void FUN_1802e707f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802e707f",
    "6e87aa5efc641375f1623487f4e1f71dfa7cf72b89e39092cb6a06111e9fc8ff",
    R"F1802e707fC()F1802e707fC",
    R"F1802e707fD()F1802e707fD",
    R"F1802e707fT()F1802e707fT",
    R"F1802e707fF(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802e707fF",
    R"F1802e707fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e707fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e707f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e707f", "FUN_1802e707f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6e87aa5efc641375f1623487f4e1f71dfa7cf72b89e39092cb6a06111e9fc8ff
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e707f(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e707f;
}

// 0x1802e70a8 FUN_1802e70a8
// source: re/dump/decompile/0x1802e70a8_FUN_1802e70a8.c
// size: 46 bytes; thunk: false
// body sha256: 2bb6779dff694ba2369c5558dfd9cccd8d5e45fa985e5cc1e16741c5b43ca7dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e70a8{
    "0x1802e70a8",
    "FUN_1802e70a8",
    R"F1802e70a8S(undefined FUN_1802e70a8())F1802e70a8S",
    R"B1802e70a8(// 0x1802e70a8  FUN_1802e70a8
// size=46 thunk=false
// signature: undefined FUN_1802e70a8()
// status: ok


void FUN_1802e70a8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802e70a8",
    "2bb6779dff694ba2369c5558dfd9cccd8d5e45fa985e5cc1e16741c5b43ca7dd",
    R"F1802e70a8C()F1802e70a8C",
    R"F1802e70a8D()F1802e70a8D",
    R"F1802e70a8T()F1802e70a8T",
    R"F1802e70a8F(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802e70a8F",
    R"F1802e70a8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e70a8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e70a8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e70a8", "FUN_1802e70a8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2bb6779dff694ba2369c5558dfd9cccd8d5e45fa985e5cc1e16741c5b43ca7dd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e70a8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e70a8;
}

// 0x1802e70d6 FUN_1802e70d6
// source: re/dump/decompile/0x1802e70d6_FUN_1802e70d6.c
// size: 46 bytes; thunk: false
// body sha256: a18ab36a39747e0e3c69ae352b36a48742c54dfb8744cdd37685cd96237ba927
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e70d6{
    "0x1802e70d6",
    "FUN_1802e70d6",
    R"F1802e70d6S(undefined FUN_1802e70d6())F1802e70d6S",
    R"B1802e70d6(// 0x1802e70d6  FUN_1802e70d6
// size=46 thunk=false
// signature: undefined FUN_1802e70d6()
// status: ok


void FUN_1802e70d6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);
  }
  return;
}


)B1802e70d6",
    "a18ab36a39747e0e3c69ae352b36a48742c54dfb8744cdd37685cd96237ba927",
    R"F1802e70d6C()F1802e70d6C",
    R"F1802e70d6D()F1802e70d6D",
    R"F1802e70d6T()F1802e70d6T",
    R"F1802e70d6F(10: if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
14: return;)F1802e70d6F",
    R"F1802e70d6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e70d6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e70d6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e70d6", "FUN_1802e70d6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a18ab36a39747e0e3c69ae352b36a48742c54dfb8744cdd37685cd96237ba927
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e70d6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e70d6;
}

// 0x1802e7104 FUN_1802e7104
// source: re/dump/decompile/0x1802e7104_FUN_1802e7104.c
// size: 46 bytes; thunk: false
// body sha256: 17ec8d0592af8b10cd23af00c3d3419122141ce13b78c5600c7e9d6c9cc681f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7104{
    "0x1802e7104",
    "FUN_1802e7104",
    R"F1802e7104S(undefined FUN_1802e7104())F1802e7104S",
    R"B1802e7104(// 0x1802e7104  FUN_1802e7104
// size=46 thunk=false
// signature: undefined FUN_1802e7104()
// status: ok


void FUN_1802e7104(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


)B1802e7104",
    "17ec8d0592af8b10cd23af00c3d3419122141ce13b78c5600c7e9d6c9cc681f6",
    R"F1802e7104C()F1802e7104C",
    R"F1802e7104D()F1802e7104D",
    R"F1802e7104T()F1802e7104T",
    R"F1802e7104F(10: if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
14: return;)F1802e7104F",
    R"F1802e7104U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7104U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7104() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7104", "FUN_1802e7104");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 17ec8d0592af8b10cd23af00c3d3419122141ce13b78c5600c7e9d6c9cc681f6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7104(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7104;
}

// 0x1802e7132 FUN_1802e7132
// source: re/dump/decompile/0x1802e7132_FUN_1802e7132.c
// size: 46 bytes; thunk: false
// body sha256: 65be68200c0a0985c963e9907dc7d3defed9deedf09be13dd787a6f82526ed1b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7132{
    "0x1802e7132",
    "FUN_1802e7132",
    R"F1802e7132S(undefined FUN_1802e7132())F1802e7132S",
    R"B1802e7132(// 0x1802e7132  FUN_1802e7132
// size=46 thunk=false
// signature: undefined FUN_1802e7132()
// status: ok


void FUN_1802e7132(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


)B1802e7132",
    "65be68200c0a0985c963e9907dc7d3defed9deedf09be13dd787a6f82526ed1b",
    R"F1802e7132C()F1802e7132C",
    R"F1802e7132D()F1802e7132D",
    R"F1802e7132T()F1802e7132T",
    R"F1802e7132F(10: if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
14: return;)F1802e7132F",
    R"F1802e7132U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7132U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7132() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7132", "FUN_1802e7132");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 65be68200c0a0985c963e9907dc7d3defed9deedf09be13dd787a6f82526ed1b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7132(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7132;
}

// 0x1802e7160 FUN_1802e7160
// source: re/dump/decompile/0x1802e7160_FUN_1802e7160.c
// size: 46 bytes; thunk: false
// body sha256: 9d0f6a03c7fa45cfe0bb793d8fc780a91b516bac34e7c2f8ae67c4950128b0f2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7160{
    "0x1802e7160",
    "FUN_1802e7160",
    R"F1802e7160S(undefined FUN_1802e7160())F1802e7160S",
    R"B1802e7160(// 0x1802e7160  FUN_1802e7160
// size=46 thunk=false
// signature: undefined FUN_1802e7160()
// status: ok


void FUN_1802e7160(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e8);
  }
  return;
}


)B1802e7160",
    "9d0f6a03c7fa45cfe0bb793d8fc780a91b516bac34e7c2f8ae67c4950128b0f2",
    R"F1802e7160C()F1802e7160C",
    R"F1802e7160D()F1802e7160D",
    R"F1802e7160T()F1802e7160T",
    R"F1802e7160F(10: if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
14: return;)F1802e7160F",
    R"F1802e7160U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7160U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7160() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7160", "FUN_1802e7160");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9d0f6a03c7fa45cfe0bb793d8fc780a91b516bac34e7c2f8ae67c4950128b0f2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7160(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7160;
}

// 0x1802e718e FUN_1802e718e
// source: re/dump/decompile/0x1802e718e_FUN_1802e718e.c
// size: 46 bytes; thunk: false
// body sha256: 7d42003643f668b69527b388abda9b21ad851935a726181b68d72af2aa4b1346
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e718e{
    "0x1802e718e",
    "FUN_1802e718e",
    R"F1802e718eS(undefined FUN_1802e718e())F1802e718eS",
    R"B1802e718e(// 0x1802e718e  FUN_1802e718e
// size=46 thunk=false
// signature: undefined FUN_1802e718e()
// status: ok


void FUN_1802e718e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


)B1802e718e",
    "7d42003643f668b69527b388abda9b21ad851935a726181b68d72af2aa4b1346",
    R"F1802e718eC()F1802e718eC",
    R"F1802e718eD()F1802e718eD",
    R"F1802e718eT()F1802e718eT",
    R"F1802e718eF(10: if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
14: return;)F1802e718eF",
    R"F1802e718eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e718eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e718e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e718e", "FUN_1802e718e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7d42003643f668b69527b388abda9b21ad851935a726181b68d72af2aa4b1346
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e718e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e718e;
}

// 0x1802e71bc FUN_1802e71bc
// source: re/dump/decompile/0x1802e71bc_FUN_1802e71bc.c
// size: 46 bytes; thunk: false
// body sha256: 3b79c8a3a413482f966117eac083b19f038ed207f7aec56394cf12357986fcbb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e71bc{
    "0x1802e71bc",
    "FUN_1802e71bc",
    R"F1802e71bcS(undefined FUN_1802e71bc())F1802e71bcS",
    R"B1802e71bc(// 0x1802e71bc  FUN_1802e71bc
// size=46 thunk=false
// signature: undefined FUN_1802e71bc()
// status: ok


void FUN_1802e71bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


)B1802e71bc",
    "3b79c8a3a413482f966117eac083b19f038ed207f7aec56394cf12357986fcbb",
    R"F1802e71bcC()F1802e71bcC",
    R"F1802e71bcD()F1802e71bcD",
    R"F1802e71bcT()F1802e71bcT",
    R"F1802e71bcF(10: if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
14: return;)F1802e71bcF",
    R"F1802e71bcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e71bcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e71bc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e71bc", "FUN_1802e71bc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3b79c8a3a413482f966117eac083b19f038ed207f7aec56394cf12357986fcbb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e71bc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e71bc;
}

// 0x1802e71ea FUN_1802e71ea
// source: re/dump/decompile/0x1802e71ea_FUN_1802e71ea.c
// size: 46 bytes; thunk: false
// body sha256: c219cb876a483307af381829a3c78877b56cc430f9dfa34d527628fff95df480
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e71ea{
    "0x1802e71ea",
    "FUN_1802e71ea",
    R"F1802e71eaS(undefined FUN_1802e71ea())F1802e71eaS",
    R"B1802e71ea(// 0x1802e71ea  FUN_1802e71ea
// size=46 thunk=false
// signature: undefined FUN_1802e71ea()
// status: ok


void FUN_1802e71ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);
  }
  return;
}


)B1802e71ea",
    "c219cb876a483307af381829a3c78877b56cc430f9dfa34d527628fff95df480",
    R"F1802e71eaC()F1802e71eaC",
    R"F1802e71eaD()F1802e71eaD",
    R"F1802e71eaT()F1802e71eaT",
    R"F1802e71eaF(10: if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
14: return;)F1802e71eaF",
    R"F1802e71eaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e71eaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e71ea() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e71ea", "FUN_1802e71ea");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c219cb876a483307af381829a3c78877b56cc430f9dfa34d527628fff95df480
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e71ea(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e71ea;
}

// 0x1802e7218 FUN_1802e7218
// source: re/dump/decompile/0x1802e7218_FUN_1802e7218.c
// size: 46 bytes; thunk: false
// body sha256: 74e896e098b16ea420ae4c9c455d96888b4025b4265abe66b8aeaa5aa5e395c1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7218{
    "0x1802e7218",
    "FUN_1802e7218",
    R"F1802e7218S(undefined FUN_1802e7218())F1802e7218S",
    R"B1802e7218(// 0x1802e7218  FUN_1802e7218
// size=46 thunk=false
// signature: undefined FUN_1802e7218()
// status: ok


void FUN_1802e7218(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


)B1802e7218",
    "74e896e098b16ea420ae4c9c455d96888b4025b4265abe66b8aeaa5aa5e395c1",
    R"F1802e7218C()F1802e7218C",
    R"F1802e7218D()F1802e7218D",
    R"F1802e7218T()F1802e7218T",
    R"F1802e7218F(10: if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
14: return;)F1802e7218F",
    R"F1802e7218U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7218U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7218() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7218", "FUN_1802e7218");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 74e896e098b16ea420ae4c9c455d96888b4025b4265abe66b8aeaa5aa5e395c1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7218(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7218;
}

// 0x1802e7246 FUN_1802e7246
// source: re/dump/decompile/0x1802e7246_FUN_1802e7246.c
// size: 46 bytes; thunk: false
// body sha256: bfa17daa120bb7409e4b23e7b24120a4fe2cd675dd5f641313caebe4bfcea55a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7246{
    "0x1802e7246",
    "FUN_1802e7246",
    R"F1802e7246S(undefined FUN_1802e7246())F1802e7246S",
    R"B1802e7246(// 0x1802e7246  FUN_1802e7246
// size=46 thunk=false
// signature: undefined FUN_1802e7246()
// status: ok


void FUN_1802e7246(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


)B1802e7246",
    "bfa17daa120bb7409e4b23e7b24120a4fe2cd675dd5f641313caebe4bfcea55a",
    R"F1802e7246C()F1802e7246C",
    R"F1802e7246D()F1802e7246D",
    R"F1802e7246T()F1802e7246T",
    R"F1802e7246F(10: if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
14: return;)F1802e7246F",
    R"F1802e7246U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7246U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7246() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7246", "FUN_1802e7246");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bfa17daa120bb7409e4b23e7b24120a4fe2cd675dd5f641313caebe4bfcea55a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7246(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7246;
}

// 0x1802e7274 FUN_1802e7274
// source: re/dump/decompile/0x1802e7274_FUN_1802e7274.c
// size: 46 bytes; thunk: false
// body sha256: 26448f1aa2b810e5be86162d925237803da761e2104dc49945ab831bbca98376
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7274{
    "0x1802e7274",
    "FUN_1802e7274",
    R"F1802e7274S(undefined FUN_1802e7274())F1802e7274S",
    R"B1802e7274(// 0x1802e7274  FUN_1802e7274
// size=46 thunk=false
// signature: undefined FUN_1802e7274()
// status: ok


void FUN_1802e7274(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x328);
  }
  return;
}


)B1802e7274",
    "26448f1aa2b810e5be86162d925237803da761e2104dc49945ab831bbca98376",
    R"F1802e7274C()F1802e7274C",
    R"F1802e7274D()F1802e7274D",
    R"F1802e7274T()F1802e7274T",
    R"F1802e7274F(10: if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
14: return;)F1802e7274F",
    R"F1802e7274U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7274U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7274() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7274", "FUN_1802e7274");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 26448f1aa2b810e5be86162d925237803da761e2104dc49945ab831bbca98376
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7274(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x328);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7274;
}

// 0x1802e72a2 FUN_1802e72a2
// source: re/dump/decompile/0x1802e72a2_FUN_1802e72a2.c
// size: 46 bytes; thunk: false
// body sha256: 66b3f5713e66d4dc54ee39bed7aaa3f1cee78ffa9fac8e49bd0ab68847fbf88d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e72a2{
    "0x1802e72a2",
    "FUN_1802e72a2",
    R"F1802e72a2S(undefined FUN_1802e72a2())F1802e72a2S",
    R"B1802e72a2(// 0x1802e72a2  FUN_1802e72a2
// size=46 thunk=false
// signature: undefined FUN_1802e72a2()
// status: ok


void FUN_1802e72a2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


)B1802e72a2",
    "66b3f5713e66d4dc54ee39bed7aaa3f1cee78ffa9fac8e49bd0ab68847fbf88d",
    R"F1802e72a2C()F1802e72a2C",
    R"F1802e72a2D()F1802e72a2D",
    R"F1802e72a2T()F1802e72a2T",
    R"F1802e72a2F(10: if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
14: return;)F1802e72a2F",
    R"F1802e72a2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e72a2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e72a2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e72a2", "FUN_1802e72a2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 66b3f5713e66d4dc54ee39bed7aaa3f1cee78ffa9fac8e49bd0ab68847fbf88d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e72a2(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e72a2;
}

// 0x1802e72d0 FUN_1802e72d0
// source: re/dump/decompile/0x1802e72d0_FUN_1802e72d0.c
// size: 46 bytes; thunk: false
// body sha256: 750ae0eb0312c92cd1df9c1f99f12db2c41e733984c0b843fa7f5c1b8b0b707e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e72d0{
    "0x1802e72d0",
    "FUN_1802e72d0",
    R"F1802e72d0S(undefined FUN_1802e72d0())F1802e72d0S",
    R"B1802e72d0(// 0x1802e72d0  FUN_1802e72d0
// size=46 thunk=false
// signature: undefined FUN_1802e72d0()
// status: ok


void FUN_1802e72d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


)B1802e72d0",
    "750ae0eb0312c92cd1df9c1f99f12db2c41e733984c0b843fa7f5c1b8b0b707e",
    R"F1802e72d0C()F1802e72d0C",
    R"F1802e72d0D()F1802e72d0D",
    R"F1802e72d0T()F1802e72d0T",
    R"F1802e72d0F(10: if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
14: return;)F1802e72d0F",
    R"F1802e72d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e72d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e72d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e72d0", "FUN_1802e72d0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 750ae0eb0312c92cd1df9c1f99f12db2c41e733984c0b843fa7f5c1b8b0b707e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e72d0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e72d0;
}

// 0x1802e72fe FUN_1802e72fe
// source: re/dump/decompile/0x1802e72fe_FUN_1802e72fe.c
// size: 46 bytes; thunk: false
// body sha256: 0deba39d1034eb4a9aeb2fe06daa6289b3354eae26269f1ff354517e0af0e73b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e72fe{
    "0x1802e72fe",
    "FUN_1802e72fe",
    R"F1802e72feS(undefined FUN_1802e72fe())F1802e72feS",
    R"B1802e72fe(// 0x1802e72fe  FUN_1802e72fe
// size=46 thunk=false
// signature: undefined FUN_1802e72fe()
// status: ok


void FUN_1802e72fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);
  }
  return;
}


)B1802e72fe",
    "0deba39d1034eb4a9aeb2fe06daa6289b3354eae26269f1ff354517e0af0e73b",
    R"F1802e72feC()F1802e72feC",
    R"F1802e72feD()F1802e72feD",
    R"F1802e72feT()F1802e72feT",
    R"F1802e72feF(10: if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
14: return;)F1802e72feF",
    R"F1802e72feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e72feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e72fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e72fe", "FUN_1802e72fe");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0deba39d1034eb4a9aeb2fe06daa6289b3354eae26269f1ff354517e0af0e73b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e72fe(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e72fe;
}

// 0x1802e732c FUN_1802e732c
// source: re/dump/decompile/0x1802e732c_FUN_1802e732c.c
// size: 46 bytes; thunk: false
// body sha256: 6419ff0109ee1459c91145379b5a696a33e469ab591db7c7ad688a73ae19ed81
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e732c{
    "0x1802e732c",
    "FUN_1802e732c",
    R"F1802e732cS(undefined FUN_1802e732c())F1802e732cS",
    R"B1802e732c(// 0x1802e732c  FUN_1802e732c
// size=46 thunk=false
// signature: undefined FUN_1802e732c()
// status: ok


void FUN_1802e732c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);
  }
  return;
}


)B1802e732c",
    "6419ff0109ee1459c91145379b5a696a33e469ab591db7c7ad688a73ae19ed81",
    R"F1802e732cC()F1802e732cC",
    R"F1802e732cD()F1802e732cD",
    R"F1802e732cT()F1802e732cT",
    R"F1802e732cF(10: if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
14: return;)F1802e732cF",
    R"F1802e732cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e732cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e732c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e732c", "FUN_1802e732c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6419ff0109ee1459c91145379b5a696a33e469ab591db7c7ad688a73ae19ed81
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e732c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e732c;
}

// 0x1802e735a FUN_1802e735a
// source: re/dump/decompile/0x1802e735a_FUN_1802e735a.c
// size: 46 bytes; thunk: false
// body sha256: 5d9d837e81f55eadf7b7d94a7bbdfed3a4b3de60d4dc49f7d97a6fac7c4860a8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e735a{
    "0x1802e735a",
    "FUN_1802e735a",
    R"F1802e735aS(undefined FUN_1802e735a())F1802e735aS",
    R"B1802e735a(// 0x1802e735a  FUN_1802e735a
// size=46 thunk=false
// signature: undefined FUN_1802e735a()
// status: ok


void FUN_1802e735a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);
  }
  return;
}


)B1802e735a",
    "5d9d837e81f55eadf7b7d94a7bbdfed3a4b3de60d4dc49f7d97a6fac7c4860a8",
    R"F1802e735aC()F1802e735aC",
    R"F1802e735aD()F1802e735aD",
    R"F1802e735aT()F1802e735aT",
    R"F1802e735aF(10: if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
14: return;)F1802e735aF",
    R"F1802e735aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e735aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e735a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e735a", "FUN_1802e735a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5d9d837e81f55eadf7b7d94a7bbdfed3a4b3de60d4dc49f7d97a6fac7c4860a8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e735a(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e735a;
}

// 0x1802e7388 FUN_1802e7388
// source: re/dump/decompile/0x1802e7388_FUN_1802e7388.c
// size: 46 bytes; thunk: false
// body sha256: 25f064ba9e9b0bb7b1558973413845a626438c4af7538a67f9bcc6f0893de8e0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7388{
    "0x1802e7388",
    "FUN_1802e7388",
    R"F1802e7388S(undefined FUN_1802e7388())F1802e7388S",
    R"B1802e7388(// 0x1802e7388  FUN_1802e7388
// size=46 thunk=false
// signature: undefined FUN_1802e7388()
// status: ok


void FUN_1802e7388(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x368);
  }
  return;
}


)B1802e7388",
    "25f064ba9e9b0bb7b1558973413845a626438c4af7538a67f9bcc6f0893de8e0",
    R"F1802e7388C()F1802e7388C",
    R"F1802e7388D()F1802e7388D",
    R"F1802e7388T()F1802e7388T",
    R"F1802e7388F(10: if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
14: return;)F1802e7388F",
    R"F1802e7388U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7388U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7388() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7388", "FUN_1802e7388");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 25f064ba9e9b0bb7b1558973413845a626438c4af7538a67f9bcc6f0893de8e0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7388(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x368);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7388;
}

// 0x1802e73b6 FUN_1802e73b6
// source: re/dump/decompile/0x1802e73b6_FUN_1802e73b6.c
// size: 46 bytes; thunk: false
// body sha256: 7ceee68887d382afb7b4f23950d73e45aff2c5cbc3680e7bdc4e541f0beb9cad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e73b6{
    "0x1802e73b6",
    "FUN_1802e73b6",
    R"F1802e73b6S(undefined FUN_1802e73b6())F1802e73b6S",
    R"B1802e73b6(// 0x1802e73b6  FUN_1802e73b6
// size=46 thunk=false
// signature: undefined FUN_1802e73b6()
// status: ok


void FUN_1802e73b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


)B1802e73b6",
    "7ceee68887d382afb7b4f23950d73e45aff2c5cbc3680e7bdc4e541f0beb9cad",
    R"F1802e73b6C()F1802e73b6C",
    R"F1802e73b6D()F1802e73b6D",
    R"F1802e73b6T()F1802e73b6T",
    R"F1802e73b6F(10: if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
14: return;)F1802e73b6F",
    R"F1802e73b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e73b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e73b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e73b6", "FUN_1802e73b6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7ceee68887d382afb7b4f23950d73e45aff2c5cbc3680e7bdc4e541f0beb9cad
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e73b6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e73b6;
}

// 0x1802e73e4 FUN_1802e73e4
// source: re/dump/decompile/0x1802e73e4_FUN_1802e73e4.c
// size: 46 bytes; thunk: false
// body sha256: fd2f938834e291341b0c5fc46bfa2ecd58c147dc8f85540b63c7b22ba9e90ac4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e73e4{
    "0x1802e73e4",
    "FUN_1802e73e4",
    R"F1802e73e4S(undefined FUN_1802e73e4())F1802e73e4S",
    R"B1802e73e4(// 0x1802e73e4  FUN_1802e73e4
// size=46 thunk=false
// signature: undefined FUN_1802e73e4()
// status: ok


void FUN_1802e73e4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


)B1802e73e4",
    "fd2f938834e291341b0c5fc46bfa2ecd58c147dc8f85540b63c7b22ba9e90ac4",
    R"F1802e73e4C()F1802e73e4C",
    R"F1802e73e4D()F1802e73e4D",
    R"F1802e73e4T()F1802e73e4T",
    R"F1802e73e4F(10: if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
14: return;)F1802e73e4F",
    R"F1802e73e4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e73e4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e73e4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e73e4", "FUN_1802e73e4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fd2f938834e291341b0c5fc46bfa2ecd58c147dc8f85540b63c7b22ba9e90ac4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e73e4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e73e4;
}

// 0x1802e7412 FUN_1802e7412
// source: re/dump/decompile/0x1802e7412_FUN_1802e7412.c
// size: 46 bytes; thunk: false
// body sha256: 5e15bbecdfdde2bfb8f6b4ce39306725cd37bd32112176581389e543308d4b70
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7412{
    "0x1802e7412",
    "FUN_1802e7412",
    R"F1802e7412S(undefined FUN_1802e7412())F1802e7412S",
    R"B1802e7412(// 0x1802e7412  FUN_1802e7412
// size=46 thunk=false
// signature: undefined FUN_1802e7412()
// status: ok


void FUN_1802e7412(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x388);
  }
  return;
}


)B1802e7412",
    "5e15bbecdfdde2bfb8f6b4ce39306725cd37bd32112176581389e543308d4b70",
    R"F1802e7412C()F1802e7412C",
    R"F1802e7412D()F1802e7412D",
    R"F1802e7412T()F1802e7412T",
    R"F1802e7412F(10: if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
14: return;)F1802e7412F",
    R"F1802e7412U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7412U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7412() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7412", "FUN_1802e7412");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5e15bbecdfdde2bfb8f6b4ce39306725cd37bd32112176581389e543308d4b70
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7412(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x388);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7412;
}

// 0x1802e7440 FUN_1802e7440
// source: re/dump/decompile/0x1802e7440_FUN_1802e7440.c
// size: 46 bytes; thunk: false
// body sha256: 772d5539fa0f858c3ebeafb5483f442952db1be75642f29213e7ed33c5108545
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7440{
    "0x1802e7440",
    "FUN_1802e7440",
    R"F1802e7440S(undefined FUN_1802e7440())F1802e7440S",
    R"B1802e7440(// 0x1802e7440  FUN_1802e7440
// size=46 thunk=false
// signature: undefined FUN_1802e7440()
// status: ok


void FUN_1802e7440(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


)B1802e7440",
    "772d5539fa0f858c3ebeafb5483f442952db1be75642f29213e7ed33c5108545",
    R"F1802e7440C()F1802e7440C",
    R"F1802e7440D()F1802e7440D",
    R"F1802e7440T()F1802e7440T",
    R"F1802e7440F(10: if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0) {
14: return;)F1802e7440F",
    R"F1802e7440U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7440U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7440() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7440", "FUN_1802e7440");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 772d5539fa0f858c3ebeafb5483f442952db1be75642f29213e7ed33c5108545
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7440(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xf7ffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7440;
}

// 0x1802e746e FUN_1802e746e
// source: re/dump/decompile/0x1802e746e_FUN_1802e746e.c
// size: 46 bytes; thunk: false
// body sha256: caf9fc89a1bbd6caf60e8a50cb023b90021ef561f3c8c4d83c0f254e952001c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e746e{
    "0x1802e746e",
    "FUN_1802e746e",
    R"F1802e746eS(undefined FUN_1802e746e())F1802e746eS",
    R"B1802e746e(// 0x1802e746e  FUN_1802e746e
// size=46 thunk=false
// signature: undefined FUN_1802e746e()
// status: ok


void FUN_1802e746e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


)B1802e746e",
    "caf9fc89a1bbd6caf60e8a50cb023b90021ef561f3c8c4d83c0f254e952001c0",
    R"F1802e746eC()F1802e746eC",
    R"F1802e746eD()F1802e746eD",
    R"F1802e746eT()F1802e746eT",
    R"F1802e746eF(10: if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0) {
14: return;)F1802e746eF",
    R"F1802e746eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e746eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e746e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e746e", "FUN_1802e746e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: caf9fc89a1bbd6caf60e8a50cb023b90021ef561f3c8c4d83c0f254e952001c0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e746e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xefffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e746e;
}

// 0x1802e749c FUN_1802e749c
// source: re/dump/decompile/0x1802e749c_FUN_1802e749c.c
// size: 46 bytes; thunk: false
// body sha256: 940d084d3442cf1736ce543739ef0a0f240c97ed4717e7c625dbd32fbbf8d5fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e749c{
    "0x1802e749c",
    "FUN_1802e749c",
    R"F1802e749cS(undefined FUN_1802e749c())F1802e749cS",
    R"B1802e749c(// 0x1802e749c  FUN_1802e749c
// size=46 thunk=false
// signature: undefined FUN_1802e749c()
// status: ok


void FUN_1802e749c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3a8);
  }
  return;
}


)B1802e749c",
    "940d084d3442cf1736ce543739ef0a0f240c97ed4717e7c625dbd32fbbf8d5fc",
    R"F1802e749cC()F1802e749cC",
    R"F1802e749cD()F1802e749cD",
    R"F1802e749cT()F1802e749cT",
    R"F1802e749cF(10: if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
14: return;)F1802e749cF",
    R"F1802e749cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e749cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e749c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e749c", "FUN_1802e749c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 940d084d3442cf1736ce543739ef0a0f240c97ed4717e7c625dbd32fbbf8d5fc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e749c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e749c;
}

// 0x1802e74ca FUN_1802e74ca
// source: re/dump/decompile/0x1802e74ca_FUN_1802e74ca.c
// size: 46 bytes; thunk: false
// body sha256: ba288b61e5009b43df85617cd15c3f2e05698ab614283858cd7a127972af88a9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e74ca{
    "0x1802e74ca",
    "FUN_1802e74ca",
    R"F1802e74caS(undefined FUN_1802e74ca())F1802e74caS",
    R"B1802e74ca(// 0x1802e74ca  FUN_1802e74ca
// size=46 thunk=false
// signature: undefined FUN_1802e74ca()
// status: ok


void FUN_1802e74ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xbfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


)B1802e74ca",
    "ba288b61e5009b43df85617cd15c3f2e05698ab614283858cd7a127972af88a9",
    R"F1802e74caC()F1802e74caC",
    R"F1802e74caD()F1802e74caD",
    R"F1802e74caT()F1802e74caT",
    R"F1802e74caF(10: if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0) {
14: return;)F1802e74caF",
    R"F1802e74caU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e74caU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e74ca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e74ca", "FUN_1802e74ca");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ba288b61e5009b43df85617cd15c3f2e05698ab614283858cd7a127972af88a9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e74ca(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xbfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e74ca;
}

// 0x1802e74f8 FUN_1802e74f8
// source: re/dump/decompile/0x1802e74f8_FUN_1802e74f8.c
// size: 46 bytes; thunk: false
// body sha256: 1f213964d5b29b9cfa426607dd561c92ef791991d79e45a8d4a9319a0d79372e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e74f8{
    "0x1802e74f8",
    "FUN_1802e74f8",
    R"F1802e74f8S(undefined FUN_1802e74f8())F1802e74f8S",
    R"B1802e74f8(// 0x1802e74f8  FUN_1802e74f8
// size=46 thunk=false
// signature: undefined FUN_1802e74f8()
// status: ok


void FUN_1802e74f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


)B1802e74f8",
    "1f213964d5b29b9cfa426607dd561c92ef791991d79e45a8d4a9319a0d79372e",
    R"F1802e74f8C()F1802e74f8C",
    R"F1802e74f8D()F1802e74f8D",
    R"F1802e74f8T()F1802e74f8T",
    R"F1802e74f8F(10: if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0) {
14: return;)F1802e74f8F",
    R"F1802e74f8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e74f8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e74f8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e74f8", "FUN_1802e74f8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1f213964d5b29b9cfa426607dd561c92ef791991d79e45a8d4a9319a0d79372e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e74f8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0x7fffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e74f8;
}

// 0x1802e7526 FUN_1802e7526
// source: re/dump/decompile/0x1802e7526_FUN_1802e7526.c
// size: 41 bytes; thunk: false
// body sha256: 9b3dc73428400656dda229c2da555c887bbf0272fea5594b4d91234c4dd4d6fa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7526{
    "0x1802e7526",
    "FUN_1802e7526",
    R"F1802e7526S(undefined FUN_1802e7526())F1802e7526S",
    R"B1802e7526(// 0x1802e7526  FUN_1802e7526
// size=41 thunk=false
// signature: undefined FUN_1802e7526()
// status: ok


void FUN_1802e7526(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3c8);
  }
  return;
}


)B1802e7526",
    "9b3dc73428400656dda229c2da555c887bbf0272fea5594b4d91234c4dd4d6fa",
    R"F1802e7526C()F1802e7526C",
    R"F1802e7526D()F1802e7526D",
    R"F1802e7526T()F1802e7526T",
    R"F1802e7526F(10: if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
14: return;)F1802e7526F",
    R"F1802e7526U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7526U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7526() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7526", "FUN_1802e7526");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9b3dc73428400656dda229c2da555c887bbf0272fea5594b4d91234c4dd4d6fa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7526(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7526;
}

// 0x1802e754f FUN_1802e754f
// source: re/dump/decompile/0x1802e754f_FUN_1802e754f.c
// size: 41 bytes; thunk: false
// body sha256: 823ee1757fde9644d5d32c60a500b510cc528e4bc025fd53832107ca78de0bf6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e754f{
    "0x1802e754f",
    "FUN_1802e754f",
    R"F1802e754fS(undefined FUN_1802e754f())F1802e754fS",
    R"B1802e754f(// 0x1802e754f  FUN_1802e754f
// size=41 thunk=false
// signature: undefined FUN_1802e754f()
// status: ok


void FUN_1802e754f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


)B1802e754f",
    "823ee1757fde9644d5d32c60a500b510cc528e4bc025fd53832107ca78de0bf6",
    R"F1802e754fC()F1802e754fC",
    R"F1802e754fD()F1802e754fD",
    R"F1802e754fT()F1802e754fT",
    R"F1802e754fF(10: if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
14: return;)F1802e754fF",
    R"F1802e754fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e754fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e754f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e754f", "FUN_1802e754f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 823ee1757fde9644d5d32c60a500b510cc528e4bc025fd53832107ca78de0bf6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e754f(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e754f;
}

// 0x1802e7578 FUN_1802e7578
// source: re/dump/decompile/0x1802e7578_FUN_1802e7578.c
// size: 41 bytes; thunk: false
// body sha256: ae506c2fde9ba0eaca39647d4bf38c5c8a8f99d5ac69363adce8669c64055a3b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e7578{
    "0x1802e7578",
    "FUN_1802e7578",
    R"F1802e7578S(undefined FUN_1802e7578())F1802e7578S",
    R"B1802e7578(// 0x1802e7578  FUN_1802e7578
// size=41 thunk=false
// signature: undefined FUN_1802e7578()
// status: ok


void FUN_1802e7578(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


)B1802e7578",
    "ae506c2fde9ba0eaca39647d4bf38c5c8a8f99d5ac69363adce8669c64055a3b",
    R"F1802e7578C()F1802e7578C",
    R"F1802e7578D()F1802e7578D",
    R"F1802e7578T()F1802e7578T",
    R"F1802e7578F(10: if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
14: return;)F1802e7578F",
    R"F1802e7578U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e7578U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e7578() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e7578", "FUN_1802e7578");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ae506c2fde9ba0eaca39647d4bf38c5c8a8f99d5ac69363adce8669c64055a3b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e7578(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e7578;
}

}  // namespace sf::reconstructed
