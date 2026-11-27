// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802e1732 FUN_1802e1732
// source: re/dump/decompile/0x1802e1732_FUN_1802e1732.c
// size: 46 bytes; thunk: false
// body sha256: 638d4278b194f5ddaba7ad3b5a0103545530b505a23ea172809d4e9f1b5fb510
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1732{
    "0x1802e1732",
    "FUN_1802e1732",
    R"F1802e1732S(undefined FUN_1802e1732())F1802e1732S",
    R"B1802e1732(// 0x1802e1732  FUN_1802e1732
// size=46 thunk=false
// signature: undefined FUN_1802e1732()
// status: ok


undefined8 FUN_1802e1732(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x138) + 0xc) = 0;
  return 0;
}


)B1802e1732",
    "638d4278b194f5ddaba7ad3b5a0103545530b505a23ea172809d4e9f1b5fb510",
    R"F1802e1732C()F1802e1732C",
    R"F1802e1732D()F1802e1732D",
    R"F1802e1732T()F1802e1732T",
    R"F1802e1732F(11: return 0;)F1802e1732F",
    R"F1802e1732U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1732U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1732() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1732", "FUN_1802e1732");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 638d4278b194f5ddaba7ad3b5a0103545530b505a23ea172809d4e9f1b5fb510
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(*(longlong *)(param_2 + 0x138) + 0xc) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1732;
}

// 0x1802e1788 FUN_1802e1788
// source: re/dump/decompile/0x1802e1788_FUN_1802e1788.c
// size: 35 bytes; thunk: false
// body sha256: e89d534f12df54b13f876500e00d154029c68fca8847bedafc18bb9e6bd1354e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1788{
    "0x1802e1788",
    "FUN_1802e1788",
    R"F1802e1788S(undefined FUN_1802e1788())F1802e1788S",
    R"B1802e1788(// 0x1802e1788  FUN_1802e1788
// size=35 thunk=false
// signature: undefined FUN_1802e1788()
// status: ok


undefined8 FUN_1802e1788(void)

{
  return 0;
}


)B1802e1788",
    "e89d534f12df54b13f876500e00d154029c68fca8847bedafc18bb9e6bd1354e",
    R"F1802e1788C()F1802e1788C",
    R"F1802e1788D()F1802e1788D",
    R"F1802e1788T()F1802e1788T",
    R"F1802e1788F(10: return 0;)F1802e1788F",
    R"F1802e1788U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1788U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1788() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1788", "FUN_1802e1788");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e89d534f12df54b13f876500e00d154029c68fca8847bedafc18bb9e6bd1354e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1788;
}

// 0x1802e17b0 FUN_1802e17b0
// source: re/dump/decompile/0x1802e17b0_FUN_1802e17b0.c
// size: 38 bytes; thunk: false
// body sha256: acea3a58f9c9bffcf891ad49efab8825e33099b566d05771b1135bea4304e15a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e17b0{
    "0x1802e17b0",
    "FUN_1802e17b0",
    R"F1802e17b0S(undefined FUN_1802e17b0())F1802e17b0S",
    R"B1802e17b0(// 0x1802e17b0  FUN_1802e17b0
// size=38 thunk=false
// signature: undefined FUN_1802e17b0()
// status: ok


void FUN_1802e17b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802e17b0",
    "acea3a58f9c9bffcf891ad49efab8825e33099b566d05771b1135bea4304e15a",
    R"F1802e17b0C()F1802e17b0C",
    R"F1802e17b0D()F1802e17b0D",
    R"F1802e17b0T()F1802e17b0T",
    R"F1802e17b0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e17b0F",
    R"F1802e17b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e17b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e17b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e17b0", "FUN_1802e17b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18020d5c0", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: acea3a58f9c9bffcf891ad49efab8825e33099b566d05771b1135bea4304e15a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e17b0;
}

// 0x1802e17d6 FUN_1802e17d6
// source: re/dump/decompile/0x1802e17d6_FUN_1802e17d6.c
// size: 41 bytes; thunk: false
// body sha256: d45026d0bf8cf1a6586b43d36382b6ea2ef71f50346e157f557d677a54bc5eb5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e17d6{
    "0x1802e17d6",
    "FUN_1802e17d6",
    R"F1802e17d6S(undefined FUN_1802e17d6())F1802e17d6S",
    R"B1802e17d6(// 0x1802e17d6  FUN_1802e17d6
// size=41 thunk=false
// signature: undefined FUN_1802e17d6()
// status: ok


void FUN_1802e17d6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1802e17d6",
    "d45026d0bf8cf1a6586b43d36382b6ea2ef71f50346e157f557d677a54bc5eb5",
    R"F1802e17d6C()F1802e17d6C",
    R"F1802e17d6D()F1802e17d6D",
    R"F1802e17d6T()F1802e17d6T",
    R"F1802e17d6F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e17d6F",
    R"F1802e17d6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e17d6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e17d6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e17d6", "FUN_1802e17d6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x140);
    // body sha256: d45026d0bf8cf1a6586b43d36382b6ea2ef71f50346e157f557d677a54bc5eb5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e17d6;
}

// 0x1802e1800 FUN_1802e1800
// source: re/dump/decompile/0x1802e1800_FUN_1802e1800.c
// size: 22 bytes; thunk: false
// body sha256: c5fa663c74d7542651fe49c2673fbe5af5ec1ca7be9df143e3b4f5212f6ef164
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1800{
    "0x1802e1800",
    "FUN_1802e1800",
    R"F1802e1800S(undefined FUN_1802e1800())F1802e1800S",
    R"B1802e1800(// 0x1802e1800  FUN_1802e1800
// size=22 thunk=false
// signature: undefined FUN_1802e1800()
// status: ok


void FUN_1802e1800(void)

{
  DAT_1805bb708 = DAT_1805bb708 & 0xfffffffe;
  return;
}


)B1802e1800",
    "c5fa663c74d7542651fe49c2673fbe5af5ec1ca7be9df143e3b4f5212f6ef164",
    R"F1802e1800C()F1802e1800C",
    R"F1802e1800D(DAT_1805bb708)F1802e1800D",
    R"F1802e1800T()F1802e1800T",
    R"F1802e1800F(11: return;)F1802e1800F",
    R"F1802e1800U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805bb708.)F1802e1800U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1800() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1800", "FUN_1802e1800");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805bb708.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805bb708", static_cast<const void*>(&image::DAT_1805bb708));
    // body sha256: c5fa663c74d7542651fe49c2673fbe5af5ec1ca7be9df143e3b4f5212f6ef164
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805bb708 = DAT_1805bb708 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802e1800;
}

// 0x1802e1816 FUN_1802e1816
// source: re/dump/decompile/0x1802e1816_FUN_1802e1816.c
// size: 22 bytes; thunk: false
// body sha256: fbe0198b28a584d6bf897634b336a8cbf2955c71d44eed49096615491e236f27
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1816{
    "0x1802e1816",
    "FUN_1802e1816",
    R"F1802e1816S(undefined FUN_1802e1816())F1802e1816S",
    R"B1802e1816(// 0x1802e1816  FUN_1802e1816
// size=22 thunk=false
// signature: undefined FUN_1802e1816()
// status: ok


void FUN_1802e1816(void)

{
  DAT_1805bb708 = DAT_1805bb708 & 0xfffffffd;
  return;
}


)B1802e1816",
    "fbe0198b28a584d6bf897634b336a8cbf2955c71d44eed49096615491e236f27",
    R"F1802e1816C()F1802e1816C",
    R"F1802e1816D(DAT_1805bb708)F1802e1816D",
    R"F1802e1816T()F1802e1816T",
    R"F1802e1816F(11: return;)F1802e1816F",
    R"F1802e1816U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805bb708.)F1802e1816U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1816() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1816", "FUN_1802e1816");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805bb708.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805bb708", static_cast<const void*>(&image::DAT_1805bb708));
    // body sha256: fbe0198b28a584d6bf897634b336a8cbf2955c71d44eed49096615491e236f27
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805bb708 = DAT_1805bb708 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802e1816;
}

// 0x1802e1850 FUN_1802e1850
// source: re/dump/decompile/0x1802e1850_FUN_1802e1850.c
// size: 29 bytes; thunk: false
// body sha256: 180a602b0c03597b4438da0faef4ade75984ab5796c6efdf403b094621e48ccd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1850{
    "0x1802e1850",
    "FUN_1802e1850",
    R"F1802e1850S(undefined FUN_1802e1850())F1802e1850S",
    R"B1802e1850(// 0x1802e1850  FUN_1802e1850
// size=29 thunk=false
// signature: undefined FUN_1802e1850()
// status: ok


undefined8 FUN_1802e1850(void)

{
  return 0;
}


)B1802e1850",
    "180a602b0c03597b4438da0faef4ade75984ab5796c6efdf403b094621e48ccd",
    R"F1802e1850C()F1802e1850C",
    R"F1802e1850D()F1802e1850D",
    R"F1802e1850T()F1802e1850T",
    R"F1802e1850F(10: return 0;)F1802e1850F",
    R"F1802e1850U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1850() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1850", "FUN_1802e1850");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 180a602b0c03597b4438da0faef4ade75984ab5796c6efdf403b094621e48ccd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1850;
}

// 0x1802e186e FUN_1802e186e
// source: re/dump/decompile/0x1802e186e_FUN_1802e186e.c
// size: 29 bytes; thunk: false
// body sha256: 7877e17ba2b0f72197aaf1864cb01a173aa7a59e65fad8bf72f0468b9f1a7a42
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e186e{
    "0x1802e186e",
    "FUN_1802e186e",
    R"F1802e186eS(undefined FUN_1802e186e())F1802e186eS",
    R"B1802e186e(// 0x1802e186e  FUN_1802e186e
// size=29 thunk=false
// signature: undefined FUN_1802e186e()
// status: ok


undefined8 FUN_1802e186e(void)

{
  return 0;
}


)B1802e186e",
    "7877e17ba2b0f72197aaf1864cb01a173aa7a59e65fad8bf72f0468b9f1a7a42",
    R"F1802e186eC()F1802e186eC",
    R"F1802e186eD()F1802e186eD",
    R"F1802e186eT()F1802e186eT",
    R"F1802e186eF(10: return 0;)F1802e186eF",
    R"F1802e186eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e186eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e186e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e186e", "FUN_1802e186e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7877e17ba2b0f72197aaf1864cb01a173aa7a59e65fad8bf72f0468b9f1a7a42
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e186e;
}

// 0x1802e189c FUN_1802e189c
// source: re/dump/decompile/0x1802e189c_FUN_1802e189c.c
// size: 33 bytes; thunk: false
// body sha256: ab3ab2fb2802b60cfcc9b695c5045f9184b131d505e058bb1fb9971100a55b9b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e189c{
    "0x1802e189c",
    "FUN_1802e189c",
    R"F1802e189cS(undefined FUN_1802e189c())F1802e189cS",
    R"B1802e189c(// 0x1802e189c  FUN_1802e189c
// size=33 thunk=false
// signature: undefined FUN_1802e189c()
// status: ok


undefined8 FUN_1802e189c(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x30) = 0;
  return 0;
}


)B1802e189c",
    "ab3ab2fb2802b60cfcc9b695c5045f9184b131d505e058bb1fb9971100a55b9b",
    R"F1802e189cC()F1802e189cC",
    R"F1802e189cD()F1802e189cD",
    R"F1802e189cT()F1802e189cT",
    R"F1802e189cF(11: return 0;)F1802e189cF",
    R"F1802e189cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e189cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e189c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e189c", "FUN_1802e189c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ab3ab2fb2802b60cfcc9b695c5045f9184b131d505e058bb1fb9971100a55b9b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x30) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e189c;
}

// 0x1802e19d8 FUN_1802e19d8
// source: re/dump/decompile/0x1802e19d8_FUN_1802e19d8.c
// size: 29 bytes; thunk: false
// body sha256: 58ed7529026c6d96076f9cadf402dc7081f79dc24a3cf8d41db77a7ca9c39ccd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e19d8{
    "0x1802e19d8",
    "FUN_1802e19d8",
    R"F1802e19d8S(undefined FUN_1802e19d8())F1802e19d8S",
    R"B1802e19d8(// 0x1802e19d8  FUN_1802e19d8
// size=29 thunk=false
// signature: undefined FUN_1802e19d8()
// status: ok


undefined8 FUN_1802e19d8(void)

{
  return 0;
}


)B1802e19d8",
    "58ed7529026c6d96076f9cadf402dc7081f79dc24a3cf8d41db77a7ca9c39ccd",
    R"F1802e19d8C()F1802e19d8C",
    R"F1802e19d8D()F1802e19d8D",
    R"F1802e19d8T()F1802e19d8T",
    R"F1802e19d8F(10: return 0;)F1802e19d8F",
    R"F1802e19d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e19d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e19d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e19d8", "FUN_1802e19d8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 58ed7529026c6d96076f9cadf402dc7081f79dc24a3cf8d41db77a7ca9c39ccd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e19d8;
}

// 0x1802e1a2c FUN_1802e1a2c
// source: re/dump/decompile/0x1802e1a2c_FUN_1802e1a2c.c
// size: 42 bytes; thunk: false
// body sha256: d9896a5e551377f1594694ff428abcec087b96f74c5035402639ae0adfc68064
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1a2c{
    "0x1802e1a2c",
    "FUN_1802e1a2c",
    R"F1802e1a2cS(undefined FUN_1802e1a2c())F1802e1a2cS",
    R"B1802e1a2c(// 0x1802e1a2c  FUN_1802e1a2c
// size=42 thunk=false
// signature: undefined FUN_1802e1a2c()
// status: ok


undefined8 FUN_1802e1a2c(void)

{
  DAT_18042398a = 0;
  return 0;
}


)B1802e1a2c",
    "d9896a5e551377f1594694ff428abcec087b96f74c5035402639ae0adfc68064",
    R"F1802e1a2cC()F1802e1a2cC",
    R"F1802e1a2cD(DAT_18042398a)F1802e1a2cD",
    R"F1802e1a2cT()F1802e1a2cT",
    R"F1802e1a2cF(11: return 0;)F1802e1a2cF",
    R"F1802e1a2cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042398a.)F1802e1a2cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1a2c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1a2c", "FUN_1802e1a2c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042398a.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042398a", static_cast<const void*>(&image::DAT_18042398a));
    // body sha256: d9896a5e551377f1594694ff428abcec087b96f74c5035402639ae0adfc68064
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042398a = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1a2c;
}

// 0x1802e1a57 FUN_1802e1a57
// source: re/dump/decompile/0x1802e1a57_FUN_1802e1a57.c
// size: 42 bytes; thunk: false
// body sha256: de84ea004c00ae0243e25968fe6c14f9a72047a632090bf5faaf5a1727aa97b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1a57{
    "0x1802e1a57",
    "FUN_1802e1a57",
    R"F1802e1a57S(undefined FUN_1802e1a57())F1802e1a57S",
    R"B1802e1a57(// 0x1802e1a57  FUN_1802e1a57
// size=42 thunk=false
// signature: undefined FUN_1802e1a57()
// status: ok


undefined8 FUN_1802e1a57(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0xc1) = 0;
  return 0;
}


)B1802e1a57",
    "de84ea004c00ae0243e25968fe6c14f9a72047a632090bf5faaf5a1727aa97b5",
    R"F1802e1a57C()F1802e1a57C",
    R"F1802e1a57D()F1802e1a57D",
    R"F1802e1a57T()F1802e1a57T",
    R"F1802e1a57F(11: return 0;)F1802e1a57F",
    R"F1802e1a57U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1a57U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1a57() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1a57", "FUN_1802e1a57");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: de84ea004c00ae0243e25968fe6c14f9a72047a632090bf5faaf5a1727aa97b5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0xc1) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1a57;
}

// 0x1802e1a82 FUN_1802e1a82
// source: re/dump/decompile/0x1802e1a82_FUN_1802e1a82.c
// size: 42 bytes; thunk: false
// body sha256: 2ce7efb08cdabcc188a7b3117a38a47d18dcc56572203aa1e49cc61a78bce2d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1a82{
    "0x1802e1a82",
    "FUN_1802e1a82",
    R"F1802e1a82S(undefined FUN_1802e1a82())F1802e1a82S",
    R"B1802e1a82(// 0x1802e1a82  FUN_1802e1a82
// size=42 thunk=false
// signature: undefined FUN_1802e1a82()
// status: ok


undefined8 FUN_1802e1a82(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0xb4) = 0;
  return 0;
}


)B1802e1a82",
    "2ce7efb08cdabcc188a7b3117a38a47d18dcc56572203aa1e49cc61a78bce2d2",
    R"F1802e1a82C()F1802e1a82C",
    R"F1802e1a82D()F1802e1a82D",
    R"F1802e1a82T()F1802e1a82T",
    R"F1802e1a82F(11: return 0;)F1802e1a82F",
    R"F1802e1a82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1a82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1a82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1a82", "FUN_1802e1a82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2ce7efb08cdabcc188a7b3117a38a47d18dcc56572203aa1e49cc61a78bce2d2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0xb4) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1a82;
}

// 0x1802e1aad FUN_1802e1aad
// source: re/dump/decompile/0x1802e1aad_FUN_1802e1aad.c
// size: 45 bytes; thunk: false
// body sha256: 9b22c7148f47c000abc0878935b4ac6180f85a8cad5e08d474d9f7dd41171fba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1aad{
    "0x1802e1aad",
    "FUN_1802e1aad",
    R"F1802e1aadS(undefined FUN_1802e1aad())F1802e1aadS",
    R"B1802e1aad(// 0x1802e1aad  FUN_1802e1aad
// size=45 thunk=false
// signature: undefined FUN_1802e1aad()
// status: ok


undefined8 FUN_1802e1aad(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 400) = 0;
  return 0;
}


)B1802e1aad",
    "9b22c7148f47c000abc0878935b4ac6180f85a8cad5e08d474d9f7dd41171fba",
    R"F1802e1aadC()F1802e1aadC",
    R"F1802e1aadD()F1802e1aadD",
    R"F1802e1aadT()F1802e1aadT",
    R"F1802e1aadF(11: return 0;)F1802e1aadF",
    R"F1802e1aadU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1aadU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1aad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1aad", "FUN_1802e1aad");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9b22c7148f47c000abc0878935b4ac6180f85a8cad5e08d474d9f7dd41171fba
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined4 *)(param_2 + 400) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1aad;
}

// 0x1802e1adb FUN_1802e1adb
// source: re/dump/decompile/0x1802e1adb_FUN_1802e1adb.c
// size: 35 bytes; thunk: false
// body sha256: eca9fa3e1f3eb05f6ecc1d1f36d61326cc5f4def8366788b69f7e8f9d6a14b7b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1adb{
    "0x1802e1adb",
    "FUN_1802e1adb",
    R"F1802e1adbS(undefined FUN_1802e1adb())F1802e1adbS",
    R"B1802e1adb(// 0x1802e1adb  FUN_1802e1adb
// size=35 thunk=false
// signature: undefined FUN_1802e1adb()
// status: ok


undefined8 FUN_1802e1adb(void)

{
  return 0;
}


)B1802e1adb",
    "eca9fa3e1f3eb05f6ecc1d1f36d61326cc5f4def8366788b69f7e8f9d6a14b7b",
    R"F1802e1adbC()F1802e1adbC",
    R"F1802e1adbD()F1802e1adbD",
    R"F1802e1adbT()F1802e1adbT",
    R"F1802e1adbF(10: return 0;)F1802e1adbF",
    R"F1802e1adbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1adbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1adb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1adb", "FUN_1802e1adb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: eca9fa3e1f3eb05f6ecc1d1f36d61326cc5f4def8366788b69f7e8f9d6a14b7b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1adb;
}

// 0x1802e1aff FUN_1802e1aff
// source: re/dump/decompile/0x1802e1aff_FUN_1802e1aff.c
// size: 42 bytes; thunk: false
// body sha256: 95c1f5fb6083df10c910f08d4128aa547f59110ae9f9027984dc42e09c9d5f02
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1aff{
    "0x1802e1aff",
    "FUN_1802e1aff",
    R"F1802e1affS(undefined FUN_1802e1aff())F1802e1affS",
    R"B1802e1aff(// 0x1802e1aff  FUN_1802e1aff
// size=42 thunk=false
// signature: undefined FUN_1802e1aff()
// status: ok


undefined8 FUN_1802e1aff(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0xb7) = 0;
  return 0;
}


)B1802e1aff",
    "95c1f5fb6083df10c910f08d4128aa547f59110ae9f9027984dc42e09c9d5f02",
    R"F1802e1affC()F1802e1affC",
    R"F1802e1affD()F1802e1affD",
    R"F1802e1affT()F1802e1affT",
    R"F1802e1affF(11: return 0;)F1802e1affF",
    R"F1802e1affU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1affU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1aff() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1aff", "FUN_1802e1aff");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 95c1f5fb6083df10c910f08d4128aa547f59110ae9f9027984dc42e09c9d5f02
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0xb7) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1aff;
}

// 0x1802e1b2a FUN_1802e1b2a
// source: re/dump/decompile/0x1802e1b2a_FUN_1802e1b2a.c
// size: 35 bytes; thunk: false
// body sha256: 568c66a86e13d8fc2ac514a6f3f7af95c255359cc57fcd43c9105d3ff976cedc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1b2a{
    "0x1802e1b2a",
    "FUN_1802e1b2a",
    R"F1802e1b2aS(undefined FUN_1802e1b2a())F1802e1b2aS",
    R"B1802e1b2a(// 0x1802e1b2a  FUN_1802e1b2a
// size=35 thunk=false
// signature: undefined FUN_1802e1b2a()
// status: ok


