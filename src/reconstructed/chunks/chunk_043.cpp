// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802dc688 FUN_1802dc688
// source: re/dump/decompile/0x1802dc688_FUN_1802dc688.c
// size: 41 bytes; thunk: false
// body sha256: 307840b6a040972d9a359a33a37c8c46de561e4178b7112f063da5340a2911ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc688{
    "0x1802dc688",
    "FUN_1802dc688",
    R"F1802dc688S(undefined FUN_1802dc688())F1802dc688S",
    R"B1802dc688(// 0x1802dc688  FUN_1802dc688
// size=41 thunk=false
// signature: undefined FUN_1802dc688()
// status: ok


void FUN_1802dc688(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


)B1802dc688",
    "307840b6a040972d9a359a33a37c8c46de561e4178b7112f063da5340a2911ba",
    R"F1802dc688C()F1802dc688C",
    R"F1802dc688D()F1802dc688D",
    R"F1802dc688T()F1802dc688T",
    R"F1802dc688F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802dc688F",
    R"F1802dc688U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc688U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc688() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc688", "FUN_1802dc688");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 307840b6a040972d9a359a33a37c8c46de561e4178b7112f063da5340a2911ba
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc688(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc688;
}

// 0x1802dc6b1 FUN_1802dc6b1
// source: re/dump/decompile/0x1802dc6b1_FUN_1802dc6b1.c
// size: 38 bytes; thunk: false
// body sha256: bf5e49d06e424523ba371b9b1272966e67f7d2ec282cf99a009d45822f8726aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc6b1{
    "0x1802dc6b1",
    "FUN_1802dc6b1",
    R"F1802dc6b1S(undefined FUN_1802dc6b1())F1802dc6b1S",
    R"B1802dc6b1(// 0x1802dc6b1  FUN_1802dc6b1
// size=38 thunk=false
// signature: undefined FUN_1802dc6b1()
// status: ok


void FUN_1802dc6b1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    FUN_180028f00(param_2 + 0x70);
  }
  return;
}


)B1802dc6b1",
    "bf5e49d06e424523ba371b9b1272966e67f7d2ec282cf99a009d45822f8726aa",
    R"F1802dc6b1C(FUN_180028f00)F1802dc6b1C",
    R"F1802dc6b1D()F1802dc6b1D",
    R"F1802dc6b1T()F1802dc6b1T",
    R"F1802dc6b1F(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802dc6b1F",
    R"F1802dc6b1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc6b1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc6b1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc6b1", "FUN_1802dc6b1");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180028f00", reinterpret_cast<const void*>(&image::FUN_180028f00));
    // body sha256: bf5e49d06e424523ba371b9b1272966e67f7d2ec282cf99a009d45822f8726aa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc6b1(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("FUN_180028f00(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc6b1;
}

// 0x1802dc6d7 FUN_1802dc6d7
// source: re/dump/decompile/0x1802dc6d7_FUN_1802dc6d7.c
// size: 46 bytes; thunk: false
// body sha256: 0e939f3e66e44f0a822a1fa45f707f3ba3fed372c3bad5099b47a99faf7ea158
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc6d7{
    "0x1802dc6d7",
    "FUN_1802dc6d7",
    R"F1802dc6d7S(undefined FUN_1802dc6d7())F1802dc6d7S",
    R"B1802dc6d7(// 0x1802dc6d7  FUN_1802dc6d7
// size=46 thunk=false
// signature: undefined FUN_1802dc6d7()
// status: ok


void FUN_1802dc6d7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    FUN_180028f00(param_2 + 0xd0);
  }
  return;
}


)B1802dc6d7",
    "0e939f3e66e44f0a822a1fa45f707f3ba3fed372c3bad5099b47a99faf7ea158",
    R"F1802dc6d7C(FUN_180028f00)F1802dc6d7C",
    R"F1802dc6d7D()F1802dc6d7D",
    R"F1802dc6d7T()F1802dc6d7T",
    R"F1802dc6d7F(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802dc6d7F",
    R"F1802dc6d7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc6d7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc6d7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc6d7", "FUN_1802dc6d7");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180028f00", reinterpret_cast<const void*>(&image::FUN_180028f00));
    // body sha256: 0e939f3e66e44f0a822a1fa45f707f3ba3fed372c3bad5099b47a99faf7ea158
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc6d7(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("FUN_180028f00(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc6d7;
}

// 0x1802dc73d FUN_1802dc73d
// source: re/dump/decompile/0x1802dc73d_FUN_1802dc73d.c
// size: 43 bytes; thunk: false
// body sha256: 6d482b246c1d705e03671c028ce6459021e456650d8d49aefb306e6f1b6ebd61
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc73d{
    "0x1802dc73d",
    "FUN_1802dc73d",
    R"F1802dc73dS(undefined FUN_1802dc73d())F1802dc73dS",
    R"B1802dc73d(// 0x1802dc73d  FUN_1802dc73d
// size=43 thunk=false
// signature: undefined FUN_1802dc73d()
// status: ok


void FUN_1802dc73d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021d530(param_2 + 0x70);
  }
  return;
}


)B1802dc73d",
    "6d482b246c1d705e03671c028ce6459021e456650d8d49aefb306e6f1b6ebd61",
    R"F1802dc73dC()F1802dc73dC",
    R"F1802dc73dD()F1802dc73dD",
    R"F1802dc73dT()F1802dc73dT",
    R"F1802dc73dF(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802dc73dF",
    R"F1802dc73dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc73dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc73d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc73d", "FUN_1802dc73d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6d482b246c1d705e03671c028ce6459021e456650d8d49aefb306e6f1b6ebd61
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc73d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021d530(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc73d;
}

// 0x1802dc768 FUN_1802dc768
// source: re/dump/decompile/0x1802dc768_FUN_1802dc768.c
// size: 46 bytes; thunk: false
// body sha256: 02de6dd0cb3aae5d88b3dd31c1da4e6f061ce7b760070e4cbda0bdb4ad02f415
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc768{
    "0x1802dc768",
    "FUN_1802dc768",
    R"F1802dc768S(undefined FUN_1802dc768())F1802dc768S",
    R"B1802dc768(// 0x1802dc768  FUN_1802dc768
// size=46 thunk=false
// signature: undefined FUN_1802dc768()
// status: ok


void FUN_1802dc768(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


)B1802dc768",
    "02de6dd0cb3aae5d88b3dd31c1da4e6f061ce7b760070e4cbda0bdb4ad02f415",
    R"F1802dc768C()F1802dc768C",
    R"F1802dc768D()F1802dc768D",
    R"F1802dc768T()F1802dc768T",
    R"F1802dc768F(10: if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
14: return;)F1802dc768F",
    R"F1802dc768U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc768U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc768() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc768", "FUN_1802dc768");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 02de6dd0cb3aae5d88b3dd31c1da4e6f061ce7b760070e4cbda0bdb4ad02f415
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc768(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc768;
}

// 0x1802dc796 FUN_1802dc796
// source: re/dump/decompile/0x1802dc796_FUN_1802dc796.c
// size: 43 bytes; thunk: false
// body sha256: bca1d133eaf2822442992855b2a2d4683de115d944dd2bfb02185b839d7ceaed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc796{
    "0x1802dc796",
    "FUN_1802dc796",
    R"F1802dc796S(undefined FUN_1802dc796())F1802dc796S",
    R"B1802dc796(// 0x1802dc796  FUN_1802dc796
// size=43 thunk=false
// signature: undefined FUN_1802dc796()
// status: ok


void FUN_1802dc796(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    FUN_180028f00(param_2 + 0x70);
  }
  return;
}


)B1802dc796",
    "bca1d133eaf2822442992855b2a2d4683de115d944dd2bfb02185b839d7ceaed",
    R"F1802dc796C(FUN_180028f00)F1802dc796C",
    R"F1802dc796D()F1802dc796D",
    R"F1802dc796T()F1802dc796T",
    R"F1802dc796F(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802dc796F",
    R"F1802dc796U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc796U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc796() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc796", "FUN_1802dc796");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180028f00", reinterpret_cast<const void*>(&image::FUN_180028f00));
    // body sha256: bca1d133eaf2822442992855b2a2d4683de115d944dd2bfb02185b839d7ceaed
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc796(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("FUN_180028f00(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc796;
}

// 0x1802dc7c1 FUN_1802dc7c1
// source: re/dump/decompile/0x1802dc7c1_FUN_1802dc7c1.c
// size: 46 bytes; thunk: false
// body sha256: 3f572b15d2ff6c9c04ba8338d726586c32de7acde9aa6e11bd55f0b29242ee24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc7c1{
    "0x1802dc7c1",
    "FUN_1802dc7c1",
    R"F1802dc7c1S(undefined FUN_1802dc7c1())F1802dc7c1S",
    R"B1802dc7c1(// 0x1802dc7c1  FUN_1802dc7c1
// size=46 thunk=false
// signature: undefined FUN_1802dc7c1()
// status: ok


void FUN_1802dc7c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    FUN_180028f00(param_2 + 0xd0);
  }
  return;
}


)B1802dc7c1",
    "3f572b15d2ff6c9c04ba8338d726586c32de7acde9aa6e11bd55f0b29242ee24",
    R"F1802dc7c1C(FUN_180028f00)F1802dc7c1C",
    R"F1802dc7c1D()F1802dc7c1D",
    R"F1802dc7c1T()F1802dc7c1T",
    R"F1802dc7c1F(10: if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
14: return;)F1802dc7c1F",
    R"F1802dc7c1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc7c1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc7c1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc7c1", "FUN_1802dc7c1");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180028f00", reinterpret_cast<const void*>(&image::FUN_180028f00));
    // body sha256: 3f572b15d2ff6c9c04ba8338d726586c32de7acde9aa6e11bd55f0b29242ee24
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc7c1(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;");
                trace.statement("FUN_180028f00(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc7c1;
}

// 0x1802dc8d7 FUN_1802dc8d7
// source: re/dump/decompile/0x1802dc8d7_FUN_1802dc8d7.c
// size: 43 bytes; thunk: false
// body sha256: f9b6115ffce243139c16d761f55206d5785bc25f9d4c3660347778de63e76e9d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc8d7{
    "0x1802dc8d7",
    "FUN_1802dc8d7",
    R"F1802dc8d7S(undefined FUN_1802dc8d7())F1802dc8d7S",
    R"B1802dc8d7(// 0x1802dc8d7  FUN_1802dc8d7
// size=43 thunk=false
// signature: undefined FUN_1802dc8d7()
// status: ok


void FUN_1802dc8d7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


)B1802dc8d7",
    "f9b6115ffce243139c16d761f55206d5785bc25f9d4c3660347778de63e76e9d",
    R"F1802dc8d7C()F1802dc8d7C",
    R"F1802dc8d7D()F1802dc8d7D",
    R"F1802dc8d7T()F1802dc8d7T",
    R"F1802dc8d7F(10: if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
14: return;)F1802dc8d7F",
    R"F1802dc8d7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc8d7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc8d7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc8d7", "FUN_1802dc8d7");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f9b6115ffce243139c16d761f55206d5785bc25f9d4c3660347778de63e76e9d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc8d7(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dc8d7;
}

// 0x1802dc9e0 FUN_1802dc9e0
// source: re/dump/decompile/0x1802dc9e0_FUN_1802dc9e0.c
// size: 87 bytes; thunk: false
// body sha256: aa7c6183e4c109ba415f8ff839621b8906bb923e34953b85e683b52374077fdf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dc9e0{
    "0x1802dc9e0",
    "FUN_1802dc9e0",
    R"F1802dc9e0S(undefined FUN_1802dc9e0())F1802dc9e0S",
    R"B1802dc9e0(// 0x1802dc9e0  FUN_1802dc9e0
// size=87 thunk=false
// signature: undefined FUN_1802dc9e0()
// status: ok


void FUN_1802dc9e0(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2128)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2128) & 0xfffffffe;
  return;
}


)B1802dc9e0",
    "aa7c6183e4c109ba415f8ff839621b8906bb923e34953b85e683b52374077fdf",
    R"F1802dc9e0C()F1802dc9e0C",
    R"F1802dc9e0D()F1802dc9e0D",
    R"F1802dc9e0T()F1802dc9e0T",
    R"F1802dc9e0F(13: return;)F1802dc9e0F",
    R"F1802dc9e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dc9e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dc9e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dc9e0", "FUN_1802dc9e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: aa7c6183e4c109ba415f8ff839621b8906bb923e34953b85e683b52374077fdf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dc9e0(void)");
        {
            trace.statement("*(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2128)");
            trace.statement("= *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +");
            trace.statement("0x2128) & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802dc9e0;
}

// 0x1802dd2c0 FUN_1802dd2c0
// source: re/dump/decompile/0x1802dd2c0_FUN_1802dd2c0.c
// size: 41 bytes; thunk: false
// body sha256: 921fd80298506f5787a49ac21c5afd34c90b56db21d0b01ce2a269b01619e262
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd2c0{
    "0x1802dd2c0",
    "FUN_1802dd2c0",
    R"F1802dd2c0S(undefined FUN_1802dd2c0())F1802dd2c0S",
    R"B1802dd2c0(// 0x1802dd2c0  FUN_1802dd2c0
// size=41 thunk=false
// signature: undefined FUN_1802dd2c0()
// status: ok


void FUN_1802dd2c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x118);
  }
  return;
}


)B1802dd2c0",
    "921fd80298506f5787a49ac21c5afd34c90b56db21d0b01ce2a269b01619e262",
    R"F1802dd2c0C()F1802dd2c0C",
    R"F1802dd2c0D()F1802dd2c0D",
    R"F1802dd2c0T()F1802dd2c0T",
    R"F1802dd2c0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802dd2c0F",
    R"F1802dd2c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd2c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd2c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd2c0", "FUN_1802dd2c0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 921fd80298506f5787a49ac21c5afd34c90b56db21d0b01ce2a269b01619e262
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd2c0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x118);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd2c0;
}

// 0x1802dd2e9 FUN_1802dd2e9
// source: re/dump/decompile/0x1802dd2e9_FUN_1802dd2e9.c
// size: 41 bytes; thunk: false
// body sha256: c18aef829b17be7c103bdb04fa8a834b798d749a8780c096d3a92a703cc70557
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd2e9{
    "0x1802dd2e9",
    "FUN_1802dd2e9",
    R"F1802dd2e9S(undefined FUN_1802dd2e9())F1802dd2e9S",
    R"B1802dd2e9(// 0x1802dd2e9  FUN_1802dd2e9
// size=41 thunk=false
// signature: undefined FUN_1802dd2e9()
// status: ok


void FUN_1802dd2e9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf8);
  }
  return;
}


)B1802dd2e9",
    "c18aef829b17be7c103bdb04fa8a834b798d749a8780c096d3a92a703cc70557",
    R"F1802dd2e9C()F1802dd2e9C",
    R"F1802dd2e9D()F1802dd2e9D",
    R"F1802dd2e9T()F1802dd2e9T",
    R"F1802dd2e9F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802dd2e9F",
    R"F1802dd2e9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd2e9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd2e9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd2e9", "FUN_1802dd2e9");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c18aef829b17be7c103bdb04fa8a834b798d749a8780c096d3a92a703cc70557
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd2e9(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd2e9;
}

// 0x1802dd312 FUN_1802dd312
// source: re/dump/decompile/0x1802dd312_FUN_1802dd312.c
// size: 41 bytes; thunk: false
// body sha256: 47b5cc9af9ba9b18ad3584f586605e1eaab5f0c32cf8edf2777671870ee5d575
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd312{
    "0x1802dd312",
    "FUN_1802dd312",
    R"F1802dd312S(undefined FUN_1802dd312())F1802dd312S",
    R"B1802dd312(// 0x1802dd312  FUN_1802dd312
// size=41 thunk=false
// signature: undefined FUN_1802dd312()
// status: ok


void FUN_1802dd312(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd8);
  }
  return;
}


)B1802dd312",
    "47b5cc9af9ba9b18ad3584f586605e1eaab5f0c32cf8edf2777671870ee5d575",
    R"F1802dd312C()F1802dd312C",
    R"F1802dd312D()F1802dd312D",
    R"F1802dd312T()F1802dd312T",
    R"F1802dd312F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802dd312F",
    R"F1802dd312U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd312U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd312() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd312", "FUN_1802dd312");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 47b5cc9af9ba9b18ad3584f586605e1eaab5f0c32cf8edf2777671870ee5d575
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd312(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd312;
}

// 0x1802dd408 FUN_1802dd408
// source: re/dump/decompile/0x1802dd408_FUN_1802dd408.c
// size: 38 bytes; thunk: false
// body sha256: 07b56bca54220a2006af3629c91d302137e1ee7e4bff3566eaee22a6231ea18e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd408{
    "0x1802dd408",
    "FUN_1802dd408",
    R"F1802dd408S(undefined FUN_1802dd408())F1802dd408S",
    R"B1802dd408(// 0x1802dd408  FUN_1802dd408
// size=38 thunk=false
// signature: undefined FUN_1802dd408()
// status: ok


void FUN_1802dd408(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802dd408",
    "07b56bca54220a2006af3629c91d302137e1ee7e4bff3566eaee22a6231ea18e",
    R"F1802dd408C()F1802dd408C",
    R"F1802dd408D()F1802dd408D",
    R"F1802dd408T()F1802dd408T",
    R"F1802dd408F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dd408F",
    R"F1802dd408U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd408U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd408() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd408", "FUN_1802dd408");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 07b56bca54220a2006af3629c91d302137e1ee7e4bff3566eaee22a6231ea18e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd408(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd408;
}

// 0x1802dd448 FUN_1802dd448
// source: re/dump/decompile/0x1802dd448_FUN_1802dd448.c
// size: 38 bytes; thunk: false
// body sha256: 71bf87433fc080468bcb44d24f8975756e2716b5d46c8fa943359bf9712fa352
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd448{
    "0x1802dd448",
    "FUN_1802dd448",
    R"F1802dd448S(undefined FUN_1802dd448())F1802dd448S",
    R"B1802dd448(// 0x1802dd448  FUN_1802dd448
// size=38 thunk=false
// signature: undefined FUN_1802dd448()
// status: ok


void FUN_1802dd448(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802dd448",
    "71bf87433fc080468bcb44d24f8975756e2716b5d46c8fa943359bf9712fa352",
    R"F1802dd448C()F1802dd448C",
    R"F1802dd448D()F1802dd448D",
    R"F1802dd448T()F1802dd448T",
    R"F1802dd448F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dd448F",
    R"F1802dd448U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd448U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd448() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd448", "FUN_1802dd448");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 71bf87433fc080468bcb44d24f8975756e2716b5d46c8fa943359bf9712fa352
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd448(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd448;
}

// 0x1802dd470 FUN_1802dd470
// source: re/dump/decompile/0x1802dd470_FUN_1802dd470.c
// size: 87 bytes; thunk: false
// body sha256: 7bff7385af394e5d7565b95fa1c92d57d795651ce73b79d87eb28e199d4564d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd470{
    "0x1802dd470",
    "FUN_1802dd470",
    R"F1802dd470S(undefined FUN_1802dd470())F1802dd470S",
    R"B1802dd470(// 0x1802dd470  FUN_1802dd470
// size=87 thunk=false
// signature: undefined FUN_1802dd470()
// status: ok


void FUN_1802dd470(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2118)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2118) & 0xfffffffe;
  return;
}


)B1802dd470",
    "7bff7385af394e5d7565b95fa1c92d57d795651ce73b79d87eb28e199d4564d7",
    R"F1802dd470C()F1802dd470C",
    R"F1802dd470D()F1802dd470D",
    R"F1802dd470T()F1802dd470T",
    R"F1802dd470F(13: return;)F1802dd470F",
    R"F1802dd470U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd470U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd470() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd470", "FUN_1802dd470");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7bff7385af394e5d7565b95fa1c92d57d795651ce73b79d87eb28e199d4564d7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd470(void)");
        {
            trace.statement("*(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2118)");
            trace.statement("= *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +");
            trace.statement("0x2118) & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802dd470;
}

// 0x1802dd4c7 FUN_1802dd4c7
// source: re/dump/decompile/0x1802dd4c7_FUN_1802dd4c7.c
// size: 22 bytes; thunk: false
// body sha256: 2b7d58c7517b921b88cc7c83e9f713caf1b9eaca1d1ed3fbd0fd5a3762671c9b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd4c7{
    "0x1802dd4c7",
    "FUN_1802dd4c7",
    R"F1802dd4c7S(undefined FUN_1802dd4c7())F1802dd4c7S",
    R"B1802dd4c7(// 0x1802dd4c7  FUN_1802dd4c7
// size=22 thunk=false
// signature: undefined FUN_1802dd4c7()
// status: ok


void FUN_1802dd4c7(void)

{
  DAT_1805c7b00 = DAT_1805c7b00 & 0xfffffffe;
  return;
}


)B1802dd4c7",
    "2b7d58c7517b921b88cc7c83e9f713caf1b9eaca1d1ed3fbd0fd5a3762671c9b",
    R"F1802dd4c7C()F1802dd4c7C",
    R"F1802dd4c7D(DAT_1805c7b00)F1802dd4c7D",
    R"F1802dd4c7T()F1802dd4c7T",
    R"F1802dd4c7F(11: return;)F1802dd4c7F",
    R"F1802dd4c7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7b00.)F1802dd4c7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd4c7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd4c7", "FUN_1802dd4c7");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7b00.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7b00", static_cast<const void*>(&image::DAT_1805c7b00));
    // body sha256: 2b7d58c7517b921b88cc7c83e9f713caf1b9eaca1d1ed3fbd0fd5a3762671c9b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd4c7(void)");
        {
            trace.statement("DAT_1805c7b00 = DAT_1805c7b00 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802dd4c7;
}

// 0x1802dd4f5 FUN_1802dd4f5
// source: re/dump/decompile/0x1802dd4f5_FUN_1802dd4f5.c
// size: 41 bytes; thunk: false
// body sha256: 493d822fa8dad3b95ab0039e606a6c983eb8c6aa76d9ac4b2c8da366820d5bcb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd4f5{
    "0x1802dd4f5",
    "FUN_1802dd4f5",
    R"F1802dd4f5S(undefined FUN_1802dd4f5())F1802dd4f5S",
    R"B1802dd4f5(// 0x1802dd4f5  FUN_1802dd4f5
// size=41 thunk=false
// signature: undefined FUN_1802dd4f5()
// status: ok


void FUN_1802dd4f5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


)B1802dd4f5",
    "493d822fa8dad3b95ab0039e606a6c983eb8c6aa76d9ac4b2c8da366820d5bcb",
    R"F1802dd4f5C()F1802dd4f5C",
    R"F1802dd4f5D()F1802dd4f5D",
    R"F1802dd4f5T()F1802dd4f5T",
    R"F1802dd4f5F(10: if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
