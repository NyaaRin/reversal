// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802f0bd3 FUN_1802f0bd3
// source: re/dump/decompile/0x1802f0bd3_FUN_1802f0bd3.c
// size: 43 bytes; thunk: false
// body sha256: b3df9682f35af52b80e8e910f6427d12f4046dd3816e35c51a54546f6b96e84a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0bd3{
    "0x1802f0bd3",
    "FUN_1802f0bd3",
    R"F1802f0bd3S(undefined FUN_1802f0bd3())F1802f0bd3S",
    R"B1802f0bd3(// 0x1802f0bd3  FUN_1802f0bd3
// size=43 thunk=false
// signature: undefined FUN_1802f0bd3()
// status: ok


void FUN_1802f0bd3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0bd3",
    "b3df9682f35af52b80e8e910f6427d12f4046dd3816e35c51a54546f6b96e84a",
    R"F1802f0bd3C()F1802f0bd3C",
    R"F1802f0bd3D()F1802f0bd3D",
    R"F1802f0bd3T()F1802f0bd3T",
    R"F1802f0bd3F(10: if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
14: return;)F1802f0bd3F",
    R"F1802f0bd3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0bd3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0bd3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0bd3", "FUN_1802f0bd3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b3df9682f35af52b80e8e910f6427d12f4046dd3816e35c51a54546f6b96e84a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0bd3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0bd3;
}

// 0x1802f0bfe FUN_1802f0bfe
// source: re/dump/decompile/0x1802f0bfe_FUN_1802f0bfe.c
// size: 43 bytes; thunk: false
// body sha256: 2a1590aff12ced1e1913abba31f10b262b4b79a5696227ac427bbd188797a906
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0bfe{
    "0x1802f0bfe",
    "FUN_1802f0bfe",
    R"F1802f0bfeS(undefined FUN_1802f0bfe())F1802f0bfeS",
    R"B1802f0bfe(// 0x1802f0bfe  FUN_1802f0bfe
// size=43 thunk=false
// signature: undefined FUN_1802f0bfe()
// status: ok


void FUN_1802f0bfe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0bfe",
    "2a1590aff12ced1e1913abba31f10b262b4b79a5696227ac427bbd188797a906",
    R"F1802f0bfeC()F1802f0bfeC",
    R"F1802f0bfeD()F1802f0bfeD",
    R"F1802f0bfeT()F1802f0bfeT",
    R"F1802f0bfeF(10: if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
14: return;)F1802f0bfeF",
    R"F1802f0bfeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0bfeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0bfe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0bfe", "FUN_1802f0bfe");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2a1590aff12ced1e1913abba31f10b262b4b79a5696227ac427bbd188797a906
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0bfe(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0bfe;
}

// 0x1802f0c65 FUN_1802f0c65
// source: re/dump/decompile/0x1802f0c65_FUN_1802f0c65.c
// size: 43 bytes; thunk: false
// body sha256: 54f776b8878aa6782cfd36678eee976297239e537983bae89cbd506668942fad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0c65{
    "0x1802f0c65",
    "FUN_1802f0c65",
    R"F1802f0c65S(undefined FUN_1802f0c65())F1802f0c65S",
    R"B1802f0c65(// 0x1802f0c65  FUN_1802f0c65
// size=43 thunk=false
// signature: undefined FUN_1802f0c65()
// status: ok


void FUN_1802f0c65(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0c65",
    "54f776b8878aa6782cfd36678eee976297239e537983bae89cbd506668942fad",
    R"F1802f0c65C()F1802f0c65C",
    R"F1802f0c65D()F1802f0c65D",
    R"F1802f0c65T()F1802f0c65T",
    R"F1802f0c65F(10: if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
14: return;)F1802f0c65F",
    R"F1802f0c65U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0c65U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0c65() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0c65", "FUN_1802f0c65");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 54f776b8878aa6782cfd36678eee976297239e537983bae89cbd506668942fad
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0c65(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0c65;
}

// 0x1802f0c90 FUN_1802f0c90
// source: re/dump/decompile/0x1802f0c90_FUN_1802f0c90.c
// size: 43 bytes; thunk: false
// body sha256: b2353f54ec70f4e31894de089e2cdf8aca01d228a4584fed0d484c5e3e1212c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0c90{
    "0x1802f0c90",
    "FUN_1802f0c90",
    R"F1802f0c90S(undefined FUN_1802f0c90())F1802f0c90S",
    R"B1802f0c90(// 0x1802f0c90  FUN_1802f0c90
// size=43 thunk=false
// signature: undefined FUN_1802f0c90()
// status: ok


void FUN_1802f0c90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0c90",
    "b2353f54ec70f4e31894de089e2cdf8aca01d228a4584fed0d484c5e3e1212c0",
    R"F1802f0c90C()F1802f0c90C",
    R"F1802f0c90D()F1802f0c90D",
    R"F1802f0c90T()F1802f0c90T",
    R"F1802f0c90F(10: if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
14: return;)F1802f0c90F",
    R"F1802f0c90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0c90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0c90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0c90", "FUN_1802f0c90");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b2353f54ec70f4e31894de089e2cdf8aca01d228a4584fed0d484c5e3e1212c0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0c90(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0c90;
}

// 0x1802f0d1b FUN_1802f0d1b
// source: re/dump/decompile/0x1802f0d1b_FUN_1802f0d1b.c
// size: 45 bytes; thunk: false
// body sha256: ccc179139a38957cad865c2b9a19c1e43438393788959112a68098eb6f3ae1c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0d1b{
    "0x1802f0d1b",
    "FUN_1802f0d1b",
    R"F1802f0d1bS(undefined FUN_1802f0d1b())F1802f0d1bS",
    R"B1802f0d1b(// 0x1802f0d1b  FUN_1802f0d1b
// size=45 thunk=false
// signature: undefined FUN_1802f0d1b()
// status: ok


void FUN_1802f0d1b(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x230),0x20,2,FUN_1800668e0);
  return;
}


)B1802f0d1b",
    "ccc179139a38957cad865c2b9a19c1e43438393788959112a68098eb6f3ae1c4",
    R"F1802f0d1bC(FUN_1800668e0)F1802f0d1bC",
    R"F1802f0d1bD()F1802f0d1bD",
    R"F1802f0d1bT()F1802f0d1bT",
    R"F1802f0d1bF(11: return;)F1802f0d1bF",
    R"F1802f0d1bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0d1bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0d1b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0d1b", "FUN_1802f0d1b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: ccc179139a38957cad865c2b9a19c1e43438393788959112a68098eb6f3ae1c4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0d1b(undefined8 param_1,longlong param_2)");
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x230),0x20,2,FUN_1800668e0);");
            trace.statement("return;");
        }
    return kFunction_0x1802f0d1b;
}

// 0x1802f0d54 FUN_1802f0d54
// source: re/dump/decompile/0x1802f0d54_FUN_1802f0d54.c
// size: 43 bytes; thunk: false
// body sha256: 67f29449f12064964668f7154a920c8f3daa1bf5b42ac1b25bc005711f943b3e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0d54{
    "0x1802f0d54",
    "FUN_1802f0d54",
    R"F1802f0d54S(undefined FUN_1802f0d54())F1802f0d54S",
    R"B1802f0d54(// 0x1802f0d54  FUN_1802f0d54
// size=43 thunk=false
// signature: undefined FUN_1802f0d54()
// status: ok


void FUN_1802f0d54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0d54",
    "67f29449f12064964668f7154a920c8f3daa1bf5b42ac1b25bc005711f943b3e",
    R"F1802f0d54C()F1802f0d54C",
    R"F1802f0d54D()F1802f0d54D",
    R"F1802f0d54T()F1802f0d54T",
    R"F1802f0d54F(10: if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
14: return;)F1802f0d54F",
    R"F1802f0d54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0d54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0d54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0d54", "FUN_1802f0d54");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 67f29449f12064964668f7154a920c8f3daa1bf5b42ac1b25bc005711f943b3e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0d54(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0d54;
}

// 0x1802f0d7f FUN_1802f0d7f
// source: re/dump/decompile/0x1802f0d7f_FUN_1802f0d7f.c
// size: 43 bytes; thunk: false
// body sha256: a4219d558576ea158401239ce210349d7a4647be858994490fbaf3e19206f7db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0d7f{
    "0x1802f0d7f",
    "FUN_1802f0d7f",
    R"F1802f0d7fS(undefined FUN_1802f0d7f())F1802f0d7fS",
    R"B1802f0d7f(// 0x1802f0d7f  FUN_1802f0d7f
// size=43 thunk=false
// signature: undefined FUN_1802f0d7f()
// status: ok


void FUN_1802f0d7f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0d7f",
    "a4219d558576ea158401239ce210349d7a4647be858994490fbaf3e19206f7db",
    R"F1802f0d7fC()F1802f0d7fC",
    R"F1802f0d7fD()F1802f0d7fD",
    R"F1802f0d7fT()F1802f0d7fT",
    R"F1802f0d7fF(10: if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
14: return;)F1802f0d7fF",
    R"F1802f0d7fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0d7fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0d7f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0d7f", "FUN_1802f0d7f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a4219d558576ea158401239ce210349d7a4647be858994490fbaf3e19206f7db
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0d7f(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0d7f;
}

// 0x1802f0db6 FUN_1802f0db6
// source: re/dump/decompile/0x1802f0db6_FUN_1802f0db6.c
// size: 43 bytes; thunk: false
// body sha256: a6229eb75442e64f25290c25bca4132c8ed3a951f110e6890bdb9566be0a546a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0db6{
    "0x1802f0db6",
    "FUN_1802f0db6",
    R"F1802f0db6S(undefined FUN_1802f0db6())F1802f0db6S",
    R"B1802f0db6(// 0x1802f0db6  FUN_1802f0db6
// size=43 thunk=false
// signature: undefined FUN_1802f0db6()
// status: ok


void FUN_1802f0db6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


)B1802f0db6",
    "a6229eb75442e64f25290c25bca4132c8ed3a951f110e6890bdb9566be0a546a",
    R"F1802f0db6C()F1802f0db6C",
    R"F1802f0db6D()F1802f0db6D",
    R"F1802f0db6T()F1802f0db6T",
    R"F1802f0db6F(10: if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
14: return;)F1802f0db6F",
    R"F1802f0db6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0db6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0db6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0db6", "FUN_1802f0db6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a6229eb75442e64f25290c25bca4132c8ed3a951f110e6890bdb9566be0a546a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0db6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0db6;
}

// 0x1802f0de1 FUN_1802f0de1
// source: re/dump/decompile/0x1802f0de1_FUN_1802f0de1.c
// size: 43 bytes; thunk: false
// body sha256: 38920b5e3cbfdc9d87229cb7c3c1a63150f81db66b6e226c50fb7aff86d43eae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0de1{
    "0x1802f0de1",
    "FUN_1802f0de1",
    R"F1802f0de1S(undefined FUN_1802f0de1())F1802f0de1S",
    R"B1802f0de1(// 0x1802f0de1  FUN_1802f0de1
// size=43 thunk=false
// signature: undefined FUN_1802f0de1()
// status: ok


void FUN_1802f0de1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffdffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


)B1802f0de1",
    "38920b5e3cbfdc9d87229cb7c3c1a63150f81db66b6e226c50fb7aff86d43eae",
    R"F1802f0de1C()F1802f0de1C",
    R"F1802f0de1D()F1802f0de1D",
    R"F1802f0de1T()F1802f0de1T",
    R"F1802f0de1F(10: if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0) {
14: return;)F1802f0de1F",
    R"F1802f0de1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0de1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0de1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0de1", "FUN_1802f0de1");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 38920b5e3cbfdc9d87229cb7c3c1a63150f81db66b6e226c50fb7aff86d43eae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0de1(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffdffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0de1;
}

// 0x1802f0e6c FUN_1802f0e6c
// source: re/dump/decompile/0x1802f0e6c_FUN_1802f0e6c.c
// size: 38 bytes; thunk: false
// body sha256: 8673196e4a0158f0aa560ff68f745bd1eac18f7b115b47c2e9e26662f58423cb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0e6c{
    "0x1802f0e6c",
    "FUN_1802f0e6c",
    R"F1802f0e6cS(undefined FUN_1802f0e6c())F1802f0e6cS",
    R"B1802f0e6c(// 0x1802f0e6c  FUN_1802f0e6c
// size=38 thunk=false
// signature: undefined FUN_1802f0e6c()
// status: ok


void FUN_1802f0e6c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0e6c",
    "8673196e4a0158f0aa560ff68f745bd1eac18f7b115b47c2e9e26662f58423cb",
    R"F1802f0e6cC()F1802f0e6cC",
    R"F1802f0e6cD()F1802f0e6cD",
    R"F1802f0e6cT()F1802f0e6cT",
    R"F1802f0e6cF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f0e6cF",
    R"F1802f0e6cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0e6cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0e6c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0e6c", "FUN_1802f0e6c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8673196e4a0158f0aa560ff68f745bd1eac18f7b115b47c2e9e26662f58423cb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0e6c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0e6c;
}

// 0x1802f0e92 FUN_1802f0e92
// source: re/dump/decompile/0x1802f0e92_FUN_1802f0e92.c
// size: 38 bytes; thunk: false
// body sha256: f532868ec9d8683dfbf6449dba5c32d517c3c2512fbe507fcbdc27b650dc814d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0e92{
    "0x1802f0e92",
    "FUN_1802f0e92",
    R"F1802f0e92S(undefined FUN_1802f0e92())F1802f0e92S",
    R"B1802f0e92(// 0x1802f0e92  FUN_1802f0e92
// size=38 thunk=false
// signature: undefined FUN_1802f0e92()
// status: ok


void FUN_1802f0e92(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0e92",
    "f532868ec9d8683dfbf6449dba5c32d517c3c2512fbe507fcbdc27b650dc814d",
    R"F1802f0e92C()F1802f0e92C",
    R"F1802f0e92D()F1802f0e92D",
    R"F1802f0e92T()F1802f0e92T",
    R"F1802f0e92F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f0e92F",
    R"F1802f0e92U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0e92U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0e92() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0e92", "FUN_1802f0e92");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f532868ec9d8683dfbf6449dba5c32d517c3c2512fbe507fcbdc27b650dc814d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0e92(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0e92;
}

// 0x1802f0edc FUN_1802f0edc
// source: re/dump/decompile/0x1802f0edc_FUN_1802f0edc.c
// size: 38 bytes; thunk: false
// body sha256: f27b312d60f24c7829e3dfe855aafdadf7e7d71729adbd60908d20a89141d77c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0edc{
    "0x1802f0edc",
    "FUN_1802f0edc",
    R"F1802f0edcS(undefined FUN_1802f0edc())F1802f0edcS",
    R"B1802f0edc(// 0x1802f0edc  FUN_1802f0edc
// size=38 thunk=false
// signature: undefined FUN_1802f0edc()
// status: ok


void FUN_1802f0edc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


)B1802f0edc",
    "f27b312d60f24c7829e3dfe855aafdadf7e7d71729adbd60908d20a89141d77c",
    R"F1802f0edcC()F1802f0edcC",
    R"F1802f0edcD()F1802f0edcD",
    R"F1802f0edcT()F1802f0edcT",
    R"F1802f0edcF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f0edcF",
    R"F1802f0edcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0edcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0edc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0edc", "FUN_1802f0edc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f27b312d60f24c7829e3dfe855aafdadf7e7d71729adbd60908d20a89141d77c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0edc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0edc;
}

// 0x1802f0f02 FUN_1802f0f02
// source: re/dump/decompile/0x1802f0f02_FUN_1802f0f02.c
// size: 38 bytes; thunk: false
// body sha256: 6d51558effa4695273c45615158836a1fdc77e011f63da90b93d76f9df2b059b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0f02{
    "0x1802f0f02",
    "FUN_1802f0f02",
    R"F1802f0f02S(undefined FUN_1802f0f02())F1802f0f02S",
    R"B1802f0f02(// 0x1802f0f02  FUN_1802f0f02
// size=38 thunk=false
// signature: undefined FUN_1802f0f02()
// status: ok


void FUN_1802f0f02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


)B1802f0f02",
    "6d51558effa4695273c45615158836a1fdc77e011f63da90b93d76f9df2b059b",
    R"F1802f0f02C()F1802f0f02C",
    R"F1802f0f02D()F1802f0f02D",
    R"F1802f0f02T()F1802f0f02T",
    R"F1802f0f02F(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802f0f02F",
    R"F1802f0f02U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0f02U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0f02() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0f02", "FUN_1802f0f02");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6d51558effa4695273c45615158836a1fdc77e011f63da90b93d76f9df2b059b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0f02(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0f02;
}

// 0x1802f0f34 FUN_1802f0f34
// source: re/dump/decompile/0x1802f0f34_FUN_1802f0f34.c
// size: 46 bytes; thunk: false
// body sha256: 251c665bd211257c43a7b07148f33dcb2681fd51fb5a6f6008fc4039789bc490
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0f34{
    "0x1802f0f34",
    "FUN_1802f0f34",
    R"F1802f0f34S(undefined FUN_1802f0f34())F1802f0f34S",
    R"B1802f0f34(// 0x1802f0f34  FUN_1802f0f34
// size=46 thunk=false
// signature: undefined FUN_1802f0f34()
// status: ok


void FUN_1802f0f34(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x178));
  }
  return;
}


)B1802f0f34",
    "251c665bd211257c43a7b07148f33dcb2681fd51fb5a6f6008fc4039789bc490",
    R"F1802f0f34C()F1802f0f34C",
    R"F1802f0f34D()F1802f0f34D",
    R"F1802f0f34T()F1802f0f34T",
    R"F1802f0f34F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802f0f34F",
    R"F1802f0f34U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0f34U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0f34() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0f34", "FUN_1802f0f34");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 251c665bd211257c43a7b07148f33dcb2681fd51fb5a6f6008fc4039789bc490
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0f34(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x178));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0f34;
}

// 0x1802f0f62 FUN_1802f0f62
// source: re/dump/decompile/0x1802f0f62_FUN_1802f0f62.c
// size: 46 bytes; thunk: false
// body sha256: 763213c24a8c3940b8e731c432a994765f0e71d702ace78410a4976c0ff70971
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0f62{
    "0x1802f0f62",
    "FUN_1802f0f62",
    R"F1802f0f62S(undefined FUN_1802f0f62())F1802f0f62S",
    R"B1802f0f62(// 0x1802f0f62  FUN_1802f0f62
// size=46 thunk=false
// signature: undefined FUN_1802f0f62()
// status: ok


void FUN_1802f0f62(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x178));
  }
  return;
}


)B1802f0f62",
    "763213c24a8c3940b8e731c432a994765f0e71d702ace78410a4976c0ff70971",
    R"F1802f0f62C()F1802f0f62C",
    R"F1802f0f62D()F1802f0f62D",
    R"F1802f0f62T()F1802f0f62T",
    R"F1802f0f62F(10: if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
14: return;)F1802f0f62F",
    R"F1802f0f62U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0f62U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0f62() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0f62", "FUN_1802f0f62");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 763213c24a8c3940b8e731c432a994765f0e71d702ace78410a4976c0ff70971
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0f62(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x178));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0f62;
}

// 0x1802f0f9c FUN_1802f0f9c
// source: re/dump/decompile/0x1802f0f9c_FUN_1802f0f9c.c
// size: 41 bytes; thunk: false
// body sha256: 542a9934c5575736f1793f83d2d086a7ca2bae059bab3f131d1f8246de425d6b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0f9c{
    "0x1802f0f9c",
    "FUN_1802f0f9c",
    R"F1802f0f9cS(undefined FUN_1802f0f9c())F1802f0f9cS",
    R"B1802f0f9c(// 0x1802f0f9c  FUN_1802f0f9c
// size=41 thunk=false
// signature: undefined FUN_1802f0f9c()
// status: ok


void FUN_1802f0f9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x180));
  }
  return;
}


)B1802f0f9c",
    "542a9934c5575736f1793f83d2d086a7ca2bae059bab3f131d1f8246de425d6b",
    R"F1802f0f9cC()F1802f0f9cC",
    R"F1802f0f9cD()F1802f0f9cD",
    R"F1802f0f9cT()F1802f0f9cT",
    R"F1802f0f9cF(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802f0f9cF",
    R"F1802f0f9cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0f9cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0f9c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0f9c", "FUN_1802f0f9c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 542a9934c5575736f1793f83d2d086a7ca2bae059bab3f131d1f8246de425d6b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0f9c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x180));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0f9c;
}