undefined8 FUN_1802e1b2a(void)

{
  return 0;
}


)B1802e1b2a",
    "568c66a86e13d8fc2ac514a6f3f7af95c255359cc57fcd43c9105d3ff976cedc",
    R"F1802e1b2aC()F1802e1b2aC",
    R"F1802e1b2aD()F1802e1b2aD",
    R"F1802e1b2aT()F1802e1b2aT",
    R"F1802e1b2aF(10: return 0;)F1802e1b2aF",
    R"F1802e1b2aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1b2aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1b2a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1b2a", "FUN_1802e1b2a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 568c66a86e13d8fc2ac514a6f3f7af95c255359cc57fcd43c9105d3ff976cedc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1b2a;
}

// 0x1802e1b4e FUN_1802e1b4e
// source: re/dump/decompile/0x1802e1b4e_FUN_1802e1b4e.c
// size: 22 bytes; thunk: false
// body sha256: 65b7ae2457bf8f612e114988ca9a96d6700722dc583a42af562ca0618407f108
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1b4e{
    "0x1802e1b4e",
    "FUN_1802e1b4e",
    R"F1802e1b4eS(undefined FUN_1802e1b4e())F1802e1b4eS",
    R"B1802e1b4e(// 0x1802e1b4e  FUN_1802e1b4e
// size=22 thunk=false
// signature: undefined FUN_1802e1b4e()
// status: ok


void FUN_1802e1b4e(void)

{
  DAT_18042f178 = DAT_18042f178 & 0xfffffffe;
  return;
}


)B1802e1b4e",
    "65b7ae2457bf8f612e114988ca9a96d6700722dc583a42af562ca0618407f108",
    R"F1802e1b4eC()F1802e1b4eC",
    R"F1802e1b4eD(DAT_18042f178)F1802e1b4eD",
    R"F1802e1b4eT()F1802e1b4eT",
    R"F1802e1b4eF(11: return;)F1802e1b4eF",
    R"F1802e1b4eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f178.)F1802e1b4eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1b4e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1b4e", "FUN_1802e1b4e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f178.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f178", static_cast<const void*>(&image::DAT_18042f178));
    // body sha256: 65b7ae2457bf8f612e114988ca9a96d6700722dc583a42af562ca0618407f108
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042f178 = DAT_18042f178 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802e1b4e;
}

// 0x1802e1b64 FUN_1802e1b64
// source: re/dump/decompile/0x1802e1b64_FUN_1802e1b64.c
// size: 51 bytes; thunk: false
// body sha256: 2a35c98b56c43bd5bc0ff225765a51c5f62328447e639207ce9cd6439fc36242
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1b64{
    "0x1802e1b64",
    "FUN_1802e1b64",
    R"F1802e1b64S(undefined FUN_1802e1b64())F1802e1b64S",
    R"B1802e1b64(// 0x1802e1b64  FUN_1802e1b64
// size=51 thunk=false
// signature: undefined FUN_1802e1b64()
// status: ok


undefined8 FUN_1802e1b64(undefined8 param_1,longlong param_2)

{
  *(undefined2 *)(*(longlong *)(param_2 + 0x1d0) + 0xa8) = 0;
  return 0;
}


)B1802e1b64",
    "2a35c98b56c43bd5bc0ff225765a51c5f62328447e639207ce9cd6439fc36242",
    R"F1802e1b64C()F1802e1b64C",
    R"F1802e1b64D()F1802e1b64D",
    R"F1802e1b64T()F1802e1b64T",
    R"F1802e1b64F(11: return 0;)F1802e1b64F",
    R"F1802e1b64U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1b64U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1b64() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1b64", "FUN_1802e1b64");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2a35c98b56c43bd5bc0ff225765a51c5f62328447e639207ce9cd6439fc36242
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined2 *)(*(longlong *)(param_2 + 0x1d0) + 0xa8) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1b64;
}

// 0x1802e1bac FUN_1802e1bac
// source: re/dump/decompile/0x1802e1bac_FUN_1802e1bac.c
// size: 42 bytes; thunk: false
// body sha256: ae78bf31a1b7ca6c4d0bfcd0519091a532969d7bec206b7b638c369dfdb8dced
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1bac{
    "0x1802e1bac",
    "FUN_1802e1bac",
    R"F1802e1bacS(undefined FUN_1802e1bac())F1802e1bacS",
    R"B1802e1bac(// 0x1802e1bac  FUN_1802e1bac
// size=42 thunk=false
// signature: undefined FUN_1802e1bac()
// status: ok


undefined8 FUN_1802e1bac(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x80) = 0;
  return 0;
}


)B1802e1bac",
    "ae78bf31a1b7ca6c4d0bfcd0519091a532969d7bec206b7b638c369dfdb8dced",
    R"F1802e1bacC()F1802e1bacC",
    R"F1802e1bacD()F1802e1bacD",
    R"F1802e1bacT()F1802e1bacT",
    R"F1802e1bacF(11: return 0;)F1802e1bacF",
    R"F1802e1bacU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1bacU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1bac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1bac", "FUN_1802e1bac");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ae78bf31a1b7ca6c4d0bfcd0519091a532969d7bec206b7b638c369dfdb8dced
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x80) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1bac;
}

// 0x1802e1bd7 FUN_1802e1bd7
// source: re/dump/decompile/0x1802e1bd7_FUN_1802e1bd7.c
// size: 35 bytes; thunk: false
// body sha256: fe9eaa413faf45e19388f55efc1eaf6eb69ed50ce106fa2936adede3839860f0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1bd7{
    "0x1802e1bd7",
    "FUN_1802e1bd7",
    R"F1802e1bd7S(undefined FUN_1802e1bd7())F1802e1bd7S",
    R"B1802e1bd7(// 0x1802e1bd7  FUN_1802e1bd7
// size=35 thunk=false
// signature: undefined FUN_1802e1bd7()
// status: ok


undefined8 FUN_1802e1bd7(void)

{
  return 0;
}


)B1802e1bd7",
    "fe9eaa413faf45e19388f55efc1eaf6eb69ed50ce106fa2936adede3839860f0",
    R"F1802e1bd7C()F1802e1bd7C",
    R"F1802e1bd7D()F1802e1bd7D",
    R"F1802e1bd7T()F1802e1bd7T",
    R"F1802e1bd7F(10: return 0;)F1802e1bd7F",
    R"F1802e1bd7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1bd7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1bd7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1bd7", "FUN_1802e1bd7");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fe9eaa413faf45e19388f55efc1eaf6eb69ed50ce106fa2936adede3839860f0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1bd7;
}

// 0x1802e1c0c FUN_1802e1c0c
// source: re/dump/decompile/0x1802e1c0c_FUN_1802e1c0c.c
// size: 29 bytes; thunk: false
// body sha256: 9919474336429dc5feedac142521595850e436d8fab4e58bced0469f38afdcd4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1c0c{
    "0x1802e1c0c",
    "FUN_1802e1c0c",
    R"F1802e1c0cS(undefined FUN_1802e1c0c())F1802e1c0cS",
    R"B1802e1c0c(// 0x1802e1c0c  FUN_1802e1c0c
// size=29 thunk=false
// signature: undefined FUN_1802e1c0c()
// status: ok


undefined8 FUN_1802e1c0c(void)

{
  return 0;
}


)B1802e1c0c",
    "9919474336429dc5feedac142521595850e436d8fab4e58bced0469f38afdcd4",
    R"F1802e1c0cC()F1802e1c0cC",
    R"F1802e1c0cD()F1802e1c0cD",
    R"F1802e1c0cT()F1802e1c0cT",
    R"F1802e1c0cF(10: return 0;)F1802e1c0cF",
    R"F1802e1c0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1c0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1c0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1c0c", "FUN_1802e1c0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9919474336429dc5feedac142521595850e436d8fab4e58bced0469f38afdcd4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1c0c;
}

// 0x1802e1c70 FUN_1802e1c70
// source: re/dump/decompile/0x1802e1c70_FUN_1802e1c70.c
// size: 41 bytes; thunk: false
// body sha256: c6f72bb3e183d16c65ba76d137f0cb5630850de10d89fcee479dfb87f6b3400c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1c70{
    "0x1802e1c70",
    "FUN_1802e1c70",
    R"F1802e1c70S(undefined FUN_1802e1c70())F1802e1c70S",
    R"B1802e1c70(// 0x1802e1c70  FUN_1802e1c70
// size=41 thunk=false
// signature: undefined FUN_1802e1c70()
// status: ok


void FUN_1802e1c70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x80);
  }
  return;
}


)B1802e1c70",
    "c6f72bb3e183d16c65ba76d137f0cb5630850de10d89fcee479dfb87f6b3400c",
    R"F1802e1c70C(FUN_18001bc60)F1802e1c70C",
    R"F1802e1c70D()F1802e1c70D",
    R"F1802e1c70T()F1802e1c70T",
    R"F1802e1c70F(10: if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
14: return;)F1802e1c70F",
    R"F1802e1c70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1c70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1c70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1c70", "FUN_1802e1c70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x80);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: c6f72bb3e183d16c65ba76d137f0cb5630850de10d89fcee479dfb87f6b3400c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x38) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x38, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;");
                trace.statement("FUN_18001bc60(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1c70;
}

// 0x1802e1c99 FUN_1802e1c99
// source: re/dump/decompile/0x1802e1c99_FUN_1802e1c99.c
// size: 38 bytes; thunk: false
// body sha256: 3a905ecc124b2a3fc193bdef139a3bc6571bf3ae661849bdb03772cef8124069
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1c99{
    "0x1802e1c99",
    "FUN_1802e1c99",
    R"F1802e1c99S(undefined FUN_1802e1c99())F1802e1c99S",
    R"B1802e1c99(// 0x1802e1c99  FUN_1802e1c99
// size=38 thunk=false
// signature: undefined FUN_1802e1c99()
// status: ok


void FUN_1802e1c99(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x20);
  }
  return;
}


)B1802e1c99",
    "3a905ecc124b2a3fc193bdef139a3bc6571bf3ae661849bdb03772cef8124069",
    R"F1802e1c99C(FUN_18001bc60)F1802e1c99C",
    R"F1802e1c99D()F1802e1c99D",
    R"F1802e1c99T()F1802e1c99T",
    R"F1802e1c99F(10: if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
14: return;)F1802e1c99F",
    R"F1802e1c99U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1c99U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1c99() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1c99", "FUN_1802e1c99");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x20);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 3a905ecc124b2a3fc193bdef139a3bc6571bf3ae661849bdb03772cef8124069
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x38) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x38, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;");
                trace.statement("FUN_18001bc60(param_2 + 0x20);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1c99;
}

// 0x1802e1ccb FUN_1802e1ccb
// source: re/dump/decompile/0x1802e1ccb_FUN_1802e1ccb.c
// size: 37 bytes; thunk: false
// body sha256: 309df8d333aa604f4e9b2ad6de46e8689c92471700bacab45ec132073fed97f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1ccb{
    "0x1802e1ccb",
    "FUN_1802e1ccb",
    R"F1802e1ccbS(undefined FUN_1802e1ccb())F1802e1ccbS",
    R"B1802e1ccb(// 0x1802e1ccb  FUN_1802e1ccb
// size=37 thunk=false
// signature: undefined FUN_1802e1ccb()
// status: ok


undefined8 FUN_1802e1ccb(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x40) + 0x13) = 0;
  return 0;
}


)B1802e1ccb",
    "309df8d333aa604f4e9b2ad6de46e8689c92471700bacab45ec132073fed97f7",
    R"F1802e1ccbC()F1802e1ccbC",
    R"F1802e1ccbD()F1802e1ccbD",
    R"F1802e1ccbT()F1802e1ccbT",
    R"F1802e1ccbF(11: return 0;)F1802e1ccbF",
    R"F1802e1ccbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1ccbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1ccb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1ccb", "FUN_1802e1ccb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 309df8d333aa604f4e9b2ad6de46e8689c92471700bacab45ec132073fed97f7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(*(longlong *)(param_2 + 0x40) + 0x13) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1ccb;
}

// 0x1802e1d00 FUN_1802e1d00
// source: re/dump/decompile/0x1802e1d00_FUN_1802e1d00.c
// size: 38 bytes; thunk: false
// body sha256: 79c1f3d628c1b50a85fac17209134530f76603f3c801887b25e51f228171383c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1d00{
    "0x1802e1d00",
    "FUN_1802e1d00",
    R"F1802e1d00S(undefined FUN_1802e1d00())F1802e1d00S",
    R"B1802e1d00(// 0x1802e1d00  FUN_1802e1d00
// size=38 thunk=false
// signature: undefined FUN_1802e1d00()
// status: ok


void FUN_1802e1d00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x70);
  }
  return;
}


)B1802e1d00",
    "79c1f3d628c1b50a85fac17209134530f76603f3c801887b25e51f228171383c",
    R"F1802e1d00C(FUN_18001bc60)F1802e1d00C",
    R"F1802e1d00D()F1802e1d00D",
    R"F1802e1d00T()F1802e1d00T",
    R"F1802e1d00F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802e1d00F",
    R"F1802e1d00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1d00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1d00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1d00", "FUN_1802e1d00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x70);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 79c1f3d628c1b50a85fac17209134530f76603f3c801887b25e51f228171383c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18001bc60(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1d00;
}

// 0x1802e1d26 FUN_1802e1d26
// source: re/dump/decompile/0x1802e1d26_FUN_1802e1d26.c
// size: 38 bytes; thunk: false
// body sha256: 27b3293d37c866fd9564c82cc10827394f1b21e74e0b0de2417ba45bdc344cee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1d26{
    "0x1802e1d26",
    "FUN_1802e1d26",
    R"F1802e1d26S(undefined FUN_1802e1d26())F1802e1d26S",
    R"B1802e1d26(// 0x1802e1d26  FUN_1802e1d26
// size=38 thunk=false
// signature: undefined FUN_1802e1d26()
// status: ok


void FUN_1802e1d26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x40);
  }
  return;
}


)B1802e1d26",
    "27b3293d37c866fd9564c82cc10827394f1b21e74e0b0de2417ba45bdc344cee",
    R"F1802e1d26C(FUN_18001bc60)F1802e1d26C",
    R"F1802e1d26D()F1802e1d26D",
    R"F1802e1d26T()F1802e1d26T",
    R"F1802e1d26F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802e1d26F",
    R"F1802e1d26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1d26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1d26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1d26", "FUN_1802e1d26");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x40);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 27b3293d37c866fd9564c82cc10827394f1b21e74e0b0de2417ba45bdc344cee
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("FUN_18001bc60(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1d26;
}

// 0x1802e1d58 FUN_1802e1d58
// source: re/dump/decompile/0x1802e1d58_FUN_1802e1d58.c
// size: 37 bytes; thunk: false
// body sha256: 758035358b08c4f5080d8661b78cb0b8b731694b2aff7d36b5c8074e2f29805d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1d58{
    "0x1802e1d58",
    "FUN_1802e1d58",
    R"F1802e1d58S(undefined FUN_1802e1d58())F1802e1d58S",
    R"B1802e1d58(// 0x1802e1d58  FUN_1802e1d58
// size=37 thunk=false
// signature: undefined FUN_1802e1d58()
// status: ok


undefined8 FUN_1802e1d58(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x20) + 0x10) = 0;
  return 0;
}


)B1802e1d58",
    "758035358b08c4f5080d8661b78cb0b8b731694b2aff7d36b5c8074e2f29805d",
    R"F1802e1d58C()F1802e1d58C",
    R"F1802e1d58D()F1802e1d58D",
    R"F1802e1d58T()F1802e1d58T",
    R"F1802e1d58F(11: return 0;)F1802e1d58F",
    R"F1802e1d58U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1d58U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1d58() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1d58", "FUN_1802e1d58");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 758035358b08c4f5080d8661b78cb0b8b731694b2aff7d36b5c8074e2f29805d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(*(longlong *)(param_2 + 0x20) + 0x10) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1d58;
}

// 0x1802e1d90 FUN_1802e1d90
// source: re/dump/decompile/0x1802e1d90_FUN_1802e1d90.c
// size: 38 bytes; thunk: false
// body sha256: 11f38443e08331aede930ab400c8d6fbf9a706871e25b45c1a946faaaee02d20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1d90{
    "0x1802e1d90",
    "FUN_1802e1d90",
    R"F1802e1d90S(undefined FUN_1802e1d90())F1802e1d90S",
    R"B1802e1d90(// 0x1802e1d90  FUN_1802e1d90
// size=38 thunk=false
// signature: undefined FUN_1802e1d90()
// status: ok


void FUN_1802e1d90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x60);
  }
  return;
}


)B1802e1d90",
    "11f38443e08331aede930ab400c8d6fbf9a706871e25b45c1a946faaaee02d20",
    R"F1802e1d90C(FUN_18001bc60)F1802e1d90C",
    R"F1802e1d90D()F1802e1d90D",
    R"F1802e1d90T()F1802e1d90T",
    R"F1802e1d90F(10: if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
14: return;)F1802e1d90F",
    R"F1802e1d90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1d90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1d90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1d90", "FUN_1802e1d90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x60);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 11f38443e08331aede930ab400c8d6fbf9a706871e25b45c1a946faaaee02d20
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x38) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x38, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;");
                trace.statement("FUN_18001bc60(param_2 + 0x60);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1d90;
}

// 0x1802e1db6 FUN_1802e1db6
// source: re/dump/decompile/0x1802e1db6_FUN_1802e1db6.c
// size: 38 bytes; thunk: false
// body sha256: 75ba83f35ad320c9d10b1332153ab0c5744494e20b11e17bdce80c524e26ed06
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1db6{
    "0x1802e1db6",
    "FUN_1802e1db6",
    R"F1802e1db6S(undefined FUN_1802e1db6())F1802e1db6S",
    R"B1802e1db6(// 0x1802e1db6  FUN_1802e1db6
// size=38 thunk=false
// signature: undefined FUN_1802e1db6()
// status: ok


void FUN_1802e1db6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x20);
  }
  return;
}


)B1802e1db6",
    "75ba83f35ad320c9d10b1332153ab0c5744494e20b11e17bdce80c524e26ed06",
    R"F1802e1db6C(FUN_18001bc60)F1802e1db6C",
    R"F1802e1db6D()F1802e1db6D",
    R"F1802e1db6T()F1802e1db6T",
    R"F1802e1db6F(10: if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
14: return;)F1802e1db6F",
    R"F1802e1db6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1db6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1db6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1db6", "FUN_1802e1db6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x20);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 75ba83f35ad320c9d10b1332153ab0c5744494e20b11e17bdce80c524e26ed06
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x38) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x38, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;");
                trace.statement("FUN_18001bc60(param_2 + 0x20);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1db6;
}

// 0x1802e1de8 FUN_1802e1de8
// source: re/dump/decompile/0x1802e1de8_FUN_1802e1de8.c
// size: 50 bytes; thunk: false
// body sha256: 59b04f9000bd859f56d9be11616ac190924f058fca9dca22d35a3bcb0c919f96
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1de8{
    "0x1802e1de8",
    "FUN_1802e1de8",
    R"F1802e1de8S(undefined FUN_1802e1de8())F1802e1de8S",
    R"B1802e1de8(// 0x1802e1de8  FUN_1802e1de8
// size=50 thunk=false
// signature: undefined FUN_1802e1de8()
// status: ok


undefined8 FUN_1802e1de8(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x78) + 0xc0))
            (*(longlong **)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
  return 0;
}


)B1802e1de8",
    "59b04f9000bd859f56d9be11616ac190924f058fca9dca22d35a3bcb0c919f96",
    R"F1802e1de8C()F1802e1de8C",
    R"F1802e1de8D()F1802e1de8D",
    R"F1802e1de8T()F1802e1de8T",
    R"F1802e1de8F(12: return 0;)F1802e1de8F",
    R"F1802e1de8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x78) + 0xc0)).)F1802e1de8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1de8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1de8", "FUN_1802e1de8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 10: (**(code **)(**(longlong **)(param_2 + 0x78) + 0xc0)).
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 59b04f9000bd859f56d9be11616ac190924f058fca9dca22d35a3bcb0c919f96
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("(**(code **)(**(longlong **)(param_2 + 0x78) + 0xc0))");
            trace.statement("(*(longlong **)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1de8;
}

// 0x1802e1e20 FUN_1802e1e20
// source: re/dump/decompile/0x1802e1e20_FUN_1802e1e20.c
// size: 38 bytes; thunk: false
// body sha256: 705864225e5066f8da69c1de2a8a3ff35b5cbf12de0a28986e102bb79d5a2122
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1e20{
    "0x1802e1e20",
    "FUN_1802e1e20",
    R"F1802e1e20S(undefined FUN_1802e1e20())F1802e1e20S",
    R"B1802e1e20(// 0x1802e1e20  FUN_1802e1e20
// size=38 thunk=false
// signature: undefined FUN_1802e1e20()
// status: ok


void FUN_1802e1e20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x68);
  }
  return;
}


)B1802e1e20",
    "705864225e5066f8da69c1de2a8a3ff35b5cbf12de0a28986e102bb79d5a2122",
    R"F1802e1e20C(FUN_18001bc60)F1802e1e20C",
    R"F1802e1e20D()F1802e1e20D",
    R"F1802e1e20T()F1802e1e20T",
    R"F1802e1e20F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802e1e20F",
    R"F1802e1e20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1e20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1e20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1e20", "FUN_1802e1e20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x68);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 705864225e5066f8da69c1de2a8a3ff35b5cbf12de0a28986e102bb79d5a2122
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18001bc60(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1e20;
}