14: return;)F1802dd4f5F",
    R"F1802dd4f5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd4f5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd4f5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd4f5", "FUN_1802dd4f5");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 493d822fa8dad3b95ab0039e606a6c983eb8c6aa76d9ac4b2c8da366820d5bcb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd4f5(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x24) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd4f5;
}

// 0x1802dd51e FUN_1802dd51e
// source: re/dump/decompile/0x1802dd51e_FUN_1802dd51e.c
// size: 41 bytes; thunk: false
// body sha256: 1b04d359b58f88911553190bed345310402aaaeef4f3957bc7e65b4ed9ae0c01
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd51e{
    "0x1802dd51e",
    "FUN_1802dd51e",
    R"F1802dd51eS(undefined FUN_1802dd51e())F1802dd51eS",
    R"B1802dd51e(// 0x1802dd51e  FUN_1802dd51e
// size=41 thunk=false
// signature: undefined FUN_1802dd51e()
// status: ok


void FUN_1802dd51e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


)B1802dd51e",
    "1b04d359b58f88911553190bed345310402aaaeef4f3957bc7e65b4ed9ae0c01",
    R"F1802dd51eC()F1802dd51eC",
    R"F1802dd51eD()F1802dd51eD",
    R"F1802dd51eT()F1802dd51eT",
    R"F1802dd51eF(10: if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
14: return;)F1802dd51eF",
    R"F1802dd51eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd51eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd51e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd51e", "FUN_1802dd51e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1b04d359b58f88911553190bed345310402aaaeef4f3957bc7e65b4ed9ae0c01
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd51e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x24) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd51e;
}

// 0x1802dd553 FUN_1802dd553
// source: re/dump/decompile/0x1802dd553_FUN_1802dd553.c
// size: 22 bytes; thunk: false
// body sha256: 63904265f23ce79e7b9513a5b0a00f5d0e92af36101d3b76632e6496796feef4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd553{
    "0x1802dd553",
    "FUN_1802dd553",
    R"F1802dd553S(undefined FUN_1802dd553())F1802dd553S",
    R"B1802dd553(// 0x1802dd553  FUN_1802dd553
// size=22 thunk=false
// signature: undefined FUN_1802dd553()
// status: ok


void FUN_1802dd553(void)

{
  DAT_1805c7b00 = DAT_1805c7b00 & 0xfffffffd;
  return;
}


)B1802dd553",
    "63904265f23ce79e7b9513a5b0a00f5d0e92af36101d3b76632e6496796feef4",
    R"F1802dd553C()F1802dd553C",
    R"F1802dd553D(DAT_1805c7b00)F1802dd553D",
    R"F1802dd553T()F1802dd553T",
    R"F1802dd553F(11: return;)F1802dd553F",
    R"F1802dd553U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7b00.)F1802dd553U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd553() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd553", "FUN_1802dd553");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7b00.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7b00", static_cast<const void*>(&image::DAT_1805c7b00));
    // body sha256: 63904265f23ce79e7b9513a5b0a00f5d0e92af36101d3b76632e6496796feef4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd553(void)");
        {
            trace.statement("DAT_1805c7b00 = DAT_1805c7b00 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802dd553;
}

// 0x1802dd5ac FUN_1802dd5ac
// source: re/dump/decompile/0x1802dd5ac_FUN_1802dd5ac.c
// size: 87 bytes; thunk: false
// body sha256: 353d30e4f156015f1e2dc341b2bfc20d4ba985f23bf46ae98ba37ad9aa611630
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd5ac{
    "0x1802dd5ac",
    "FUN_1802dd5ac",
    R"F1802dd5acS(undefined FUN_1802dd5ac())F1802dd5acS",
    R"B1802dd5ac(// 0x1802dd5ac  FUN_1802dd5ac
// size=87 thunk=false
// signature: undefined FUN_1802dd5ac()
// status: ok


void FUN_1802dd5ac(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2120)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2120) & 0xfffffffe;
  return;
}


)B1802dd5ac",
    "353d30e4f156015f1e2dc341b2bfc20d4ba985f23bf46ae98ba37ad9aa611630",
    R"F1802dd5acC()F1802dd5acC",
    R"F1802dd5acD()F1802dd5acD",
    R"F1802dd5acT()F1802dd5acT",
    R"F1802dd5acF(13: return;)F1802dd5acF",
    R"F1802dd5acU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd5acU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd5ac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd5ac", "FUN_1802dd5ac");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 353d30e4f156015f1e2dc341b2bfc20d4ba985f23bf46ae98ba37ad9aa611630
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd5ac(void)");
        {
            trace.statement("*(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2120)");
            trace.statement("= *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +");
            trace.statement("0x2120) & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802dd5ac;
}

// 0x1802dd61c FUN_1802dd61c
// source: re/dump/decompile/0x1802dd61c_FUN_1802dd61c.c
// size: 87 bytes; thunk: false
// body sha256: 682241e2d9d33d1e8ba3d76db9315f0be55f8afe01a22f0f1f46fcea273ec225
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd61c{
    "0x1802dd61c",
    "FUN_1802dd61c",
    R"F1802dd61cS(undefined FUN_1802dd61c())F1802dd61cS",
    R"B1802dd61c(// 0x1802dd61c  FUN_1802dd61c
// size=87 thunk=false
// signature: undefined FUN_1802dd61c()
// status: ok


void FUN_1802dd61c(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1090)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x1090) & 0xfffffffe;
  return;
}


)B1802dd61c",
    "682241e2d9d33d1e8ba3d76db9315f0be55f8afe01a22f0f1f46fcea273ec225",
    R"F1802dd61cC()F1802dd61cC",
    R"F1802dd61cD()F1802dd61cD",
    R"F1802dd61cT()F1802dd61cT",
    R"F1802dd61cF(13: return;)F1802dd61cF",
    R"F1802dd61cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd61cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd61c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd61c", "FUN_1802dd61c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 682241e2d9d33d1e8ba3d76db9315f0be55f8afe01a22f0f1f46fcea273ec225
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd61c(void)");
        {
            trace.statement("*(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1090)");
            trace.statement("= *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +");
            trace.statement("0x1090) & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802dd61c;
}

// 0x1802dd730 FUN_1802dd730
// source: re/dump/decompile/0x1802dd730_FUN_1802dd730.c
// size: 22 bytes; thunk: false
// body sha256: 20124a715590aa855b8a793904a2b3fe86599bf0ee0b048a78bb06cab0de506b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd730{
    "0x1802dd730",
    "FUN_1802dd730",
    R"F1802dd730S(undefined FUN_1802dd730())F1802dd730S",
    R"B1802dd730(// 0x1802dd730  FUN_1802dd730
// size=22 thunk=false
// signature: undefined FUN_1802dd730()
// status: ok


void FUN_1802dd730(void)

{
  DAT_1805c51e0 = DAT_1805c51e0 & 0xfffffffe;
  return;
}


)B1802dd730",
    "20124a715590aa855b8a793904a2b3fe86599bf0ee0b048a78bb06cab0de506b",
    R"F1802dd730C()F1802dd730C",
    R"F1802dd730D(DAT_1805c51e0)F1802dd730D",
    R"F1802dd730T()F1802dd730T",
    R"F1802dd730F(11: return;)F1802dd730F",
    R"F1802dd730U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c51e0.)F1802dd730U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd730() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd730", "FUN_1802dd730");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c51e0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c51e0", static_cast<const void*>(&image::DAT_1805c51e0));
    // body sha256: 20124a715590aa855b8a793904a2b3fe86599bf0ee0b048a78bb06cab0de506b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd730(void)");
        {
            trace.statement("DAT_1805c51e0 = DAT_1805c51e0 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802dd730;
}

// 0x1802dd7f0 FUN_1802dd7f0
// source: re/dump/decompile/0x1802dd7f0_FUN_1802dd7f0.c
// size: 29 bytes; thunk: false
// body sha256: 81da132b8a27578dc7d511b3de3605515f362fbd26ae5b23ed1771f4a85a9d14
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd7f0{
    "0x1802dd7f0",
    "FUN_1802dd7f0",
    R"F1802dd7f0S(undefined FUN_1802dd7f0())F1802dd7f0S",
    R"B1802dd7f0(// 0x1802dd7f0  FUN_1802dd7f0
// size=29 thunk=false
// signature: undefined FUN_1802dd7f0()
// status: ok


undefined8 FUN_1802dd7f0(void)

{
  return 0;
}


)B1802dd7f0",
    "81da132b8a27578dc7d511b3de3605515f362fbd26ae5b23ed1771f4a85a9d14",
    R"F1802dd7f0C()F1802dd7f0C",
    R"F1802dd7f0D()F1802dd7f0D",
    R"F1802dd7f0T()F1802dd7f0T",
    R"F1802dd7f0F(10: return 0;)F1802dd7f0F",
    R"F1802dd7f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd7f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd7f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd7f0", "FUN_1802dd7f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 81da132b8a27578dc7d511b3de3605515f362fbd26ae5b23ed1771f4a85a9d14
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dd7f0(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dd7f0;
}

// 0x1802dd890 FUN_1802dd890
// source: re/dump/decompile/0x1802dd890_FUN_1802dd890.c
// size: 38 bytes; thunk: false
// body sha256: e4ecd51d50a5b911641633947378f9bc8b3e27a0f60011bb50ff39a2c35396ee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd890{
    "0x1802dd890",
    "FUN_1802dd890",
    R"F1802dd890S(undefined FUN_1802dd890())F1802dd890S",
    R"B1802dd890(// 0x1802dd890  FUN_1802dd890
// size=38 thunk=false
// signature: undefined FUN_1802dd890()
// status: ok


void FUN_1802dd890(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802dd890",
    "e4ecd51d50a5b911641633947378f9bc8b3e27a0f60011bb50ff39a2c35396ee",
    R"F1802dd890C()F1802dd890C",
    R"F1802dd890D()F1802dd890D",
    R"F1802dd890T()F1802dd890T",
    R"F1802dd890F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dd890F",
    R"F1802dd890U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd890() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd890", "FUN_1802dd890");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e4ecd51d50a5b911641633947378f9bc8b3e27a0f60011bb50ff39a2c35396ee
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd890(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd890;
}

// 0x1802dd8e0 FUN_1802dd8e0
// source: re/dump/decompile/0x1802dd8e0_FUN_1802dd8e0.c
// size: 22 bytes; thunk: false
// body sha256: 75365e4143f7534d4eef4fc104bfd57a2e56ac2d0b14ec14579783e1a77520a9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd8e0{
    "0x1802dd8e0",
    "FUN_1802dd8e0",
    R"F1802dd8e0S(undefined FUN_1802dd8e0())F1802dd8e0S",
    R"B1802dd8e0(// 0x1802dd8e0  FUN_1802dd8e0
// size=22 thunk=false
// signature: undefined FUN_1802dd8e0()
// status: ok


void FUN_1802dd8e0(void)

{
  DAT_18042cd68 = DAT_18042cd68 & 0xfffffffe;
  return;
}


)B1802dd8e0",
    "75365e4143f7534d4eef4fc104bfd57a2e56ac2d0b14ec14579783e1a77520a9",
    R"F1802dd8e0C()F1802dd8e0C",
    R"F1802dd8e0D(DAT_18042cd68)F1802dd8e0D",
    R"F1802dd8e0T()F1802dd8e0T",
    R"F1802dd8e0F(11: return;)F1802dd8e0F",
    R"F1802dd8e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042cd68.)F1802dd8e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd8e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd8e0", "FUN_1802dd8e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042cd68.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042cd68", static_cast<const void*>(&image::DAT_18042cd68));
    // body sha256: 75365e4143f7534d4eef4fc104bfd57a2e56ac2d0b14ec14579783e1a77520a9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd8e0(void)");
        {
            trace.statement("DAT_18042cd68 = DAT_18042cd68 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802dd8e0;
}

// 0x1802dd91a FUN_1802dd91a
// source: re/dump/decompile/0x1802dd91a_FUN_1802dd91a.c
// size: 29 bytes; thunk: false
// body sha256: 91cc49ab11872892962ab44809b9190a193818c98be496b4abc1475250306a3a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd91a{
    "0x1802dd91a",
    "FUN_1802dd91a",
    R"F1802dd91aS(undefined FUN_1802dd91a())F1802dd91aS",
    R"B1802dd91a(// 0x1802dd91a  FUN_1802dd91a
// size=29 thunk=false
// signature: undefined FUN_1802dd91a()
// status: ok


undefined8 FUN_1802dd91a(void)

{
  return 0;
}


)B1802dd91a",
    "91cc49ab11872892962ab44809b9190a193818c98be496b4abc1475250306a3a",
    R"F1802dd91aC()F1802dd91aC",
    R"F1802dd91aD()F1802dd91aD",
    R"F1802dd91aT()F1802dd91aT",
    R"F1802dd91aF(10: return 0;)F1802dd91aF",
    R"F1802dd91aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd91aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd91a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd91a", "FUN_1802dd91a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 91cc49ab11872892962ab44809b9190a193818c98be496b4abc1475250306a3a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dd91a(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dd91a;
}

// 0x1802dd95c FUN_1802dd95c
// source: re/dump/decompile/0x1802dd95c_FUN_1802dd95c.c
// size: 38 bytes; thunk: false
// body sha256: 54e46de51f0fc3ae7d5a8dd79bd615d5d888814e2eb9af742e0105ae4fa51c1d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd95c{
    "0x1802dd95c",
    "FUN_1802dd95c",
    R"F1802dd95cS(undefined FUN_1802dd95c())F1802dd95cS",
    R"B1802dd95c(// 0x1802dd95c  FUN_1802dd95c
// size=38 thunk=false
// signature: undefined FUN_1802dd95c()
// status: ok


void FUN_1802dd95c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802dd95c",
    "54e46de51f0fc3ae7d5a8dd79bd615d5d888814e2eb9af742e0105ae4fa51c1d",
    R"F1802dd95cC()F1802dd95cC",
    R"F1802dd95cD()F1802dd95cD",
    R"F1802dd95cT()F1802dd95cT",
    R"F1802dd95cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dd95cF",
    R"F1802dd95cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd95cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd95c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd95c", "FUN_1802dd95c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 54e46de51f0fc3ae7d5a8dd79bd615d5d888814e2eb9af742e0105ae4fa51c1d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd95c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd95c;
}

// 0x1802dd982 FUN_1802dd982
// source: re/dump/decompile/0x1802dd982_FUN_1802dd982.c
// size: 38 bytes; thunk: false
// body sha256: 3e1bfd49bf196bb6afc4ca70932237b4bdc34be9a3c1675183ede82064e1ac94
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd982{
    "0x1802dd982",
    "FUN_1802dd982",
    R"F1802dd982S(undefined FUN_1802dd982())F1802dd982S",
    R"B1802dd982(// 0x1802dd982  FUN_1802dd982
// size=38 thunk=false
// signature: undefined FUN_1802dd982()
// status: ok


void FUN_1802dd982(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802dd982",
    "3e1bfd49bf196bb6afc4ca70932237b4bdc34be9a3c1675183ede82064e1ac94",
    R"F1802dd982C()F1802dd982C",
    R"F1802dd982D()F1802dd982D",
    R"F1802dd982T()F1802dd982T",
    R"F1802dd982F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802dd982F",
    R"F1802dd982U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd982U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd982() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd982", "FUN_1802dd982");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3e1bfd49bf196bb6afc4ca70932237b4bdc34be9a3c1675183ede82064e1ac94
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dd982(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dd982;
}

// 0x1802dd9d8 FUN_1802dd9d8
// source: re/dump/decompile/0x1802dd9d8_FUN_1802dd9d8.c
// size: 29 bytes; thunk: false
// body sha256: 2dcf99ebcd95776b5ee3d717c973899b461b2b81158a5966b55440c229e22ebb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dd9d8{
    "0x1802dd9d8",
    "FUN_1802dd9d8",
    R"F1802dd9d8S(undefined FUN_1802dd9d8())F1802dd9d8S",
    R"B1802dd9d8(// 0x1802dd9d8  FUN_1802dd9d8
// size=29 thunk=false
// signature: undefined FUN_1802dd9d8()
// status: ok


undefined8 FUN_1802dd9d8(void)

{
  return 0;
}


)B1802dd9d8",
    "2dcf99ebcd95776b5ee3d717c973899b461b2b81158a5966b55440c229e22ebb",
    R"F1802dd9d8C()F1802dd9d8C",
    R"F1802dd9d8D()F1802dd9d8D",
    R"F1802dd9d8T()F1802dd9d8T",
    R"F1802dd9d8F(10: return 0;)F1802dd9d8F",
    R"F1802dd9d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dd9d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dd9d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dd9d8", "FUN_1802dd9d8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2dcf99ebcd95776b5ee3d717c973899b461b2b81158a5966b55440c229e22ebb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dd9d8(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dd9d8;
}

// 0x1802dda5c FUN_1802dda5c
// source: re/dump/decompile/0x1802dda5c_FUN_1802dda5c.c
// size: 36 bytes; thunk: false
// body sha256: f7c1e447665ade15ba8ab23cbc08e85388c4390257cf34e19d0d7c8efe69cdcf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dda5c{
    "0x1802dda5c",
    "FUN_1802dda5c",
    R"F1802dda5cS(undefined FUN_1802dda5c())F1802dda5cS",
    R"B1802dda5c(// 0x1802dda5c  FUN_1802dda5c
// size=36 thunk=false
// signature: undefined FUN_1802dda5c()
// status: ok


undefined8 FUN_1802dda5c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0;
  return 0;
}


)B1802dda5c",
    "f7c1e447665ade15ba8ab23cbc08e85388c4390257cf34e19d0d7c8efe69cdcf",
    R"F1802dda5cC()F1802dda5cC",
    R"F1802dda5cD()F1802dda5cD",
    R"F1802dda5cT()F1802dda5cT",
    R"F1802dda5cF(11: return 0;)F1802dda5cF",
    R"F1802dda5cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dda5cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dda5c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dda5c", "FUN_1802dda5c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f7c1e447665ade15ba8ab23cbc08e85388c4390257cf34e19d0d7c8efe69cdcf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dda5c(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x34) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802dda5c;
}

// 0x1802dda81 FUN_1802dda81
// source: re/dump/decompile/0x1802dda81_FUN_1802dda81.c
// size: 29 bytes; thunk: false
// body sha256: b3238c2e5436647697671a1f59c1c4f0ec2c296085c0024bb7a77b0af76e0ef7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dda81{
    "0x1802dda81",
    "FUN_1802dda81",
    R"F1802dda81S(undefined FUN_1802dda81())F1802dda81S",
    R"B1802dda81(// 0x1802dda81  FUN_1802dda81
// size=29 thunk=false
// signature: undefined FUN_1802dda81()
// status: ok


undefined8 FUN_1802dda81(void)

{
  return 0;
}


)B1802dda81",
    "b3238c2e5436647697671a1f59c1c4f0ec2c296085c0024bb7a77b0af76e0ef7",
    R"F1802dda81C()F1802dda81C",
    R"F1802dda81D()F1802dda81D",
    R"F1802dda81T()F1802dda81T",
    R"F1802dda81F(10: return 0;)F1802dda81F",
    R"F1802dda81U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dda81U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dda81() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dda81", "FUN_1802dda81");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b3238c2e5436647697671a1f59c1c4f0ec2c296085c0024bb7a77b0af76e0ef7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dda81(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dda81;
}