// 0x1802f0fc5 FUN_1802f0fc5
// source: re/dump/decompile/0x1802f0fc5_FUN_1802f0fc5.c
// size: 46 bytes; thunk: false
// body sha256: 2996bb1291b4876396537d21c4b9bf83d869dc758ccead09b88d5a330752f224
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0fc5{
    "0x1802f0fc5",
    "FUN_1802f0fc5",
    R"F1802f0fc5S(undefined FUN_1802f0fc5())F1802f0fc5S",
    R"B1802f0fc5(// 0x1802f0fc5  FUN_1802f0fc5
// size=46 thunk=false
// signature: undefined FUN_1802f0fc5()
// status: ok


void FUN_1802f0fc5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x180));
  }
  return;
}


)B1802f0fc5",
    "2996bb1291b4876396537d21c4b9bf83d869dc758ccead09b88d5a330752f224",
    R"F1802f0fc5C()F1802f0fc5C",
    R"F1802f0fc5D()F1802f0fc5D",
    R"F1802f0fc5T()F1802f0fc5T",
    R"F1802f0fc5F(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802f0fc5F",
    R"F1802f0fc5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0fc5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0fc5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0fc5", "FUN_1802f0fc5");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2996bb1291b4876396537d21c4b9bf83d869dc758ccead09b88d5a330752f224
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f0fc5(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x180));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0fc5;
}

// 0x1802f105f FUN_1802f105f
// source: re/dump/decompile/0x1802f105f_FUN_1802f105f.c
// size: 46 bytes; thunk: false
// body sha256: 26c00e3433aa7b474595b86eeceffecbc34a99c57f98081b7c780df9ea7df0b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f105f{
    "0x1802f105f",
    "FUN_1802f105f",
    R"F1802f105fS(undefined FUN_1802f105f())F1802f105fS",
    R"B1802f105f(// 0x1802f105f  FUN_1802f105f
// size=46 thunk=false
// signature: undefined FUN_1802f105f()
// status: ok


void FUN_1802f105f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x188));
  }
  return;
}


)B1802f105f",
    "26c00e3433aa7b474595b86eeceffecbc34a99c57f98081b7c780df9ea7df0b1",
    R"F1802f105fC()F1802f105fC",
    R"F1802f105fD()F1802f105fD",
    R"F1802f105fT()F1802f105fT",
    R"F1802f105fF(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802f105fF",
    R"F1802f105fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f105fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f105f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f105f", "FUN_1802f105f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 26c00e3433aa7b474595b86eeceffecbc34a99c57f98081b7c780df9ea7df0b1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f105f(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x188));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f105f;
}

// 0x1802f108d FUN_1802f108d
// source: re/dump/decompile/0x1802f108d_FUN_1802f108d.c
// size: 46 bytes; thunk: false
// body sha256: 9208ac9c14bc32dd64befaccfce024c938235c3b167d971aa19aaaeeb6f23750
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f108d{
    "0x1802f108d",
    "FUN_1802f108d",
    R"F1802f108dS(undefined FUN_1802f108d())F1802f108dS",
    R"B1802f108d(// 0x1802f108d  FUN_1802f108d
// size=46 thunk=false
// signature: undefined FUN_1802f108d()
// status: ok


void FUN_1802f108d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x188));
  }
  return;
}


)B1802f108d",
    "9208ac9c14bc32dd64befaccfce024c938235c3b167d971aa19aaaeeb6f23750",
    R"F1802f108dC()F1802f108dC",
    R"F1802f108dD()F1802f108dD",
    R"F1802f108dT()F1802f108dT",
    R"F1802f108dF(10: if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
14: return;)F1802f108dF",
    R"F1802f108dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f108dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f108d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f108d", "FUN_1802f108d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9208ac9c14bc32dd64befaccfce024c938235c3b167d971aa19aaaeeb6f23750
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f108d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x188));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f108d;
}

// 0x1802f10df FUN_1802f10df
// source: re/dump/decompile/0x1802f10df_FUN_1802f10df.c
// size: 46 bytes; thunk: false
// body sha256: 2d1efc05f26bee487abd36df7b33cb37b590f9d6182b18a7e0ec8a68ee4e6b5e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f10df{
    "0x1802f10df",
    "FUN_1802f10df",
    R"F1802f10dfS(undefined FUN_1802f10df())F1802f10dfS",
    R"B1802f10df(// 0x1802f10df  FUN_1802f10df
// size=46 thunk=false
// signature: undefined FUN_1802f10df()
// status: ok


void FUN_1802f10df(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 400));
  }
  return;
}


)B1802f10df",
    "2d1efc05f26bee487abd36df7b33cb37b590f9d6182b18a7e0ec8a68ee4e6b5e",
    R"F1802f10dfC()F1802f10dfC",
    R"F1802f10dfD()F1802f10dfD",
    R"F1802f10dfT()F1802f10dfT",
    R"F1802f10dfF(10: if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
14: return;)F1802f10dfF",
    R"F1802f10dfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f10dfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f10df() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f10df", "FUN_1802f10df");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2d1efc05f26bee487abd36df7b33cb37b590f9d6182b18a7e0ec8a68ee4e6b5e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f10df(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 400));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f10df;
}

// 0x1802f110d FUN_1802f110d
// source: re/dump/decompile/0x1802f110d_FUN_1802f110d.c
// size: 46 bytes; thunk: false
// body sha256: 44a4b7ad35af466930d4f537397e9759977941eccfcb5da89659860c1028ee59
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f110d{
    "0x1802f110d",
    "FUN_1802f110d",
    R"F1802f110dS(undefined FUN_1802f110d())F1802f110dS",
    R"B1802f110d(// 0x1802f110d  FUN_1802f110d
// size=46 thunk=false
// signature: undefined FUN_1802f110d()
// status: ok


void FUN_1802f110d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 400));
  }
  return;
}


)B1802f110d",
    "44a4b7ad35af466930d4f537397e9759977941eccfcb5da89659860c1028ee59",
    R"F1802f110dC()F1802f110dC",
    R"F1802f110dD()F1802f110dD",
    R"F1802f110dT()F1802f110dT",
    R"F1802f110dF(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802f110dF",
    R"F1802f110dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f110dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f110d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f110d", "FUN_1802f110d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 44a4b7ad35af466930d4f537397e9759977941eccfcb5da89659860c1028ee59
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f110d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 400));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f110d;
}

// 0x1802f115f FUN_1802f115f
// source: re/dump/decompile/0x1802f115f_FUN_1802f115f.c
// size: 45 bytes; thunk: false
// body sha256: 9d3a949955d9d4e4abf1412c315f3c5664debbbf4e47a977b94b1f224ffa7254
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f115f{
    "0x1802f115f",
    "FUN_1802f115f",
    R"F1802f115fS(undefined FUN_1802f115f())F1802f115fS",
    R"B1802f115f(// 0x1802f115f  FUN_1802f115f
// size=45 thunk=false
// signature: undefined FUN_1802f115f()
// status: ok


void FUN_1802f115f(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x270),0x20,4,FUN_1800668e0);
  return;
}


)B1802f115f",
    "9d3a949955d9d4e4abf1412c315f3c5664debbbf4e47a977b94b1f224ffa7254",
    R"F1802f115fC(FUN_1800668e0)F1802f115fC",
    R"F1802f115fD()F1802f115fD",
    R"F1802f115fT()F1802f115fT",
    R"F1802f115fF(11: return;)F1802f115fF",
    R"F1802f115fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f115fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f115f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f115f", "FUN_1802f115f");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 9d3a949955d9d4e4abf1412c315f3c5664debbbf4e47a977b94b1f224ffa7254
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f115f(undefined8 param_1,longlong param_2)");
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x270),0x20,4,FUN_1800668e0);");
            trace.statement("return;");
        }
    return kFunction_0x1802f115f;
}

// 0x1802f11b0 FUN_1802f11b0
// source: re/dump/decompile/0x1802f11b0_FUN_1802f11b0.c
// size: 41 bytes; thunk: false
// body sha256: c2ed81b332a0dd4fc801b071bd2c7f5592f85be57ab5e274b9ed4766f7d767bf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f11b0{
    "0x1802f11b0",
    "FUN_1802f11b0",
    R"F1802f11b0S(undefined FUN_1802f11b0())F1802f11b0S",
    R"B1802f11b0(// 0x1802f11b0  FUN_1802f11b0
// size=41 thunk=false
// signature: undefined FUN_1802f11b0()
// status: ok


void FUN_1802f11b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x130));
  }
  return;
}


)B1802f11b0",
    "c2ed81b332a0dd4fc801b071bd2c7f5592f85be57ab5e274b9ed4766f7d767bf",
    R"F1802f11b0C()F1802f11b0C",
    R"F1802f11b0D()F1802f11b0D",
    R"F1802f11b0T()F1802f11b0T",
    R"F1802f11b0F(10: if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
14: return;)F1802f11b0F",
    R"F1802f11b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f11b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f11b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f11b0", "FUN_1802f11b0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c2ed81b332a0dd4fc801b071bd2c7f5592f85be57ab5e274b9ed4766f7d767bf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f11b0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x130));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f11b0;
}

// 0x1802f11d9 FUN_1802f11d9
// source: re/dump/decompile/0x1802f11d9_FUN_1802f11d9.c
// size: 41 bytes; thunk: false
// body sha256: 1a348a88e06354243f92cb6a920f0f7e37b526609397db0f478b009cf47a45c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f11d9{
    "0x1802f11d9",
    "FUN_1802f11d9",
    R"F1802f11d9S(undefined FUN_1802f11d9())F1802f11d9S",
    R"B1802f11d9(// 0x1802f11d9  FUN_1802f11d9
// size=41 thunk=false
// signature: undefined FUN_1802f11d9()
// status: ok


void FUN_1802f11d9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x130));
  }
  return;
}


)B1802f11d9",
    "1a348a88e06354243f92cb6a920f0f7e37b526609397db0f478b009cf47a45c8",
    R"F1802f11d9C()F1802f11d9C",
    R"F1802f11d9D()F1802f11d9D",
    R"F1802f11d9T()F1802f11d9T",
    R"F1802f11d9F(10: if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
14: return;)F1802f11d9F",
    R"F1802f11d9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f11d9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f11d9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f11d9", "FUN_1802f11d9");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1a348a88e06354243f92cb6a920f0f7e37b526609397db0f478b009cf47a45c8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f11d9(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x130));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f11d9;
}

// 0x1802f120e FUN_1802f120e
// source: re/dump/decompile/0x1802f120e_FUN_1802f120e.c
// size: 41 bytes; thunk: false
// body sha256: c303533b892acb35ce4e4a5f24d3c5f65e74e0b14b9246e9fca7ac0639118643
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f120e{
    "0x1802f120e",
    "FUN_1802f120e",
    R"F1802f120eS(undefined FUN_1802f120e())F1802f120eS",
    R"B1802f120e(// 0x1802f120e  FUN_1802f120e
// size=41 thunk=false
// signature: undefined FUN_1802f120e()
// status: ok


void FUN_1802f120e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 4) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x138));
  }
  return;
}


)B1802f120e",
    "c303533b892acb35ce4e4a5f24d3c5f65e74e0b14b9246e9fca7ac0639118643",
    R"F1802f120eC()F1802f120eC",
    R"F1802f120eD()F1802f120eD",
    R"F1802f120eT()F1802f120eT",
    R"F1802f120eF(10: if ((*(uint *)(param_2 + 0x50) & 4) != 0) {
14: return;)F1802f120eF",
    R"F1802f120eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f120eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f120e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f120e", "FUN_1802f120e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c303533b892acb35ce4e4a5f24d3c5f65e74e0b14b9246e9fca7ac0639118643
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f120e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x138));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f120e;
}

// 0x1802f1237 FUN_1802f1237
// source: re/dump/decompile/0x1802f1237_FUN_1802f1237.c
// size: 41 bytes; thunk: false
// body sha256: 0358b48827c3e7d16bf529b42e457dc66317c7b8a138b009d4610e090e3df58f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1237{
    "0x1802f1237",
    "FUN_1802f1237",
    R"F1802f1237S(undefined FUN_1802f1237())F1802f1237S",
    R"B1802f1237(// 0x1802f1237  FUN_1802f1237
// size=41 thunk=false
// signature: undefined FUN_1802f1237()
// status: ok


void FUN_1802f1237(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x138));
  }
  return;
}


)B1802f1237",
    "0358b48827c3e7d16bf529b42e457dc66317c7b8a138b009d4610e090e3df58f",
    R"F1802f1237C()F1802f1237C",
    R"F1802f1237D()F1802f1237D",
    R"F1802f1237T()F1802f1237T",
    R"F1802f1237F(10: if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
14: return;)F1802f1237F",
    R"F1802f1237U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1237U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1237() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1237", "FUN_1802f1237");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0358b48827c3e7d16bf529b42e457dc66317c7b8a138b009d4610e090e3df58f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1237(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x138));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1237;
}

// 0x1802f126c FUN_1802f126c
// source: re/dump/decompile/0x1802f126c_FUN_1802f126c.c
// size: 41 bytes; thunk: false
// body sha256: 33a92b518ec7fd6db90f06f05069fc3149e1c82a67db769e664c30bb76e857b3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f126c{
    "0x1802f126c",
    "FUN_1802f126c",
    R"F1802f126cS(undefined FUN_1802f126c())F1802f126cS",
    R"B1802f126c(// 0x1802f126c  FUN_1802f126c
// size=41 thunk=false
// signature: undefined FUN_1802f126c()
// status: ok


void FUN_1802f126c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x140));
  }
  return;
}


)B1802f126c",
    "33a92b518ec7fd6db90f06f05069fc3149e1c82a67db769e664c30bb76e857b3",
    R"F1802f126cC()F1802f126cC",
    R"F1802f126cD()F1802f126cD",
    R"F1802f126cT()F1802f126cT",
    R"F1802f126cF(10: if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
14: return;)F1802f126cF",
    R"F1802f126cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f126cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f126c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f126c", "FUN_1802f126c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 33a92b518ec7fd6db90f06f05069fc3149e1c82a67db769e664c30bb76e857b3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f126c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x140));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f126c;
}

// 0x1802f1295 FUN_1802f1295
// source: re/dump/decompile/0x1802f1295_FUN_1802f1295.c
// size: 41 bytes; thunk: false
// body sha256: fe1d87c4613b6c2359c28b2980d37e1c6883f157d37d2a76b4b63aa54b151621
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1295{
    "0x1802f1295",
    "FUN_1802f1295",
    R"F1802f1295S(undefined FUN_1802f1295())F1802f1295S",
    R"B1802f1295(// 0x1802f1295  FUN_1802f1295
// size=41 thunk=false
// signature: undefined FUN_1802f1295()
// status: ok


void FUN_1802f1295(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x20) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x140));
  }
  return;
}


)B1802f1295",
    "fe1d87c4613b6c2359c28b2980d37e1c6883f157d37d2a76b4b63aa54b151621",
    R"F1802f1295C()F1802f1295C",
    R"F1802f1295D()F1802f1295D",
    R"F1802f1295T()F1802f1295T",
    R"F1802f1295F(10: if ((*(uint *)(param_2 + 0x50) & 0x20) != 0) {
14: return;)F1802f1295F",
    R"F1802f1295U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1295U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1295() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1295", "FUN_1802f1295");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fe1d87c4613b6c2359c28b2980d37e1c6883f157d37d2a76b4b63aa54b151621
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1295(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x140));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1295;
}

// 0x1802f12ca FUN_1802f12ca
// source: re/dump/decompile/0x1802f12ca_FUN_1802f12ca.c
// size: 41 bytes; thunk: false
// body sha256: 04627f9fda7f6d341ac7097e8d75fc862c9aae3c0f1e15c5cd5b5197eedd2ca4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f12ca{
    "0x1802f12ca",
    "FUN_1802f12ca",
    R"F1802f12caS(undefined FUN_1802f12ca())F1802f12caS",
    R"B1802f12ca(// 0x1802f12ca  FUN_1802f12ca
// size=41 thunk=false
// signature: undefined FUN_1802f12ca()
// status: ok


void FUN_1802f12ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x40) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x120));
  }
  return;
}


)B1802f12ca",
    "04627f9fda7f6d341ac7097e8d75fc862c9aae3c0f1e15c5cd5b5197eedd2ca4",
    R"F1802f12caC()F1802f12caC",
    R"F1802f12caD()F1802f12caD",
    R"F1802f12caT()F1802f12caT",
    R"F1802f12caF(10: if ((*(uint *)(param_2 + 0x50) & 0x40) != 0) {
14: return;)F1802f12caF",
    R"F1802f12caU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f12caU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f12ca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f12ca", "FUN_1802f12ca");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 04627f9fda7f6d341ac7097e8d75fc862c9aae3c0f1e15c5cd5b5197eedd2ca4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f12ca(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x120));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f12ca;
}

// 0x1802f12f3 FUN_1802f12f3
// source: re/dump/decompile/0x1802f12f3_FUN_1802f12f3.c
// size: 46 bytes; thunk: false
// body sha256: e212eb79f5b116a9ddae3e26baf4560f160d689bd51dc8ba2224559114fe978d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f12f3{
    "0x1802f12f3",
    "FUN_1802f12f3",
    R"F1802f12f3S(undefined FUN_1802f12f3())F1802f12f3S",
    R"B1802f12f3(// 0x1802f12f3  FUN_1802f12f3
// size=46 thunk=false
// signature: undefined FUN_1802f12f3()
// status: ok


void FUN_1802f12f3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x80) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x120));
  }
  return;
}


)B1802f12f3",
    "e212eb79f5b116a9ddae3e26baf4560f160d689bd51dc8ba2224559114fe978d",
    R"F1802f12f3C()F1802f12f3C",
    R"F1802f12f3D()F1802f12f3D",
    R"F1802f12f3T()F1802f12f3T",
    R"F1802f12f3F(10: if ((*(uint *)(param_2 + 0x50) & 0x80) != 0) {
14: return;)F1802f12f3F",
    R"F1802f12f3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f12f3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f12f3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f12f3", "FUN_1802f12f3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e212eb79f5b116a9ddae3e26baf4560f160d689bd51dc8ba2224559114fe978d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f12f3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x120));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f12f3;
}

// 0x1802f13b1 FUN_1802f13b1
// source: re/dump/decompile/0x1802f13b1_FUN_1802f13b1.c
// size: 46 bytes; thunk: false
// body sha256: d21a9eb96120db5542baaf5bab409f114622ca446adf836fb2b4494620a30205
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f13b1{
    "0x1802f13b1",
    "FUN_1802f13b1",
    R"F1802f13b1S(undefined FUN_1802f13b1())F1802f13b1S",
    R"B1802f13b1(// 0x1802f13b1  FUN_1802f13b1
// size=46 thunk=false
// signature: undefined FUN_1802f13b1()
// status: ok


void FUN_1802f13b1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x100) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffeff;
    thunk_FUN_18021e290(param_2 + 0x168);
  }
  return;
}


)B1802f13b1",
    "d21a9eb96120db5542baaf5bab409f114622ca446adf836fb2b4494620a30205",
    R"F1802f13b1C()F1802f13b1C",
    R"F1802f13b1D()F1802f13b1D",
    R"F1802f13b1T()F1802f13b1T",
    R"F1802f13b1F(10: if ((*(uint *)(param_2 + 0x50) & 0x100) != 0) {
14: return;)F1802f13b1F",
    R"F1802f13b1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f13b1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f13b1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f13b1", "FUN_1802f13b1");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d21a9eb96120db5542baaf5bab409f114622ca446adf836fb2b4494620a30205
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f13b1(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f13b1;
}

// 0x1802f13df FUN_1802f13df
// source: re/dump/decompile/0x1802f13df_FUN_1802f13df.c
// size: 46 bytes; thunk: false
// body sha256: 5839ee58497a325a53501bd0d4b17ba98f88b9de9ffa13886ae81a6befef9af5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f13df{
    "0x1802f13df",
    "FUN_1802f13df",
    R"F1802f13dfS(undefined FUN_1802f13df())F1802f13dfS",
    R"B1802f13df(// 0x1802f13df  FUN_1802f13df
// size=46 thunk=false
// signature: undefined FUN_1802f13df()
// status: ok


void FUN_1802f13df(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x200) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffdff;
    thunk_FUN_18021e290(param_2 + 0x100);
  }
  return;
}


)B1802f13df",
    "5839ee58497a325a53501bd0d4b17ba98f88b9de9ffa13886ae81a6befef9af5",
    R"F1802f13dfC()F1802f13dfC",
    R"F1802f13dfD()F1802f13dfD",
    R"F1802f13dfT()F1802f13dfT",
    R"F1802f13dfF(10: if ((*(uint *)(param_2 + 0x50) & 0x200) != 0) {
