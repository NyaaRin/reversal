// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802eb1cd FUN_1802eb1cd
// source: re/dump/decompile/0x1802eb1cd_FUN_1802eb1cd.c
// size: 41 bytes; thunk: false
// body sha256: d6c3ad4639d90fcf37fa26975b0ff19d7670765e559bc3b14c3581da883a1a19
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb1cd{
    "0x1802eb1cd",
    "FUN_1802eb1cd",
    R"F1802eb1cdS(undefined FUN_1802eb1cd())F1802eb1cdS",
    R"B1802eb1cd(// 0x1802eb1cd  FUN_1802eb1cd
// size=41 thunk=false
// signature: undefined FUN_1802eb1cd()
// status: ok


void FUN_1802eb1cd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(param_2 + 0x210);
  }
  return;
}


)B1802eb1cd",
    "d6c3ad4639d90fcf37fa26975b0ff19d7670765e559bc3b14c3581da883a1a19",
    R"F1802eb1cdC()F1802eb1cdC",
    R"F1802eb1cdD()F1802eb1cdD",
    R"F1802eb1cdT()F1802eb1cdT",
    R"F1802eb1cdF(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802eb1cdF",
    R"F1802eb1cdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb1cdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb1cd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb1cd", "FUN_1802eb1cd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x210);
    // body sha256: d6c3ad4639d90fcf37fa26975b0ff19d7670765e559bc3b14c3581da883a1a19
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb1cd(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x210);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb1cd;
}

// 0x1802eb1f6 FUN_1802eb1f6
// source: re/dump/decompile/0x1802eb1f6_FUN_1802eb1f6.c
// size: 46 bytes; thunk: false
// body sha256: 51bd5c436f5535871b7823bf2150f0b9aaddf83010c84f988c71f5da75024d61
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb1f6{
    "0x1802eb1f6",
    "FUN_1802eb1f6",
    R"F1802eb1f6S(undefined FUN_1802eb1f6())F1802eb1f6S",
    R"B1802eb1f6(// 0x1802eb1f6  FUN_1802eb1f6
// size=46 thunk=false
// signature: undefined FUN_1802eb1f6()
// status: ok


void FUN_1802eb1f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(param_2 + 0x1f0);
  }
  return;
}


)B1802eb1f6",
    "51bd5c436f5535871b7823bf2150f0b9aaddf83010c84f988c71f5da75024d61",
    R"F1802eb1f6C()F1802eb1f6C",
    R"F1802eb1f6D()F1802eb1f6D",
    R"F1802eb1f6T()F1802eb1f6T",
    R"F1802eb1f6F(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802eb1f6F",
    R"F1802eb1f6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb1f6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb1f6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb1f6", "FUN_1802eb1f6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x1f0);
    // body sha256: 51bd5c436f5535871b7823bf2150f0b9aaddf83010c84f988c71f5da75024d61
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb1f6(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x1f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb1f6;
}

// 0x1802eb230 FUN_1802eb230
// source: re/dump/decompile/0x1802eb230_FUN_1802eb230.c
// size: 46 bytes; thunk: false
// body sha256: 2d5022c3492cccf69b133cd1e74dd5e8c2763d2a8a5f619368ad9ad7211d490c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb230{
    "0x1802eb230",
    "FUN_1802eb230",
    R"F1802eb230S(undefined FUN_1802eb230())F1802eb230S",
    R"B1802eb230(// 0x1802eb230  FUN_1802eb230
// size=46 thunk=false
// signature: undefined FUN_1802eb230()
// status: ok


void FUN_1802eb230(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    FUN_1800668e0(param_2 + 0xc0);
  }
  return;
}


)B1802eb230",
    "2d5022c3492cccf69b133cd1e74dd5e8c2763d2a8a5f619368ad9ad7211d490c",
    R"F1802eb230C(FUN_1800668e0)F1802eb230C",
    R"F1802eb230D()F1802eb230D",
    R"F1802eb230T()F1802eb230T",
    R"F1802eb230F(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802eb230F",
    R"F1802eb230U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb230U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb230() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb230", "FUN_1802eb230");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0xc0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 2d5022c3492cccf69b133cd1e74dd5e8c2763d2a8a5f619368ad9ad7211d490c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb230(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("FUN_1800668e0(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb230;
}

// 0x1802eb25e FUN_1802eb25e
// source: re/dump/decompile/0x1802eb25e_FUN_1802eb25e.c
// size: 46 bytes; thunk: false
// body sha256: cda89553c518df97c23f8bccecab657b756626b269cd5118c7a927f8fee8b699
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb25e{
    "0x1802eb25e",
    "FUN_1802eb25e",
    R"F1802eb25eS(undefined FUN_1802eb25e())F1802eb25eS",
    R"B1802eb25e(// 0x1802eb25e  FUN_1802eb25e
// size=46 thunk=false
// signature: undefined FUN_1802eb25e()
// status: ok


void FUN_1802eb25e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    FUN_1800668e0(param_2 + 0x1d0);
  }
  return;
}


)B1802eb25e",
    "cda89553c518df97c23f8bccecab657b756626b269cd5118c7a927f8fee8b699",
    R"F1802eb25eC(FUN_1800668e0)F1802eb25eC",
    R"F1802eb25eD()F1802eb25eD",
    R"F1802eb25eT()F1802eb25eT",
    R"F1802eb25eF(10: if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
14: return;)F1802eb25eF",
    R"F1802eb25eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb25eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb25e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb25e", "FUN_1802eb25e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x1d0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: cda89553c518df97c23f8bccecab657b756626b269cd5118c7a927f8fee8b699
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb25e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;");
                trace.statement("FUN_1800668e0(param_2 + 0x1d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb25e;
}

// 0x1802eb298 FUN_1802eb298
// source: re/dump/decompile/0x1802eb298_FUN_1802eb298.c
// size: 46 bytes; thunk: false
// body sha256: 67f07f4f532ec9112398080e332bd8f3555259e01be87a371965125ee7a05b26
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb298{
    "0x1802eb298",
    "FUN_1802eb298",
    R"F1802eb298S(undefined FUN_1802eb298())F1802eb298S",
    R"B1802eb298(// 0x1802eb298  FUN_1802eb298
// size=46 thunk=false
// signature: undefined FUN_1802eb298()
// status: ok


void FUN_1802eb298(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    FUN_1800668e0(param_2 + 0x100);
  }
  return;
}


)B1802eb298",
    "67f07f4f532ec9112398080e332bd8f3555259e01be87a371965125ee7a05b26",
    R"F1802eb298C(FUN_1800668e0)F1802eb298C",
    R"F1802eb298D()F1802eb298D",
    R"F1802eb298T()F1802eb298T",
    R"F1802eb298F(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802eb298F",
    R"F1802eb298U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb298U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb298() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb298", "FUN_1802eb298");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x100);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 67f07f4f532ec9112398080e332bd8f3555259e01be87a371965125ee7a05b26
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb298(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("FUN_1800668e0(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb298;
}

// 0x1802eb3c8 FUN_1802eb3c8
// source: re/dump/decompile/0x1802eb3c8_FUN_1802eb3c8.c
// size: 22 bytes; thunk: false
// body sha256: 56d94d76fcb34a9a80136577d9b4f7ae2db0d53c36c5d8340cefee90cc0ffcfe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb3c8{
    "0x1802eb3c8",
    "FUN_1802eb3c8",
    R"F1802eb3c8S(undefined FUN_1802eb3c8())F1802eb3c8S",
    R"B1802eb3c8(// 0x1802eb3c8  FUN_1802eb3c8
// size=22 thunk=false
// signature: undefined FUN_1802eb3c8()
// status: ok


void FUN_1802eb3c8(void)

{
  DAT_18042f174 = DAT_18042f174 & 0xfffffffe;
  return;
}


)B1802eb3c8",
    "56d94d76fcb34a9a80136577d9b4f7ae2db0d53c36c5d8340cefee90cc0ffcfe",
    R"F1802eb3c8C()F1802eb3c8C",
    R"F1802eb3c8D(DAT_18042f174)F1802eb3c8D",
    R"F1802eb3c8T()F1802eb3c8T",
    R"F1802eb3c8F(11: return;)F1802eb3c8F",
    R"F1802eb3c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f174.)F1802eb3c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb3c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb3c8", "FUN_1802eb3c8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f174.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f174", static_cast<const void*>(&image::DAT_18042f174));
    // body sha256: 56d94d76fcb34a9a80136577d9b4f7ae2db0d53c36c5d8340cefee90cc0ffcfe
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb3c8(void)");
        {
            trace.statement("DAT_18042f174 = DAT_18042f174 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802eb3c8;
}

// 0x1802eb3de FUN_1802eb3de
// source: re/dump/decompile/0x1802eb3de_FUN_1802eb3de.c
// size: 46 bytes; thunk: false
// body sha256: 5c364e3493f7bd471a30db0fff689adc34310dc2e726276006e1bb44db1dace2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb3de{
    "0x1802eb3de",
    "FUN_1802eb3de",
    R"F1802eb3deS(undefined FUN_1802eb3de())F1802eb3deS",
    R"B1802eb3de(// 0x1802eb3de  FUN_1802eb3de
// size=46 thunk=false
// signature: undefined FUN_1802eb3de()
// status: ok


void FUN_1802eb3de(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));
  }
  return;
}


)B1802eb3de",
    "5c364e3493f7bd471a30db0fff689adc34310dc2e726276006e1bb44db1dace2",
    R"F1802eb3deC()F1802eb3deC",
    R"F1802eb3deD()F1802eb3deD",
    R"F1802eb3deT()F1802eb3deT",
    R"F1802eb3deF(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802eb3deF",
    R"F1802eb3deU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb3deU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb3de() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb3de", "FUN_1802eb3de");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x1a8));
    // body sha256: 5c364e3493f7bd471a30db0fff689adc34310dc2e726276006e1bb44db1dace2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb3de(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb3de;
}

// 0x1802eb40c FUN_1802eb40c
// source: re/dump/decompile/0x1802eb40c_FUN_1802eb40c.c
// size: 46 bytes; thunk: false
// body sha256: b476c4a9b476e97eca01c7a523a653338ecd2dca5e9fa417f2eb197fd7bfcab0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb40c{
    "0x1802eb40c",
    "FUN_1802eb40c",
    R"F1802eb40cS(undefined FUN_1802eb40c())F1802eb40cS",
    R"B1802eb40c(// 0x1802eb40c  FUN_1802eb40c
// size=46 thunk=false
// signature: undefined FUN_1802eb40c()
// status: ok


void FUN_1802eb40c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));
  }
  return;
}


)B1802eb40c",
    "b476c4a9b476e97eca01c7a523a653338ecd2dca5e9fa417f2eb197fd7bfcab0",
    R"F1802eb40cC()F1802eb40cC",
    R"F1802eb40cD()F1802eb40cD",
    R"F1802eb40cT()F1802eb40cT",
    R"F1802eb40cF(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802eb40cF",
    R"F1802eb40cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb40cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb40c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb40c", "FUN_1802eb40c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x1a8));
    // body sha256: b476c4a9b476e97eca01c7a523a653338ecd2dca5e9fa417f2eb197fd7bfcab0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb40c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb40c;
}

// 0x1802eb446 FUN_1802eb446
// source: re/dump/decompile/0x1802eb446_FUN_1802eb446.c
// size: 41 bytes; thunk: false
// body sha256: 04c49bb1e7bebab488e5553c1eecb7d1e4f55f8aa07e8fff5295b755fe28acf8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb446{
    "0x1802eb446",
    "FUN_1802eb446",
    R"F1802eb446S(undefined FUN_1802eb446())F1802eb446S",
    R"B1802eb446(// 0x1802eb446  FUN_1802eb446
// size=41 thunk=false
// signature: undefined FUN_1802eb446()
// status: ok


void FUN_1802eb446(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1b0));
  }
  return;
}


)B1802eb446",
    "04c49bb1e7bebab488e5553c1eecb7d1e4f55f8aa07e8fff5295b755fe28acf8",
    R"F1802eb446C()F1802eb446C",
    R"F1802eb446D()F1802eb446D",
    R"F1802eb446T()F1802eb446T",
    R"F1802eb446F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802eb446F",
    R"F1802eb446U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb446U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb446() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb446", "FUN_1802eb446");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x1b0));
    // body sha256: 04c49bb1e7bebab488e5553c1eecb7d1e4f55f8aa07e8fff5295b755fe28acf8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb446(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1b0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb446;
}

// 0x1802eb46f FUN_1802eb46f
// source: re/dump/decompile/0x1802eb46f_FUN_1802eb46f.c
// size: 41 bytes; thunk: false
// body sha256: d3cada6f10589c9b18721488738d37217347bbf7fd225def2d3e7e503211a45d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb46f{
    "0x1802eb46f",
    "FUN_1802eb46f",
    R"F1802eb46fS(undefined FUN_1802eb46f())F1802eb46fS",
    R"B1802eb46f(// 0x1802eb46f  FUN_1802eb46f
// size=41 thunk=false
// signature: undefined FUN_1802eb46f()
// status: ok


void FUN_1802eb46f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1b0));
  }
  return;
}


)B1802eb46f",
    "d3cada6f10589c9b18721488738d37217347bbf7fd225def2d3e7e503211a45d",
    R"F1802eb46fC()F1802eb46fC",
    R"F1802eb46fD()F1802eb46fD",
    R"F1802eb46fT()F1802eb46fT",
    R"F1802eb46fF(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802eb46fF",
    R"F1802eb46fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb46fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb46f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb46f", "FUN_1802eb46f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x1b0));
    // body sha256: d3cada6f10589c9b18721488738d37217347bbf7fd225def2d3e7e503211a45d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb46f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1b0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb46f;
}

// 0x1802eb4ec FUN_1802eb4ec
// source: re/dump/decompile/0x1802eb4ec_FUN_1802eb4ec.c
// size: 41 bytes; thunk: false
// body sha256: a34e3741ea676e0f0ebcfc9bcb25a0190a8cac062e9c8113a08149766e49752c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb4ec{
    "0x1802eb4ec",
    "FUN_1802eb4ec",
    R"F1802eb4ecS(undefined FUN_1802eb4ec())F1802eb4ecS",
    R"B1802eb4ec(// 0x1802eb4ec  FUN_1802eb4ec
// size=41 thunk=false
// signature: undefined FUN_1802eb4ec()
// status: ok


void FUN_1802eb4ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(param_2 + 0x108);
  }
  return;
}


)B1802eb4ec",
    "a34e3741ea676e0f0ebcfc9bcb25a0190a8cac062e9c8113a08149766e49752c",
    R"F1802eb4ecC()F1802eb4ecC",
    R"F1802eb4ecD()F1802eb4ecD",
    R"F1802eb4ecT()F1802eb4ecT",
    R"F1802eb4ecF(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802eb4ecF",
    R"F1802eb4ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb4ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb4ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb4ec", "FUN_1802eb4ec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x108);
    // body sha256: a34e3741ea676e0f0ebcfc9bcb25a0190a8cac062e9c8113a08149766e49752c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb4ec(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb4ec;
}

// 0x1802eb515 FUN_1802eb515
// source: re/dump/decompile/0x1802eb515_FUN_1802eb515.c
// size: 41 bytes; thunk: false
// body sha256: 3a38079f6ccd85241142bebde5879261b8f0db5043d02af65e7bffb923b19bca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb515{
    "0x1802eb515",
    "FUN_1802eb515",
    R"F1802eb515S(undefined FUN_1802eb515())F1802eb515S",
    R"B1802eb515(// 0x1802eb515  FUN_1802eb515
// size=41 thunk=false
// signature: undefined FUN_1802eb515()
// status: ok


void FUN_1802eb515(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 200);
  }
  return;
}


)B1802eb515",
    "3a38079f6ccd85241142bebde5879261b8f0db5043d02af65e7bffb923b19bca",
    R"F1802eb515C()F1802eb515C",
    R"F1802eb515D()F1802eb515D",
    R"F1802eb515T()F1802eb515T",
    R"F1802eb515F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802eb515F",
    R"F1802eb515U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb515U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb515() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb515", "FUN_1802eb515");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 200);
    // body sha256: 3a38079f6ccd85241142bebde5879261b8f0db5043d02af65e7bffb923b19bca
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb515(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb515;
}

// 0x1802eb556 FUN_1802eb556
// source: re/dump/decompile/0x1802eb556_FUN_1802eb556.c
// size: 41 bytes; thunk: false
// body sha256: fe4874352af31f78bef24e90eee6d4fc9e622b345224b350c1a58504d20a3b6a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb556{
    "0x1802eb556",
    "FUN_1802eb556",
    R"F1802eb556S(undefined FUN_1802eb556())F1802eb556S",
    R"B1802eb556(// 0x1802eb556  FUN_1802eb556
// size=41 thunk=false
// signature: undefined FUN_1802eb556()
// status: ok


void FUN_1802eb556(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));
  }
  return;
}


)B1802eb556",
    "fe4874352af31f78bef24e90eee6d4fc9e622b345224b350c1a58504d20a3b6a",
    R"F1802eb556C()F1802eb556C",
    R"F1802eb556D()F1802eb556D",
    R"F1802eb556T()F1802eb556T",
    R"F1802eb556F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802eb556F",
    R"F1802eb556U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb556U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb556() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb556", "FUN_1802eb556");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x1a8));
    // body sha256: fe4874352af31f78bef24e90eee6d4fc9e622b345224b350c1a58504d20a3b6a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb556(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb556;
}

// 0x1802eb57f FUN_1802eb57f
// source: re/dump/decompile/0x1802eb57f_FUN_1802eb57f.c
// size: 41 bytes; thunk: false
// body sha256: c18512b4b8fca3c9ed28e710be62a3fd0ab63307de518ca2766d13c5aa76dc8b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb57f{
    "0x1802eb57f",
    "FUN_1802eb57f",
    R"F1802eb57fS(undefined FUN_1802eb57f())F1802eb57fS",
    R"B1802eb57f(// 0x1802eb57f  FUN_1802eb57f
// size=41 thunk=false
// signature: undefined FUN_1802eb57f()
// status: ok


void FUN_1802eb57f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));
  }
  return;
}


)B1802eb57f",
    "c18512b4b8fca3c9ed28e710be62a3fd0ab63307de518ca2766d13c5aa76dc8b",
    R"F1802eb57fC()F1802eb57fC",
    R"F1802eb57fD()F1802eb57fD",
    R"F1802eb57fT()F1802eb57fT",
    R"F1802eb57fF(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802eb57fF",
    R"F1802eb57fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb57fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb57f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb57f", "FUN_1802eb57f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x1a8));
    // body sha256: c18512b4b8fca3c9ed28e710be62a3fd0ab63307de518ca2766d13c5aa76dc8b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb57f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb57f;
}

// 0x1802eb614 FUN_1802eb614
// source: re/dump/decompile/0x1802eb614_FUN_1802eb614.c
// size: 38 bytes; thunk: false
// body sha256: a8e15ca9ea25f32a411bd302d4c5ec642ae0660539b75844762fb724283a7919
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb614{
    "0x1802eb614",
    "FUN_1802eb614",
    R"F1802eb614S(undefined FUN_1802eb614())F1802eb614S",
    R"B1802eb614(// 0x1802eb614  FUN_1802eb614
// size=38 thunk=false
// signature: undefined FUN_1802eb614()
// status: ok


void FUN_1802eb614(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x68);
  }
  return;
}


)B1802eb614",
    "a8e15ca9ea25f32a411bd302d4c5ec642ae0660539b75844762fb724283a7919",
    R"F1802eb614C()F1802eb614C",
    R"F1802eb614D()F1802eb614D",
    R"F1802eb614T()F1802eb614T",
    R"F1802eb614F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802eb614F",
    R"F1802eb614U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb614U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb614() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb614", "FUN_1802eb614");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x68);
    // body sha256: a8e15ca9ea25f32a411bd302d4c5ec642ae0660539b75844762fb724283a7919
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb614(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb614;
}

// 0x1802eb6c0 FUN_1802eb6c0
// source: re/dump/decompile/0x1802eb6c0_FUN_1802eb6c0.c
// size: 22 bytes; thunk: false
// body sha256: fb03df115b5e0409f9f380822865040b588bcaa9afea810e2b4a3a9d0227cc24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb6c0{
    "0x1802eb6c0",
    "FUN_1802eb6c0",
    R"F1802eb6c0S(undefined FUN_1802eb6c0())F1802eb6c0S",
    R"B1802eb6c0(// 0x1802eb6c0  FUN_1802eb6c0
// size=22 thunk=false
// signature: undefined FUN_1802eb6c0()
// status: ok


void FUN_1802eb6c0(void)