// 0x1802ddac3 FUN_1802ddac3
// source: re/dump/decompile/0x1802ddac3_FUN_1802ddac3.c
// size: 35 bytes; thunk: false
// body sha256: 71da7e25ca6891ad0ebe2ca1a4520d1b10b02d8700fe9ce93723c5b151e681fd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddac3{
    "0x1802ddac3",
    "FUN_1802ddac3",
    R"F1802ddac3S(undefined FUN_1802ddac3())F1802ddac3S",
    R"B1802ddac3(// 0x1802ddac3  FUN_1802ddac3
// size=35 thunk=false
// signature: undefined FUN_1802ddac3()
// status: ok


undefined8 FUN_1802ddac3(void)

{
  FUN_180051d40();
  return 0;
}


)B1802ddac3",
    "71da7e25ca6891ad0ebe2ca1a4520d1b10b02d8700fe9ce93723c5b151e681fd",
    R"F1802ddac3C(FUN_180051d40)F1802ddac3C",
    R"F1802ddac3D()F1802ddac3D",
    R"F1802ddac3T()F1802ddac3T",
    R"F1802ddac3F(11: return 0;)F1802ddac3F",
    R"F1802ddac3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddac3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddac3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddac3", "FUN_1802ddac3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180051d40", reinterpret_cast<const void*>(&image::FUN_180051d40));
    // body sha256: 71da7e25ca6891ad0ebe2ca1a4520d1b10b02d8700fe9ce93723c5b151e681fd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddac3(void)");
        {
            trace.statement("FUN_180051d40();");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddac3;
}

// 0x1802ddb14 FUN_1802ddb14
// source: re/dump/decompile/0x1802ddb14_FUN_1802ddb14.c
// size: 29 bytes; thunk: false
// body sha256: 7a1553d9c545366d756facf8e6c183dac7cb6c69391f839a79a9cb37d48a18d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddb14{
    "0x1802ddb14",
    "FUN_1802ddb14",
    R"F1802ddb14S(undefined FUN_1802ddb14())F1802ddb14S",
    R"B1802ddb14(// 0x1802ddb14  FUN_1802ddb14
// size=29 thunk=false
// signature: undefined FUN_1802ddb14()
// status: ok


undefined8 FUN_1802ddb14(void)

{
  return 0;
}


)B1802ddb14",
    "7a1553d9c545366d756facf8e6c183dac7cb6c69391f839a79a9cb37d48a18d9",
    R"F1802ddb14C()F1802ddb14C",
    R"F1802ddb14D()F1802ddb14D",
    R"F1802ddb14T()F1802ddb14T",
    R"F1802ddb14F(10: return 0;)F1802ddb14F",
    R"F1802ddb14U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddb14U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddb14() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddb14", "FUN_1802ddb14");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7a1553d9c545366d756facf8e6c183dac7cb6c69391f839a79a9cb37d48a18d9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddb14(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddb14;
}

// 0x1802ddb7c FUN_1802ddb7c
// source: re/dump/decompile/0x1802ddb7c_FUN_1802ddb7c.c
// size: 36 bytes; thunk: false
// body sha256: 4a0e1ffe737a187eab7a0e681af12fb1716f7ca063b1efc6f1bea54ab672ccc4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddb7c{
    "0x1802ddb7c",
    "FUN_1802ddb7c",
    R"F1802ddb7cS(undefined FUN_1802ddb7c())F1802ddb7cS",
    R"B1802ddb7c(// 0x1802ddb7c  FUN_1802ddb7c
// size=36 thunk=false
// signature: undefined FUN_1802ddb7c()
// status: ok


undefined8 FUN_1802ddb7c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0;
  return 0;
}


)B1802ddb7c",
    "4a0e1ffe737a187eab7a0e681af12fb1716f7ca063b1efc6f1bea54ab672ccc4",
    R"F1802ddb7cC()F1802ddb7cC",
    R"F1802ddb7cD()F1802ddb7cD",
    R"F1802ddb7cT()F1802ddb7cT",
    R"F1802ddb7cF(11: return 0;)F1802ddb7cF",
    R"F1802ddb7cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddb7cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddb7c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddb7c", "FUN_1802ddb7c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4a0e1ffe737a187eab7a0e681af12fb1716f7ca063b1efc6f1bea54ab672ccc4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddb7c(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x20) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddb7c;
}

// 0x1802ddbe0 FUN_1802ddbe0
// source: re/dump/decompile/0x1802ddbe0_FUN_1802ddbe0.c
// size: 43 bytes; thunk: false
// body sha256: 370150ae86bfc75acbe450f836fe9ae5eb09f4b1f72b2328f43de073980d4c1f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddbe0{
    "0x1802ddbe0",
    "FUN_1802ddbe0",
    R"F1802ddbe0S(undefined FUN_1802ddbe0())F1802ddbe0S",
    R"B1802ddbe0(// 0x1802ddbe0  FUN_1802ddbe0
// size=43 thunk=false
// signature: undefined FUN_1802ddbe0()
// status: ok


undefined8 FUN_1802ddbe0(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x130) = 0;
  return 0;
}


)B1802ddbe0",
    "370150ae86bfc75acbe450f836fe9ae5eb09f4b1f72b2328f43de073980d4c1f",
    R"F1802ddbe0C()F1802ddbe0C",
    R"F1802ddbe0D()F1802ddbe0D",
    R"F1802ddbe0T()F1802ddbe0T",
    R"F1802ddbe0F(11: return 0;)F1802ddbe0F",
    R"F1802ddbe0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddbe0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddbe0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddbe0", "FUN_1802ddbe0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 370150ae86bfc75acbe450f836fe9ae5eb09f4b1f72b2328f43de073980d4c1f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddbe0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("**(undefined8 **)(param_2 + 0x130) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddbe0;
}

// 0x1802ddc10 FUN_1802ddc10
// source: re/dump/decompile/0x1802ddc10_FUN_1802ddc10.c
// size: 29 bytes; thunk: false
// body sha256: bbfed7621e34684f192c0cf6c332cc41cc492061c647d14b1f7200cd1c58bf6d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddc10{
    "0x1802ddc10",
    "FUN_1802ddc10",
    R"F1802ddc10S(undefined FUN_1802ddc10())F1802ddc10S",
    R"B1802ddc10(// 0x1802ddc10  FUN_1802ddc10
// size=29 thunk=false
// signature: undefined FUN_1802ddc10()
// status: ok


undefined8 FUN_1802ddc10(void)

{
  return 0;
}


)B1802ddc10",
    "bbfed7621e34684f192c0cf6c332cc41cc492061c647d14b1f7200cd1c58bf6d",
    R"F1802ddc10C()F1802ddc10C",
    R"F1802ddc10D()F1802ddc10D",
    R"F1802ddc10T()F1802ddc10T",
    R"F1802ddc10F(10: return 0;)F1802ddc10F",
    R"F1802ddc10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddc10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddc10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddc10", "FUN_1802ddc10");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bbfed7621e34684f192c0cf6c332cc41cc492061c647d14b1f7200cd1c58bf6d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddc10(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddc10;
}

// 0x1802ddc30 FUN_1802ddc30
// source: re/dump/decompile/0x1802ddc30_FUN_1802ddc30.c
// size: 22 bytes; thunk: false
// body sha256: 846eebe0b51cd3dddefde37130656954d8283a45a5c0bad3c1deeac4a0a0d39a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddc30{
    "0x1802ddc30",
    "FUN_1802ddc30",
    R"F1802ddc30S(undefined FUN_1802ddc30())F1802ddc30S",
    R"B1802ddc30(// 0x1802ddc30  FUN_1802ddc30
// size=22 thunk=false
// signature: undefined FUN_1802ddc30()
// status: ok


void FUN_1802ddc30(void)

{
  DAT_1805b8820 = DAT_1805b8820 & 0xfffffffe;
  return;
}


)B1802ddc30",
    "846eebe0b51cd3dddefde37130656954d8283a45a5c0bad3c1deeac4a0a0d39a",
    R"F1802ddc30C()F1802ddc30C",
    R"F1802ddc30D(DAT_1805b8820)F1802ddc30D",
    R"F1802ddc30T()F1802ddc30T",
    R"F1802ddc30F(11: return;)F1802ddc30F",
    R"F1802ddc30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805b8820.)F1802ddc30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddc30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddc30", "FUN_1802ddc30");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805b8820.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805b8820", static_cast<const void*>(&image::DAT_1805b8820));
    // body sha256: 846eebe0b51cd3dddefde37130656954d8283a45a5c0bad3c1deeac4a0a0d39a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddc30(void)");
        {
            trace.statement("DAT_1805b8820 = DAT_1805b8820 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ddc30;
}

// 0x1802ddc50 FUN_1802ddc50
// source: re/dump/decompile/0x1802ddc50_FUN_1802ddc50.c
// size: 22 bytes; thunk: false
// body sha256: d5d1075280adfc3506272e7fe57953708d0b9effc4c3b677710309521acdbce0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddc50{
    "0x1802ddc50",
    "FUN_1802ddc50",
    R"F1802ddc50S(undefined FUN_1802ddc50())F1802ddc50S",
    R"B1802ddc50(// 0x1802ddc50  FUN_1802ddc50
// size=22 thunk=false
// signature: undefined FUN_1802ddc50()
// status: ok


void FUN_1802ddc50(void)

{
  DAT_18042f184 = DAT_18042f184 & 0xfffffffe;
  return;
}


)B1802ddc50",
    "d5d1075280adfc3506272e7fe57953708d0b9effc4c3b677710309521acdbce0",
    R"F1802ddc50C()F1802ddc50C",
    R"F1802ddc50D(DAT_18042f184)F1802ddc50D",
    R"F1802ddc50T()F1802ddc50T",
    R"F1802ddc50F(11: return;)F1802ddc50F",
    R"F1802ddc50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f184.)F1802ddc50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddc50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddc50", "FUN_1802ddc50");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f184.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f184", static_cast<const void*>(&image::DAT_18042f184));
    // body sha256: d5d1075280adfc3506272e7fe57953708d0b9effc4c3b677710309521acdbce0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddc50(void)");
        {
            trace.statement("DAT_18042f184 = DAT_18042f184 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ddc50;
}

// 0x1802ddc66 FUN_1802ddc66
// source: re/dump/decompile/0x1802ddc66_FUN_1802ddc66.c
// size: 22 bytes; thunk: false
// body sha256: 24376a02cecac3e89f0157b9d12be9816438b2d44c80ade214435850f8102d90
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddc66{
    "0x1802ddc66",
    "FUN_1802ddc66",
    R"F1802ddc66S(undefined FUN_1802ddc66())F1802ddc66S",
    R"B1802ddc66(// 0x1802ddc66  FUN_1802ddc66
// size=22 thunk=false
// signature: undefined FUN_1802ddc66()
// status: ok


void FUN_1802ddc66(void)

{
  DAT_18042f184 = DAT_18042f184 & 0xfffffffe;
  return;
}


)B1802ddc66",
    "24376a02cecac3e89f0157b9d12be9816438b2d44c80ade214435850f8102d90",
    R"F1802ddc66C()F1802ddc66C",
    R"F1802ddc66D(DAT_18042f184)F1802ddc66D",
    R"F1802ddc66T()F1802ddc66T",
    R"F1802ddc66F(11: return;)F1802ddc66F",
    R"F1802ddc66U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f184.)F1802ddc66U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddc66() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddc66", "FUN_1802ddc66");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f184.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f184", static_cast<const void*>(&image::DAT_18042f184));
    // body sha256: 24376a02cecac3e89f0157b9d12be9816438b2d44c80ade214435850f8102d90
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddc66(void)");
        {
            trace.statement("DAT_18042f184 = DAT_18042f184 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ddc66;
}

// 0x1802ddc7c FUN_1802ddc7c
// source: re/dump/decompile/0x1802ddc7c_FUN_1802ddc7c.c
// size: 22 bytes; thunk: false
// body sha256: a3de477f01c2a5d8f68baf322decbbe8608ac6c13f3259f39ec7509347f26b11
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddc7c{
    "0x1802ddc7c",
    "FUN_1802ddc7c",
    R"F1802ddc7cS(undefined FUN_1802ddc7c())F1802ddc7cS",
    R"B1802ddc7c(// 0x1802ddc7c  FUN_1802ddc7c
// size=22 thunk=false
// signature: undefined FUN_1802ddc7c()
// status: ok


void FUN_1802ddc7c(void)

{
  DAT_18042f184 = DAT_18042f184 & 0xfffffffe;
  return;
}


)B1802ddc7c",
    "a3de477f01c2a5d8f68baf322decbbe8608ac6c13f3259f39ec7509347f26b11",
    R"F1802ddc7cC()F1802ddc7cC",
    R"F1802ddc7cD(DAT_18042f184)F1802ddc7cD",
    R"F1802ddc7cT()F1802ddc7cT",
    R"F1802ddc7cF(11: return;)F1802ddc7cF",
    R"F1802ddc7cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f184.)F1802ddc7cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddc7c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddc7c", "FUN_1802ddc7c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f184.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f184", static_cast<const void*>(&image::DAT_18042f184));
    // body sha256: a3de477f01c2a5d8f68baf322decbbe8608ac6c13f3259f39ec7509347f26b11
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddc7c(void)");
        {
            trace.statement("DAT_18042f184 = DAT_18042f184 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ddc7c;
}

// 0x1802ddc92 FUN_1802ddc92
// source: re/dump/decompile/0x1802ddc92_FUN_1802ddc92.c
// size: 22 bytes; thunk: false
// body sha256: 389b0cff0e3ca7d9f03622ac24b894a8ad56165b89242428aaf0703b89b1cd7f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddc92{
    "0x1802ddc92",
    "FUN_1802ddc92",
    R"F1802ddc92S(undefined FUN_1802ddc92())F1802ddc92S",
    R"B1802ddc92(// 0x1802ddc92  FUN_1802ddc92
// size=22 thunk=false
// signature: undefined FUN_1802ddc92()
// status: ok


void FUN_1802ddc92(void)

{
  DAT_18042f184 = DAT_18042f184 & 0xfffffffe;
  return;
}


)B1802ddc92",
    "389b0cff0e3ca7d9f03622ac24b894a8ad56165b89242428aaf0703b89b1cd7f",
    R"F1802ddc92C()F1802ddc92C",
    R"F1802ddc92D(DAT_18042f184)F1802ddc92D",
    R"F1802ddc92T()F1802ddc92T",
    R"F1802ddc92F(11: return;)F1802ddc92F",
    R"F1802ddc92U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f184.)F1802ddc92U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddc92() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddc92", "FUN_1802ddc92");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f184.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f184", static_cast<const void*>(&image::DAT_18042f184));
    // body sha256: 389b0cff0e3ca7d9f03622ac24b894a8ad56165b89242428aaf0703b89b1cd7f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddc92(void)");
        {
            trace.statement("DAT_18042f184 = DAT_18042f184 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ddc92;
}

// 0x1802ddcb0 FUN_1802ddcb0
// source: re/dump/decompile/0x1802ddcb0_FUN_1802ddcb0.c
// size: 36 bytes; thunk: false
// body sha256: 3f298ef222401d7f0ccfd1b972c947f42c2fe4764b7a30fec4c5729dbe025b9b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddcb0{
    "0x1802ddcb0",
    "FUN_1802ddcb0",
    R"F1802ddcb0S(undefined FUN_1802ddcb0())F1802ddcb0S",
    R"B1802ddcb0(// 0x1802ddcb0  FUN_1802ddcb0
// size=36 thunk=false
// signature: undefined FUN_1802ddcb0()
// status: ok


undefined8 FUN_1802ddcb0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  return 0;
}


)B1802ddcb0",
    "3f298ef222401d7f0ccfd1b972c947f42c2fe4764b7a30fec4c5729dbe025b9b",
    R"F1802ddcb0C()F1802ddcb0C",
    R"F1802ddcb0D()F1802ddcb0D",
    R"F1802ddcb0T()F1802ddcb0T",
    R"F1802ddcb0F(11: return 0;)F1802ddcb0F",
    R"F1802ddcb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddcb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddcb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddcb0", "FUN_1802ddcb0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3f298ef222401d7f0ccfd1b972c947f42c2fe4764b7a30fec4c5729dbe025b9b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddcb0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x20) = 0xffffffff;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddcb0;
}

// 0x1802ddce0 FUN_1802ddce0
// source: re/dump/decompile/0x1802ddce0_FUN_1802ddce0.c
// size: 22 bytes; thunk: false
// body sha256: 7482f5b9ac852fdb5a887debdce15f343d0efb86fc437aa038a1e446297d866e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddce0{
    "0x1802ddce0",
    "FUN_1802ddce0",
    R"F1802ddce0S(undefined FUN_1802ddce0())F1802ddce0S",
    R"B1802ddce0(// 0x1802ddce0  FUN_1802ddce0
// size=22 thunk=false
// signature: undefined FUN_1802ddce0()
// status: ok


void FUN_1802ddce0(void)

{
  DAT_180427630 = DAT_180427630 & 0xfffffffe;
  return;
}


)B1802ddce0",
    "7482f5b9ac852fdb5a887debdce15f343d0efb86fc437aa038a1e446297d866e",
    R"F1802ddce0C()F1802ddce0C",
    R"F1802ddce0D(DAT_180427630)F1802ddce0D",
    R"F1802ddce0T()F1802ddce0T",
    R"F1802ddce0F(11: return;)F1802ddce0F",
    R"F1802ddce0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427630.)F1802ddce0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddce0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddce0", "FUN_1802ddce0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427630.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180427630", static_cast<const void*>(&image::DAT_180427630));
    // body sha256: 7482f5b9ac852fdb5a887debdce15f343d0efb86fc437aa038a1e446297d866e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddce0(void)");
        {
            trace.statement("DAT_180427630 = DAT_180427630 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ddce0;
}

// 0x1802ddd26 FUN_1802ddd26
// source: re/dump/decompile/0x1802ddd26_FUN_1802ddd26.c
// size: 29 bytes; thunk: false
// body sha256: 7502898e65e7ca78264f1a04bbaaada6fc18954dd0a3337ab8036d4f3c79b525
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddd26{
    "0x1802ddd26",
    "FUN_1802ddd26",
    R"F1802ddd26S(undefined FUN_1802ddd26())F1802ddd26S",
    R"B1802ddd26(// 0x1802ddd26  FUN_1802ddd26
// size=29 thunk=false
// signature: undefined FUN_1802ddd26()
// status: ok


undefined8 FUN_1802ddd26(void)

{
  return 0;
}


)B1802ddd26",
    "7502898e65e7ca78264f1a04bbaaada6fc18954dd0a3337ab8036d4f3c79b525",
    R"F1802ddd26C()F1802ddd26C",
    R"F1802ddd26D()F1802ddd26D",
    R"F1802ddd26T()F1802ddd26T",
    R"F1802ddd26F(10: return 0;)F1802ddd26F",
    R"F1802ddd26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddd26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddd26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddd26", "FUN_1802ddd26");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7502898e65e7ca78264f1a04bbaaada6fc18954dd0a3337ab8036d4f3c79b525
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddd26(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddd26;
}

// 0x1802ddd7c FUN_1802ddd7c
// source: re/dump/decompile/0x1802ddd7c_FUN_1802ddd7c.c
// size: 29 bytes; thunk: false
// body sha256: 8a058ad9dc9afe8d82fca3bb7edd7c5806cff5063dfd40ff574fe763d7a6d50e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddd7c{
    "0x1802ddd7c",
    "FUN_1802ddd7c",
    R"F1802ddd7cS(undefined FUN_1802ddd7c())F1802ddd7cS",
    R"B1802ddd7c(// 0x1802ddd7c  FUN_1802ddd7c
// size=29 thunk=false
// signature: undefined FUN_1802ddd7c()
// status: ok


undefined8 FUN_1802ddd7c(void)

{
  return 0;
}


)B1802ddd7c",
    "8a058ad9dc9afe8d82fca3bb7edd7c5806cff5063dfd40ff574fe763d7a6d50e",
    R"F1802ddd7cC()F1802ddd7cC",
    R"F1802ddd7cD()F1802ddd7cD",
    R"F1802ddd7cT()F1802ddd7cT",
    R"F1802ddd7cF(10: return 0;)F1802ddd7cF",
    R"F1802ddd7cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddd7cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddd7c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddd7c", "FUN_1802ddd7c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8a058ad9dc9afe8d82fca3bb7edd7c5806cff5063dfd40ff574fe763d7a6d50e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ddd7c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ddd7c;
}