// 0x1802e1e46 FUN_1802e1e46
// source: re/dump/decompile/0x1802e1e46_FUN_1802e1e46.c
// size: 38 bytes; thunk: false
// body sha256: 2291913ab60cc3c9022cf2fa7a540ee97787d2f4584952726afb5358e91e8e1f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1e46{
    "0x1802e1e46",
    "FUN_1802e1e46",
    R"F1802e1e46S(undefined FUN_1802e1e46())F1802e1e46S",
    R"B1802e1e46(// 0x1802e1e46  FUN_1802e1e46
// size=38 thunk=false
// signature: undefined FUN_1802e1e46()
// status: ok


void FUN_1802e1e46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x38);
  }
  return;
}


)B1802e1e46",
    "2291913ab60cc3c9022cf2fa7a540ee97787d2f4584952726afb5358e91e8e1f",
    R"F1802e1e46C(FUN_18001bc60)F1802e1e46C",
    R"F1802e1e46D()F1802e1e46D",
    R"F1802e1e46T()F1802e1e46T",
    R"F1802e1e46F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802e1e46F",
    R"F1802e1e46U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1e46U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1e46() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1e46", "FUN_1802e1e46");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x38);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 2291913ab60cc3c9022cf2fa7a540ee97787d2f4584952726afb5358e91e8e1f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("FUN_18001bc60(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e1e46;
}

// 0x1802e1e78 FUN_1802e1e78
// source: re/dump/decompile/0x1802e1e78_FUN_1802e1e78.c
// size: 29 bytes; thunk: false
// body sha256: 2ace1f5da9358698e58c47414d6c0e2d0cb0306d9e5007281bc92102d3559e22
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1e78{
    "0x1802e1e78",
    "FUN_1802e1e78",
    R"F1802e1e78S(undefined FUN_1802e1e78())F1802e1e78S",
    R"B1802e1e78(// 0x1802e1e78  FUN_1802e1e78
// size=29 thunk=false
// signature: undefined FUN_1802e1e78()
// status: ok


undefined8 FUN_1802e1e78(void)

{
  return 0;
}


)B1802e1e78",
    "2ace1f5da9358698e58c47414d6c0e2d0cb0306d9e5007281bc92102d3559e22",
    R"F1802e1e78C()F1802e1e78C",
    R"F1802e1e78D()F1802e1e78D",
    R"F1802e1e78T()F1802e1e78T",
    R"F1802e1e78F(10: return 0;)F1802e1e78F",
    R"F1802e1e78U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1e78U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1e78() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1e78", "FUN_1802e1e78");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2ace1f5da9358698e58c47414d6c0e2d0cb0306d9e5007281bc92102d3559e22
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1e78;
}

// 0x1802e1ea0 FUN_1802e1ea0
// source: re/dump/decompile/0x1802e1ea0_FUN_1802e1ea0.c
// size: 29 bytes; thunk: false
// body sha256: 87f9f269bfbd5d413fbcdb32b33f4045b23df3f4d318da134bf9f49675f36ebb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1ea0{
    "0x1802e1ea0",
    "FUN_1802e1ea0",
    R"F1802e1ea0S(undefined FUN_1802e1ea0())F1802e1ea0S",
    R"B1802e1ea0(// 0x1802e1ea0  FUN_1802e1ea0
// size=29 thunk=false
// signature: undefined FUN_1802e1ea0()
// status: ok


undefined8 FUN_1802e1ea0(void)

{
  return 0;
}


)B1802e1ea0",
    "87f9f269bfbd5d413fbcdb32b33f4045b23df3f4d318da134bf9f49675f36ebb",
    R"F1802e1ea0C()F1802e1ea0C",
    R"F1802e1ea0D()F1802e1ea0D",
    R"F1802e1ea0T()F1802e1ea0T",
    R"F1802e1ea0F(10: return 0;)F1802e1ea0F",
    R"F1802e1ea0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1ea0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1ea0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1ea0", "FUN_1802e1ea0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 87f9f269bfbd5d413fbcdb32b33f4045b23df3f4d318da134bf9f49675f36ebb
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1ea0;
}

// 0x1802e1ebe FUN_1802e1ebe
// source: re/dump/decompile/0x1802e1ebe_FUN_1802e1ebe.c
// size: 29 bytes; thunk: false
// body sha256: a7ffef404e8e9e4cea4d5093694c11c6d3f0186d7bc796d0caf7255c70a606da
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1ebe{
    "0x1802e1ebe",
    "FUN_1802e1ebe",
    R"F1802e1ebeS(undefined FUN_1802e1ebe())F1802e1ebeS",
    R"B1802e1ebe(// 0x1802e1ebe  FUN_1802e1ebe
// size=29 thunk=false
// signature: undefined FUN_1802e1ebe()
// status: ok


undefined8 FUN_1802e1ebe(void)

{
  return 0;
}


)B1802e1ebe",
    "a7ffef404e8e9e4cea4d5093694c11c6d3f0186d7bc796d0caf7255c70a606da",
    R"F1802e1ebeC()F1802e1ebeC",
    R"F1802e1ebeD()F1802e1ebeD",
    R"F1802e1ebeT()F1802e1ebeT",
    R"F1802e1ebeF(10: return 0;)F1802e1ebeF",
    R"F1802e1ebeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1ebeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1ebe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1ebe", "FUN_1802e1ebe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a7ffef404e8e9e4cea4d5093694c11c6d3f0186d7bc796d0caf7255c70a606da
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1ebe;
}

// 0x1802e1f30 FUN_1802e1f30
// source: re/dump/decompile/0x1802e1f30_FUN_1802e1f30.c
// size: 49 bytes; thunk: false
// body sha256: 738b4a08fd386f273c0dd6fc73ee6d672790586261d3435cd2ca6ececdd25e0e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1f30{
    "0x1802e1f30",
    "FUN_1802e1f30",
    R"F1802e1f30S(undefined FUN_1802e1f30())F1802e1f30S",
    R"B1802e1f30(// 0x1802e1f30  FUN_1802e1f30
// size=49 thunk=false
// signature: undefined FUN_1802e1f30()
// status: ok


undefined8 FUN_1802e1f30(void)

{
  FUN_1800a6190("RENDER","eyepos");
  return 0;
}


)B1802e1f30",
    "738b4a08fd386f273c0dd6fc73ee6d672790586261d3435cd2ca6ececdd25e0e",
    R"F1802e1f30C(FUN_1800a6190)F1802e1f30C",
    R"F1802e1f30D()F1802e1f30D",
    R"F1802e1f30T("RENDER"
"eyepos")F1802e1f30T",
    R"F1802e1f30F(11: return 0;)F1802e1f30F",
    R"F1802e1f30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1f30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1f30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1f30", "FUN_1802e1f30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800a6190", "RENDER", "eyepos");
    trace.call_target("FUN_1800a6190", reinterpret_cast<const void*>(&image::FUN_1800a6190));
    trace.string_literal("RENDER");
    trace.string_literal("eyepos");
    // body sha256: 738b4a08fd386f273c0dd6fc73ee6d672790586261d3435cd2ca6ececdd25e0e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1800a6190(\"RENDER\",\"eyepos\");");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1f30;
}

// 0x1802e1f70 FUN_1802e1f70
// source: re/dump/decompile/0x1802e1f70_FUN_1802e1f70.c
// size: 29 bytes; thunk: false
// body sha256: c83562a3b5ac85bcd358e4198789b189b6f89a36180c15d9177f13e19c8b6960
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1f70{
    "0x1802e1f70",
    "FUN_1802e1f70",
    R"F1802e1f70S(undefined FUN_1802e1f70())F1802e1f70S",
    R"B1802e1f70(// 0x1802e1f70  FUN_1802e1f70
// size=29 thunk=false
// signature: undefined FUN_1802e1f70()
// status: ok


undefined8 FUN_1802e1f70(void)

{
  return 0;
}


)B1802e1f70",
    "c83562a3b5ac85bcd358e4198789b189b6f89a36180c15d9177f13e19c8b6960",
    R"F1802e1f70C()F1802e1f70C",
    R"F1802e1f70D()F1802e1f70D",
    R"F1802e1f70T()F1802e1f70T",
    R"F1802e1f70F(10: return 0;)F1802e1f70F",
    R"F1802e1f70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1f70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1f70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1f70", "FUN_1802e1f70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c83562a3b5ac85bcd358e4198789b189b6f89a36180c15d9177f13e19c8b6960
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1f70;
}

// 0x1802e1fe4 FUN_1802e1fe4
// source: re/dump/decompile/0x1802e1fe4_FUN_1802e1fe4.c
// size: 29 bytes; thunk: false
// body sha256: 36f0dd303f794c1e8c2ae6d8a70fc63a7accbc95ece0577177db09e4d3d5c900
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e1fe4{
    "0x1802e1fe4",
    "FUN_1802e1fe4",
    R"F1802e1fe4S(undefined FUN_1802e1fe4())F1802e1fe4S",
    R"B1802e1fe4(// 0x1802e1fe4  FUN_1802e1fe4
// size=29 thunk=false
// signature: undefined FUN_1802e1fe4()
// status: ok


undefined8 FUN_1802e1fe4(void)

{
  return 0;
}


)B1802e1fe4",
    "36f0dd303f794c1e8c2ae6d8a70fc63a7accbc95ece0577177db09e4d3d5c900",
    R"F1802e1fe4C()F1802e1fe4C",
    R"F1802e1fe4D()F1802e1fe4D",
    R"F1802e1fe4T()F1802e1fe4T",
    R"F1802e1fe4F(10: return 0;)F1802e1fe4F",
    R"F1802e1fe4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e1fe4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e1fe4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e1fe4", "FUN_1802e1fe4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 36f0dd303f794c1e8c2ae6d8a70fc63a7accbc95ece0577177db09e4d3d5c900
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e1fe4;
}

// 0x1802e2002 FUN_1802e2002
// source: re/dump/decompile/0x1802e2002_FUN_1802e2002.c
// size: 29 bytes; thunk: false
// body sha256: ac53c634bc6cc8148f1da381c298002c4c9f15b921925dfda2820a8633046f20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2002{
    "0x1802e2002",
    "FUN_1802e2002",
    R"F1802e2002S(undefined FUN_1802e2002())F1802e2002S",
    R"B1802e2002(// 0x1802e2002  FUN_1802e2002
// size=29 thunk=false
// signature: undefined FUN_1802e2002()
// status: ok


undefined8 FUN_1802e2002(void)

{
  return 0;
}


)B1802e2002",
    "ac53c634bc6cc8148f1da381c298002c4c9f15b921925dfda2820a8633046f20",
    R"F1802e2002C()F1802e2002C",
    R"F1802e2002D()F1802e2002D",
    R"F1802e2002T()F1802e2002T",
    R"F1802e2002F(10: return 0;)F1802e2002F",
    R"F1802e2002U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2002U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2002() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2002", "FUN_1802e2002");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ac53c634bc6cc8148f1da381c298002c4c9f15b921925dfda2820a8633046f20
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2002;
}

// 0x1802e2020 FUN_1802e2020
// source: re/dump/decompile/0x1802e2020_FUN_1802e2020.c
// size: 43 bytes; thunk: false
// body sha256: f9facacae4e4d1cfa9d458f73b4e40a9ed9290181f98209fb6eef8e26697e105
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2020{
    "0x1802e2020",
    "FUN_1802e2020",
    R"F1802e2020S(undefined FUN_1802e2020())F1802e2020S",
    R"B1802e2020(// 0x1802e2020  FUN_1802e2020
// size=43 thunk=false
// signature: undefined FUN_1802e2020()
// status: ok


undefined8 FUN_1802e2020(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(*(longlong *)(param_2 + 0x98) + 0x50) = 0;
  return 0;
}


)B1802e2020",
    "f9facacae4e4d1cfa9d458f73b4e40a9ed9290181f98209fb6eef8e26697e105",
    R"F1802e2020C()F1802e2020C",
    R"F1802e2020D()F1802e2020D",
    R"F1802e2020T()F1802e2020T",
    R"F1802e2020F(11: return 0;)F1802e2020F",
    R"F1802e2020U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2020U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2020() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2020", "FUN_1802e2020");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f9facacae4e4d1cfa9d458f73b4e40a9ed9290181f98209fb6eef8e26697e105
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined4 *)(*(longlong *)(param_2 + 0x98) + 0x50) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2020;
}

// 0x1802e205c FUN_1802e205c
// source: re/dump/decompile/0x1802e205c_FUN_1802e205c.c
// size: 73 bytes; thunk: false
// body sha256: a8719b4120ce8ba0b397e60e076f4a96245d8ebf7330f845e1296471ec08733a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e205c{
    "0x1802e205c",
    "FUN_1802e205c",
    R"F1802e205cS(undefined FUN_1802e205c())F1802e205cS",
    R"B1802e205c(// 0x1802e205c  FUN_1802e205c
// size=73 thunk=false
// signature: undefined FUN_1802e205c()
// status: ok


undefined8 FUN_1802e205c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)*plVar1)(plVar1);
    if (*(int *)(param_2 + 0xb8) < iVar2) {
      (**(code **)(*plVar1 + 0x10))(plVar1,iVar2 - *(int *)(param_2 + 0xb8));
    }
  }
  return 0;
}


)B1802e205c",
    "a8719b4120ce8ba0b397e60e076f4a96245d8ebf7330f845e1296471ec08733a",
    R"F1802e205cC()F1802e205cC",
    R"F1802e205cD()F1802e205cD",
    R"F1802e205cT()F1802e205cT",
    R"F1802e205cF(14: if (plVar1 != (longlong *)0x0) {
16: if (*(int *)(param_2 + 0xb8) < iVar2) {
20: return 0;)F1802e205cF",
    R"F1802e205cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 15: iVar2 = (**(code **)*plVar1)(plVar1);.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar1 + 0x10))(plVar1,iVar2 - *(int *)(param_2 + 0xb8));.)F1802e205cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e205c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e205c", "FUN_1802e205c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 15: iVar2 = (**(code **)*plVar1)(plVar1);.
    // TODO: resolve the indirect call in body 17: (**(code **)(*plVar1 + 0x10))(plVar1,iVar2 - *(int *)(param_2 + 0xb8));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a8719b4120ce8ba0b397e60e076f4a96245d8ebf7330f845e1296471ec08733a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("int iVar2;");
            trace.statement("plVar1 = *(longlong **)(param_2 + 0x70);");
            if (trace.checked_condition("if (plVar1 != (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(plVar1 != (longlong *)0x0); })) {
                trace.statement("iVar2 = (**(code **)*plVar1)(plVar1);");
                if (trace.checked_condition("if (*(int *)(param_2 + 0xb8) < iVar2)", [&]() -> bool { return static_cast<bool>(load_at<std::int32_t>(param_2 + 0xb8, 0) < iVar2); })) {
                    trace.statement("(**(code **)(*plVar1 + 0x10))(plVar1,iVar2 - *(int *)(param_2 + 0xb8));");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802e205c;
}

// 0x1802e20b0 FUN_1802e20b0
// source: re/dump/decompile/0x1802e20b0_FUN_1802e20b0.c
// size: 38 bytes; thunk: false
// body sha256: f34989593945a426147fa7934dde5f354809e1655ac670758ad52916ebc59d6c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e20b0{
    "0x1802e20b0",
    "FUN_1802e20b0",
    R"F1802e20b0S(undefined FUN_1802e20b0())F1802e20b0S",
    R"B1802e20b0(// 0x1802e20b0  FUN_1802e20b0
// size=38 thunk=false
// signature: undefined FUN_1802e20b0()
// status: ok


void FUN_1802e20b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802e20b0",
    "f34989593945a426147fa7934dde5f354809e1655ac670758ad52916ebc59d6c",
    R"F1802e20b0C(FUN_18021b0b0)F1802e20b0C",
    R"F1802e20b0D()F1802e20b0D",
    R"F1802e20b0T()F1802e20b0T",
    R"F1802e20b0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e20b0F",
    R"F1802e20b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e20b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e20b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e20b0", "FUN_1802e20b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: f34989593945a426147fa7934dde5f354809e1655ac670758ad52916ebc59d6c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e20b0;
}

// 0x1802e20d6 FUN_1802e20d6
// source: re/dump/decompile/0x1802e20d6_FUN_1802e20d6.c
// size: 32 bytes; thunk: false
// body sha256: 9d24120a0a4b5e61c80e7942bab5630ad0e17e3118a9bc442a1c64a63c607fc4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e20d6{
    "0x1802e20d6",
    "FUN_1802e20d6",
    R"F1802e20d6S(undefined FUN_1802e20d6())F1802e20d6S",
    R"B1802e20d6(// 0x1802e20d6  FUN_1802e20d6
// size=32 thunk=false
// signature: undefined FUN_1802e20d6()
// status: ok


void FUN_1802e20d6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e20d6",
    "9d24120a0a4b5e61c80e7942bab5630ad0e17e3118a9bc442a1c64a63c607fc4",
    R"F1802e20d6C()F1802e20d6C",
    R"F1802e20d6D()F1802e20d6D",
    R"F1802e20d6T()F1802e20d6T",
    R"F1802e20d6F(11: return;)F1802e20d6F",
    R"F1802e20d6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e20d6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e20d6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e20d6", "FUN_1802e20d6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 9d24120a0a4b5e61c80e7942bab5630ad0e17e3118a9bc442a1c64a63c607fc4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e20d6;
}

// 0x1802e2102 FUN_1802e2102
// source: re/dump/decompile/0x1802e2102_FUN_1802e2102.c
// size: 38 bytes; thunk: false
// body sha256: 56de129deb65b2854bdb27b0db699e0e5ad78556dd0c79a62cad0252fa294862
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2102{
    "0x1802e2102",
    "FUN_1802e2102",
    R"F1802e2102S(undefined FUN_1802e2102())F1802e2102S",
    R"B1802e2102(// 0x1802e2102  FUN_1802e2102
// size=38 thunk=false
// signature: undefined FUN_1802e2102()
// status: ok


void FUN_1802e2102(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18021b640(param_2 + 0x28);
  }
  return;
}


)B1802e2102",
    "56de129deb65b2854bdb27b0db699e0e5ad78556dd0c79a62cad0252fa294862",
    R"F1802e2102C(FUN_18021b640)F1802e2102C",
    R"F1802e2102D()F1802e2102D",
    R"F1802e2102T()F1802e2102T",
    R"F1802e2102F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e2102F",
    R"F1802e2102U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2102U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2102() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2102", "FUN_1802e2102");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b640", param_2 + 0x28);
    trace.call_target("FUN_18021b640", reinterpret_cast<const void*>(&image::FUN_18021b640));
    // body sha256: 56de129deb65b2854bdb27b0db699e0e5ad78556dd0c79a62cad0252fa294862
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_18021b640(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2102;
}

// 0x1802e2128 FUN_1802e2128
// source: re/dump/decompile/0x1802e2128_FUN_1802e2128.c
// size: 29 bytes; thunk: false
// body sha256: b4b6538eb1e9de189b55a4c786be395577e78d3bf2f504fa489b9dafdbbcf636
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2128{
    "0x1802e2128",
    "FUN_1802e2128",
    R"F1802e2128S(undefined FUN_1802e2128())F1802e2128S",
    R"B1802e2128(// 0x1802e2128  FUN_1802e2128
// size=29 thunk=false
// signature: undefined FUN_1802e2128()
// status: ok


void FUN_1802e2128(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802e2128",
    "b4b6538eb1e9de189b55a4c786be395577e78d3bf2f504fa489b9dafdbbcf636",
    R"F1802e2128C()F1802e2128C",
    R"F1802e2128D()F1802e2128D",
    R"F1802e2128T()F1802e2128T",
    R"F1802e2128F(11: return;)F1802e2128F",
    R"F1802e2128U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2128U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2128() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2128", "FUN_1802e2128");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: b4b6538eb1e9de189b55a4c786be395577e78d3bf2f504fa489b9dafdbbcf636
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2128;
}

// 0x1802e2151 FUN_1802e2151
// source: re/dump/decompile/0x1802e2151_FUN_1802e2151.c
// size: 38 bytes; thunk: false
// body sha256: 64889c7950e356cda2f98f07d8654e217350cfdfe13e9a7f289475c0d5817e7d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2151{
    "0x1802e2151",
    "FUN_1802e2151",
    R"F1802e2151S(undefined FUN_1802e2151())F1802e2151S",
    R"B1802e2151(// 0x1802e2151  FUN_1802e2151
// size=38 thunk=false
// signature: undefined FUN_1802e2151()
// status: ok


void FUN_1802e2151(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_18021b600(param_2 + 0x78);
  }
  return;
}


)B1802e2151",
    "64889c7950e356cda2f98f07d8654e217350cfdfe13e9a7f289475c0d5817e7d",
    R"F1802e2151C(FUN_18021b600)F1802e2151C",
    R"F1802e2151D()F1802e2151D",
    R"F1802e2151T()F1802e2151T",
    R"F1802e2151F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e2151F",
    R"F1802e2151U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2151U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2151() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2151", "FUN_1802e2151");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b600", param_2 + 0x78);
    trace.call_target("FUN_18021b600", reinterpret_cast<const void*>(&image::FUN_18021b600));
    // body sha256: 64889c7950e356cda2f98f07d8654e217350cfdfe13e9a7f289475c0d5817e7d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_18021b600(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2151;
}