{
  DAT_18042f180 = DAT_18042f180 & 0xfffffffe;
  return;
}


)B1802eb6c0",
    "fb03df115b5e0409f9f380822865040b588bcaa9afea810e2b4a3a9d0227cc24",
    R"F1802eb6c0C()F1802eb6c0C",
    R"F1802eb6c0D(DAT_18042f180)F1802eb6c0D",
    R"F1802eb6c0T()F1802eb6c0T",
    R"F1802eb6c0F(11: return;)F1802eb6c0F",
    R"F1802eb6c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f180.)F1802eb6c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb6c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb6c0", "FUN_1802eb6c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f180.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f180", static_cast<const void*>(&image::DAT_18042f180));
    // body sha256: fb03df115b5e0409f9f380822865040b588bcaa9afea810e2b4a3a9d0227cc24
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb6c0(void)");
        {
            trace.statement("DAT_18042f180 = DAT_18042f180 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802eb6c0;
}

// 0x1802eb760 FUN_1802eb760
// source: re/dump/decompile/0x1802eb760_FUN_1802eb760.c
// size: 38 bytes; thunk: false
// body sha256: d1f45caef95f673879ef66572588ec6736edeeecea33806d6f356e53d839ab10
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb760{
    "0x1802eb760",
    "FUN_1802eb760",
    R"F1802eb760S(undefined FUN_1802eb760())F1802eb760S",
    R"B1802eb760(// 0x1802eb760  FUN_1802eb760
// size=38 thunk=false
// signature: undefined FUN_1802eb760()
// status: ok


void FUN_1802eb760(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802eb760",
    "d1f45caef95f673879ef66572588ec6736edeeecea33806d6f356e53d839ab10",
    R"F1802eb760C()F1802eb760C",
    R"F1802eb760D()F1802eb760D",
    R"F1802eb760T()F1802eb760T",
    R"F1802eb760F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802eb760F",
    R"F1802eb760U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb760U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb760() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb760", "FUN_1802eb760");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x48));
    // body sha256: d1f45caef95f673879ef66572588ec6736edeeecea33806d6f356e53d839ab10
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb760(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb760;
}

// 0x1802eb7a0 FUN_1802eb7a0
// source: re/dump/decompile/0x1802eb7a0_FUN_1802eb7a0.c
// size: 38 bytes; thunk: false
// body sha256: 7cf69011dc3e9c66121b71eaa3da0365d03e4e0872292f52f7e216cc570d9b65
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb7a0{
    "0x1802eb7a0",
    "FUN_1802eb7a0",
    R"F1802eb7a0S(undefined FUN_1802eb7a0())F1802eb7a0S",
    R"B1802eb7a0(// 0x1802eb7a0  FUN_1802eb7a0
// size=38 thunk=false
// signature: undefined FUN_1802eb7a0()
// status: ok


void FUN_1802eb7a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802eb7a0",
    "7cf69011dc3e9c66121b71eaa3da0365d03e4e0872292f52f7e216cc570d9b65",
    R"F1802eb7a0C()F1802eb7a0C",
    R"F1802eb7a0D()F1802eb7a0D",
    R"F1802eb7a0T()F1802eb7a0T",
    R"F1802eb7a0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802eb7a0F",
    R"F1802eb7a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb7a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb7a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb7a0", "FUN_1802eb7a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 7cf69011dc3e9c66121b71eaa3da0365d03e4e0872292f52f7e216cc570d9b65
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb7a0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb7a0;
}

// 0x1802eb7d0 FUN_1802eb7d0
// source: re/dump/decompile/0x1802eb7d0_FUN_1802eb7d0.c
// size: 41 bytes; thunk: false
// body sha256: a5b99d35ae4bab421fa008f9a44830961ea484cee181b8426cba9fb36121ea03
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb7d0{
    "0x1802eb7d0",
    "FUN_1802eb7d0",
    R"F1802eb7d0S(undefined FUN_1802eb7d0())F1802eb7d0S",
    R"B1802eb7d0(// 0x1802eb7d0  FUN_1802eb7d0
// size=41 thunk=false
// signature: undefined FUN_1802eb7d0()
// status: ok


void FUN_1802eb7d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0xe8));
  }
  return;
}


)B1802eb7d0",
    "a5b99d35ae4bab421fa008f9a44830961ea484cee181b8426cba9fb36121ea03",
    R"F1802eb7d0C()F1802eb7d0C",
    R"F1802eb7d0D()F1802eb7d0D",
    R"F1802eb7d0T()F1802eb7d0T",
    R"F1802eb7d0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802eb7d0F",
    R"F1802eb7d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb7d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb7d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb7d0", "FUN_1802eb7d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18020d5c0", *(undefined8 *)(param_2 + 0xe8));
    // body sha256: a5b99d35ae4bab421fa008f9a44830961ea484cee181b8426cba9fb36121ea03
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb7d0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0xe8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb7d0;
}

// 0x1802eb805 FUN_1802eb805
// source: re/dump/decompile/0x1802eb805_FUN_1802eb805.c
// size: 38 bytes; thunk: false
// body sha256: 17bb12e950287c85b1767ccd389de171062f40b1481c96b6d01d246e9b6a2607
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb805{
    "0x1802eb805",
    "FUN_1802eb805",
    R"F1802eb805S(undefined FUN_1802eb805())F1802eb805S",
    R"B1802eb805(// 0x1802eb805  FUN_1802eb805
// size=38 thunk=false
// signature: undefined FUN_1802eb805()
// status: ok


void FUN_1802eb805(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802eb805",
    "17bb12e950287c85b1767ccd389de171062f40b1481c96b6d01d246e9b6a2607",
    R"F1802eb805C()F1802eb805C",
    R"F1802eb805D()F1802eb805D",
    R"F1802eb805T()F1802eb805T",
    R"F1802eb805F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802eb805F",
    R"F1802eb805U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb805U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb805() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb805", "FUN_1802eb805");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 17bb12e950287c85b1767ccd389de171062f40b1481c96b6d01d246e9b6a2607
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb805(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb805;
}

// 0x1802eb82b FUN_1802eb82b
// source: re/dump/decompile/0x1802eb82b_FUN_1802eb82b.c
// size: 38 bytes; thunk: false
// body sha256: 0d5f093500c6c55e251bfd5f8f70b95b0510adfd4430d2ec11dd01d7fbb9ccdc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb82b{
    "0x1802eb82b",
    "FUN_1802eb82b",
    R"F1802eb82bS(undefined FUN_1802eb82b())F1802eb82bS",
    R"B1802eb82b(// 0x1802eb82b  FUN_1802eb82b
// size=38 thunk=false
// signature: undefined FUN_1802eb82b()
// status: ok


void FUN_1802eb82b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802eb82b",
    "0d5f093500c6c55e251bfd5f8f70b95b0510adfd4430d2ec11dd01d7fbb9ccdc",
    R"F1802eb82bC()F1802eb82bC",
    R"F1802eb82bD()F1802eb82bD",
    R"F1802eb82bT()F1802eb82bT",
    R"F1802eb82bF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802eb82bF",
    R"F1802eb82bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb82bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb82b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb82b", "FUN_1802eb82b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 0d5f093500c6c55e251bfd5f8f70b95b0510adfd4430d2ec11dd01d7fbb9ccdc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb82b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb82b;
}

// 0x1802eb851 FUN_1802eb851
// source: re/dump/decompile/0x1802eb851_FUN_1802eb851.c
// size: 38 bytes; thunk: false
// body sha256: 567c4cca540c929b024cae6a8dfb3565a344955fcd8cd91fd4c0b66d90ddf0db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb851{
    "0x1802eb851",
    "FUN_1802eb851",
    R"F1802eb851S(undefined FUN_1802eb851())F1802eb851S",
    R"B1802eb851(// 0x1802eb851  FUN_1802eb851
// size=38 thunk=false
// signature: undefined FUN_1802eb851()
// status: ok


void FUN_1802eb851(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802eb851",
    "567c4cca540c929b024cae6a8dfb3565a344955fcd8cd91fd4c0b66d90ddf0db",
    R"F1802eb851C()F1802eb851C",
    R"F1802eb851D()F1802eb851D",
    R"F1802eb851T()F1802eb851T",
    R"F1802eb851F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802eb851F",
    R"F1802eb851U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb851U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb851() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb851", "FUN_1802eb851");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 567c4cca540c929b024cae6a8dfb3565a344955fcd8cd91fd4c0b66d90ddf0db
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb851(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb851;
}

// 0x1802eb883 FUN_1802eb883
// source: re/dump/decompile/0x1802eb883_FUN_1802eb883.c
// size: 38 bytes; thunk: false
// body sha256: 9fff99600dd6e17d8bca93836689f05defba25e2ce37b6ad75d58d535f71d3d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb883{
    "0x1802eb883",
    "FUN_1802eb883",
    R"F1802eb883S(undefined FUN_1802eb883())F1802eb883S",
    R"B1802eb883(// 0x1802eb883  FUN_1802eb883
// size=38 thunk=false
// signature: undefined FUN_1802eb883()
// status: ok


void FUN_1802eb883(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802eb883",
    "9fff99600dd6e17d8bca93836689f05defba25e2ce37b6ad75d58d535f71d3d0",
    R"F1802eb883C()F1802eb883C",
    R"F1802eb883D()F1802eb883D",
    R"F1802eb883T()F1802eb883T",
    R"F1802eb883F(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802eb883F",
    R"F1802eb883U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb883U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb883() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb883", "FUN_1802eb883");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 9fff99600dd6e17d8bca93836689f05defba25e2ce37b6ad75d58d535f71d3d0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb883(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb883;
}

// 0x1802eb8b5 FUN_1802eb8b5
// source: re/dump/decompile/0x1802eb8b5_FUN_1802eb8b5.c
// size: 41 bytes; thunk: false
// body sha256: d2a4f803db263705358b1ce895c4495513ca81400d07ec409d1cc4553cdc0fe9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb8b5{
    "0x1802eb8b5",
    "FUN_1802eb8b5",
    R"F1802eb8b5S(undefined FUN_1802eb8b5())F1802eb8b5S",
    R"B1802eb8b5(// 0x1802eb8b5  FUN_1802eb8b5
// size=41 thunk=false
// signature: undefined FUN_1802eb8b5()
// status: ok


void FUN_1802eb8b5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802eb8b5",
    "d2a4f803db263705358b1ce895c4495513ca81400d07ec409d1cc4553cdc0fe9",
    R"F1802eb8b5C()F1802eb8b5C",
    R"F1802eb8b5D()F1802eb8b5D",
    R"F1802eb8b5T()F1802eb8b5T",
    R"F1802eb8b5F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802eb8b5F",
    R"F1802eb8b5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb8b5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb8b5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb8b5", "FUN_1802eb8b5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: d2a4f803db263705358b1ce895c4495513ca81400d07ec409d1cc4553cdc0fe9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb8b5(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb8b5;
}

// 0x1802eb8f8 FUN_1802eb8f8
// source: re/dump/decompile/0x1802eb8f8_FUN_1802eb8f8.c
// size: 38 bytes; thunk: false
// body sha256: 5943328f647affa595a472df9ddf0eeaea690379204b0178374aff36af5823de
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb8f8{
    "0x1802eb8f8",
    "FUN_1802eb8f8",
    R"F1802eb8f8S(undefined FUN_1802eb8f8())F1802eb8f8S",
    R"B1802eb8f8(// 0x1802eb8f8  FUN_1802eb8f8
// size=38 thunk=false
// signature: undefined FUN_1802eb8f8()
// status: ok


void FUN_1802eb8f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}


)B1802eb8f8",
    "5943328f647affa595a472df9ddf0eeaea690379204b0178374aff36af5823de",
    R"F1802eb8f8C()F1802eb8f8C",
    R"F1802eb8f8D()F1802eb8f8D",
    R"F1802eb8f8T()F1802eb8f8T",
    R"F1802eb8f8F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802eb8f8F",
    R"F1802eb8f8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb8f8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb8f8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb8f8", "FUN_1802eb8f8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x68));
    // body sha256: 5943328f647affa595a472df9ddf0eeaea690379204b0178374aff36af5823de
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb8f8(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x68));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb8f8;
}

// 0x1802eb9a4 FUN_1802eb9a4
// source: re/dump/decompile/0x1802eb9a4_FUN_1802eb9a4.c
// size: 38 bytes; thunk: false
// body sha256: 37ab7e8631ecc856beb5f7d2b77620eeeb0494202b2a0ecdad44a379914f9afe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb9a4{
    "0x1802eb9a4",
    "FUN_1802eb9a4",
    R"F1802eb9a4S(undefined FUN_1802eb9a4())F1802eb9a4S",
    R"B1802eb9a4(// 0x1802eb9a4  FUN_1802eb9a4
// size=38 thunk=false
// signature: undefined FUN_1802eb9a4()
// status: ok


void FUN_1802eb9a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802eb9a4",
    "37ab7e8631ecc856beb5f7d2b77620eeeb0494202b2a0ecdad44a379914f9afe",
    R"F1802eb9a4C()F1802eb9a4C",
    R"F1802eb9a4D()F1802eb9a4D",
    R"F1802eb9a4T()F1802eb9a4T",
    R"F1802eb9a4F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802eb9a4F",
    R"F1802eb9a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb9a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb9a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb9a4", "FUN_1802eb9a4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x38));
    // body sha256: 37ab7e8631ecc856beb5f7d2b77620eeeb0494202b2a0ecdad44a379914f9afe
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb9a4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb9a4;
}

// 0x1802eb9f0 FUN_1802eb9f0
// source: re/dump/decompile/0x1802eb9f0_FUN_1802eb9f0.c
// size: 38 bytes; thunk: false
// body sha256: 7aa1717ab220a00ca1e4571d6ba571f0a1939dac78b4880fe8a26f2fea7aab4c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb9f0{
    "0x1802eb9f0",
    "FUN_1802eb9f0",
    R"F1802eb9f0S(undefined FUN_1802eb9f0())F1802eb9f0S",
    R"B1802eb9f0(// 0x1802eb9f0  FUN_1802eb9f0
// size=38 thunk=false
// signature: undefined FUN_1802eb9f0()
// status: ok


void FUN_1802eb9f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802eb9f0",
    "7aa1717ab220a00ca1e4571d6ba571f0a1939dac78b4880fe8a26f2fea7aab4c",
    R"F1802eb9f0C()F1802eb9f0C",
    R"F1802eb9f0D()F1802eb9f0D",
    R"F1802eb9f0T()F1802eb9f0T",
    R"F1802eb9f0F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802eb9f0F",
    R"F1802eb9f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb9f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb9f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb9f0", "FUN_1802eb9f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18020d5c0", *(undefined8 *)(param_2 + 0x58));
    // body sha256: 7aa1717ab220a00ca1e4571d6ba571f0a1939dac78b4880fe8a26f2fea7aab4c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb9f0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb9f0;
}

// 0x1802eba16 FUN_1802eba16
// source: re/dump/decompile/0x1802eba16_FUN_1802eba16.c
// size: 38 bytes; thunk: false
// body sha256: 4e196f63b879076c04bda776c983acc059edf8b58311889eefaa1c3060b32476
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eba16{
    "0x1802eba16",
    "FUN_1802eba16",
    R"F1802eba16S(undefined FUN_1802eba16())F1802eba16S",
    R"B1802eba16(// 0x1802eba16  FUN_1802eba16
// size=38 thunk=false
// signature: undefined FUN_1802eba16()
// status: ok


void FUN_1802eba16(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


)B1802eba16",
    "4e196f63b879076c04bda776c983acc059edf8b58311889eefaa1c3060b32476",
    R"F1802eba16C()F1802eba16C",
    R"F1802eba16D()F1802eba16D",
    R"F1802eba16T()F1802eba16T",
    R"F1802eba16F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802eba16F",
    R"F1802eba16U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eba16U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eba16() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eba16", "FUN_1802eba16");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x60);
    // body sha256: 4e196f63b879076c04bda776c983acc059edf8b58311889eefaa1c3060b32476
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eba16(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eba16;
}

// 0x1802eba48 FUN_1802eba48
// source: re/dump/decompile/0x1802eba48_FUN_1802eba48.c
// size: 41 bytes; thunk: false
// body sha256: cf30d8e7fa723151e55092e6d02e4f34a4f9dba7cf23a14385888a2becaab00f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eba48{
    "0x1802eba48",
    "FUN_1802eba48",
    R"F1802eba48S(undefined FUN_1802eba48())F1802eba48S",
    R"B1802eba48(// 0x1802eba48  FUN_1802eba48
// size=41 thunk=false
// signature: undefined FUN_1802eba48()
// status: ok


void FUN_1802eba48(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


)B1802eba48",
    "cf30d8e7fa723151e55092e6d02e4f34a4f9dba7cf23a14385888a2becaab00f",
    R"F1802eba48C()F1802eba48C",
    R"F1802eba48D()F1802eba48D",
    R"F1802eba48T()F1802eba48T",
    R"F1802eba48F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802eba48F",
    R"F1802eba48U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eba48U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eba48() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eba48", "FUN_1802eba48");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa0);
    // body sha256: cf30d8e7fa723151e55092e6d02e4f34a4f9dba7cf23a14385888a2becaab00f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eba48(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eba48;
}

// 0x1802eba71 FUN_1802eba71
// source: re/dump/decompile/0x1802eba71_FUN_1802eba71.c
// size: 41 bytes; thunk: false
// body sha256: a81eb47879651c795adb4778aa841ded1186887745f454c6e995110118add9df
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eba71{
    "0x1802eba71",
    "FUN_1802eba71",
    R"F1802eba71S(undefined FUN_1802eba71())F1802eba71S",
    R"B1802eba71(// 0x1802eba71  FUN_1802eba71
// size=41 thunk=false
// signature: undefined FUN_1802eba71()
// status: ok


void FUN_1802eba71(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


)B1802eba71",
    "a81eb47879651c795adb4778aa841ded1186887745f454c6e995110118add9df",
    R"F1802eba71C()F1802eba71C",
    R"F1802eba71D()F1802eba71D",
    R"F1802eba71T()F1802eba71T",
    R"F1802eba71F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802eba71F",
    R"F1802eba71U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eba71U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eba71() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eba71", "FUN_1802eba71");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x80);
    // body sha256: a81eb47879651c795adb4778aa841ded1186887745f454c6e995110118add9df
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eba71(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eba71;
}

// 0x1802eba9a FUN_1802eba9a
// source: re/dump/decompile/0x1802eba9a_FUN_1802eba9a.c
// size: 38 bytes; thunk: false
// body sha256: cf28ae99bb8e4ed3a73c5b526669b4b454952d1830f8bf046c6934efcc06fa96
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eba9a{
    "0x1802eba9a",
    "FUN_1802eba9a",
    R"F1802eba9aS(undefined FUN_1802eba9a())F1802eba9aS",
    R"B1802eba9a(// 0x1802eba9a  FUN_1802eba9a
// size=38 thunk=false
// signature: undefined FUN_1802eba9a()
// status: ok


void FUN_1802eba9a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


)B1802eba9a",
    "cf28ae99bb8e4ed3a73c5b526669b4b454952d1830f8bf046c6934efcc06fa96",
    R"F1802eba9aC()F1802eba9aC",
    R"F1802eba9aD()F1802eba9aD",
    R"F1802eba9aT()F1802eba9aT",
    R"F1802eba9aF(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802eba9aF",
    R"F1802eba9aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eba9aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eba9a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eba9a", "FUN_1802eba9a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x38);
    // body sha256: cf28ae99bb8e4ed3a73c5b526669b4b454952d1830f8bf046c6934efcc06fa96
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eba9a(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eba9a;
}

// 0x1802ebaf0 FUN_1802ebaf0
// source: re/dump/decompile/0x1802ebaf0_FUN_1802ebaf0.c
// size: 38 bytes; thunk: false
// body sha256: 35446ce989c045896a414960bf7f45b8424ce19748c12efcdabc36ba47cb2cc7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebaf0{
    "0x1802ebaf0",
    "FUN_1802ebaf0",
    R"F1802ebaf0S(undefined FUN_1802ebaf0())F1802ebaf0S",
    R"B1802ebaf0(// 0x1802ebaf0  FUN_1802ebaf0
// size=38 thunk=false
// signature: undefined FUN_1802ebaf0()
// status: ok


void FUN_1802ebaf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ebaf0",
    "35446ce989c045896a414960bf7f45b8424ce19748c12efcdabc36ba47cb2cc7",
    R"F1802ebaf0C()F1802ebaf0C",
    R"F1802ebaf0D()F1802ebaf0D",
    R"F1802ebaf0T()F1802ebaf0T",
    R"F1802ebaf0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ebaf0F",
    R"F1802ebaf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebaf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebaf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebaf0", "FUN_1802ebaf0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x28));
    // body sha256: 35446ce989c045896a414960bf7f45b8424ce19748c12efcdabc36ba47cb2cc7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebaf0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebaf0;
}