// 0x1802dde80 FUN_1802dde80
// source: re/dump/decompile/0x1802dde80_FUN_1802dde80.c
// size: 38 bytes; thunk: false
// body sha256: 918dcbc4d91f236588d7f9e121bd85a499f5fc761d51e2a0327fbeab1c5ef00e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dde80{
    "0x1802dde80",
    "FUN_1802dde80",
    R"F1802dde80S(undefined FUN_1802dde80())F1802dde80S",
    R"B1802dde80(// 0x1802dde80  FUN_1802dde80
// size=38 thunk=false
// signature: undefined FUN_1802dde80()
// status: ok


void FUN_1802dde80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802dde80",
    "918dcbc4d91f236588d7f9e121bd85a499f5fc761d51e2a0327fbeab1c5ef00e",
    R"F1802dde80C()F1802dde80C",
    R"F1802dde80D()F1802dde80D",
    R"F1802dde80T()F1802dde80T",
    R"F1802dde80F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802dde80F",
    R"F1802dde80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dde80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dde80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dde80", "FUN_1802dde80");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 918dcbc4d91f236588d7f9e121bd85a499f5fc761d51e2a0327fbeab1c5ef00e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dde80(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dde80;
}

// 0x1802ddeb0 FUN_1802ddeb0
// source: re/dump/decompile/0x1802ddeb0_FUN_1802ddeb0.c
// size: 38 bytes; thunk: false
// body sha256: 7903a49a2b5b257a2288c2809211984b42c4fb0f9d99e9fa8ff26bfbdc00f386
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddeb0{
    "0x1802ddeb0",
    "FUN_1802ddeb0",
    R"F1802ddeb0S(undefined FUN_1802ddeb0())F1802ddeb0S",
    R"B1802ddeb0(// 0x1802ddeb0  FUN_1802ddeb0
// size=38 thunk=false
// signature: undefined FUN_1802ddeb0()
// status: ok


void FUN_1802ddeb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_18020e450(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ddeb0",
    "7903a49a2b5b257a2288c2809211984b42c4fb0f9d99e9fa8ff26bfbdc00f386",
    R"F1802ddeb0C(FUN_18020e450)F1802ddeb0C",
    R"F1802ddeb0D()F1802ddeb0D",
    R"F1802ddeb0T()F1802ddeb0T",
    R"F1802ddeb0F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802ddeb0F",
    R"F1802ddeb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddeb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddeb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddeb0", "FUN_1802ddeb0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    // body sha256: 7903a49a2b5b257a2288c2809211984b42c4fb0f9d99e9fa8ff26bfbdc00f386
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddeb0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("FUN_18020e450(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddeb0;
}

// 0x1802dded6 FUN_1802dded6
// source: re/dump/decompile/0x1802dded6_FUN_1802dded6.c
// size: 38 bytes; thunk: false
// body sha256: d79458f358fe572e4fa35f218735d49b8d4a3743f763d292c589fdaa085c4718
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dded6{
    "0x1802dded6",
    "FUN_1802dded6",
    R"F1802dded6S(undefined FUN_1802dded6())F1802dded6S",
    R"B1802dded6(// 0x1802dded6  FUN_1802dded6
// size=38 thunk=false
// signature: undefined FUN_1802dded6()
// status: ok


void FUN_1802dded6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18020e450(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802dded6",
    "d79458f358fe572e4fa35f218735d49b8d4a3743f763d292c589fdaa085c4718",
    R"F1802dded6C(FUN_18020e450)F1802dded6C",
    R"F1802dded6D()F1802dded6D",
    R"F1802dded6T()F1802dded6T",
    R"F1802dded6F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802dded6F",
    R"F1802dded6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dded6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dded6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dded6", "FUN_1802dded6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    // body sha256: d79458f358fe572e4fa35f218735d49b8d4a3743f763d292c589fdaa085c4718
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dded6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18020e450(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dded6;
}

// 0x1802ddf00 FUN_1802ddf00
// source: re/dump/decompile/0x1802ddf00_FUN_1802ddf00.c
// size: 38 bytes; thunk: false
// body sha256: 5efa091b6adb7b29a7db4179169c366db5b767afd59f4c694a1825dbeed43bb9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddf00{
    "0x1802ddf00",
    "FUN_1802ddf00",
    R"F1802ddf00S(undefined FUN_1802ddf00())F1802ddf00S",
    R"B1802ddf00(// 0x1802ddf00  FUN_1802ddf00
// size=38 thunk=false
// signature: undefined FUN_1802ddf00()
// status: ok


void FUN_1802ddf00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ddf00",
    "5efa091b6adb7b29a7db4179169c366db5b767afd59f4c694a1825dbeed43bb9",
    R"F1802ddf00C()F1802ddf00C",
    R"F1802ddf00D()F1802ddf00D",
    R"F1802ddf00T()F1802ddf00T",
    R"F1802ddf00F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802ddf00F",
    R"F1802ddf00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddf00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddf00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddf00", "FUN_1802ddf00");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5efa091b6adb7b29a7db4179169c366db5b767afd59f4c694a1825dbeed43bb9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddf00(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddf00;
}

// 0x1802ddf26 FUN_1802ddf26
// source: re/dump/decompile/0x1802ddf26_FUN_1802ddf26.c
// size: 38 bytes; thunk: false
// body sha256: a3a33bf1ca17f1997b9d2fc4c7515cb8e0caa971584d901f1cd3fbd7de8481d8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddf26{
    "0x1802ddf26",
    "FUN_1802ddf26",
    R"F1802ddf26S(undefined FUN_1802ddf26())F1802ddf26S",
    R"B1802ddf26(// 0x1802ddf26  FUN_1802ddf26
// size=38 thunk=false
// signature: undefined FUN_1802ddf26()
// status: ok


void FUN_1802ddf26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ddf26",
    "a3a33bf1ca17f1997b9d2fc4c7515cb8e0caa971584d901f1cd3fbd7de8481d8",
    R"F1802ddf26C()F1802ddf26C",
    R"F1802ddf26D()F1802ddf26D",
    R"F1802ddf26T()F1802ddf26T",
    R"F1802ddf26F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802ddf26F",
    R"F1802ddf26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddf26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddf26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddf26", "FUN_1802ddf26");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a3a33bf1ca17f1997b9d2fc4c7515cb8e0caa971584d901f1cd3fbd7de8481d8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddf26(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddf26;
}

// 0x1802ddf4c FUN_1802ddf4c
// source: re/dump/decompile/0x1802ddf4c_FUN_1802ddf4c.c
// size: 38 bytes; thunk: false
// body sha256: 5667a72a041d72f5a19539b7463820433166052c6b44b7d3adb17c4cfc63a05b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddf4c{
    "0x1802ddf4c",
    "FUN_1802ddf4c",
    R"F1802ddf4cS(undefined FUN_1802ddf4c())F1802ddf4cS",
    R"B1802ddf4c(// 0x1802ddf4c  FUN_1802ddf4c
// size=38 thunk=false
// signature: undefined FUN_1802ddf4c()
// status: ok


void FUN_1802ddf4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ddf4c",
    "5667a72a041d72f5a19539b7463820433166052c6b44b7d3adb17c4cfc63a05b",
    R"F1802ddf4cC()F1802ddf4cC",
    R"F1802ddf4cD()F1802ddf4cD",
    R"F1802ddf4cT()F1802ddf4cT",
    R"F1802ddf4cF(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802ddf4cF",
    R"F1802ddf4cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddf4cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddf4c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddf4c", "FUN_1802ddf4c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5667a72a041d72f5a19539b7463820433166052c6b44b7d3adb17c4cfc63a05b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddf4c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddf4c;
}

// 0x1802ddf72 FUN_1802ddf72
// source: re/dump/decompile/0x1802ddf72_FUN_1802ddf72.c
// size: 38 bytes; thunk: false
// body sha256: db7148c05d8572ea3803275d15125f3c6cea7e7a805ba5dca7c2e1aec29fef33
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddf72{
    "0x1802ddf72",
    "FUN_1802ddf72",
    R"F1802ddf72S(undefined FUN_1802ddf72())F1802ddf72S",
    R"B1802ddf72(// 0x1802ddf72  FUN_1802ddf72
// size=38 thunk=false
// signature: undefined FUN_1802ddf72()
// status: ok


void FUN_1802ddf72(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ddf72",
    "db7148c05d8572ea3803275d15125f3c6cea7e7a805ba5dca7c2e1aec29fef33",
    R"F1802ddf72C()F1802ddf72C",
    R"F1802ddf72D()F1802ddf72D",
    R"F1802ddf72T()F1802ddf72T",
    R"F1802ddf72F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ddf72F",
    R"F1802ddf72U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddf72U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddf72() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddf72", "FUN_1802ddf72");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: db7148c05d8572ea3803275d15125f3c6cea7e7a805ba5dca7c2e1aec29fef33
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddf72(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddf72;
}

// 0x1802ddfa0 FUN_1802ddfa0
// source: re/dump/decompile/0x1802ddfa0_FUN_1802ddfa0.c
// size: 38 bytes; thunk: false
// body sha256: 52e88dd40050d63b831d1d4477a574f50d666752f9515438f91c57db2ce3c9ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddfa0{
    "0x1802ddfa0",
    "FUN_1802ddfa0",
    R"F1802ddfa0S(undefined FUN_1802ddfa0())F1802ddfa0S",
    R"B1802ddfa0(// 0x1802ddfa0  FUN_1802ddfa0
// size=38 thunk=false
// signature: undefined FUN_1802ddfa0()
// status: ok


void FUN_1802ddfa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ddfa0",
    "52e88dd40050d63b831d1d4477a574f50d666752f9515438f91c57db2ce3c9ab",
    R"F1802ddfa0C()F1802ddfa0C",
    R"F1802ddfa0D()F1802ddfa0D",
    R"F1802ddfa0T()F1802ddfa0T",
    R"F1802ddfa0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ddfa0F",
    R"F1802ddfa0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddfa0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddfa0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddfa0", "FUN_1802ddfa0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 52e88dd40050d63b831d1d4477a574f50d666752f9515438f91c57db2ce3c9ab
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddfa0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddfa0;
}

// 0x1802ddfd0 FUN_1802ddfd0
// source: re/dump/decompile/0x1802ddfd0_FUN_1802ddfd0.c
// size: 38 bytes; thunk: false
// body sha256: 50e03d2da35b712022e828401e328937bbff6f095c26cbbf5c5256b0161e172b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddfd0{
    "0x1802ddfd0",
    "FUN_1802ddfd0",
    R"F1802ddfd0S(undefined FUN_1802ddfd0())F1802ddfd0S",
    R"B1802ddfd0(// 0x1802ddfd0  FUN_1802ddfd0
// size=38 thunk=false
// signature: undefined FUN_1802ddfd0()
// status: ok


void FUN_1802ddfd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802ddfd0",
    "50e03d2da35b712022e828401e328937bbff6f095c26cbbf5c5256b0161e172b",
    R"F1802ddfd0C()F1802ddfd0C",
    R"F1802ddfd0D()F1802ddfd0D",
    R"F1802ddfd0T()F1802ddfd0T",
    R"F1802ddfd0F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ddfd0F",
    R"F1802ddfd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddfd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddfd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddfd0", "FUN_1802ddfd0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 50e03d2da35b712022e828401e328937bbff6f095c26cbbf5c5256b0161e172b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddfd0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddfd0;
}

// 0x1802ddff6 FUN_1802ddff6
// source: re/dump/decompile/0x1802ddff6_FUN_1802ddff6.c
// size: 38 bytes; thunk: false
// body sha256: a005994181b0d72600f6162f9f75036950708c20ae0b5d3b6e293aeb65622328
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ddff6{
    "0x1802ddff6",
    "FUN_1802ddff6",
    R"F1802ddff6S(undefined FUN_1802ddff6())F1802ddff6S",
    R"B1802ddff6(// 0x1802ddff6  FUN_1802ddff6
// size=38 thunk=false
// signature: undefined FUN_1802ddff6()
// status: ok


void FUN_1802ddff6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802ddff6",
    "a005994181b0d72600f6162f9f75036950708c20ae0b5d3b6e293aeb65622328",
    R"F1802ddff6C()F1802ddff6C",
    R"F1802ddff6D()F1802ddff6D",
    R"F1802ddff6T()F1802ddff6T",
    R"F1802ddff6F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802ddff6F",
    R"F1802ddff6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ddff6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ddff6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ddff6", "FUN_1802ddff6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a005994181b0d72600f6162f9f75036950708c20ae0b5d3b6e293aeb65622328
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ddff6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ddff6;
}

// 0x1802de01c FUN_1802de01c
// source: re/dump/decompile/0x1802de01c_FUN_1802de01c.c
// size: 38 bytes; thunk: false
// body sha256: 5ecb3c13f9cc643fe46606d5c7a34bcf00c4883bda2dd3109926f74ee2072a91
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de01c{
    "0x1802de01c",
    "FUN_1802de01c",
    R"F1802de01cS(undefined FUN_1802de01c())F1802de01cS",
    R"B1802de01c(// 0x1802de01c  FUN_1802de01c
// size=38 thunk=false
// signature: undefined FUN_1802de01c()
// status: ok


void FUN_1802de01c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802de01c",
    "5ecb3c13f9cc643fe46606d5c7a34bcf00c4883bda2dd3109926f74ee2072a91",
    R"F1802de01cC(FUN_1800668e0)F1802de01cC",
    R"F1802de01cD()F1802de01cD",
    R"F1802de01cT()F1802de01cT",
    R"F1802de01cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de01cF",
    R"F1802de01cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de01cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de01c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de01c", "FUN_1802de01c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 5ecb3c13f9cc643fe46606d5c7a34bcf00c4883bda2dd3109926f74ee2072a91
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de01c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de01c;
}

// 0x1802de05c FUN_1802de05c
// source: re/dump/decompile/0x1802de05c_FUN_1802de05c.c
// size: 38 bytes; thunk: false
// body sha256: a14d8adb461ab21c04a82f76c0703d21f0fc9a2af2a184cec51e2602447daecb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de05c{
    "0x1802de05c",
    "FUN_1802de05c",
    R"F1802de05cS(undefined FUN_1802de05c())F1802de05cS",
    R"B1802de05c(// 0x1802de05c  FUN_1802de05c
// size=38 thunk=false
// signature: undefined FUN_1802de05c()
// status: ok


void FUN_1802de05c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802de05c",
    "a14d8adb461ab21c04a82f76c0703d21f0fc9a2af2a184cec51e2602447daecb",
    R"F1802de05cC(FUN_1800668e0)F1802de05cC",
    R"F1802de05cD()F1802de05cD",
    R"F1802de05cT()F1802de05cT",
    R"F1802de05cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de05cF",
    R"F1802de05cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de05cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de05c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de05c", "FUN_1802de05c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: a14d8adb461ab21c04a82f76c0703d21f0fc9a2af2a184cec51e2602447daecb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de05c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de05c;
}

// 0x1802de0cc FUN_1802de0cc
// source: re/dump/decompile/0x1802de0cc_FUN_1802de0cc.c
// size: 38 bytes; thunk: false
// body sha256: 50980eacdeef5118d91d5ed6a081c046b05173c02b618f6f806cfe54cba800a6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de0cc{
    "0x1802de0cc",
    "FUN_1802de0cc",
    R"F1802de0ccS(undefined FUN_1802de0cc())F1802de0ccS",
    R"B1802de0cc(// 0x1802de0cc  FUN_1802de0cc
// size=38 thunk=false
// signature: undefined FUN_1802de0cc()
// status: ok


void FUN_1802de0cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


)B1802de0cc",
    "50980eacdeef5118d91d5ed6a081c046b05173c02b618f6f806cfe54cba800a6",
    R"F1802de0ccC(FUN_1800668e0)F1802de0ccC",
    R"F1802de0ccD()F1802de0ccD",
    R"F1802de0ccT()F1802de0ccT",
    R"F1802de0ccF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de0ccF",
    R"F1802de0ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de0ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de0cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de0cc", "FUN_1802de0cc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 50980eacdeef5118d91d5ed6a081c046b05173c02b618f6f806cfe54cba800a6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de0cc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x70));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de0cc;
}

// 0x1802de0fe FUN_1802de0fe
// source: re/dump/decompile/0x1802de0fe_FUN_1802de0fe.c
// size: 38 bytes; thunk: false
// body sha256: c181451153fea599417a5973f3fe6f9b693da1c5b27a4b30122822dd143fe385
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de0fe{
    "0x1802de0fe",
    "FUN_1802de0fe",
    R"F1802de0feS(undefined FUN_1802de0fe())F1802de0feS",
    R"B1802de0fe(// 0x1802de0fe  FUN_1802de0fe
// size=38 thunk=false
// signature: undefined FUN_1802de0fe()
// status: ok


void FUN_1802de0fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


)B1802de0fe",
    "c181451153fea599417a5973f3fe6f9b693da1c5b27a4b30122822dd143fe385",
    R"F1802de0feC(FUN_1800668e0)F1802de0feC",
    R"F1802de0feD()F1802de0feD",
    R"F1802de0feT()F1802de0feT",
    R"F1802de0feF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802de0feF",
    R"F1802de0feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de0feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de0fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de0fe", "FUN_1802de0fe");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: c181451153fea599417a5973f3fe6f9b693da1c5b27a4b30122822dd143fe385
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de0fe(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x70));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de0fe;
}

// 0x1802de160 FUN_1802de160
// source: re/dump/decompile/0x1802de160_FUN_1802de160.c
// size: 38 bytes; thunk: false
// body sha256: ffce7695e7b2b7982b57df35889feec05a55c3bab3a7b8c0dc2d10b0e21cab53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de160{
    "0x1802de160",
    "FUN_1802de160",
    R"F1802de160S(undefined FUN_1802de160())F1802de160S",
    R"B1802de160(// 0x1802de160  FUN_1802de160
// size=38 thunk=false
// signature: undefined FUN_1802de160()
// status: ok


void FUN_1802de160(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802de160",
    "ffce7695e7b2b7982b57df35889feec05a55c3bab3a7b8c0dc2d10b0e21cab53",
    R"F1802de160C()F1802de160C",
    R"F1802de160D()F1802de160D",
    R"F1802de160T()F1802de160T",
    R"F1802de160F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802de160F",
    R"F1802de160U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de160U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de160() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de160", "FUN_1802de160");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ffce7695e7b2b7982b57df35889feec05a55c3bab3a7b8c0dc2d10b0e21cab53
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de160(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de160;
}

// 0x1802de186 FUN_1802de186
// source: re/dump/decompile/0x1802de186_FUN_1802de186.c
// size: 38 bytes; thunk: false
// body sha256: 161a309682d9bb66731fe6b56a4035ad324ceade68392025c8957699a1b603db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de186{
    "0x1802de186",
    "FUN_1802de186",
    R"F1802de186S(undefined FUN_1802de186())F1802de186S",
    R"B1802de186(// 0x1802de186  FUN_1802de186
// size=38 thunk=false
// signature: undefined FUN_1802de186()
// status: ok


void FUN_1802de186(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802de186",
    "161a309682d9bb66731fe6b56a4035ad324ceade68392025c8957699a1b603db",
    R"F1802de186C()F1802de186C",
    R"F1802de186D()F1802de186D",
    R"F1802de186T()F1802de186T",
    R"F1802de186F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802de186F",
    R"F1802de186U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de186U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de186() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de186", "FUN_1802de186");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 161a309682d9bb66731fe6b56a4035ad324ceade68392025c8957699a1b603db
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de186(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de186;
}