// 0x1802e2177 FUN_1802e2177
// source: re/dump/decompile/0x1802e2177_FUN_1802e2177.c
// size: 32 bytes; thunk: false
// body sha256: 35651ea7e6a83a5bd5c9d6ce4b7c58255c487397196a50f22cfaabdba6481074
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2177{
    "0x1802e2177",
    "FUN_1802e2177",
    R"F1802e2177S(undefined FUN_1802e2177())F1802e2177S",
    R"B1802e2177(// 0x1802e2177  FUN_1802e2177
// size=32 thunk=false
// signature: undefined FUN_1802e2177()
// status: ok


void FUN_1802e2177(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e2177",
    "35651ea7e6a83a5bd5c9d6ce4b7c58255c487397196a50f22cfaabdba6481074",
    R"F1802e2177C()F1802e2177C",
    R"F1802e2177D()F1802e2177D",
    R"F1802e2177T()F1802e2177T",
    R"F1802e2177F(11: return;)F1802e2177F",
    R"F1802e2177U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2177U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2177() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2177", "FUN_1802e2177");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 35651ea7e6a83a5bd5c9d6ce4b7c58255c487397196a50f22cfaabdba6481074
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2177;
}

// 0x1802e21b3 FUN_1802e21b3
// source: re/dump/decompile/0x1802e21b3_FUN_1802e21b3.c
// size: 38 bytes; thunk: false
// body sha256: 212064f713f91376e3cdb0120395496b5bc51a85ff3b77430cef91d0ff20fcda
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e21b3{
    "0x1802e21b3",
    "FUN_1802e21b3",
    R"F1802e21b3S(undefined FUN_1802e21b3())F1802e21b3S",
    R"B1802e21b3(// 0x1802e21b3  FUN_1802e21b3
// size=38 thunk=false
// signature: undefined FUN_1802e21b3()
// status: ok


void FUN_1802e21b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_18021b5a0(param_2 + 0x78);
  }
  return;
}


)B1802e21b3",
    "212064f713f91376e3cdb0120395496b5bc51a85ff3b77430cef91d0ff20fcda",
    R"F1802e21b3C(FUN_18021b5a0)F1802e21b3C",
    R"F1802e21b3D()F1802e21b3D",
    R"F1802e21b3T()F1802e21b3T",
    R"F1802e21b3F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802e21b3F",
    R"F1802e21b3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e21b3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e21b3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e21b3", "FUN_1802e21b3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b5a0", param_2 + 0x78);
    trace.call_target("FUN_18021b5a0", reinterpret_cast<const void*>(&image::FUN_18021b5a0));
    // body sha256: 212064f713f91376e3cdb0120395496b5bc51a85ff3b77430cef91d0ff20fcda
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("FUN_18021b5a0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e21b3;
}

// 0x1802e21d9 FUN_1802e21d9
// source: re/dump/decompile/0x1802e21d9_FUN_1802e21d9.c
// size: 32 bytes; thunk: false
// body sha256: fb940a4a68bf9043e9e4663e11a085d069dff5f74c954c67e5c0870fb5e60a51
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e21d9{
    "0x1802e21d9",
    "FUN_1802e21d9",
    R"F1802e21d9S(undefined FUN_1802e21d9())F1802e21d9S",
    R"B1802e21d9(// 0x1802e21d9  FUN_1802e21d9
// size=32 thunk=false
// signature: undefined FUN_1802e21d9()
// status: ok


void FUN_1802e21d9(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e21d9",
    "fb940a4a68bf9043e9e4663e11a085d069dff5f74c954c67e5c0870fb5e60a51",
    R"F1802e21d9C()F1802e21d9C",
    R"F1802e21d9D()F1802e21d9D",
    R"F1802e21d9T()F1802e21d9T",
    R"F1802e21d9F(11: return;)F1802e21d9F",
    R"F1802e21d9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e21d9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e21d9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e21d9", "FUN_1802e21d9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: fb940a4a68bf9043e9e4663e11a085d069dff5f74c954c67e5c0870fb5e60a51
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e21d9;
}

// 0x1802e2205 FUN_1802e2205
// source: re/dump/decompile/0x1802e2205_FUN_1802e2205.c
// size: 38 bytes; thunk: false
// body sha256: 855c9a3577aa901cd88a687ab9badc8bc252a164729e0e326235da70f0b716cc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2205{
    "0x1802e2205",
    "FUN_1802e2205",
    R"F1802e2205S(undefined FUN_1802e2205())F1802e2205S",
    R"B1802e2205(// 0x1802e2205  FUN_1802e2205
// size=38 thunk=false
// signature: undefined FUN_1802e2205()
// status: ok


void FUN_1802e2205(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802e2205",
    "855c9a3577aa901cd88a687ab9badc8bc252a164729e0e326235da70f0b716cc",
    R"F1802e2205C(FUN_18021b0b0)F1802e2205C",
    R"F1802e2205D()F1802e2205D",
    R"F1802e2205T()F1802e2205T",
    R"F1802e2205F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802e2205F",
    R"F1802e2205U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2205U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2205() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2205", "FUN_1802e2205");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 855c9a3577aa901cd88a687ab9badc8bc252a164729e0e326235da70f0b716cc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2205;
}

// 0x1802e222b FUN_1802e222b
// source: re/dump/decompile/0x1802e222b_FUN_1802e222b.c
// size: 32 bytes; thunk: false
// body sha256: 1c386a04510a6231b980c8ebc68e9e3e7f70d5d2307473268609d8763ea6ca61
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e222b{
    "0x1802e222b",
    "FUN_1802e222b",
    R"F1802e222bS(undefined FUN_1802e222b())F1802e222bS",
    R"B1802e222b(// 0x1802e222b  FUN_1802e222b
// size=32 thunk=false
// signature: undefined FUN_1802e222b()
// status: ok


void FUN_1802e222b(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e222b",
    "1c386a04510a6231b980c8ebc68e9e3e7f70d5d2307473268609d8763ea6ca61",
    R"F1802e222bC()F1802e222bC",
    R"F1802e222bD()F1802e222bD",
    R"F1802e222bT()F1802e222bT",
    R"F1802e222bF(11: return;)F1802e222bF",
    R"F1802e222bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e222bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e222b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e222b", "FUN_1802e222b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 1c386a04510a6231b980c8ebc68e9e3e7f70d5d2307473268609d8763ea6ca61
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e222b;
}

// 0x1802e2257 FUN_1802e2257
// source: re/dump/decompile/0x1802e2257_FUN_1802e2257.c
// size: 38 bytes; thunk: false
// body sha256: 4602726ccfbed8222ee221a7ad95d6627d716bea38e215a2da5fa2640e82e16e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2257{
    "0x1802e2257",
    "FUN_1802e2257",
    R"F1802e2257S(undefined FUN_1802e2257())F1802e2257S",
    R"B1802e2257(// 0x1802e2257  FUN_1802e2257
// size=38 thunk=false
// signature: undefined FUN_1802e2257()
// status: ok


void FUN_1802e2257(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_18021b5e0(param_2 + 0x78);
  }
  return;
}


)B1802e2257",
    "4602726ccfbed8222ee221a7ad95d6627d716bea38e215a2da5fa2640e82e16e",
    R"F1802e2257C(FUN_18021b5e0)F1802e2257C",
    R"F1802e2257D()F1802e2257D",
    R"F1802e2257T()F1802e2257T",
    R"F1802e2257F(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802e2257F",
    R"F1802e2257U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2257U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2257() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2257", "FUN_1802e2257");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b5e0", param_2 + 0x78);
    trace.call_target("FUN_18021b5e0", reinterpret_cast<const void*>(&image::FUN_18021b5e0));
    // body sha256: 4602726ccfbed8222ee221a7ad95d6627d716bea38e215a2da5fa2640e82e16e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("FUN_18021b5e0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2257;
}

// 0x1802e227d FUN_1802e227d
// source: re/dump/decompile/0x1802e227d_FUN_1802e227d.c
// size: 32 bytes; thunk: false
// body sha256: 5d66e7864fc5416e1b2fd4697701df200d1e01463faf0ed4e2ae810443862d9f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e227d{
    "0x1802e227d",
    "FUN_1802e227d",
    R"F1802e227dS(undefined FUN_1802e227d())F1802e227dS",
    R"B1802e227d(// 0x1802e227d  FUN_1802e227d
// size=32 thunk=false
// signature: undefined FUN_1802e227d()
// status: ok


void FUN_1802e227d(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e227d",
    "5d66e7864fc5416e1b2fd4697701df200d1e01463faf0ed4e2ae810443862d9f",
    R"F1802e227dC()F1802e227dC",
    R"F1802e227dD()F1802e227dD",
    R"F1802e227dT()F1802e227dT",
    R"F1802e227dF(11: return;)F1802e227dF",
    R"F1802e227dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e227dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e227d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e227d", "FUN_1802e227d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 5d66e7864fc5416e1b2fd4697701df200d1e01463faf0ed4e2ae810443862d9f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e227d;
}

// 0x1802e22a9 FUN_1802e22a9
// source: re/dump/decompile/0x1802e22a9_FUN_1802e22a9.c
// size: 38 bytes; thunk: false
// body sha256: a106552fd4afd9458992b72dc22baff54c49ccb2b4ece1838e6373e5fee7220b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e22a9{
    "0x1802e22a9",
    "FUN_1802e22a9",
    R"F1802e22a9S(undefined FUN_1802e22a9())F1802e22a9S",
    R"B1802e22a9(// 0x1802e22a9  FUN_1802e22a9
// size=38 thunk=false
// signature: undefined FUN_1802e22a9()
// status: ok


void FUN_1802e22a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_18021b5c0(param_2 + 0x78);
  }
  return;
}


)B1802e22a9",
    "a106552fd4afd9458992b72dc22baff54c49ccb2b4ece1838e6373e5fee7220b",
    R"F1802e22a9C(FUN_18021b5c0)F1802e22a9C",
    R"F1802e22a9D()F1802e22a9D",
    R"F1802e22a9T()F1802e22a9T",
    R"F1802e22a9F(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802e22a9F",
    R"F1802e22a9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e22a9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e22a9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e22a9", "FUN_1802e22a9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b5c0", param_2 + 0x78);
    trace.call_target("FUN_18021b5c0", reinterpret_cast<const void*>(&image::FUN_18021b5c0));
    // body sha256: a106552fd4afd9458992b72dc22baff54c49ccb2b4ece1838e6373e5fee7220b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("FUN_18021b5c0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e22a9;
}

// 0x1802e22cf FUN_1802e22cf
// source: re/dump/decompile/0x1802e22cf_FUN_1802e22cf.c
// size: 32 bytes; thunk: false
// body sha256: c4e0047bdc6faaeacd4d2d6ff23a2934c9b118bf7994f78ffdecd04cd11e701d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e22cf{
    "0x1802e22cf",
    "FUN_1802e22cf",
    R"F1802e22cfS(undefined FUN_1802e22cf())F1802e22cfS",
    R"B1802e22cf(// 0x1802e22cf  FUN_1802e22cf
// size=32 thunk=false
// signature: undefined FUN_1802e22cf()
// status: ok


void FUN_1802e22cf(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e22cf",
    "c4e0047bdc6faaeacd4d2d6ff23a2934c9b118bf7994f78ffdecd04cd11e701d",
    R"F1802e22cfC()F1802e22cfC",
    R"F1802e22cfD()F1802e22cfD",
    R"F1802e22cfT()F1802e22cfT",
    R"F1802e22cfF(11: return;)F1802e22cfF",
    R"F1802e22cfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e22cfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e22cf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e22cf", "FUN_1802e22cf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: c4e0047bdc6faaeacd4d2d6ff23a2934c9b118bf7994f78ffdecd04cd11e701d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e22cf;
}

// 0x1802e22fb FUN_1802e22fb
// source: re/dump/decompile/0x1802e22fb_FUN_1802e22fb.c
// size: 43 bytes; thunk: false
// body sha256: 6ce949e85f351859db05ef55c948ef8551477405141217ccc7656b33e1160cdc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e22fb{
    "0x1802e22fb",
    "FUN_1802e22fb",
    R"F1802e22fbS(undefined FUN_1802e22fb())F1802e22fbS",
    R"B1802e22fb(// 0x1802e22fb  FUN_1802e22fb
// size=43 thunk=false
// signature: undefined FUN_1802e22fb()
// status: ok


void FUN_1802e22fb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    FUN_18021b5c0(param_2 + 0x78);
  }
  return;
}


)B1802e22fb",
    "6ce949e85f351859db05ef55c948ef8551477405141217ccc7656b33e1160cdc",
    R"F1802e22fbC(FUN_18021b5c0)F1802e22fbC",
    R"F1802e22fbD()F1802e22fbD",
    R"F1802e22fbT()F1802e22fbT",
    R"F1802e22fbF(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802e22fbF",
    R"F1802e22fbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e22fbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e22fb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e22fb", "FUN_1802e22fb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b5c0", param_2 + 0x78);
    trace.call_target("FUN_18021b5c0", reinterpret_cast<const void*>(&image::FUN_18021b5c0));
    // body sha256: 6ce949e85f351859db05ef55c948ef8551477405141217ccc7656b33e1160cdc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("FUN_18021b5c0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e22fb;
}

// 0x1802e2326 FUN_1802e2326
// source: re/dump/decompile/0x1802e2326_FUN_1802e2326.c
// size: 32 bytes; thunk: false
// body sha256: e50ebe84414ba6803a0a79ca782d99c3a90f4d8641e3e6804b120811aa49f527
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2326{
    "0x1802e2326",
    "FUN_1802e2326",
    R"F1802e2326S(undefined FUN_1802e2326())F1802e2326S",
    R"B1802e2326(// 0x1802e2326  FUN_1802e2326
// size=32 thunk=false
// signature: undefined FUN_1802e2326()
// status: ok


void FUN_1802e2326(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e2326",
    "e50ebe84414ba6803a0a79ca782d99c3a90f4d8641e3e6804b120811aa49f527",
    R"F1802e2326C()F1802e2326C",
    R"F1802e2326D()F1802e2326D",
    R"F1802e2326T()F1802e2326T",
    R"F1802e2326F(11: return;)F1802e2326F",
    R"F1802e2326U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2326U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2326() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2326", "FUN_1802e2326");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: e50ebe84414ba6803a0a79ca782d99c3a90f4d8641e3e6804b120811aa49f527
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2326;
}

// 0x1802e2352 FUN_1802e2352
// source: re/dump/decompile/0x1802e2352_FUN_1802e2352.c
// size: 43 bytes; thunk: false
// body sha256: e010a55261838137af2e96a81385b402bac1a58e440cca22b1623536eef9345f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2352{
    "0x1802e2352",
    "FUN_1802e2352",
    R"F1802e2352S(undefined FUN_1802e2352())F1802e2352S",
    R"B1802e2352(// 0x1802e2352  FUN_1802e2352
// size=43 thunk=false
// signature: undefined FUN_1802e2352()
// status: ok


void FUN_1802e2352(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    FUN_18021b5c0(param_2 + 0x78);
  }
  return;
}


)B1802e2352",
    "e010a55261838137af2e96a81385b402bac1a58e440cca22b1623536eef9345f",
    R"F1802e2352C(FUN_18021b5c0)F1802e2352C",
    R"F1802e2352D()F1802e2352D",
    R"F1802e2352T()F1802e2352T",
    R"F1802e2352F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802e2352F",
    R"F1802e2352U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2352U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2352() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2352", "FUN_1802e2352");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b5c0", param_2 + 0x78);
    trace.call_target("FUN_18021b5c0", reinterpret_cast<const void*>(&image::FUN_18021b5c0));
    // body sha256: e010a55261838137af2e96a81385b402bac1a58e440cca22b1623536eef9345f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("FUN_18021b5c0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2352;
}

// 0x1802e237d FUN_1802e237d
// source: re/dump/decompile/0x1802e237d_FUN_1802e237d.c
// size: 32 bytes; thunk: false
// body sha256: 616db1d6020b60bb379443c64c925c8a4d1a6f3a3c13c36bc26b852320730602
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e237d{
    "0x1802e237d",
    "FUN_1802e237d",
    R"F1802e237dS(undefined FUN_1802e237d())F1802e237dS",
    R"B1802e237d(// 0x1802e237d  FUN_1802e237d
// size=32 thunk=false
// signature: undefined FUN_1802e237d()
// status: ok


void FUN_1802e237d(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e237d",
    "616db1d6020b60bb379443c64c925c8a4d1a6f3a3c13c36bc26b852320730602",
    R"F1802e237dC()F1802e237dC",
    R"F1802e237dD()F1802e237dD",
    R"F1802e237dT()F1802e237dT",
    R"F1802e237dF(11: return;)F1802e237dF",
    R"F1802e237dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e237dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e237d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e237d", "FUN_1802e237d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 616db1d6020b60bb379443c64c925c8a4d1a6f3a3c13c36bc26b852320730602
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e237d;
}

// 0x1802e23a9 FUN_1802e23a9
// source: re/dump/decompile/0x1802e23a9_FUN_1802e23a9.c
// size: 43 bytes; thunk: false
// body sha256: c488672be65ccd522ee0bff63e15894a05dc42daeb414b6314ea242ce4a48072
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e23a9{
    "0x1802e23a9",
    "FUN_1802e23a9",
    R"F1802e23a9S(undefined FUN_1802e23a9())F1802e23a9S",
    R"B1802e23a9(// 0x1802e23a9  FUN_1802e23a9
// size=43 thunk=false
// signature: undefined FUN_1802e23a9()
// status: ok


void FUN_1802e23a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    FUN_18021b270(param_2 + 0x78);
  }
  return;
}


)B1802e23a9",
    "c488672be65ccd522ee0bff63e15894a05dc42daeb414b6314ea242ce4a48072",
    R"F1802e23a9C(FUN_18021b270)F1802e23a9C",
    R"F1802e23a9D()F1802e23a9D",
    R"F1802e23a9T()F1802e23a9T",
    R"F1802e23a9F(10: if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
14: return;)F1802e23a9F",
    R"F1802e23a9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e23a9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e23a9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e23a9", "FUN_1802e23a9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b270", param_2 + 0x78);
    trace.call_target("FUN_18021b270", reinterpret_cast<const void*>(&image::FUN_18021b270));
    // body sha256: c488672be65ccd522ee0bff63e15894a05dc42daeb414b6314ea242ce4a48072
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;");
                trace.statement("FUN_18021b270(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e23a9;
}

// 0x1802e23d4 FUN_1802e23d4
// source: re/dump/decompile/0x1802e23d4_FUN_1802e23d4.c
// size: 32 bytes; thunk: false
// body sha256: b7ea6da91a75aa93874521e150c9a8a3e84b85085f9ba9c9b41c436a1e6f7158
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e23d4{
    "0x1802e23d4",
    "FUN_1802e23d4",
    R"F1802e23d4S(undefined FUN_1802e23d4())F1802e23d4S",
    R"B1802e23d4(// 0x1802e23d4  FUN_1802e23d4
// size=32 thunk=false
// signature: undefined FUN_1802e23d4()
// status: ok


void FUN_1802e23d4(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e23d4",
    "b7ea6da91a75aa93874521e150c9a8a3e84b85085f9ba9c9b41c436a1e6f7158",
    R"F1802e23d4C()F1802e23d4C",
    R"F1802e23d4D()F1802e23d4D",
    R"F1802e23d4T()F1802e23d4T",
    R"F1802e23d4F(11: return;)F1802e23d4F",
    R"F1802e23d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e23d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e23d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e23d4", "FUN_1802e23d4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: b7ea6da91a75aa93874521e150c9a8a3e84b85085f9ba9c9b41c436a1e6f7158
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e23d4;
}

// 0x1802e2400 FUN_1802e2400
// source: re/dump/decompile/0x1802e2400_FUN_1802e2400.c
// size: 43 bytes; thunk: false
// body sha256: c3c6bbac1682fc39af848eabc32ba64eca29b390f460fdc13deed415a94ce3ad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2400{
    "0x1802e2400",
    "FUN_1802e2400",
    R"F1802e2400S(undefined FUN_1802e2400())F1802e2400S",
    R"B1802e2400(// 0x1802e2400  FUN_1802e2400
// size=43 thunk=false
// signature: undefined FUN_1802e2400()
// status: ok


void FUN_1802e2400(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802e2400",
    "c3c6bbac1682fc39af848eabc32ba64eca29b390f460fdc13deed415a94ce3ad",
    R"F1802e2400C(FUN_18021b0b0)F1802e2400C",
    R"F1802e2400D()F1802e2400D",
    R"F1802e2400T()F1802e2400T",
    R"F1802e2400F(10: if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
14: return;)F1802e2400F",
    R"F1802e2400U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2400U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2400() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2400", "FUN_1802e2400");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: c3c6bbac1682fc39af848eabc32ba64eca29b390f460fdc13deed415a94ce3ad
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2400;
}