// 0x1802ebb2c FUN_1802ebb2c
// source: re/dump/decompile/0x1802ebb2c_FUN_1802ebb2c.c
// size: 38 bytes; thunk: false
// body sha256: e7bc8940ffef475ef7a47b5d3490e16a801bbd2d34da5c9a37ac90432ce2a118
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebb2c{
    "0x1802ebb2c",
    "FUN_1802ebb2c",
    R"F1802ebb2cS(undefined FUN_1802ebb2c())F1802ebb2cS",
    R"B1802ebb2c(// 0x1802ebb2c  FUN_1802ebb2c
// size=38 thunk=false
// signature: undefined FUN_1802ebb2c()
// status: ok


void FUN_1802ebb2c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ebb2c",
    "e7bc8940ffef475ef7a47b5d3490e16a801bbd2d34da5c9a37ac90432ce2a118",
    R"F1802ebb2cC()F1802ebb2cC",
    R"F1802ebb2cD()F1802ebb2cD",
    R"F1802ebb2cT()F1802ebb2cT",
    R"F1802ebb2cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ebb2cF",
    R"F1802ebb2cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebb2cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebb2c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebb2c", "FUN_1802ebb2c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x28));
    // body sha256: e7bc8940ffef475ef7a47b5d3490e16a801bbd2d34da5c9a37ac90432ce2a118
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebb2c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebb2c;
}

// 0x1802ebb78 FUN_1802ebb78
// source: re/dump/decompile/0x1802ebb78_FUN_1802ebb78.c
// size: 38 bytes; thunk: false
// body sha256: 1d1d8f11e6256fb0291aa12a7dfe56bd2738d569685ff1130db2a2263bf8ff78
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebb78{
    "0x1802ebb78",
    "FUN_1802ebb78",
    R"F1802ebb78S(undefined FUN_1802ebb78())F1802ebb78S",
    R"B1802ebb78(// 0x1802ebb78  FUN_1802ebb78
// size=38 thunk=false
// signature: undefined FUN_1802ebb78()
// status: ok


void FUN_1802ebb78(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802ebb78",
    "1d1d8f11e6256fb0291aa12a7dfe56bd2738d569685ff1130db2a2263bf8ff78",
    R"F1802ebb78C()F1802ebb78C",
    R"F1802ebb78D()F1802ebb78D",
    R"F1802ebb78T()F1802ebb78T",
    R"F1802ebb78F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802ebb78F",
    R"F1802ebb78U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebb78U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebb78() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebb78", "FUN_1802ebb78");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 1d1d8f11e6256fb0291aa12a7dfe56bd2738d569685ff1130db2a2263bf8ff78
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebb78(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebb78;
}

// 0x1802ebb9e FUN_1802ebb9e
// source: re/dump/decompile/0x1802ebb9e_FUN_1802ebb9e.c
// size: 38 bytes; thunk: false
// body sha256: 6c8dc255b49facdeb6a323a0c304348e6d66d2eb8c4bc129b5787bdd0612bb43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebb9e{
    "0x1802ebb9e",
    "FUN_1802ebb9e",
    R"F1802ebb9eS(undefined FUN_1802ebb9e())F1802ebb9eS",
    R"B1802ebb9e(// 0x1802ebb9e  FUN_1802ebb9e
// size=38 thunk=false
// signature: undefined FUN_1802ebb9e()
// status: ok


void FUN_1802ebb9e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802ebb9e",
    "6c8dc255b49facdeb6a323a0c304348e6d66d2eb8c4bc129b5787bdd0612bb43",
    R"F1802ebb9eC()F1802ebb9eC",
    R"F1802ebb9eD()F1802ebb9eD",
    R"F1802ebb9eT()F1802ebb9eT",
    R"F1802ebb9eF(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802ebb9eF",
    R"F1802ebb9eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebb9eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebb9e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebb9e", "FUN_1802ebb9e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 6c8dc255b49facdeb6a323a0c304348e6d66d2eb8c4bc129b5787bdd0612bb43
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebb9e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebb9e;
}

// 0x1802ebbd0 FUN_1802ebbd0
// source: re/dump/decompile/0x1802ebbd0_FUN_1802ebbd0.c
// size: 43 bytes; thunk: false
// body sha256: 237211cbf93fc5f39f4ca2275b04e0d44d2150abeacb4357c4ded94a62ffe490
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebbd0{
    "0x1802ebbd0",
    "FUN_1802ebbd0",
    R"F1802ebbd0S(undefined FUN_1802ebbd0())F1802ebbd0S",
    R"B1802ebbd0(// 0x1802ebbd0  FUN_1802ebbd0
// size=43 thunk=false
// signature: undefined FUN_1802ebbd0()
// status: ok


void FUN_1802ebbd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ebbd0",
    "237211cbf93fc5f39f4ca2275b04e0d44d2150abeacb4357c4ded94a62ffe490",
    R"F1802ebbd0C()F1802ebbd0C",
    R"F1802ebbd0D()F1802ebbd0D",
    R"F1802ebbd0T()F1802ebbd0T",
    R"F1802ebbd0F(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802ebbd0F",
    R"F1802ebbd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebbd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebbd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebbd0", "FUN_1802ebbd0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 237211cbf93fc5f39f4ca2275b04e0d44d2150abeacb4357c4ded94a62ffe490
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebbd0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebbd0;
}

// 0x1802ebbfb FUN_1802ebbfb
// source: re/dump/decompile/0x1802ebbfb_FUN_1802ebbfb.c
// size: 43 bytes; thunk: false
// body sha256: 02feaabe0846eb354443aea2c53e21760254bc9a6a7c8043841d43495eff8214
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebbfb{
    "0x1802ebbfb",
    "FUN_1802ebbfb",
    R"F1802ebbfbS(undefined FUN_1802ebbfb())F1802ebbfbS",
    R"B1802ebbfb(// 0x1802ebbfb  FUN_1802ebbfb
// size=43 thunk=false
// signature: undefined FUN_1802ebbfb()
// status: ok


void FUN_1802ebbfb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ebbfb",
    "02feaabe0846eb354443aea2c53e21760254bc9a6a7c8043841d43495eff8214",
    R"F1802ebbfbC()F1802ebbfbC",
    R"F1802ebbfbD()F1802ebbfbD",
    R"F1802ebbfbT()F1802ebbfbT",
    R"F1802ebbfbF(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802ebbfbF",
    R"F1802ebbfbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebbfbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebbfb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebbfb", "FUN_1802ebbfb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 02feaabe0846eb354443aea2c53e21760254bc9a6a7c8043841d43495eff8214
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebbfb(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebbfb;
}

// 0x1802ebc62 FUN_1802ebc62
// source: re/dump/decompile/0x1802ebc62_FUN_1802ebc62.c
// size: 43 bytes; thunk: false
// body sha256: 48f1e2e48816ecb8d413747df816270f8dc18bef403beefc7fb643bd8915e5cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebc62{
    "0x1802ebc62",
    "FUN_1802ebc62",
    R"F1802ebc62S(undefined FUN_1802ebc62())F1802ebc62S",
    R"B1802ebc62(// 0x1802ebc62  FUN_1802ebc62
// size=43 thunk=false
// signature: undefined FUN_1802ebc62()
// status: ok


void FUN_1802ebc62(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ebc62",
    "48f1e2e48816ecb8d413747df816270f8dc18bef403beefc7fb643bd8915e5cf",
    R"F1802ebc62C()F1802ebc62C",
    R"F1802ebc62D()F1802ebc62D",
    R"F1802ebc62T()F1802ebc62T",
    R"F1802ebc62F(10: if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
14: return;)F1802ebc62F",
    R"F1802ebc62U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebc62U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebc62() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebc62", "FUN_1802ebc62");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 48f1e2e48816ecb8d413747df816270f8dc18bef403beefc7fb643bd8915e5cf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebc62(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebc62;
}

// 0x1802ebc8d FUN_1802ebc8d
// source: re/dump/decompile/0x1802ebc8d_FUN_1802ebc8d.c
// size: 43 bytes; thunk: false
// body sha256: 446e0056b47214331693d495d390c0227da2930118a94f9fe0f9d950794225ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebc8d{
    "0x1802ebc8d",
    "FUN_1802ebc8d",
    R"F1802ebc8dS(undefined FUN_1802ebc8d())F1802ebc8dS",
    R"B1802ebc8d(// 0x1802ebc8d  FUN_1802ebc8d
// size=43 thunk=false
// signature: undefined FUN_1802ebc8d()
// status: ok


void FUN_1802ebc8d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ebc8d",
    "446e0056b47214331693d495d390c0227da2930118a94f9fe0f9d950794225ba",
    R"F1802ebc8dC()F1802ebc8dC",
    R"F1802ebc8dD()F1802ebc8dD",
    R"F1802ebc8dT()F1802ebc8dT",
    R"F1802ebc8dF(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802ebc8dF",
    R"F1802ebc8dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebc8dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebc8d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebc8d", "FUN_1802ebc8d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 446e0056b47214331693d495d390c0227da2930118a94f9fe0f9d950794225ba
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebc8d(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebc8d;
}

// 0x1802ebcc4 FUN_1802ebcc4
// source: re/dump/decompile/0x1802ebcc4_FUN_1802ebcc4.c
// size: 43 bytes; thunk: false
// body sha256: 90c2d77d6716769608808fdae0e29ff8c0ea289e2049dc6211e479c9c556b8cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebcc4{
    "0x1802ebcc4",
    "FUN_1802ebcc4",
    R"F1802ebcc4S(undefined FUN_1802ebcc4())F1802ebcc4S",
    R"B1802ebcc4(// 0x1802ebcc4  FUN_1802ebcc4
// size=43 thunk=false
// signature: undefined FUN_1802ebcc4()
// status: ok


void FUN_1802ebcc4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802ebcc4",
    "90c2d77d6716769608808fdae0e29ff8c0ea289e2049dc6211e479c9c556b8cf",
    R"F1802ebcc4C()F1802ebcc4C",
    R"F1802ebcc4D()F1802ebcc4D",
    R"F1802ebcc4T()F1802ebcc4T",
    R"F1802ebcc4F(10: if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
14: return;)F1802ebcc4F",
    R"F1802ebcc4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebcc4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebcc4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebcc4", "FUN_1802ebcc4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 90c2d77d6716769608808fdae0e29ff8c0ea289e2049dc6211e479c9c556b8cf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebcc4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebcc4;
}

// 0x1802ebcef FUN_1802ebcef
// source: re/dump/decompile/0x1802ebcef_FUN_1802ebcef.c
// size: 43 bytes; thunk: false
// body sha256: 931b6519df8fddc7acb8881ec938457cf4831cbad1a9ced683b2477b8cf0526c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebcef{
    "0x1802ebcef",
    "FUN_1802ebcef",
    R"F1802ebcefS(undefined FUN_1802ebcef())F1802ebcefS",
    R"B1802ebcef(// 0x1802ebcef  FUN_1802ebcef
// size=43 thunk=false
// signature: undefined FUN_1802ebcef()
// status: ok


void FUN_1802ebcef(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802ebcef",
    "931b6519df8fddc7acb8881ec938457cf4831cbad1a9ced683b2477b8cf0526c",
    R"F1802ebcefC()F1802ebcefC",
    R"F1802ebcefD()F1802ebcefD",
    R"F1802ebcefT()F1802ebcefT",
    R"F1802ebcefF(10: if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
14: return;)F1802ebcefF",
    R"F1802ebcefU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebcefU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebcef() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebcef", "FUN_1802ebcef");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 931b6519df8fddc7acb8881ec938457cf4831cbad1a9ced683b2477b8cf0526c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebcef(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebcef;
}

// 0x1802ebd26 FUN_1802ebd26
// source: re/dump/decompile/0x1802ebd26_FUN_1802ebd26.c
// size: 43 bytes; thunk: false
// body sha256: 3181de52066668e5a427a07865ed6199e52ba58e810aa94e745c965e12d254ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebd26{
    "0x1802ebd26",
    "FUN_1802ebd26",
    R"F1802ebd26S(undefined FUN_1802ebd26())F1802ebd26S",
    R"B1802ebd26(// 0x1802ebd26  FUN_1802ebd26
// size=43 thunk=false
// signature: undefined FUN_1802ebd26()
// status: ok


void FUN_1802ebd26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ebd26",
    "3181de52066668e5a427a07865ed6199e52ba58e810aa94e745c965e12d254ab",
    R"F1802ebd26C()F1802ebd26C",
    R"F1802ebd26D()F1802ebd26D",
    R"F1802ebd26T()F1802ebd26T",
    R"F1802ebd26F(10: if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
14: return;)F1802ebd26F",
    R"F1802ebd26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebd26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebd26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebd26", "FUN_1802ebd26");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x38));
    // body sha256: 3181de52066668e5a427a07865ed6199e52ba58e810aa94e745c965e12d254ab
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebd26(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebd26;
}

// 0x1802ebd51 FUN_1802ebd51
// source: re/dump/decompile/0x1802ebd51_FUN_1802ebd51.c
// size: 43 bytes; thunk: false
// body sha256: c79e1a96619cc2c82dde421332a17993569f8d4cb5cdec6a87ae55af15fdc33b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebd51{
    "0x1802ebd51",
    "FUN_1802ebd51",
    R"F1802ebd51S(undefined FUN_1802ebd51())F1802ebd51S",
    R"B1802ebd51(// 0x1802ebd51  FUN_1802ebd51
// size=43 thunk=false
// signature: undefined FUN_1802ebd51()
// status: ok


void FUN_1802ebd51(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ebd51",
    "c79e1a96619cc2c82dde421332a17993569f8d4cb5cdec6a87ae55af15fdc33b",
    R"F1802ebd51C()F1802ebd51C",
    R"F1802ebd51D()F1802ebd51D",
    R"F1802ebd51T()F1802ebd51T",
    R"F1802ebd51F(10: if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
14: return;)F1802ebd51F",
    R"F1802ebd51U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebd51U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebd51() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebd51", "FUN_1802ebd51");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x38));
    // body sha256: c79e1a96619cc2c82dde421332a17993569f8d4cb5cdec6a87ae55af15fdc33b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebd51(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebd51;
}

// 0x1802ebddc FUN_1802ebddc
// source: re/dump/decompile/0x1802ebddc_FUN_1802ebddc.c
// size: 43 bytes; thunk: false
// body sha256: e2c2f97ee73134f9084ae8fc7bb950e9189becbe369114d59894cddefb1863d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebddc{
    "0x1802ebddc",
    "FUN_1802ebddc",
    R"F1802ebddcS(undefined FUN_1802ebddc())F1802ebddcS",
    R"B1802ebddc(// 0x1802ebddc  FUN_1802ebddc
// size=43 thunk=false
// signature: undefined FUN_1802ebddc()
// status: ok


void FUN_1802ebddc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffff7fff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ebddc",
    "e2c2f97ee73134f9084ae8fc7bb950e9189becbe369114d59894cddefb1863d9",
    R"F1802ebddcC()F1802ebddcC",
    R"F1802ebddcD()F1802ebddcD",
    R"F1802ebddcT()F1802ebddcT",
    R"F1802ebddcF(10: if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) {
14: return;)F1802ebddcF",
    R"F1802ebddcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebddcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebddc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebddc", "FUN_1802ebddc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x38));
    // body sha256: e2c2f97ee73134f9084ae8fc7bb950e9189becbe369114d59894cddefb1863d9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebddc(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffff7fff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebddc;
}

// 0x1802ebe07 FUN_1802ebe07
// source: re/dump/decompile/0x1802ebe07_FUN_1802ebe07.c
// size: 43 bytes; thunk: false
// body sha256: 68a9d37f5d08d2e5e7dd01178ea7149cebab20c9c7f0a2b3f48fea124a94434b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebe07{
    "0x1802ebe07",
    "FUN_1802ebe07",
    R"F1802ebe07S(undefined FUN_1802ebe07())F1802ebe07S",
    R"B1802ebe07(// 0x1802ebe07  FUN_1802ebe07
// size=43 thunk=false
// signature: undefined FUN_1802ebe07()
// status: ok


void FUN_1802ebe07(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ebe07",
    "68a9d37f5d08d2e5e7dd01178ea7149cebab20c9c7f0a2b3f48fea124a94434b",
    R"F1802ebe07C()F1802ebe07C",
    R"F1802ebe07D()F1802ebe07D",
    R"F1802ebe07T()F1802ebe07T",
    R"F1802ebe07F(10: if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
14: return;)F1802ebe07F",
    R"F1802ebe07U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebe07U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebe07() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebe07", "FUN_1802ebe07");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x38));
    // body sha256: 68a9d37f5d08d2e5e7dd01178ea7149cebab20c9c7f0a2b3f48fea124a94434b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebe07(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebe07;
}

// 0x1802ebe3e FUN_1802ebe3e
// source: re/dump/decompile/0x1802ebe3e_FUN_1802ebe3e.c
// size: 46 bytes; thunk: false
// body sha256: 54adb21428c3ce38d85c1cb94f893e9ef5e1db71883a1844082b7748853a8e1c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebe3e{
    "0x1802ebe3e",
    "FUN_1802ebe3e",
    R"F1802ebe3eS(undefined FUN_1802ebe3e())F1802ebe3eS",
    R"B1802ebe3e(// 0x1802ebe3e  FUN_1802ebe3e
// size=46 thunk=false
// signature: undefined FUN_1802ebe3e()
// status: ok


void FUN_1802ebe3e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;
    FUN_1800668e0(param_2 + 0x160);
  }
  return;
}


)B1802ebe3e",
    "54adb21428c3ce38d85c1cb94f893e9ef5e1db71883a1844082b7748853a8e1c",
    R"F1802ebe3eC(FUN_1800668e0)F1802ebe3eC",
    R"F1802ebe3eD()F1802ebe3eD",
    R"F1802ebe3eT()F1802ebe3eT",
    R"F1802ebe3eF(10: if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
14: return;)F1802ebe3eF",
    R"F1802ebe3eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebe3eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebe3e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebe3e", "FUN_1802ebe3e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x160);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 54adb21428c3ce38d85c1cb94f893e9ef5e1db71883a1844082b7748853a8e1c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebe3e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;");
                trace.statement("FUN_1800668e0(param_2 + 0x160);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebe3e;
}

// 0x1802ebe9c FUN_1802ebe9c
// source: re/dump/decompile/0x1802ebe9c_FUN_1802ebe9c.c
// size: 38 bytes; thunk: false
// body sha256: c1608ddd1b9a10f802ebc4e1b74cd09424d45ffae040a5dc689f078aa05f7779
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebe9c{
    "0x1802ebe9c",
    "FUN_1802ebe9c",
    R"F1802ebe9cS(undefined FUN_1802ebe9c())F1802ebe9cS",
    R"B1802ebe9c(// 0x1802ebe9c  FUN_1802ebe9c
// size=38 thunk=false
// signature: undefined FUN_1802ebe9c()
// status: ok


void FUN_1802ebe9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ebe9c",
    "c1608ddd1b9a10f802ebc4e1b74cd09424d45ffae040a5dc689f078aa05f7779",
    R"F1802ebe9cC()F1802ebe9cC",
    R"F1802ebe9cD()F1802ebe9cD",
    R"F1802ebe9cT()F1802ebe9cT",
    R"F1802ebe9cF(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802ebe9cF",
    R"F1802ebe9cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebe9cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebe9c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebe9c", "FUN_1802ebe9c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x38));
    // body sha256: c1608ddd1b9a10f802ebc4e1b74cd09424d45ffae040a5dc689f078aa05f7779
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebe9c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebe9c;
}

// 0x1802ebec2 FUN_1802ebec2
// source: re/dump/decompile/0x1802ebec2_FUN_1802ebec2.c
// size: 38 bytes; thunk: false
// body sha256: 98a2d087d30745b955a7996a15a15237757a9d07b89f7ff515a5a0874f3c1da2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebec2{
    "0x1802ebec2",
    "FUN_1802ebec2",
    R"F1802ebec2S(undefined FUN_1802ebec2())F1802ebec2S",
    R"B1802ebec2(// 0x1802ebec2  FUN_1802ebec2
// size=38 thunk=false
// signature: undefined FUN_1802ebec2()
// status: ok


void FUN_1802ebec2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ebec2",
    "98a2d087d30745b955a7996a15a15237757a9d07b89f7ff515a5a0874f3c1da2",
    R"F1802ebec2C()F1802ebec2C",
    R"F1802ebec2D()F1802ebec2D",
    R"F1802ebec2T()F1802ebec2T",
    R"F1802ebec2F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802ebec2F",
    R"F1802ebec2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebec2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebec2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebec2", "FUN_1802ebec2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x38));
    // body sha256: 98a2d087d30745b955a7996a15a15237757a9d07b89f7ff515a5a0874f3c1da2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebec2(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebec2;
}