// 0x1802de1d4 FUN_1802de1d4
// source: re/dump/decompile/0x1802de1d4_FUN_1802de1d4.c
// size: 38 bytes; thunk: false
// body sha256: 6396a0391f342f69e883fc3ac857ec458fd3c41d5a74fe312465fea794b72090
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de1d4{
    "0x1802de1d4",
    "FUN_1802de1d4",
    R"F1802de1d4S(undefined FUN_1802de1d4())F1802de1d4S",
    R"B1802de1d4(// 0x1802de1d4  FUN_1802de1d4
// size=38 thunk=false
// signature: undefined FUN_1802de1d4()
// status: ok


void FUN_1802de1d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180066900(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802de1d4",
    "6396a0391f342f69e883fc3ac857ec458fd3c41d5a74fe312465fea794b72090",
    R"F1802de1d4C(FUN_180066900)F1802de1d4C",
    R"F1802de1d4D()F1802de1d4D",
    R"F1802de1d4T()F1802de1d4T",
    R"F1802de1d4F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de1d4F",
    R"F1802de1d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de1d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de1d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de1d4", "FUN_1802de1d4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180066900", reinterpret_cast<const void*>(&image::FUN_180066900));
    // body sha256: 6396a0391f342f69e883fc3ac857ec458fd3c41d5a74fe312465fea794b72090
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de1d4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180066900(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de1d4;
}

// 0x1802de22c FUN_1802de22c
// source: re/dump/decompile/0x1802de22c_FUN_1802de22c.c
// size: 38 bytes; thunk: false
// body sha256: bae65749252bcdf95f31d2bd6cc6131392b9bd89a0c3031cb8f6c56b43be6ab1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de22c{
    "0x1802de22c",
    "FUN_1802de22c",
    R"F1802de22cS(undefined FUN_1802de22c())F1802de22cS",
    R"B1802de22c(// 0x1802de22c  FUN_1802de22c
// size=38 thunk=false
// signature: undefined FUN_1802de22c()
// status: ok


void FUN_1802de22c(undefined8 param_1,uint *param_2)

{
  if ((*param_2 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffffe;
    FUN_180066900(*(undefined8 *)(param_2 + 10));
  }
  return;
}


)B1802de22c",
    "bae65749252bcdf95f31d2bd6cc6131392b9bd89a0c3031cb8f6c56b43be6ab1",
    R"F1802de22cC(FUN_180066900)F1802de22cC",
    R"F1802de22cD()F1802de22cD",
    R"F1802de22cT()F1802de22cT",
    R"F1802de22cF(10: if ((*param_2 & 1) != 0) {
14: return;)F1802de22cF",
    R"F1802de22cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de22cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de22c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de22c", "FUN_1802de22c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180066900", reinterpret_cast<const void*>(&image::FUN_180066900));
    // body sha256: bae65749252bcdf95f31d2bd6cc6131392b9bd89a0c3031cb8f6c56b43be6ab1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de22c(undefined8 param_1,uint *param_2)");
        {
            if (trace.condition("if ((*param_2 & 1) != 0)")) {
                trace.statement("*param_2 = *param_2 & 0xfffffffe;");
                trace.statement("FUN_180066900(*(undefined8 *)(param_2 + 10));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de22c;
}

// 0x1802de340 FUN_1802de340
// source: re/dump/decompile/0x1802de340_FUN_1802de340.c
// size: 38 bytes; thunk: false
// body sha256: d3355a2ecf63abe0d3ef7f97cbeeb8ae66443458f46bd6aa60c27c2b21922123
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de340{
    "0x1802de340",
    "FUN_1802de340",
    R"F1802de340S(undefined FUN_1802de340())F1802de340S",
    R"B1802de340(// 0x1802de340  FUN_1802de340
// size=38 thunk=false
// signature: undefined FUN_1802de340()
// status: ok


void FUN_1802de340(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802de340",
    "d3355a2ecf63abe0d3ef7f97cbeeb8ae66443458f46bd6aa60c27c2b21922123",
    R"F1802de340C()F1802de340C",
    R"F1802de340D()F1802de340D",
    R"F1802de340T()F1802de340T",
    R"F1802de340F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de340F",
    R"F1802de340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de340", "FUN_1802de340");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d3355a2ecf63abe0d3ef7f97cbeeb8ae66443458f46bd6aa60c27c2b21922123
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de340(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de340;
}

// 0x1802de528 FUN_1802de528
// source: re/dump/decompile/0x1802de528_FUN_1802de528.c
// size: 38 bytes; thunk: false
// body sha256: 61b68c44b74286b914094ea5961aaf1b0bfb31cc1f4b46b8ad558c7d9f7a59ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de528{
    "0x1802de528",
    "FUN_1802de528",
    R"F1802de528S(undefined FUN_1802de528())F1802de528S",
    R"B1802de528(// 0x1802de528  FUN_1802de528
// size=38 thunk=false
// signature: undefined FUN_1802de528()
// status: ok


void FUN_1802de528(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802de528",
    "61b68c44b74286b914094ea5961aaf1b0bfb31cc1f4b46b8ad558c7d9f7a59ab",
    R"F1802de528C()F1802de528C",
    R"F1802de528D()F1802de528D",
    R"F1802de528T()F1802de528T",
    R"F1802de528F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de528F",
    R"F1802de528U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de528U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de528() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de528", "FUN_1802de528");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 61b68c44b74286b914094ea5961aaf1b0bfb31cc1f4b46b8ad558c7d9f7a59ab
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de528(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de528;
}

// 0x1802de54e FUN_1802de54e
// source: re/dump/decompile/0x1802de54e_FUN_1802de54e.c
// size: 38 bytes; thunk: false
// body sha256: 6fb8902202adf549a88f29d0287992b14773c261368e511375da9f457d1a9ef9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de54e{
    "0x1802de54e",
    "FUN_1802de54e",
    R"F1802de54eS(undefined FUN_1802de54e())F1802de54eS",
    R"B1802de54e(// 0x1802de54e  FUN_1802de54e
// size=38 thunk=false
// signature: undefined FUN_1802de54e()
// status: ok


void FUN_1802de54e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802de54e",
    "6fb8902202adf549a88f29d0287992b14773c261368e511375da9f457d1a9ef9",
    R"F1802de54eC()F1802de54eC",
    R"F1802de54eD()F1802de54eD",
    R"F1802de54eT()F1802de54eT",
    R"F1802de54eF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802de54eF",
    R"F1802de54eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de54eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de54e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de54e", "FUN_1802de54e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6fb8902202adf549a88f29d0287992b14773c261368e511375da9f457d1a9ef9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de54e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de54e;
}

// 0x1802de5a0 FUN_1802de5a0
// source: re/dump/decompile/0x1802de5a0_FUN_1802de5a0.c
// size: 38 bytes; thunk: false
// body sha256: c3b8e914d9fa47de76b7827bae94302d239fe27cf2ac155cc5ca32c82686f437
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de5a0{
    "0x1802de5a0",
    "FUN_1802de5a0",
    R"F1802de5a0S(undefined FUN_1802de5a0())F1802de5a0S",
    R"B1802de5a0(// 0x1802de5a0  FUN_1802de5a0
// size=38 thunk=false
// signature: undefined FUN_1802de5a0()
// status: ok


void FUN_1802de5a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802de5a0",
    "c3b8e914d9fa47de76b7827bae94302d239fe27cf2ac155cc5ca32c82686f437",
    R"F1802de5a0C()F1802de5a0C",
    R"F1802de5a0D()F1802de5a0D",
    R"F1802de5a0T()F1802de5a0T",
    R"F1802de5a0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de5a0F",
    R"F1802de5a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de5a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de5a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de5a0", "FUN_1802de5a0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c3b8e914d9fa47de76b7827bae94302d239fe27cf2ac155cc5ca32c82686f437
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de5a0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de5a0;
}

// 0x1802de5c6 FUN_1802de5c6
// source: re/dump/decompile/0x1802de5c6_FUN_1802de5c6.c
// size: 38 bytes; thunk: false
// body sha256: 9720e4969584c545b2ad03f9bd82642c4dae1907611ee299f218d49585cc4f62
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de5c6{
    "0x1802de5c6",
    "FUN_1802de5c6",
    R"F1802de5c6S(undefined FUN_1802de5c6())F1802de5c6S",
    R"B1802de5c6(// 0x1802de5c6  FUN_1802de5c6
// size=38 thunk=false
// signature: undefined FUN_1802de5c6()
// status: ok


void FUN_1802de5c6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802de5c6",
    "9720e4969584c545b2ad03f9bd82642c4dae1907611ee299f218d49585cc4f62",
    R"F1802de5c6C()F1802de5c6C",
    R"F1802de5c6D()F1802de5c6D",
    R"F1802de5c6T()F1802de5c6T",
    R"F1802de5c6F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802de5c6F",
    R"F1802de5c6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de5c6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de5c6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de5c6", "FUN_1802de5c6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9720e4969584c545b2ad03f9bd82642c4dae1907611ee299f218d49585cc4f62
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de5c6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de5c6;
}

// 0x1802de698 FUN_1802de698
// source: re/dump/decompile/0x1802de698_FUN_1802de698.c
// size: 38 bytes; thunk: false
// body sha256: 18c22c4293926fbc31ec7d0f6f3a7fe4429b5de6993ac260576a908a0cae542e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de698{
    "0x1802de698",
    "FUN_1802de698",
    R"F1802de698S(undefined FUN_1802de698())F1802de698S",
    R"B1802de698(// 0x1802de698  FUN_1802de698
// size=38 thunk=false
// signature: undefined FUN_1802de698()
// status: ok


void FUN_1802de698(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800678a0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802de698",
    "18c22c4293926fbc31ec7d0f6f3a7fe4429b5de6993ac260576a908a0cae542e",
    R"F1802de698C(FUN_1800678a0)F1802de698C",
    R"F1802de698D()F1802de698D",
    R"F1802de698T()F1802de698T",
    R"F1802de698F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de698F",
    R"F1802de698U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de698U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de698() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de698", "FUN_1802de698");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800678a0", reinterpret_cast<const void*>(&image::FUN_1800678a0));
    // body sha256: 18c22c4293926fbc31ec7d0f6f3a7fe4429b5de6993ac260576a908a0cae542e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de698(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800678a0(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de698;
}

// 0x1802de70c FUN_1802de70c
// source: re/dump/decompile/0x1802de70c_FUN_1802de70c.c
// size: 41 bytes; thunk: false
// body sha256: b348a98cf9f5ecdf44339c9932ecdf3d21fa92ed24943fc9fd37d909da201e8a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de70c{
    "0x1802de70c",
    "FUN_1802de70c",
    R"F1802de70cS(undefined FUN_1802de70c())F1802de70cS",
    R"B1802de70c(// 0x1802de70c  FUN_1802de70c
// size=41 thunk=false
// signature: undefined FUN_1802de70c()
// status: ok


void FUN_1802de70c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802de70c",
    "b348a98cf9f5ecdf44339c9932ecdf3d21fa92ed24943fc9fd37d909da201e8a",
    R"F1802de70cC(FUN_1800668e0)F1802de70cC",
    R"F1802de70cD()F1802de70cD",
    R"F1802de70cT()F1802de70cT",
    R"F1802de70cF(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802de70cF",
    R"F1802de70cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de70cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de70c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de70c", "FUN_1802de70c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: b348a98cf9f5ecdf44339c9932ecdf3d21fa92ed24943fc9fd37d909da201e8a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de70c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de70c;
}

// 0x1802de740 FUN_1802de740
// source: re/dump/decompile/0x1802de740_FUN_1802de740.c
// size: 38 bytes; thunk: false
// body sha256: f1a0a6e6f32765420f0c9460e36d4473327cc0841f038413293bbae33f041984
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de740{
    "0x1802de740",
    "FUN_1802de740",
    R"F1802de740S(undefined FUN_1802de740())F1802de740S",
    R"B1802de740(// 0x1802de740  FUN_1802de740
// size=38 thunk=false
// signature: undefined FUN_1802de740()
// status: ok


void FUN_1802de740(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802de740",
    "f1a0a6e6f32765420f0c9460e36d4473327cc0841f038413293bbae33f041984",
    R"F1802de740C(FUN_1800668e0)F1802de740C",
    R"F1802de740D()F1802de740D",
    R"F1802de740T()F1802de740T",
    R"F1802de740F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802de740F",
    R"F1802de740U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de740U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de740() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de740", "FUN_1802de740");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: f1a0a6e6f32765420f0c9460e36d4473327cc0841f038413293bbae33f041984
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de740(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de740;
}

// 0x1802de794 FUN_1802de794
// source: re/dump/decompile/0x1802de794_FUN_1802de794.c
// size: 38 bytes; thunk: false
// body sha256: dcb80cba6729c0d2407c9d963e89d4cadc5ad98744d414df9da4b4d330af9516
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de794{
    "0x1802de794",
    "FUN_1802de794",
    R"F1802de794S(undefined FUN_1802de794())F1802de794S",
    R"B1802de794(// 0x1802de794  FUN_1802de794
// size=38 thunk=false
// signature: undefined FUN_1802de794()
// status: ok


void FUN_1802de794(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802de794",
    "dcb80cba6729c0d2407c9d963e89d4cadc5ad98744d414df9da4b4d330af9516",
    R"F1802de794C(FUN_1800668e0)F1802de794C",
    R"F1802de794D()F1802de794D",
    R"F1802de794T()F1802de794T",
    R"F1802de794F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802de794F",
    R"F1802de794U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de794U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de794() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de794", "FUN_1802de794");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: dcb80cba6729c0d2407c9d963e89d4cadc5ad98744d414df9da4b4d330af9516
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de794(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de794;
}

// 0x1802de940 FUN_1802de940
// source: re/dump/decompile/0x1802de940_FUN_1802de940.c
// size: 46 bytes; thunk: false
// body sha256: 43fedcf39f48203e201fca5dead67306d0305a3789fc588df1c90906afe42edb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de940{
    "0x1802de940",
    "FUN_1802de940",
    R"F1802de940S(undefined FUN_1802de940())F1802de940S",
    R"B1802de940(// 0x1802de940  FUN_1802de940
// size=46 thunk=false
// signature: undefined FUN_1802de940()
// status: ok


void FUN_1802de940(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802de940",
    "43fedcf39f48203e201fca5dead67306d0305a3789fc588df1c90906afe42edb",
    R"F1802de940C()F1802de940C",
    R"F1802de940D()F1802de940D",
    R"F1802de940T()F1802de940T",
    R"F1802de940F(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802de940F",
    R"F1802de940U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de940U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de940() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de940", "FUN_1802de940");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 43fedcf39f48203e201fca5dead67306d0305a3789fc588df1c90906afe42edb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de940(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de940;
}

// 0x1802de96e FUN_1802de96e
// source: re/dump/decompile/0x1802de96e_FUN_1802de96e.c
// size: 46 bytes; thunk: false
// body sha256: a78070eb1b15514ec0c06a80f9eda358872fba748e0c30baa710bbe3c12797d8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de96e{
    "0x1802de96e",
    "FUN_1802de96e",
    R"F1802de96eS(undefined FUN_1802de96e())F1802de96eS",
    R"B1802de96e(// 0x1802de96e  FUN_1802de96e
// size=46 thunk=false
// signature: undefined FUN_1802de96e()
// status: ok


void FUN_1802de96e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802de96e",
    "a78070eb1b15514ec0c06a80f9eda358872fba748e0c30baa710bbe3c12797d8",
    R"F1802de96eC()F1802de96eC",
    R"F1802de96eD()F1802de96eD",
    R"F1802de96eT()F1802de96eT",
    R"F1802de96eF(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802de96eF",
    R"F1802de96eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de96eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de96e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de96e", "FUN_1802de96e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a78070eb1b15514ec0c06a80f9eda358872fba748e0c30baa710bbe3c12797d8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de96e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de96e;
}

// 0x1802de9a8 FUN_1802de9a8
// source: re/dump/decompile/0x1802de9a8_FUN_1802de9a8.c
// size: 46 bytes; thunk: false
// body sha256: 47a69f4bcb0fdf3832879dbce483f0babd3f7b3cebbc85bb8ab932b3ef6303c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de9a8{
    "0x1802de9a8",
    "FUN_1802de9a8",
    R"F1802de9a8S(undefined FUN_1802de9a8())F1802de9a8S",
    R"B1802de9a8(// 0x1802de9a8  FUN_1802de9a8
// size=46 thunk=false
// signature: undefined FUN_1802de9a8()
// status: ok


void FUN_1802de9a8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802de9a8",
    "47a69f4bcb0fdf3832879dbce483f0babd3f7b3cebbc85bb8ab932b3ef6303c7",
    R"F1802de9a8C()F1802de9a8C",
    R"F1802de9a8D()F1802de9a8D",
    R"F1802de9a8T()F1802de9a8T",
    R"F1802de9a8F(10: if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
14: return;)F1802de9a8F",
    R"F1802de9a8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de9a8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de9a8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de9a8", "FUN_1802de9a8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 47a69f4bcb0fdf3832879dbce483f0babd3f7b3cebbc85bb8ab932b3ef6303c7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de9a8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de9a8;
}

// 0x1802de9d6 FUN_1802de9d6
// source: re/dump/decompile/0x1802de9d6_FUN_1802de9d6.c
// size: 46 bytes; thunk: false
// body sha256: 7759901e8628f622a35453b7a5751551e123931022f19522b13af4456ab46448
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802de9d6{
    "0x1802de9d6",
    "FUN_1802de9d6",
    R"F1802de9d6S(undefined FUN_1802de9d6())F1802de9d6S",
    R"B1802de9d6(// 0x1802de9d6  FUN_1802de9d6
// size=46 thunk=false
// signature: undefined FUN_1802de9d6()
// status: ok


void FUN_1802de9d6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802de9d6",
    "7759901e8628f622a35453b7a5751551e123931022f19522b13af4456ab46448",
    R"F1802de9d6C()F1802de9d6C",
    R"F1802de9d6D()F1802de9d6D",
    R"F1802de9d6T()F1802de9d6T",
    R"F1802de9d6F(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802de9d6F",
    R"F1802de9d6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802de9d6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802de9d6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802de9d6", "FUN_1802de9d6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7759901e8628f622a35453b7a5751551e123931022f19522b13af4456ab46448
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802de9d6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802de9d6;
}

// 0x1802dea10 FUN_1802dea10
// source: re/dump/decompile/0x1802dea10_FUN_1802dea10.c
// size: 46 bytes; thunk: false
// body sha256: 66cf745207e73c9641d2095ac62b28f2d9a6140c7214e5f27f98ef47c2a4dcce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dea10{
    "0x1802dea10",
    "FUN_1802dea10",
    R"F1802dea10S(undefined FUN_1802dea10())F1802dea10S",
    R"B1802dea10(// 0x1802dea10  FUN_1802dea10
// size=46 thunk=false
// signature: undefined FUN_1802dea10()
// status: ok


void FUN_1802dea10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802dea10",
    "66cf745207e73c9641d2095ac62b28f2d9a6140c7214e5f27f98ef47c2a4dcce",
    R"F1802dea10C()F1802dea10C",
    R"F1802dea10D()F1802dea10D",
    R"F1802dea10T()F1802dea10T",
    R"F1802dea10F(10: if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
14: return;)F1802dea10F",
    R"F1802dea10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dea10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dea10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dea10", "FUN_1802dea10");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 66cf745207e73c9641d2095ac62b28f2d9a6140c7214e5f27f98ef47c2a4dcce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dea10(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dea10;
}

// 0x1802dea3e FUN_1802dea3e
// source: re/dump/decompile/0x1802dea3e_FUN_1802dea3e.c
// size: 46 bytes; thunk: false
// body sha256: 7754bb33494aeb84c9b90bca8fff6081235f2c96a3fa194a51d677340218696c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dea3e{
    "0x1802dea3e",
    "FUN_1802dea3e",
    R"F1802dea3eS(undefined FUN_1802dea3e())F1802dea3eS",
    R"B1802dea3e(// 0x1802dea3e  FUN_1802dea3e
// size=46 thunk=false
// signature: undefined FUN_1802dea3e()
// status: ok


void FUN_1802dea3e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802dea3e",
    "7754bb33494aeb84c9b90bca8fff6081235f2c96a3fa194a51d677340218696c",
    R"F1802dea3eC()F1802dea3eC",
    R"F1802dea3eD()F1802dea3eD",
    R"F1802dea3eT()F1802dea3eT",
    R"F1802dea3eF(10: if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
14: return;)F1802dea3eF",
    R"F1802dea3eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dea3eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dea3e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dea3e", "FUN_1802dea3e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7754bb33494aeb84c9b90bca8fff6081235f2c96a3fa194a51d677340218696c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dea3e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dea3e;
}

// 0x1802dea84 FUN_1802dea84
// source: re/dump/decompile/0x1802dea84_FUN_1802dea84.c
// size: 41 bytes; thunk: false
// body sha256: e88f754a4a69b458ea49d93ffb18feadb7186eeedbf24f49471176e42b6945ef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dea84{
    "0x1802dea84",
    "FUN_1802dea84",
    R"F1802dea84S(undefined FUN_1802dea84())F1802dea84S",
    R"B1802dea84(// 0x1802dea84  FUN_1802dea84
// size=41 thunk=false
// signature: undefined FUN_1802dea84()
// status: ok


void FUN_1802dea84(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0xd0));
  }
  return;
}


)B1802dea84",
    "e88f754a4a69b458ea49d93ffb18feadb7186eeedbf24f49471176e42b6945ef",
    R"F1802dea84C(FUN_1800668e0)F1802dea84C",
    R"F1802dea84D()F1802dea84D",
    R"F1802dea84T()F1802dea84T",
    R"F1802dea84F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802dea84F",
    R"F1802dea84U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dea84U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dea84() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dea84", "FUN_1802dea84");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: e88f754a4a69b458ea49d93ffb18feadb7186eeedbf24f49471176e42b6945ef
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dea84(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0xd0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dea84;
}

// 0x1802deadd FUN_1802deadd
// source: re/dump/decompile/0x1802deadd_FUN_1802deadd.c
// size: 46 bytes; thunk: false
// body sha256: 0af2a071719f3b09c2487a0b5e9e7c521c78a783f26de4d290b9e592001fdde3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802deadd{
    "0x1802deadd",
    "FUN_1802deadd",
    R"F1802deaddS(undefined FUN_1802deadd())F1802deaddS",
    R"B1802deadd(// 0x1802deadd  FUN_1802deadd