// 0x1802e242b FUN_1802e242b
// source: re/dump/decompile/0x1802e242b_FUN_1802e242b.c
// size: 32 bytes; thunk: false
// body sha256: 3e2b21f729a4112dff1b9a20d33b50eedf3ec1c38970a9a16087707b933ca783
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e242b{
    "0x1802e242b",
    "FUN_1802e242b",
    R"F1802e242bS(undefined FUN_1802e242b())F1802e242bS",
    R"B1802e242b(// 0x1802e242b  FUN_1802e242b
// size=32 thunk=false
// signature: undefined FUN_1802e242b()
// status: ok


void FUN_1802e242b(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e242b",
    "3e2b21f729a4112dff1b9a20d33b50eedf3ec1c38970a9a16087707b933ca783",
    R"F1802e242bC()F1802e242bC",
    R"F1802e242bD()F1802e242bD",
    R"F1802e242bT()F1802e242bT",
    R"F1802e242bF(11: return;)F1802e242bF",
    R"F1802e242bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e242bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e242b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e242b", "FUN_1802e242b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 3e2b21f729a4112dff1b9a20d33b50eedf3ec1c38970a9a16087707b933ca783
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e242b;
}

// 0x1802e2457 FUN_1802e2457
// source: re/dump/decompile/0x1802e2457_FUN_1802e2457.c
// size: 43 bytes; thunk: false
// body sha256: 617bbdf09c58dbe881705950ba72c5f5de4b81ca3daec890f86bf4e2ca103346
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2457{
    "0x1802e2457",
    "FUN_1802e2457",
    R"F1802e2457S(undefined FUN_1802e2457())F1802e2457S",
    R"B1802e2457(// 0x1802e2457  FUN_1802e2457
// size=43 thunk=false
// signature: undefined FUN_1802e2457()
// status: ok


void FUN_1802e2457(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    FUN_18021b230(param_2 + 0x78);
  }
  return;
}


)B1802e2457",
    "617bbdf09c58dbe881705950ba72c5f5de4b81ca3daec890f86bf4e2ca103346",
    R"F1802e2457C(FUN_18021b230)F1802e2457C",
    R"F1802e2457D()F1802e2457D",
    R"F1802e2457T()F1802e2457T",
    R"F1802e2457F(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802e2457F",
    R"F1802e2457U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2457U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2457() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2457", "FUN_1802e2457");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b230", param_2 + 0x78);
    trace.call_target("FUN_18021b230", reinterpret_cast<const void*>(&image::FUN_18021b230));
    // body sha256: 617bbdf09c58dbe881705950ba72c5f5de4b81ca3daec890f86bf4e2ca103346
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("FUN_18021b230(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2457;
}

// 0x1802e2482 FUN_1802e2482
// source: re/dump/decompile/0x1802e2482_FUN_1802e2482.c
// size: 32 bytes; thunk: false
// body sha256: 05d6166706634e981d196293eeae9d55faa50aae2f5ccf8cb666a2c8b429c972
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2482{
    "0x1802e2482",
    "FUN_1802e2482",
    R"F1802e2482S(undefined FUN_1802e2482())F1802e2482S",
    R"B1802e2482(// 0x1802e2482  FUN_1802e2482
// size=32 thunk=false
// signature: undefined FUN_1802e2482()
// status: ok


void FUN_1802e2482(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e2482",
    "05d6166706634e981d196293eeae9d55faa50aae2f5ccf8cb666a2c8b429c972",
    R"F1802e2482C()F1802e2482C",
    R"F1802e2482D()F1802e2482D",
    R"F1802e2482T()F1802e2482T",
    R"F1802e2482F(11: return;)F1802e2482F",
    R"F1802e2482U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2482U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2482() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2482", "FUN_1802e2482");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 05d6166706634e981d196293eeae9d55faa50aae2f5ccf8cb666a2c8b429c972
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2482;
}

// 0x1802e24ae FUN_1802e24ae
// source: re/dump/decompile/0x1802e24ae_FUN_1802e24ae.c
// size: 43 bytes; thunk: false
// body sha256: 469e033f146a29a9ce21fd7a20a16a9c2ced28bb67a57ecc113ee654a6c1d883
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e24ae{
    "0x1802e24ae",
    "FUN_1802e24ae",
    R"F1802e24aeS(undefined FUN_1802e24ae())F1802e24aeS",
    R"B1802e24ae(// 0x1802e24ae  FUN_1802e24ae
// size=43 thunk=false
// signature: undefined FUN_1802e24ae()
// status: ok


void FUN_1802e24ae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    FUN_18021b5a0(param_2 + 0x78);
  }
  return;
}


)B1802e24ae",
    "469e033f146a29a9ce21fd7a20a16a9c2ced28bb67a57ecc113ee654a6c1d883",
    R"F1802e24aeC(FUN_18021b5a0)F1802e24aeC",
    R"F1802e24aeD()F1802e24aeD",
    R"F1802e24aeT()F1802e24aeT",
    R"F1802e24aeF(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802e24aeF",
    R"F1802e24aeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e24aeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e24ae() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e24ae", "FUN_1802e24ae");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b5a0", param_2 + 0x78);
    trace.call_target("FUN_18021b5a0", reinterpret_cast<const void*>(&image::FUN_18021b5a0));
    // body sha256: 469e033f146a29a9ce21fd7a20a16a9c2ced28bb67a57ecc113ee654a6c1d883
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("FUN_18021b5a0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e24ae;
}

// 0x1802e24d9 FUN_1802e24d9
// source: re/dump/decompile/0x1802e24d9_FUN_1802e24d9.c
// size: 32 bytes; thunk: false
// body sha256: 4b0d2897693b46fdff7c5f3415ac40bcde533a44d3997d6853bac3f13462a272
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e24d9{
    "0x1802e24d9",
    "FUN_1802e24d9",
    R"F1802e24d9S(undefined FUN_1802e24d9())F1802e24d9S",
    R"B1802e24d9(// 0x1802e24d9  FUN_1802e24d9
// size=32 thunk=false
// signature: undefined FUN_1802e24d9()
// status: ok


void FUN_1802e24d9(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e24d9",
    "4b0d2897693b46fdff7c5f3415ac40bcde533a44d3997d6853bac3f13462a272",
    R"F1802e24d9C()F1802e24d9C",
    R"F1802e24d9D()F1802e24d9D",
    R"F1802e24d9T()F1802e24d9T",
    R"F1802e24d9F(11: return;)F1802e24d9F",
    R"F1802e24d9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e24d9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e24d9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e24d9", "FUN_1802e24d9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 4b0d2897693b46fdff7c5f3415ac40bcde533a44d3997d6853bac3f13462a272
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e24d9;
}

// 0x1802e2505 FUN_1802e2505
// source: re/dump/decompile/0x1802e2505_FUN_1802e2505.c
// size: 43 bytes; thunk: false
// body sha256: 897b47afefaced99828ba1d6abeb80cdc1a79be0c28063a3696753adf18083a4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2505{
    "0x1802e2505",
    "FUN_1802e2505",
    R"F1802e2505S(undefined FUN_1802e2505())F1802e2505S",
    R"B1802e2505(// 0x1802e2505  FUN_1802e2505
// size=43 thunk=false
// signature: undefined FUN_1802e2505()
// status: ok


void FUN_1802e2505(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;
    FUN_18021b1b0(param_2 + 0x78);
  }
  return;
}


)B1802e2505",
    "897b47afefaced99828ba1d6abeb80cdc1a79be0c28063a3696753adf18083a4",
    R"F1802e2505C(FUN_18021b1b0)F1802e2505C",
    R"F1802e2505D()F1802e2505D",
    R"F1802e2505T()F1802e2505T",
    R"F1802e2505F(10: if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
14: return;)F1802e2505F",
    R"F1802e2505U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2505U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2505() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2505", "FUN_1802e2505");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b1b0", param_2 + 0x78);
    trace.call_target("FUN_18021b1b0", reinterpret_cast<const void*>(&image::FUN_18021b1b0));
    // body sha256: 897b47afefaced99828ba1d6abeb80cdc1a79be0c28063a3696753adf18083a4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;");
                trace.statement("FUN_18021b1b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2505;
}

// 0x1802e2530 FUN_1802e2530
// source: re/dump/decompile/0x1802e2530_FUN_1802e2530.c
// size: 32 bytes; thunk: false
// body sha256: fc4a78639772b03d9245940e272d44905c379140eec3fc31771e16266ff13311
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2530{
    "0x1802e2530",
    "FUN_1802e2530",
    R"F1802e2530S(undefined FUN_1802e2530())F1802e2530S",
    R"B1802e2530(// 0x1802e2530  FUN_1802e2530
// size=32 thunk=false
// signature: undefined FUN_1802e2530()
// status: ok


void FUN_1802e2530(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e2530",
    "fc4a78639772b03d9245940e272d44905c379140eec3fc31771e16266ff13311",
    R"F1802e2530C()F1802e2530C",
    R"F1802e2530D()F1802e2530D",
    R"F1802e2530T()F1802e2530T",
    R"F1802e2530F(11: return;)F1802e2530F",
    R"F1802e2530U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2530U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2530() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2530", "FUN_1802e2530");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: fc4a78639772b03d9245940e272d44905c379140eec3fc31771e16266ff13311
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2530;
}

// 0x1802e255c FUN_1802e255c
// source: re/dump/decompile/0x1802e255c_FUN_1802e255c.c
// size: 43 bytes; thunk: false
// body sha256: 98f1934361b0f4b226b93a9fda25c988d53a85a198710278f4dbcb8c4abd8686
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e255c{
    "0x1802e255c",
    "FUN_1802e255c",
    R"F1802e255cS(undefined FUN_1802e255c())F1802e255cS",
    R"B1802e255c(// 0x1802e255c  FUN_1802e255c
// size=43 thunk=false
// signature: undefined FUN_1802e255c()
// status: ok


void FUN_1802e255c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802e255c",
    "98f1934361b0f4b226b93a9fda25c988d53a85a198710278f4dbcb8c4abd8686",
    R"F1802e255cC(FUN_18021b0b0)F1802e255cC",
    R"F1802e255cD()F1802e255cD",
    R"F1802e255cT()F1802e255cT",
    R"F1802e255cF(10: if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
14: return;)F1802e255cF",
    R"F1802e255cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e255cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e255c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e255c", "FUN_1802e255c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 98f1934361b0f4b226b93a9fda25c988d53a85a198710278f4dbcb8c4abd8686
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e255c;
}

// 0x1802e2587 FUN_1802e2587
// source: re/dump/decompile/0x1802e2587_FUN_1802e2587.c
// size: 32 bytes; thunk: false
// body sha256: 17313707f39d2537fb1e5b2b040c3272d273b240bfaf0738af53d19c96b6e4da
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2587{
    "0x1802e2587",
    "FUN_1802e2587",
    R"F1802e2587S(undefined FUN_1802e2587())F1802e2587S",
    R"B1802e2587(// 0x1802e2587  FUN_1802e2587
// size=32 thunk=false
// signature: undefined FUN_1802e2587()
// status: ok


void FUN_1802e2587(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e2587",
    "17313707f39d2537fb1e5b2b040c3272d273b240bfaf0738af53d19c96b6e4da",
    R"F1802e2587C()F1802e2587C",
    R"F1802e2587D()F1802e2587D",
    R"F1802e2587T()F1802e2587T",
    R"F1802e2587F(11: return;)F1802e2587F",
    R"F1802e2587U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2587U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2587() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2587", "FUN_1802e2587");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 17313707f39d2537fb1e5b2b040c3272d273b240bfaf0738af53d19c96b6e4da
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2587;
}

// 0x1802e25b3 FUN_1802e25b3
// source: re/dump/decompile/0x1802e25b3_FUN_1802e25b3.c
// size: 43 bytes; thunk: false
// body sha256: 564a306cf5e941627dfe36dae8e44e073a7c504e0086e1adb1be76ff0a363b00
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e25b3{
    "0x1802e25b3",
    "FUN_1802e25b3",
    R"F1802e25b3S(undefined FUN_1802e25b3())F1802e25b3S",
    R"B1802e25b3(// 0x1802e25b3  FUN_1802e25b3
// size=43 thunk=false
// signature: undefined FUN_1802e25b3()
// status: ok


void FUN_1802e25b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    FUN_18021b3f0(param_2 + 0x78);
  }
  return;
}


)B1802e25b3",
    "564a306cf5e941627dfe36dae8e44e073a7c504e0086e1adb1be76ff0a363b00",
    R"F1802e25b3C(FUN_18021b3f0)F1802e25b3C",
    R"F1802e25b3D()F1802e25b3D",
    R"F1802e25b3T()F1802e25b3T",
    R"F1802e25b3F(10: if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
14: return;)F1802e25b3F",
    R"F1802e25b3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e25b3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e25b3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e25b3", "FUN_1802e25b3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b3f0", param_2 + 0x78);
    trace.call_target("FUN_18021b3f0", reinterpret_cast<const void*>(&image::FUN_18021b3f0));
    // body sha256: 564a306cf5e941627dfe36dae8e44e073a7c504e0086e1adb1be76ff0a363b00
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;");
                trace.statement("FUN_18021b3f0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e25b3;
}

// 0x1802e25de FUN_1802e25de
// source: re/dump/decompile/0x1802e25de_FUN_1802e25de.c
// size: 32 bytes; thunk: false
// body sha256: 2884602b296ce803f3ffe61bc6e66263e05d0d0f7e9aa946b963b7e782ad1a08
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e25de{
    "0x1802e25de",
    "FUN_1802e25de",
    R"F1802e25deS(undefined FUN_1802e25de())F1802e25deS",
    R"B1802e25de(// 0x1802e25de  FUN_1802e25de
// size=32 thunk=false
// signature: undefined FUN_1802e25de()
// status: ok


void FUN_1802e25de(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e25de",
    "2884602b296ce803f3ffe61bc6e66263e05d0d0f7e9aa946b963b7e782ad1a08",
    R"F1802e25deC()F1802e25deC",
    R"F1802e25deD()F1802e25deD",
    R"F1802e25deT()F1802e25deT",
    R"F1802e25deF(11: return;)F1802e25deF",
    R"F1802e25deU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e25deU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e25de() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e25de", "FUN_1802e25de");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 2884602b296ce803f3ffe61bc6e66263e05d0d0f7e9aa946b963b7e782ad1a08
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e25de;
}

// 0x1802e260a FUN_1802e260a
// source: re/dump/decompile/0x1802e260a_FUN_1802e260a.c
// size: 43 bytes; thunk: false
// body sha256: d5eb532260603542474e1c7ff1b2cfc29adc5ec752a6f32e6057a29961a76c67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e260a{
    "0x1802e260a",
    "FUN_1802e260a",
    R"F1802e260aS(undefined FUN_1802e260a())F1802e260aS",
    R"B1802e260a(// 0x1802e260a  FUN_1802e260a
// size=43 thunk=false
// signature: undefined FUN_1802e260a()
// status: ok


void FUN_1802e260a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    FUN_18021b580(param_2 + 0x78);
  }
  return;
}


)B1802e260a",
    "d5eb532260603542474e1c7ff1b2cfc29adc5ec752a6f32e6057a29961a76c67",
    R"F1802e260aC(FUN_18021b580)F1802e260aC",
    R"F1802e260aD()F1802e260aD",
    R"F1802e260aT()F1802e260aT",
    R"F1802e260aF(10: if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
14: return;)F1802e260aF",
    R"F1802e260aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e260aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e260a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e260a", "FUN_1802e260a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b580", param_2 + 0x78);
    trace.call_target("FUN_18021b580", reinterpret_cast<const void*>(&image::FUN_18021b580));
    // body sha256: d5eb532260603542474e1c7ff1b2cfc29adc5ec752a6f32e6057a29961a76c67
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;");
                trace.statement("FUN_18021b580(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e260a;
}

// 0x1802e2635 FUN_1802e2635
// source: re/dump/decompile/0x1802e2635_FUN_1802e2635.c
// size: 32 bytes; thunk: false
// body sha256: de532ea99720d1bf2033c91630984b08537ba5eb740551352a0d8dedf165bad6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2635{
    "0x1802e2635",
    "FUN_1802e2635",
    R"F1802e2635S(undefined FUN_1802e2635())F1802e2635S",
    R"B1802e2635(// 0x1802e2635  FUN_1802e2635
// size=32 thunk=false
// signature: undefined FUN_1802e2635()
// status: ok


void FUN_1802e2635(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e2635",
    "de532ea99720d1bf2033c91630984b08537ba5eb740551352a0d8dedf165bad6",
    R"F1802e2635C()F1802e2635C",
    R"F1802e2635D()F1802e2635D",
    R"F1802e2635T()F1802e2635T",
    R"F1802e2635F(11: return;)F1802e2635F",
    R"F1802e2635U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2635U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2635() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2635", "FUN_1802e2635");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: de532ea99720d1bf2033c91630984b08537ba5eb740551352a0d8dedf165bad6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2635;
}

// 0x1802e2661 FUN_1802e2661
// source: re/dump/decompile/0x1802e2661_FUN_1802e2661.c
// size: 43 bytes; thunk: false
// body sha256: f4210795225f665a3cc0d58fae24944dec6c05a01f60e1696764558fac79303b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2661{
    "0x1802e2661",
    "FUN_1802e2661",
    R"F1802e2661S(undefined FUN_1802e2661())F1802e2661S",
    R"B1802e2661(// 0x1802e2661  FUN_1802e2661
// size=43 thunk=false
// signature: undefined FUN_1802e2661()
// status: ok


void FUN_1802e2661(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffdffff;
    FUN_18021b470(param_2 + 0x78);
  }
  return;
}


)B1802e2661",
    "f4210795225f665a3cc0d58fae24944dec6c05a01f60e1696764558fac79303b",
    R"F1802e2661C(FUN_18021b470)F1802e2661C",
    R"F1802e2661D()F1802e2661D",
    R"F1802e2661T()F1802e2661T",
    R"F1802e2661F(10: if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0) {
14: return;)F1802e2661F",
    R"F1802e2661U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2661U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2661() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2661", "FUN_1802e2661");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b470", param_2 + 0x78);
    trace.call_target("FUN_18021b470", reinterpret_cast<const void*>(&image::FUN_18021b470));
    // body sha256: f4210795225f665a3cc0d58fae24944dec6c05a01f60e1696764558fac79303b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffdffff;");
                trace.statement("FUN_18021b470(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2661;
}

// 0x1802e268c FUN_1802e268c
// source: re/dump/decompile/0x1802e268c_FUN_1802e268c.c
// size: 32 bytes; thunk: false
// body sha256: 4b25673fd477715efe3598c2d548827f7c3dfd6ea24078b102ac1c2f561f6289
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e268c{
    "0x1802e268c",
    "FUN_1802e268c",
    R"F1802e268cS(undefined FUN_1802e268c())F1802e268cS",
    R"B1802e268c(// 0x1802e268c  FUN_1802e268c
// size=32 thunk=false
// signature: undefined FUN_1802e268c()
// status: ok


void FUN_1802e268c(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e268c",
    "4b25673fd477715efe3598c2d548827f7c3dfd6ea24078b102ac1c2f561f6289",
    R"F1802e268cC()F1802e268cC",
    R"F1802e268cD()F1802e268cD",
    R"F1802e268cT()F1802e268cT",
    R"F1802e268cF(11: return;)F1802e268cF",
    R"F1802e268cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e268cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e268c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e268c", "FUN_1802e268c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 4b25673fd477715efe3598c2d548827f7c3dfd6ea24078b102ac1c2f561f6289
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e268c;
}

// 0x1802e26b8 FUN_1802e26b8
// source: re/dump/decompile/0x1802e26b8_FUN_1802e26b8.c
// size: 43 bytes; thunk: false
// body sha256: ec5172d7fec049184441cb4fb5802a3bbc832c2915381de7dd413369d4fe4d38
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e26b8{
    "0x1802e26b8",
    "FUN_1802e26b8",
    R"F1802e26b8S(undefined FUN_1802e26b8())F1802e26b8S",
    R"B1802e26b8(// 0x1802e26b8  FUN_1802e26b8
// size=43 thunk=false
// signature: undefined FUN_1802e26b8()
// status: ok


void FUN_1802e26b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;
    FUN_18021b560(param_2 + 0x78);
  }
  return;
}


)B1802e26b8",
    "ec5172d7fec049184441cb4fb5802a3bbc832c2915381de7dd413369d4fe4d38",
    R"F1802e26b8C(FUN_18021b560)F1802e26b8C",
    R"F1802e26b8D()F1802e26b8D",
    R"F1802e26b8T()F1802e26b8T",
    R"F1802e26b8F(10: if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
14: return;)F1802e26b8F",
    R"F1802e26b8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e26b8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e26b8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e26b8", "FUN_1802e26b8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b560", param_2 + 0x78);
    trace.call_target("FUN_18021b560", reinterpret_cast<const void*>(&image::FUN_18021b560));
    // body sha256: ec5172d7fec049184441cb4fb5802a3bbc832c2915381de7dd413369d4fe4d38
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;");
                trace.statement("FUN_18021b560(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e26b8;
}

// 0x1802e26e3 FUN_1802e26e3
// source: re/dump/decompile/0x1802e26e3_FUN_1802e26e3.c
// size: 32 bytes; thunk: false
// body sha256: eb1f061d81dcd251402f6a52491208b1dff9847e37678e04c6fa3005d7f30cbc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e26e3{
    "0x1802e26e3",
    "FUN_1802e26e3",
    R"F1802e26e3S(undefined FUN_1802e26e3())F1802e26e3S",
    R"B1802e26e3(// 0x1802e26e3  FUN_1802e26e3
// size=32 thunk=false
// signature: undefined FUN_1802e26e3()
// status: ok


void FUN_1802e26e3(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e26e3",
    "eb1f061d81dcd251402f6a52491208b1dff9847e37678e04c6fa3005d7f30cbc",
    R"F1802e26e3C()F1802e26e3C",
    R"F1802e26e3D()F1802e26e3D",
    R"F1802e26e3T()F1802e26e3T",
    R"F1802e26e3F(11: return;)F1802e26e3F",
    R"F1802e26e3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e26e3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e26e3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e26e3", "FUN_1802e26e3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: eb1f061d81dcd251402f6a52491208b1dff9847e37678e04c6fa3005d7f30cbc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e26e3;
}

// 0x1802e270f FUN_1802e270f
// source: re/dump/decompile/0x1802e270f_FUN_1802e270f.c
// size: 43 bytes; thunk: false
// body sha256: 5d48a6eb27c29ba6e365e9289e154796f67a52cd5346c6fd3ad6b887711deb0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e270f{
    "0x1802e270f",
    "FUN_1802e270f",
    R"F1802e270fS(undefined FUN_1802e270f())F1802e270fS",
    R"B1802e270f(// 0x1802e270f  FUN_1802e270f