14: return;)F1802f13dfF",
    R"F1802f13dfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f13dfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f13df() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f13df", "FUN_1802f13df");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5839ee58497a325a53501bd0d4b17ba98f88b9de9ffa13886ae81a6befef9af5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f13df(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f13df;
}

// 0x1802f140d FUN_1802f140d
// source: re/dump/decompile/0x1802f140d_FUN_1802f140d.c
// size: 46 bytes; thunk: false
// body sha256: 150b1853442c4862eba6091be4753553ed20dcffc0164470684b39bf619f4eaf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f140d{
    "0x1802f140d",
    "FUN_1802f140d",
    R"F1802f140dS(undefined FUN_1802f140d())F1802f140dS",
    R"B1802f140d(// 0x1802f140d  FUN_1802f140d
// size=46 thunk=false
// signature: undefined FUN_1802f140d()
// status: ok


void FUN_1802f140d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x400) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffbff;
    thunk_FUN_18021e290(param_2 + 0xe0);
  }
  return;
}


)B1802f140d",
    "150b1853442c4862eba6091be4753553ed20dcffc0164470684b39bf619f4eaf",
    R"F1802f140dC()F1802f140dC",
    R"F1802f140dD()F1802f140dD",
    R"F1802f140dT()F1802f140dT",
    R"F1802f140dF(10: if ((*(uint *)(param_2 + 0x50) & 0x400) != 0) {
14: return;)F1802f140dF",
    R"F1802f140dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f140dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f140d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f140d", "FUN_1802f140d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 150b1853442c4862eba6091be4753553ed20dcffc0164470684b39bf619f4eaf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f140d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x50) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f140d;
}

// 0x1802f14e8 FUN_1802f14e8
// source: re/dump/decompile/0x1802f14e8_FUN_1802f14e8.c
// size: 41 bytes; thunk: false
// body sha256: b53b7338ce3bbe9fb3410f01d05679404fc748e01ec7a675d83859532373255b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f14e8{
    "0x1802f14e8",
    "FUN_1802f14e8",
    R"F1802f14e8S(undefined FUN_1802f14e8())F1802f14e8S",
    R"B1802f14e8(// 0x1802f14e8  FUN_1802f14e8
// size=41 thunk=false
// signature: undefined FUN_1802f14e8()
// status: ok


void FUN_1802f14e8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b450(param_2 + 0xc0);
  }
  return;
}


)B1802f14e8",
    "b53b7338ce3bbe9fb3410f01d05679404fc748e01ec7a675d83859532373255b",
    R"F1802f14e8C(FUN_18021b450)F1802f14e8C",
    R"F1802f14e8D()F1802f14e8D",
    R"F1802f14e8T()F1802f14e8T",
    R"F1802f14e8F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f14e8F",
    R"F1802f14e8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f14e8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f14e8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f14e8", "FUN_1802f14e8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b450", reinterpret_cast<const void*>(&image::FUN_18021b450));
    // body sha256: b53b7338ce3bbe9fb3410f01d05679404fc748e01ec7a675d83859532373255b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f14e8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18021b450(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f14e8;
}

// 0x1802f15b8 FUN_1802f15b8
// source: re/dump/decompile/0x1802f15b8_FUN_1802f15b8.c
// size: 38 bytes; thunk: false
// body sha256: 4b4eb201d8c12e145307a20cb8522d1d93110b423c6c784cebfd820710065561
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f15b8{
    "0x1802f15b8",
    "FUN_1802f15b8",
    R"F1802f15b8S(undefined FUN_1802f15b8())F1802f15b8S",
    R"B1802f15b8(// 0x1802f15b8  FUN_1802f15b8
// size=38 thunk=false
// signature: undefined FUN_1802f15b8()
// status: ok


void FUN_1802f15b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180021090(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802f15b8",
    "4b4eb201d8c12e145307a20cb8522d1d93110b423c6c784cebfd820710065561",
    R"F1802f15b8C(FUN_180021090)F1802f15b8C",
    R"F1802f15b8D()F1802f15b8D",
    R"F1802f15b8T()F1802f15b8T",
    R"F1802f15b8F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f15b8F",
    R"F1802f15b8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f15b8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f15b8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f15b8", "FUN_1802f15b8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180021090", reinterpret_cast<const void*>(&image::FUN_180021090));
    // body sha256: 4b4eb201d8c12e145307a20cb8522d1d93110b423c6c784cebfd820710065561
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f15b8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180021090(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f15b8;
}

// 0x1802f16d4 FUN_1802f16d4
// source: re/dump/decompile/0x1802f16d4_FUN_1802f16d4.c
// size: 38 bytes; thunk: false
// body sha256: b2515283381cdadc5bd892d6d7354c9f2d145dfb7037d02b4e6ee213435e3cf5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f16d4{
    "0x1802f16d4",
    "FUN_1802f16d4",
    R"F1802f16d4S(undefined FUN_1802f16d4())F1802f16d4S",
    R"B1802f16d4(// 0x1802f16d4  FUN_1802f16d4
// size=38 thunk=false
// signature: undefined FUN_1802f16d4()
// status: ok


void FUN_1802f16d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f16d4",
    "b2515283381cdadc5bd892d6d7354c9f2d145dfb7037d02b4e6ee213435e3cf5",
    R"F1802f16d4C()F1802f16d4C",
    R"F1802f16d4D()F1802f16d4D",
    R"F1802f16d4T()F1802f16d4T",
    R"F1802f16d4F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f16d4F",
    R"F1802f16d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f16d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f16d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f16d4", "FUN_1802f16d4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b2515283381cdadc5bd892d6d7354c9f2d145dfb7037d02b4e6ee213435e3cf5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f16d4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f16d4;
}

// 0x1802f16fa FUN_1802f16fa
// source: re/dump/decompile/0x1802f16fa_FUN_1802f16fa.c
// size: 38 bytes; thunk: false
// body sha256: f1e877168c36628e20999bb91b8d8f1a2d2c7f091cb1271e790a6afdfdb702d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f16fa{
    "0x1802f16fa",
    "FUN_1802f16fa",
    R"F1802f16faS(undefined FUN_1802f16fa())F1802f16faS",
    R"B1802f16fa(// 0x1802f16fa  FUN_1802f16fa
// size=38 thunk=false
// signature: undefined FUN_1802f16fa()
// status: ok


void FUN_1802f16fa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f16fa",
    "f1e877168c36628e20999bb91b8d8f1a2d2c7f091cb1271e790a6afdfdb702d9",
    R"F1802f16faC()F1802f16faC",
    R"F1802f16faD()F1802f16faD",
    R"F1802f16faT()F1802f16faT",
    R"F1802f16faF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f16faF",
    R"F1802f16faU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f16faU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f16fa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f16fa", "FUN_1802f16fa");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f1e877168c36628e20999bb91b8d8f1a2d2c7f091cb1271e790a6afdfdb702d9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f16fa(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f16fa;
}

// 0x1802f1720 FUN_1802f1720
// source: re/dump/decompile/0x1802f1720_FUN_1802f1720.c
// size: 41 bytes; thunk: false
// body sha256: c84171a40318fd8346dacf4c2afccc01b50abf9166c1ba76c02b2f7d8ae04d9d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1720{
    "0x1802f1720",
    "FUN_1802f1720",
    R"F1802f1720S(undefined FUN_1802f1720())F1802f1720S",
    R"B1802f1720(// 0x1802f1720  FUN_1802f1720
// size=41 thunk=false
// signature: undefined FUN_1802f1720()
// status: ok


void FUN_1802f1720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f1720",
    "c84171a40318fd8346dacf4c2afccc01b50abf9166c1ba76c02b2f7d8ae04d9d",
    R"F1802f1720C()F1802f1720C",
    R"F1802f1720D()F1802f1720D",
    R"F1802f1720T()F1802f1720T",
    R"F1802f1720F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f1720F",
    R"F1802f1720U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1720() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1720", "FUN_1802f1720");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c84171a40318fd8346dacf4c2afccc01b50abf9166c1ba76c02b2f7d8ae04d9d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1720(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1720;
}

// 0x1802f1770 FUN_1802f1770
// source: re/dump/decompile/0x1802f1770_FUN_1802f1770.c
// size: 41 bytes; thunk: false
// body sha256: b073c9649e215fe1d35f3dacfad8984a752ec81513a6596c7780fc9aef5067db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1770{
    "0x1802f1770",
    "FUN_1802f1770",
    R"F1802f1770S(undefined FUN_1802f1770())F1802f1770S",
    R"B1802f1770(// 0x1802f1770  FUN_1802f1770
// size=41 thunk=false
// signature: undefined FUN_1802f1770()
// status: ok


void FUN_1802f1770(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


)B1802f1770",
    "b073c9649e215fe1d35f3dacfad8984a752ec81513a6596c7780fc9aef5067db",
    R"F1802f1770C()F1802f1770C",
    R"F1802f1770D()F1802f1770D",
    R"F1802f1770T()F1802f1770T",
    R"F1802f1770F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f1770F",
    R"F1802f1770U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1770() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1770", "FUN_1802f1770");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b073c9649e215fe1d35f3dacfad8984a752ec81513a6596c7780fc9aef5067db
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1770(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1770;
}

// 0x1802f17a5 FUN_1802f17a5
// source: re/dump/decompile/0x1802f17a5_FUN_1802f17a5.c
// size: 41 bytes; thunk: false
// body sha256: b4497f0dac0b2ed28c007238ed85d331a4eb671ba72aca07e491b4faea4c9ca1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f17a5{
    "0x1802f17a5",
    "FUN_1802f17a5",
    R"F1802f17a5S(undefined FUN_1802f17a5())F1802f17a5S",
    R"B1802f17a5(// 0x1802f17a5  FUN_1802f17a5
// size=41 thunk=false
// signature: undefined FUN_1802f17a5()
// status: ok


void FUN_1802f17a5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


)B1802f17a5",
    "b4497f0dac0b2ed28c007238ed85d331a4eb671ba72aca07e491b4faea4c9ca1",
    R"F1802f17a5C()F1802f17a5C",
    R"F1802f17a5D()F1802f17a5D",
    R"F1802f17a5T()F1802f17a5T",
    R"F1802f17a5F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f17a5F",
    R"F1802f17a5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f17a5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f17a5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f17a5", "FUN_1802f17a5");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b4497f0dac0b2ed28c007238ed85d331a4eb671ba72aca07e491b4faea4c9ca1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f17a5(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f17a5;
}

// 0x1802f17ce FUN_1802f17ce
// source: re/dump/decompile/0x1802f17ce_FUN_1802f17ce.c
// size: 29 bytes; thunk: false
// body sha256: ba5be7132d730ca193f5a906ed5d6d66de1388c55324dcb211f320167a49d0a9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f17ce{
    "0x1802f17ce",
    "FUN_1802f17ce",
    R"F1802f17ceS(undefined FUN_1802f17ce())F1802f17ceS",
    R"B1802f17ce(// 0x1802f17ce  FUN_1802f17ce
// size=29 thunk=false
// signature: undefined FUN_1802f17ce()
// status: ok


undefined8 FUN_1802f17ce(void)

{
  return 0;
}


)B1802f17ce",
    "ba5be7132d730ca193f5a906ed5d6d66de1388c55324dcb211f320167a49d0a9",
    R"F1802f17ceC()F1802f17ceC",
    R"F1802f17ceD()F1802f17ceD",
    R"F1802f17ceT()F1802f17ceT",
    R"F1802f17ceF(10: return 0;)F1802f17ceF",
    R"F1802f17ceU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f17ceU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f17ce() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f17ce", "FUN_1802f17ce");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ba5be7132d730ca193f5a906ed5d6d66de1388c55324dcb211f320167a49d0a9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f17ce(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f17ce;
}

// 0x1802f17f8 FUN_1802f17f8
// source: re/dump/decompile/0x1802f17f8_FUN_1802f17f8.c
// size: 41 bytes; thunk: false
// body sha256: 7d00a21b04ba0fcbfc219dba969eca8304ba9fec54bb165fda00b857eca96ffa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f17f8{
    "0x1802f17f8",
    "FUN_1802f17f8",
    R"F1802f17f8S(undefined FUN_1802f17f8())F1802f17f8S",
    R"B1802f17f8(// 0x1802f17f8  FUN_1802f17f8
// size=41 thunk=false
// signature: undefined FUN_1802f17f8()
// status: ok


void FUN_1802f17f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


)B1802f17f8",
    "7d00a21b04ba0fcbfc219dba969eca8304ba9fec54bb165fda00b857eca96ffa",
    R"F1802f17f8C()F1802f17f8C",
    R"F1802f17f8D()F1802f17f8D",
    R"F1802f17f8T()F1802f17f8T",
    R"F1802f17f8F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f17f8F",
    R"F1802f17f8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f17f8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f17f8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f17f8", "FUN_1802f17f8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7d00a21b04ba0fcbfc219dba969eca8304ba9fec54bb165fda00b857eca96ffa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f17f8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f17f8;
}

// 0x1802f1830 FUN_1802f1830
// source: re/dump/decompile/0x1802f1830_FUN_1802f1830.c
// size: 38 bytes; thunk: false
// body sha256: a6a63032b30b85d6f72e681230e984f3f4bc27cd57e135066056470802629e43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1830{
    "0x1802f1830",
    "FUN_1802f1830",
    R"F1802f1830S(undefined FUN_1802f1830())F1802f1830S",
    R"B1802f1830(// 0x1802f1830  FUN_1802f1830
// size=38 thunk=false
// signature: undefined FUN_1802f1830()
// status: ok


void FUN_1802f1830(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802f1830",
    "a6a63032b30b85d6f72e681230e984f3f4bc27cd57e135066056470802629e43",
    R"F1802f1830C()F1802f1830C",
    R"F1802f1830D()F1802f1830D",
    R"F1802f1830T()F1802f1830T",
    R"F1802f1830F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f1830F",
    R"F1802f1830U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1830() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1830", "FUN_1802f1830");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a6a63032b30b85d6f72e681230e984f3f4bc27cd57e135066056470802629e43
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1830(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1830;
}

// 0x1802f186e FUN_1802f186e
// source: re/dump/decompile/0x1802f186e_FUN_1802f186e.c
// size: 74 bytes; thunk: false
// body sha256: 0b5de1f563c2f8dfb66e6388d24baaea0e0cccfc860710d520605f909754eb02
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f186e{
    "0x1802f186e",
    "FUN_1802f186e",
    R"F1802f186eS(undefined FUN_1802f186e())F1802f186eS",
    R"B1802f186e(// 0x1802f186e  FUN_1802f186e
// size=74 thunk=false
// signature: undefined FUN_1802f186e()
// status: ok


undefined8 FUN_1802f186e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_18001d080(puVar1,&DAT_18033e5ea,0);
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  return 0;
}


)B1802f186e",
    "0b5de1f563c2f8dfb66e6388d24baaea0e0cccfc860710d520605f909754eb02",
    R"F1802f186eC(FUN_18001d080)F1802f186eC",
    R"F1802f186eD(DAT_18033e5ea)F1802f186eD",
    R"F1802f186eT()F1802f186eT",
    R"F1802f186eF(19: return 0;)F1802f186eF",
    R"F1802f186eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.)F1802f186eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f186e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f186e", "FUN_1802f186e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    // body sha256: 0b5de1f563c2f8dfb66e6388d24baaea0e0cccfc860710d520605f909754eb02
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f186e(undefined8 param_1,longlong param_2)");
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("puVar1 = *(undefined8 **)(param_2 + 0x28);");
            trace.statement("*puVar1 = 0;");
            trace.statement("puVar1[1] = 0;");
            trace.statement("puVar1[2] = 0;");
            trace.statement("puVar1[3] = 0;");
            trace.statement("FUN_18001d080(puVar1,&DAT_18033e5ea,0);");
            trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f186e;
}

// 0x1802f18c0 FUN_1802f18c0
// source: re/dump/decompile/0x1802f18c0_FUN_1802f18c0.c
// size: 38 bytes; thunk: false
// body sha256: 0a9b2346598ca6e6f889a08bb105a46185b26aecad969509520d2735a47927cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f18c0{
    "0x1802f18c0",
    "FUN_1802f18c0",
    R"F1802f18c0S(undefined FUN_1802f18c0())F1802f18c0S",
    R"B1802f18c0(// 0x1802f18c0  FUN_1802f18c0
// size=38 thunk=false
// signature: undefined FUN_1802f18c0()
// status: ok


void FUN_1802f18c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802f18c0",
    "0a9b2346598ca6e6f889a08bb105a46185b26aecad969509520d2735a47927cd",
    R"F1802f18c0C()F1802f18c0C",
    R"F1802f18c0D()F1802f18c0D",
    R"F1802f18c0T()F1802f18c0T",
    R"F1802f18c0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f18c0F",
    R"F1802f18c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f18c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f18c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f18c0", "FUN_1802f18c0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0a9b2346598ca6e6f889a08bb105a46185b26aecad969509520d2735a47927cd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f18c0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f18c0;
}

// 0x1802f18f2 FUN_1802f18f2
// source: re/dump/decompile/0x1802f18f2_FUN_1802f18f2.c
// size: 29 bytes; thunk: false
// body sha256: a3033b5101a3b181016f02d44fc7f75fa252e8942958edf74bfdbb5a170b4d09
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f18f2{
    "0x1802f18f2",
    "FUN_1802f18f2",
    R"F1802f18f2S(undefined FUN_1802f18f2())F1802f18f2S",
    R"B1802f18f2(// 0x1802f18f2  FUN_1802f18f2
// size=29 thunk=false
// signature: undefined FUN_1802f18f2()
// status: ok


undefined8 FUN_1802f18f2(void)

{
  return 0;
}


)B1802f18f2",
    "a3033b5101a3b181016f02d44fc7f75fa252e8942958edf74bfdbb5a170b4d09",
    R"F1802f18f2C()F1802f18f2C",
    R"F1802f18f2D()F1802f18f2D",
    R"F1802f18f2T()F1802f18f2T",
    R"F1802f18f2F(10: return 0;)F1802f18f2F",
    R"F1802f18f2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f18f2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f18f2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f18f2", "FUN_1802f18f2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a3033b5101a3b181016f02d44fc7f75fa252e8942958edf74bfdbb5a170b4d09
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f18f2(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f18f2;
}

// 0x1802f194c FUN_1802f194c
// source: re/dump/decompile/0x1802f194c_FUN_1802f194c.c
// size: 39 bytes; thunk: false
// body sha256: 4c4ef5aac8dc10b5c3a040f3f4f38708193dd0ade0cba6c2a0e3a74d5def4155
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f194c{
    "0x1802f194c",
    "FUN_1802f194c",
    R"F1802f194cS(undefined FUN_1802f194c())F1802f194cS",
    R"B1802f194c(// 0x1802f194c  FUN_1802f194c
// size=39 thunk=false
// signature: undefined FUN_1802f194c()
// status: ok


undefined8 FUN_1802f194c(void)

{
  DAT_1803e71b0 = 0;
  return 0;
}


)B1802f194c",
    "4c4ef5aac8dc10b5c3a040f3f4f38708193dd0ade0cba6c2a0e3a74d5def4155",
    R"F1802f194cC()F1802f194cC",
    R"F1802f194cD(DAT_1803e71b0)F1802f194cD",
    R"F1802f194cT()F1802f194cT",
    R"F1802f194cF(11: return 0;)F1802f194cF",
    R"F1802f194cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e71b0.)F1802f194cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f194c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f194c", "FUN_1802f194c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e71b0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803e71b0", static_cast<const void*>(&image::DAT_1803e71b0));
    // body sha256: 4c4ef5aac8dc10b5c3a040f3f4f38708193dd0ade0cba6c2a0e3a74d5def4155
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f194c(void)");
        {
            trace.statement("DAT_1803e71b0 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f194c;
}

// 0x1802f1974 FUN_1802f1974
// source: re/dump/decompile/0x1802f1974_FUN_1802f1974.c
// size: 43 bytes; thunk: false
// body sha256: 723e9467b368589c9f830529bbb33688db3ac3dd56d055156c418cc0eb18d7b2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1974{
    "0x1802f1974",
    "FUN_1802f1974",
    R"F1802f1974S(undefined FUN_1802f1974())F1802f1974S",
    R"B1802f1974(// 0x1802f1974  FUN_1802f1974
// size=43 thunk=false
// signature: undefined FUN_1802f1974()
// status: ok


undefined8 FUN_1802f1974(undefined8 param_1,longlong param_2)

{
  *(bool *)(param_2 + 0xb0) = 0 < *(int *)(param_2 + 0xa8);
  return 0;
}


)B1802f1974",
    "723e9467b368589c9f830529bbb33688db3ac3dd56d055156c418cc0eb18d7b2",
    R"F1802f1974C()F1802f1974C",
    R"F1802f1974D()F1802f1974D",
    R"F1802f1974T()F1802f1974T",
    R"F1802f1974F(11: return 0;)F1802f1974F",
    R"F1802f1974U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1974U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1974() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1974", "FUN_1802f1974");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 723e9467b368589c9f830529bbb33688db3ac3dd56d055156c418cc0eb18d7b2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1974(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(bool *)(param_2 + 0xb0) = 0 < *(int *)(param_2 + 0xa8);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1974;
}