// size=46 thunk=false
// signature: undefined FUN_1802deadd()
// status: ok


void FUN_1802deadd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802deadd",
    "0af2a071719f3b09c2487a0b5e9e7c521c78a783f26de4d290b9e592001fdde3",
    R"F1802deaddC()F1802deaddC",
    R"F1802deaddD()F1802deaddD",
    R"F1802deaddT()F1802deaddT",
    R"F1802deaddF(10: if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
14: return;)F1802deaddF",
    R"F1802deaddU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802deaddU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802deadd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802deadd", "FUN_1802deadd");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0af2a071719f3b09c2487a0b5e9e7c521c78a783f26de4d290b9e592001fdde3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802deadd(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802deadd;
}

// 0x1802deb0b FUN_1802deb0b
// source: re/dump/decompile/0x1802deb0b_FUN_1802deb0b.c
// size: 46 bytes; thunk: false
// body sha256: 77ecb210a9672e458116c4233fc4f2768ea921a8560dc08d7cf30bc6986c9ee7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802deb0b{
    "0x1802deb0b",
    "FUN_1802deb0b",
    R"F1802deb0bS(undefined FUN_1802deb0b())F1802deb0bS",
    R"B1802deb0b(// 0x1802deb0b  FUN_1802deb0b
// size=46 thunk=false
// signature: undefined FUN_1802deb0b()
// status: ok


void FUN_1802deb0b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802deb0b",
    "77ecb210a9672e458116c4233fc4f2768ea921a8560dc08d7cf30bc6986c9ee7",
    R"F1802deb0bC()F1802deb0bC",
    R"F1802deb0bD()F1802deb0bD",
    R"F1802deb0bT()F1802deb0bT",
    R"F1802deb0bF(10: if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
14: return;)F1802deb0bF",
    R"F1802deb0bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802deb0bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802deb0b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802deb0b", "FUN_1802deb0b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 77ecb210a9672e458116c4233fc4f2768ea921a8560dc08d7cf30bc6986c9ee7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802deb0b(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802deb0b;
}

// 0x1802deb45 FUN_1802deb45
// source: re/dump/decompile/0x1802deb45_FUN_1802deb45.c
// size: 46 bytes; thunk: false
// body sha256: c67165cbeb4e5029bf14f5204c6a2f22421406d5f59e4d2caf9eae272cdaf7ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802deb45{
    "0x1802deb45",
    "FUN_1802deb45",
    R"F1802deb45S(undefined FUN_1802deb45())F1802deb45S",
    R"B1802deb45(// 0x1802deb45  FUN_1802deb45
// size=46 thunk=false
// signature: undefined FUN_1802deb45()
// status: ok


void FUN_1802deb45(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffff7fff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802deb45",
    "c67165cbeb4e5029bf14f5204c6a2f22421406d5f59e4d2caf9eae272cdaf7ec",
    R"F1802deb45C()F1802deb45C",
    R"F1802deb45D()F1802deb45D",
    R"F1802deb45T()F1802deb45T",
    R"F1802deb45F(10: if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) {
14: return;)F1802deb45F",
    R"F1802deb45U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802deb45U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802deb45() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802deb45", "FUN_1802deb45");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c67165cbeb4e5029bf14f5204c6a2f22421406d5f59e4d2caf9eae272cdaf7ec
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802deb45(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffff7fff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802deb45;
}

// 0x1802deb73 FUN_1802deb73
// source: re/dump/decompile/0x1802deb73_FUN_1802deb73.c
// size: 46 bytes; thunk: false
// body sha256: c9946f09e7dc90b4ee0f0c9089cdf939ed405ad9d32fe2a3a57fce2b1e6bb813
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802deb73{
    "0x1802deb73",
    "FUN_1802deb73",
    R"F1802deb73S(undefined FUN_1802deb73())F1802deb73S",
    R"B1802deb73(// 0x1802deb73  FUN_1802deb73
// size=46 thunk=false
// signature: undefined FUN_1802deb73()
// status: ok


void FUN_1802deb73(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802deb73",
    "c9946f09e7dc90b4ee0f0c9089cdf939ed405ad9d32fe2a3a57fce2b1e6bb813",
    R"F1802deb73C()F1802deb73C",
    R"F1802deb73D()F1802deb73D",
    R"F1802deb73T()F1802deb73T",
    R"F1802deb73F(10: if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
14: return;)F1802deb73F",
    R"F1802deb73U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802deb73U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802deb73() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802deb73", "FUN_1802deb73");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c9946f09e7dc90b4ee0f0c9089cdf939ed405ad9d32fe2a3a57fce2b1e6bb813
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802deb73(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802deb73;
}

// 0x1802debad FUN_1802debad
// source: re/dump/decompile/0x1802debad_FUN_1802debad.c
// size: 46 bytes; thunk: false
// body sha256: f76004404693f521317d69df3589dd09af5707a5b95c802640d91364d95e58b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802debad{
    "0x1802debad",
    "FUN_1802debad",
    R"F1802debadS(undefined FUN_1802debad())F1802debadS",
    R"B1802debad(// 0x1802debad  FUN_1802debad
// size=46 thunk=false
// signature: undefined FUN_1802debad()
// status: ok


void FUN_1802debad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802debad",
    "f76004404693f521317d69df3589dd09af5707a5b95c802640d91364d95e58b5",
    R"F1802debadC()F1802debadC",
    R"F1802debadD()F1802debadD",
    R"F1802debadT()F1802debadT",
    R"F1802debadF(10: if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
14: return;)F1802debadF",
    R"F1802debadU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802debadU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802debad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802debad", "FUN_1802debad");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f76004404693f521317d69df3589dd09af5707a5b95c802640d91364d95e58b5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802debad(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802debad;
}

// 0x1802debdb FUN_1802debdb
// source: re/dump/decompile/0x1802debdb_FUN_1802debdb.c
// size: 46 bytes; thunk: false
// body sha256: b1d184c91cc487bfe66bc08b36e0046da555bbc068b83e0fd255a8ed0d0e4568
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802debdb{
    "0x1802debdb",
    "FUN_1802debdb",
    R"F1802debdbS(undefined FUN_1802debdb())F1802debdbS",
    R"B1802debdb(// 0x1802debdb  FUN_1802debdb
// size=46 thunk=false
// signature: undefined FUN_1802debdb()
// status: ok


void FUN_1802debdb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802debdb",
    "b1d184c91cc487bfe66bc08b36e0046da555bbc068b83e0fd255a8ed0d0e4568",
    R"F1802debdbC()F1802debdbC",
    R"F1802debdbD()F1802debdbD",
    R"F1802debdbT()F1802debdbT",
    R"F1802debdbF(10: if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
14: return;)F1802debdbF",
    R"F1802debdbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802debdbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802debdb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802debdb", "FUN_1802debdb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b1d184c91cc487bfe66bc08b36e0046da555bbc068b83e0fd255a8ed0d0e4568
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802debdb(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802debdb;
}

// 0x1802dec51 FUN_1802dec51
// source: re/dump/decompile/0x1802dec51_FUN_1802dec51.c
// size: 41 bytes; thunk: false
// body sha256: e1bab5e4718aa2cf909142dd29b0e7e722e03fe6ecceba30fc5c00953563d758
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dec51{
    "0x1802dec51",
    "FUN_1802dec51",
    R"F1802dec51S(undefined FUN_1802dec51())F1802dec51S",
    R"B1802dec51(// 0x1802dec51  FUN_1802dec51
// size=41 thunk=false
// signature: undefined FUN_1802dec51()
// status: ok


void FUN_1802dec51(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802dec51",
    "e1bab5e4718aa2cf909142dd29b0e7e722e03fe6ecceba30fc5c00953563d758",
    R"F1802dec51C()F1802dec51C",
    R"F1802dec51D()F1802dec51D",
    R"F1802dec51T()F1802dec51T",
    R"F1802dec51F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802dec51F",
    R"F1802dec51U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dec51U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dec51() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dec51", "FUN_1802dec51");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e1bab5e4718aa2cf909142dd29b0e7e722e03fe6ecceba30fc5c00953563d758
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dec51(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dec51;
}

// 0x1802dec7a FUN_1802dec7a
// source: re/dump/decompile/0x1802dec7a_FUN_1802dec7a.c
// size: 41 bytes; thunk: false
// body sha256: b8e19ab3c2226c129d9c47ad1a2ecf94edefabd2cd73dd0604c5d5c056224193
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dec7a{
    "0x1802dec7a",
    "FUN_1802dec7a",
    R"F1802dec7aS(undefined FUN_1802dec7a())F1802dec7aS",
    R"B1802dec7a(// 0x1802dec7a  FUN_1802dec7a
// size=41 thunk=false
// signature: undefined FUN_1802dec7a()
// status: ok


void FUN_1802dec7a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


)B1802dec7a",
    "b8e19ab3c2226c129d9c47ad1a2ecf94edefabd2cd73dd0604c5d5c056224193",
    R"F1802dec7aC()F1802dec7aC",
    R"F1802dec7aD()F1802dec7aD",
    R"F1802dec7aT()F1802dec7aT",
    R"F1802dec7aF(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802dec7aF",
    R"F1802dec7aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dec7aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dec7a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dec7a", "FUN_1802dec7a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b8e19ab3c2226c129d9c47ad1a2ecf94edefabd2cd73dd0604c5d5c056224193
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dec7a(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dec7a;
}

// 0x1802decaf FUN_1802decaf
// source: re/dump/decompile/0x1802decaf_FUN_1802decaf.c
// size: 41 bytes; thunk: false
// body sha256: 55b102f2d9a6783aede105eab8495377b92a525c57181274a2c15b4f24ae049f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802decaf{
    "0x1802decaf",
    "FUN_1802decaf",
    R"F1802decafS(undefined FUN_1802decaf())F1802decafS",
    R"B1802decaf(// 0x1802decaf  FUN_1802decaf
// size=41 thunk=false
// signature: undefined FUN_1802decaf()
// status: ok


void FUN_1802decaf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802decaf",
    "55b102f2d9a6783aede105eab8495377b92a525c57181274a2c15b4f24ae049f",
    R"F1802decafC()F1802decafC",
    R"F1802decafD()F1802decafD",
    R"F1802decafT()F1802decafT",
    R"F1802decafF(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802decafF",
    R"F1802decafU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802decafU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802decaf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802decaf", "FUN_1802decaf");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 55b102f2d9a6783aede105eab8495377b92a525c57181274a2c15b4f24ae049f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802decaf(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802decaf;
}

// 0x1802decd8 FUN_1802decd8
// source: re/dump/decompile/0x1802decd8_FUN_1802decd8.c
// size: 41 bytes; thunk: false
// body sha256: d3cefb028dc31213dec7820e6e4860812968217d90151a5c733fb1ac3907b465
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802decd8{
    "0x1802decd8",
    "FUN_1802decd8",
    R"F1802decd8S(undefined FUN_1802decd8())F1802decd8S",
    R"B1802decd8(// 0x1802decd8  FUN_1802decd8
// size=41 thunk=false
// signature: undefined FUN_1802decd8()
// status: ok


void FUN_1802decd8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802decd8",
    "d3cefb028dc31213dec7820e6e4860812968217d90151a5c733fb1ac3907b465",
    R"F1802decd8C()F1802decd8C",
    R"F1802decd8D()F1802decd8D",
    R"F1802decd8T()F1802decd8T",
    R"F1802decd8F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802decd8F",
    R"F1802decd8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802decd8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802decd8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802decd8", "FUN_1802decd8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d3cefb028dc31213dec7820e6e4860812968217d90151a5c733fb1ac3907b465
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802decd8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802decd8;
}

// 0x1802ded0d FUN_1802ded0d
// source: re/dump/decompile/0x1802ded0d_FUN_1802ded0d.c
// size: 41 bytes; thunk: false
// body sha256: 40da64ff3930bf111119992f652e79fb73466e19377284bbbc834d6df70af85f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ded0d{
    "0x1802ded0d",
    "FUN_1802ded0d",
    R"F1802ded0dS(undefined FUN_1802ded0d())F1802ded0dS",
    R"B1802ded0d(// 0x1802ded0d  FUN_1802ded0d
// size=41 thunk=false
// signature: undefined FUN_1802ded0d()
// status: ok


void FUN_1802ded0d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802ded0d",
    "40da64ff3930bf111119992f652e79fb73466e19377284bbbc834d6df70af85f",
    R"F1802ded0dC()F1802ded0dC",
    R"F1802ded0dD()F1802ded0dD",
    R"F1802ded0dT()F1802ded0dT",
    R"F1802ded0dF(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802ded0dF",
    R"F1802ded0dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ded0dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ded0d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ded0d", "FUN_1802ded0d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 40da64ff3930bf111119992f652e79fb73466e19377284bbbc834d6df70af85f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ded0d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ded0d;
}

// 0x1802ded36 FUN_1802ded36
// source: re/dump/decompile/0x1802ded36_FUN_1802ded36.c
// size: 41 bytes; thunk: false
// body sha256: 02aa5cedd4be6a8ce4253fbe3c7b8e19d3b367696efcd2e777a00149fb47507a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ded36{
    "0x1802ded36",
    "FUN_1802ded36",
    R"F1802ded36S(undefined FUN_1802ded36())F1802ded36S",
    R"B1802ded36(// 0x1802ded36  FUN_1802ded36
// size=41 thunk=false
// signature: undefined FUN_1802ded36()
// status: ok


void FUN_1802ded36(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802ded36",
    "02aa5cedd4be6a8ce4253fbe3c7b8e19d3b367696efcd2e777a00149fb47507a",
    R"F1802ded36C()F1802ded36C",
    R"F1802ded36D()F1802ded36D",
    R"F1802ded36T()F1802ded36T",
    R"F1802ded36F(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802ded36F",
    R"F1802ded36U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ded36U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ded36() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ded36", "FUN_1802ded36");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 02aa5cedd4be6a8ce4253fbe3c7b8e19d3b367696efcd2e777a00149fb47507a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ded36(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ded36;
}

// 0x1802dee04 FUN_1802dee04
// source: re/dump/decompile/0x1802dee04_FUN_1802dee04.c
// size: 41 bytes; thunk: false
// body sha256: 503348f7654486fd31c34ed409bb6c1bc88dee396f148af6f17393797275ced6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dee04{
    "0x1802dee04",
    "FUN_1802dee04",
    R"F1802dee04S(undefined FUN_1802dee04())F1802dee04S",
    R"B1802dee04(// 0x1802dee04  FUN_1802dee04
// size=41 thunk=false
// signature: undefined FUN_1802dee04()
// status: ok


void FUN_1802dee04(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802dee04",
    "503348f7654486fd31c34ed409bb6c1bc88dee396f148af6f17393797275ced6",
    R"F1802dee04C()F1802dee04C",
    R"F1802dee04D()F1802dee04D",
    R"F1802dee04T()F1802dee04T",
    R"F1802dee04F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802dee04F",
    R"F1802dee04U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dee04U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dee04() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dee04", "FUN_1802dee04");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 503348f7654486fd31c34ed409bb6c1bc88dee396f148af6f17393797275ced6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dee04(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dee04;
}

// 0x1802dee2d FUN_1802dee2d
// source: re/dump/decompile/0x1802dee2d_FUN_1802dee2d.c
// size: 41 bytes; thunk: false
// body sha256: 6ed374d8eb49582757b78e5e848658db244cddebedbf72f05758159f79b0e4b3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dee2d{
    "0x1802dee2d",
    "FUN_1802dee2d",
    R"F1802dee2dS(undefined FUN_1802dee2d())F1802dee2dS",
    R"B1802dee2d(// 0x1802dee2d  FUN_1802dee2d
// size=41 thunk=false
// signature: undefined FUN_1802dee2d()
// status: ok


void FUN_1802dee2d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802dee2d",
    "6ed374d8eb49582757b78e5e848658db244cddebedbf72f05758159f79b0e4b3",
    R"F1802dee2dC()F1802dee2dC",
    R"F1802dee2dD()F1802dee2dD",
    R"F1802dee2dT()F1802dee2dT",
    R"F1802dee2dF(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802dee2dF",
    R"F1802dee2dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dee2dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dee2d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dee2d", "FUN_1802dee2d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6ed374d8eb49582757b78e5e848658db244cddebedbf72f05758159f79b0e4b3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dee2d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dee2d;
}

// 0x1802deeaa FUN_1802deeaa
// source: re/dump/decompile/0x1802deeaa_FUN_1802deeaa.c
// size: 38 bytes; thunk: false
// body sha256: 08a6ab723a3f06edcab0157221fdf0eb30dfd97696e18f900f011a3ee34974ed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802deeaa{
    "0x1802deeaa",
    "FUN_1802deeaa",
    R"F1802deeaaS(undefined FUN_1802deeaa())F1802deeaaS",
    R"B1802deeaa(// 0x1802deeaa  FUN_1802deeaa
// size=38 thunk=false
// signature: undefined FUN_1802deeaa()
// status: ok


void FUN_1802deeaa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_180066900(param_2 + 0x70);
  }
  return;
}


)B1802deeaa",
    "08a6ab723a3f06edcab0157221fdf0eb30dfd97696e18f900f011a3ee34974ed",
    R"F1802deeaaC(FUN_180066900)F1802deeaaC",
    R"F1802deeaaD()F1802deeaaD",
    R"F1802deeaaT()F1802deeaaT",
    R"F1802deeaaF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802deeaaF",
    R"F1802deeaaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802deeaaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802deeaa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802deeaa", "FUN_1802deeaa");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180066900", reinterpret_cast<const void*>(&image::FUN_180066900));
    // body sha256: 08a6ab723a3f06edcab0157221fdf0eb30dfd97696e18f900f011a3ee34974ed
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802deeaa(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_180066900(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802deeaa;
}

// 0x1802def08 FUN_1802def08
// source: re/dump/decompile/0x1802def08_FUN_1802def08.c
// size: 41 bytes; thunk: false
// body sha256: d277726fe785b29bd793f37a8c34abd9352c15839251c37b9bf4eedbe7ab4523
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802def08{
    "0x1802def08",
    "FUN_1802def08",
    R"F1802def08S(undefined FUN_1802def08())F1802def08S",
    R"B1802def08(// 0x1802def08  FUN_1802def08
// size=41 thunk=false
// signature: undefined FUN_1802def08()
// status: ok


void FUN_1802def08(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180066900(param_2 + 0xd0);
  }
  return;
}


)B1802def08",
    "d277726fe785b29bd793f37a8c34abd9352c15839251c37b9bf4eedbe7ab4523",
    R"F1802def08C(FUN_180066900)F1802def08C",
    R"F1802def08D()F1802def08D",
    R"F1802def08T()F1802def08T",
    R"F1802def08F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802def08F",
    R"F1802def08U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802def08U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802def08() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802def08", "FUN_1802def08");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180066900", reinterpret_cast<const void*>(&image::FUN_180066900));
    // body sha256: d277726fe785b29bd793f37a8c34abd9352c15839251c37b9bf4eedbe7ab4523
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802def08(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180066900(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802def08;
}

// 0x1802defed FUN_1802defed
// source: re/dump/decompile/0x1802defed_FUN_1802defed.c
// size: 29 bytes; thunk: false
// body sha256: 0a291939b1df75078eeffc08bceb5a98b9e39a84e57a1e00bc481ebd75674b78
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802defed{
    "0x1802defed",
    "FUN_1802defed",
    R"F1802defedS(undefined FUN_1802defed())F1802defedS",
    R"B1802defed(// 0x1802defed  FUN_1802defed
// size=29 thunk=false
// signature: undefined FUN_1802defed()
// status: ok


undefined8 FUN_1802defed(void)

{
  return 0;
}


)B1802defed",
    "0a291939b1df75078eeffc08bceb5a98b9e39a84e57a1e00bc481ebd75674b78",
    R"F1802defedC()F1802defedC",
    R"F1802defedD()F1802defedD",
    R"F1802defedT()F1802defedT",
    R"F1802defedF(10: return 0;)F1802defedF",
    R"F1802defedU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802defedU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802defed() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802defed", "FUN_1802defed");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0a291939b1df75078eeffc08bceb5a98b9e39a84e57a1e00bc481ebd75674b78
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802defed(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802defed;
}