// size=43 thunk=false
// signature: undefined FUN_1802e270f()
// status: ok


void FUN_1802e270f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    FUN_18021b520(param_2 + 0x78);
  }
  return;
}


)B1802e270f",
    "5d48a6eb27c29ba6e365e9289e154796f67a52cd5346c6fd3ad6b887711deb0d",
    R"F1802e270fC(FUN_18021b520)F1802e270fC",
    R"F1802e270fD()F1802e270fD",
    R"F1802e270fT()F1802e270fT",
    R"F1802e270fF(10: if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
14: return;)F1802e270fF",
    R"F1802e270fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e270fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e270f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e270f", "FUN_1802e270f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b520", param_2 + 0x78);
    trace.call_target("FUN_18021b520", reinterpret_cast<const void*>(&image::FUN_18021b520));
    // body sha256: 5d48a6eb27c29ba6e365e9289e154796f67a52cd5346c6fd3ad6b887711deb0d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;");
                trace.statement("FUN_18021b520(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e270f;
}

// 0x1802e273a FUN_1802e273a
// source: re/dump/decompile/0x1802e273a_FUN_1802e273a.c
// size: 32 bytes; thunk: false
// body sha256: 01978ff66d2cc0e48ca2954abfde7fbbd10ada60eee3195dde44eb595bc87b16
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e273a{
    "0x1802e273a",
    "FUN_1802e273a",
    R"F1802e273aS(undefined FUN_1802e273a())F1802e273aS",
    R"B1802e273a(// 0x1802e273a  FUN_1802e273a
// size=32 thunk=false
// signature: undefined FUN_1802e273a()
// status: ok


void FUN_1802e273a(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e273a",
    "01978ff66d2cc0e48ca2954abfde7fbbd10ada60eee3195dde44eb595bc87b16",
    R"F1802e273aC()F1802e273aC",
    R"F1802e273aD()F1802e273aD",
    R"F1802e273aT()F1802e273aT",
    R"F1802e273aF(11: return;)F1802e273aF",
    R"F1802e273aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e273aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e273a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e273a", "FUN_1802e273a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 01978ff66d2cc0e48ca2954abfde7fbbd10ada60eee3195dde44eb595bc87b16
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e273a;
}

// 0x1802e2766 FUN_1802e2766
// source: re/dump/decompile/0x1802e2766_FUN_1802e2766.c
// size: 43 bytes; thunk: false
// body sha256: eb4196b6386cfd98434c00d2b6b7b0aa82348ce3ab3bf4a88fefcbe17ed36782
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2766{
    "0x1802e2766",
    "FUN_1802e2766",
    R"F1802e2766S(undefined FUN_1802e2766())F1802e2766S",
    R"B1802e2766(// 0x1802e2766  FUN_1802e2766
// size=43 thunk=false
// signature: undefined FUN_1802e2766()
// status: ok


void FUN_1802e2766(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    FUN_18021b500(param_2 + 0x78);
  }
  return;
}


)B1802e2766",
    "eb4196b6386cfd98434c00d2b6b7b0aa82348ce3ab3bf4a88fefcbe17ed36782",
    R"F1802e2766C(FUN_18021b500)F1802e2766C",
    R"F1802e2766D()F1802e2766D",
    R"F1802e2766T()F1802e2766T",
    R"F1802e2766F(10: if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
14: return;)F1802e2766F",
    R"F1802e2766U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2766U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2766() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2766", "FUN_1802e2766");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b500", param_2 + 0x78);
    trace.call_target("FUN_18021b500", reinterpret_cast<const void*>(&image::FUN_18021b500));
    // body sha256: eb4196b6386cfd98434c00d2b6b7b0aa82348ce3ab3bf4a88fefcbe17ed36782
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;");
                trace.statement("FUN_18021b500(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2766;
}

// 0x1802e2791 FUN_1802e2791
// source: re/dump/decompile/0x1802e2791_FUN_1802e2791.c
// size: 32 bytes; thunk: false
// body sha256: bcb434d48af0895371514feb3a8e0869ee7ce569fd622fc7a712f8b39ee6820f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2791{
    "0x1802e2791",
    "FUN_1802e2791",
    R"F1802e2791S(undefined FUN_1802e2791())F1802e2791S",
    R"B1802e2791(// 0x1802e2791  FUN_1802e2791
// size=32 thunk=false
// signature: undefined FUN_1802e2791()
// status: ok


void FUN_1802e2791(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e2791",
    "bcb434d48af0895371514feb3a8e0869ee7ce569fd622fc7a712f8b39ee6820f",
    R"F1802e2791C()F1802e2791C",
    R"F1802e2791D()F1802e2791D",
    R"F1802e2791T()F1802e2791T",
    R"F1802e2791F(11: return;)F1802e2791F",
    R"F1802e2791U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2791U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2791() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2791", "FUN_1802e2791");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: bcb434d48af0895371514feb3a8e0869ee7ce569fd622fc7a712f8b39ee6820f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e2791;
}

// 0x1802e27bd FUN_1802e27bd
// source: re/dump/decompile/0x1802e27bd_FUN_1802e27bd.c
// size: 43 bytes; thunk: false
// body sha256: c3f89e3524e2e6f94f8f89d36b7be2fa461025f0fcd62782153a327ec64c18a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e27bd{
    "0x1802e27bd",
    "FUN_1802e27bd",
    R"F1802e27bdS(undefined FUN_1802e27bd())F1802e27bdS",
    R"B1802e27bd(// 0x1802e27bd  FUN_1802e27bd
// size=43 thunk=false
// signature: undefined FUN_1802e27bd()
// status: ok


void FUN_1802e27bd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802e27bd",
    "c3f89e3524e2e6f94f8f89d36b7be2fa461025f0fcd62782153a327ec64c18a7",
    R"F1802e27bdC(FUN_18021b0b0)F1802e27bdC",
    R"F1802e27bdD()F1802e27bdD",
    R"F1802e27bdT()F1802e27bdT",
    R"F1802e27bdF(10: if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
14: return;)F1802e27bdF",
    R"F1802e27bdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e27bdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e27bd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e27bd", "FUN_1802e27bd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: c3f89e3524e2e6f94f8f89d36b7be2fa461025f0fcd62782153a327ec64c18a7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x200000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e27bd;
}

// 0x1802e27e8 FUN_1802e27e8
// source: re/dump/decompile/0x1802e27e8_FUN_1802e27e8.c
// size: 32 bytes; thunk: false
// body sha256: 97ae749c97f12eae2c9378d6ef1b8d6a82804a8fe45816eb5a66c8bfbe77da9c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e27e8{
    "0x1802e27e8",
    "FUN_1802e27e8",
    R"F1802e27e8S(undefined FUN_1802e27e8())F1802e27e8S",
    R"B1802e27e8(// 0x1802e27e8  FUN_1802e27e8
// size=32 thunk=false
// signature: undefined FUN_1802e27e8()
// status: ok


void FUN_1802e27e8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802e27e8",
    "97ae749c97f12eae2c9378d6ef1b8d6a82804a8fe45816eb5a66c8bfbe77da9c",
    R"F1802e27e8C()F1802e27e8C",
    R"F1802e27e8D()F1802e27e8D",
    R"F1802e27e8T()F1802e27e8T",
    R"F1802e27e8F(11: return;)F1802e27e8F",
    R"F1802e27e8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e27e8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e27e8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e27e8", "FUN_1802e27e8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 97ae749c97f12eae2c9378d6ef1b8d6a82804a8fe45816eb5a66c8bfbe77da9c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802e27e8;
}

// 0x1802e2820 FUN_1802e2820
// source: re/dump/decompile/0x1802e2820_FUN_1802e2820.c
// size: 38 bytes; thunk: false
// body sha256: a5039a93abdda37afd9737e0f911e32966fab4d461574da18b4655056add0427
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2820{
    "0x1802e2820",
    "FUN_1802e2820",
    R"F1802e2820S(undefined FUN_1802e2820())F1802e2820S",
    R"B1802e2820(// 0x1802e2820  FUN_1802e2820
// size=38 thunk=false
// signature: undefined FUN_1802e2820()
// status: ok


void FUN_1802e2820(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802e2820",
    "a5039a93abdda37afd9737e0f911e32966fab4d461574da18b4655056add0427",
    R"F1802e2820C()F1802e2820C",
    R"F1802e2820D()F1802e2820D",
    R"F1802e2820T()F1802e2820T",
    R"F1802e2820F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e2820F",
    R"F1802e2820U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2820U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2820() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2820", "FUN_1802e2820");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: a5039a93abdda37afd9737e0f911e32966fab4d461574da18b4655056add0427
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2820;
}

// 0x1802e2852 FUN_1802e2852
// source: re/dump/decompile/0x1802e2852_FUN_1802e2852.c
// size: 78 bytes; thunk: false
// body sha256: b239f6866d86d325bea5d139c33eed7481634165251c7bfb7b8e4e9e40d55072
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2852{
    "0x1802e2852",
    "FUN_1802e2852",
    R"F1802e2852S(undefined FUN_1802e2852())F1802e2852S",
    R"B1802e2852(// 0x1802e2852  FUN_1802e2852
// size=78 thunk=false
// signature: undefined FUN_1802e2852()
// status: ok


undefined8 FUN_1802e2852(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
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


)B1802e2852",
    "b239f6866d86d325bea5d139c33eed7481634165251c7bfb7b8e4e9e40d55072",
    R"F1802e2852C()F1802e2852C",
    R"F1802e2852D()F1802e2852D",
    R"F1802e2852T()F1802e2852T",
    R"F1802e2852F(21: return 0;)F1802e2852F",
    R"F1802e2852U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2852U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2852() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2852", "FUN_1802e2852");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t * puVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b239f6866d86d325bea5d139c33eed7481634165251c7bfb7b8e4e9e40d55072
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("puVar1 = *(undefined8 **)(param_2 + 0x28);");
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
    return kFunction_0x1802e2852;
}

// 0x1802e28b0 FUN_1802e28b0
// source: re/dump/decompile/0x1802e28b0_FUN_1802e28b0.c
// size: 41 bytes; thunk: false
// body sha256: 4ebc65002e834909ec92ed5e579f7755990a9ed751eef540f475d82660a9761b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e28b0{
    "0x1802e28b0",
    "FUN_1802e28b0",
    R"F1802e28b0S(undefined FUN_1802e28b0())F1802e28b0S",
    R"B1802e28b0(// 0x1802e28b0  FUN_1802e28b0
// size=41 thunk=false
// signature: undefined FUN_1802e28b0()
// status: ok


void FUN_1802e28b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x80);
  }
  return;
}


)B1802e28b0",
    "4ebc65002e834909ec92ed5e579f7755990a9ed751eef540f475d82660a9761b",
    R"F1802e28b0C(FUN_18001bc60)F1802e28b0C",
    R"F1802e28b0D()F1802e28b0D",
    R"F1802e28b0T()F1802e28b0T",
    R"F1802e28b0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e28b0F",
    R"F1802e28b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e28b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e28b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e28b0", "FUN_1802e28b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x80);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 4ebc65002e834909ec92ed5e579f7755990a9ed751eef540f475d82660a9761b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18001bc60(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e28b0;
}

// 0x1802e28d9 FUN_1802e28d9
// source: re/dump/decompile/0x1802e28d9_FUN_1802e28d9.c
// size: 38 bytes; thunk: false
// body sha256: 1fa29ac0b03067b83e41b5bc1bc850abd59a7a04c0d3dd74330c4c203168b68d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e28d9{
    "0x1802e28d9",
    "FUN_1802e28d9",
    R"F1802e28d9S(undefined FUN_1802e28d9())F1802e28d9S",
    R"B1802e28d9(// 0x1802e28d9  FUN_1802e28d9
// size=38 thunk=false
// signature: undefined FUN_1802e28d9()
// status: ok


void FUN_1802e28d9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x68);
  }
  return;
}


)B1802e28d9",
    "1fa29ac0b03067b83e41b5bc1bc850abd59a7a04c0d3dd74330c4c203168b68d",
    R"F1802e28d9C(FUN_18001bc60)F1802e28d9C",
    R"F1802e28d9D()F1802e28d9D",
    R"F1802e28d9T()F1802e28d9T",
    R"F1802e28d9F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e28d9F",
    R"F1802e28d9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e28d9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e28d9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e28d9", "FUN_1802e28d9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x68);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 1fa29ac0b03067b83e41b5bc1bc850abd59a7a04c0d3dd74330c4c203168b68d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_18001bc60(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e28d9;
}

// 0x1802e28ff FUN_1802e28ff
// source: re/dump/decompile/0x1802e28ff_FUN_1802e28ff.c
// size: 43 bytes; thunk: false
// body sha256: 205832883347ee95c6c3da4637d1b457c04e8c1d9323c5b0a5a37b809db97eb1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e28ff{
    "0x1802e28ff",
    "FUN_1802e28ff",
    R"F1802e28ffS(undefined FUN_1802e28ff())F1802e28ffS",
    R"B1802e28ff(// 0x1802e28ff  FUN_1802e28ff
// size=43 thunk=false
// signature: undefined FUN_1802e28ff()
// status: ok


undefined8 FUN_1802e28ff(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0xb0) = 0;
  return 0;
}


)B1802e28ff",
    "205832883347ee95c6c3da4637d1b457c04e8c1d9323c5b0a5a37b809db97eb1",
    R"F1802e28ffC()F1802e28ffC",
    R"F1802e28ffD()F1802e28ffD",
    R"F1802e28ffT()F1802e28ffT",
    R"F1802e28ffF(11: return 0;)F1802e28ffF",
    R"F1802e28ffU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e28ffU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e28ff() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e28ff", "FUN_1802e28ff");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 205832883347ee95c6c3da4637d1b457c04e8c1d9323c5b0a5a37b809db97eb1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("**(undefined8 **)(param_2 + 0xb0) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e28ff;
}

// 0x1802e293c FUN_1802e293c
// source: re/dump/decompile/0x1802e293c_FUN_1802e293c.c
// size: 29 bytes; thunk: false
// body sha256: 75b793b126a8149329090ff7e89e8b84a4fd2f8faca04399f7c803653f5ada32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e293c{
    "0x1802e293c",
    "FUN_1802e293c",
    R"F1802e293cS(undefined FUN_1802e293c())F1802e293cS",
    R"B1802e293c(// 0x1802e293c  FUN_1802e293c
// size=29 thunk=false
// signature: undefined FUN_1802e293c()
// status: ok


undefined8 FUN_1802e293c(void)

{
  return 0;
}


)B1802e293c",
    "75b793b126a8149329090ff7e89e8b84a4fd2f8faca04399f7c803653f5ada32",
    R"F1802e293cC()F1802e293cC",
    R"F1802e293cD()F1802e293cD",
    R"F1802e293cT()F1802e293cT",
    R"F1802e293cF(10: return 0;)F1802e293cF",
    R"F1802e293cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e293cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e293c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e293c", "FUN_1802e293c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 75b793b126a8149329090ff7e89e8b84a4fd2f8faca04399f7c803653f5ada32
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e293c;
}

// 0x1802e2960 FUN_1802e2960
// source: re/dump/decompile/0x1802e2960_FUN_1802e2960.c
// size: 29 bytes; thunk: false
// body sha256: d089a4d7898672f10275110d5f1083e93c9ecee0da7414d6c20712cce1fbd2b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2960{
    "0x1802e2960",
    "FUN_1802e2960",
    R"F1802e2960S(undefined FUN_1802e2960())F1802e2960S",
    R"B1802e2960(// 0x1802e2960  FUN_1802e2960
// size=29 thunk=false
// signature: undefined FUN_1802e2960()
// status: ok


undefined8 FUN_1802e2960(void)

{
  return 0;
}


)B1802e2960",
    "d089a4d7898672f10275110d5f1083e93c9ecee0da7414d6c20712cce1fbd2b1",
    R"F1802e2960C()F1802e2960C",
    R"F1802e2960D()F1802e2960D",
    R"F1802e2960T()F1802e2960T",
    R"F1802e2960F(10: return 0;)F1802e2960F",
    R"F1802e2960U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2960U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2960() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2960", "FUN_1802e2960");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d089a4d7898672f10275110d5f1083e93c9ecee0da7414d6c20712cce1fbd2b1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2960;
}

// 0x1802e297e FUN_1802e297e
// source: re/dump/decompile/0x1802e297e_FUN_1802e297e.c
// size: 29 bytes; thunk: false
// body sha256: ff28c52fef7b3591770e4ff3c3285374ad3313340c4b7d1274ab4e609b1210c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e297e{
    "0x1802e297e",
    "FUN_1802e297e",
    R"F1802e297eS(undefined FUN_1802e297e())F1802e297eS",
    R"B1802e297e(// 0x1802e297e  FUN_1802e297e
// size=29 thunk=false
// signature: undefined FUN_1802e297e()
// status: ok


undefined8 FUN_1802e297e(void)

{
  return 0;
}


)B1802e297e",
    "ff28c52fef7b3591770e4ff3c3285374ad3313340c4b7d1274ab4e609b1210c6",
    R"F1802e297eC()F1802e297eC",
    R"F1802e297eD()F1802e297eD",
    R"F1802e297eT()F1802e297eT",
    R"F1802e297eF(10: return 0;)F1802e297eF",
    R"F1802e297eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e297eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e297e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e297e", "FUN_1802e297e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ff28c52fef7b3591770e4ff3c3285374ad3313340c4b7d1274ab4e609b1210c6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e297e;
}

// 0x1802e299c FUN_1802e299c
// source: re/dump/decompile/0x1802e299c_FUN_1802e299c.c
// size: 22 bytes; thunk: false
// body sha256: 7ea607ee9a4c74a41b3671f40a2c219c4b53f70a7e4163abff03ff46997925a8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e299c{
    "0x1802e299c",
    "FUN_1802e299c",
    R"F1802e299cS(undefined FUN_1802e299c())F1802e299cS",
    R"B1802e299c(// 0x1802e299c  FUN_1802e299c
// size=22 thunk=false
// signature: undefined FUN_1802e299c()
// status: ok


void FUN_1802e299c(void)

{
  DAT_1805c59f8 = DAT_1805c59f8 & 0xfffffffe;
  return;
}


)B1802e299c",
    "7ea607ee9a4c74a41b3671f40a2c219c4b53f70a7e4163abff03ff46997925a8",
    R"F1802e299cC()F1802e299cC",
    R"F1802e299cD(DAT_1805c59f8)F1802e299cD",
    R"F1802e299cT()F1802e299cT",
    R"F1802e299cF(11: return;)F1802e299cF",
    R"F1802e299cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c59f8.)F1802e299cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e299c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e299c", "FUN_1802e299c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c59f8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c59f8", static_cast<const void*>(&image::DAT_1805c59f8));
    // body sha256: 7ea607ee9a4c74a41b3671f40a2c219c4b53f70a7e4163abff03ff46997925a8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c59f8 = DAT_1805c59f8 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802e299c;
}

// 0x1802e29b2 FUN_1802e29b2
// source: re/dump/decompile/0x1802e29b2_FUN_1802e29b2.c
// size: 29 bytes; thunk: false
// body sha256: 538ee064df63787e3692fe0af4bc06da6fda1f2c656c5f6ee9c2c977d993205e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e29b2{
    "0x1802e29b2",
    "FUN_1802e29b2",
    R"F1802e29b2S(undefined FUN_1802e29b2())F1802e29b2S",
    R"B1802e29b2(// 0x1802e29b2  FUN_1802e29b2
// size=29 thunk=false
// signature: undefined FUN_1802e29b2()
// status: ok


undefined8 FUN_1802e29b2(void)

{
  return 0;
}


)B1802e29b2",
    "538ee064df63787e3692fe0af4bc06da6fda1f2c656c5f6ee9c2c977d993205e",
    R"F1802e29b2C()F1802e29b2C",
    R"F1802e29b2D()F1802e29b2D",
    R"F1802e29b2T()F1802e29b2T",
    R"F1802e29b2F(10: return 0;)F1802e29b2F",
    R"F1802e29b2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e29b2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e29b2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e29b2", "FUN_1802e29b2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 538ee064df63787e3692fe0af4bc06da6fda1f2c656c5f6ee9c2c977d993205e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e29b2;
}

// 0x1802e29d0 FUN_1802e29d0
// source: re/dump/decompile/0x1802e29d0_FUN_1802e29d0.c
// size: 29 bytes; thunk: false
// body sha256: aa4c766316d795c831b86821fa3b6c376f9b5e8704747de6bf2b810de6f526bc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e29d0{
    "0x1802e29d0",
    "FUN_1802e29d0",
    R"F1802e29d0S(undefined FUN_1802e29d0())F1802e29d0S",
    R"B1802e29d0(// 0x1802e29d0  FUN_1802e29d0
// size=29 thunk=false
// signature: undefined FUN_1802e29d0()
// status: ok


undefined8 FUN_1802e29d0(void)

{
  return 0;
}


)B1802e29d0",
    "aa4c766316d795c831b86821fa3b6c376f9b5e8704747de6bf2b810de6f526bc",
    R"F1802e29d0C()F1802e29d0C",
    R"F1802e29d0D()F1802e29d0D",
    R"F1802e29d0T()F1802e29d0T",
    R"F1802e29d0F(10: return 0;)F1802e29d0F",
    R"F1802e29d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e29d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e29d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e29d0", "FUN_1802e29d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: aa4c766316d795c831b86821fa3b6c376f9b5e8704747de6bf2b810de6f526bc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e29d0;
}