// 0x1802f19d0 FUN_1802f19d0
// source: re/dump/decompile/0x1802f19d0_FUN_1802f19d0.c
// size: 29 bytes; thunk: false
// body sha256: 2dfc6ed7568ff1a5c38090ca1e895962bbec8e0d4a5d58e0493544eac04dc78d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f19d0{
    "0x1802f19d0",
    "FUN_1802f19d0",
    R"F1802f19d0S(undefined FUN_1802f19d0())F1802f19d0S",
    R"B1802f19d0(// 0x1802f19d0  FUN_1802f19d0
// size=29 thunk=false
// signature: undefined FUN_1802f19d0()
// status: ok


undefined8 FUN_1802f19d0(void)

{
  return 0;
}


)B1802f19d0",
    "2dfc6ed7568ff1a5c38090ca1e895962bbec8e0d4a5d58e0493544eac04dc78d",
    R"F1802f19d0C()F1802f19d0C",
    R"F1802f19d0D()F1802f19d0D",
    R"F1802f19d0T()F1802f19d0T",
    R"F1802f19d0F(10: return 0;)F1802f19d0F",
    R"F1802f19d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f19d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f19d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f19d0", "FUN_1802f19d0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2dfc6ed7568ff1a5c38090ca1e895962bbec8e0d4a5d58e0493544eac04dc78d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f19d0(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f19d0;
}

// 0x1802f19ee FUN_1802f19ee
// source: re/dump/decompile/0x1802f19ee_FUN_1802f19ee.c
// size: 36 bytes; thunk: false
// body sha256: e22d7ff0b9989b9037f030fb524aefaaa59c7ee430d92785a4532979f4c8f15b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f19ee{
    "0x1802f19ee",
    "FUN_1802f19ee",
    R"F1802f19eeS(undefined FUN_1802f19ee())F1802f19eeS",
    R"B1802f19ee(// 0x1802f19ee  FUN_1802f19ee
// size=36 thunk=false
// signature: undefined FUN_1802f19ee()
// status: ok


undefined8 FUN_1802f19ee(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
  return 0;
}


)B1802f19ee",
    "e22d7ff0b9989b9037f030fb524aefaaa59c7ee430d92785a4532979f4c8f15b",
    R"F1802f19eeC()F1802f19eeC",
    R"F1802f19eeD()F1802f19eeD",
    R"F1802f19eeT()F1802f19eeT",
    R"F1802f19eeF(11: return 0;)F1802f19eeF",
    R"F1802f19eeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f19eeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f19ee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f19ee", "FUN_1802f19ee");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e22d7ff0b9989b9037f030fb524aefaaa59c7ee430d92785a4532979f4c8f15b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f19ee(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x5c) = 0xffffffff;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f19ee;
}

// 0x1802f1a2b FUN_1802f1a2b
// source: re/dump/decompile/0x1802f1a2b_FUN_1802f1a2b.c
// size: 41 bytes; thunk: false
// body sha256: df87bc97bbff4199ebfbaa91b284f7763ccc06d617c56f8184541bf602cb5a63
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1a2b{
    "0x1802f1a2b",
    "FUN_1802f1a2b",
    R"F1802f1a2bS(undefined FUN_1802f1a2b())F1802f1a2bS",
    R"B1802f1a2b(// 0x1802f1a2b  FUN_1802f1a2b
// size=41 thunk=false
// signature: undefined FUN_1802f1a2b()
// status: ok


void FUN_1802f1a2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


)B1802f1a2b",
    "df87bc97bbff4199ebfbaa91b284f7763ccc06d617c56f8184541bf602cb5a63",
    R"F1802f1a2bC()F1802f1a2bC",
    R"F1802f1a2bD()F1802f1a2bD",
    R"F1802f1a2bT()F1802f1a2bT",
    R"F1802f1a2bF(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f1a2bF",
    R"F1802f1a2bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1a2bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1a2b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1a2b", "FUN_1802f1a2b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: df87bc97bbff4199ebfbaa91b284f7763ccc06d617c56f8184541bf602cb5a63
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1a2b(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1a2b;
}

// 0x1802f1a54 FUN_1802f1a54
// source: re/dump/decompile/0x1802f1a54_FUN_1802f1a54.c
// size: 41 bytes; thunk: false
// body sha256: 3279d97949e88f94b356008641ef5e45600cc21a6169c046c86fa052ea29b0f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1a54{
    "0x1802f1a54",
    "FUN_1802f1a54",
    R"F1802f1a54S(undefined FUN_1802f1a54())F1802f1a54S",
    R"B1802f1a54(// 0x1802f1a54  FUN_1802f1a54
// size=41 thunk=false
// signature: undefined FUN_1802f1a54()
// status: ok


void FUN_1802f1a54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f1a54",
    "3279d97949e88f94b356008641ef5e45600cc21a6169c046c86fa052ea29b0f8",
    R"F1802f1a54C()F1802f1a54C",
    R"F1802f1a54D()F1802f1a54D",
    R"F1802f1a54T()F1802f1a54T",
    R"F1802f1a54F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f1a54F",
    R"F1802f1a54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1a54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1a54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1a54", "FUN_1802f1a54");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3279d97949e88f94b356008641ef5e45600cc21a6169c046c86fa052ea29b0f8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1a54(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1a54;
}

// 0x1802f1a7d FUN_1802f1a7d
// source: re/dump/decompile/0x1802f1a7d_FUN_1802f1a7d.c
// size: 41 bytes; thunk: false
// body sha256: f8e2f731889ff95fd365529d80304f1af1c910c4c71100b04c90a0876051b6fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1a7d{
    "0x1802f1a7d",
    "FUN_1802f1a7d",
    R"F1802f1a7dS(undefined FUN_1802f1a7d())F1802f1a7dS",
    R"B1802f1a7d(// 0x1802f1a7d  FUN_1802f1a7d
// size=41 thunk=false
// signature: undefined FUN_1802f1a7d()
// status: ok


void FUN_1802f1a7d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


)B1802f1a7d",
    "f8e2f731889ff95fd365529d80304f1af1c910c4c71100b04c90a0876051b6fc",
    R"F1802f1a7dC()F1802f1a7dC",
    R"F1802f1a7dD()F1802f1a7dD",
    R"F1802f1a7dT()F1802f1a7dT",
    R"F1802f1a7dF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f1a7dF",
    R"F1802f1a7dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1a7dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1a7d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1a7d", "FUN_1802f1a7d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f8e2f731889ff95fd365529d80304f1af1c910c4c71100b04c90a0876051b6fc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1a7d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1a7d;
}

// 0x1802f1aa6 FUN_1802f1aa6
// source: re/dump/decompile/0x1802f1aa6_FUN_1802f1aa6.c
// size: 41 bytes; thunk: false
// body sha256: 59e71c82dae2b178578e3c58d0599488c166fab655cfae3152cace91ea43e456
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1aa6{
    "0x1802f1aa6",
    "FUN_1802f1aa6",
    R"F1802f1aa6S(undefined FUN_1802f1aa6())F1802f1aa6S",
    R"B1802f1aa6(// 0x1802f1aa6  FUN_1802f1aa6
// size=41 thunk=false
// signature: undefined FUN_1802f1aa6()
// status: ok


void FUN_1802f1aa6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


)B1802f1aa6",
    "59e71c82dae2b178578e3c58d0599488c166fab655cfae3152cace91ea43e456",
    R"F1802f1aa6C()F1802f1aa6C",
    R"F1802f1aa6D()F1802f1aa6D",
    R"F1802f1aa6T()F1802f1aa6T",
    R"F1802f1aa6F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802f1aa6F",
    R"F1802f1aa6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1aa6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1aa6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1aa6", "FUN_1802f1aa6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 59e71c82dae2b178578e3c58d0599488c166fab655cfae3152cace91ea43e456
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1aa6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1aa6;
}

// 0x1802f1adb FUN_1802f1adb
// source: re/dump/decompile/0x1802f1adb_FUN_1802f1adb.c
// size: 41 bytes; thunk: false
// body sha256: 29714f8a111c3a80a4c104bec8464f699f780f79bd4e804e135933057298be43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1adb{
    "0x1802f1adb",
    "FUN_1802f1adb",
    R"F1802f1adbS(undefined FUN_1802f1adb())F1802f1adbS",
    R"B1802f1adb(// 0x1802f1adb  FUN_1802f1adb
// size=41 thunk=false
// signature: undefined FUN_1802f1adb()
// status: ok


void FUN_1802f1adb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802f1adb",
    "29714f8a111c3a80a4c104bec8464f699f780f79bd4e804e135933057298be43",
    R"F1802f1adbC()F1802f1adbC",
    R"F1802f1adbD()F1802f1adbD",
    R"F1802f1adbT()F1802f1adbT",
    R"F1802f1adbF(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802f1adbF",
    R"F1802f1adbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1adbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1adb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1adb", "FUN_1802f1adb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 29714f8a111c3a80a4c104bec8464f699f780f79bd4e804e135933057298be43
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1adb(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1adb;
}

// 0x1802f1b04 FUN_1802f1b04
// source: re/dump/decompile/0x1802f1b04_FUN_1802f1b04.c
// size: 41 bytes; thunk: false
// body sha256: a358965598897555fc48e844bd8888c0a9188af985deb44c3873703a231cf7b8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1b04{
    "0x1802f1b04",
    "FUN_1802f1b04",
    R"F1802f1b04S(undefined FUN_1802f1b04())F1802f1b04S",
    R"B1802f1b04(// 0x1802f1b04  FUN_1802f1b04
// size=41 thunk=false
// signature: undefined FUN_1802f1b04()
// status: ok


void FUN_1802f1b04(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802f1b04",
    "a358965598897555fc48e844bd8888c0a9188af985deb44c3873703a231cf7b8",
    R"F1802f1b04C()F1802f1b04C",
    R"F1802f1b04D()F1802f1b04D",
    R"F1802f1b04T()F1802f1b04T",
    R"F1802f1b04F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802f1b04F",
    R"F1802f1b04U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1b04U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1b04() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1b04", "FUN_1802f1b04");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a358965598897555fc48e844bd8888c0a9188af985deb44c3873703a231cf7b8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1b04(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1b04;
}

// 0x1802f1b45 FUN_1802f1b45
// source: re/dump/decompile/0x1802f1b45_FUN_1802f1b45.c
// size: 29 bytes; thunk: false
// body sha256: 2224dc1b5721b275e5ca0dd9096976fd0f292924adcf1c205079cf7a223777bf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1b45{
    "0x1802f1b45",
    "FUN_1802f1b45",
    R"F1802f1b45S(undefined FUN_1802f1b45())F1802f1b45S",
    R"B1802f1b45(// 0x1802f1b45  FUN_1802f1b45
// size=29 thunk=false
// signature: undefined FUN_1802f1b45()
// status: ok


undefined8 FUN_1802f1b45(void)

{
  return 0;
}


)B1802f1b45",
    "2224dc1b5721b275e5ca0dd9096976fd0f292924adcf1c205079cf7a223777bf",
    R"F1802f1b45C()F1802f1b45C",
    R"F1802f1b45D()F1802f1b45D",
    R"F1802f1b45T()F1802f1b45T",
    R"F1802f1b45F(10: return 0;)F1802f1b45F",
    R"F1802f1b45U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1b45U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1b45() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1b45", "FUN_1802f1b45");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2224dc1b5721b275e5ca0dd9096976fd0f292924adcf1c205079cf7a223777bf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1b45(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1b45;
}

// 0x1802f1b88 FUN_1802f1b88
// source: re/dump/decompile/0x1802f1b88_FUN_1802f1b88.c
// size: 29 bytes; thunk: false
// body sha256: 3d4bbee0f36f82c5e5f5a6f28ce0d93de3ceda4fe2a465fd5cad727a112775b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1b88{
    "0x1802f1b88",
    "FUN_1802f1b88",
    R"F1802f1b88S(undefined FUN_1802f1b88())F1802f1b88S",
    R"B1802f1b88(// 0x1802f1b88  FUN_1802f1b88
// size=29 thunk=false
// signature: undefined FUN_1802f1b88()
// status: ok


undefined8 FUN_1802f1b88(void)

{
  return 0;
}


)B1802f1b88",
    "3d4bbee0f36f82c5e5f5a6f28ce0d93de3ceda4fe2a465fd5cad727a112775b1",
    R"F1802f1b88C()F1802f1b88C",
    R"F1802f1b88D()F1802f1b88D",
    R"F1802f1b88T()F1802f1b88T",
    R"F1802f1b88F(10: return 0;)F1802f1b88F",
    R"F1802f1b88U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1b88U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1b88() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1b88", "FUN_1802f1b88");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3d4bbee0f36f82c5e5f5a6f28ce0d93de3ceda4fe2a465fd5cad727a112775b1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1b88(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1b88;
}

// 0x1802f1ba6 FUN_1802f1ba6
// source: re/dump/decompile/0x1802f1ba6_FUN_1802f1ba6.c
// size: 29 bytes; thunk: false
// body sha256: 1545b4fa1d49ce68ae1bdd4edd9fa4c542b7e34b1c4b0fe37cad4e9b236b578b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1ba6{
    "0x1802f1ba6",
    "FUN_1802f1ba6",
    R"F1802f1ba6S(undefined FUN_1802f1ba6())F1802f1ba6S",
    R"B1802f1ba6(// 0x1802f1ba6  FUN_1802f1ba6
// size=29 thunk=false
// signature: undefined FUN_1802f1ba6()
// status: ok


undefined8 FUN_1802f1ba6(void)

{
  return 0;
}


)B1802f1ba6",
    "1545b4fa1d49ce68ae1bdd4edd9fa4c542b7e34b1c4b0fe37cad4e9b236b578b",
    R"F1802f1ba6C()F1802f1ba6C",
    R"F1802f1ba6D()F1802f1ba6D",
    R"F1802f1ba6T()F1802f1ba6T",
    R"F1802f1ba6F(10: return 0;)F1802f1ba6F",
    R"F1802f1ba6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1ba6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1ba6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1ba6", "FUN_1802f1ba6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1545b4fa1d49ce68ae1bdd4edd9fa4c542b7e34b1c4b0fe37cad4e9b236b578b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1ba6(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1ba6;
}

// 0x1802f1bd0 FUN_1802f1bd0
// source: re/dump/decompile/0x1802f1bd0_FUN_1802f1bd0.c
// size: 29 bytes; thunk: false
// body sha256: a2d97164e265fd7bcba3a0e409b4a83794488a6390b8184b77e90b6eb98547db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1bd0{
    "0x1802f1bd0",
    "FUN_1802f1bd0",
    R"F1802f1bd0S(undefined FUN_1802f1bd0())F1802f1bd0S",
    R"B1802f1bd0(// 0x1802f1bd0  FUN_1802f1bd0
// size=29 thunk=false
// signature: undefined FUN_1802f1bd0()
// status: ok


undefined8 FUN_1802f1bd0(void)

{
  return 0;
}


)B1802f1bd0",
    "a2d97164e265fd7bcba3a0e409b4a83794488a6390b8184b77e90b6eb98547db",
    R"F1802f1bd0C()F1802f1bd0C",
    R"F1802f1bd0D()F1802f1bd0D",
    R"F1802f1bd0T()F1802f1bd0T",
    R"F1802f1bd0F(10: return 0;)F1802f1bd0F",
    R"F1802f1bd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1bd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1bd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1bd0", "FUN_1802f1bd0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a2d97164e265fd7bcba3a0e409b4a83794488a6390b8184b77e90b6eb98547db
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1bd0(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1bd0;
}

// 0x1802f1bee FUN_1802f1bee
// source: re/dump/decompile/0x1802f1bee_FUN_1802f1bee.c
// size: 29 bytes; thunk: false
// body sha256: c366a6a7127e740639a5cad32da298a8a36e09cb918c23a555c1fd3e0d67a2a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1bee{
    "0x1802f1bee",
    "FUN_1802f1bee",
    R"F1802f1beeS(undefined FUN_1802f1bee())F1802f1beeS",
    R"B1802f1bee(// 0x1802f1bee  FUN_1802f1bee
// size=29 thunk=false
// signature: undefined FUN_1802f1bee()
// status: ok


undefined8 FUN_1802f1bee(void)

{
  return 0;
}


)B1802f1bee",
    "c366a6a7127e740639a5cad32da298a8a36e09cb918c23a555c1fd3e0d67a2a5",
    R"F1802f1beeC()F1802f1beeC",
    R"F1802f1beeD()F1802f1beeD",
    R"F1802f1beeT()F1802f1beeT",
    R"F1802f1beeF(10: return 0;)F1802f1beeF",
    R"F1802f1beeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1beeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1bee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1bee", "FUN_1802f1bee");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c366a6a7127e740639a5cad32da298a8a36e09cb918c23a555c1fd3e0d67a2a5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1bee(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1bee;
}

// 0x1802f1c0c FUN_1802f1c0c
// source: re/dump/decompile/0x1802f1c0c_FUN_1802f1c0c.c
// size: 29 bytes; thunk: false
// body sha256: e733a6cb9a409cdd50bd62e8877d157668e9e31a5b7532fc5656385387d7407f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1c0c{
    "0x1802f1c0c",
    "FUN_1802f1c0c",
    R"F1802f1c0cS(undefined FUN_1802f1c0c())F1802f1c0cS",
    R"B1802f1c0c(// 0x1802f1c0c  FUN_1802f1c0c
// size=29 thunk=false
// signature: undefined FUN_1802f1c0c()
// status: ok


undefined8 FUN_1802f1c0c(void)

{
  return 0;
}


)B1802f1c0c",
    "e733a6cb9a409cdd50bd62e8877d157668e9e31a5b7532fc5656385387d7407f",
    R"F1802f1c0cC()F1802f1c0cC",
    R"F1802f1c0cD()F1802f1c0cD",
    R"F1802f1c0cT()F1802f1c0cT",
    R"F1802f1c0cF(10: return 0;)F1802f1c0cF",
    R"F1802f1c0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1c0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1c0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1c0c", "FUN_1802f1c0c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e733a6cb9a409cdd50bd62e8877d157668e9e31a5b7532fc5656385387d7407f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1c0c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1c0c;
}

// 0x1802f1c2a FUN_1802f1c2a
// source: re/dump/decompile/0x1802f1c2a_FUN_1802f1c2a.c
// size: 29 bytes; thunk: false
// body sha256: 0d20dc04eb50ae73fce047e4d911e34d0be200249094e15735c1676c0fc9e9d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1c2a{
    "0x1802f1c2a",
    "FUN_1802f1c2a",
    R"F1802f1c2aS(undefined FUN_1802f1c2a())F1802f1c2aS",
    R"B1802f1c2a(// 0x1802f1c2a  FUN_1802f1c2a
// size=29 thunk=false
// signature: undefined FUN_1802f1c2a()
// status: ok


undefined8 FUN_1802f1c2a(void)

{
  return 0;
}


)B1802f1c2a",
    "0d20dc04eb50ae73fce047e4d911e34d0be200249094e15735c1676c0fc9e9d3",
    R"F1802f1c2aC()F1802f1c2aC",
    R"F1802f1c2aD()F1802f1c2aD",
    R"F1802f1c2aT()F1802f1c2aT",
    R"F1802f1c2aF(10: return 0;)F1802f1c2aF",
    R"F1802f1c2aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1c2aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1c2a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1c2a", "FUN_1802f1c2a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0d20dc04eb50ae73fce047e4d911e34d0be200249094e15735c1676c0fc9e9d3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1c2a(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1c2a;
}

// 0x1802f1c48 FUN_1802f1c48
// source: re/dump/decompile/0x1802f1c48_FUN_1802f1c48.c
// size: 36 bytes; thunk: false
// body sha256: 2b43b729d326772e5e4e71581592000dd24d28e2c144221507250341556a54aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1c48{
    "0x1802f1c48",
    "FUN_1802f1c48",
    R"F1802f1c48S(undefined FUN_1802f1c48())F1802f1c48S",
    R"B1802f1c48(// 0x1802f1c48  FUN_1802f1c48