// 0x1802df094 FUN_1802df094
// source: re/dump/decompile/0x1802df094_FUN_1802df094.c
// size: 43 bytes; thunk: false
// body sha256: 516080f6c392e5606a1fc49f1e5b7f336de37053396e177800f7710ef3e84119
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df094{
    "0x1802df094",
    "FUN_1802df094",
    R"F1802df094S(undefined FUN_1802df094())F1802df094S",
    R"B1802df094(// 0x1802df094  FUN_1802df094
// size=43 thunk=false
// signature: undefined FUN_1802df094()
// status: ok


undefined8 FUN_1802df094(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0xe0))();
  return 0;
}


)B1802df094",
    "516080f6c392e5606a1fc49f1e5b7f336de37053396e177800f7710ef3e84119",
    R"F1802df094C()F1802df094C",
    R"F1802df094D()F1802df094D",
    R"F1802df094T()F1802df094T",
    R"F1802df094F(11: return 0;)F1802df094F",
    R"F1802df094U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x70) + 0xe0))();.)F1802df094U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df094() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df094", "FUN_1802df094");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x70) + 0xe0))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 516080f6c392e5606a1fc49f1e5b7f336de37053396e177800f7710ef3e84119
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df094(undefined8 param_1,longlong param_2)");
        {
            trace.statement("(**(code **)(**(longlong **)(param_2 + 0x70) + 0xe0))();");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df094;
}

// 0x1802df13c FUN_1802df13c
// source: re/dump/decompile/0x1802df13c_FUN_1802df13c.c
// size: 45 bytes; thunk: false
// body sha256: a508058d393eaa22d643fc6179807cef85793fd9780aef607ec58b29b19be012
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df13c{
    "0x1802df13c",
    "FUN_1802df13c",
    R"F1802df13cS(undefined FUN_1802df13c())F1802df13cS",
    R"B1802df13c(// 0x1802df13c  FUN_1802df13c
// size=45 thunk=false
// signature: undefined FUN_1802df13c()
// status: ok


undefined8 FUN_1802df13c(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0xf8))(*(longlong **)(param_2 + 0x40),0);
  return 0;
}


)B1802df13c",
    "a508058d393eaa22d643fc6179807cef85793fd9780aef607ec58b29b19be012",
    R"F1802df13cC()F1802df13cC",
    R"F1802df13cD()F1802df13cD",
    R"F1802df13cT()F1802df13cT",
    R"F1802df13cF(11: return 0;)F1802df13cF",
    R"F1802df13cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x40) + 0xf8))(*(longlong **)(param_2 + 0x40),0);.)F1802df13cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df13c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df13c", "FUN_1802df13c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x40) + 0xf8))(*(longlong **)(param_2 + 0x40),0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a508058d393eaa22d643fc6179807cef85793fd9780aef607ec58b29b19be012
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df13c(undefined8 param_1,longlong param_2)");
        {
            trace.statement("(**(code **)(**(longlong **)(param_2 + 0x40) + 0xf8))(*(longlong **)(param_2 + 0x40),0);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df13c;
}

// 0x1802df1a4 FUN_1802df1a4
// source: re/dump/decompile/0x1802df1a4_FUN_1802df1a4.c
// size: 45 bytes; thunk: false
// body sha256: 393ddf68de236f0477912c4280f874f4c40e1066ff0f47656898225cb073cf19
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df1a4{
    "0x1802df1a4",
    "FUN_1802df1a4",
    R"F1802df1a4S(undefined FUN_1802df1a4())F1802df1a4S",
    R"B1802df1a4(// 0x1802df1a4  FUN_1802df1a4
// size=45 thunk=false
// signature: undefined FUN_1802df1a4()
// status: ok


undefined8 FUN_1802df1a4(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0xf8))(*(longlong **)(param_2 + 0x30),0);
  return 0;
}


)B1802df1a4",
    "393ddf68de236f0477912c4280f874f4c40e1066ff0f47656898225cb073cf19",
    R"F1802df1a4C()F1802df1a4C",
    R"F1802df1a4D()F1802df1a4D",
    R"F1802df1a4T()F1802df1a4T",
    R"F1802df1a4F(11: return 0;)F1802df1a4F",
    R"F1802df1a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x30) + 0xf8))(*(longlong **)(param_2 + 0x30),0);.)F1802df1a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df1a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df1a4", "FUN_1802df1a4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x30) + 0xf8))(*(longlong **)(param_2 + 0x30),0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 393ddf68de236f0477912c4280f874f4c40e1066ff0f47656898225cb073cf19
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df1a4(undefined8 param_1,longlong param_2)");
        {
            trace.statement("(**(code **)(**(longlong **)(param_2 + 0x30) + 0xf8))(*(longlong **)(param_2 + 0x30),0);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df1a4;
}

// 0x1802df204 FUN_1802df204
// source: re/dump/decompile/0x1802df204_FUN_1802df204.c
// size: 45 bytes; thunk: false
// body sha256: 50eaea32245b4bd3e7a67bf79dcfdb4eb415199bf214aaa0c8e00be7f85380cb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df204{
    "0x1802df204",
    "FUN_1802df204",
    R"F1802df204S(undefined FUN_1802df204())F1802df204S",
    R"B1802df204(// 0x1802df204  FUN_1802df204
// size=45 thunk=false
// signature: undefined FUN_1802df204()
// status: ok


undefined8 FUN_1802df204(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);
  return 0;
}


)B1802df204",
    "50eaea32245b4bd3e7a67bf79dcfdb4eb415199bf214aaa0c8e00be7f85380cb",
    R"F1802df204C()F1802df204C",
    R"F1802df204D()F1802df204D",
    R"F1802df204T()F1802df204T",
    R"F1802df204F(11: return 0;)F1802df204F",
    R"F1802df204U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);.)F1802df204U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df204() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df204", "FUN_1802df204");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 50eaea32245b4bd3e7a67bf79dcfdb4eb415199bf214aaa0c8e00be7f85380cb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df204(undefined8 param_1,longlong param_2)");
        {
            trace.statement("(**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df204;
}

// 0x1802df30c FUN_1802df30c
// source: re/dump/decompile/0x1802df30c_FUN_1802df30c.c
// size: 29 bytes; thunk: false
// body sha256: 0a9fd2f4cf83b4b387e2e1513b25137fe641ece80a4bb20fb30e40054bce5330
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df30c{
    "0x1802df30c",
    "FUN_1802df30c",
    R"F1802df30cS(undefined FUN_1802df30c())F1802df30cS",
    R"B1802df30c(// 0x1802df30c  FUN_1802df30c
// size=29 thunk=false
// signature: undefined FUN_1802df30c()
// status: ok


undefined8 FUN_1802df30c(void)

{
  return 0;
}


)B1802df30c",
    "0a9fd2f4cf83b4b387e2e1513b25137fe641ece80a4bb20fb30e40054bce5330",
    R"F1802df30cC()F1802df30cC",
    R"F1802df30cD()F1802df30cD",
    R"F1802df30cT()F1802df30cT",
    R"F1802df30cF(10: return 0;)F1802df30cF",
    R"F1802df30cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df30cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df30c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df30c", "FUN_1802df30c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0a9fd2f4cf83b4b387e2e1513b25137fe641ece80a4bb20fb30e40054bce5330
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df30c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802df30c;
}

// 0x1802df364 FUN_1802df364
// source: re/dump/decompile/0x1802df364_FUN_1802df364.c
// size: 45 bytes; thunk: false
// body sha256: f707b73edef77b8dfb0413d87c8565b7b52ad7f94cb6b6f59485993306550ab7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df364{
    "0x1802df364",
    "FUN_1802df364",
    R"F1802df364S(undefined FUN_1802df364())F1802df364S",
    R"B1802df364(// 0x1802df364  FUN_1802df364
// size=45 thunk=false
// signature: undefined FUN_1802df364()
// status: ok


undefined8 FUN_1802df364(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);
  return 0;
}


)B1802df364",
    "f707b73edef77b8dfb0413d87c8565b7b52ad7f94cb6b6f59485993306550ab7",
    R"F1802df364C()F1802df364C",
    R"F1802df364D()F1802df364D",
    R"F1802df364T()F1802df364T",
    R"F1802df364F(11: return 0;)F1802df364F",
    R"F1802df364U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);.)F1802df364U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df364() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df364", "FUN_1802df364");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f707b73edef77b8dfb0413d87c8565b7b52ad7f94cb6b6f59485993306550ab7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df364(undefined8 param_1,longlong param_2)");
        {
            trace.statement("(**(code **)(**(longlong **)(param_2 + 0x20) + 0xf8))(*(longlong **)(param_2 + 0x20),0);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df364;
}

// 0x1802df750 FUN_1802df750
// source: re/dump/decompile/0x1802df750_FUN_1802df750.c
// size: 29 bytes; thunk: false
// body sha256: 2c8a94a6de70e1d20e57686e9d5cc75a41b96125b177eeeb31d7bc77232bca32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df750{
    "0x1802df750",
    "FUN_1802df750",
    R"F1802df750S(undefined FUN_1802df750())F1802df750S",
    R"B1802df750(// 0x1802df750  FUN_1802df750
// size=29 thunk=false
// signature: undefined FUN_1802df750()
// status: ok


undefined8 FUN_1802df750(void)

{
  return 0;
}


)B1802df750",
    "2c8a94a6de70e1d20e57686e9d5cc75a41b96125b177eeeb31d7bc77232bca32",
    R"F1802df750C()F1802df750C",
    R"F1802df750D()F1802df750D",
    R"F1802df750T()F1802df750T",
    R"F1802df750F(10: return 0;)F1802df750F",
    R"F1802df750U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df750() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df750", "FUN_1802df750");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2c8a94a6de70e1d20e57686e9d5cc75a41b96125b177eeeb31d7bc77232bca32
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df750(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802df750;
}

// 0x1802df76e FUN_1802df76e
// source: re/dump/decompile/0x1802df76e_FUN_1802df76e.c
// size: 33 bytes; thunk: false
// body sha256: 2567b589b6622576169bf7c7f401d4e531d7270f6f3da82d20e4ea36af3a1db2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df76e{
    "0x1802df76e",
    "FUN_1802df76e",
    R"F1802df76eS(undefined FUN_1802df76e())F1802df76eS",
    R"B1802df76e(// 0x1802df76e  FUN_1802df76e
// size=33 thunk=false
// signature: undefined FUN_1802df76e()
// status: ok


undefined8 FUN_1802df76e(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x30) = 0;
  return 0;
}


)B1802df76e",
    "2567b589b6622576169bf7c7f401d4e531d7270f6f3da82d20e4ea36af3a1db2",
    R"F1802df76eC()F1802df76eC",
    R"F1802df76eD()F1802df76eD",
    R"F1802df76eT()F1802df76eT",
    R"F1802df76eF(11: return 0;)F1802df76eF",
    R"F1802df76eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df76eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df76e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df76e", "FUN_1802df76e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2567b589b6622576169bf7c7f401d4e531d7270f6f3da82d20e4ea36af3a1db2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df76e(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined1 *)(param_2 + 0x30) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df76e;
}

// 0x1802df790 FUN_1802df790
// source: re/dump/decompile/0x1802df790_FUN_1802df790.c
// size: 33 bytes; thunk: false
// body sha256: bc76b14ba9c6a3fcb3a7f9916d8c99a47ddc0684148467090e98469d4960d4fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df790{
    "0x1802df790",
    "FUN_1802df790",
    R"F1802df790S(undefined FUN_1802df790())F1802df790S",
    R"B1802df790(// 0x1802df790  FUN_1802df790
// size=33 thunk=false
// signature: undefined FUN_1802df790()
// status: ok


undefined8 FUN_1802df790(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x40) = 0;
  return 0;
}


)B1802df790",
    "bc76b14ba9c6a3fcb3a7f9916d8c99a47ddc0684148467090e98469d4960d4fb",
    R"F1802df790C()F1802df790C",
    R"F1802df790D()F1802df790D",
    R"F1802df790T()F1802df790T",
    R"F1802df790F(11: return 0;)F1802df790F",
    R"F1802df790U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df790U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df790() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df790", "FUN_1802df790");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bc76b14ba9c6a3fcb3a7f9916d8c99a47ddc0684148467090e98469d4960d4fb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df790(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined1 *)(param_2 + 0x40) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df790;
}

// 0x1802df8ec FUN_1802df8ec
// source: re/dump/decompile/0x1802df8ec_FUN_1802df8ec.c
// size: 38 bytes; thunk: false
// body sha256: fa72cdde029b70246fddcf4f6f9a40d596c09ccb7b1ec491fa999984da6b2bac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df8ec{
    "0x1802df8ec",
    "FUN_1802df8ec",
    R"F1802df8ecS(undefined FUN_1802df8ec())F1802df8ecS",
    R"B1802df8ec(// 0x1802df8ec  FUN_1802df8ec
// size=38 thunk=false
// signature: undefined FUN_1802df8ec()
// status: ok


void FUN_1802df8ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802df8ec",
    "fa72cdde029b70246fddcf4f6f9a40d596c09ccb7b1ec491fa999984da6b2bac",
    R"F1802df8ecC()F1802df8ecC",
    R"F1802df8ecD()F1802df8ecD",
    R"F1802df8ecT()F1802df8ecT",
    R"F1802df8ecF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802df8ecF",
    R"F1802df8ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df8ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df8ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df8ec", "FUN_1802df8ec");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fa72cdde029b70246fddcf4f6f9a40d596c09ccb7b1ec491fa999984da6b2bac
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802df8ec(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802df8ec;
}

// 0x1802df912 FUN_1802df912
// source: re/dump/decompile/0x1802df912_FUN_1802df912.c
// size: 38 bytes; thunk: false
// body sha256: f761f12c4463088b969d072f0cc5b3482fa30c762e8ba7fe2c985664f4a680e9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df912{
    "0x1802df912",
    "FUN_1802df912",
    R"F1802df912S(undefined FUN_1802df912())F1802df912S",
    R"B1802df912(// 0x1802df912  FUN_1802df912
// size=38 thunk=false
// signature: undefined FUN_1802df912()
// status: ok


void FUN_1802df912(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802df912",
    "f761f12c4463088b969d072f0cc5b3482fa30c762e8ba7fe2c985664f4a680e9",
    R"F1802df912C()F1802df912C",
    R"F1802df912D()F1802df912D",
    R"F1802df912T()F1802df912T",
    R"F1802df912F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802df912F",
    R"F1802df912U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df912U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df912() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df912", "FUN_1802df912");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f761f12c4463088b969d072f0cc5b3482fa30c762e8ba7fe2c985664f4a680e9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802df912(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802df912;
}

// 0x1802df940 FUN_1802df940
// source: re/dump/decompile/0x1802df940_FUN_1802df940.c
// size: 66 bytes; thunk: false
// body sha256: 0780226eb606526766da3a8ad7168aa2e181d50f1b31361a60bf767db67d0436
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df940{
    "0x1802df940",
    "FUN_1802df940",
    R"F1802df940S(undefined FUN_1802df940())F1802df940S",
    R"B1802df940(// 0x1802df940  FUN_1802df940
// size=66 thunk=false
// signature: undefined FUN_1802df940()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802df940(void)

{
  undefined1 *puVar1;
  
  _DAT_1803eb848 = 0;
  puVar1 = &DAT_1803eb838;
  if (0xf < DAT_1803eb850) {
    puVar1 = _DAT_1803eb838;
  }
  *puVar1 = 0;
  return 0;
}


)B1802df940",
    "0780226eb606526766da3a8ad7168aa2e181d50f1b31361a60bf767db67d0436",
    R"F1802df940C()F1802df940C",
    R"F1802df940D(DAT_1803eb838
DAT_1803eb850)F1802df940D",
    R"F1802df940T()F1802df940T",
    R"F1802df940F(16: if (0xf < DAT_1803eb850) {
20: return 0;)F1802df940F",
    R"F1802df940U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb838.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb850.)F1802df940U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df940() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df940", "FUN_1802df940");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb838.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb850.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803eb838", static_cast<const void*>(&image::DAT_1803eb838));
    trace.data_ref("DAT_1803eb850", static_cast<const void*>(&image::DAT_1803eb850));
    // body sha256: 0780226eb606526766da3a8ad7168aa2e181d50f1b31361a60bf767db67d0436
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df940(void)");
        {
            trace.statement("undefined1 *puVar1;");
            trace.statement("_DAT_1803eb848 = 0;");
            trace.statement("puVar1 = &DAT_1803eb838;");
            if (trace.condition("if (0xf < DAT_1803eb850)")) {
                trace.statement("puVar1 = _DAT_1803eb838;");
            }
            trace.statement("*puVar1 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802df940;
}

// 0x1802df983 FUN_1802df983
// source: re/dump/decompile/0x1802df983_FUN_1802df983.c
// size: 29 bytes; thunk: false
// body sha256: 624bccce5172378610dee545c89a9015ef7104dfe1f00cd43ce25320c63166d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df983{
    "0x1802df983",
    "FUN_1802df983",
    R"F1802df983S(undefined FUN_1802df983())F1802df983S",
    R"B1802df983(// 0x1802df983  FUN_1802df983
// size=29 thunk=false
// signature: undefined FUN_1802df983()
// status: ok


undefined8 FUN_1802df983(void)

{
  return 0;
}


)B1802df983",
    "624bccce5172378610dee545c89a9015ef7104dfe1f00cd43ce25320c63166d5",
    R"F1802df983C()F1802df983C",
    R"F1802df983D()F1802df983D",
    R"F1802df983T()F1802df983T",
    R"F1802df983F(10: return 0;)F1802df983F",
    R"F1802df983U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df983U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df983() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df983", "FUN_1802df983");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 624bccce5172378610dee545c89a9015ef7104dfe1f00cd43ce25320c63166d5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df983(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802df983;
}

// 0x1802df9bc FUN_1802df9bc
// source: re/dump/decompile/0x1802df9bc_FUN_1802df9bc.c
// size: 29 bytes; thunk: false
// body sha256: 3abe1042e56d3b876d1e134464d2e70cf1185b716804d0ec3c036d5b2a078b97
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df9bc{
    "0x1802df9bc",
    "FUN_1802df9bc",
    R"F1802df9bcS(undefined FUN_1802df9bc())F1802df9bcS",
    R"B1802df9bc(// 0x1802df9bc  FUN_1802df9bc
// size=29 thunk=false
// signature: undefined FUN_1802df9bc()
// status: ok


undefined8 FUN_1802df9bc(void)

{
  return 0;
}


)B1802df9bc",
    "3abe1042e56d3b876d1e134464d2e70cf1185b716804d0ec3c036d5b2a078b97",
    R"F1802df9bcC()F1802df9bcC",
    R"F1802df9bcD()F1802df9bcD",
    R"F1802df9bcT()F1802df9bcT",
    R"F1802df9bcF(10: return 0;)F1802df9bcF",
    R"F1802df9bcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df9bcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df9bc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df9bc", "FUN_1802df9bc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3abe1042e56d3b876d1e134464d2e70cf1185b716804d0ec3c036d5b2a078b97
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df9bc(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802df9bc;
}

// 0x1802df9da FUN_1802df9da
// source: re/dump/decompile/0x1802df9da_FUN_1802df9da.c
// size: 29 bytes; thunk: false
// body sha256: b9b6ded99745a6c5a6f18c8fdb3bed1f106e49bcf23b974f1b7de545a5d11eb1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802df9da{
    "0x1802df9da",
    "FUN_1802df9da",
    R"F1802df9daS(undefined FUN_1802df9da())F1802df9daS",
    R"B1802df9da(// 0x1802df9da  FUN_1802df9da
// size=29 thunk=false
// signature: undefined FUN_1802df9da()
// status: ok


undefined8 FUN_1802df9da(void)

{
  return 0;
}


)B1802df9da",
    "b9b6ded99745a6c5a6f18c8fdb3bed1f106e49bcf23b974f1b7de545a5d11eb1",
    R"F1802df9daC()F1802df9daC",
    R"F1802df9daD()F1802df9daD",
    R"F1802df9daT()F1802df9daT",
    R"F1802df9daF(10: return 0;)F1802df9daF",
    R"F1802df9daU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802df9daU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802df9da() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802df9da", "FUN_1802df9da");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b9b6ded99745a6c5a6f18c8fdb3bed1f106e49bcf23b974f1b7de545a5d11eb1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802df9da(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802df9da;
}

// 0x1802dfa24 FUN_1802dfa24
// source: re/dump/decompile/0x1802dfa24_FUN_1802dfa24.c
// size: 29 bytes; thunk: false
// body sha256: d0300263860d4aaf090db6fd177fe7d0c508746c71e4c9e428ff4f318b42cea6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfa24{
    "0x1802dfa24",
    "FUN_1802dfa24",
    R"F1802dfa24S(undefined FUN_1802dfa24())F1802dfa24S",
    R"B1802dfa24(// 0x1802dfa24  FUN_1802dfa24
// size=29 thunk=false
// signature: undefined FUN_1802dfa24()
// status: ok


undefined8 FUN_1802dfa24(void)

{
  return 0;
}


)B1802dfa24",
    "d0300263860d4aaf090db6fd177fe7d0c508746c71e4c9e428ff4f318b42cea6",
    R"F1802dfa24C()F1802dfa24C",
    R"F1802dfa24D()F1802dfa24D",
    R"F1802dfa24T()F1802dfa24T",
    R"F1802dfa24F(10: return 0;)F1802dfa24F",
    R"F1802dfa24U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfa24U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfa24() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfa24", "FUN_1802dfa24");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d0300263860d4aaf090db6fd177fe7d0c508746c71e4c9e428ff4f318b42cea6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfa24(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfa24;
}