// 0x1802e29ee FUN_1802e29ee
// source: re/dump/decompile/0x1802e29ee_FUN_1802e29ee.c
// size: 29 bytes; thunk: false
// body sha256: 4630f44f7b9d36c5f8256da2fefcfd403e9797007770086e33b52ed5865be591
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e29ee{
    "0x1802e29ee",
    "FUN_1802e29ee",
    R"F1802e29eeS(undefined FUN_1802e29ee())F1802e29eeS",
    R"B1802e29ee(// 0x1802e29ee  FUN_1802e29ee
// size=29 thunk=false
// signature: undefined FUN_1802e29ee()
// status: ok


undefined8 FUN_1802e29ee(void)

{
  return 0;
}


)B1802e29ee",
    "4630f44f7b9d36c5f8256da2fefcfd403e9797007770086e33b52ed5865be591",
    R"F1802e29eeC()F1802e29eeC",
    R"F1802e29eeD()F1802e29eeD",
    R"F1802e29eeT()F1802e29eeT",
    R"F1802e29eeF(10: return 0;)F1802e29eeF",
    R"F1802e29eeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e29eeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e29ee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e29ee", "FUN_1802e29ee");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4630f44f7b9d36c5f8256da2fefcfd403e9797007770086e33b52ed5865be591
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e29ee;
}

// 0x1802e2a0c FUN_1802e2a0c
// source: re/dump/decompile/0x1802e2a0c_FUN_1802e2a0c.c
// size: 29 bytes; thunk: false
// body sha256: 3fdc0a75cc48b70c84ce94ec0834d35094879fda0d533dfa7c3d4c689394d559
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2a0c{
    "0x1802e2a0c",
    "FUN_1802e2a0c",
    R"F1802e2a0cS(undefined FUN_1802e2a0c())F1802e2a0cS",
    R"B1802e2a0c(// 0x1802e2a0c  FUN_1802e2a0c
// size=29 thunk=false
// signature: undefined FUN_1802e2a0c()
// status: ok


undefined8 FUN_1802e2a0c(void)

{
  return 0;
}


)B1802e2a0c",
    "3fdc0a75cc48b70c84ce94ec0834d35094879fda0d533dfa7c3d4c689394d559",
    R"F1802e2a0cC()F1802e2a0cC",
    R"F1802e2a0cD()F1802e2a0cD",
    R"F1802e2a0cT()F1802e2a0cT",
    R"F1802e2a0cF(10: return 0;)F1802e2a0cF",
    R"F1802e2a0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2a0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2a0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2a0c", "FUN_1802e2a0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3fdc0a75cc48b70c84ce94ec0834d35094879fda0d533dfa7c3d4c689394d559
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2a0c;
}

// 0x1802e2a2a FUN_1802e2a2a
// source: re/dump/decompile/0x1802e2a2a_FUN_1802e2a2a.c
// size: 29 bytes; thunk: false
// body sha256: f9301b324334d1efecf48da92ca33b9e741cc0f72184ead772f3ee473f69fffc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2a2a{
    "0x1802e2a2a",
    "FUN_1802e2a2a",
    R"F1802e2a2aS(undefined FUN_1802e2a2a())F1802e2a2aS",
    R"B1802e2a2a(// 0x1802e2a2a  FUN_1802e2a2a
// size=29 thunk=false
// signature: undefined FUN_1802e2a2a()
// status: ok


undefined8 FUN_1802e2a2a(void)

{
  return 0;
}


)B1802e2a2a",
    "f9301b324334d1efecf48da92ca33b9e741cc0f72184ead772f3ee473f69fffc",
    R"F1802e2a2aC()F1802e2a2aC",
    R"F1802e2a2aD()F1802e2a2aD",
    R"F1802e2a2aT()F1802e2a2aT",
    R"F1802e2a2aF(10: return 0;)F1802e2a2aF",
    R"F1802e2a2aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2a2aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2a2a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2a2a", "FUN_1802e2a2a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f9301b324334d1efecf48da92ca33b9e741cc0f72184ead772f3ee473f69fffc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2a2a;
}

// 0x1802e2a48 FUN_1802e2a48
// source: re/dump/decompile/0x1802e2a48_FUN_1802e2a48.c
// size: 36 bytes; thunk: false
// body sha256: c5c832af1c087969c521fbc12c771448f89341a19744b7d87dd90f54d4bdac6f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2a48{
    "0x1802e2a48",
    "FUN_1802e2a48",
    R"F1802e2a48S(undefined FUN_1802e2a48())F1802e2a48S",
    R"B1802e2a48(// 0x1802e2a48  FUN_1802e2a48
// size=36 thunk=false
// signature: undefined FUN_1802e2a48()
// status: ok


undefined8 FUN_1802e2a48(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x30) = 0x46000000;
  return 0;
}


)B1802e2a48",
    "c5c832af1c087969c521fbc12c771448f89341a19744b7d87dd90f54d4bdac6f",
    R"F1802e2a48C()F1802e2a48C",
    R"F1802e2a48D()F1802e2a48D",
    R"F1802e2a48T()F1802e2a48T",
    R"F1802e2a48F(11: return 0;)F1802e2a48F",
    R"F1802e2a48U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2a48U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2a48() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2a48", "FUN_1802e2a48");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c5c832af1c087969c521fbc12c771448f89341a19744b7d87dd90f54d4bdac6f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined4 *)(param_2 + 0x30) = 0x46000000;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2a48;
}

// 0x1802e2a6d FUN_1802e2a6d
// source: re/dump/decompile/0x1802e2a6d_FUN_1802e2a6d.c
// size: 33 bytes; thunk: false
// body sha256: 27b13209a34fb76f223a8c3c3894dad9296e312733844ac307b3e21d6a266060
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2a6d{
    "0x1802e2a6d",
    "FUN_1802e2a6d",
    R"F1802e2a6dS(undefined FUN_1802e2a6d())F1802e2a6dS",
    R"B1802e2a6d(// 0x1802e2a6d  FUN_1802e2a6d
// size=33 thunk=false
// signature: undefined FUN_1802e2a6d()
// status: ok


undefined8 FUN_1802e2a6d(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x50) = 0;
  return 0;
}


)B1802e2a6d",
    "27b13209a34fb76f223a8c3c3894dad9296e312733844ac307b3e21d6a266060",
    R"F1802e2a6dC()F1802e2a6dC",
    R"F1802e2a6dD()F1802e2a6dD",
    R"F1802e2a6dT()F1802e2a6dT",
    R"F1802e2a6dF(11: return 0;)F1802e2a6dF",
    R"F1802e2a6dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2a6dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2a6d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2a6d", "FUN_1802e2a6d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 27b13209a34fb76f223a8c3c3894dad9296e312733844ac307b3e21d6a266060
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x50) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2a6d;
}

// 0x1802e2a8f FUN_1802e2a8f
// source: re/dump/decompile/0x1802e2a8f_FUN_1802e2a8f.c
// size: 29 bytes; thunk: false
// body sha256: 43c0a5ead565fa2912fe86a670f0025bb36b0c911e07913f24ab004a4c095147
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2a8f{
    "0x1802e2a8f",
    "FUN_1802e2a8f",
    R"F1802e2a8fS(undefined FUN_1802e2a8f())F1802e2a8fS",
    R"B1802e2a8f(// 0x1802e2a8f  FUN_1802e2a8f
// size=29 thunk=false
// signature: undefined FUN_1802e2a8f()
// status: ok


undefined8 FUN_1802e2a8f(void)

{
  return 0;
}


)B1802e2a8f",
    "43c0a5ead565fa2912fe86a670f0025bb36b0c911e07913f24ab004a4c095147",
    R"F1802e2a8fC()F1802e2a8fC",
    R"F1802e2a8fD()F1802e2a8fD",
    R"F1802e2a8fT()F1802e2a8fT",
    R"F1802e2a8fF(10: return 0;)F1802e2a8fF",
    R"F1802e2a8fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2a8fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2a8f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2a8f", "FUN_1802e2a8f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 43c0a5ead565fa2912fe86a670f0025bb36b0c911e07913f24ab004a4c095147
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2a8f;
}

// 0x1802e2ab0 FUN_1802e2ab0
// source: re/dump/decompile/0x1802e2ab0_FUN_1802e2ab0.c
// size: 45 bytes; thunk: false
// body sha256: 1bf604d8b712133a043207ee7fe3f2b0d61d807388dd49b935ee5cc2bf2cd844
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2ab0{
    "0x1802e2ab0",
    "FUN_1802e2ab0",
    R"F1802e2ab0S(undefined FUN_1802e2ab0())F1802e2ab0S",
    R"B1802e2ab0(// 0x1802e2ab0  FUN_1802e2ab0
// size=45 thunk=false
// signature: undefined FUN_1802e2ab0()
// status: ok


undefined8 FUN_1802e2ab0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(**(longlong **)(param_2 + 0x30) + 4) =
       *(undefined4 *)(*(longlong **)(param_2 + 0x30))[2];
  return 0;
}


)B1802e2ab0",
    "1bf604d8b712133a043207ee7fe3f2b0d61d807388dd49b935ee5cc2bf2cd844",
    R"F1802e2ab0C()F1802e2ab0C",
    R"F1802e2ab0D()F1802e2ab0D",
    R"F1802e2ab0T()F1802e2ab0T",
    R"F1802e2ab0F(12: return 0;)F1802e2ab0F",
    R"F1802e2ab0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2ab0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2ab0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2ab0", "FUN_1802e2ab0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1bf604d8b712133a043207ee7fe3f2b0d61d807388dd49b935ee5cc2bf2cd844
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined4 *)(**(longlong **)(param_2 + 0x30) + 4) =");
            trace.statement("*(undefined4 *)(*(longlong **)(param_2 + 0x30))[2];");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2ab0;
}

// 0x1802e2ae0 FUN_1802e2ae0
// source: re/dump/decompile/0x1802e2ae0_FUN_1802e2ae0.c
// size: 33 bytes; thunk: false
// body sha256: 9becc23bc5b92f21eae4a5d2999bce89de23e3fa42300665a02414c8729bcf83
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2ae0{
    "0x1802e2ae0",
    "FUN_1802e2ae0",
    R"F1802e2ae0S(undefined FUN_1802e2ae0())F1802e2ae0S",
    R"B1802e2ae0(// 0x1802e2ae0  FUN_1802e2ae0
// size=33 thunk=false
// signature: undefined FUN_1802e2ae0()
// status: ok


undefined8 FUN_1802e2ae0(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x40) = 0;
  return 0;
}


)B1802e2ae0",
    "9becc23bc5b92f21eae4a5d2999bce89de23e3fa42300665a02414c8729bcf83",
    R"F1802e2ae0C()F1802e2ae0C",
    R"F1802e2ae0D()F1802e2ae0D",
    R"F1802e2ae0T()F1802e2ae0T",
    R"F1802e2ae0F(11: return 0;)F1802e2ae0F",
    R"F1802e2ae0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2ae0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2ae0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2ae0", "FUN_1802e2ae0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9becc23bc5b92f21eae4a5d2999bce89de23e3fa42300665a02414c8729bcf83
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x40) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2ae0;
}

// 0x1802e2b02 FUN_1802e2b02
// source: re/dump/decompile/0x1802e2b02_FUN_1802e2b02.c
// size: 29 bytes; thunk: false
// body sha256: b4a5d95329d7f805c8d7594071ed39e63f354789dc5e76f02cc4fdb105ed59ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2b02{
    "0x1802e2b02",
    "FUN_1802e2b02",
    R"F1802e2b02S(undefined FUN_1802e2b02())F1802e2b02S",
    R"B1802e2b02(// 0x1802e2b02  FUN_1802e2b02
// size=29 thunk=false
// signature: undefined FUN_1802e2b02()
// status: ok


undefined8 FUN_1802e2b02(void)

{
  return 0;
}


)B1802e2b02",
    "b4a5d95329d7f805c8d7594071ed39e63f354789dc5e76f02cc4fdb105ed59ac",
    R"F1802e2b02C()F1802e2b02C",
    R"F1802e2b02D()F1802e2b02D",
    R"F1802e2b02T()F1802e2b02T",
    R"F1802e2b02F(10: return 0;)F1802e2b02F",
    R"F1802e2b02U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2b02U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2b02() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2b02", "FUN_1802e2b02");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b4a5d95329d7f805c8d7594071ed39e63f354789dc5e76f02cc4fdb105ed59ac
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2b02;
}

// 0x1802e2b20 FUN_1802e2b20
// source: re/dump/decompile/0x1802e2b20_FUN_1802e2b20.c
// size: 43 bytes; thunk: false
// body sha256: d991825bf22a4275432fa53f19934e125aa971f26a00db4ffd45ec6c5648acab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2b20{
    "0x1802e2b20",
    "FUN_1802e2b20",
    R"F1802e2b20S(undefined FUN_1802e2b20())F1802e2b20S",
    R"B1802e2b20(// 0x1802e2b20  FUN_1802e2b20
// size=43 thunk=false
// signature: undefined FUN_1802e2b20()
// status: ok


undefined8 FUN_1802e2b20(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(*(longlong *)(param_2 + 0x80) + 0x1c) = 1;
  return 0;
}


)B1802e2b20",
    "d991825bf22a4275432fa53f19934e125aa971f26a00db4ffd45ec6c5648acab",
    R"F1802e2b20C()F1802e2b20C",
    R"F1802e2b20D()F1802e2b20D",
    R"F1802e2b20T()F1802e2b20T",
    R"F1802e2b20F(11: return 0;)F1802e2b20F",
    R"F1802e2b20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2b20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2b20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2b20", "FUN_1802e2b20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d991825bf22a4275432fa53f19934e125aa971f26a00db4ffd45ec6c5648acab
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined4 *)(*(longlong *)(param_2 + 0x80) + 0x1c) = 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2b20;
}

// 0x1802e2b80 FUN_1802e2b80
// source: re/dump/decompile/0x1802e2b80_FUN_1802e2b80.c
// size: 37 bytes; thunk: false
// body sha256: 8667fe72298120c49517d1522f76e0a03be73c0e267be858b5f6d75b28a7e0ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2b80{
    "0x1802e2b80",
    "FUN_1802e2b80",
    R"F1802e2b80S(undefined FUN_1802e2b80())F1802e2b80S",
    R"B1802e2b80(// 0x1802e2b80  FUN_1802e2b80
// size=37 thunk=false
// signature: undefined FUN_1802e2b80()
// status: ok


undefined8 FUN_1802e2b80(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x28) + 0x11) = 1;
  return 0;
}


)B1802e2b80",
    "8667fe72298120c49517d1522f76e0a03be73c0e267be858b5f6d75b28a7e0ec",
    R"F1802e2b80C()F1802e2b80C",
    R"F1802e2b80D()F1802e2b80D",
    R"F1802e2b80T()F1802e2b80T",
    R"F1802e2b80F(11: return 0;)F1802e2b80F",
    R"F1802e2b80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2b80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2b80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2b80", "FUN_1802e2b80");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8667fe72298120c49517d1522f76e0a03be73c0e267be858b5f6d75b28a7e0ec
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(*(longlong *)(param_2 + 0x28) + 0x11) = 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2b80;
}

// 0x1802e2bb2 FUN_1802e2bb2
// source: re/dump/decompile/0x1802e2bb2_FUN_1802e2bb2.c
// size: 29 bytes; thunk: false
// body sha256: bedfaffc24c84140a3e97b945c45f027d47be145c7600f56a64982e6cf05fbce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2bb2{
    "0x1802e2bb2",
    "FUN_1802e2bb2",
    R"F1802e2bb2S(undefined FUN_1802e2bb2())F1802e2bb2S",
    R"B1802e2bb2(// 0x1802e2bb2  FUN_1802e2bb2
// size=29 thunk=false
// signature: undefined FUN_1802e2bb2()
// status: ok


undefined8 FUN_1802e2bb2(void)

{
  return 0;
}


)B1802e2bb2",
    "bedfaffc24c84140a3e97b945c45f027d47be145c7600f56a64982e6cf05fbce",
    R"F1802e2bb2C()F1802e2bb2C",
    R"F1802e2bb2D()F1802e2bb2D",
    R"F1802e2bb2T()F1802e2bb2T",
    R"F1802e2bb2F(10: return 0;)F1802e2bb2F",
    R"F1802e2bb2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2bb2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2bb2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2bb2", "FUN_1802e2bb2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: bedfaffc24c84140a3e97b945c45f027d47be145c7600f56a64982e6cf05fbce
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2bb2;
}

// 0x1802e2bd0 FUN_1802e2bd0
// source: re/dump/decompile/0x1802e2bd0_FUN_1802e2bd0.c
// size: 42 bytes; thunk: false
// body sha256: 4a0e8f8509fdbdd068184e599b03afa7de495ef614753a7f4a56599fadb74830
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2bd0{
    "0x1802e2bd0",
    "FUN_1802e2bd0",
    R"F1802e2bd0S(undefined FUN_1802e2bd0())F1802e2bd0S",
    R"B1802e2bd0(// 0x1802e2bd0  FUN_1802e2bd0
// size=42 thunk=false
// signature: undefined FUN_1802e2bd0()
// status: ok


undefined8 FUN_1802e2bd0(void)

{
  FUN_180014410("[Autowall] Render2D cache update crashed\n");
  return 0;
}


)B1802e2bd0",
    "4a0e8f8509fdbdd068184e599b03afa7de495ef614753a7f4a56599fadb74830",
    R"F1802e2bd0C(FUN_180014410)F1802e2bd0C",
    R"F1802e2bd0D()F1802e2bd0D",
    R"F1802e2bd0T("[Autowall] Render2D cache update crashed\\n")F1802e2bd0T",
    R"F1802e2bd0F(11: return 0;)F1802e2bd0F",
    R"F1802e2bd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2bd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2bd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2bd0", "FUN_1802e2bd0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[Autowall] Render2D cache update crashed\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[Autowall] Render2D cache update crashed\\n");
    // body sha256: 4a0e8f8509fdbdd068184e599b03afa7de495ef614753a7f4a56599fadb74830
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[Autowall] Render2D cache update crashed\\n\");");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2bd0;
}

// 0x1802e2c00 FUN_1802e2c00
// source: re/dump/decompile/0x1802e2c00_FUN_1802e2c00.c
// size: 38 bytes; thunk: false
// body sha256: df72397bd8d8ac46312325468bf29621775912d9c6ca908d3ba98389bb8ac26b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2c00{
    "0x1802e2c00",
    "FUN_1802e2c00",
    R"F1802e2c00S(undefined FUN_1802e2c00())F1802e2c00S",
    R"B1802e2c00(// 0x1802e2c00  FUN_1802e2c00
// size=38 thunk=false
// signature: undefined FUN_1802e2c00()
// status: ok


void FUN_1802e2c00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2c00",
    "df72397bd8d8ac46312325468bf29621775912d9c6ca908d3ba98389bb8ac26b",
    R"F1802e2c00C(FUN_180209d90)F1802e2c00C",
    R"F1802e2c00D()F1802e2c00D",
    R"F1802e2c00T()F1802e2c00T",
    R"F1802e2c00F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802e2c00F",
    R"F1802e2c00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2c00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2c00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2c00", "FUN_1802e2c00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: df72397bd8d8ac46312325468bf29621775912d9c6ca908d3ba98389bb8ac26b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2c00;
}

// 0x1802e2c32 FUN_1802e2c32
// source: re/dump/decompile/0x1802e2c32_FUN_1802e2c32.c
// size: 38 bytes; thunk: false
// body sha256: c83cc29870e7669a19f35b62e585643f1374e5ca369b978cefc827a54a9fa044
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2c32{
    "0x1802e2c32",
    "FUN_1802e2c32",
    R"F1802e2c32S(undefined FUN_1802e2c32())F1802e2c32S",
    R"B1802e2c32(// 0x1802e2c32  FUN_1802e2c32
// size=38 thunk=false
// signature: undefined FUN_1802e2c32()
// status: ok


void FUN_1802e2c32(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2c32",
    "c83cc29870e7669a19f35b62e585643f1374e5ca369b978cefc827a54a9fa044",
    R"F1802e2c32C(FUN_180209d90)F1802e2c32C",
    R"F1802e2c32D()F1802e2c32D",
    R"F1802e2c32T()F1802e2c32T",
    R"F1802e2c32F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802e2c32F",
    R"F1802e2c32U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2c32U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2c32() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2c32", "FUN_1802e2c32");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: c83cc29870e7669a19f35b62e585643f1374e5ca369b978cefc827a54a9fa044
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2c32;
}

// 0x1802e2c64 FUN_1802e2c64
// source: re/dump/decompile/0x1802e2c64_FUN_1802e2c64.c
// size: 38 bytes; thunk: false
// body sha256: 95401f772a9e3a3ee4409d1d1372df35e300b7e46414a894a5b67e2ea3dda1bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2c64{
    "0x1802e2c64",
    "FUN_1802e2c64",
    R"F1802e2c64S(undefined FUN_1802e2c64())F1802e2c64S",
    R"B1802e2c64(// 0x1802e2c64  FUN_1802e2c64
// size=38 thunk=false
// signature: undefined FUN_1802e2c64()
// status: ok


void FUN_1802e2c64(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2c64",
    "95401f772a9e3a3ee4409d1d1372df35e300b7e46414a894a5b67e2ea3dda1bd",
    R"F1802e2c64C(FUN_180209d90)F1802e2c64C",
    R"F1802e2c64D()F1802e2c64D",
    R"F1802e2c64T()F1802e2c64T",
    R"F1802e2c64F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802e2c64F",
    R"F1802e2c64U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2c64U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2c64() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2c64", "FUN_1802e2c64");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: 95401f772a9e3a3ee4409d1d1372df35e300b7e46414a894a5b67e2ea3dda1bd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2c64;
}