// size=36 thunk=false
// signature: undefined FUN_1802f1c48()
// status: ok


undefined8 FUN_1802f1c48(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
  return 0;
}


)B1802f1c48",
    "2b43b729d326772e5e4e71581592000dd24d28e2c144221507250341556a54aa",
    R"F1802f1c48C()F1802f1c48C",
    R"F1802f1c48D()F1802f1c48D",
    R"F1802f1c48T()F1802f1c48T",
    R"F1802f1c48F(11: return 0;)F1802f1c48F",
    R"F1802f1c48U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1c48U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1c48() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1c48", "FUN_1802f1c48");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2b43b729d326772e5e4e71581592000dd24d28e2c144221507250341556a54aa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1c48(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x54) = 0xffffffff;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1c48;
}

// 0x1802f1c6d FUN_1802f1c6d
// source: re/dump/decompile/0x1802f1c6d_FUN_1802f1c6d.c
// size: 41 bytes; thunk: false
// body sha256: 5761c45c193d7b1498305ac03ce8f95c384892ac2c63e9c288c04d8d12548eba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1c6d{
    "0x1802f1c6d",
    "FUN_1802f1c6d",
    R"F1802f1c6dS(undefined FUN_1802f1c6d())F1802f1c6dS",
    R"B1802f1c6d(// 0x1802f1c6d  FUN_1802f1c6d
// size=41 thunk=false
// signature: undefined FUN_1802f1c6d()
// status: ok


void FUN_1802f1c6d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);
  }
  return;
}


)B1802f1c6d",
    "5761c45c193d7b1498305ac03ce8f95c384892ac2c63e9c288c04d8d12548eba",
    R"F1802f1c6dC()F1802f1c6dC",
    R"F1802f1c6dD()F1802f1c6dD",
    R"F1802f1c6dT()F1802f1c6dT",
    R"F1802f1c6dF(10: if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
14: return;)F1802f1c6dF",
    R"F1802f1c6dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1c6dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1c6d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1c6d", "FUN_1802f1c6d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5761c45c193d7b1498305ac03ce8f95c384892ac2c63e9c288c04d8d12548eba
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1c6d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1c6d;
}

// 0x1802f1c96 FUN_1802f1c96
// source: re/dump/decompile/0x1802f1c96_FUN_1802f1c96.c
// size: 41 bytes; thunk: false
// body sha256: d2f28048bda4d84123733cdb8eb2c43efd1f23859d0441b52ebd14a20e38ddb5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1c96{
    "0x1802f1c96",
    "FUN_1802f1c96",
    R"F1802f1c96S(undefined FUN_1802f1c96())F1802f1c96S",
    R"B1802f1c96(// 0x1802f1c96  FUN_1802f1c96
// size=41 thunk=false
// signature: undefined FUN_1802f1c96()
// status: ok


void FUN_1802f1c96(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x230);
  }
  return;
}


)B1802f1c96",
    "d2f28048bda4d84123733cdb8eb2c43efd1f23859d0441b52ebd14a20e38ddb5",
    R"F1802f1c96C()F1802f1c96C",
    R"F1802f1c96D()F1802f1c96D",
    R"F1802f1c96T()F1802f1c96T",
    R"F1802f1c96F(10: if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
14: return;)F1802f1c96F",
    R"F1802f1c96U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1c96U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1c96() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1c96", "FUN_1802f1c96");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d2f28048bda4d84123733cdb8eb2c43efd1f23859d0441b52ebd14a20e38ddb5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1c96(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x230);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1c96;
}

// 0x1802f1ccb FUN_1802f1ccb
// source: re/dump/decompile/0x1802f1ccb_FUN_1802f1ccb.c
// size: 41 bytes; thunk: false
// body sha256: e8ac2c0fdd838f0451bc57c8133e5b32fa2726f70e28443c22e57e8f2322bcc3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1ccb{
    "0x1802f1ccb",
    "FUN_1802f1ccb",
    R"F1802f1ccbS(undefined FUN_1802f1ccb())F1802f1ccbS",
    R"B1802f1ccb(// 0x1802f1ccb  FUN_1802f1ccb
// size=41 thunk=false
// signature: undefined FUN_1802f1ccb()
// status: ok


void FUN_1802f1ccb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


)B1802f1ccb",
    "e8ac2c0fdd838f0451bc57c8133e5b32fa2726f70e28443c22e57e8f2322bcc3",
    R"F1802f1ccbC()F1802f1ccbC",
    R"F1802f1ccbD()F1802f1ccbD",
    R"F1802f1ccbT()F1802f1ccbT",
    R"F1802f1ccbF(10: if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
14: return;)F1802f1ccbF",
    R"F1802f1ccbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1ccbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1ccb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1ccb", "FUN_1802f1ccb");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e8ac2c0fdd838f0451bc57c8133e5b32fa2726f70e28443c22e57e8f2322bcc3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1ccb(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1ccb;
}

// 0x1802f1cf4 FUN_1802f1cf4
// source: re/dump/decompile/0x1802f1cf4_FUN_1802f1cf4.c
// size: 41 bytes; thunk: false
// body sha256: 5d71a40c8b122a610420af848779944b7ca8f81880521b90d05543b45800de37
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1cf4{
    "0x1802f1cf4",
    "FUN_1802f1cf4",
    R"F1802f1cf4S(undefined FUN_1802f1cf4())F1802f1cf4S",
    R"B1802f1cf4(// 0x1802f1cf4  FUN_1802f1cf4
// size=41 thunk=false
// signature: undefined FUN_1802f1cf4()
// status: ok


void FUN_1802f1cf4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);
  }
  return;
}


)B1802f1cf4",
    "5d71a40c8b122a610420af848779944b7ca8f81880521b90d05543b45800de37",
    R"F1802f1cf4C()F1802f1cf4C",
    R"F1802f1cf4D()F1802f1cf4D",
    R"F1802f1cf4T()F1802f1cf4T",
    R"F1802f1cf4F(10: if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
14: return;)F1802f1cf4F",
    R"F1802f1cf4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1cf4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1cf4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1cf4", "FUN_1802f1cf4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5d71a40c8b122a610420af848779944b7ca8f81880521b90d05543b45800de37
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1cf4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1cf4;
}

// 0x1802f1d1d FUN_1802f1d1d
// source: re/dump/decompile/0x1802f1d1d_FUN_1802f1d1d.c
// size: 41 bytes; thunk: false
// body sha256: 9bbcfd497ab392e25fe77f2e70d1309d859d73bebf0d70035c8ade31169bb28a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1d1d{
    "0x1802f1d1d",
    "FUN_1802f1d1d",
    R"F1802f1d1dS(undefined FUN_1802f1d1d())F1802f1d1dS",
    R"B1802f1d1d(// 0x1802f1d1d  FUN_1802f1d1d
// size=41 thunk=false
// signature: undefined FUN_1802f1d1d()
// status: ok


void FUN_1802f1d1d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


)B1802f1d1d",
    "9bbcfd497ab392e25fe77f2e70d1309d859d73bebf0d70035c8ade31169bb28a",
    R"F1802f1d1dC()F1802f1d1dC",
    R"F1802f1d1dD()F1802f1d1dD",
    R"F1802f1d1dT()F1802f1d1dT",
    R"F1802f1d1dF(10: if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
14: return;)F1802f1d1dF",
    R"F1802f1d1dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1d1dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1d1d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1d1d", "FUN_1802f1d1d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9bbcfd497ab392e25fe77f2e70d1309d859d73bebf0d70035c8ade31169bb28a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1d1d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1d1d;
}

// 0x1802f1d46 FUN_1802f1d46
// source: re/dump/decompile/0x1802f1d46_FUN_1802f1d46.c
// size: 41 bytes; thunk: false
// body sha256: ff72babfbfdc89b390156c8281b07d2a1a7da550d885d6c96a7e1c6b93280a9c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1d46{
    "0x1802f1d46",
    "FUN_1802f1d46",
    R"F1802f1d46S(undefined FUN_1802f1d46())F1802f1d46S",
    R"B1802f1d46(// 0x1802f1d46  FUN_1802f1d46
// size=41 thunk=false
// signature: undefined FUN_1802f1d46()
// status: ok


void FUN_1802f1d46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f1d46",
    "ff72babfbfdc89b390156c8281b07d2a1a7da550d885d6c96a7e1c6b93280a9c",
    R"F1802f1d46C()F1802f1d46C",
    R"F1802f1d46D()F1802f1d46D",
    R"F1802f1d46T()F1802f1d46T",
    R"F1802f1d46F(10: if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
14: return;)F1802f1d46F",
    R"F1802f1d46U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1d46U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1d46() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1d46", "FUN_1802f1d46");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ff72babfbfdc89b390156c8281b07d2a1a7da550d885d6c96a7e1c6b93280a9c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1d46(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1d46;
}

// 0x1802f1db7 FUN_1802f1db7
// source: re/dump/decompile/0x1802f1db7_FUN_1802f1db7.c
// size: 41 bytes; thunk: false
// body sha256: b8f96a9e594bf1abae0c58fe174575aa1e3d1f5da50ca300ecbab880155031bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1db7{
    "0x1802f1db7",
    "FUN_1802f1db7",
    R"F1802f1db7S(undefined FUN_1802f1db7())F1802f1db7S",
    R"B1802f1db7(// 0x1802f1db7  FUN_1802f1db7
// size=41 thunk=false
// signature: undefined FUN_1802f1db7()
// status: ok


void FUN_1802f1db7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);
  }
  return;
}


)B1802f1db7",
    "b8f96a9e594bf1abae0c58fe174575aa1e3d1f5da50ca300ecbab880155031bd",
    R"F1802f1db7C()F1802f1db7C",
    R"F1802f1db7D()F1802f1db7D",
    R"F1802f1db7T()F1802f1db7T",
    R"F1802f1db7F(10: if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
14: return;)F1802f1db7F",
    R"F1802f1db7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1db7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1db7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1db7", "FUN_1802f1db7");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b8f96a9e594bf1abae0c58fe174575aa1e3d1f5da50ca300ecbab880155031bd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1db7(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1db7;
}

// 0x1802f1de0 FUN_1802f1de0
// source: re/dump/decompile/0x1802f1de0_FUN_1802f1de0.c
// size: 46 bytes; thunk: false
// body sha256: 106617f77e19275fc01271a03309aa8ba1a468ce251459869daef2b3cbfac706
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1de0{
    "0x1802f1de0",
    "FUN_1802f1de0",
    R"F1802f1de0S(undefined FUN_1802f1de0())F1802f1de0S",
    R"B1802f1de0(// 0x1802f1de0  FUN_1802f1de0
// size=46 thunk=false
// signature: undefined FUN_1802f1de0()
// status: ok


void FUN_1802f1de0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b0);
  }
  return;
}


)B1802f1de0",
    "106617f77e19275fc01271a03309aa8ba1a468ce251459869daef2b3cbfac706",
    R"F1802f1de0C()F1802f1de0C",
    R"F1802f1de0D()F1802f1de0D",
    R"F1802f1de0T()F1802f1de0T",
    R"F1802f1de0F(10: if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
14: return;)F1802f1de0F",
    R"F1802f1de0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1de0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1de0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1de0", "FUN_1802f1de0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 106617f77e19275fc01271a03309aa8ba1a468ce251459869daef2b3cbfac706
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1de0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1de0;
}

// 0x1802f1e0e FUN_1802f1e0e
// source: re/dump/decompile/0x1802f1e0e_FUN_1802f1e0e.c
// size: 46 bytes; thunk: false
// body sha256: 4d26d052ac627b4ae2102dbacf75c4a5d0febde94f9eaa67e7ff9b822b27fd56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1e0e{
    "0x1802f1e0e",
    "FUN_1802f1e0e",
    R"F1802f1e0eS(undefined FUN_1802f1e0e())F1802f1e0eS",
    R"B1802f1e0e(// 0x1802f1e0e  FUN_1802f1e0e
// size=46 thunk=false
// signature: undefined FUN_1802f1e0e()
// status: ok


void FUN_1802f1e0e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);
  }
  return;
}


)B1802f1e0e",
    "4d26d052ac627b4ae2102dbacf75c4a5d0febde94f9eaa67e7ff9b822b27fd56",
    R"F1802f1e0eC()F1802f1e0eC",
    R"F1802f1e0eD()F1802f1e0eD",
    R"F1802f1e0eT()F1802f1e0eT",
    R"F1802f1e0eF(10: if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
14: return;)F1802f1e0eF",
    R"F1802f1e0eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1e0eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1e0e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1e0e", "FUN_1802f1e0e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4d26d052ac627b4ae2102dbacf75c4a5d0febde94f9eaa67e7ff9b822b27fd56
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1e0e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1e0e;
}

// 0x1802f1e3c FUN_1802f1e3c
// source: re/dump/decompile/0x1802f1e3c_FUN_1802f1e3c.c
// size: 46 bytes; thunk: false
// body sha256: 25b23a528542a5ddd654ab4db45342886a37d749d21aafae0d716f47170987a6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1e3c{
    "0x1802f1e3c",
    "FUN_1802f1e3c",
    R"F1802f1e3cS(undefined FUN_1802f1e3c())F1802f1e3cS",
    R"B1802f1e3c(// 0x1802f1e3c  FUN_1802f1e3c
// size=46 thunk=false
// signature: undefined FUN_1802f1e3c()
// status: ok


void FUN_1802f1e3c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x200) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802f1e3c",
    "25b23a528542a5ddd654ab4db45342886a37d749d21aafae0d716f47170987a6",
    R"F1802f1e3cC()F1802f1e3cC",
    R"F1802f1e3cD()F1802f1e3cD",
    R"F1802f1e3cT()F1802f1e3cT",
    R"F1802f1e3cF(10: if ((*(uint *)(param_2 + 0x44) & 0x200) != 0) {
14: return;)F1802f1e3cF",
    R"F1802f1e3cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1e3cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1e3c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1e3c", "FUN_1802f1e3c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 25b23a528542a5ddd654ab4db45342886a37d749d21aafae0d716f47170987a6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1e3c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1e3c;
}

// 0x1802f1e8e FUN_1802f1e8e
// source: re/dump/decompile/0x1802f1e8e_FUN_1802f1e8e.c
// size: 29 bytes; thunk: false
// body sha256: 3efc5188fe31cc4b01af54f0ef65898e5c5515d5a1b0c9df428e322790e38f95
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1e8e{
    "0x1802f1e8e",
    "FUN_1802f1e8e",
    R"F1802f1e8eS(undefined FUN_1802f1e8e())F1802f1e8eS",
    R"B1802f1e8e(// 0x1802f1e8e  FUN_1802f1e8e
// size=29 thunk=false
// signature: undefined FUN_1802f1e8e()
// status: ok


undefined8 FUN_1802f1e8e(void)

{
  return 0;
}


)B1802f1e8e",
    "3efc5188fe31cc4b01af54f0ef65898e5c5515d5a1b0c9df428e322790e38f95",
    R"F1802f1e8eC()F1802f1e8eC",
    R"F1802f1e8eD()F1802f1e8eD",
    R"F1802f1e8eT()F1802f1e8eT",
    R"F1802f1e8eF(10: return 0;)F1802f1e8eF",
    R"F1802f1e8eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1e8eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1e8e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1e8e", "FUN_1802f1e8e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3efc5188fe31cc4b01af54f0ef65898e5c5515d5a1b0c9df428e322790e38f95
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1e8e(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1e8e;
}

// 0x1802f1eac FUN_1802f1eac
// source: re/dump/decompile/0x1802f1eac_FUN_1802f1eac.c
// size: 46 bytes; thunk: false
// body sha256: 4f3af80ceb37875c23d724c57e1a9669cdb5f69bdef436cb8fba7f2dcf09d94b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1eac{
    "0x1802f1eac",
    "FUN_1802f1eac",
    R"F1802f1eacS(undefined FUN_1802f1eac())F1802f1eacS",
    R"B1802f1eac(// 0x1802f1eac  FUN_1802f1eac
// size=46 thunk=false
// signature: undefined FUN_1802f1eac()
// status: ok


void FUN_1802f1eac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x400) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802f1eac",
    "4f3af80ceb37875c23d724c57e1a9669cdb5f69bdef436cb8fba7f2dcf09d94b",
    R"F1802f1eacC()F1802f1eacC",
    R"F1802f1eacD()F1802f1eacD",
    R"F1802f1eacT()F1802f1eacT",
    R"F1802f1eacF(10: if ((*(uint *)(param_2 + 0x44) & 0x400) != 0) {
14: return;)F1802f1eacF",
    R"F1802f1eacU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1eacU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1eac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1eac", "FUN_1802f1eac");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4f3af80ceb37875c23d724c57e1a9669cdb5f69bdef436cb8fba7f2dcf09d94b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1eac(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1eac;
}

// 0x1802f1eda FUN_1802f1eda
// source: re/dump/decompile/0x1802f1eda_FUN_1802f1eda.c
// size: 46 bytes; thunk: false
// body sha256: f04e2a18dc11fa6c2a9a286bbae891e7f59bad605741ef60defd81d36cc6a79f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1eda{
    "0x1802f1eda",
    "FUN_1802f1eda",
    R"F1802f1edaS(undefined FUN_1802f1eda())F1802f1edaS",
    R"B1802f1eda(// 0x1802f1eda  FUN_1802f1eda
// size=46 thunk=false
// signature: undefined FUN_1802f1eda()
// status: ok


void FUN_1802f1eda(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x800) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);
  }
  return;
}


)B1802f1eda",
    "f04e2a18dc11fa6c2a9a286bbae891e7f59bad605741ef60defd81d36cc6a79f",
    R"F1802f1edaC()F1802f1edaC",
    R"F1802f1edaD()F1802f1edaD",
    R"F1802f1edaT()F1802f1edaT",
    R"F1802f1edaF(10: if ((*(uint *)(param_2 + 0x44) & 0x800) != 0) {
14: return;)F1802f1edaF",
    R"F1802f1edaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1edaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1eda() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1eda", "FUN_1802f1eda");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f04e2a18dc11fa6c2a9a286bbae891e7f59bad605741ef60defd81d36cc6a79f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1eda(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1eda;
}

// 0x1802f1f08 FUN_1802f1f08
// source: re/dump/decompile/0x1802f1f08_FUN_1802f1f08.c
// size: 46 bytes; thunk: false
// body sha256: 1dae49f427767d15960333cb47092353bde43bf7c984b636bb11cc5c01620e2b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1f08{
    "0x1802f1f08",
    "FUN_1802f1f08",
    R"F1802f1f08S(undefined FUN_1802f1f08())F1802f1f08S",
    R"B1802f1f08(// 0x1802f1f08  FUN_1802f1f08
// size=46 thunk=false
// signature: undefined FUN_1802f1f08()
// status: ok


void FUN_1802f1f08(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f1f08",
    "1dae49f427767d15960333cb47092353bde43bf7c984b636bb11cc5c01620e2b",
    R"F1802f1f08C()F1802f1f08C",
    R"F1802f1f08D()F1802f1f08D",
    R"F1802f1f08T()F1802f1f08T",
    R"F1802f1f08F(10: if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0) {
14: return;)F1802f1f08F",
    R"F1802f1f08U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1f08U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1f08() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1f08", "FUN_1802f1f08");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1dae49f427767d15960333cb47092353bde43bf7c984b636bb11cc5c01620e2b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1f08(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1f08;
}

// 0x1802f1f36 FUN_1802f1f36
// source: re/dump/decompile/0x1802f1f36_FUN_1802f1f36.c
// size: 46 bytes; thunk: false
// body sha256: 4acf480e5cec258582ff85f71ef2c9237bfaeba3abf448706fda4b8d5aa95b31
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1f36{
    "0x1802f1f36",
    "FUN_1802f1f36",
    R"F1802f1f36S(undefined FUN_1802f1f36())F1802f1f36S",
    R"B1802f1f36(// 0x1802f1f36  FUN_1802f1f36
// size=46 thunk=false
// signature: undefined FUN_1802f1f36()
// status: ok


void FUN_1802f1f36(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


)B1802f1f36",
    "4acf480e5cec258582ff85f71ef2c9237bfaeba3abf448706fda4b8d5aa95b31",
    R"F1802f1f36C()F1802f1f36C",
    R"F1802f1f36D()F1802f1f36D",
    R"F1802f1f36T()F1802f1f36T",
    R"F1802f1f36F(10: if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0) {
14: return;)F1802f1f36F",
    R"F1802f1f36U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1f36U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1f36() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1f36", "FUN_1802f1f36");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4acf480e5cec258582ff85f71ef2c9237bfaeba3abf448706fda4b8d5aa95b31
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1f36(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1f36;
}