// 0x1802ebef4 FUN_1802ebef4
// source: re/dump/decompile/0x1802ebef4_FUN_1802ebef4.c
// size: 38 bytes; thunk: false
// body sha256: 20458cf787e835fc8542dd70c1f5ec3d0190fad39322f875d0d8119520ebb44d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebef4{
    "0x1802ebef4",
    "FUN_1802ebef4",
    R"F1802ebef4S(undefined FUN_1802ebef4())F1802ebef4S",
    R"B1802ebef4(// 0x1802ebef4  FUN_1802ebef4
// size=38 thunk=false
// signature: undefined FUN_1802ebef4()
// status: ok


void FUN_1802ebef4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ebef4",
    "20458cf787e835fc8542dd70c1f5ec3d0190fad39322f875d0d8119520ebb44d",
    R"F1802ebef4C()F1802ebef4C",
    R"F1802ebef4D()F1802ebef4D",
    R"F1802ebef4T()F1802ebef4T",
    R"F1802ebef4F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802ebef4F",
    R"F1802ebef4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebef4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebef4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebef4", "FUN_1802ebef4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 20458cf787e835fc8542dd70c1f5ec3d0190fad39322f875d0d8119520ebb44d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebef4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebef4;
}

// 0x1802ebf1a FUN_1802ebf1a
// source: re/dump/decompile/0x1802ebf1a_FUN_1802ebf1a.c
// size: 38 bytes; thunk: false
// body sha256: a88549b23f564bd9c5d964dd9aeea0967ad2fb47d07da8e3c5a06ba8333e9bce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebf1a{
    "0x1802ebf1a",
    "FUN_1802ebf1a",
    R"F1802ebf1aS(undefined FUN_1802ebf1a())F1802ebf1aS",
    R"B1802ebf1a(// 0x1802ebf1a  FUN_1802ebf1a
// size=38 thunk=false
// signature: undefined FUN_1802ebf1a()
// status: ok


void FUN_1802ebf1a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ebf1a",
    "a88549b23f564bd9c5d964dd9aeea0967ad2fb47d07da8e3c5a06ba8333e9bce",
    R"F1802ebf1aC()F1802ebf1aC",
    R"F1802ebf1aD()F1802ebf1aD",
    R"F1802ebf1aT()F1802ebf1aT",
    R"F1802ebf1aF(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802ebf1aF",
    R"F1802ebf1aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebf1aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebf1a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebf1a", "FUN_1802ebf1a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: a88549b23f564bd9c5d964dd9aeea0967ad2fb47d07da8e3c5a06ba8333e9bce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebf1a(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebf1a;
}

// 0x1802ebf58 FUN_1802ebf58
// source: re/dump/decompile/0x1802ebf58_FUN_1802ebf58.c
// size: 41 bytes; thunk: false
// body sha256: d363670cf2f4aa83986b15dbf964023068ea4f82e092aed0da1788169d4c8fce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebf58{
    "0x1802ebf58",
    "FUN_1802ebf58",
    R"F1802ebf58S(undefined FUN_1802ebf58())F1802ebf58S",
    R"B1802ebf58(// 0x1802ebf58  FUN_1802ebf58
// size=41 thunk=false
// signature: undefined FUN_1802ebf58()
// status: ok


void FUN_1802ebf58(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x158));
  }
  return;
}


)B1802ebf58",
    "d363670cf2f4aa83986b15dbf964023068ea4f82e092aed0da1788169d4c8fce",
    R"F1802ebf58C(FUN_1800668e0)F1802ebf58C",
    R"F1802ebf58D()F1802ebf58D",
    R"F1802ebf58T()F1802ebf58T",
    R"F1802ebf58F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ebf58F",
    R"F1802ebf58U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebf58U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebf58() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebf58", "FUN_1802ebf58");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", *(undefined8 *)(param_2 + 0x158));
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: d363670cf2f4aa83986b15dbf964023068ea4f82e092aed0da1788169d4c8fce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebf58(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x158));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebf58;
}

// 0x1802ebfc0 FUN_1802ebfc0
// source: re/dump/decompile/0x1802ebfc0_FUN_1802ebfc0.c
// size: 41 bytes; thunk: false
// body sha256: 92660d44a40e6c341a22d5f70106bd9caf21df9ff1aaf4eb3e1de42cd1c45653
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ebfc0{
    "0x1802ebfc0",
    "FUN_1802ebfc0",
    R"F1802ebfc0S(undefined FUN_1802ebfc0())F1802ebfc0S",
    R"B1802ebfc0(// 0x1802ebfc0  FUN_1802ebfc0
// size=41 thunk=false
// signature: undefined FUN_1802ebfc0()
// status: ok


void FUN_1802ebfc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18020ad50(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802ebfc0",
    "92660d44a40e6c341a22d5f70106bd9caf21df9ff1aaf4eb3e1de42cd1c45653",
    R"F1802ebfc0C(FUN_18020ad50)F1802ebfc0C",
    R"F1802ebfc0D()F1802ebfc0D",
    R"F1802ebfc0T()F1802ebfc0T",
    R"F1802ebfc0F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ebfc0F",
    R"F1802ebfc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ebfc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ebfc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ebfc0", "FUN_1802ebfc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020ad50", *(undefined8 *)(param_2 + 0x80));
    trace.call_target("FUN_18020ad50", reinterpret_cast<const void*>(&image::FUN_18020ad50));
    // body sha256: 92660d44a40e6c341a22d5f70106bd9caf21df9ff1aaf4eb3e1de42cd1c45653
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ebfc0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18020ad50(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ebfc0;
}

// 0x1802ec059 FUN_1802ec059
// source: re/dump/decompile/0x1802ec059_FUN_1802ec059.c
// size: 38 bytes; thunk: false
// body sha256: 1f86dc7bb817f729fc724088af6988c0256f54e02285374383848ef4b8ef16b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec059{
    "0x1802ec059",
    "FUN_1802ec059",
    R"F1802ec059S(undefined FUN_1802ec059())F1802ec059S",
    R"B1802ec059(// 0x1802ec059  FUN_1802ec059
// size=38 thunk=false
// signature: undefined FUN_1802ec059()
// status: ok


void FUN_1802ec059(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);
  }
  return;
}


)B1802ec059",
    "1f86dc7bb817f729fc724088af6988c0256f54e02285374383848ef4b8ef16b7",
    R"F1802ec059C()F1802ec059C",
    R"F1802ec059D()F1802ec059D",
    R"F1802ec059T()F1802ec059T",
    R"F1802ec059F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802ec059F",
    R"F1802ec059U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec059U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec059() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec059", "FUN_1802ec059");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x58);
    // body sha256: 1f86dc7bb817f729fc724088af6988c0256f54e02285374383848ef4b8ef16b7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec059(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec059;
}

// 0x1802ec07f FUN_1802ec07f
// source: re/dump/decompile/0x1802ec07f_FUN_1802ec07f.c
// size: 38 bytes; thunk: false
// body sha256: 1a8f36952d47d029aef34dbb842381eb668cd83c5d0745bc6b26192396f00087
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec07f{
    "0x1802ec07f",
    "FUN_1802ec07f",
    R"F1802ec07fS(undefined FUN_1802ec07f())F1802ec07fS",
    R"B1802ec07f(// 0x1802ec07f  FUN_1802ec07f
// size=38 thunk=false
// signature: undefined FUN_1802ec07f()
// status: ok


void FUN_1802ec07f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


)B1802ec07f",
    "1a8f36952d47d029aef34dbb842381eb668cd83c5d0745bc6b26192396f00087",
    R"F1802ec07fC()F1802ec07fC",
    R"F1802ec07fD()F1802ec07fD",
    R"F1802ec07fT()F1802ec07fT",
    R"F1802ec07fF(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802ec07fF",
    R"F1802ec07fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec07fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec07f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec07f", "FUN_1802ec07f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x38);
    // body sha256: 1a8f36952d47d029aef34dbb842381eb668cd83c5d0745bc6b26192396f00087
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec07f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec07f;
}

// 0x1802ec18c FUN_1802ec18c
// source: re/dump/decompile/0x1802ec18c_FUN_1802ec18c.c
// size: 38 bytes; thunk: false
// body sha256: 7522576ec812ba21fce863cacaa162ea795442126f1c2e040b2fa319b4ba0f4f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec18c{
    "0x1802ec18c",
    "FUN_1802ec18c",
    R"F1802ec18cS(undefined FUN_1802ec18c())F1802ec18cS",
    R"B1802ec18c(// 0x1802ec18c  FUN_1802ec18c
// size=38 thunk=false
// signature: undefined FUN_1802ec18c()
// status: ok


void FUN_1802ec18c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802ec18c",
    "7522576ec812ba21fce863cacaa162ea795442126f1c2e040b2fa319b4ba0f4f",
    R"F1802ec18cC()F1802ec18cC",
    R"F1802ec18cD()F1802ec18cD",
    R"F1802ec18cT()F1802ec18cT",
    R"F1802ec18cF(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ec18cF",
    R"F1802ec18cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec18cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec18c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec18c", "FUN_1802ec18c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 7522576ec812ba21fce863cacaa162ea795442126f1c2e040b2fa319b4ba0f4f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec18c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec18c;
}

// 0x1802ec1ca FUN_1802ec1ca
// source: re/dump/decompile/0x1802ec1ca_FUN_1802ec1ca.c
// size: 38 bytes; thunk: false
// body sha256: a466cfe42f6a527930e3a0a264216a85fb525e2aeaa0e3e08921b201287797e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec1ca{
    "0x1802ec1ca",
    "FUN_1802ec1ca",
    R"F1802ec1caS(undefined FUN_1802ec1ca())F1802ec1caS",
    R"B1802ec1ca(// 0x1802ec1ca  FUN_1802ec1ca
// size=38 thunk=false
// signature: undefined FUN_1802ec1ca()
// status: ok


void FUN_1802ec1ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802ec1ca",
    "a466cfe42f6a527930e3a0a264216a85fb525e2aeaa0e3e08921b201287797e4",
    R"F1802ec1caC()F1802ec1caC",
    R"F1802ec1caD()F1802ec1caD",
    R"F1802ec1caT()F1802ec1caT",
    R"F1802ec1caF(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802ec1caF",
    R"F1802ec1caU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec1caU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec1ca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec1ca", "FUN_1802ec1ca");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: a466cfe42f6a527930e3a0a264216a85fb525e2aeaa0e3e08921b201287797e4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec1ca(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec1ca;
}

// 0x1802ec274 FUN_1802ec274
// source: re/dump/decompile/0x1802ec274_FUN_1802ec274.c
// size: 38 bytes; thunk: false
// body sha256: 0cd02b5b2961b2ca89c880b2afb1b9d7e21e01372cc4c5ceee10f0a806e24122
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec274{
    "0x1802ec274",
    "FUN_1802ec274",
    R"F1802ec274S(undefined FUN_1802ec274())F1802ec274S",
    R"B1802ec274(// 0x1802ec274  FUN_1802ec274
// size=38 thunk=false
// signature: undefined FUN_1802ec274()
// status: ok


void FUN_1802ec274(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ec274",
    "0cd02b5b2961b2ca89c880b2afb1b9d7e21e01372cc4c5ceee10f0a806e24122",
    R"F1802ec274C()F1802ec274C",
    R"F1802ec274D()F1802ec274D",
    R"F1802ec274T()F1802ec274T",
    R"F1802ec274F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802ec274F",
    R"F1802ec274U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec274U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec274() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec274", "FUN_1802ec274");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 0cd02b5b2961b2ca89c880b2afb1b9d7e21e01372cc4c5ceee10f0a806e24122
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec274(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec274;
}

// 0x1802ec310 FUN_1802ec310
// source: re/dump/decompile/0x1802ec310_FUN_1802ec310.c
// size: 41 bytes; thunk: false
// body sha256: 77f89c37ec464f207e604ac58eef8f2a6666dd885dc1dec19354d568de42ee33
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec310{
    "0x1802ec310",
    "FUN_1802ec310",
    R"F1802ec310S(undefined FUN_1802ec310())F1802ec310S",
    R"B1802ec310(// 0x1802ec310  FUN_1802ec310
// size=41 thunk=false
// signature: undefined FUN_1802ec310()
// status: ok


void FUN_1802ec310(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


)B1802ec310",
    "77f89c37ec464f207e604ac58eef8f2a6666dd885dc1dec19354d568de42ee33",
    R"F1802ec310C()F1802ec310C",
    R"F1802ec310D()F1802ec310D",
    R"F1802ec310T()F1802ec310T",
    R"F1802ec310F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ec310F",
    R"F1802ec310U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec310U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec310() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec310", "FUN_1802ec310");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x90));
    // body sha256: 77f89c37ec464f207e604ac58eef8f2a6666dd885dc1dec19354d568de42ee33
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec310(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec310;
}

// 0x1802ec339 FUN_1802ec339
// source: re/dump/decompile/0x1802ec339_FUN_1802ec339.c
// size: 38 bytes; thunk: false
// body sha256: 40981333ebc1d131f9a72f8cd92c096a073c270849753760a73e3349c46c027a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec339{
    "0x1802ec339",
    "FUN_1802ec339",
    R"F1802ec339S(undefined FUN_1802ec339())F1802ec339S",
    R"B1802ec339(// 0x1802ec339  FUN_1802ec339
// size=38 thunk=false
// signature: undefined FUN_1802ec339()
// status: ok


void FUN_1802ec339(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802ec339",
    "40981333ebc1d131f9a72f8cd92c096a073c270849753760a73e3349c46c027a",
    R"F1802ec339C()F1802ec339C",
    R"F1802ec339D()F1802ec339D",
    R"F1802ec339T()F1802ec339T",
    R"F1802ec339F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802ec339F",
    R"F1802ec339U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec339U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec339() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec339", "FUN_1802ec339");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x70);
    // body sha256: 40981333ebc1d131f9a72f8cd92c096a073c270849753760a73e3349c46c027a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec339(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec339;
}

// 0x1802ec377 FUN_1802ec377
// source: re/dump/decompile/0x1802ec377_FUN_1802ec377.c
// size: 38 bytes; thunk: false
// body sha256: 145a3f97300c1a6b267d60e6472dfe98d7d7ae8dde6a9598db46557529ad428d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec377{
    "0x1802ec377",
    "FUN_1802ec377",
    R"F1802ec377S(undefined FUN_1802ec377())F1802ec377S",
    R"B1802ec377(// 0x1802ec377  FUN_1802ec377
// size=38 thunk=false
// signature: undefined FUN_1802ec377()
// status: ok


void FUN_1802ec377(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802ec377",
    "145a3f97300c1a6b267d60e6472dfe98d7d7ae8dde6a9598db46557529ad428d",
    R"F1802ec377C()F1802ec377C",
    R"F1802ec377D()F1802ec377D",
    R"F1802ec377T()F1802ec377T",
    R"F1802ec377F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802ec377F",
    R"F1802ec377U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec377U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec377() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec377", "FUN_1802ec377");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x70);
    // body sha256: 145a3f97300c1a6b267d60e6472dfe98d7d7ae8dde6a9598db46557529ad428d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec377(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec377;
}

// 0x1802ec3a9 FUN_1802ec3a9
// source: re/dump/decompile/0x1802ec3a9_FUN_1802ec3a9.c
// size: 38 bytes; thunk: false
// body sha256: e7ccaa3598cbe2f20d98b22d6495993fbc1426545e9996be4da9214e951c3acc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec3a9{
    "0x1802ec3a9",
    "FUN_1802ec3a9",
    R"F1802ec3a9S(undefined FUN_1802ec3a9())F1802ec3a9S",
    R"B1802ec3a9(// 0x1802ec3a9  FUN_1802ec3a9
// size=38 thunk=false
// signature: undefined FUN_1802ec3a9()
// status: ok


void FUN_1802ec3a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802ec3a9",
    "e7ccaa3598cbe2f20d98b22d6495993fbc1426545e9996be4da9214e951c3acc",
    R"F1802ec3a9C()F1802ec3a9C",
    R"F1802ec3a9D()F1802ec3a9D",
    R"F1802ec3a9T()F1802ec3a9T",
    R"F1802ec3a9F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ec3a9F",
    R"F1802ec3a9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec3a9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec3a9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec3a9", "FUN_1802ec3a9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: e7ccaa3598cbe2f20d98b22d6495993fbc1426545e9996be4da9214e951c3acc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec3a9(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec3a9;
}

// 0x1802ec3cf FUN_1802ec3cf
// source: re/dump/decompile/0x1802ec3cf_FUN_1802ec3cf.c
// size: 38 bytes; thunk: false
// body sha256: 077d494802db18b27c879eeee053e4ff72d35f3ae6d16b1df5bd75b665fa585e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec3cf{
    "0x1802ec3cf",
    "FUN_1802ec3cf",
    R"F1802ec3cfS(undefined FUN_1802ec3cf())F1802ec3cfS",
    R"B1802ec3cf(// 0x1802ec3cf  FUN_1802ec3cf
// size=38 thunk=false
// signature: undefined FUN_1802ec3cf()
// status: ok


void FUN_1802ec3cf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ec3cf",
    "077d494802db18b27c879eeee053e4ff72d35f3ae6d16b1df5bd75b665fa585e",
    R"F1802ec3cfC()F1802ec3cfC",
    R"F1802ec3cfD()F1802ec3cfD",
    R"F1802ec3cfT()F1802ec3cfT",
    R"F1802ec3cfF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802ec3cfF",
    R"F1802ec3cfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec3cfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec3cf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec3cf", "FUN_1802ec3cf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 077d494802db18b27c879eeee053e4ff72d35f3ae6d16b1df5bd75b665fa585e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec3cf(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec3cf;
}

// 0x1802ec40c FUN_1802ec40c
// source: re/dump/decompile/0x1802ec40c_FUN_1802ec40c.c
// size: 38 bytes; thunk: false
// body sha256: 803508057b89d1035d7b3861924fe206fe512cb8d927914bd899515466eeffae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec40c{
    "0x1802ec40c",
    "FUN_1802ec40c",
    R"F1802ec40cS(undefined FUN_1802ec40c())F1802ec40cS",
    R"B1802ec40c(// 0x1802ec40c  FUN_1802ec40c
// size=38 thunk=false
// signature: undefined FUN_1802ec40c()
// status: ok


void FUN_1802ec40c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ec40c",
    "803508057b89d1035d7b3861924fe206fe512cb8d927914bd899515466eeffae",
    R"F1802ec40cC()F1802ec40cC",
    R"F1802ec40cD()F1802ec40cD",
    R"F1802ec40cT()F1802ec40cT",
    R"F1802ec40cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ec40cF",
    R"F1802ec40cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec40cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec40c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec40c", "FUN_1802ec40c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x28));
    // body sha256: 803508057b89d1035d7b3861924fe206fe512cb8d927914bd899515466eeffae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec40c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec40c;
}

// 0x1802ec4d0 FUN_1802ec4d0
// source: re/dump/decompile/0x1802ec4d0_FUN_1802ec4d0.c
// size: 38 bytes; thunk: false
// body sha256: 9b068daf8ab587d1949122cf7da2e2c71c2e368193aad875159f75e2d8aa50fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec4d0{
    "0x1802ec4d0",
    "FUN_1802ec4d0",
    R"F1802ec4d0S(undefined FUN_1802ec4d0())F1802ec4d0S",
    R"B1802ec4d0(// 0x1802ec4d0  FUN_1802ec4d0
// size=38 thunk=false
// signature: undefined FUN_1802ec4d0()
// status: ok


void FUN_1802ec4d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


)B1802ec4d0",
    "9b068daf8ab587d1949122cf7da2e2c71c2e368193aad875159f75e2d8aa50fb",
    R"F1802ec4d0C()F1802ec4d0C",
    R"F1802ec4d0D()F1802ec4d0D",
    R"F1802ec4d0T()F1802ec4d0T",
    R"F1802ec4d0F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ec4d0F",
    R"F1802ec4d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec4d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec4d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec4d0", "FUN_1802ec4d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x40);
    // body sha256: 9b068daf8ab587d1949122cf7da2e2c71c2e368193aad875159f75e2d8aa50fb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec4d0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec4d0;
}

// 0x1802ec502 FUN_1802ec502
// source: re/dump/decompile/0x1802ec502_FUN_1802ec502.c
// size: 38 bytes; thunk: false
// body sha256: 4638264245c01b9f4902974928122c6feee591303c082a9d9f06fae5458ff2e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec502{
    "0x1802ec502",
    "FUN_1802ec502",
    R"F1802ec502S(undefined FUN_1802ec502())F1802ec502S",
    R"B1802ec502(// 0x1802ec502  FUN_1802ec502
// size=38 thunk=false
// signature: undefined FUN_1802ec502()
// status: ok