// 0x1802e2c96 FUN_1802e2c96
// source: re/dump/decompile/0x1802e2c96_FUN_1802e2c96.c
// size: 38 bytes; thunk: false
// body sha256: f2a67481e5029e1fe91848671a983761111861a7b81c8a2b7c8d5fd72d2a1946
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2c96{
    "0x1802e2c96",
    "FUN_1802e2c96",
    R"F1802e2c96S(undefined FUN_1802e2c96())F1802e2c96S",
    R"B1802e2c96(// 0x1802e2c96  FUN_1802e2c96
// size=38 thunk=false
// signature: undefined FUN_1802e2c96()
// status: ok


void FUN_1802e2c96(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2c96",
    "f2a67481e5029e1fe91848671a983761111861a7b81c8a2b7c8d5fd72d2a1946",
    R"F1802e2c96C(FUN_180209d90)F1802e2c96C",
    R"F1802e2c96D()F1802e2c96D",
    R"F1802e2c96T()F1802e2c96T",
    R"F1802e2c96F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802e2c96F",
    R"F1802e2c96U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2c96U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2c96() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2c96", "FUN_1802e2c96");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: f2a67481e5029e1fe91848671a983761111861a7b81c8a2b7c8d5fd72d2a1946
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2c96;
}

// 0x1802e2cc8 FUN_1802e2cc8
// source: re/dump/decompile/0x1802e2cc8_FUN_1802e2cc8.c
// size: 38 bytes; thunk: false
// body sha256: 955f6f14fb9de2f905c177f881cc93e8390a9254641c84cc7e2c54d1dfc99464
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2cc8{
    "0x1802e2cc8",
    "FUN_1802e2cc8",
    R"F1802e2cc8S(undefined FUN_1802e2cc8())F1802e2cc8S",
    R"B1802e2cc8(// 0x1802e2cc8  FUN_1802e2cc8
// size=38 thunk=false
// signature: undefined FUN_1802e2cc8()
// status: ok


void FUN_1802e2cc8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2cc8",
    "955f6f14fb9de2f905c177f881cc93e8390a9254641c84cc7e2c54d1dfc99464",
    R"F1802e2cc8C(FUN_180209d90)F1802e2cc8C",
    R"F1802e2cc8D()F1802e2cc8D",
    R"F1802e2cc8T()F1802e2cc8T",
    R"F1802e2cc8F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802e2cc8F",
    R"F1802e2cc8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2cc8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2cc8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2cc8", "FUN_1802e2cc8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: 955f6f14fb9de2f905c177f881cc93e8390a9254641c84cc7e2c54d1dfc99464
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2cc8;
}

// 0x1802e2cfa FUN_1802e2cfa
// source: re/dump/decompile/0x1802e2cfa_FUN_1802e2cfa.c
// size: 38 bytes; thunk: false
// body sha256: 4fc6fa8513e8771d9a1460f7a6ede711904b01fef7585f2f3a9c62033dcce5c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2cfa{
    "0x1802e2cfa",
    "FUN_1802e2cfa",
    R"F1802e2cfaS(undefined FUN_1802e2cfa())F1802e2cfaS",
    R"B1802e2cfa(// 0x1802e2cfa  FUN_1802e2cfa
// size=38 thunk=false
// signature: undefined FUN_1802e2cfa()
// status: ok


void FUN_1802e2cfa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2cfa",
    "4fc6fa8513e8771d9a1460f7a6ede711904b01fef7585f2f3a9c62033dcce5c0",
    R"F1802e2cfaC(FUN_180209d90)F1802e2cfaC",
    R"F1802e2cfaD()F1802e2cfaD",
    R"F1802e2cfaT()F1802e2cfaT",
    R"F1802e2cfaF(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802e2cfaF",
    R"F1802e2cfaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2cfaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2cfa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2cfa", "FUN_1802e2cfa");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: 4fc6fa8513e8771d9a1460f7a6ede711904b01fef7585f2f3a9c62033dcce5c0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2cfa;
}

// 0x1802e2d2c FUN_1802e2d2c
// source: re/dump/decompile/0x1802e2d2c_FUN_1802e2d2c.c
// size: 38 bytes; thunk: false
// body sha256: de1a2a9e0d9e90e8d65845df6f73f831774274678c7b2eddca0744fc6269c659
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2d2c{
    "0x1802e2d2c",
    "FUN_1802e2d2c",
    R"F1802e2d2cS(undefined FUN_1802e2d2c())F1802e2d2cS",
    R"B1802e2d2c(// 0x1802e2d2c  FUN_1802e2d2c
// size=38 thunk=false
// signature: undefined FUN_1802e2d2c()
// status: ok


void FUN_1802e2d2c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2d2c",
    "de1a2a9e0d9e90e8d65845df6f73f831774274678c7b2eddca0744fc6269c659",
    R"F1802e2d2cC(FUN_180209d90)F1802e2d2cC",
    R"F1802e2d2cD()F1802e2d2cD",
    R"F1802e2d2cT()F1802e2d2cT",
    R"F1802e2d2cF(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802e2d2cF",
    R"F1802e2d2cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2d2cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2d2c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2d2c", "FUN_1802e2d2c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: de1a2a9e0d9e90e8d65845df6f73f831774274678c7b2eddca0744fc6269c659
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2d2c;
}

// 0x1802e2d5e FUN_1802e2d5e
// source: re/dump/decompile/0x1802e2d5e_FUN_1802e2d5e.c
// size: 43 bytes; thunk: false
// body sha256: 66be4e89ead04dfef560fb813c961631b105d5bd836fbb01764c52b647176d0e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2d5e{
    "0x1802e2d5e",
    "FUN_1802e2d5e",
    R"F1802e2d5eS(undefined FUN_1802e2d5e())F1802e2d5eS",
    R"B1802e2d5e(// 0x1802e2d5e  FUN_1802e2d5e
// size=43 thunk=false
// signature: undefined FUN_1802e2d5e()
// status: ok


void FUN_1802e2d5e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2d5e",
    "66be4e89ead04dfef560fb813c961631b105d5bd836fbb01764c52b647176d0e",
    R"F1802e2d5eC(FUN_180209d90)F1802e2d5eC",
    R"F1802e2d5eD()F1802e2d5eD",
    R"F1802e2d5eT()F1802e2d5eT",
    R"F1802e2d5eF(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802e2d5eF",
    R"F1802e2d5eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2d5eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2d5e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2d5e", "FUN_1802e2d5e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: 66be4e89ead04dfef560fb813c961631b105d5bd836fbb01764c52b647176d0e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2d5e;
}

// 0x1802e2d95 FUN_1802e2d95
// source: re/dump/decompile/0x1802e2d95_FUN_1802e2d95.c
// size: 43 bytes; thunk: false
// body sha256: feaf6a0e7d64e975fd608c8b9a213f565ff5c4788b18107598882be12bd8b1ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2d95{
    "0x1802e2d95",
    "FUN_1802e2d95",
    R"F1802e2d95S(undefined FUN_1802e2d95())F1802e2d95S",
    R"B1802e2d95(// 0x1802e2d95  FUN_1802e2d95
// size=43 thunk=false
// signature: undefined FUN_1802e2d95()
// status: ok


void FUN_1802e2d95(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2d95",
    "feaf6a0e7d64e975fd608c8b9a213f565ff5c4788b18107598882be12bd8b1ba",
    R"F1802e2d95C(FUN_180209d90)F1802e2d95C",
    R"F1802e2d95D()F1802e2d95D",
    R"F1802e2d95T()F1802e2d95T",
    R"F1802e2d95F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802e2d95F",
    R"F1802e2d95U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2d95U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2d95() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2d95", "FUN_1802e2d95");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: feaf6a0e7d64e975fd608c8b9a213f565ff5c4788b18107598882be12bd8b1ba
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2d95;
}

// 0x1802e2dcc FUN_1802e2dcc
// source: re/dump/decompile/0x1802e2dcc_FUN_1802e2dcc.c
// size: 43 bytes; thunk: false
// body sha256: 01107c63ac8e7ab2aafddf3ebbb8570dd9cbe5033cdca2c37939bc625a262aff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2dcc{
    "0x1802e2dcc",
    "FUN_1802e2dcc",
    R"F1802e2dccS(undefined FUN_1802e2dcc())F1802e2dccS",
    R"B1802e2dcc(// 0x1802e2dcc  FUN_1802e2dcc
// size=43 thunk=false
// signature: undefined FUN_1802e2dcc()
// status: ok


void FUN_1802e2dcc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


)B1802e2dcc",
    "01107c63ac8e7ab2aafddf3ebbb8570dd9cbe5033cdca2c37939bc625a262aff",
    R"F1802e2dccC(FUN_180209d90)F1802e2dccC",
    R"F1802e2dccD()F1802e2dccD",
    R"F1802e2dccT()F1802e2dccT",
    R"F1802e2dccF(10: if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
14: return;)F1802e2dccF",
    R"F1802e2dccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2dccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2dcc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2dcc", "FUN_1802e2dcc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", param_2 + 0x48);
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: 01107c63ac8e7ab2aafddf3ebbb8570dd9cbe5033cdca2c37939bc625a262aff
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;");
                trace.statement("FUN_180209d90(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e2dcc;
}

// 0x1802e2e10 FUN_1802e2e10
// source: re/dump/decompile/0x1802e2e10_FUN_1802e2e10.c
// size: 66 bytes; thunk: false
// body sha256: 74d1e96c0014fbcbcde90ef737eaf0eee32e2b6e6a99eb31ec667033b29b5bbe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2e10{
    "0x1802e2e10",
    "FUN_1802e2e10",
    R"F1802e2e10S(undefined FUN_1802e2e10())F1802e2e10S",
    R"B1802e2e10(// 0x1802e2e10  FUN_1802e2e10
// size=66 thunk=false
// signature: undefined FUN_1802e2e10()
// status: ok


undefined8 FUN_1802e2e10(void)

{
  DAT_1804096d8 = 0;
  DAT_1803e7b98 = 0xffffffff;
  DAT_1804096c4 = 0;
  DAT_1804096dc = 0;
  return 0;
}


)B1802e2e10",
    "74d1e96c0014fbcbcde90ef737eaf0eee32e2b6e6a99eb31ec667033b29b5bbe",
    R"F1802e2e10C()F1802e2e10C",
    R"F1802e2e10D(DAT_1803e7b98
DAT_1804096c4
DAT_1804096d8
DAT_1804096dc)F1802e2e10D",
    R"F1802e2e10T()F1802e2e10T",
    R"F1802e2e10F(14: return 0;)F1802e2e10F",
    R"F1802e2e10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e7b98.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804096c4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804096d8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804096dc.)F1802e2e10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2e10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2e10", "FUN_1802e2e10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e7b98.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804096c4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804096d8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804096dc.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803e7b98", static_cast<const void*>(&image::DAT_1803e7b98));
    trace.data_ref("DAT_1804096c4", static_cast<const void*>(&image::DAT_1804096c4));
    trace.data_ref("DAT_1804096d8", static_cast<const void*>(&image::DAT_1804096d8));
    trace.data_ref("DAT_1804096dc", static_cast<const void*>(&image::DAT_1804096dc));
    // body sha256: 74d1e96c0014fbcbcde90ef737eaf0eee32e2b6e6a99eb31ec667033b29b5bbe
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1804096d8 = 0;");
            trace.statement("DAT_1803e7b98 = 0xffffffff;");
            trace.statement("DAT_1804096c4 = 0;");
            trace.statement("DAT_1804096dc = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2e10;
}

// 0x1802e2e60 FUN_1802e2e60
// source: re/dump/decompile/0x1802e2e60_FUN_1802e2e60.c
// size: 36 bytes; thunk: false
// body sha256: 5168ce874f7a991ec50dbbd8905221d79c88fd1aaf047d878d469de801b68b52
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2e60{
    "0x1802e2e60",
    "FUN_1802e2e60",
    R"F1802e2e60S(undefined FUN_1802e2e60())F1802e2e60S",
    R"B1802e2e60(// 0x1802e2e60  FUN_1802e2e60
// size=36 thunk=false
// signature: undefined FUN_1802e2e60()
// status: ok


undefined8 FUN_1802e2e60(void)

{
  DAT_1803e6fa0 = 0;
  return 0;
}


)B1802e2e60",
    "5168ce874f7a991ec50dbbd8905221d79c88fd1aaf047d878d469de801b68b52",
    R"F1802e2e60C()F1802e2e60C",
    R"F1802e2e60D(DAT_1803e6fa0)F1802e2e60D",
    R"F1802e2e60T()F1802e2e60T",
    R"F1802e2e60F(11: return 0;)F1802e2e60F",
    R"F1802e2e60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e6fa0.)F1802e2e60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2e60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2e60", "FUN_1802e2e60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e6fa0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803e6fa0", static_cast<const void*>(&image::DAT_1803e6fa0));
    // body sha256: 5168ce874f7a991ec50dbbd8905221d79c88fd1aaf047d878d469de801b68b52
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803e6fa0 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2e60;
}

// 0x1802e2ed8 FUN_1802e2ed8
// source: re/dump/decompile/0x1802e2ed8_FUN_1802e2ed8.c
// size: 36 bytes; thunk: false
// body sha256: e1d0f62adf5bcd5a2591de488b1c9362f5de9db9ea548dadbb4b08534329c2c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2ed8{
    "0x1802e2ed8",
    "FUN_1802e2ed8",
    R"F1802e2ed8S(undefined FUN_1802e2ed8())F1802e2ed8S",
    R"B1802e2ed8(// 0x1802e2ed8  FUN_1802e2ed8
// size=36 thunk=false
// signature: undefined FUN_1802e2ed8()
// status: ok


undefined8 FUN_1802e2ed8(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  return 0;
}


)B1802e2ed8",
    "e1d0f62adf5bcd5a2591de488b1c9362f5de9db9ea548dadbb4b08534329c2c8",
    R"F1802e2ed8C()F1802e2ed8C",
    R"F1802e2ed8D()F1802e2ed8D",
    R"F1802e2ed8T()F1802e2ed8T",
    R"F1802e2ed8F(11: return 0;)F1802e2ed8F",
    R"F1802e2ed8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2ed8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2ed8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2ed8", "FUN_1802e2ed8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e1d0f62adf5bcd5a2591de488b1c9362f5de9db9ea548dadbb4b08534329c2c8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined4 *)(param_2 + 0x20) = 0xffffffff;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2ed8;
}

// 0x1802e2f24 FUN_1802e2f24
// source: re/dump/decompile/0x1802e2f24_FUN_1802e2f24.c
// size: 33 bytes; thunk: false
// body sha256: 94d1a7838e6380a82b9e251a7ac8f60867b71aecf0d2b0bf8d0bfe74725b7ce3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2f24{
    "0x1802e2f24",
    "FUN_1802e2f24",
    R"F1802e2f24S(undefined FUN_1802e2f24())F1802e2f24S",
    R"B1802e2f24(// 0x1802e2f24  FUN_1802e2f24
// size=33 thunk=false
// signature: undefined FUN_1802e2f24()
// status: ok


undefined8 FUN_1802e2f24(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x30) = 0;
  return 0;
}


)B1802e2f24",
    "94d1a7838e6380a82b9e251a7ac8f60867b71aecf0d2b0bf8d0bfe74725b7ce3",
    R"F1802e2f24C()F1802e2f24C",
    R"F1802e2f24D()F1802e2f24D",
    R"F1802e2f24T()F1802e2f24T",
    R"F1802e2f24F(11: return 0;)F1802e2f24F",
    R"F1802e2f24U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e2f24U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2f24() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2f24", "FUN_1802e2f24");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 94d1a7838e6380a82b9e251a7ac8f60867b71aecf0d2b0bf8d0bfe74725b7ce3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x30) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e2f24;
}

// 0x1802e2fe0 FUN_1802e2fe0
// source: re/dump/decompile/0x1802e2fe0_FUN_1802e2fe0.c
// size: 39 bytes; thunk: false
// body sha256: 92f7efce84d5c5b161ca87ba71ee0615211b1d915870cbf3b1f498cf506cf094
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e2fe0{
    "0x1802e2fe0",
    "FUN_1802e2fe0",
    R"F1802e2fe0S(undefined FUN_1802e2fe0())F1802e2fe0S",
    R"B1802e2fe0(// 0x1802e2fe0  FUN_1802e2fe0
// size=39 thunk=false
// signature: undefined FUN_1802e2fe0()
// status: ok


void FUN_1802e2fe0(undefined8 param_1,longlong param_2)

{
  DAT_18040a628 = 0;
  *(undefined4 *)(DAT_1803fa608 + 0x18) = *(undefined4 *)(param_2 + 0x40);
  return;
}


)B1802e2fe0",
    "92f7efce84d5c5b161ca87ba71ee0615211b1d915870cbf3b1f498cf506cf094",
    R"F1802e2fe0C()F1802e2fe0C",
    R"F1802e2fe0D(DAT_1803fa608
DAT_18040a628)F1802e2fe0D",
    R"F1802e2fe0T()F1802e2fe0T",
    R"F1802e2fe0F(12: return;)F1802e2fe0F",
    R"F1802e2fe0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a628.)F1802e2fe0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e2fe0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e2fe0", "FUN_1802e2fe0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a628.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    trace.data_ref("DAT_18040a628", static_cast<const void*>(&image::DAT_18040a628));
    // body sha256: 92f7efce84d5c5b161ca87ba71ee0615211b1d915870cbf3b1f498cf506cf094
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18040a628 = 0;");
            trace.statement("*(undefined4 *)(DAT_1803fa608 + 0x18) = *(undefined4 *)(param_2 + 0x40);");
            trace.statement("return;");
        }
    return kFunction_0x1802e2fe0;
}

// 0x1802e304c FUN_1802e304c
// source: re/dump/decompile/0x1802e304c_FUN_1802e304c.c
// size: 40 bytes; thunk: false
// body sha256: 5e958591f77e490c9c2b0aa721e8613f931d3491dc4936828a5fe9c534407d1b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e304c{
    "0x1802e304c",
    "FUN_1802e304c",
    R"F1802e304cS(undefined FUN_1802e304c())F1802e304cS",
    R"B1802e304c(// 0x1802e304c  FUN_1802e304c
// size=40 thunk=false
// signature: undefined FUN_1802e304c()
// status: ok


undefined8 FUN_1802e304c(void)

{
  DAT_180425410 = 0;
  return 0;
}


)B1802e304c",
    "5e958591f77e490c9c2b0aa721e8613f931d3491dc4936828a5fe9c534407d1b",
    R"F1802e304cC()F1802e304cC",
    R"F1802e304cD(DAT_180425410)F1802e304cD",
    R"F1802e304cT()F1802e304cT",
    R"F1802e304cF(11: return 0;)F1802e304cF",
    R"F1802e304cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425410.)F1802e304cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e304c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e304c", "FUN_1802e304c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425410.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180425410", static_cast<const void*>(&image::DAT_180425410));
    // body sha256: 5e958591f77e490c9c2b0aa721e8613f931d3491dc4936828a5fe9c534407d1b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180425410 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e304c;
}

// 0x1802e3080 FUN_1802e3080
// source: re/dump/decompile/0x1802e3080_FUN_1802e3080.c
// size: 33 bytes; thunk: false
// body sha256: fefa766aba3ffd69253601a033e04b87bf0041c8c1795750e27cf8993193b8dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e3080{
    "0x1802e3080",
    "FUN_1802e3080",
    R"F1802e3080S(undefined FUN_1802e3080())F1802e3080S",
    R"B1802e3080(// 0x1802e3080  FUN_1802e3080
// size=33 thunk=false
// signature: undefined FUN_1802e3080()
// status: ok


undefined8 FUN_1802e3080(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x50) = 0;
  return 0;
}


)B1802e3080",
    "fefa766aba3ffd69253601a033e04b87bf0041c8c1795750e27cf8993193b8dc",
    R"F1802e3080C()F1802e3080C",
    R"F1802e3080D()F1802e3080D",
    R"F1802e3080T()F1802e3080T",
    R"F1802e3080F(11: return 0;)F1802e3080F",
    R"F1802e3080U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e3080U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e3080() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e3080", "FUN_1802e3080");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fefa766aba3ffd69253601a033e04b87bf0041c8c1795750e27cf8993193b8dc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x50) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e3080;
}

// 0x1802e30a2 FUN_1802e30a2
// source: re/dump/decompile/0x1802e30a2_FUN_1802e30a2.c
// size: 33 bytes; thunk: false
// body sha256: b3801969414a25770bcafa88ae2afeaf121f2c4971e1556ce0fd628fd2801e2e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e30a2{
    "0x1802e30a2",
    "FUN_1802e30a2",
    R"F1802e30a2S(undefined FUN_1802e30a2())F1802e30a2S",
    R"B1802e30a2(// 0x1802e30a2  FUN_1802e30a2
// size=33 thunk=false
// signature: undefined FUN_1802e30a2()
// status: ok


undefined8 FUN_1802e30a2(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x53) = 0;
  return 0;
}


)B1802e30a2",
    "b3801969414a25770bcafa88ae2afeaf121f2c4971e1556ce0fd628fd2801e2e",
    R"F1802e30a2C()F1802e30a2C",
    R"F1802e30a2D()F1802e30a2D",
    R"F1802e30a2T()F1802e30a2T",
    R"F1802e30a2F(11: return 0;)F1802e30a2F",
    R"F1802e30a2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e30a2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e30a2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e30a2", "FUN_1802e30a2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b3801969414a25770bcafa88ae2afeaf121f2c4971e1556ce0fd628fd2801e2e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x53) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802e30a2;
}

}  // namespace sf::reconstructed