// 0x1802f1f70 FUN_1802f1f70
// source: re/dump/decompile/0x1802f1f70_FUN_1802f1f70.c
// size: 46 bytes; thunk: false
// body sha256: a8320fcd06dbca20624f1aa7e7a81ed72aab013ebdffe4d03bc284ef41498210
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1f70{
    "0x1802f1f70",
    "FUN_1802f1f70",
    R"F1802f1f70S(undefined FUN_1802f1f70())F1802f1f70S",
    R"B1802f1f70(// 0x1802f1f70  FUN_1802f1f70
// size=46 thunk=false
// signature: undefined FUN_1802f1f70()
// status: ok


void FUN_1802f1f70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x250);
  }
  return;
}


)B1802f1f70",
    "a8320fcd06dbca20624f1aa7e7a81ed72aab013ebdffe4d03bc284ef41498210",
    R"F1802f1f70C()F1802f1f70C",
    R"F1802f1f70D()F1802f1f70D",
    R"F1802f1f70T()F1802f1f70T",
    R"F1802f1f70F(10: if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
14: return;)F1802f1f70F",
    R"F1802f1f70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1f70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1f70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1f70", "FUN_1802f1f70");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a8320fcd06dbca20624f1aa7e7a81ed72aab013ebdffe4d03bc284ef41498210
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1f70(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x250);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1f70;
}

// 0x1802f1f9e FUN_1802f1f9e
// source: re/dump/decompile/0x1802f1f9e_FUN_1802f1f9e.c
// size: 46 bytes; thunk: false
// body sha256: bbcfc858cbec8e302ed2a6183710a5e5dcb6108af7c63c70b314eef3900ff19b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1f9e{
    "0x1802f1f9e",
    "FUN_1802f1f9e",
    R"F1802f1f9eS(undefined FUN_1802f1f9e())F1802f1f9eS",
    R"B1802f1f9e(// 0x1802f1f9e  FUN_1802f1f9e
// size=46 thunk=false
// signature: undefined FUN_1802f1f9e()
// status: ok


void FUN_1802f1f9e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);
  }
  return;
}


)B1802f1f9e",
    "bbcfc858cbec8e302ed2a6183710a5e5dcb6108af7c63c70b314eef3900ff19b",
    R"F1802f1f9eC()F1802f1f9eC",
    R"F1802f1f9eD()F1802f1f9eD",
    R"F1802f1f9eT()F1802f1f9eT",
    R"F1802f1f9eF(10: if ((*(uint *)(param_2 + 0x44) & 0x8000) != 0) {
14: return;)F1802f1f9eF",
    R"F1802f1f9eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1f9eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1f9e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1f9e", "FUN_1802f1f9e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bbcfc858cbec8e302ed2a6183710a5e5dcb6108af7c63c70b314eef3900ff19b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f1f9e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x44) & 0x8000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f1f9e;
}

// 0x1802f1fe4 FUN_1802f1fe4
// source: re/dump/decompile/0x1802f1fe4_FUN_1802f1fe4.c
// size: 29 bytes; thunk: false
// body sha256: 3c977d062fcea23893b6be0aa38908b8c226ed5df805d47f4c291f85cdb3b78d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f1fe4{
    "0x1802f1fe4",
    "FUN_1802f1fe4",
    R"F1802f1fe4S(undefined FUN_1802f1fe4())F1802f1fe4S",
    R"B1802f1fe4(// 0x1802f1fe4  FUN_1802f1fe4
// size=29 thunk=false
// signature: undefined FUN_1802f1fe4()
// status: ok


undefined8 FUN_1802f1fe4(void)

{
  return 0;
}


)B1802f1fe4",
    "3c977d062fcea23893b6be0aa38908b8c226ed5df805d47f4c291f85cdb3b78d",
    R"F1802f1fe4C()F1802f1fe4C",
    R"F1802f1fe4D()F1802f1fe4D",
    R"F1802f1fe4T()F1802f1fe4T",
    R"F1802f1fe4F(10: return 0;)F1802f1fe4F",
    R"F1802f1fe4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f1fe4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f1fe4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f1fe4", "FUN_1802f1fe4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3c977d062fcea23893b6be0aa38908b8c226ed5df805d47f4c291f85cdb3b78d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f1fe4(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f1fe4;
}

// 0x1802f2002 FUN_1802f2002
// source: re/dump/decompile/0x1802f2002_FUN_1802f2002.c
// size: 29 bytes; thunk: false
// body sha256: 4e2a66957b48e6a9a772f8e8e64772afd780d1ac33857c81b1dca90e370031c5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2002{
    "0x1802f2002",
    "FUN_1802f2002",
    R"F1802f2002S(undefined FUN_1802f2002())F1802f2002S",
    R"B1802f2002(// 0x1802f2002  FUN_1802f2002
// size=29 thunk=false
// signature: undefined FUN_1802f2002()
// status: ok


undefined8 FUN_1802f2002(void)

{
  return 0;
}


)B1802f2002",
    "4e2a66957b48e6a9a772f8e8e64772afd780d1ac33857c81b1dca90e370031c5",
    R"F1802f2002C()F1802f2002C",
    R"F1802f2002D()F1802f2002D",
    R"F1802f2002T()F1802f2002T",
    R"F1802f2002F(10: return 0;)F1802f2002F",
    R"F1802f2002U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2002U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2002() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2002", "FUN_1802f2002");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4e2a66957b48e6a9a772f8e8e64772afd780d1ac33857c81b1dca90e370031c5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f2002(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f2002;
}

// 0x1802f2030 FUN_1802f2030
// source: re/dump/decompile/0x1802f2030_FUN_1802f2030.c
// size: 38 bytes; thunk: false
// body sha256: c27a11d23f357b94ef9d35867e493409b5df63a729cfc3a18cd6666ba5208b1c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2030{
    "0x1802f2030",
    "FUN_1802f2030",
    R"F1802f2030S(undefined FUN_1802f2030())F1802f2030S",
    R"B1802f2030(// 0x1802f2030  FUN_1802f2030
// size=38 thunk=false
// signature: undefined FUN_1802f2030()
// status: ok


void FUN_1802f2030(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2030",
    "c27a11d23f357b94ef9d35867e493409b5df63a729cfc3a18cd6666ba5208b1c",
    R"F1802f2030C(FUN_18021b0b0)F1802f2030C",
    R"F1802f2030D()F1802f2030D",
    R"F1802f2030T()F1802f2030T",
    R"F1802f2030F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f2030F",
    R"F1802f2030U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2030U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2030() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2030", "FUN_1802f2030");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: c27a11d23f357b94ef9d35867e493409b5df63a729cfc3a18cd6666ba5208b1c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2030(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2030;
}

// 0x1802f2056 FUN_1802f2056
// source: re/dump/decompile/0x1802f2056_FUN_1802f2056.c
// size: 32 bytes; thunk: false
// body sha256: ab55a262854b134bc61bed0df8b62f1c6a345d50663183a5c53ed36b91b42b00
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2056{
    "0x1802f2056",
    "FUN_1802f2056",
    R"F1802f2056S(undefined FUN_1802f2056())F1802f2056S",
    R"B1802f2056(// 0x1802f2056  FUN_1802f2056
// size=32 thunk=false
// signature: undefined FUN_1802f2056()
// status: ok


void FUN_1802f2056(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2056",
    "ab55a262854b134bc61bed0df8b62f1c6a345d50663183a5c53ed36b91b42b00",
    R"F1802f2056C()F1802f2056C",
    R"F1802f2056D()F1802f2056D",
    R"F1802f2056T()F1802f2056T",
    R"F1802f2056F(11: return;)F1802f2056F",
    R"F1802f2056U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2056U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2056() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2056", "FUN_1802f2056");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ab55a262854b134bc61bed0df8b62f1c6a345d50663183a5c53ed36b91b42b00
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2056(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2056;
}

// 0x1802f2082 FUN_1802f2082
// source: re/dump/decompile/0x1802f2082_FUN_1802f2082.c
// size: 38 bytes; thunk: false
// body sha256: b78f68e4ad3ce7132b6a2d9662b09dd580b626ec83a4fd91fdc4eac74dc37c82
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2082{
    "0x1802f2082",
    "FUN_1802f2082",
    R"F1802f2082S(undefined FUN_1802f2082())F1802f2082S",
    R"B1802f2082(// 0x1802f2082  FUN_1802f2082
// size=38 thunk=false
// signature: undefined FUN_1802f2082()
// status: ok


void FUN_1802f2082(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2082",
    "b78f68e4ad3ce7132b6a2d9662b09dd580b626ec83a4fd91fdc4eac74dc37c82",
    R"F1802f2082C(FUN_18021b0b0)F1802f2082C",
    R"F1802f2082D()F1802f2082D",
    R"F1802f2082T()F1802f2082T",
    R"F1802f2082F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f2082F",
    R"F1802f2082U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2082U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2082() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2082", "FUN_1802f2082");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: b78f68e4ad3ce7132b6a2d9662b09dd580b626ec83a4fd91fdc4eac74dc37c82
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2082(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2082;
}

// 0x1802f20a8 FUN_1802f20a8
// source: re/dump/decompile/0x1802f20a8_FUN_1802f20a8.c
// size: 32 bytes; thunk: false
// body sha256: 9eb1e8917568f5ec949f6cad85bef38939d9a26c058a6b13d01c2e1c28269fb5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f20a8{
    "0x1802f20a8",
    "FUN_1802f20a8",
    R"F1802f20a8S(undefined FUN_1802f20a8())F1802f20a8S",
    R"B1802f20a8(// 0x1802f20a8  FUN_1802f20a8
// size=32 thunk=false
// signature: undefined FUN_1802f20a8()
// status: ok


void FUN_1802f20a8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f20a8",
    "9eb1e8917568f5ec949f6cad85bef38939d9a26c058a6b13d01c2e1c28269fb5",
    R"F1802f20a8C()F1802f20a8C",
    R"F1802f20a8D()F1802f20a8D",
    R"F1802f20a8T()F1802f20a8T",
    R"F1802f20a8F(11: return;)F1802f20a8F",
    R"F1802f20a8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f20a8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f20a8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f20a8", "FUN_1802f20a8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9eb1e8917568f5ec949f6cad85bef38939d9a26c058a6b13d01c2e1c28269fb5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f20a8(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f20a8;
}

// 0x1802f20d4 FUN_1802f20d4
// source: re/dump/decompile/0x1802f20d4_FUN_1802f20d4.c
// size: 38 bytes; thunk: false
// body sha256: b1ff800cd6e7142ee3f8a4d7ae16948a61216c51f42e740589cefed8b12137c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f20d4{
    "0x1802f20d4",
    "FUN_1802f20d4",
    R"F1802f20d4S(undefined FUN_1802f20d4())F1802f20d4S",
    R"B1802f20d4(// 0x1802f20d4  FUN_1802f20d4
// size=38 thunk=false
// signature: undefined FUN_1802f20d4()
// status: ok


void FUN_1802f20d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f20d4",
    "b1ff800cd6e7142ee3f8a4d7ae16948a61216c51f42e740589cefed8b12137c8",
    R"F1802f20d4C(FUN_18021b0b0)F1802f20d4C",
    R"F1802f20d4D()F1802f20d4D",
    R"F1802f20d4T()F1802f20d4T",
    R"F1802f20d4F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f20d4F",
    R"F1802f20d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f20d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f20d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f20d4", "FUN_1802f20d4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: b1ff800cd6e7142ee3f8a4d7ae16948a61216c51f42e740589cefed8b12137c8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f20d4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f20d4;
}

// 0x1802f20fa FUN_1802f20fa
// source: re/dump/decompile/0x1802f20fa_FUN_1802f20fa.c
// size: 32 bytes; thunk: false
// body sha256: 660e91c97e95c210859f661a93c4a38082efc97a7f4c0912bd724b43958c3cae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f20fa{
    "0x1802f20fa",
    "FUN_1802f20fa",
    R"F1802f20faS(undefined FUN_1802f20fa())F1802f20faS",
    R"B1802f20fa(// 0x1802f20fa  FUN_1802f20fa
// size=32 thunk=false
// signature: undefined FUN_1802f20fa()
// status: ok


void FUN_1802f20fa(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f20fa",
    "660e91c97e95c210859f661a93c4a38082efc97a7f4c0912bd724b43958c3cae",
    R"F1802f20faC()F1802f20faC",
    R"F1802f20faD()F1802f20faD",
    R"F1802f20faT()F1802f20faT",
    R"F1802f20faF(11: return;)F1802f20faF",
    R"F1802f20faU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f20faU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f20fa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f20fa", "FUN_1802f20fa");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 660e91c97e95c210859f661a93c4a38082efc97a7f4c0912bd724b43958c3cae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f20fa(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f20fa;
}

// 0x1802f2126 FUN_1802f2126
// source: re/dump/decompile/0x1802f2126_FUN_1802f2126.c
// size: 38 bytes; thunk: false
// body sha256: 3e73e1216ac6f6e25ba9d6c3578de4e6deaa3b8056207995ed89a65fdf52fae5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2126{
    "0x1802f2126",
    "FUN_1802f2126",
    R"F1802f2126S(undefined FUN_1802f2126())F1802f2126S",
    R"B1802f2126(// 0x1802f2126  FUN_1802f2126
// size=38 thunk=false
// signature: undefined FUN_1802f2126()
// status: ok


void FUN_1802f2126(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2126",
    "3e73e1216ac6f6e25ba9d6c3578de4e6deaa3b8056207995ed89a65fdf52fae5",
    R"F1802f2126C(FUN_18021b0b0)F1802f2126C",
    R"F1802f2126D()F1802f2126D",
    R"F1802f2126T()F1802f2126T",
    R"F1802f2126F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f2126F",
    R"F1802f2126U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2126U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2126() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2126", "FUN_1802f2126");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 3e73e1216ac6f6e25ba9d6c3578de4e6deaa3b8056207995ed89a65fdf52fae5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2126(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2126;
}

// 0x1802f214c FUN_1802f214c
// source: re/dump/decompile/0x1802f214c_FUN_1802f214c.c
// size: 32 bytes; thunk: false
// body sha256: bf6192f93c75d570302bf78aa22f95347468056e36ac05c0c0ed69603141fd56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f214c{
    "0x1802f214c",
    "FUN_1802f214c",
    R"F1802f214cS(undefined FUN_1802f214c())F1802f214cS",
    R"B1802f214c(// 0x1802f214c  FUN_1802f214c
// size=32 thunk=false
// signature: undefined FUN_1802f214c()
// status: ok


void FUN_1802f214c(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f214c",
    "bf6192f93c75d570302bf78aa22f95347468056e36ac05c0c0ed69603141fd56",
    R"F1802f214cC()F1802f214cC",
    R"F1802f214cD()F1802f214cD",
    R"F1802f214cT()F1802f214cT",
    R"F1802f214cF(11: return;)F1802f214cF",
    R"F1802f214cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f214cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f214c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f214c", "FUN_1802f214c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bf6192f93c75d570302bf78aa22f95347468056e36ac05c0c0ed69603141fd56
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f214c(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f214c;
}

// 0x1802f2178 FUN_1802f2178
// source: re/dump/decompile/0x1802f2178_FUN_1802f2178.c
// size: 38 bytes; thunk: false
// body sha256: 9aed09493c12d486ec7e90cba8ff3a5a10a120eb7ea71f23c070a56fcf7818d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2178{
    "0x1802f2178",
    "FUN_1802f2178",
    R"F1802f2178S(undefined FUN_1802f2178())F1802f2178S",
    R"B1802f2178(// 0x1802f2178  FUN_1802f2178
// size=38 thunk=false
// signature: undefined FUN_1802f2178()
// status: ok


void FUN_1802f2178(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2178",
    "9aed09493c12d486ec7e90cba8ff3a5a10a120eb7ea71f23c070a56fcf7818d3",
    R"F1802f2178C(FUN_18021b0b0)F1802f2178C",
    R"F1802f2178D()F1802f2178D",
    R"F1802f2178T()F1802f2178T",
    R"F1802f2178F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f2178F",
    R"F1802f2178U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2178U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2178() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2178", "FUN_1802f2178");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 9aed09493c12d486ec7e90cba8ff3a5a10a120eb7ea71f23c070a56fcf7818d3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2178(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2178;
}

// 0x1802f219e FUN_1802f219e
// source: re/dump/decompile/0x1802f219e_FUN_1802f219e.c
// size: 32 bytes; thunk: false
// body sha256: 5e8874ca9ef2aab1df4f7eab27074a49a62007f18c4a113cb373408ce4c3f856
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f219e{
    "0x1802f219e",
    "FUN_1802f219e",
    R"F1802f219eS(undefined FUN_1802f219e())F1802f219eS",
    R"B1802f219e(// 0x1802f219e  FUN_1802f219e
// size=32 thunk=false
// signature: undefined FUN_1802f219e()
// status: ok


void FUN_1802f219e(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f219e",
    "5e8874ca9ef2aab1df4f7eab27074a49a62007f18c4a113cb373408ce4c3f856",
    R"F1802f219eC()F1802f219eC",
    R"F1802f219eD()F1802f219eD",
    R"F1802f219eT()F1802f219eT",
    R"F1802f219eF(11: return;)F1802f219eF",
    R"F1802f219eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f219eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f219e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f219e", "FUN_1802f219e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5e8874ca9ef2aab1df4f7eab27074a49a62007f18c4a113cb373408ce4c3f856
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f219e(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f219e;
}

// 0x1802f21ca FUN_1802f21ca
// source: re/dump/decompile/0x1802f21ca_FUN_1802f21ca.c
// size: 38 bytes; thunk: false
// body sha256: ae714bc4071f3397fb3b3f4661fbbc777a893a20996a86c584e0a3a8f4478674
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f21ca{
    "0x1802f21ca",
    "FUN_1802f21ca",
    R"F1802f21caS(undefined FUN_1802f21ca())F1802f21caS",
    R"B1802f21ca(// 0x1802f21ca  FUN_1802f21ca
// size=38 thunk=false
// signature: undefined FUN_1802f21ca()
// status: ok


void FUN_1802f21ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_18021b490(param_2 + 0x78);
  }
  return;
}


)B1802f21ca",
    "ae714bc4071f3397fb3b3f4661fbbc777a893a20996a86c584e0a3a8f4478674",
    R"F1802f21caC(FUN_18021b490)F1802f21caC",
    R"F1802f21caD()F1802f21caD",
    R"F1802f21caT()F1802f21caT",
    R"F1802f21caF(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802f21caF",
    R"F1802f21caU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f21caU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f21ca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f21ca", "FUN_1802f21ca");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b490", reinterpret_cast<const void*>(&image::FUN_18021b490));
    // body sha256: ae714bc4071f3397fb3b3f4661fbbc777a893a20996a86c584e0a3a8f4478674
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f21ca(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("FUN_18021b490(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f21ca;
}

// 0x1802f21f0 FUN_1802f21f0
// source: re/dump/decompile/0x1802f21f0_FUN_1802f21f0.c
// size: 32 bytes; thunk: false
// body sha256: a2e36c3e28f97c87283e147336783e3f36cc2ee5487f3bec420b7ffbc151430b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f21f0{
    "0x1802f21f0",
    "FUN_1802f21f0",
    R"F1802f21f0S(undefined FUN_1802f21f0())F1802f21f0S",
    R"B1802f21f0(// 0x1802f21f0  FUN_1802f21f0
// size=32 thunk=false
// signature: undefined FUN_1802f21f0()
// status: ok


void FUN_1802f21f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f21f0",
    "a2e36c3e28f97c87283e147336783e3f36cc2ee5487f3bec420b7ffbc151430b",
    R"F1802f21f0C()F1802f21f0C",
    R"F1802f21f0D()F1802f21f0D",
    R"F1802f21f0T()F1802f21f0T",
    R"F1802f21f0F(11: return;)F1802f21f0F",
    R"F1802f21f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f21f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f21f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f21f0", "FUN_1802f21f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a2e36c3e28f97c87283e147336783e3f36cc2ee5487f3bec420b7ffbc151430b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f21f0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f21f0;
}

// 0x1802f221c FUN_1802f221c
// source: re/dump/decompile/0x1802f221c_FUN_1802f221c.c
// size: 38 bytes; thunk: false
// body sha256: 68581350a96e494e7b1d18b649eaa96f1fb2f384c0365f2968ad4c4988a876b2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f221c{
    "0x1802f221c",
    "FUN_1802f221c",
    R"F1802f221cS(undefined FUN_1802f221c())F1802f221cS",
    R"B1802f221c(// 0x1802f221c  FUN_1802f221c
// size=38 thunk=false
// signature: undefined FUN_1802f221c()
// status: ok