void FUN_1802ec502(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


)B1802ec502",
    "4638264245c01b9f4902974928122c6feee591303c082a9d9f06fae5458ff2e7",
    R"F1802ec502C()F1802ec502C",
    R"F1802ec502D()F1802ec502D",
    R"F1802ec502T()F1802ec502T",
    R"F1802ec502F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802ec502F",
    R"F1802ec502U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec502U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec502() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec502", "FUN_1802ec502");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x60);
    // body sha256: 4638264245c01b9f4902974928122c6feee591303c082a9d9f06fae5458ff2e7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec502(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec502;
}

// 0x1802ec62c FUN_1802ec62c
// source: re/dump/decompile/0x1802ec62c_FUN_1802ec62c.c
// size: 38 bytes; thunk: false
// body sha256: f00945acfb8ac9692c774d61621bfc3205cf0c40b61441633b56056d6e245826
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec62c{
    "0x1802ec62c",
    "FUN_1802ec62c",
    R"F1802ec62cS(undefined FUN_1802ec62c())F1802ec62cS",
    R"B1802ec62c(// 0x1802ec62c  FUN_1802ec62c
// size=38 thunk=false
// signature: undefined FUN_1802ec62c()
// status: ok


void FUN_1802ec62c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18020ad50(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802ec62c",
    "f00945acfb8ac9692c774d61621bfc3205cf0c40b61441633b56056d6e245826",
    R"F1802ec62cC()F1802ec62cC",
    R"F1802ec62cD()F1802ec62cD",
    R"F1802ec62cT()F1802ec62cT",
    R"F1802ec62cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ec62cF",
    R"F1802ec62cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec62cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec62c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec62c", "FUN_1802ec62c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18020ad50", *(undefined8 *)(param_2 + 0x40));
    // body sha256: f00945acfb8ac9692c774d61621bfc3205cf0c40b61441633b56056d6e245826
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec62c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18020ad50(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec62c;
}

// 0x1802ec7b4 FUN_1802ec7b4
// source: re/dump/decompile/0x1802ec7b4_FUN_1802ec7b4.c
// size: 38 bytes; thunk: false
// body sha256: f2ac1deae52963c381ed637a08492d37e84e156dbd1e5f57e3ce7dd771c5232d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec7b4{
    "0x1802ec7b4",
    "FUN_1802ec7b4",
    R"F1802ec7b4S(undefined FUN_1802ec7b4())F1802ec7b4S",
    R"B1802ec7b4(// 0x1802ec7b4  FUN_1802ec7b4
// size=38 thunk=false
// signature: undefined FUN_1802ec7b4()
// status: ok


void FUN_1802ec7b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x58);
  }
  return;
}


)B1802ec7b4",
    "f2ac1deae52963c381ed637a08492d37e84e156dbd1e5f57e3ce7dd771c5232d",
    R"F1802ec7b4C(FUN_18021b0b0)F1802ec7b4C",
    R"F1802ec7b4D()F1802ec7b4D",
    R"F1802ec7b4T()F1802ec7b4T",
    R"F1802ec7b4F(10: if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
14: return;)F1802ec7b4F",
    R"F1802ec7b4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec7b4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec7b4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec7b4", "FUN_1802ec7b4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x58);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: f2ac1deae52963c381ed637a08492d37e84e156dbd1e5f57e3ce7dd771c5232d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec7b4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec7b4;
}

// 0x1802ec8b0 FUN_1802ec8b0
// source: re/dump/decompile/0x1802ec8b0_FUN_1802ec8b0.c
// size: 41 bytes; thunk: false
// body sha256: 9de58ebde747d85a7f42b164aed7c6e7b873f04e93ffbafcd7dbd9c04be0b800
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec8b0{
    "0x1802ec8b0",
    "FUN_1802ec8b0",
    R"F1802ec8b0S(undefined FUN_1802ec8b0())F1802ec8b0S",
    R"B1802ec8b0(// 0x1802ec8b0  FUN_1802ec8b0
// size=41 thunk=false
// signature: undefined FUN_1802ec8b0()
// status: ok


void FUN_1802ec8b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_18020a5a0(*(undefined8 *)(param_2 + 0xf0));
  }
  return;
}


)B1802ec8b0",
    "9de58ebde747d85a7f42b164aed7c6e7b873f04e93ffbafcd7dbd9c04be0b800",
    R"F1802ec8b0C(FUN_18020a5a0)F1802ec8b0C",
    R"F1802ec8b0D()F1802ec8b0D",
    R"F1802ec8b0T()F1802ec8b0T",
    R"F1802ec8b0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ec8b0F",
    R"F1802ec8b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec8b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec8b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec8b0", "FUN_1802ec8b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020a5a0", *(undefined8 *)(param_2 + 0xf0));
    trace.call_target("FUN_18020a5a0", reinterpret_cast<const void*>(&image::FUN_18020a5a0));
    // body sha256: 9de58ebde747d85a7f42b164aed7c6e7b873f04e93ffbafcd7dbd9c04be0b800
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec8b0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("FUN_18020a5a0(*(undefined8 *)(param_2 + 0xf0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec8b0;
}

// 0x1802ec8e5 FUN_1802ec8e5
// source: re/dump/decompile/0x1802ec8e5_FUN_1802ec8e5.c
// size: 41 bytes; thunk: false
// body sha256: 35b86f15df92293f31fe84f983f4e8dfc32701c8a858a8e0fb524bd046cf604e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ec8e5{
    "0x1802ec8e5",
    "FUN_1802ec8e5",
    R"F1802ec8e5S(undefined FUN_1802ec8e5())F1802ec8e5S",
    R"B1802ec8e5(// 0x1802ec8e5  FUN_1802ec8e5
// size=41 thunk=false
// signature: undefined FUN_1802ec8e5()
// status: ok


void FUN_1802ec8e5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802ec8e5",
    "35b86f15df92293f31fe84f983f4e8dfc32701c8a858a8e0fb524bd046cf604e",
    R"F1802ec8e5C()F1802ec8e5C",
    R"F1802ec8e5D()F1802ec8e5D",
    R"F1802ec8e5T()F1802ec8e5T",
    R"F1802ec8e5F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802ec8e5F",
    R"F1802ec8e5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ec8e5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ec8e5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ec8e5", "FUN_1802ec8e5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x100);
    // body sha256: 35b86f15df92293f31fe84f983f4e8dfc32701c8a858a8e0fb524bd046cf604e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ec8e5(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ec8e5;
}

// 0x1802ecb88 FUN_1802ecb88
// source: re/dump/decompile/0x1802ecb88_FUN_1802ecb88.c
// size: 38 bytes; thunk: false
// body sha256: e69e96a97f8114a23438b24100976747ee162d517942b886c87d5323a13591c2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ecb88{
    "0x1802ecb88",
    "FUN_1802ecb88",
    R"F1802ecb88S(undefined FUN_1802ecb88())F1802ecb88S",
    R"B1802ecb88(// 0x1802ecb88  FUN_1802ecb88
// size=38 thunk=false
// signature: undefined FUN_1802ecb88()
// status: ok


void FUN_1802ecb88(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B1802ecb88",
    "e69e96a97f8114a23438b24100976747ee162d517942b886c87d5323a13591c2",
    R"F1802ecb88C()F1802ecb88C",
    R"F1802ecb88D()F1802ecb88D",
    R"F1802ecb88T()F1802ecb88T",
    R"F1802ecb88F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ecb88F",
    R"F1802ecb88U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ecb88U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ecb88() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ecb88", "FUN_1802ecb88");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x78);
    // body sha256: e69e96a97f8114a23438b24100976747ee162d517942b886c87d5323a13591c2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ecb88(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ecb88;
}

// 0x1802ecbae FUN_1802ecbae
// source: re/dump/decompile/0x1802ecbae_FUN_1802ecbae.c
// size: 38 bytes; thunk: false
// body sha256: f803e197a87602291ba80530c18f0d1a68e985d35923338b12e4370f4829c212
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ecbae{
    "0x1802ecbae",
    "FUN_1802ecbae",
    R"F1802ecbaeS(undefined FUN_1802ecbae())F1802ecbaeS",
    R"B1802ecbae(// 0x1802ecbae  FUN_1802ecbae
// size=38 thunk=false
// signature: undefined FUN_1802ecbae()
// status: ok


void FUN_1802ecbae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


)B1802ecbae",
    "f803e197a87602291ba80530c18f0d1a68e985d35923338b12e4370f4829c212",
    R"F1802ecbaeC()F1802ecbaeC",
    R"F1802ecbaeD()F1802ecbaeD",
    R"F1802ecbaeT()F1802ecbaeT",
    R"F1802ecbaeF(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802ecbaeF",
    R"F1802ecbaeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ecbaeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ecbae() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ecbae", "FUN_1802ecbae");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x38);
    // body sha256: f803e197a87602291ba80530c18f0d1a68e985d35923338b12e4370f4829c212
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ecbae(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ecbae;
}

// 0x1802ecbd4 FUN_1802ecbd4
// source: re/dump/decompile/0x1802ecbd4_FUN_1802ecbd4.c
// size: 38 bytes; thunk: false
// body sha256: 5bc1e70567c6cf405618cea9ffe29977eaf3afa2dfbe33ddaccda549dba6258f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ecbd4{
    "0x1802ecbd4",
    "FUN_1802ecbd4",
    R"F1802ecbd4S(undefined FUN_1802ecbd4())F1802ecbd4S",
    R"B1802ecbd4(// 0x1802ecbd4  FUN_1802ecbd4
// size=38 thunk=false
// signature: undefined FUN_1802ecbd4()
// status: ok


void FUN_1802ecbd4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);
  }
  return;
}


)B1802ecbd4",
    "5bc1e70567c6cf405618cea9ffe29977eaf3afa2dfbe33ddaccda549dba6258f",
    R"F1802ecbd4C()F1802ecbd4C",
    R"F1802ecbd4D()F1802ecbd4D",
    R"F1802ecbd4T()F1802ecbd4T",
    R"F1802ecbd4F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802ecbd4F",
    R"F1802ecbd4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ecbd4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ecbd4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ecbd4", "FUN_1802ecbd4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x58);
    // body sha256: 5bc1e70567c6cf405618cea9ffe29977eaf3afa2dfbe33ddaccda549dba6258f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ecbd4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ecbd4;
}

// 0x1802ecdd4 FUN_1802ecdd4
// source: re/dump/decompile/0x1802ecdd4_FUN_1802ecdd4.c
// size: 38 bytes; thunk: false
// body sha256: fa695ab8ec21ffb1b9622c596d00c59307c18ee0229fa4ad82c7c2921fcc4582
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ecdd4{
    "0x1802ecdd4",
    "FUN_1802ecdd4",
    R"F1802ecdd4S(undefined FUN_1802ecdd4())F1802ecdd4S",
    R"B1802ecdd4(// 0x1802ecdd4  FUN_1802ecdd4
// size=38 thunk=false
// signature: undefined FUN_1802ecdd4()
// status: ok


void FUN_1802ecdd4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802ecdd4",
    "fa695ab8ec21ffb1b9622c596d00c59307c18ee0229fa4ad82c7c2921fcc4582",
    R"F1802ecdd4C()F1802ecdd4C",
    R"F1802ecdd4D()F1802ecdd4D",
    R"F1802ecdd4T()F1802ecdd4T",
    R"F1802ecdd4F(10: if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
14: return;)F1802ecdd4F",
    R"F1802ecdd4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ecdd4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ecdd4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ecdd4", "FUN_1802ecdd4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: fa695ab8ec21ffb1b9622c596d00c59307c18ee0229fa4ad82c7c2921fcc4582
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ecdd4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ecdd4;
}

// 0x1802eceb0 FUN_1802eceb0
// source: re/dump/decompile/0x1802eceb0_FUN_1802eceb0.c
// size: 38 bytes; thunk: false
// body sha256: b176a6478e507d4b3cc5c29443bcc8a472f69b890bf98adf639a88fb207f3d10
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eceb0{
    "0x1802eceb0",
    "FUN_1802eceb0",
    R"F1802eceb0S(undefined FUN_1802eceb0())F1802eceb0S",
    R"B1802eceb0(// 0x1802eceb0  FUN_1802eceb0
// size=38 thunk=false
// signature: undefined FUN_1802eceb0()
// status: ok


void FUN_1802eceb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


)B1802eceb0",
    "b176a6478e507d4b3cc5c29443bcc8a472f69b890bf98adf639a88fb207f3d10",
    R"F1802eceb0C()F1802eceb0C",
    R"F1802eceb0D()F1802eceb0D",
    R"F1802eceb0T()F1802eceb0T",
    R"F1802eceb0F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802eceb0F",
    R"F1802eceb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eceb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eceb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eceb0", "FUN_1802eceb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x60);
    // body sha256: b176a6478e507d4b3cc5c29443bcc8a472f69b890bf98adf639a88fb207f3d10
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eceb0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eceb0;
}

// 0x1802ecf78 FUN_1802ecf78
// source: re/dump/decompile/0x1802ecf78_FUN_1802ecf78.c
// size: 38 bytes; thunk: false
// body sha256: f5425bcfd0056cef8f03a42e4b52aaa2aab0eb41cdaa80d76d7c1edf83ee3353
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ecf78{
    "0x1802ecf78",
    "FUN_1802ecf78",
    R"F1802ecf78S(undefined FUN_1802ecf78())F1802ecf78S",
    R"B1802ecf78(// 0x1802ecf78  FUN_1802ecf78
// size=38 thunk=false
// signature: undefined FUN_1802ecf78()
// status: ok


void FUN_1802ecf78(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    FUN_18022b6b0(param_2 + 0x50);
  }
  return;
}


)B1802ecf78",
    "f5425bcfd0056cef8f03a42e4b52aaa2aab0eb41cdaa80d76d7c1edf83ee3353",
    R"F1802ecf78C(FUN_18022b6b0)F1802ecf78C",
    R"F1802ecf78D()F1802ecf78D",
    R"F1802ecf78T()F1802ecf78T",
    R"F1802ecf78F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802ecf78F",
    R"F1802ecf78U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ecf78U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ecf78() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ecf78", "FUN_1802ecf78");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18022b6b0", param_2 + 0x50);
    trace.call_target("FUN_18022b6b0", reinterpret_cast<const void*>(&image::FUN_18022b6b0));
    // body sha256: f5425bcfd0056cef8f03a42e4b52aaa2aab0eb41cdaa80d76d7c1edf83ee3353
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ecf78(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("FUN_18022b6b0(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ecf78;
}

// 0x1802ed010 FUN_1802ed010
// source: re/dump/decompile/0x1802ed010_FUN_1802ed010.c
// size: 38 bytes; thunk: false
// body sha256: 7953e56bc21401ca3544d05f19848021009799d7b7a71d2748d83c8b84332a68
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed010{
    "0x1802ed010",
    "FUN_1802ed010",
    R"F1802ed010S(undefined FUN_1802ed010())F1802ed010S",
    R"B1802ed010(// 0x1802ed010  FUN_1802ed010
// size=38 thunk=false
// signature: undefined FUN_1802ed010()
// status: ok


void FUN_1802ed010(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ed010",
    "7953e56bc21401ca3544d05f19848021009799d7b7a71d2748d83c8b84332a68",
    R"F1802ed010C()F1802ed010C",
    R"F1802ed010D()F1802ed010D",
    R"F1802ed010T()F1802ed010T",
    R"F1802ed010F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ed010F",
    R"F1802ed010U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed010() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed010", "FUN_1802ed010");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 7953e56bc21401ca3544d05f19848021009799d7b7a71d2748d83c8b84332a68
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed010(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed010;
}

// 0x1802ed070 FUN_1802ed070
// source: re/dump/decompile/0x1802ed070_FUN_1802ed070.c
// size: 38 bytes; thunk: false
// body sha256: 0e392b4ea83437738029c0bf16e4bd78aaab6f0c8f165ad20b9b36cb7cde1d73
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed070{
    "0x1802ed070",
    "FUN_1802ed070",
    R"F1802ed070S(undefined FUN_1802ed070())F1802ed070S",
    R"B1802ed070(// 0x1802ed070  FUN_1802ed070
// size=38 thunk=false
// signature: undefined FUN_1802ed070()
// status: ok


void FUN_1802ed070(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ed070",
    "0e392b4ea83437738029c0bf16e4bd78aaab6f0c8f165ad20b9b36cb7cde1d73",
    R"F1802ed070C()F1802ed070C",
    R"F1802ed070D()F1802ed070D",
    R"F1802ed070T()F1802ed070T",
    R"F1802ed070F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ed070F",
    R"F1802ed070U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed070() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed070", "FUN_1802ed070");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x28));
    // body sha256: 0e392b4ea83437738029c0bf16e4bd78aaab6f0c8f165ad20b9b36cb7cde1d73
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed070(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed070;
}

// 0x1802ed140 FUN_1802ed140
// source: re/dump/decompile/0x1802ed140_FUN_1802ed140.c
// size: 41 bytes; thunk: false
// body sha256: 2b8b3b893ef73688f2b438dcdb0e8ab31acd0fd51ec4a19288af42779ac3d1bc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed140{
    "0x1802ed140",
    "FUN_1802ed140",
    R"F1802ed140S(undefined FUN_1802ed140())F1802ed140S",
    R"B1802ed140(// 0x1802ed140  FUN_1802ed140
// size=41 thunk=false
// signature: undefined FUN_1802ed140()
// status: ok


void FUN_1802ed140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x118);
  }
  return;
}


)B1802ed140",
    "2b8b3b893ef73688f2b438dcdb0e8ab31acd0fd51ec4a19288af42779ac3d1bc",
    R"F1802ed140C()F1802ed140C",
    R"F1802ed140D()F1802ed140D",
    R"F1802ed140T()F1802ed140T",
    R"F1802ed140F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802ed140F",
    R"F1802ed140U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed140U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed140() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed140", "FUN_1802ed140");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x118);
    // body sha256: 2b8b3b893ef73688f2b438dcdb0e8ab31acd0fd51ec4a19288af42779ac3d1bc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed140(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x118);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed140;
}

// 0x1802ed169 FUN_1802ed169
// source: re/dump/decompile/0x1802ed169_FUN_1802ed169.c
// size: 41 bytes; thunk: false
// body sha256: 1b5f9061d8568d7739ede54a0228d2b52ea3c8261f37f24cd6d1543bd6aad5dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed169{
    "0x1802ed169",
    "FUN_1802ed169",
    R"F1802ed169S(undefined FUN_1802ed169())F1802ed169S",
    R"B1802ed169(// 0x1802ed169  FUN_1802ed169
// size=41 thunk=false
// signature: undefined FUN_1802ed169()
// status: ok


void FUN_1802ed169(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802ed169",
    "1b5f9061d8568d7739ede54a0228d2b52ea3c8261f37f24cd6d1543bd6aad5dc",
    R"F1802ed169C()F1802ed169C",
    R"F1802ed169D()F1802ed169D",
    R"F1802ed169T()F1802ed169T",
    R"F1802ed169F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802ed169F",
    R"F1802ed169U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed169U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed169() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed169", "FUN_1802ed169");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe0);
    // body sha256: 1b5f9061d8568d7739ede54a0228d2b52ea3c8261f37f24cd6d1543bd6aad5dc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed169(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed169;
}

// 0x1802ed1ba FUN_1802ed1ba
// source: re/dump/decompile/0x1802ed1ba_FUN_1802ed1ba.c
// size: 41 bytes; thunk: false
// body sha256: f0cc3053d40db0dac6ff54628d0ba55e9988dcc4715493d42ad185f0a13899eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed1ba{
    "0x1802ed1ba",
    "FUN_1802ed1ba",
    R"F1802ed1baS(undefined FUN_1802ed1ba())F1802ed1baS",
    R"B1802ed1ba(// 0x1802ed1ba  FUN_1802ed1ba
// size=41 thunk=false
// signature: undefined FUN_1802ed1ba()
// status: ok


void FUN_1802ed1ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    FUN_18022b660(param_2 + 0x80);
  }
  return;
}


)B1802ed1ba",
    "f0cc3053d40db0dac6ff54628d0ba55e9988dcc4715493d42ad185f0a13899eb",
    R"F1802ed1baC(FUN_18022b660)F1802ed1baC",
    R"F1802ed1baD()F1802ed1baD",
    R"F1802ed1baT()F1802ed1baT",
    R"F1802ed1baF(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802ed1baF",
    R"F1802ed1baU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed1baU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed1ba() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed1ba", "FUN_1802ed1ba");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18022b660", param_2 + 0x80);
    trace.call_target("FUN_18022b660", reinterpret_cast<const void*>(&image::FUN_18022b660));
    // body sha256: f0cc3053d40db0dac6ff54628d0ba55e9988dcc4715493d42ad185f0a13899eb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed1ba(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("FUN_18022b660(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed1ba;
}

// 0x1802ed268 FUN_1802ed268
// source: re/dump/decompile/0x1802ed268_FUN_1802ed268.c
// size: 41 bytes; thunk: false
// body sha256: cabd2b3fbed32876a41bec391fe898841e0554cf8a57042a8fc063875dd2cc2c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed268{
    "0x1802ed268",
    "FUN_1802ed268",
    R"F1802ed268S(undefined FUN_1802ed268())F1802ed268S",
    R"B1802ed268(// 0x1802ed268  FUN_1802ed268