// 0x1802dfa80 FUN_1802dfa80
// source: re/dump/decompile/0x1802dfa80_FUN_1802dfa80.c
// size: 38 bytes; thunk: false
// body sha256: 2cb1f6c78f12a16726188ecd8e967839ca6b8ad13821a4b17654b8c68e89d3d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfa80{
    "0x1802dfa80",
    "FUN_1802dfa80",
    R"F1802dfa80S(undefined FUN_1802dfa80())F1802dfa80S",
    R"B1802dfa80(// 0x1802dfa80  FUN_1802dfa80
// size=38 thunk=false
// signature: undefined FUN_1802dfa80()
// status: ok


void FUN_1802dfa80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802dfa80",
    "2cb1f6c78f12a16726188ecd8e967839ca6b8ad13821a4b17654b8c68e89d3d3",
    R"F1802dfa80C()F1802dfa80C",
    R"F1802dfa80D()F1802dfa80D",
    R"F1802dfa80T()F1802dfa80T",
    R"F1802dfa80F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dfa80F",
    R"F1802dfa80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfa80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfa80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfa80", "FUN_1802dfa80");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2cb1f6c78f12a16726188ecd8e967839ca6b8ad13821a4b17654b8c68e89d3d3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfa80(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfa80;
}

// 0x1802dfab2 FUN_1802dfab2
// source: re/dump/decompile/0x1802dfab2_FUN_1802dfab2.c
// size: 29 bytes; thunk: false
// body sha256: c2ec958e1b04aea474d7795c7fe002cf2946daea925162e888f0bf6a00a6d193
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfab2{
    "0x1802dfab2",
    "FUN_1802dfab2",
    R"F1802dfab2S(undefined FUN_1802dfab2())F1802dfab2S",
    R"B1802dfab2(// 0x1802dfab2  FUN_1802dfab2
// size=29 thunk=false
// signature: undefined FUN_1802dfab2()
// status: ok


undefined8 FUN_1802dfab2(void)

{
  return 0;
}


)B1802dfab2",
    "c2ec958e1b04aea474d7795c7fe002cf2946daea925162e888f0bf6a00a6d193",
    R"F1802dfab2C()F1802dfab2C",
    R"F1802dfab2D()F1802dfab2D",
    R"F1802dfab2T()F1802dfab2T",
    R"F1802dfab2F(10: return 0;)F1802dfab2F",
    R"F1802dfab2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfab2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfab2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfab2", "FUN_1802dfab2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c2ec958e1b04aea474d7795c7fe002cf2946daea925162e888f0bf6a00a6d193
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfab2(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfab2;
}

// 0x1802dfaf4 FUN_1802dfaf4
// source: re/dump/decompile/0x1802dfaf4_FUN_1802dfaf4.c
// size: 29 bytes; thunk: false
// body sha256: df4a3a1a2433f0d7e06ed0349dbae3c3e359514f101a74bf6ea35fa50179bba0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfaf4{
    "0x1802dfaf4",
    "FUN_1802dfaf4",
    R"F1802dfaf4S(undefined FUN_1802dfaf4())F1802dfaf4S",
    R"B1802dfaf4(// 0x1802dfaf4  FUN_1802dfaf4
// size=29 thunk=false
// signature: undefined FUN_1802dfaf4()
// status: ok


undefined8 FUN_1802dfaf4(void)

{
  return 0;
}


)B1802dfaf4",
    "df4a3a1a2433f0d7e06ed0349dbae3c3e359514f101a74bf6ea35fa50179bba0",
    R"F1802dfaf4C()F1802dfaf4C",
    R"F1802dfaf4D()F1802dfaf4D",
    R"F1802dfaf4T()F1802dfaf4T",
    R"F1802dfaf4F(10: return 0;)F1802dfaf4F",
    R"F1802dfaf4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfaf4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfaf4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfaf4", "FUN_1802dfaf4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: df4a3a1a2433f0d7e06ed0349dbae3c3e359514f101a74bf6ea35fa50179bba0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfaf4(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfaf4;
}

// 0x1802dfb68 FUN_1802dfb68
// source: re/dump/decompile/0x1802dfb68_FUN_1802dfb68.c
// size: 29 bytes; thunk: false
// body sha256: c5d01e5b38c1f9487a09a70df4076c9fd54c2d0061ceb1c92b9c443caf07f195
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfb68{
    "0x1802dfb68",
    "FUN_1802dfb68",
    R"F1802dfb68S(undefined FUN_1802dfb68())F1802dfb68S",
    R"B1802dfb68(// 0x1802dfb68  FUN_1802dfb68
// size=29 thunk=false
// signature: undefined FUN_1802dfb68()
// status: ok


undefined8 FUN_1802dfb68(void)

{
  return 0;
}


)B1802dfb68",
    "c5d01e5b38c1f9487a09a70df4076c9fd54c2d0061ceb1c92b9c443caf07f195",
    R"F1802dfb68C()F1802dfb68C",
    R"F1802dfb68D()F1802dfb68D",
    R"F1802dfb68T()F1802dfb68T",
    R"F1802dfb68F(10: return 0;)F1802dfb68F",
    R"F1802dfb68U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfb68U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfb68() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfb68", "FUN_1802dfb68");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c5d01e5b38c1f9487a09a70df4076c9fd54c2d0061ceb1c92b9c443caf07f195
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfb68(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfb68;
}

// 0x1802dfbb4 FUN_1802dfbb4
// source: re/dump/decompile/0x1802dfbb4_FUN_1802dfbb4.c
// size: 29 bytes; thunk: false
// body sha256: 97e653c36153b080d8b515d48af20c600824aa391c8c3873665d2d9a7252e1e2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfbb4{
    "0x1802dfbb4",
    "FUN_1802dfbb4",
    R"F1802dfbb4S(undefined FUN_1802dfbb4())F1802dfbb4S",
    R"B1802dfbb4(// 0x1802dfbb4  FUN_1802dfbb4
// size=29 thunk=false
// signature: undefined FUN_1802dfbb4()
// status: ok


undefined8 FUN_1802dfbb4(void)

{
  return 0;
}


)B1802dfbb4",
    "97e653c36153b080d8b515d48af20c600824aa391c8c3873665d2d9a7252e1e2",
    R"F1802dfbb4C()F1802dfbb4C",
    R"F1802dfbb4D()F1802dfbb4D",
    R"F1802dfbb4T()F1802dfbb4T",
    R"F1802dfbb4F(10: return 0;)F1802dfbb4F",
    R"F1802dfbb4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfbb4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfbb4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfbb4", "FUN_1802dfbb4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 97e653c36153b080d8b515d48af20c600824aa391c8c3873665d2d9a7252e1e2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfbb4(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfbb4;
}

// 0x1802dfc1c FUN_1802dfc1c
// source: re/dump/decompile/0x1802dfc1c_FUN_1802dfc1c.c
// size: 38 bytes; thunk: false
// body sha256: 760595ea225a8941fdef4a0de983ea861270220e89264ed2f13a8fc310e705ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfc1c{
    "0x1802dfc1c",
    "FUN_1802dfc1c",
    R"F1802dfc1cS(undefined FUN_1802dfc1c())F1802dfc1cS",
    R"B1802dfc1c(// 0x1802dfc1c  FUN_1802dfc1c
// size=38 thunk=false
// signature: undefined FUN_1802dfc1c()
// status: ok


void FUN_1802dfc1c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802dfc1c",
    "760595ea225a8941fdef4a0de983ea861270220e89264ed2f13a8fc310e705ba",
    R"F1802dfc1cC()F1802dfc1cC",
    R"F1802dfc1cD()F1802dfc1cD",
    R"F1802dfc1cT()F1802dfc1cT",
    R"F1802dfc1cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dfc1cF",
    R"F1802dfc1cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfc1cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfc1c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfc1c", "FUN_1802dfc1c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 760595ea225a8941fdef4a0de983ea861270220e89264ed2f13a8fc310e705ba
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfc1c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfc1c;
}

// 0x1802dfc4e FUN_1802dfc4e
// source: re/dump/decompile/0x1802dfc4e_FUN_1802dfc4e.c
// size: 38 bytes; thunk: false
// body sha256: d2c81c3b9a55bc154578f8bb1a9b6bed567e83e1f32ba56cbe695f403a9009a0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfc4e{
    "0x1802dfc4e",
    "FUN_1802dfc4e",
    R"F1802dfc4eS(undefined FUN_1802dfc4e())F1802dfc4eS",
    R"B1802dfc4e(// 0x1802dfc4e  FUN_1802dfc4e
// size=38 thunk=false
// signature: undefined FUN_1802dfc4e()
// status: ok


void FUN_1802dfc4e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802dfc4e",
    "d2c81c3b9a55bc154578f8bb1a9b6bed567e83e1f32ba56cbe695f403a9009a0",
    R"F1802dfc4eC()F1802dfc4eC",
    R"F1802dfc4eD()F1802dfc4eD",
    R"F1802dfc4eT()F1802dfc4eT",
    R"F1802dfc4eF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802dfc4eF",
    R"F1802dfc4eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfc4eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfc4e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfc4e", "FUN_1802dfc4e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d2c81c3b9a55bc154578f8bb1a9b6bed567e83e1f32ba56cbe695f403a9009a0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfc4e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfc4e;
}

// 0x1802dfc80 FUN_1802dfc80
// source: re/dump/decompile/0x1802dfc80_FUN_1802dfc80.c
// size: 29 bytes; thunk: false
// body sha256: 377f4accf9eddefb5a04980236a3ef50ad9d8ddde18471144ce0a4d2b8e5bc1f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfc80{
    "0x1802dfc80",
    "FUN_1802dfc80",
    R"F1802dfc80S(undefined FUN_1802dfc80())F1802dfc80S",
    R"B1802dfc80(// 0x1802dfc80  FUN_1802dfc80
// size=29 thunk=false
// signature: undefined FUN_1802dfc80()
// status: ok


undefined8 FUN_1802dfc80(void)

{
  return 0;
}


)B1802dfc80",
    "377f4accf9eddefb5a04980236a3ef50ad9d8ddde18471144ce0a4d2b8e5bc1f",
    R"F1802dfc80C()F1802dfc80C",
    R"F1802dfc80D()F1802dfc80D",
    R"F1802dfc80T()F1802dfc80T",
    R"F1802dfc80F(10: return 0;)F1802dfc80F",
    R"F1802dfc80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfc80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfc80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfc80", "FUN_1802dfc80");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 377f4accf9eddefb5a04980236a3ef50ad9d8ddde18471144ce0a4d2b8e5bc1f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfc80(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfc80;
}

// 0x1802dfcac FUN_1802dfcac
// source: re/dump/decompile/0x1802dfcac_FUN_1802dfcac.c
// size: 29 bytes; thunk: false
// body sha256: 2e148d5101dea8977da9f1038d189e9717c970bd4ccc8a9ef70de214ecfc5301
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfcac{
    "0x1802dfcac",
    "FUN_1802dfcac",
    R"F1802dfcacS(undefined FUN_1802dfcac())F1802dfcacS",
    R"B1802dfcac(// 0x1802dfcac  FUN_1802dfcac
// size=29 thunk=false
// signature: undefined FUN_1802dfcac()
// status: ok


undefined8 FUN_1802dfcac(void)

{
  return 0;
}


)B1802dfcac",
    "2e148d5101dea8977da9f1038d189e9717c970bd4ccc8a9ef70de214ecfc5301",
    R"F1802dfcacC()F1802dfcacC",
    R"F1802dfcacD()F1802dfcacD",
    R"F1802dfcacT()F1802dfcacT",
    R"F1802dfcacF(10: return 0;)F1802dfcacF",
    R"F1802dfcacU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfcacU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfcac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfcac", "FUN_1802dfcac");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2e148d5101dea8977da9f1038d189e9717c970bd4ccc8a9ef70de214ecfc5301
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfcac(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfcac;
}

// 0x1802dfd00 FUN_1802dfd00
// source: re/dump/decompile/0x1802dfd00_FUN_1802dfd00.c
// size: 41 bytes; thunk: false
// body sha256: 6f9a4f5e93705ebcdb48b992e21055c7ab6c6d96ba2faab7b5c2da204b163cdb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfd00{
    "0x1802dfd00",
    "FUN_1802dfd00",
    R"F1802dfd00S(undefined FUN_1802dfd00())F1802dfd00S",
    R"B1802dfd00(// 0x1802dfd00  FUN_1802dfd00
// size=41 thunk=false
// signature: undefined FUN_1802dfd00()
// status: ok


void FUN_1802dfd00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B1802dfd00",
    "6f9a4f5e93705ebcdb48b992e21055c7ab6c6d96ba2faab7b5c2da204b163cdb",
    R"F1802dfd00C()F1802dfd00C",
    R"F1802dfd00D()F1802dfd00D",
    R"F1802dfd00T()F1802dfd00T",
    R"F1802dfd00F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dfd00F",
    R"F1802dfd00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfd00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfd00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfd00", "FUN_1802dfd00");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6f9a4f5e93705ebcdb48b992e21055c7ab6c6d96ba2faab7b5c2da204b163cdb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfd00(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfd00;
}

// 0x1802dfd29 FUN_1802dfd29
// source: re/dump/decompile/0x1802dfd29_FUN_1802dfd29.c
// size: 38 bytes; thunk: false
// body sha256: ad8ec00d9fe743046eaf445148fb12d0243afd8262617f4149619fd21cc8ba79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfd29{
    "0x1802dfd29",
    "FUN_1802dfd29",
    R"F1802dfd29S(undefined FUN_1802dfd29())F1802dfd29S",
    R"B1802dfd29(// 0x1802dfd29  FUN_1802dfd29
// size=38 thunk=false
// signature: undefined FUN_1802dfd29()
// status: ok


void FUN_1802dfd29(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802dfd29",
    "ad8ec00d9fe743046eaf445148fb12d0243afd8262617f4149619fd21cc8ba79",
    R"F1802dfd29C()F1802dfd29C",
    R"F1802dfd29D()F1802dfd29D",
    R"F1802dfd29T()F1802dfd29T",
    R"F1802dfd29F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802dfd29F",
    R"F1802dfd29U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfd29U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfd29() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfd29", "FUN_1802dfd29");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ad8ec00d9fe743046eaf445148fb12d0243afd8262617f4149619fd21cc8ba79
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfd29(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfd29;
}

// 0x1802dfd7f FUN_1802dfd7f
// source: re/dump/decompile/0x1802dfd7f_FUN_1802dfd7f.c
// size: 38 bytes; thunk: false
// body sha256: 5887f6e2590b90aec63ae4a0b368a28d8724a3f431ad49b0b9cf7a1fb54a4706
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfd7f{
    "0x1802dfd7f",
    "FUN_1802dfd7f",
    R"F1802dfd7fS(undefined FUN_1802dfd7f())F1802dfd7fS",
    R"B1802dfd7f(// 0x1802dfd7f  FUN_1802dfd7f
// size=38 thunk=false
// signature: undefined FUN_1802dfd7f()
// status: ok


void FUN_1802dfd7f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802dfd7f",
    "5887f6e2590b90aec63ae4a0b368a28d8724a3f431ad49b0b9cf7a1fb54a4706",
    R"F1802dfd7fC()F1802dfd7fC",
    R"F1802dfd7fD()F1802dfd7fD",
    R"F1802dfd7fT()F1802dfd7fT",
    R"F1802dfd7fF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802dfd7fF",
    R"F1802dfd7fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfd7fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfd7f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfd7f", "FUN_1802dfd7f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5887f6e2590b90aec63ae4a0b368a28d8724a3f431ad49b0b9cf7a1fb54a4706
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfd7f(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfd7f;
}

// 0x1802dfda5 FUN_1802dfda5
// source: re/dump/decompile/0x1802dfda5_FUN_1802dfda5.c
// size: 38 bytes; thunk: false
// body sha256: 9bd845dc6417c5a2575ddd2f75ebd4679ef9fe24d884ff2561a4bba11b9f0704
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfda5{
    "0x1802dfda5",
    "FUN_1802dfda5",
    R"F1802dfda5S(undefined FUN_1802dfda5())F1802dfda5S",
    R"B1802dfda5(// 0x1802dfda5  FUN_1802dfda5
// size=38 thunk=false
// signature: undefined FUN_1802dfda5()
// status: ok


void FUN_1802dfda5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802dfda5",
    "9bd845dc6417c5a2575ddd2f75ebd4679ef9fe24d884ff2561a4bba11b9f0704",
    R"F1802dfda5C()F1802dfda5C",
    R"F1802dfda5D()F1802dfda5D",
    R"F1802dfda5T()F1802dfda5T",
    R"F1802dfda5F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802dfda5F",
    R"F1802dfda5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfda5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfda5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfda5", "FUN_1802dfda5");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9bd845dc6417c5a2575ddd2f75ebd4679ef9fe24d884ff2561a4bba11b9f0704
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfda5(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfda5;
}

// 0x1802dfdcb FUN_1802dfdcb
// source: re/dump/decompile/0x1802dfdcb_FUN_1802dfdcb.c
// size: 29 bytes; thunk: false
// body sha256: 49a08ee326025b3eb04d2083461c2712efeabc2284826d99ec5b834f6ea660e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfdcb{
    "0x1802dfdcb",
    "FUN_1802dfdcb",
    R"F1802dfdcbS(undefined FUN_1802dfdcb())F1802dfdcbS",
    R"B1802dfdcb(// 0x1802dfdcb  FUN_1802dfdcb
// size=29 thunk=false
// signature: undefined FUN_1802dfdcb()
// status: ok


undefined8 FUN_1802dfdcb(void)

{
  return 0;
}


)B1802dfdcb",
    "49a08ee326025b3eb04d2083461c2712efeabc2284826d99ec5b834f6ea660e4",
    R"F1802dfdcbC()F1802dfdcbC",
    R"F1802dfdcbD()F1802dfdcbD",
    R"F1802dfdcbT()F1802dfdcbT",
    R"F1802dfdcbF(10: return 0;)F1802dfdcbF",
    R"F1802dfdcbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfdcbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfdcb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfdcb", "FUN_1802dfdcb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 49a08ee326025b3eb04d2083461c2712efeabc2284826d99ec5b834f6ea660e4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802dfdcb(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802dfdcb;
}

// 0x1802dfdf0 FUN_1802dfdf0
// source: re/dump/decompile/0x1802dfdf0_FUN_1802dfdf0.c
// size: 38 bytes; thunk: false
// body sha256: 5dfdd953d6951ab08494c28c0ad7c202a64a33f01360c69a7b6d0af7c9693695
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfdf0{
    "0x1802dfdf0",
    "FUN_1802dfdf0",
    R"F1802dfdf0S(undefined FUN_1802dfdf0())F1802dfdf0S",
    R"B1802dfdf0(// 0x1802dfdf0  FUN_1802dfdf0
// size=38 thunk=false
// signature: undefined FUN_1802dfdf0()
// status: ok


void FUN_1802dfdf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802dfdf0",
    "5dfdd953d6951ab08494c28c0ad7c202a64a33f01360c69a7b6d0af7c9693695",
    R"F1802dfdf0C()F1802dfdf0C",
    R"F1802dfdf0D()F1802dfdf0D",
    R"F1802dfdf0T()F1802dfdf0T",
    R"F1802dfdf0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802dfdf0F",
    R"F1802dfdf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfdf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfdf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfdf0", "FUN_1802dfdf0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5dfdd953d6951ab08494c28c0ad7c202a64a33f01360c69a7b6d0af7c9693695
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfdf0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfdf0;
}

// 0x1802dfe16 FUN_1802dfe16
// source: re/dump/decompile/0x1802dfe16_FUN_1802dfe16.c
// size: 38 bytes; thunk: false
// body sha256: f4290ca3ec43f51dff01c3b520932839f89ae0b4b6071a39660c8c7187f13aff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802dfe16{
    "0x1802dfe16",
    "FUN_1802dfe16",
    R"F1802dfe16S(undefined FUN_1802dfe16())F1802dfe16S",
    R"B1802dfe16(// 0x1802dfe16  FUN_1802dfe16
// size=38 thunk=false
// signature: undefined FUN_1802dfe16()
// status: ok


void FUN_1802dfe16(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802dfe16",
    "f4290ca3ec43f51dff01c3b520932839f89ae0b4b6071a39660c8c7187f13aff",
    R"F1802dfe16C()F1802dfe16C",
    R"F1802dfe16D()F1802dfe16D",
    R"F1802dfe16T()F1802dfe16T",
    R"F1802dfe16F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802dfe16F",
    R"F1802dfe16U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802dfe16U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802dfe16() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802dfe16", "FUN_1802dfe16");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f4290ca3ec43f51dff01c3b520932839f89ae0b4b6071a39660c8c7187f13aff
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802dfe16(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802dfe16;
}

}  // namespace sf::reconstructed