void FUN_1802f221c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f221c",
    "68581350a96e494e7b1d18b649eaa96f1fb2f384c0365f2968ad4c4988a876b2",
    R"F1802f221cC(FUN_18021b0b0)F1802f221cC",
    R"F1802f221cD()F1802f221cD",
    R"F1802f221cT()F1802f221cT",
    R"F1802f221cF(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802f221cF",
    R"F1802f221cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f221cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f221c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f221c", "FUN_1802f221c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 68581350a96e494e7b1d18b649eaa96f1fb2f384c0365f2968ad4c4988a876b2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f221c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f221c;
}

// 0x1802f2242 FUN_1802f2242
// source: re/dump/decompile/0x1802f2242_FUN_1802f2242.c
// size: 32 bytes; thunk: false
// body sha256: da7857d832d9599ca5cf93d66cad15065b3ee8c40f5511ceb458add79c87e7f1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2242{
    "0x1802f2242",
    "FUN_1802f2242",
    R"F1802f2242S(undefined FUN_1802f2242())F1802f2242S",
    R"B1802f2242(// 0x1802f2242  FUN_1802f2242
// size=32 thunk=false
// signature: undefined FUN_1802f2242()
// status: ok


void FUN_1802f2242(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2242",
    "da7857d832d9599ca5cf93d66cad15065b3ee8c40f5511ceb458add79c87e7f1",
    R"F1802f2242C()F1802f2242C",
    R"F1802f2242D()F1802f2242D",
    R"F1802f2242T()F1802f2242T",
    R"F1802f2242F(11: return;)F1802f2242F",
    R"F1802f2242U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2242U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2242() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2242", "FUN_1802f2242");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: da7857d832d9599ca5cf93d66cad15065b3ee8c40f5511ceb458add79c87e7f1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2242(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2242;
}

// 0x1802f226e FUN_1802f226e
// source: re/dump/decompile/0x1802f226e_FUN_1802f226e.c
// size: 43 bytes; thunk: false
// body sha256: ba5334cc8900e7ac747ddfaca76b911acbf5a2b39a379da2544ec3024dd170dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f226e{
    "0x1802f226e",
    "FUN_1802f226e",
    R"F1802f226eS(undefined FUN_1802f226e())F1802f226eS",
    R"B1802f226e(// 0x1802f226e  FUN_1802f226e
// size=43 thunk=false
// signature: undefined FUN_1802f226e()
// status: ok


void FUN_1802f226e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f226e",
    "ba5334cc8900e7ac747ddfaca76b911acbf5a2b39a379da2544ec3024dd170dc",
    R"F1802f226eC(FUN_18021b0b0)F1802f226eC",
    R"F1802f226eD()F1802f226eD",
    R"F1802f226eT()F1802f226eT",
    R"F1802f226eF(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802f226eF",
    R"F1802f226eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f226eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f226e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f226e", "FUN_1802f226e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: ba5334cc8900e7ac747ddfaca76b911acbf5a2b39a379da2544ec3024dd170dc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f226e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f226e;
}

// 0x1802f2299 FUN_1802f2299
// source: re/dump/decompile/0x1802f2299_FUN_1802f2299.c
// size: 32 bytes; thunk: false
// body sha256: e9018ec93505fd7af0f917cd0084840dc7d57197fa7b2c943f8941a548a767b0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2299{
    "0x1802f2299",
    "FUN_1802f2299",
    R"F1802f2299S(undefined FUN_1802f2299())F1802f2299S",
    R"B1802f2299(// 0x1802f2299  FUN_1802f2299
// size=32 thunk=false
// signature: undefined FUN_1802f2299()
// status: ok


void FUN_1802f2299(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2299",
    "e9018ec93505fd7af0f917cd0084840dc7d57197fa7b2c943f8941a548a767b0",
    R"F1802f2299C()F1802f2299C",
    R"F1802f2299D()F1802f2299D",
    R"F1802f2299T()F1802f2299T",
    R"F1802f2299F(11: return;)F1802f2299F",
    R"F1802f2299U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2299U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2299() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2299", "FUN_1802f2299");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e9018ec93505fd7af0f917cd0084840dc7d57197fa7b2c943f8941a548a767b0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2299(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2299;
}

// 0x1802f22c5 FUN_1802f22c5
// source: re/dump/decompile/0x1802f22c5_FUN_1802f22c5.c
// size: 43 bytes; thunk: false
// body sha256: d86459f44cd39837af4c528dbd17d38d859e91e58b5d8c0cd59693e8ad505ac9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f22c5{
    "0x1802f22c5",
    "FUN_1802f22c5",
    R"F1802f22c5S(undefined FUN_1802f22c5())F1802f22c5S",
    R"B1802f22c5(// 0x1802f22c5  FUN_1802f22c5
// size=43 thunk=false
// signature: undefined FUN_1802f22c5()
// status: ok


void FUN_1802f22c5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f22c5",
    "d86459f44cd39837af4c528dbd17d38d859e91e58b5d8c0cd59693e8ad505ac9",
    R"F1802f22c5C(FUN_18021b0b0)F1802f22c5C",
    R"F1802f22c5D()F1802f22c5D",
    R"F1802f22c5T()F1802f22c5T",
    R"F1802f22c5F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802f22c5F",
    R"F1802f22c5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f22c5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f22c5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f22c5", "FUN_1802f22c5");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: d86459f44cd39837af4c528dbd17d38d859e91e58b5d8c0cd59693e8ad505ac9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f22c5(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f22c5;
}

// 0x1802f22f0 FUN_1802f22f0
// source: re/dump/decompile/0x1802f22f0_FUN_1802f22f0.c
// size: 32 bytes; thunk: false
// body sha256: 06042611c47417c59b9b8ca73a2fe2b479e97d149bf60aa5a7feba1e53c72d66
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f22f0{
    "0x1802f22f0",
    "FUN_1802f22f0",
    R"F1802f22f0S(undefined FUN_1802f22f0())F1802f22f0S",
    R"B1802f22f0(// 0x1802f22f0  FUN_1802f22f0
// size=32 thunk=false
// signature: undefined FUN_1802f22f0()
// status: ok


void FUN_1802f22f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f22f0",
    "06042611c47417c59b9b8ca73a2fe2b479e97d149bf60aa5a7feba1e53c72d66",
    R"F1802f22f0C()F1802f22f0C",
    R"F1802f22f0D()F1802f22f0D",
    R"F1802f22f0T()F1802f22f0T",
    R"F1802f22f0F(11: return;)F1802f22f0F",
    R"F1802f22f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f22f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f22f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f22f0", "FUN_1802f22f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 06042611c47417c59b9b8ca73a2fe2b479e97d149bf60aa5a7feba1e53c72d66
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f22f0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f22f0;
}

// 0x1802f231c FUN_1802f231c
// source: re/dump/decompile/0x1802f231c_FUN_1802f231c.c
// size: 43 bytes; thunk: false
// body sha256: fc224933305fde99756c5fa06a9e33c9c039cdfd69dfd31c203a102b1fa0522e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f231c{
    "0x1802f231c",
    "FUN_1802f231c",
    R"F1802f231cS(undefined FUN_1802f231c())F1802f231cS",
    R"B1802f231c(// 0x1802f231c  FUN_1802f231c
// size=43 thunk=false
// signature: undefined FUN_1802f231c()
// status: ok


void FUN_1802f231c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    FUN_18021b230(param_2 + 0x78);
  }
  return;
}


)B1802f231c",
    "fc224933305fde99756c5fa06a9e33c9c039cdfd69dfd31c203a102b1fa0522e",
    R"F1802f231cC(FUN_18021b230)F1802f231cC",
    R"F1802f231cD()F1802f231cD",
    R"F1802f231cT()F1802f231cT",
    R"F1802f231cF(10: if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
14: return;)F1802f231cF",
    R"F1802f231cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f231cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f231c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f231c", "FUN_1802f231c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b230", reinterpret_cast<const void*>(&image::FUN_18021b230));
    // body sha256: fc224933305fde99756c5fa06a9e33c9c039cdfd69dfd31c203a102b1fa0522e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f231c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;");
                trace.statement("FUN_18021b230(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f231c;
}

// 0x1802f2347 FUN_1802f2347
// source: re/dump/decompile/0x1802f2347_FUN_1802f2347.c
// size: 32 bytes; thunk: false
// body sha256: 5326f84d79d4882551a10642dbd1be6781dc0dc9600868aeb970b69446e6fe74
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2347{
    "0x1802f2347",
    "FUN_1802f2347",
    R"F1802f2347S(undefined FUN_1802f2347())F1802f2347S",
    R"B1802f2347(// 0x1802f2347  FUN_1802f2347
// size=32 thunk=false
// signature: undefined FUN_1802f2347()
// status: ok


void FUN_1802f2347(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2347",
    "5326f84d79d4882551a10642dbd1be6781dc0dc9600868aeb970b69446e6fe74",
    R"F1802f2347C()F1802f2347C",
    R"F1802f2347D()F1802f2347D",
    R"F1802f2347T()F1802f2347T",
    R"F1802f2347F(11: return;)F1802f2347F",
    R"F1802f2347U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2347U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2347() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2347", "FUN_1802f2347");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5326f84d79d4882551a10642dbd1be6781dc0dc9600868aeb970b69446e6fe74
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2347(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2347;
}

// 0x1802f2373 FUN_1802f2373
// source: re/dump/decompile/0x1802f2373_FUN_1802f2373.c
// size: 43 bytes; thunk: false
// body sha256: b9f56e80f9bc2a4b02d71d228ee807e3c3cca4043f765ac9521902c93665552b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2373{
    "0x1802f2373",
    "FUN_1802f2373",
    R"F1802f2373S(undefined FUN_1802f2373())F1802f2373S",
    R"B1802f2373(// 0x1802f2373  FUN_1802f2373
// size=43 thunk=false
// signature: undefined FUN_1802f2373()
// status: ok


void FUN_1802f2373(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2373",
    "b9f56e80f9bc2a4b02d71d228ee807e3c3cca4043f765ac9521902c93665552b",
    R"F1802f2373C(FUN_18021b0b0)F1802f2373C",
    R"F1802f2373D()F1802f2373D",
    R"F1802f2373T()F1802f2373T",
    R"F1802f2373F(10: if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
14: return;)F1802f2373F",
    R"F1802f2373U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2373U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2373() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2373", "FUN_1802f2373");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: b9f56e80f9bc2a4b02d71d228ee807e3c3cca4043f765ac9521902c93665552b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2373(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x400) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2373;
}

// 0x1802f239e FUN_1802f239e
// source: re/dump/decompile/0x1802f239e_FUN_1802f239e.c
// size: 32 bytes; thunk: false
// body sha256: 3c31aea882bfc73b7023a953b648a3f409c8d6a9d23b0d1dce10619c847068f5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f239e{
    "0x1802f239e",
    "FUN_1802f239e",
    R"F1802f239eS(undefined FUN_1802f239e())F1802f239eS",
    R"B1802f239e(// 0x1802f239e  FUN_1802f239e
// size=32 thunk=false
// signature: undefined FUN_1802f239e()
// status: ok


void FUN_1802f239e(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f239e",
    "3c31aea882bfc73b7023a953b648a3f409c8d6a9d23b0d1dce10619c847068f5",
    R"F1802f239eC()F1802f239eC",
    R"F1802f239eD()F1802f239eD",
    R"F1802f239eT()F1802f239eT",
    R"F1802f239eF(11: return;)F1802f239eF",
    R"F1802f239eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f239eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f239e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f239e", "FUN_1802f239e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3c31aea882bfc73b7023a953b648a3f409c8d6a9d23b0d1dce10619c847068f5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f239e(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f239e;
}

// 0x1802f23ca FUN_1802f23ca
// source: re/dump/decompile/0x1802f23ca_FUN_1802f23ca.c
// size: 43 bytes; thunk: false
// body sha256: 4a5b354d9f4fe4e61a20c116dae1af07729e80b2c2a63c163069fb8e113b7a33
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f23ca{
    "0x1802f23ca",
    "FUN_1802f23ca",
    R"F1802f23caS(undefined FUN_1802f23ca())F1802f23caS",
    R"B1802f23ca(// 0x1802f23ca  FUN_1802f23ca
// size=43 thunk=false
// signature: undefined FUN_1802f23ca()
// status: ok


void FUN_1802f23ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    FUN_18021b150(param_2 + 0x78);
  }
  return;
}


)B1802f23ca",
    "4a5b354d9f4fe4e61a20c116dae1af07729e80b2c2a63c163069fb8e113b7a33",
    R"F1802f23caC(FUN_18021b150)F1802f23caC",
    R"F1802f23caD()F1802f23caD",
    R"F1802f23caT()F1802f23caT",
    R"F1802f23caF(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802f23caF",
    R"F1802f23caU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f23caU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f23ca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f23ca", "FUN_1802f23ca");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b150", reinterpret_cast<const void*>(&image::FUN_18021b150));
    // body sha256: 4a5b354d9f4fe4e61a20c116dae1af07729e80b2c2a63c163069fb8e113b7a33
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f23ca(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("FUN_18021b150(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f23ca;
}

// 0x1802f23f5 FUN_1802f23f5
// source: re/dump/decompile/0x1802f23f5_FUN_1802f23f5.c
// size: 32 bytes; thunk: false
// body sha256: 65a5d8966bda099e2068a106d94134236e0a1cc23b1c6659a2f464f68b48b3b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f23f5{
    "0x1802f23f5",
    "FUN_1802f23f5",
    R"F1802f23f5S(undefined FUN_1802f23f5())F1802f23f5S",
    R"B1802f23f5(// 0x1802f23f5  FUN_1802f23f5
// size=32 thunk=false
// signature: undefined FUN_1802f23f5()
// status: ok


void FUN_1802f23f5(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f23f5",
    "65a5d8966bda099e2068a106d94134236e0a1cc23b1c6659a2f464f68b48b3b1",
    R"F1802f23f5C()F1802f23f5C",
    R"F1802f23f5D()F1802f23f5D",
    R"F1802f23f5T()F1802f23f5T",
    R"F1802f23f5F(11: return;)F1802f23f5F",
    R"F1802f23f5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f23f5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f23f5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f23f5", "FUN_1802f23f5");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 65a5d8966bda099e2068a106d94134236e0a1cc23b1c6659a2f464f68b48b3b1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f23f5(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f23f5;
}

// 0x1802f2421 FUN_1802f2421
// source: re/dump/decompile/0x1802f2421_FUN_1802f2421.c
// size: 43 bytes; thunk: false
// body sha256: 259d7e5463d17c496926fbdeaab50243acbee556b2fa63e60c6df95e7fa9c13a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2421{
    "0x1802f2421",
    "FUN_1802f2421",
    R"F1802f2421S(undefined FUN_1802f2421())F1802f2421S",
    R"B1802f2421(// 0x1802f2421  FUN_1802f2421
// size=43 thunk=false
// signature: undefined FUN_1802f2421()
// status: ok


void FUN_1802f2421(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    FUN_18021b470(param_2 + 0x78);
  }
  return;
}


)B1802f2421",
    "259d7e5463d17c496926fbdeaab50243acbee556b2fa63e60c6df95e7fa9c13a",
    R"F1802f2421C(FUN_18021b470)F1802f2421C",
    R"F1802f2421D()F1802f2421D",
    R"F1802f2421T()F1802f2421T",
    R"F1802f2421F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802f2421F",
    R"F1802f2421U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2421U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2421() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2421", "FUN_1802f2421");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b470", reinterpret_cast<const void*>(&image::FUN_18021b470));
    // body sha256: 259d7e5463d17c496926fbdeaab50243acbee556b2fa63e60c6df95e7fa9c13a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2421(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("FUN_18021b470(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2421;
}

// 0x1802f244c FUN_1802f244c
// source: re/dump/decompile/0x1802f244c_FUN_1802f244c.c
// size: 32 bytes; thunk: false
// body sha256: 51b78eb8c51168b408bba3b7cff80b9c3e53ba41af3af0f4481f7c76b37edda1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f244c{
    "0x1802f244c",
    "FUN_1802f244c",
    R"F1802f244cS(undefined FUN_1802f244c())F1802f244cS",
    R"B1802f244c(// 0x1802f244c  FUN_1802f244c
// size=32 thunk=false
// signature: undefined FUN_1802f244c()
// status: ok


void FUN_1802f244c(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f244c",
    "51b78eb8c51168b408bba3b7cff80b9c3e53ba41af3af0f4481f7c76b37edda1",
    R"F1802f244cC()F1802f244cC",
    R"F1802f244cD()F1802f244cD",
    R"F1802f244cT()F1802f244cT",
    R"F1802f244cF(11: return;)F1802f244cF",
    R"F1802f244cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f244cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f244c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f244c", "FUN_1802f244c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 51b78eb8c51168b408bba3b7cff80b9c3e53ba41af3af0f4481f7c76b37edda1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f244c(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f244c;
}

// 0x1802f2478 FUN_1802f2478
// source: re/dump/decompile/0x1802f2478_FUN_1802f2478.c
// size: 43 bytes; thunk: false
// body sha256: 4c8d2c17d279336c84b5082c1ab3f5c4a095f40f329bc1e5f5651a85283be633
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2478{
    "0x1802f2478",
    "FUN_1802f2478",
    R"F1802f2478S(undefined FUN_1802f2478())F1802f2478S",
    R"B1802f2478(// 0x1802f2478  FUN_1802f2478
// size=43 thunk=false
// signature: undefined FUN_1802f2478()
// status: ok


void FUN_1802f2478(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2478",
    "4c8d2c17d279336c84b5082c1ab3f5c4a095f40f329bc1e5f5651a85283be633",
    R"F1802f2478C(FUN_18021b0b0)F1802f2478C",
    R"F1802f2478D()F1802f2478D",
    R"F1802f2478T()F1802f2478T",
    R"F1802f2478F(10: if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
14: return;)F1802f2478F",
    R"F1802f2478U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2478U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2478() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2478", "FUN_1802f2478");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 4c8d2c17d279336c84b5082c1ab3f5c4a095f40f329bc1e5f5651a85283be633
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2478(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2478;
}

// 0x1802f24a3 FUN_1802f24a3
// source: re/dump/decompile/0x1802f24a3_FUN_1802f24a3.c
// size: 32 bytes; thunk: false
// body sha256: 92494fd6a59426313577b11a22f8e791ad7e30df14805c8ed033b2ac47fd23e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f24a3{
    "0x1802f24a3",
    "FUN_1802f24a3",
    R"F1802f24a3S(undefined FUN_1802f24a3())F1802f24a3S",
    R"B1802f24a3(// 0x1802f24a3  FUN_1802f24a3
// size=32 thunk=false
// signature: undefined FUN_1802f24a3()
// status: ok


void FUN_1802f24a3(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f24a3",
    "92494fd6a59426313577b11a22f8e791ad7e30df14805c8ed033b2ac47fd23e3",
    R"F1802f24a3C()F1802f24a3C",
    R"F1802f24a3D()F1802f24a3D",
    R"F1802f24a3T()F1802f24a3T",
    R"F1802f24a3F(11: return;)F1802f24a3F",
    R"F1802f24a3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f24a3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f24a3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f24a3", "FUN_1802f24a3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 92494fd6a59426313577b11a22f8e791ad7e30df14805c8ed033b2ac47fd23e3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f24a3(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f24a3;
}

// 0x1802f24cf FUN_1802f24cf
// source: re/dump/decompile/0x1802f24cf_FUN_1802f24cf.c
// size: 43 bytes; thunk: false
// body sha256: 4e504764670af4bad09c2c8d21d0787d8af3be7abd3161dd1a2289fea7ff3422
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f24cf{
    "0x1802f24cf",
    "FUN_1802f24cf",
    R"F1802f24cfS(undefined FUN_1802f24cf())F1802f24cfS",
    R"B1802f24cf(// 0x1802f24cf  FUN_1802f24cf
// size=43 thunk=false
// signature: undefined FUN_1802f24cf()
// status: ok


void FUN_1802f24cf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f24cf",
    "4e504764670af4bad09c2c8d21d0787d8af3be7abd3161dd1a2289fea7ff3422",
    R"F1802f24cfC(FUN_18021b0b0)F1802f24cfC",
    R"F1802f24cfD()F1802f24cfD",
    R"F1802f24cfT()F1802f24cfT",
    R"F1802f24cfF(10: if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
14: return;)F1802f24cfF",
    R"F1802f24cfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f24cfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f24cf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f24cf", "FUN_1802f24cf");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 4e504764670af4bad09c2c8d21d0787d8af3be7abd3161dd1a2289fea7ff3422
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f24cf(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f24cf;
}