// size=41 thunk=false
// signature: undefined FUN_1802ed268()
// status: ok


void FUN_1802ed268(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


)B1802ed268",
    "cabd2b3fbed32876a41bec391fe898841e0554cf8a57042a8fc063875dd2cc2c",
    R"F1802ed268C()F1802ed268C",
    R"F1802ed268D()F1802ed268D",
    R"F1802ed268T()F1802ed268T",
    R"F1802ed268F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ed268F",
    R"F1802ed268U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed268U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed268() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed268", "FUN_1802ed268");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xb0);
    // body sha256: cabd2b3fbed32876a41bec391fe898841e0554cf8a57042a8fc063875dd2cc2c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed268(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed268;
}

// 0x1802ed291 FUN_1802ed291
// source: re/dump/decompile/0x1802ed291_FUN_1802ed291.c
// size: 38 bytes; thunk: false
// body sha256: 61695177b2d6a6f5be8cd1de646670dba13065091ebb8c4179707fd8b1c8f674
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed291{
    "0x1802ed291",
    "FUN_1802ed291",
    R"F1802ed291S(undefined FUN_1802ed291())F1802ed291S",
    R"B1802ed291(// 0x1802ed291  FUN_1802ed291
// size=38 thunk=false
// signature: undefined FUN_1802ed291()
// status: ok


void FUN_1802ed291(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ed291",
    "61695177b2d6a6f5be8cd1de646670dba13065091ebb8c4179707fd8b1c8f674",
    R"F1802ed291C()F1802ed291C",
    R"F1802ed291D()F1802ed291D",
    R"F1802ed291T()F1802ed291T",
    R"F1802ed291F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802ed291F",
    R"F1802ed291U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed291U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed291() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed291", "FUN_1802ed291");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 61695177b2d6a6f5be8cd1de646670dba13065091ebb8c4179707fd8b1c8f674
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed291(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed291;
}

// 0x1802ed2c3 FUN_1802ed2c3
// source: re/dump/decompile/0x1802ed2c3_FUN_1802ed2c3.c
// size: 41 bytes; thunk: false
// body sha256: b37a4708efcc4ac4f0614775bedb8e2233f2d256f8a9256af481530bf0d3d5a0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed2c3{
    "0x1802ed2c3",
    "FUN_1802ed2c3",
    R"F1802ed2c3S(undefined FUN_1802ed2c3())F1802ed2c3S",
    R"B1802ed2c3(// 0x1802ed2c3  FUN_1802ed2c3
// size=41 thunk=false
// signature: undefined FUN_1802ed2c3()
// status: ok


void FUN_1802ed2c3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


)B1802ed2c3",
    "b37a4708efcc4ac4f0614775bedb8e2233f2d256f8a9256af481530bf0d3d5a0",
    R"F1802ed2c3C()F1802ed2c3C",
    R"F1802ed2c3D()F1802ed2c3D",
    R"F1802ed2c3T()F1802ed2c3T",
    R"F1802ed2c3F(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802ed2c3F",
    R"F1802ed2c3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed2c3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed2c3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed2c3", "FUN_1802ed2c3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x90);
    // body sha256: b37a4708efcc4ac4f0614775bedb8e2233f2d256f8a9256af481530bf0d3d5a0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed2c3(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed2c3;
}

// 0x1802ed2ec FUN_1802ed2ec
// source: re/dump/decompile/0x1802ed2ec_FUN_1802ed2ec.c
// size: 38 bytes; thunk: false
// body sha256: 33a2bfd8a8cbb10a09f72758c006dbaf65376ad5807ce2c314449950060ae4e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed2ec{
    "0x1802ed2ec",
    "FUN_1802ed2ec",
    R"F1802ed2ecS(undefined FUN_1802ed2ec())F1802ed2ecS",
    R"B1802ed2ec(// 0x1802ed2ec  FUN_1802ed2ec
// size=38 thunk=false
// signature: undefined FUN_1802ed2ec()
// status: ok


void FUN_1802ed2ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802ed2ec",
    "33a2bfd8a8cbb10a09f72758c006dbaf65376ad5807ce2c314449950060ae4e7",
    R"F1802ed2ecC()F1802ed2ecC",
    R"F1802ed2ecD()F1802ed2ecD",
    R"F1802ed2ecT()F1802ed2ecT",
    R"F1802ed2ecF(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802ed2ecF",
    R"F1802ed2ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed2ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed2ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed2ec", "FUN_1802ed2ec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 33a2bfd8a8cbb10a09f72758c006dbaf65376ad5807ce2c314449950060ae4e7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed2ec(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed2ec;
}

// 0x1802ed430 FUN_1802ed430
// source: re/dump/decompile/0x1802ed430_FUN_1802ed430.c
// size: 38 bytes; thunk: false
// body sha256: 098dca1a1e22c7b14e6af1313fc2c115bc3d8208eeba2705fd7cc6895d71a3c1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed430{
    "0x1802ed430",
    "FUN_1802ed430",
    R"F1802ed430S(undefined FUN_1802ed430())F1802ed430S",
    R"B1802ed430(// 0x1802ed430  FUN_1802ed430
// size=38 thunk=false
// signature: undefined FUN_1802ed430()
// status: ok


void FUN_1802ed430(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FUN_18022b620(param_2 + 0x70);
  }
  return;
}


)B1802ed430",
    "098dca1a1e22c7b14e6af1313fc2c115bc3d8208eeba2705fd7cc6895d71a3c1",
    R"F1802ed430C(FUN_18022b620)F1802ed430C",
    R"F1802ed430D()F1802ed430D",
    R"F1802ed430T()F1802ed430T",
    R"F1802ed430F(10: if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
14: return;)F1802ed430F",
    R"F1802ed430U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed430U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed430() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed430", "FUN_1802ed430");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18022b620", param_2 + 0x70);
    trace.call_target("FUN_18022b620", reinterpret_cast<const void*>(&image::FUN_18022b620));
    // body sha256: 098dca1a1e22c7b14e6af1313fc2c115bc3d8208eeba2705fd7cc6895d71a3c1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed430(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;");
                trace.statement("FUN_18022b620(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed430;
}

// 0x1802ed4e0 FUN_1802ed4e0
// source: re/dump/decompile/0x1802ed4e0_FUN_1802ed4e0.c
// size: 29 bytes; thunk: false
// body sha256: 25155d08363854305e4d206da913e2a87f3e723215a52e35bd5fa0f42e936145
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed4e0{
    "0x1802ed4e0",
    "FUN_1802ed4e0",
    R"F1802ed4e0S(undefined FUN_1802ed4e0())F1802ed4e0S",
    R"B1802ed4e0(// 0x1802ed4e0  FUN_1802ed4e0
// size=29 thunk=false
// signature: undefined FUN_1802ed4e0()
// status: ok


undefined8 FUN_1802ed4e0(void)

{
  return 0;
}


)B1802ed4e0",
    "25155d08363854305e4d206da913e2a87f3e723215a52e35bd5fa0f42e936145",
    R"F1802ed4e0C()F1802ed4e0C",
    R"F1802ed4e0D()F1802ed4e0D",
    R"F1802ed4e0T()F1802ed4e0T",
    R"F1802ed4e0F(10: return 0;)F1802ed4e0F",
    R"F1802ed4e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed4e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed4e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed4e0", "FUN_1802ed4e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 25155d08363854305e4d206da913e2a87f3e723215a52e35bd5fa0f42e936145
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed4e0(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed4e0;
}

// 0x1802ed4fe FUN_1802ed4fe
// source: re/dump/decompile/0x1802ed4fe_FUN_1802ed4fe.c
// size: 29 bytes; thunk: false
// body sha256: feb83d61e4c184c794335c888a9311a77804cc859a0448d29faa76fb2db8b376
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed4fe{
    "0x1802ed4fe",
    "FUN_1802ed4fe",
    R"F1802ed4feS(undefined FUN_1802ed4fe())F1802ed4feS",
    R"B1802ed4fe(// 0x1802ed4fe  FUN_1802ed4fe
// size=29 thunk=false
// signature: undefined FUN_1802ed4fe()
// status: ok


undefined8 FUN_1802ed4fe(void)

{
  return 0;
}


)B1802ed4fe",
    "feb83d61e4c184c794335c888a9311a77804cc859a0448d29faa76fb2db8b376",
    R"F1802ed4feC()F1802ed4feC",
    R"F1802ed4feD()F1802ed4feD",
    R"F1802ed4feT()F1802ed4feT",
    R"F1802ed4feF(10: return 0;)F1802ed4feF",
    R"F1802ed4feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed4feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed4fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed4fe", "FUN_1802ed4fe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: feb83d61e4c184c794335c888a9311a77804cc859a0448d29faa76fb2db8b376
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed4fe(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed4fe;
}

// 0x1802ed51c FUN_1802ed51c
// source: re/dump/decompile/0x1802ed51c_FUN_1802ed51c.c
// size: 56 bytes; thunk: false
// body sha256: b167a6ef93a0fc8628beab5d5f547a57ef8e3fb916cefdc413c7b2b553458fe9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed51c{
    "0x1802ed51c",
    "FUN_1802ed51c",
    R"F1802ed51cS(undefined FUN_1802ed51c())F1802ed51cS",
    R"B1802ed51c(// 0x1802ed51c  FUN_1802ed51c
// size=56 thunk=false
// signature: undefined FUN_1802ed51c()
// status: ok


undefined8 FUN_1802ed51c(void)

{
  DAT_18040a63c = 0;
  DAT_18040a638 = 0;
  DAT_18040a634 = 0;
  return 0;
}


)B1802ed51c",
    "b167a6ef93a0fc8628beab5d5f547a57ef8e3fb916cefdc413c7b2b553458fe9",
    R"F1802ed51cC()F1802ed51cC",
    R"F1802ed51cD(DAT_18040a634
DAT_18040a638
DAT_18040a63c)F1802ed51cD",
    R"F1802ed51cT()F1802ed51cT",
    R"F1802ed51cF(13: return 0;)F1802ed51cF",
    R"F1802ed51cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a634.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a638.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a63c.)F1802ed51cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed51c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed51c", "FUN_1802ed51c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a634.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a638.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a63c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18040a634", static_cast<const void*>(&image::DAT_18040a634));
    trace.data_ref("DAT_18040a638", static_cast<const void*>(&image::DAT_18040a638));
    trace.data_ref("DAT_18040a63c", static_cast<const void*>(&image::DAT_18040a63c));
    // body sha256: b167a6ef93a0fc8628beab5d5f547a57ef8e3fb916cefdc413c7b2b553458fe9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed51c(void)");
        {
            trace.statement("DAT_18040a63c = 0;");
            trace.statement("DAT_18040a638 = 0;");
            trace.statement("DAT_18040a634 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed51c;
}

// 0x1802ed555 FUN_1802ed555
// source: re/dump/decompile/0x1802ed555_FUN_1802ed555.c
// size: 56 bytes; thunk: false
// body sha256: 629daf404295988bfa16db5cdd5dd9a76feb1a198abc4303a14e79a95fa396ca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed555{
    "0x1802ed555",
    "FUN_1802ed555",
    R"F1802ed555S(undefined FUN_1802ed555())F1802ed555S",
    R"B1802ed555(// 0x1802ed555  FUN_1802ed555
// size=56 thunk=false
// signature: undefined FUN_1802ed555()
// status: ok


undefined8 FUN_1802ed555(void)

{
  DAT_18040a63c = 0;
  DAT_18040a638 = 0;
  DAT_18040a634 = 0;
  return 0;
}


)B1802ed555",
    "629daf404295988bfa16db5cdd5dd9a76feb1a198abc4303a14e79a95fa396ca",
    R"F1802ed555C()F1802ed555C",
    R"F1802ed555D(DAT_18040a634
DAT_18040a638
DAT_18040a63c)F1802ed555D",
    R"F1802ed555T()F1802ed555T",
    R"F1802ed555F(13: return 0;)F1802ed555F",
    R"F1802ed555U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a634.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a638.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a63c.)F1802ed555U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed555() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed555", "FUN_1802ed555");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a634.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a638.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a63c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18040a634", static_cast<const void*>(&image::DAT_18040a634));
    trace.data_ref("DAT_18040a638", static_cast<const void*>(&image::DAT_18040a638));
    trace.data_ref("DAT_18040a63c", static_cast<const void*>(&image::DAT_18040a63c));
    // body sha256: 629daf404295988bfa16db5cdd5dd9a76feb1a198abc4303a14e79a95fa396ca
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed555(void)");
        {
            trace.statement("DAT_18040a63c = 0;");
            trace.statement("DAT_18040a638 = 0;");
            trace.statement("DAT_18040a634 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed555;
}

// 0x1802ed590 FUN_1802ed590
// source: re/dump/decompile/0x1802ed590_FUN_1802ed590.c
// size: 38 bytes; thunk: false
// body sha256: 38dbd717d497f33d34f22f871ace61ead133743a2da92ab64b6ca07fc96f629b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed590{
    "0x1802ed590",
    "FUN_1802ed590",
    R"F1802ed590S(undefined FUN_1802ed590())F1802ed590S",
    R"B1802ed590(// 0x1802ed590  FUN_1802ed590
// size=38 thunk=false
// signature: undefined FUN_1802ed590()
// status: ok


void FUN_1802ed590(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802ed590",
    "38dbd717d497f33d34f22f871ace61ead133743a2da92ab64b6ca07fc96f629b",
    R"F1802ed590C()F1802ed590C",
    R"F1802ed590D()F1802ed590D",
    R"F1802ed590T()F1802ed590T",
    R"F1802ed590F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ed590F",
    R"F1802ed590U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed590() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed590", "FUN_1802ed590");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x30));
    // body sha256: 38dbd717d497f33d34f22f871ace61ead133743a2da92ab64b6ca07fc96f629b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed590(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed590;
}

// 0x1802ed5b6 FUN_1802ed5b6
// source: re/dump/decompile/0x1802ed5b6_FUN_1802ed5b6.c
// size: 29 bytes; thunk: false
// body sha256: 595adb9df1d142b0b7b24a0669e9afd3713987e1a4a49d5ec231e72534cea435
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed5b6{
    "0x1802ed5b6",
    "FUN_1802ed5b6",
    R"F1802ed5b6S(undefined FUN_1802ed5b6())F1802ed5b6S",
    R"B1802ed5b6(// 0x1802ed5b6  FUN_1802ed5b6
// size=29 thunk=false
// signature: undefined FUN_1802ed5b6()
// status: ok


undefined8 FUN_1802ed5b6(void)

{
  return 0;
}


)B1802ed5b6",
    "595adb9df1d142b0b7b24a0669e9afd3713987e1a4a49d5ec231e72534cea435",
    R"F1802ed5b6C()F1802ed5b6C",
    R"F1802ed5b6D()F1802ed5b6D",
    R"F1802ed5b6T()F1802ed5b6T",
    R"F1802ed5b6F(10: return 0;)F1802ed5b6F",
    R"F1802ed5b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed5b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed5b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed5b6", "FUN_1802ed5b6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 595adb9df1d142b0b7b24a0669e9afd3713987e1a4a49d5ec231e72534cea435
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed5b6(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed5b6;
}

// 0x1802ed604 FUN_1802ed604
// source: re/dump/decompile/0x1802ed604_FUN_1802ed604.c
// size: 78 bytes; thunk: false
// body sha256: 0e2a7345088846a49b6cf2b3ad29002f4abb53464d254e6ca858528a89581990
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed604{
    "0x1802ed604",
    "FUN_1802ed604",
    R"F1802ed604S(undefined FUN_1802ed604())F1802ed604S",
    R"B1802ed604(// 0x1802ed604  FUN_1802ed604
// size=78 thunk=false
// signature: undefined FUN_1802ed604()
// status: ok


undefined8 FUN_1802ed604(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  return 0;
}


)B1802ed604",
    "0e2a7345088846a49b6cf2b3ad29002f4abb53464d254e6ca858528a89581990",
    R"F1802ed604C()F1802ed604C",
    R"F1802ed604D()F1802ed604D",
    R"F1802ed604T()F1802ed604T",
    R"F1802ed604F(21: return 0;)F1802ed604F",
    R"F1802ed604U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed604U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed604() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed604", "FUN_1802ed604");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0e2a7345088846a49b6cf2b3ad29002f4abb53464d254e6ca858528a89581990
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed604(undefined8 param_1,longlong param_2)");
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("puVar1 = *(undefined8 **)(param_2 + 0x30);");
            trace.statement("*puVar1 = 0;");
            trace.statement("puVar1[1] = 0;");
            trace.statement("puVar1[2] = 0;");
            trace.statement("puVar1[3] = 0;");
            trace.statement("puVar1[2] = 0;");
            trace.statement("puVar1[3] = 0xf;");
            trace.statement("*(undefined1 *)puVar1 = 0;");
            trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed604;
}

// 0x1802ed66c FUN_1802ed66c
// source: re/dump/decompile/0x1802ed66c_FUN_1802ed66c.c
// size: 38 bytes; thunk: false
// body sha256: ce2f969543c160b13863c147ea8c55936e2ffed3dd32a4abb67626e9f262fb23
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed66c{
    "0x1802ed66c",
    "FUN_1802ed66c",
    R"F1802ed66cS(undefined FUN_1802ed66c())F1802ed66cS",
    R"B1802ed66c(// 0x1802ed66c  FUN_1802ed66c
// size=38 thunk=false
// signature: undefined FUN_1802ed66c()
// status: ok


void FUN_1802ed66c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802ed66c",
    "ce2f969543c160b13863c147ea8c55936e2ffed3dd32a4abb67626e9f262fb23",
    R"F1802ed66cC()F1802ed66cC",
    R"F1802ed66cD()F1802ed66cD",
    R"F1802ed66cT()F1802ed66cT",
    R"F1802ed66cF(10: if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
14: return;)F1802ed66cF",
    R"F1802ed66cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed66cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed66c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed66c", "FUN_1802ed66c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: ce2f969543c160b13863c147ea8c55936e2ffed3dd32a4abb67626e9f262fb23
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed66c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x58) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed66c;
}

// 0x1802ed692 FUN_1802ed692
// source: re/dump/decompile/0x1802ed692_FUN_1802ed692.c
// size: 29 bytes; thunk: false
// body sha256: e3008a643397f6e7f1546cd002d16f6917c82661fbd0dfc1434519c267e7510f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed692{
    "0x1802ed692",
    "FUN_1802ed692",
    R"F1802ed692S(undefined FUN_1802ed692())F1802ed692S",
    R"B1802ed692(// 0x1802ed692  FUN_1802ed692
// size=29 thunk=false
// signature: undefined FUN_1802ed692()
// status: ok


undefined8 FUN_1802ed692(void)

{
  return 0;
}


)B1802ed692",
    "e3008a643397f6e7f1546cd002d16f6917c82661fbd0dfc1434519c267e7510f",
    R"F1802ed692C()F1802ed692C",
    R"F1802ed692D()F1802ed692D",
    R"F1802ed692T()F1802ed692T",
    R"F1802ed692F(10: return 0;)F1802ed692F",
    R"F1802ed692U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed692U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed692() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed692", "FUN_1802ed692");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e3008a643397f6e7f1546cd002d16f6917c82661fbd0dfc1434519c267e7510f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed692(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed692;
}

// 0x1802ed6d4 FUN_1802ed6d4
// source: re/dump/decompile/0x1802ed6d4_FUN_1802ed6d4.c
// size: 29 bytes; thunk: false
// body sha256: 03c46b26883b0bd65dc81723947991860c9e4398d5dcc451843dae15fbcc7255
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed6d4{
    "0x1802ed6d4",
    "FUN_1802ed6d4",
    R"F1802ed6d4S(undefined FUN_1802ed6d4())F1802ed6d4S",
    R"B1802ed6d4(// 0x1802ed6d4  FUN_1802ed6d4
// size=29 thunk=false
// signature: undefined FUN_1802ed6d4()
// status: ok


undefined8 FUN_1802ed6d4(void)

{
  return 0;
}


)B1802ed6d4",
    "03c46b26883b0bd65dc81723947991860c9e4398d5dcc451843dae15fbcc7255",
    R"F1802ed6d4C()F1802ed6d4C",
    R"F1802ed6d4D()F1802ed6d4D",
    R"F1802ed6d4T()F1802ed6d4T",
    R"F1802ed6d4F(10: return 0;)F1802ed6d4F",
    R"F1802ed6d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed6d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed6d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed6d4", "FUN_1802ed6d4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 03c46b26883b0bd65dc81723947991860c9e4398d5dcc451843dae15fbcc7255
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed6d4(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed6d4;
}