// 0x1802f24fa FUN_1802f24fa
// source: re/dump/decompile/0x1802f24fa_FUN_1802f24fa.c
// size: 32 bytes; thunk: false
// body sha256: 006a06da017dbe63bc790e8aab5dcbf9562fbcd27aabfc1b92c3d53474d0db5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f24fa{
    "0x1802f24fa",
    "FUN_1802f24fa",
    R"F1802f24faS(undefined FUN_1802f24fa())F1802f24faS",
    R"B1802f24fa(// 0x1802f24fa  FUN_1802f24fa
// size=32 thunk=false
// signature: undefined FUN_1802f24fa()
// status: ok


void FUN_1802f24fa(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f24fa",
    "006a06da017dbe63bc790e8aab5dcbf9562fbcd27aabfc1b92c3d53474d0db5c",
    R"F1802f24faC()F1802f24faC",
    R"F1802f24faD()F1802f24faD",
    R"F1802f24faT()F1802f24faT",
    R"F1802f24faF(11: return;)F1802f24faF",
    R"F1802f24faU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f24faU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f24fa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f24fa", "FUN_1802f24fa");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 006a06da017dbe63bc790e8aab5dcbf9562fbcd27aabfc1b92c3d53474d0db5c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f24fa(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f24fa;
}

// 0x1802f2526 FUN_1802f2526
// source: re/dump/decompile/0x1802f2526_FUN_1802f2526.c
// size: 43 bytes; thunk: false
// body sha256: 79bc482cf4663f303e3c55c741b83fcc26dcf3a2164b8ec6d173b1ec619c9b7b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2526{
    "0x1802f2526",
    "FUN_1802f2526",
    R"F1802f2526S(undefined FUN_1802f2526())F1802f2526S",
    R"B1802f2526(// 0x1802f2526  FUN_1802f2526
// size=43 thunk=false
// signature: undefined FUN_1802f2526()
// status: ok


void FUN_1802f2526(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2526",
    "79bc482cf4663f303e3c55c741b83fcc26dcf3a2164b8ec6d173b1ec619c9b7b",
    R"F1802f2526C(FUN_18021b0b0)F1802f2526C",
    R"F1802f2526D()F1802f2526D",
    R"F1802f2526T()F1802f2526T",
    R"F1802f2526F(10: if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
14: return;)F1802f2526F",
    R"F1802f2526U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2526U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2526() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2526", "FUN_1802f2526");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 79bc482cf4663f303e3c55c741b83fcc26dcf3a2164b8ec6d173b1ec619c9b7b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2526(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2526;
}

// 0x1802f2551 FUN_1802f2551
// source: re/dump/decompile/0x1802f2551_FUN_1802f2551.c
// size: 32 bytes; thunk: false
// body sha256: 45a4472d9a967026d72836d3cae42264bd21d5706ad419f80182faafbff64405
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2551{
    "0x1802f2551",
    "FUN_1802f2551",
    R"F1802f2551S(undefined FUN_1802f2551())F1802f2551S",
    R"B1802f2551(// 0x1802f2551  FUN_1802f2551
// size=32 thunk=false
// signature: undefined FUN_1802f2551()
// status: ok


void FUN_1802f2551(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2551",
    "45a4472d9a967026d72836d3cae42264bd21d5706ad419f80182faafbff64405",
    R"F1802f2551C()F1802f2551C",
    R"F1802f2551D()F1802f2551D",
    R"F1802f2551T()F1802f2551T",
    R"F1802f2551F(11: return;)F1802f2551F",
    R"F1802f2551U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2551U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2551() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2551", "FUN_1802f2551");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 45a4472d9a967026d72836d3cae42264bd21d5706ad419f80182faafbff64405
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2551(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2551;
}

// 0x1802f257d FUN_1802f257d
// source: re/dump/decompile/0x1802f257d_FUN_1802f257d.c
// size: 43 bytes; thunk: false
// body sha256: 96f76ef7bce4708952fd96ff11188f0e590e175208b28b1e1b52a31ece7a31bf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f257d{
    "0x1802f257d",
    "FUN_1802f257d",
    R"F1802f257dS(undefined FUN_1802f257d())F1802f257dS",
    R"B1802f257d(// 0x1802f257d  FUN_1802f257d
// size=43 thunk=false
// signature: undefined FUN_1802f257d()
// status: ok


void FUN_1802f257d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    FUN_18021b150(param_2 + 0x78);
  }
  return;
}


)B1802f257d",
    "96f76ef7bce4708952fd96ff11188f0e590e175208b28b1e1b52a31ece7a31bf",
    R"F1802f257dC(FUN_18021b150)F1802f257dC",
    R"F1802f257dD()F1802f257dD",
    R"F1802f257dT()F1802f257dT",
    R"F1802f257dF(10: if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
14: return;)F1802f257dF",
    R"F1802f257dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f257dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f257d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f257d", "FUN_1802f257d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b150", reinterpret_cast<const void*>(&image::FUN_18021b150));
    // body sha256: 96f76ef7bce4708952fd96ff11188f0e590e175208b28b1e1b52a31ece7a31bf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f257d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;");
                trace.statement("FUN_18021b150(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f257d;
}

// 0x1802f25a8 FUN_1802f25a8
// source: re/dump/decompile/0x1802f25a8_FUN_1802f25a8.c
// size: 32 bytes; thunk: false
// body sha256: 1650abde0587f1bc322429936ada3b4e348d4d97cc2d20711c08138a1a8b0c17
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f25a8{
    "0x1802f25a8",
    "FUN_1802f25a8",
    R"F1802f25a8S(undefined FUN_1802f25a8())F1802f25a8S",
    R"B1802f25a8(// 0x1802f25a8  FUN_1802f25a8
// size=32 thunk=false
// signature: undefined FUN_1802f25a8()
// status: ok


void FUN_1802f25a8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f25a8",
    "1650abde0587f1bc322429936ada3b4e348d4d97cc2d20711c08138a1a8b0c17",
    R"F1802f25a8C()F1802f25a8C",
    R"F1802f25a8D()F1802f25a8D",
    R"F1802f25a8T()F1802f25a8T",
    R"F1802f25a8F(11: return;)F1802f25a8F",
    R"F1802f25a8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f25a8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f25a8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f25a8", "FUN_1802f25a8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1650abde0587f1bc322429936ada3b4e348d4d97cc2d20711c08138a1a8b0c17
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f25a8(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f25a8;
}

// 0x1802f25d4 FUN_1802f25d4
// source: re/dump/decompile/0x1802f25d4_FUN_1802f25d4.c
// size: 43 bytes; thunk: false
// body sha256: c657beedd6ca787c02d4484845c7e68569a91987fde4aef18d8525563d0cc108
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f25d4{
    "0x1802f25d4",
    "FUN_1802f25d4",
    R"F1802f25d4S(undefined FUN_1802f25d4())F1802f25d4S",
    R"B1802f25d4(// 0x1802f25d4  FUN_1802f25d4
// size=43 thunk=false
// signature: undefined FUN_1802f25d4()
// status: ok


void FUN_1802f25d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffdffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f25d4",
    "c657beedd6ca787c02d4484845c7e68569a91987fde4aef18d8525563d0cc108",
    R"F1802f25d4C(FUN_18021b0b0)F1802f25d4C",
    R"F1802f25d4D()F1802f25d4D",
    R"F1802f25d4T()F1802f25d4T",
    R"F1802f25d4F(10: if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0) {
14: return;)F1802f25d4F",
    R"F1802f25d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f25d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f25d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f25d4", "FUN_1802f25d4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: c657beedd6ca787c02d4484845c7e68569a91987fde4aef18d8525563d0cc108
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f25d4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffdffff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f25d4;
}

// 0x1802f25ff FUN_1802f25ff
// source: re/dump/decompile/0x1802f25ff_FUN_1802f25ff.c
// size: 32 bytes; thunk: false
// body sha256: 220ccae35e92d5dfdc8202a5f1d9fe82cd9fa6a4ef9d85a24682cf9cf2ad6f5f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f25ff{
    "0x1802f25ff",
    "FUN_1802f25ff",
    R"F1802f25ffS(undefined FUN_1802f25ff())F1802f25ffS",
    R"B1802f25ff(// 0x1802f25ff  FUN_1802f25ff
// size=32 thunk=false
// signature: undefined FUN_1802f25ff()
// status: ok


void FUN_1802f25ff(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f25ff",
    "220ccae35e92d5dfdc8202a5f1d9fe82cd9fa6a4ef9d85a24682cf9cf2ad6f5f",
    R"F1802f25ffC()F1802f25ffC",
    R"F1802f25ffD()F1802f25ffD",
    R"F1802f25ffT()F1802f25ffT",
    R"F1802f25ffF(11: return;)F1802f25ffF",
    R"F1802f25ffU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f25ffU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f25ff() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f25ff", "FUN_1802f25ff");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 220ccae35e92d5dfdc8202a5f1d9fe82cd9fa6a4ef9d85a24682cf9cf2ad6f5f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f25ff(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f25ff;
}

// 0x1802f262b FUN_1802f262b
// source: re/dump/decompile/0x1802f262b_FUN_1802f262b.c
// size: 43 bytes; thunk: false
// body sha256: 498d1c1bb1677afa57f7c1b5cf80d43fc82f62ff5bd62013abfab9540f694033
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f262b{
    "0x1802f262b",
    "FUN_1802f262b",
    R"F1802f262bS(undefined FUN_1802f262b())F1802f262bS",
    R"B1802f262b(// 0x1802f262b  FUN_1802f262b
// size=43 thunk=false
// signature: undefined FUN_1802f262b()
// status: ok


void FUN_1802f262b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;
    FUN_18021b3f0(param_2 + 0x78);
  }
  return;
}


)B1802f262b",
    "498d1c1bb1677afa57f7c1b5cf80d43fc82f62ff5bd62013abfab9540f694033",
    R"F1802f262bC(FUN_18021b3f0)F1802f262bC",
    R"F1802f262bD()F1802f262bD",
    R"F1802f262bT()F1802f262bT",
    R"F1802f262bF(10: if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
14: return;)F1802f262bF",
    R"F1802f262bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f262bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f262b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f262b", "FUN_1802f262b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b3f0", reinterpret_cast<const void*>(&image::FUN_18021b3f0));
    // body sha256: 498d1c1bb1677afa57f7c1b5cf80d43fc82f62ff5bd62013abfab9540f694033
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f262b(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;");
                trace.statement("FUN_18021b3f0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f262b;
}

// 0x1802f2656 FUN_1802f2656
// source: re/dump/decompile/0x1802f2656_FUN_1802f2656.c
// size: 32 bytes; thunk: false
// body sha256: d69ff77abffbb1be3091baadf14fe9b3811aafc1ecb159d05a539861eebaf6f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2656{
    "0x1802f2656",
    "FUN_1802f2656",
    R"F1802f2656S(undefined FUN_1802f2656())F1802f2656S",
    R"B1802f2656(// 0x1802f2656  FUN_1802f2656
// size=32 thunk=false
// signature: undefined FUN_1802f2656()
// status: ok


void FUN_1802f2656(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2656",
    "d69ff77abffbb1be3091baadf14fe9b3811aafc1ecb159d05a539861eebaf6f7",
    R"F1802f2656C()F1802f2656C",
    R"F1802f2656D()F1802f2656D",
    R"F1802f2656T()F1802f2656T",
    R"F1802f2656F(11: return;)F1802f2656F",
    R"F1802f2656U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2656U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2656() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2656", "FUN_1802f2656");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d69ff77abffbb1be3091baadf14fe9b3811aafc1ecb159d05a539861eebaf6f7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2656(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2656;
}

// 0x1802f2682 FUN_1802f2682
// source: re/dump/decompile/0x1802f2682_FUN_1802f2682.c
// size: 43 bytes; thunk: false
// body sha256: 0dddc8af071125957e768627df1c6297de36a906bfb14100d414cff874b034ff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2682{
    "0x1802f2682",
    "FUN_1802f2682",
    R"F1802f2682S(undefined FUN_1802f2682())F1802f2682S",
    R"B1802f2682(// 0x1802f2682  FUN_1802f2682
// size=43 thunk=false
// signature: undefined FUN_1802f2682()
// status: ok


void FUN_1802f2682(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    FUN_18021b450(param_2 + 0x78);
  }
  return;
}


)B1802f2682",
    "0dddc8af071125957e768627df1c6297de36a906bfb14100d414cff874b034ff",
    R"F1802f2682C(FUN_18021b450)F1802f2682C",
    R"F1802f2682D()F1802f2682D",
    R"F1802f2682T()F1802f2682T",
    R"F1802f2682F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
14: return;)F1802f2682F",
    R"F1802f2682U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2682U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2682() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2682", "FUN_1802f2682");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b450", reinterpret_cast<const void*>(&image::FUN_18021b450));
    // body sha256: 0dddc8af071125957e768627df1c6297de36a906bfb14100d414cff874b034ff
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2682(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;");
                trace.statement("FUN_18021b450(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2682;
}

// 0x1802f26ad FUN_1802f26ad
// source: re/dump/decompile/0x1802f26ad_FUN_1802f26ad.c
// size: 32 bytes; thunk: false
// body sha256: b5612b5d9b23ba1f097f463c464210e3ba729133cc33e6e0a58e729547a05aae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f26ad{
    "0x1802f26ad",
    "FUN_1802f26ad",
    R"F1802f26adS(undefined FUN_1802f26ad())F1802f26adS",
    R"B1802f26ad(// 0x1802f26ad  FUN_1802f26ad
// size=32 thunk=false
// signature: undefined FUN_1802f26ad()
// status: ok


void FUN_1802f26ad(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f26ad",
    "b5612b5d9b23ba1f097f463c464210e3ba729133cc33e6e0a58e729547a05aae",
    R"F1802f26adC()F1802f26adC",
    R"F1802f26adD()F1802f26adD",
    R"F1802f26adT()F1802f26adT",
    R"F1802f26adF(11: return;)F1802f26adF",
    R"F1802f26adU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f26adU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f26ad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f26ad", "FUN_1802f26ad");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b5612b5d9b23ba1f097f463c464210e3ba729133cc33e6e0a58e729547a05aae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f26ad(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f26ad;
}

// 0x1802f26d9 FUN_1802f26d9
// source: re/dump/decompile/0x1802f26d9_FUN_1802f26d9.c
// size: 43 bytes; thunk: false
// body sha256: 0703ac3342dc9cc3a9f1299a100ac690fcf61aa5b3155f6a1464eb37034c5161
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f26d9{
    "0x1802f26d9",
    "FUN_1802f26d9",
    R"F1802f26d9S(undefined FUN_1802f26d9())F1802f26d9S",
    R"B1802f26d9(// 0x1802f26d9  FUN_1802f26d9
// size=43 thunk=false
// signature: undefined FUN_1802f26d9()
// status: ok


void FUN_1802f26d9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f26d9",
    "0703ac3342dc9cc3a9f1299a100ac690fcf61aa5b3155f6a1464eb37034c5161",
    R"F1802f26d9C(FUN_18021b0b0)F1802f26d9C",
    R"F1802f26d9D()F1802f26d9D",
    R"F1802f26d9T()F1802f26d9T",
    R"F1802f26d9F(10: if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
14: return;)F1802f26d9F",
    R"F1802f26d9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f26d9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f26d9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f26d9", "FUN_1802f26d9");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 0703ac3342dc9cc3a9f1299a100ac690fcf61aa5b3155f6a1464eb37034c5161
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f26d9(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f26d9;
}

// 0x1802f2704 FUN_1802f2704
// source: re/dump/decompile/0x1802f2704_FUN_1802f2704.c
// size: 32 bytes; thunk: false
// body sha256: 158a28722e525b80ad55e96edc55231ca7dd9ea26056091f21ac1f7c4fa11f87
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2704{
    "0x1802f2704",
    "FUN_1802f2704",
    R"F1802f2704S(undefined FUN_1802f2704())F1802f2704S",
    R"B1802f2704(// 0x1802f2704  FUN_1802f2704
// size=32 thunk=false
// signature: undefined FUN_1802f2704()
// status: ok


void FUN_1802f2704(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2704",
    "158a28722e525b80ad55e96edc55231ca7dd9ea26056091f21ac1f7c4fa11f87",
    R"F1802f2704C()F1802f2704C",
    R"F1802f2704D()F1802f2704D",
    R"F1802f2704T()F1802f2704T",
    R"F1802f2704F(11: return;)F1802f2704F",
    R"F1802f2704U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2704U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2704() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2704", "FUN_1802f2704");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 158a28722e525b80ad55e96edc55231ca7dd9ea26056091f21ac1f7c4fa11f87
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2704(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2704;
}

// 0x1802f2730 FUN_1802f2730
// source: re/dump/decompile/0x1802f2730_FUN_1802f2730.c
// size: 43 bytes; thunk: false
// body sha256: dc59759a9ff0bd99af409c7e045ca744b0bc99bf80644c43b20aabb841aafb6b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2730{
    "0x1802f2730",
    "FUN_1802f2730",
    R"F1802f2730S(undefined FUN_1802f2730())F1802f2730S",
    R"B1802f2730(// 0x1802f2730  FUN_1802f2730
// size=43 thunk=false
// signature: undefined FUN_1802f2730()
// status: ok


void FUN_1802f2730(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;
    FUN_18021b230(param_2 + 0x78);
  }
  return;
}


)B1802f2730",
    "dc59759a9ff0bd99af409c7e045ca744b0bc99bf80644c43b20aabb841aafb6b",
    R"F1802f2730C(FUN_18021b230)F1802f2730C",
    R"F1802f2730D()F1802f2730D",
    R"F1802f2730T()F1802f2730T",
    R"F1802f2730F(10: if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
14: return;)F1802f2730F",
    R"F1802f2730U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2730U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2730() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2730", "FUN_1802f2730");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b230", reinterpret_cast<const void*>(&image::FUN_18021b230));
    // body sha256: dc59759a9ff0bd99af409c7e045ca744b0bc99bf80644c43b20aabb841aafb6b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2730(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;");
                trace.statement("FUN_18021b230(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2730;
}

// 0x1802f275b FUN_1802f275b
// source: re/dump/decompile/0x1802f275b_FUN_1802f275b.c
// size: 32 bytes; thunk: false
// body sha256: 958bfd7280066b765a9618184cd6beb7689a1f1961e7a1078583eb4096da4d8d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f275b{
    "0x1802f275b",
    "FUN_1802f275b",
    R"F1802f275bS(undefined FUN_1802f275b())F1802f275bS",
    R"B1802f275b(// 0x1802f275b  FUN_1802f275b
// size=32 thunk=false
// signature: undefined FUN_1802f275b()
// status: ok


void FUN_1802f275b(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f275b",
    "958bfd7280066b765a9618184cd6beb7689a1f1961e7a1078583eb4096da4d8d",
    R"F1802f275bC()F1802f275bC",
    R"F1802f275bD()F1802f275bD",
    R"F1802f275bT()F1802f275bT",
    R"F1802f275bF(11: return;)F1802f275bF",
    R"F1802f275bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f275bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f275b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f275b", "FUN_1802f275b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 958bfd7280066b765a9618184cd6beb7689a1f1961e7a1078583eb4096da4d8d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f275b(undefined8 param_1,longlong param_2)");
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f275b;
}

// 0x1802f2787 FUN_1802f2787
// source: re/dump/decompile/0x1802f2787_FUN_1802f2787.c
// size: 43 bytes; thunk: false
// body sha256: 736a5e1cc9258d354ae16b5c088446a974f0b2ce3cb68f5371f5a6392af4dc43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2787{
    "0x1802f2787",
    "FUN_1802f2787",
    R"F1802f2787S(undefined FUN_1802f2787())F1802f2787S",
    R"B1802f2787(// 0x1802f2787  FUN_1802f2787
// size=43 thunk=false
// signature: undefined FUN_1802f2787()
// status: ok


void FUN_1802f2787(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffbfffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2787",
    "736a5e1cc9258d354ae16b5c088446a974f0b2ce3cb68f5371f5a6392af4dc43",
    R"F1802f2787C(FUN_18021b0b0)F1802f2787C",
    R"F1802f2787D()F1802f2787D",
    R"F1802f2787T()F1802f2787T",
    R"F1802f2787F(10: if ((*(uint *)(param_2 + 0x20) & 0x400000) != 0) {
14: return;)F1802f2787F",
    R"F1802f2787U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2787U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2787() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2787", "FUN_1802f2787");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 736a5e1cc9258d354ae16b5c088446a974f0b2ce3cb68f5371f5a6392af4dc43
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f2787(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x400000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffbfffff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2787;
}

}  // namespace sf::reconstructed