// 0x1802ed6fe FUN_1802ed6fe
// source: re/dump/decompile/0x1802ed6fe_FUN_1802ed6fe.c
// size: 29 bytes; thunk: false
// body sha256: cff9afa92d278aafdc046d8034eb10b6b67343b9ac374597c4c2ef71c72119a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed6fe{
    "0x1802ed6fe",
    "FUN_1802ed6fe",
    R"F1802ed6feS(undefined FUN_1802ed6fe())F1802ed6feS",
    R"B1802ed6fe(// 0x1802ed6fe  FUN_1802ed6fe
// size=29 thunk=false
// signature: undefined FUN_1802ed6fe()
// status: ok


undefined8 FUN_1802ed6fe(void)

{
  return 0;
}


)B1802ed6fe",
    "cff9afa92d278aafdc046d8034eb10b6b67343b9ac374597c4c2ef71c72119a7",
    R"F1802ed6feC()F1802ed6feC",
    R"F1802ed6feD()F1802ed6feD",
    R"F1802ed6feT()F1802ed6feT",
    R"F1802ed6feF(10: return 0;)F1802ed6feF",
    R"F1802ed6feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed6feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed6fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed6fe", "FUN_1802ed6fe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: cff9afa92d278aafdc046d8034eb10b6b67343b9ac374597c4c2ef71c72119a7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed6fe(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed6fe;
}

// 0x1802ed728 FUN_1802ed728
// source: re/dump/decompile/0x1802ed728_FUN_1802ed728.c
// size: 29 bytes; thunk: false
// body sha256: 1d621e4d6c32294a06d2388fd8797ab9c67ba4d0f41e95de4968144880ea542b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed728{
    "0x1802ed728",
    "FUN_1802ed728",
    R"F1802ed728S(undefined FUN_1802ed728())F1802ed728S",
    R"B1802ed728(// 0x1802ed728  FUN_1802ed728
// size=29 thunk=false
// signature: undefined FUN_1802ed728()
// status: ok


undefined8 FUN_1802ed728(void)

{
  return 0;
}


)B1802ed728",
    "1d621e4d6c32294a06d2388fd8797ab9c67ba4d0f41e95de4968144880ea542b",
    R"F1802ed728C()F1802ed728C",
    R"F1802ed728D()F1802ed728D",
    R"F1802ed728T()F1802ed728T",
    R"F1802ed728F(10: return 0;)F1802ed728F",
    R"F1802ed728U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed728U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed728() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed728", "FUN_1802ed728");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1d621e4d6c32294a06d2388fd8797ab9c67ba4d0f41e95de4968144880ea542b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed728(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed728;
}

// 0x1802ed746 FUN_1802ed746
// source: re/dump/decompile/0x1802ed746_FUN_1802ed746.c
// size: 29 bytes; thunk: false
// body sha256: 581357ffb7b826dd72d11dfe2ca990e2ef399fb6c26752553f481517ac1e71f1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed746{
    "0x1802ed746",
    "FUN_1802ed746",
    R"F1802ed746S(undefined FUN_1802ed746())F1802ed746S",
    R"B1802ed746(// 0x1802ed746  FUN_1802ed746
// size=29 thunk=false
// signature: undefined FUN_1802ed746()
// status: ok


undefined8 FUN_1802ed746(void)

{
  return 0;
}


)B1802ed746",
    "581357ffb7b826dd72d11dfe2ca990e2ef399fb6c26752553f481517ac1e71f1",
    R"F1802ed746C()F1802ed746C",
    R"F1802ed746D()F1802ed746D",
    R"F1802ed746T()F1802ed746T",
    R"F1802ed746F(10: return 0;)F1802ed746F",
    R"F1802ed746U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed746U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed746() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed746", "FUN_1802ed746");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 581357ffb7b826dd72d11dfe2ca990e2ef399fb6c26752553f481517ac1e71f1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed746(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed746;
}

// 0x1802ed764 FUN_1802ed764
// source: re/dump/decompile/0x1802ed764_FUN_1802ed764.c
// size: 29 bytes; thunk: false
// body sha256: 1416307bdc1d64c11efb249a79942a91effcef01c0fe61da334c0d6ac6c5b1ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed764{
    "0x1802ed764",
    "FUN_1802ed764",
    R"F1802ed764S(undefined FUN_1802ed764())F1802ed764S",
    R"B1802ed764(// 0x1802ed764  FUN_1802ed764
// size=29 thunk=false
// signature: undefined FUN_1802ed764()
// status: ok


undefined8 FUN_1802ed764(void)

{
  return 0;
}


)B1802ed764",
    "1416307bdc1d64c11efb249a79942a91effcef01c0fe61da334c0d6ac6c5b1ae",
    R"F1802ed764C()F1802ed764C",
    R"F1802ed764D()F1802ed764D",
    R"F1802ed764T()F1802ed764T",
    R"F1802ed764F(10: return 0;)F1802ed764F",
    R"F1802ed764U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed764U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed764() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed764", "FUN_1802ed764");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1416307bdc1d64c11efb249a79942a91effcef01c0fe61da334c0d6ac6c5b1ae
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed764(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed764;
}

// 0x1802ed7b2 FUN_1802ed7b2
// source: re/dump/decompile/0x1802ed7b2_FUN_1802ed7b2.c
// size: 29 bytes; thunk: false
// body sha256: c9916796d09a66764b30f569f702f9740b2e7dc7dc0d23fef4654550c9700cec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed7b2{
    "0x1802ed7b2",
    "FUN_1802ed7b2",
    R"F1802ed7b2S(undefined FUN_1802ed7b2())F1802ed7b2S",
    R"B1802ed7b2(// 0x1802ed7b2  FUN_1802ed7b2
// size=29 thunk=false
// signature: undefined FUN_1802ed7b2()
// status: ok


undefined8 FUN_1802ed7b2(void)

{
  return 0;
}


)B1802ed7b2",
    "c9916796d09a66764b30f569f702f9740b2e7dc7dc0d23fef4654550c9700cec",
    R"F1802ed7b2C()F1802ed7b2C",
    R"F1802ed7b2D()F1802ed7b2D",
    R"F1802ed7b2T()F1802ed7b2T",
    R"F1802ed7b2F(10: return 0;)F1802ed7b2F",
    R"F1802ed7b2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed7b2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed7b2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed7b2", "FUN_1802ed7b2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c9916796d09a66764b30f569f702f9740b2e7dc7dc0d23fef4654550c9700cec
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed7b2(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed7b2;
}

// 0x1802ed7dc FUN_1802ed7dc
// source: re/dump/decompile/0x1802ed7dc_FUN_1802ed7dc.c
// size: 29 bytes; thunk: false
// body sha256: dc62f3f8fc9fc74c03638802f1c99659944c0f3eaa00f06f97674beff5e04d35
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed7dc{
    "0x1802ed7dc",
    "FUN_1802ed7dc",
    R"F1802ed7dcS(undefined FUN_1802ed7dc())F1802ed7dcS",
    R"B1802ed7dc(// 0x1802ed7dc  FUN_1802ed7dc
// size=29 thunk=false
// signature: undefined FUN_1802ed7dc()
// status: ok


undefined8 FUN_1802ed7dc(void)

{
  return 0;
}


)B1802ed7dc",
    "dc62f3f8fc9fc74c03638802f1c99659944c0f3eaa00f06f97674beff5e04d35",
    R"F1802ed7dcC()F1802ed7dcC",
    R"F1802ed7dcD()F1802ed7dcD",
    R"F1802ed7dcT()F1802ed7dcT",
    R"F1802ed7dcF(10: return 0;)F1802ed7dcF",
    R"F1802ed7dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed7dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed7dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed7dc", "FUN_1802ed7dc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: dc62f3f8fc9fc74c03638802f1c99659944c0f3eaa00f06f97674beff5e04d35
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed7dc(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed7dc;
}

// 0x1802ed806 FUN_1802ed806
// source: re/dump/decompile/0x1802ed806_FUN_1802ed806.c
// size: 29 bytes; thunk: false
// body sha256: 0d60171142516af53a61aabc2d6f1c35da1dd2ff2f00db8d30d909713c42159b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed806{
    "0x1802ed806",
    "FUN_1802ed806",
    R"F1802ed806S(undefined FUN_1802ed806())F1802ed806S",
    R"B1802ed806(// 0x1802ed806  FUN_1802ed806
// size=29 thunk=false
// signature: undefined FUN_1802ed806()
// status: ok


undefined8 FUN_1802ed806(void)

{
  return 0;
}


)B1802ed806",
    "0d60171142516af53a61aabc2d6f1c35da1dd2ff2f00db8d30d909713c42159b",
    R"F1802ed806C()F1802ed806C",
    R"F1802ed806D()F1802ed806D",
    R"F1802ed806T()F1802ed806T",
    R"F1802ed806F(10: return 0;)F1802ed806F",
    R"F1802ed806U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed806U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed806() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed806", "FUN_1802ed806");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0d60171142516af53a61aabc2d6f1c35da1dd2ff2f00db8d30d909713c42159b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed806(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed806;
}

// 0x1802ed830 FUN_1802ed830
// source: re/dump/decompile/0x1802ed830_FUN_1802ed830.c
// size: 29 bytes; thunk: false
// body sha256: 9cf241391ed69e5ed04bf9b40f583f2dc32b43a8b1b29699c4e7a67cae59a8d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed830{
    "0x1802ed830",
    "FUN_1802ed830",
    R"F1802ed830S(undefined FUN_1802ed830())F1802ed830S",
    R"B1802ed830(// 0x1802ed830  FUN_1802ed830
// size=29 thunk=false
// signature: undefined FUN_1802ed830()
// status: ok


undefined8 FUN_1802ed830(void)

{
  return 0;
}


)B1802ed830",
    "9cf241391ed69e5ed04bf9b40f583f2dc32b43a8b1b29699c4e7a67cae59a8d0",
    R"F1802ed830C()F1802ed830C",
    R"F1802ed830D()F1802ed830D",
    R"F1802ed830T()F1802ed830T",
    R"F1802ed830F(10: return 0;)F1802ed830F",
    R"F1802ed830U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed830() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed830", "FUN_1802ed830");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9cf241391ed69e5ed04bf9b40f583f2dc32b43a8b1b29699c4e7a67cae59a8d0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed830(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed830;
}

// 0x1802ed880 FUN_1802ed880
// source: re/dump/decompile/0x1802ed880_FUN_1802ed880.c
// size: 38 bytes; thunk: false
// body sha256: 7dd4b41505022e139443bd18d7f32716f5db8c18cebbeac5d0bce00739b59cdb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed880{
    "0x1802ed880",
    "FUN_1802ed880",
    R"F1802ed880S(undefined FUN_1802ed880())F1802ed880S",
    R"B1802ed880(// 0x1802ed880  FUN_1802ed880
// size=38 thunk=false
// signature: undefined FUN_1802ed880()
// status: ok


void FUN_1802ed880(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802ed880",
    "7dd4b41505022e139443bd18d7f32716f5db8c18cebbeac5d0bce00739b59cdb",
    R"F1802ed880C()F1802ed880C",
    R"F1802ed880D()F1802ed880D",
    R"F1802ed880T()F1802ed880T",
    R"F1802ed880F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ed880F",
    R"F1802ed880U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed880U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed880() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed880", "FUN_1802ed880");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 7dd4b41505022e139443bd18d7f32716f5db8c18cebbeac5d0bce00739b59cdb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed880(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed880;
}

// 0x1802ed8b2 FUN_1802ed8b2
// source: re/dump/decompile/0x1802ed8b2_FUN_1802ed8b2.c
// size: 38 bytes; thunk: false
// body sha256: 7bcbb050dadd389b1c6ba0b5f2ebf7f37548a1d9edb9cf92cfab30e1b568d071
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed8b2{
    "0x1802ed8b2",
    "FUN_1802ed8b2",
    R"F1802ed8b2S(undefined FUN_1802ed8b2())F1802ed8b2S",
    R"B1802ed8b2(// 0x1802ed8b2  FUN_1802ed8b2
// size=38 thunk=false
// signature: undefined FUN_1802ed8b2()
// status: ok


void FUN_1802ed8b2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802ed8b2",
    "7bcbb050dadd389b1c6ba0b5f2ebf7f37548a1d9edb9cf92cfab30e1b568d071",
    R"F1802ed8b2C()F1802ed8b2C",
    R"F1802ed8b2D()F1802ed8b2D",
    R"F1802ed8b2T()F1802ed8b2T",
    R"F1802ed8b2F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ed8b2F",
    R"F1802ed8b2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed8b2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed8b2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed8b2", "FUN_1802ed8b2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: 7bcbb050dadd389b1c6ba0b5f2ebf7f37548a1d9edb9cf92cfab30e1b568d071
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ed8b2(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ed8b2;
}

// 0x1802ed910 FUN_1802ed910
// source: re/dump/decompile/0x1802ed910_FUN_1802ed910.c
// size: 29 bytes; thunk: false
// body sha256: 7bf0a3b1dc03f2b4834296f4e2f57914c0d413eec685ba3dc2630b59a1bf952d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ed910{
    "0x1802ed910",
    "FUN_1802ed910",
    R"F1802ed910S(undefined FUN_1802ed910())F1802ed910S",
    R"B1802ed910(// 0x1802ed910  FUN_1802ed910
// size=29 thunk=false
// signature: undefined FUN_1802ed910()
// status: ok


undefined8 FUN_1802ed910(void)

{
  return 0;
}


)B1802ed910",
    "7bf0a3b1dc03f2b4834296f4e2f57914c0d413eec685ba3dc2630b59a1bf952d",
    R"F1802ed910C()F1802ed910C",
    R"F1802ed910D()F1802ed910D",
    R"F1802ed910T()F1802ed910T",
    R"F1802ed910F(10: return 0;)F1802ed910F",
    R"F1802ed910U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ed910U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ed910() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ed910", "FUN_1802ed910");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7bf0a3b1dc03f2b4834296f4e2f57914c0d413eec685ba3dc2630b59a1bf952d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ed910(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ed910;
}

// 0x1802edb98 FUN_1802edb98
// source: re/dump/decompile/0x1802edb98_FUN_1802edb98.c
// size: 38 bytes; thunk: false
// body sha256: ba3995c01bb56285c83fcc6640e9e097b12dafeaa33a3c04a825bb977844d9c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edb98{
    "0x1802edb98",
    "FUN_1802edb98",
    R"F1802edb98S(undefined FUN_1802edb98())F1802edb98S",
    R"B1802edb98(// 0x1802edb98  FUN_1802edb98
// size=38 thunk=false
// signature: undefined FUN_1802edb98()
// status: ok


void FUN_1802edb98(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802edb98",
    "ba3995c01bb56285c83fcc6640e9e097b12dafeaa33a3c04a825bb977844d9c7",
    R"F1802edb98C()F1802edb98C",
    R"F1802edb98D()F1802edb98D",
    R"F1802edb98T()F1802edb98T",
    R"F1802edb98F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802edb98F",
    R"F1802edb98U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edb98U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edb98() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edb98", "FUN_1802edb98");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: ba3995c01bb56285c83fcc6640e9e097b12dafeaa33a3c04a825bb977844d9c7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edb98(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edb98;
}

// 0x1802edbbe FUN_1802edbbe
// source: re/dump/decompile/0x1802edbbe_FUN_1802edbbe.c
// size: 38 bytes; thunk: false
// body sha256: 63183f1c34da8e5e3eaed4b534077e0baeb6e070186cca0d791b27fc39af47c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edbbe{
    "0x1802edbbe",
    "FUN_1802edbbe",
    R"F1802edbbeS(undefined FUN_1802edbbe())F1802edbbeS",
    R"B1802edbbe(// 0x1802edbbe  FUN_1802edbbe
// size=38 thunk=false
// signature: undefined FUN_1802edbbe()
// status: ok


void FUN_1802edbbe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802edbbe",
    "63183f1c34da8e5e3eaed4b534077e0baeb6e070186cca0d791b27fc39af47c9",
    R"F1802edbbeC()F1802edbbeC",
    R"F1802edbbeD()F1802edbbeD",
    R"F1802edbbeT()F1802edbbeT",
    R"F1802edbbeF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802edbbeF",
    R"F1802edbbeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edbbeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edbbe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edbbe", "FUN_1802edbbe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 63183f1c34da8e5e3eaed4b534077e0baeb6e070186cca0d791b27fc39af47c9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edbbe(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edbbe;
}

// 0x1802edbf0 FUN_1802edbf0
// source: re/dump/decompile/0x1802edbf0_FUN_1802edbf0.c
// size: 41 bytes; thunk: false
// body sha256: 2af262eb3359a4cdbb7e105831038359aa425702dc5310d51bf456b72d8e7e8d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edbf0{
    "0x1802edbf0",
    "FUN_1802edbf0",
    R"F1802edbf0S(undefined FUN_1802edbf0())F1802edbf0S",
    R"B1802edbf0(// 0x1802edbf0  FUN_1802edbf0
// size=41 thunk=false
// signature: undefined FUN_1802edbf0()
// status: ok


void FUN_1802edbf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802edbf0",
    "2af262eb3359a4cdbb7e105831038359aa425702dc5310d51bf456b72d8e7e8d",
    R"F1802edbf0C()F1802edbf0C",
    R"F1802edbf0D()F1802edbf0D",
    R"F1802edbf0T()F1802edbf0T",
    R"F1802edbf0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802edbf0F",
    R"F1802edbf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edbf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edbf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edbf0", "FUN_1802edbf0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 2af262eb3359a4cdbb7e105831038359aa425702dc5310d51bf456b72d8e7e8d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edbf0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edbf0;
}

// 0x1802edc19 FUN_1802edc19
// source: re/dump/decompile/0x1802edc19_FUN_1802edc19.c
// size: 38 bytes; thunk: false
// body sha256: 0b910605ffe95c93a0a96a182a7d7ca6df033127327706dc7b789a1192163aaa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edc19{
    "0x1802edc19",
    "FUN_1802edc19",
    R"F1802edc19S(undefined FUN_1802edc19())F1802edc19S",
    R"B1802edc19(// 0x1802edc19  FUN_1802edc19
// size=38 thunk=false
// signature: undefined FUN_1802edc19()
// status: ok


void FUN_1802edc19(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802edc19",
    "0b910605ffe95c93a0a96a182a7d7ca6df033127327706dc7b789a1192163aaa",
    R"F1802edc19C()F1802edc19C",
    R"F1802edc19D()F1802edc19D",
    R"F1802edc19T()F1802edc19T",
    R"F1802edc19F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802edc19F",
    R"F1802edc19U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edc19U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edc19() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edc19", "FUN_1802edc19");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 0b910605ffe95c93a0a96a182a7d7ca6df033127327706dc7b789a1192163aaa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edc19(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edc19;
}

// 0x1802edc3f FUN_1802edc3f
// source: re/dump/decompile/0x1802edc3f_FUN_1802edc3f.c
// size: 38 bytes; thunk: false
// body sha256: 2e35c46d258473a77e19bcae315f63df107b462d41bfdd88f259492e5c511dac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edc3f{
    "0x1802edc3f",
    "FUN_1802edc3f",
    R"F1802edc3fS(undefined FUN_1802edc3f())F1802edc3fS",
    R"B1802edc3f(// 0x1802edc3f  FUN_1802edc3f
// size=38 thunk=false
// signature: undefined FUN_1802edc3f()
// status: ok


void FUN_1802edc3f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802edc3f",
    "2e35c46d258473a77e19bcae315f63df107b462d41bfdd88f259492e5c511dac",
    R"F1802edc3fC()F1802edc3fC",
    R"F1802edc3fD()F1802edc3fD",
    R"F1802edc3fT()F1802edc3fT",
    R"F1802edc3fF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802edc3fF",
    R"F1802edc3fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edc3fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edc3f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edc3f", "FUN_1802edc3f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 2e35c46d258473a77e19bcae315f63df107b462d41bfdd88f259492e5c511dac
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edc3f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edc3f;
}

// 0x1802edc88 FUN_1802edc88
// source: re/dump/decompile/0x1802edc88_FUN_1802edc88.c
// size: 38 bytes; thunk: false
// body sha256: dd5da7565ceccbf3020c44741985ae4cd503d86d09a13407a17acd47f2e668b3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edc88{
    "0x1802edc88",
    "FUN_1802edc88",
    R"F1802edc88S(undefined FUN_1802edc88())F1802edc88S",
    R"B1802edc88(// 0x1802edc88  FUN_1802edc88
// size=38 thunk=false
// signature: undefined FUN_1802edc88()
// status: ok


void FUN_1802edc88(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802edc88",
    "dd5da7565ceccbf3020c44741985ae4cd503d86d09a13407a17acd47f2e668b3",
    R"F1802edc88C()F1802edc88C",
    R"F1802edc88D()F1802edc88D",
    R"F1802edc88T()F1802edc88T",
    R"F1802edc88F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802edc88F",
    R"F1802edc88U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edc88U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edc88() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edc88", "FUN_1802edc88");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: dd5da7565ceccbf3020c44741985ae4cd503d86d09a13407a17acd47f2e668b3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edc88(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edc88;
}

// 0x1802edd0c FUN_1802edd0c
// source: re/dump/decompile/0x1802edd0c_FUN_1802edd0c.c
// size: 29 bytes; thunk: false
// body sha256: e66b706352e804250786bf1f8e41c40cb609f2bd550ca144d2e70647f58794f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edd0c{
    "0x1802edd0c",
    "FUN_1802edd0c",
    R"F1802edd0cS(undefined FUN_1802edd0c())F1802edd0cS",
    R"B1802edd0c(// 0x1802edd0c  FUN_1802edd0c
// size=29 thunk=false
// signature: undefined FUN_1802edd0c()
// status: ok


undefined8 FUN_1802edd0c(void)

{
  return 0;
}


)B1802edd0c",
    "e66b706352e804250786bf1f8e41c40cb609f2bd550ca144d2e70647f58794f6",
    R"F1802edd0cC()F1802edd0cC",
    R"F1802edd0cD()F1802edd0cD",
    R"F1802edd0cT()F1802edd0cT",
    R"F1802edd0cF(10: return 0;)F1802edd0cF",
    R"F1802edd0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edd0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edd0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edd0c", "FUN_1802edd0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e66b706352e804250786bf1f8e41c40cb609f2bd550ca144d2e70647f58794f6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802edd0c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802edd0c;
}

// 0x1802edd48 FUN_1802edd48
// source: re/dump/decompile/0x1802edd48_FUN_1802edd48.c
// size: 38 bytes; thunk: false
// body sha256: 022b3e61b9228046d311826153362d82bd652d1475b7ad9f126cbb5e9e593a18
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edd48{
    "0x1802edd48",
    "FUN_1802edd48",
    R"F1802edd48S(undefined FUN_1802edd48())F1802edd48S",
    R"B1802edd48(// 0x1802edd48  FUN_1802edd48
// size=38 thunk=false
// signature: undefined FUN_1802edd48()
// status: ok


void FUN_1802edd48(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802edd48",
    "022b3e61b9228046d311826153362d82bd652d1475b7ad9f126cbb5e9e593a18",
    R"F1802edd48C()F1802edd48C",
    R"F1802edd48D()F1802edd48D",
    R"F1802edd48T()F1802edd48T",
    R"F1802edd48F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802edd48F",
    R"F1802edd48U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edd48U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edd48() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edd48", "FUN_1802edd48");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: 022b3e61b9228046d311826153362d82bd652d1475b7ad9f126cbb5e9e593a18
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edd48(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edd48;
}

// 0x1802eddcc FUN_1802eddcc
// source: re/dump/decompile/0x1802eddcc_FUN_1802eddcc.c
// size: 29 bytes; thunk: false
// body sha256: ce334eab6d50f429361e2d5de9298bc43573ac1edbae8102aec1604fdaedf65a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eddcc{
    "0x1802eddcc",
    "FUN_1802eddcc",
    R"F1802eddccS(undefined FUN_1802eddcc())F1802eddccS",
    R"B1802eddcc(// 0x1802eddcc  FUN_1802eddcc
// size=29 thunk=false
// signature: undefined FUN_1802eddcc()
// status: ok


undefined8 FUN_1802eddcc(void)

{
  return 0;
}


)B1802eddcc",
    "ce334eab6d50f429361e2d5de9298bc43573ac1edbae8102aec1604fdaedf65a",
    R"F1802eddccC()F1802eddccC",
    R"F1802eddccD()F1802eddccD",
    R"F1802eddccT()F1802eddccT",
    R"F1802eddccF(10: return 0;)F1802eddccF",
    R"F1802eddccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eddccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eddcc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eddcc", "FUN_1802eddcc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ce334eab6d50f429361e2d5de9298bc43573ac1edbae8102aec1604fdaedf65a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802eddcc(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802eddcc;
}

// 0x1802ede0e FUN_1802ede0e
// source: re/dump/decompile/0x1802ede0e_FUN_1802ede0e.c
// size: 38 bytes; thunk: false
// body sha256: 6d4958135fb1e4238a75f3fa22381db401af53bad3e9fd750f44b81bd2ebb784
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ede0e{
    "0x1802ede0e",
    "FUN_1802ede0e",
    R"F1802ede0eS(undefined FUN_1802ede0e())F1802ede0eS",
    R"B1802ede0e(// 0x1802ede0e  FUN_1802ede0e
// size=38 thunk=false
// signature: undefined FUN_1802ede0e()
// status: ok


void FUN_1802ede0e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B1802ede0e",
    "6d4958135fb1e4238a75f3fa22381db401af53bad3e9fd750f44b81bd2ebb784",
    R"F1802ede0eC()F1802ede0eC",
    R"F1802ede0eD()F1802ede0eD",
    R"F1802ede0eT()F1802ede0eT",
    R"F1802ede0eF(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ede0eF",
    R"F1802ede0eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ede0eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ede0e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ede0e", "FUN_1802ede0e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x78);
    // body sha256: 6d4958135fb1e4238a75f3fa22381db401af53bad3e9fd750f44b81bd2ebb784
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ede0e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ede0e;
}

// 0x1802ede34 FUN_1802ede34
// source: re/dump/decompile/0x1802ede34_FUN_1802ede34.c
// size: 41 bytes; thunk: false
// body sha256: 84e1526ff9b33f6fd41b3bef9bbc0d9ba624fe0f6426f70b9f771a185ab4cac2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ede34{
    "0x1802ede34",
    "FUN_1802ede34",
    R"F1802ede34S(undefined FUN_1802ede34())F1802ede34S",
    R"B1802ede34(// 0x1802ede34  FUN_1802ede34
// size=41 thunk=false
// signature: undefined FUN_1802ede34()
// status: ok


void FUN_1802ede34(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


)B1802ede34",
    "84e1526ff9b33f6fd41b3bef9bbc0d9ba624fe0f6426f70b9f771a185ab4cac2",
    R"F1802ede34C()F1802ede34C",
    R"F1802ede34D()F1802ede34D",
    R"F1802ede34T()F1802ede34T",
    R"F1802ede34F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802ede34F",
    R"F1802ede34U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ede34U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ede34() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ede34", "FUN_1802ede34");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x168);
    // body sha256: 84e1526ff9b33f6fd41b3bef9bbc0d9ba624fe0f6426f70b9f771a185ab4cac2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ede34(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ede34;
}

// 0x1802edef0 FUN_1802edef0
// source: re/dump/decompile/0x1802edef0_FUN_1802edef0.c
// size: 47 bytes; thunk: false
// body sha256: d590cf69cb49c5abf6430c008fef6d418a5ed28ed63c244a09541722e6f426e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edef0{
    "0x1802edef0",
    "FUN_1802edef0",
    R"F1802edef0S(undefined FUN_1802edef0())F1802edef0S",
    R"B1802edef0(// 0x1802edef0  FUN_1802edef0
// size=47 thunk=false
// signature: undefined FUN_1802edef0()
// status: ok


void FUN_1802edef0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 200));
  }
  return;
}


)B1802edef0",
    "d590cf69cb49c5abf6430c008fef6d418a5ed28ed63c244a09541722e6f426e4",
    R"F1802edef0C()F1802edef0C",
    R"F1802edef0D()F1802edef0D",
    R"F1802edef0T()F1802edef0T",
    R"F1802edef0F(10: if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
14: return;)F1802edef0F",
    R"F1802edef0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edef0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edef0", "FUN_1802edef0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 200));
    // body sha256: d590cf69cb49c5abf6430c008fef6d418a5ed28ed63c244a09541722e6f426e4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edef0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x80) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x80) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 200));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edef0;
}

// 0x1802edf2b FUN_1802edf2b
// source: re/dump/decompile/0x1802edf2b_FUN_1802edf2b.c
// size: 47 bytes; thunk: false
// body sha256: 32ccff451b38c405f0e731741b3c38f07dfb8add477d3ac4fb30777bdf60e5cb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edf2b{
    "0x1802edf2b",
    "FUN_1802edf2b",
    R"F1802edf2bS(undefined FUN_1802edf2b())F1802edf2bS",
    R"B1802edf2b(// 0x1802edf2b  FUN_1802edf2b
// size=47 thunk=false
// signature: undefined FUN_1802edf2b()
// status: ok


void FUN_1802edf2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 2) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 200));
  }
  return;
}


)B1802edf2b",
    "32ccff451b38c405f0e731741b3c38f07dfb8add477d3ac4fb30777bdf60e5cb",
    R"F1802edf2bC()F1802edf2bC",
    R"F1802edf2bD()F1802edf2bD",
    R"F1802edf2bT()F1802edf2bT",
    R"F1802edf2bF(10: if ((*(uint *)(param_2 + 0x80) & 2) != 0) {
14: return;)F1802edf2bF",
    R"F1802edf2bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edf2bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edf2b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edf2b", "FUN_1802edf2b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 200));
    // body sha256: 32ccff451b38c405f0e731741b3c38f07dfb8add477d3ac4fb30777bdf60e5cb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edf2b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x80) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x80) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 200));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edf2b;
}

// 0x1802edf60 FUN_1802edf60
// source: re/dump/decompile/0x1802edf60_FUN_1802edf60.c
// size: 41 bytes; thunk: false
// body sha256: 96c95dc62f035b5dc10b44fae800a4e3fd1cf154c64b672c0e9bf578489c4ec8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edf60{
    "0x1802edf60",
    "FUN_1802edf60",
    R"F1802edf60S(undefined FUN_1802edf60())F1802edf60S",
    R"B1802edf60(// 0x1802edf60  FUN_1802edf60
// size=41 thunk=false
// signature: undefined FUN_1802edf60()
// status: ok


void FUN_1802edf60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B1802edf60",
    "96c95dc62f035b5dc10b44fae800a4e3fd1cf154c64b672c0e9bf578489c4ec8",
    R"F1802edf60C()F1802edf60C",
    R"F1802edf60D()F1802edf60D",
    R"F1802edf60T()F1802edf60T",
    R"F1802edf60F(10: if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
14: return;)F1802edf60F",
    R"F1802edf60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edf60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edf60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edf60", "FUN_1802edf60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x98);
    // body sha256: 96c95dc62f035b5dc10b44fae800a4e3fd1cf154c64b672c0e9bf578489c4ec8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edf60(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edf60;
}

// 0x1802edf89 FUN_1802edf89
// source: re/dump/decompile/0x1802edf89_FUN_1802edf89.c
// size: 41 bytes; thunk: false
// body sha256: 57824460ea0335143e70eb793cb667d22a6a0f97342d1401cbdb11930f950980
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edf89{
    "0x1802edf89",
    "FUN_1802edf89",
    R"F1802edf89S(undefined FUN_1802edf89())F1802edf89S",
    R"B1802edf89(// 0x1802edf89  FUN_1802edf89
// size=41 thunk=false
// signature: undefined FUN_1802edf89()
// status: ok


void FUN_1802edf89(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802edf89",
    "57824460ea0335143e70eb793cb667d22a6a0f97342d1401cbdb11930f950980",
    R"F1802edf89C()F1802edf89C",
    R"F1802edf89D()F1802edf89D",
    R"F1802edf89T()F1802edf89T",
    R"F1802edf89F(10: if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
14: return;)F1802edf89F",
    R"F1802edf89U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edf89U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edf89() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edf89", "FUN_1802edf89");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x120);
    // body sha256: 57824460ea0335143e70eb793cb667d22a6a0f97342d1401cbdb11930f950980
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edf89(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edf89;
}

// 0x1802edfb2 FUN_1802edfb2
// source: re/dump/decompile/0x1802edfb2_FUN_1802edfb2.c
// size: 41 bytes; thunk: false
// body sha256: a61c96b01031858083fd28b8523334219babc1163e9c498c3176fcf0a192c7f5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edfb2{
    "0x1802edfb2",
    "FUN_1802edfb2",
    R"F1802edfb2S(undefined FUN_1802edfb2())F1802edfb2S",
    R"B1802edfb2(// 0x1802edfb2  FUN_1802edfb2
// size=41 thunk=false
// signature: undefined FUN_1802edfb2()
// status: ok


void FUN_1802edfb2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 4) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802edfb2",
    "a61c96b01031858083fd28b8523334219babc1163e9c498c3176fcf0a192c7f5",
    R"F1802edfb2C()F1802edfb2C",
    R"F1802edfb2D()F1802edfb2D",
    R"F1802edfb2T()F1802edfb2T",
    R"F1802edfb2F(10: if ((*(uint *)(param_2 + 0x50) & 4) != 0) {
14: return;)F1802edfb2F",
    R"F1802edfb2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edfb2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edfb2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edfb2", "FUN_1802edfb2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x100);
    // body sha256: a61c96b01031858083fd28b8523334219babc1163e9c498c3176fcf0a192c7f5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edfb2(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edfb2;
}

// 0x1802edfdb FUN_1802edfdb
// source: re/dump/decompile/0x1802edfdb_FUN_1802edfdb.c
// size: 41 bytes; thunk: false
// body sha256: 9dc6d9e4ad12a38b9b66575450aebabcb1717eb8291634f9058471b7f3fc9913
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802edfdb{
    "0x1802edfdb",
    "FUN_1802edfdb",
    R"F1802edfdbS(undefined FUN_1802edfdb())F1802edfdbS",
    R"B1802edfdb(// 0x1802edfdb  FUN_1802edfdb
// size=41 thunk=false
// signature: undefined FUN_1802edfdb()
// status: ok


void FUN_1802edfdb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802edfdb",
    "9dc6d9e4ad12a38b9b66575450aebabcb1717eb8291634f9058471b7f3fc9913",
    R"F1802edfdbC()F1802edfdbC",
    R"F1802edfdbD()F1802edfdbD",
    R"F1802edfdbT()F1802edfdbT",
    R"F1802edfdbF(10: if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
14: return;)F1802edfdbF",
    R"F1802edfdbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802edfdbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802edfdb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802edfdb", "FUN_1802edfdb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe0);
    // body sha256: 9dc6d9e4ad12a38b9b66575450aebabcb1717eb8291634f9058471b7f3fc9913
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802edfdb(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802edfdb;
}

// 0x1802ee004 FUN_1802ee004
// source: re/dump/decompile/0x1802ee004_FUN_1802ee004.c
// size: 38 bytes; thunk: false
// body sha256: 0fa8e86a9598a01175cc74244a89c707a95a7b524452ea72a15869941b429ccc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee004{
    "0x1802ee004",
    "FUN_1802ee004",
    R"F1802ee004S(undefined FUN_1802ee004())F1802ee004S",
    R"B1802ee004(// 0x1802ee004  FUN_1802ee004
// size=38 thunk=false
// signature: undefined FUN_1802ee004()
// status: ok


void FUN_1802ee004(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B1802ee004",
    "0fa8e86a9598a01175cc74244a89c707a95a7b524452ea72a15869941b429ccc",
    R"F1802ee004C()F1802ee004C",
    R"F1802ee004D()F1802ee004D",
    R"F1802ee004T()F1802ee004T",
    R"F1802ee004F(10: if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
14: return;)F1802ee004F",
    R"F1802ee004U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee004U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee004() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee004", "FUN_1802ee004");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x78);
    // body sha256: 0fa8e86a9598a01175cc74244a89c707a95a7b524452ea72a15869941b429ccc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ee004(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee004;
}

// 0x1802ee02a FUN_1802ee02a
// source: re/dump/decompile/0x1802ee02a_FUN_1802ee02a.c
// size: 41 bytes; thunk: false
// body sha256: 891b74d61b94609a74c4387e952e7a4fb12f6216978524c6d525029c36716e01
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee02a{
    "0x1802ee02a",
    "FUN_1802ee02a",
    R"F1802ee02aS(undefined FUN_1802ee02a())F1802ee02aS",
    R"B1802ee02a(// 0x1802ee02a  FUN_1802ee02a
// size=41 thunk=false
// signature: undefined FUN_1802ee02a()
// status: ok


void FUN_1802ee02a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x20) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802ee02a",
    "891b74d61b94609a74c4387e952e7a4fb12f6216978524c6d525029c36716e01",
    R"F1802ee02aC()F1802ee02aC",
    R"F1802ee02aD()F1802ee02aD",
    R"F1802ee02aT()F1802ee02aT",
    R"F1802ee02aF(10: if ((*(uint *)(param_2 + 0x50) & 0x20) != 0) {
14: return;)F1802ee02aF",
    R"F1802ee02aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee02aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee02a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee02a", "FUN_1802ee02a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xc0);
    // body sha256: 891b74d61b94609a74c4387e952e7a4fb12f6216978524c6d525029c36716e01
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ee02a(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x50) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee02a;
}

// 0x1802ee0a0 FUN_1802ee0a0
// source: re/dump/decompile/0x1802ee0a0_FUN_1802ee0a0.c
// size: 38 bytes; thunk: false
// body sha256: a814b8062478526ec36b00b5cdcb713cf20c8175ccdc04b631b0d183d85f6899
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee0a0{
    "0x1802ee0a0",
    "FUN_1802ee0a0",
    R"F1802ee0a0S(undefined FUN_1802ee0a0())F1802ee0a0S",
    R"B1802ee0a0(// 0x1802ee0a0  FUN_1802ee0a0
// size=38 thunk=false
// signature: undefined FUN_1802ee0a0()
// status: ok


void FUN_1802ee0a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}


)B1802ee0a0",
    "a814b8062478526ec36b00b5cdcb713cf20c8175ccdc04b631b0d183d85f6899",
    R"F1802ee0a0C()F1802ee0a0C",
    R"F1802ee0a0D()F1802ee0a0D",
    R"F1802ee0a0T()F1802ee0a0T",
    R"F1802ee0a0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ee0a0F",
    R"F1802ee0a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee0a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee0a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee0a0", "FUN_1802ee0a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", *(undefined8 *)(param_2 + 0x68));
    // body sha256: a814b8062478526ec36b00b5cdcb713cf20c8175ccdc04b631b0d183d85f6899
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ee0a0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x68));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee0a0;
}

// 0x1802ee0c6 FUN_1802ee0c6
// source: re/dump/decompile/0x1802ee0c6_FUN_1802ee0c6.c
// size: 38 bytes; thunk: false
// body sha256: 943dc80db4014bab10db768ec7d20121ef4bc8417ba9aacda39769e9b43bc20e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee0c6{
    "0x1802ee0c6",
    "FUN_1802ee0c6",
    R"F1802ee0c6S(undefined FUN_1802ee0c6())F1802ee0c6S",
    R"B1802ee0c6(// 0x1802ee0c6  FUN_1802ee0c6
// size=38 thunk=false
// signature: undefined FUN_1802ee0c6()
// status: ok


void FUN_1802ee0c6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ee0c6",
    "943dc80db4014bab10db768ec7d20121ef4bc8417ba9aacda39769e9b43bc20e",
    R"F1802ee0c6C()F1802ee0c6C",
    R"F1802ee0c6D()F1802ee0c6D",
    R"F1802ee0c6T()F1802ee0c6T",
    R"F1802ee0c6F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802ee0c6F",
    R"F1802ee0c6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee0c6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee0c6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee0c6", "FUN_1802ee0c6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 943dc80db4014bab10db768ec7d20121ef4bc8417ba9aacda39769e9b43bc20e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ee0c6(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee0c6;
}

// 0x1802ee0ec FUN_1802ee0ec
// source: re/dump/decompile/0x1802ee0ec_FUN_1802ee0ec.c
// size: 38 bytes; thunk: false
// body sha256: 4566cb8d0a8198808dc489accc6a436ed53626a88f39b0e5a814957d6ec5a2ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee0ec{
    "0x1802ee0ec",
    "FUN_1802ee0ec",
    R"F1802ee0ecS(undefined FUN_1802ee0ec())F1802ee0ecS",
    R"B1802ee0ec(// 0x1802ee0ec  FUN_1802ee0ec
// size=38 thunk=false
// signature: undefined FUN_1802ee0ec()
// status: ok


void FUN_1802ee0ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ee0ec",
    "4566cb8d0a8198808dc489accc6a436ed53626a88f39b0e5a814957d6ec5a2ba",
    R"F1802ee0ecC()F1802ee0ecC",
    R"F1802ee0ecD()F1802ee0ecD",
    R"F1802ee0ecT()F1802ee0ecT",
    R"F1802ee0ecF(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802ee0ecF",
    R"F1802ee0ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee0ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee0ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee0ec", "FUN_1802ee0ec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 4566cb8d0a8198808dc489accc6a436ed53626a88f39b0e5a814957d6ec5a2ba
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ee0ec(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee0ec;
}

}  // namespace sf::reconstructed
