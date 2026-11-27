// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802f27b2 FUN_1802f27b2
// source: re/dump/decompile/0x1802f27b2_FUN_1802f27b2.c
// size: 32 bytes; thunk: false
// body sha256: 5f4d546932195ae2c42c6bb3bdb074734cd0365ac9e0562b0d75edc3c0561b06
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f27b2{
    "0x1802f27b2",
    "FUN_1802f27b2",
    R"F1802f27b2S(undefined FUN_1802f27b2())F1802f27b2S",
    R"B1802f27b2(// 0x1802f27b2  FUN_1802f27b2
// size=32 thunk=false
// signature: undefined FUN_1802f27b2()
// status: ok


void FUN_1802f27b2(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f27b2",
    "5f4d546932195ae2c42c6bb3bdb074734cd0365ac9e0562b0d75edc3c0561b06",
    R"F1802f27b2C()F1802f27b2C",
    R"F1802f27b2D()F1802f27b2D",
    R"F1802f27b2T()F1802f27b2T",
    R"F1802f27b2F(11: return;)F1802f27b2F",
    R"F1802f27b2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f27b2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f27b2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f27b2", "FUN_1802f27b2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 5f4d546932195ae2c42c6bb3bdb074734cd0365ac9e0562b0d75edc3c0561b06
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f27b2;
}

// 0x1802f27de FUN_1802f27de
// source: re/dump/decompile/0x1802f27de_FUN_1802f27de.c
// size: 43 bytes; thunk: false
// body sha256: a36d4856617ef0beac1473a106816ff6333f33604755d1318aa8992312097e11
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f27de{
    "0x1802f27de",
    "FUN_1802f27de",
    R"F1802f27deS(undefined FUN_1802f27de())F1802f27deS",
    R"B1802f27de(// 0x1802f27de  FUN_1802f27de
// size=43 thunk=false
// signature: undefined FUN_1802f27de()
// status: ok


void FUN_1802f27de(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
    FUN_18021b410(param_2 + 0x78);
  }
  return;
}


)B1802f27de",
    "a36d4856617ef0beac1473a106816ff6333f33604755d1318aa8992312097e11",
    R"F1802f27deC(FUN_18021b410)F1802f27deC",
    R"F1802f27deD()F1802f27deD",
    R"F1802f27deT()F1802f27deT",
    R"F1802f27deF(10: if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
14: return;)F1802f27deF",
    R"F1802f27deU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f27deU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f27de() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f27de", "FUN_1802f27de");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b410", param_2 + 0x78);
    trace.call_target("FUN_18021b410", reinterpret_cast<const void*>(&image::FUN_18021b410));
    // body sha256: a36d4856617ef0beac1473a106816ff6333f33604755d1318aa8992312097e11
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;");
                trace.statement("FUN_18021b410(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f27de;
}

// 0x1802f2809 FUN_1802f2809
// source: re/dump/decompile/0x1802f2809_FUN_1802f2809.c
// size: 32 bytes; thunk: false
// body sha256: fc0f6070a44dd38176b3d7dd336fb6d369239e4606ea22c7c5fc115ab4bcd0c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2809{
    "0x1802f2809",
    "FUN_1802f2809",
    R"F1802f2809S(undefined FUN_1802f2809())F1802f2809S",
    R"B1802f2809(// 0x1802f2809  FUN_1802f2809
// size=32 thunk=false
// signature: undefined FUN_1802f2809()
// status: ok


void FUN_1802f2809(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2809",
    "fc0f6070a44dd38176b3d7dd336fb6d369239e4606ea22c7c5fc115ab4bcd0c8",
    R"F1802f2809C()F1802f2809C",
    R"F1802f2809D()F1802f2809D",
    R"F1802f2809T()F1802f2809T",
    R"F1802f2809F(11: return;)F1802f2809F",
    R"F1802f2809U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2809U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2809() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2809", "FUN_1802f2809");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: fc0f6070a44dd38176b3d7dd336fb6d369239e4606ea22c7c5fc115ab4bcd0c8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2809;
}

// 0x1802f2845 FUN_1802f2845
// source: re/dump/decompile/0x1802f2845_FUN_1802f2845.c
// size: 43 bytes; thunk: false
// body sha256: 5057d964034358aea1cfa97222cac039bafe75c42a64a87d28cf75e62495a0b4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2845{
    "0x1802f2845",
    "FUN_1802f2845",
    R"F1802f2845S(undefined FUN_1802f2845())F1802f2845S",
    R"B1802f2845(// 0x1802f2845  FUN_1802f2845
// size=43 thunk=false
// signature: undefined FUN_1802f2845()
// status: ok


void FUN_1802f2845(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;
    FUN_18021b3f0(param_2 + 0x78);
  }
  return;
}


)B1802f2845",
    "5057d964034358aea1cfa97222cac039bafe75c42a64a87d28cf75e62495a0b4",
    R"F1802f2845C(FUN_18021b3f0)F1802f2845C",
    R"F1802f2845D()F1802f2845D",
    R"F1802f2845T()F1802f2845T",
    R"F1802f2845F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
14: return;)F1802f2845F",
    R"F1802f2845U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2845U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2845() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2845", "FUN_1802f2845");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b3f0", param_2 + 0x78);
    trace.call_target("FUN_18021b3f0", reinterpret_cast<const void*>(&image::FUN_18021b3f0));
    // body sha256: 5057d964034358aea1cfa97222cac039bafe75c42a64a87d28cf75e62495a0b4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;");
                trace.statement("FUN_18021b3f0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2845;
}

// 0x1802f2870 FUN_1802f2870
// source: re/dump/decompile/0x1802f2870_FUN_1802f2870.c
// size: 32 bytes; thunk: false
// body sha256: b918ec6aaa0914abb810a903f254017cc909a64a231415c1e9924d2b807f582b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2870{
    "0x1802f2870",
    "FUN_1802f2870",
    R"F1802f2870S(undefined FUN_1802f2870())F1802f2870S",
    R"B1802f2870(// 0x1802f2870  FUN_1802f2870
// size=32 thunk=false
// signature: undefined FUN_1802f2870()
// status: ok


void FUN_1802f2870(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2870",
    "b918ec6aaa0914abb810a903f254017cc909a64a231415c1e9924d2b807f582b",
    R"F1802f2870C()F1802f2870C",
    R"F1802f2870D()F1802f2870D",
    R"F1802f2870T()F1802f2870T",
    R"F1802f2870F(11: return;)F1802f2870F",
    R"F1802f2870U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2870U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2870() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2870", "FUN_1802f2870");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: b918ec6aaa0914abb810a903f254017cc909a64a231415c1e9924d2b807f582b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2870;
}

// 0x1802f289c FUN_1802f289c
// source: re/dump/decompile/0x1802f289c_FUN_1802f289c.c
// size: 43 bytes; thunk: false
// body sha256: 7dd6fa8887e451d2de841ab5094f4d403354caa57f76d1ef05ef2cec9ca375a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f289c{
    "0x1802f289c",
    "FUN_1802f289c",
    R"F1802f289cS(undefined FUN_1802f289c())F1802f289cS",
    R"B1802f289c(// 0x1802f289c  FUN_1802f289c
// size=43 thunk=false
// signature: undefined FUN_1802f289c()
// status: ok


void FUN_1802f289c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfdffffff;
    FUN_18021b3b0(param_2 + 0x78);
  }
  return;
}


)B1802f289c",
    "7dd6fa8887e451d2de841ab5094f4d403354caa57f76d1ef05ef2cec9ca375a5",
    R"F1802f289cC(FUN_18021b3b0)F1802f289cC",
    R"F1802f289cD()F1802f289cD",
    R"F1802f289cT()F1802f289cT",
    R"F1802f289cF(10: if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0) {
14: return;)F1802f289cF",
    R"F1802f289cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f289cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f289c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f289c", "FUN_1802f289c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b3b0", param_2 + 0x78);
    trace.call_target("FUN_18021b3b0", reinterpret_cast<const void*>(&image::FUN_18021b3b0));
    // body sha256: 7dd6fa8887e451d2de841ab5094f4d403354caa57f76d1ef05ef2cec9ca375a5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x2000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfdffffff;");
                trace.statement("FUN_18021b3b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f289c;
}

// 0x1802f28c7 FUN_1802f28c7
// source: re/dump/decompile/0x1802f28c7_FUN_1802f28c7.c
// size: 32 bytes; thunk: false
// body sha256: 5448b54cdeed5d061787bc9c84783cffdf1a389229e6dea040354776945917d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f28c7{
    "0x1802f28c7",
    "FUN_1802f28c7",
    R"F1802f28c7S(undefined FUN_1802f28c7())F1802f28c7S",
    R"B1802f28c7(// 0x1802f28c7  FUN_1802f28c7
// size=32 thunk=false
// signature: undefined FUN_1802f28c7()
// status: ok


void FUN_1802f28c7(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f28c7",
    "5448b54cdeed5d061787bc9c84783cffdf1a389229e6dea040354776945917d7",
    R"F1802f28c7C()F1802f28c7C",
    R"F1802f28c7D()F1802f28c7D",
    R"F1802f28c7T()F1802f28c7T",
    R"F1802f28c7F(11: return;)F1802f28c7F",
    R"F1802f28c7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f28c7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f28c7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f28c7", "FUN_1802f28c7");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 5448b54cdeed5d061787bc9c84783cffdf1a389229e6dea040354776945917d7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f28c7;
}

// 0x1802f2913 FUN_1802f2913
// source: re/dump/decompile/0x1802f2913_FUN_1802f2913.c
// size: 43 bytes; thunk: false
// body sha256: c85c11d433da89357962dfe1e57fae281443d2f44f797b90442e6b65810fcf53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2913{
    "0x1802f2913",
    "FUN_1802f2913",
    R"F1802f2913S(undefined FUN_1802f2913())F1802f2913S",
    R"B1802f2913(// 0x1802f2913  FUN_1802f2913
// size=43 thunk=false
// signature: undefined FUN_1802f2913()
// status: ok


void FUN_1802f2913(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfbffffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2913",
    "c85c11d433da89357962dfe1e57fae281443d2f44f797b90442e6b65810fcf53",
    R"F1802f2913C(FUN_18021b0b0)F1802f2913C",
    R"F1802f2913D()F1802f2913D",
    R"F1802f2913T()F1802f2913T",
    R"F1802f2913F(10: if ((*(uint *)(param_2 + 0x20) & 0x4000000) != 0) {
14: return;)F1802f2913F",
    R"F1802f2913U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2913U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2913() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2913", "FUN_1802f2913");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: c85c11d433da89357962dfe1e57fae281443d2f44f797b90442e6b65810fcf53
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x4000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x4000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfbffffff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2913;
}

// 0x1802f293e FUN_1802f293e
// source: re/dump/decompile/0x1802f293e_FUN_1802f293e.c
// size: 32 bytes; thunk: false
// body sha256: 476aeae18dacd8397402dad3b2a8b184a92f6a937aa3d9fe0f2efc704d2382f9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f293e{
    "0x1802f293e",
    "FUN_1802f293e",
    R"F1802f293eS(undefined FUN_1802f293e())F1802f293eS",
    R"B1802f293e(// 0x1802f293e  FUN_1802f293e
// size=32 thunk=false
// signature: undefined FUN_1802f293e()
// status: ok


void FUN_1802f293e(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f293e",
    "476aeae18dacd8397402dad3b2a8b184a92f6a937aa3d9fe0f2efc704d2382f9",
    R"F1802f293eC()F1802f293eC",
    R"F1802f293eD()F1802f293eD",
    R"F1802f293eT()F1802f293eT",
    R"F1802f293eF(11: return;)F1802f293eF",
    R"F1802f293eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f293eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f293e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f293e", "FUN_1802f293e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 476aeae18dacd8397402dad3b2a8b184a92f6a937aa3d9fe0f2efc704d2382f9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f293e;
}

// 0x1802f296a FUN_1802f296a
// source: re/dump/decompile/0x1802f296a_FUN_1802f296a.c
// size: 43 bytes; thunk: false
// body sha256: 9e312d83012fa0d7e846576a358732f0ceba316ee60af8fb8738a1027efb3377
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f296a{
    "0x1802f296a",
    "FUN_1802f296a",
    R"F1802f296aS(undefined FUN_1802f296a())F1802f296aS",
    R"B1802f296a(// 0x1802f296a  FUN_1802f296a
// size=43 thunk=false
// signature: undefined FUN_1802f296a()
// status: ok


void FUN_1802f296a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f296a",
    "9e312d83012fa0d7e846576a358732f0ceba316ee60af8fb8738a1027efb3377",
    R"F1802f296aC(FUN_18021b0b0)F1802f296aC",
    R"F1802f296aD()F1802f296aD",
    R"F1802f296aT()F1802f296aT",
    R"F1802f296aF(10: if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
14: return;)F1802f296aF",
    R"F1802f296aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f296aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f296a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f296a", "FUN_1802f296a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 9e312d83012fa0d7e846576a358732f0ceba316ee60af8fb8738a1027efb3377
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x8000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f296a;
}

// 0x1802f2995 FUN_1802f2995
// source: re/dump/decompile/0x1802f2995_FUN_1802f2995.c
// size: 32 bytes; thunk: false
// body sha256: 78344f7db3bdfd0a1e5d5dcaba99f59bb4b5614787ed92ead7548e95104916e9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2995{
    "0x1802f2995",
    "FUN_1802f2995",
    R"F1802f2995S(undefined FUN_1802f2995())F1802f2995S",
    R"B1802f2995(// 0x1802f2995  FUN_1802f2995
// size=32 thunk=false
// signature: undefined FUN_1802f2995()
// status: ok


void FUN_1802f2995(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2995",
    "78344f7db3bdfd0a1e5d5dcaba99f59bb4b5614787ed92ead7548e95104916e9",
    R"F1802f2995C()F1802f2995C",
    R"F1802f2995D()F1802f2995D",
    R"F1802f2995T()F1802f2995T",
    R"F1802f2995F(11: return;)F1802f2995F",
    R"F1802f2995U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2995U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2995() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2995", "FUN_1802f2995");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 78344f7db3bdfd0a1e5d5dcaba99f59bb4b5614787ed92ead7548e95104916e9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2995;
}

// 0x1802f29c1 FUN_1802f29c1
// source: re/dump/decompile/0x1802f29c1_FUN_1802f29c1.c
// size: 43 bytes; thunk: false
// body sha256: 9834bc91d53db93282d2a36341211ddaa31b46edb375c59ab1551c0b9836b0dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f29c1{
    "0x1802f29c1",
    "FUN_1802f29c1",
    R"F1802f29c1S(undefined FUN_1802f29c1())F1802f29c1S",
    R"B1802f29c1(// 0x1802f29c1  FUN_1802f29c1
// size=43 thunk=false
// signature: undefined FUN_1802f29c1()
// status: ok


void FUN_1802f29c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;
    FUN_18021b360(param_2 + 0x78);
  }
  return;
}


)B1802f29c1",
    "9834bc91d53db93282d2a36341211ddaa31b46edb375c59ab1551c0b9836b0dd",
    R"F1802f29c1C(FUN_18021b360)F1802f29c1C",
    R"F1802f29c1D()F1802f29c1D",
    R"F1802f29c1T()F1802f29c1T",
    R"F1802f29c1F(10: if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
14: return;)F1802f29c1F",
    R"F1802f29c1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f29c1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f29c1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f29c1", "FUN_1802f29c1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b360", param_2 + 0x78);
    trace.call_target("FUN_18021b360", reinterpret_cast<const void*>(&image::FUN_18021b360));
    // body sha256: 9834bc91d53db93282d2a36341211ddaa31b46edb375c59ab1551c0b9836b0dd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;");
                trace.statement("FUN_18021b360(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f29c1;
}

// 0x1802f29ec FUN_1802f29ec
// source: re/dump/decompile/0x1802f29ec_FUN_1802f29ec.c
// size: 32 bytes; thunk: false
// body sha256: 265518d06f9b593764e8684e2581c09cb427bd57a832340f31a5ec22463d0056
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f29ec{
    "0x1802f29ec",
    "FUN_1802f29ec",
    R"F1802f29ecS(undefined FUN_1802f29ec())F1802f29ecS",
    R"B1802f29ec(// 0x1802f29ec  FUN_1802f29ec
// size=32 thunk=false
// signature: undefined FUN_1802f29ec()
// status: ok


void FUN_1802f29ec(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f29ec",
    "265518d06f9b593764e8684e2581c09cb427bd57a832340f31a5ec22463d0056",
    R"F1802f29ecC()F1802f29ecC",
    R"F1802f29ecD()F1802f29ecD",
    R"F1802f29ecT()F1802f29ecT",
    R"F1802f29ecF(11: return;)F1802f29ecF",
    R"F1802f29ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f29ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f29ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f29ec", "FUN_1802f29ec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 265518d06f9b593764e8684e2581c09cb427bd57a832340f31a5ec22463d0056
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f29ec;
}

// 0x1802f2a0c FUN_1802f2a0c
// source: re/dump/decompile/0x1802f2a0c_FUN_1802f2a0c.c
// size: 49 bytes; thunk: false
// body sha256: 3aee77d96e5a9c5332a2ab4479e9b0e55d4a61d7685de5360d31ee57130d3042
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2a0c{
    "0x1802f2a0c",
    "FUN_1802f2a0c",
    R"F1802f2a0cS(undefined FUN_1802f2a0c())F1802f2a0cS",
    R"B1802f2a0c(// 0x1802f2a0c  FUN_1802f2a0c
// size=49 thunk=false
// signature: undefined FUN_1802f2a0c()
// status: ok


void FUN_1802f2a0c(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0x80) + 8),0x18,0x102,FUN_18021ef60);
  return;
}


)B1802f2a0c",
    "3aee77d96e5a9c5332a2ab4479e9b0e55d4a61d7685de5360d31ee57130d3042",
    R"F1802f2a0cC(FUN_18021ef60)F1802f2a0cC",
    R"F1802f2a0cD()F1802f2a0cD",
    R"F1802f2a0cT()F1802f2a0cT",
    R"F1802f2a0cF(12: return;)F1802f2a0cF",
    R"F1802f2a0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2a0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2a0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2a0c", "FUN_1802f2a0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021ef60", reinterpret_cast<const void*>(&image::FUN_18021ef60));
    // body sha256: 3aee77d96e5a9c5332a2ab4479e9b0e55d4a61d7685de5360d31ee57130d3042
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_");
            trace.statement("((void *)(*(longlong *)(param_2 + 0x80) + 8),0x18,0x102,FUN_18021ef60);");
            trace.statement("return;");
        }
    return kFunction_0x1802f2a0c;
}

// 0x1802f2a49 FUN_1802f2a49
// source: re/dump/decompile/0x1802f2a49_FUN_1802f2a49.c
// size: 43 bytes; thunk: false
// body sha256: c0153d5bff6084de840daa055d1bd2ed27b3825886ff869c664ec0a33a3ee98f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2a49{
    "0x1802f2a49",
    "FUN_1802f2a49",
    R"F1802f2a49S(undefined FUN_1802f2a49())F1802f2a49S",
    R"B1802f2a49(// 0x1802f2a49  FUN_1802f2a49
// size=43 thunk=false
// signature: undefined FUN_1802f2a49()
// status: ok


void FUN_1802f2a49(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xdfffffff;
    FUN_18021b1b0(param_2 + 0x78);
  }
  return;
}


)B1802f2a49",
    "c0153d5bff6084de840daa055d1bd2ed27b3825886ff869c664ec0a33a3ee98f",
    R"F1802f2a49C(FUN_18021b1b0)F1802f2a49C",
    R"F1802f2a49D()F1802f2a49D",
    R"F1802f2a49T()F1802f2a49T",
    R"F1802f2a49F(10: if ((*(uint *)(param_2 + 0x20) & 0x20000000) != 0) {
14: return;)F1802f2a49F",
    R"F1802f2a49U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2a49U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2a49() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2a49", "FUN_1802f2a49");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b1b0", param_2 + 0x78);
    trace.call_target("FUN_18021b1b0", reinterpret_cast<const void*>(&image::FUN_18021b1b0));
    // body sha256: c0153d5bff6084de840daa055d1bd2ed27b3825886ff869c664ec0a33a3ee98f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xdfffffff;");
                trace.statement("FUN_18021b1b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2a49;
}

// 0x1802f2a74 FUN_1802f2a74
// source: re/dump/decompile/0x1802f2a74_FUN_1802f2a74.c
// size: 32 bytes; thunk: false
// body sha256: 2515a4ef21cbf492fe2d16ba21b6445088878851b7d5399fa3762f0261663cd9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2a74{
    "0x1802f2a74",
    "FUN_1802f2a74",
    R"F1802f2a74S(undefined FUN_1802f2a74())F1802f2a74S",
    R"B1802f2a74(// 0x1802f2a74  FUN_1802f2a74
// size=32 thunk=false
// signature: undefined FUN_1802f2a74()
// status: ok


void FUN_1802f2a74(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2a74",
    "2515a4ef21cbf492fe2d16ba21b6445088878851b7d5399fa3762f0261663cd9",
    R"F1802f2a74C()F1802f2a74C",
    R"F1802f2a74D()F1802f2a74D",
    R"F1802f2a74T()F1802f2a74T",
    R"F1802f2a74F(11: return;)F1802f2a74F",
    R"F1802f2a74U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2a74U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2a74() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2a74", "FUN_1802f2a74");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: 2515a4ef21cbf492fe2d16ba21b6445088878851b7d5399fa3762f0261663cd9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2a74;
}

// 0x1802f2aa0 FUN_1802f2aa0
// source: re/dump/decompile/0x1802f2aa0_FUN_1802f2aa0.c
// size: 43 bytes; thunk: false
// body sha256: f7e72d0c35554f4c3a45db151d5e5574efc7f92160c957c088c5df925f47f896
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2aa0{
    "0x1802f2aa0",
    "FUN_1802f2aa0",
    R"F1802f2aa0S(undefined FUN_1802f2aa0())F1802f2aa0S",
    R"B1802f2aa0(// 0x1802f2aa0  FUN_1802f2aa0
// size=43 thunk=false
// signature: undefined FUN_1802f2aa0()
// status: ok


void FUN_1802f2aa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xbfffffff;
    FUN_18021b2f0(param_2 + 0x28);
  }
  return;
}


)B1802f2aa0",
    "f7e72d0c35554f4c3a45db151d5e5574efc7f92160c957c088c5df925f47f896",
    R"F1802f2aa0C(FUN_18021b2f0)F1802f2aa0C",
    R"F1802f2aa0D()F1802f2aa0D",
    R"F1802f2aa0T()F1802f2aa0T",
    R"F1802f2aa0F(10: if ((*(uint *)(param_2 + 0x20) & 0x40000000) != 0) {
14: return;)F1802f2aa0F",
    R"F1802f2aa0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2aa0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2aa0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2aa0", "FUN_1802f2aa0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b2f0", param_2 + 0x28);
    trace.call_target("FUN_18021b2f0", reinterpret_cast<const void*>(&image::FUN_18021b2f0));
    // body sha256: f7e72d0c35554f4c3a45db151d5e5574efc7f92160c957c088c5df925f47f896
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xbfffffff;");
                trace.statement("FUN_18021b2f0(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2aa0;
}

// 0x1802f2acb FUN_1802f2acb
// source: re/dump/decompile/0x1802f2acb_FUN_1802f2acb.c
// size: 29 bytes; thunk: false
// body sha256: 21a70a27642dd66308bdd5a02f4eabb1fb5f3805f43f2d56c74daba2cb2122ca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2acb{
    "0x1802f2acb",
    "FUN_1802f2acb",
    R"F1802f2acbS(undefined FUN_1802f2acb())F1802f2acbS",
    R"B1802f2acb(// 0x1802f2acb  FUN_1802f2acb
// size=29 thunk=false
// signature: undefined FUN_1802f2acb()
// status: ok


void FUN_1802f2acb(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802f2acb",
    "21a70a27642dd66308bdd5a02f4eabb1fb5f3805f43f2d56c74daba2cb2122ca",
    R"F1802f2acbC()F1802f2acbC",
    R"F1802f2acbD()F1802f2acbD",
    R"F1802f2acbT()F1802f2acbT",
    R"F1802f2acbF(11: return;)F1802f2acbF",
    R"F1802f2acbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2acbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2acb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2acb", "FUN_1802f2acb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 21a70a27642dd66308bdd5a02f4eabb1fb5f3805f43f2d56c74daba2cb2122ca
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2acb;
}

// 0x1802f2af4 FUN_1802f2af4
// source: re/dump/decompile/0x1802f2af4_FUN_1802f2af4.c
// size: 43 bytes; thunk: false
// body sha256: 738afa43665bad2573e8cd6af09a3830fb2ccb56547654689286db25d59b6512
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2af4{
    "0x1802f2af4",
    "FUN_1802f2af4",
    R"F1802f2af4S(undefined FUN_1802f2af4())F1802f2af4S",
    R"B1802f2af4(// 0x1802f2af4  FUN_1802f2af4
// size=43 thunk=false
// signature: undefined FUN_1802f2af4()
// status: ok


void FUN_1802f2af4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2af4",
    "738afa43665bad2573e8cd6af09a3830fb2ccb56547654689286db25d59b6512",
    R"F1802f2af4C(FUN_18021b0b0)F1802f2af4C",
    R"F1802f2af4D()F1802f2af4D",
    R"F1802f2af4T()F1802f2af4T",
    R"F1802f2af4F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
14: return;)F1802f2af4F",
    R"F1802f2af4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2af4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2af4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2af4", "FUN_1802f2af4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 738afa43665bad2573e8cd6af09a3830fb2ccb56547654689286db25d59b6512
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2af4;
}

// 0x1802f2b1f FUN_1802f2b1f
// source: re/dump/decompile/0x1802f2b1f_FUN_1802f2b1f.c
// size: 32 bytes; thunk: false
// body sha256: b893ae8597c8bd0f0075390508364c4d1813dd9cffe0f763733387252a498f85
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2b1f{
    "0x1802f2b1f",
    "FUN_1802f2b1f",
    R"F1802f2b1fS(undefined FUN_1802f2b1f())F1802f2b1fS",
    R"B1802f2b1f(// 0x1802f2b1f  FUN_1802f2b1f
// size=32 thunk=false
// signature: undefined FUN_1802f2b1f()
// status: ok


void FUN_1802f2b1f(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2b1f",
    "b893ae8597c8bd0f0075390508364c4d1813dd9cffe0f763733387252a498f85",
    R"F1802f2b1fC()F1802f2b1fC",
    R"F1802f2b1fD()F1802f2b1fD",
    R"F1802f2b1fT()F1802f2b1fT",
    R"F1802f2b1fF(11: return;)F1802f2b1fF",
    R"F1802f2b1fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2b1fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2b1f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2b1f", "FUN_1802f2b1f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: b893ae8597c8bd0f0075390508364c4d1813dd9cffe0f763733387252a498f85
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2b1f;
}

// 0x1802f2b4b FUN_1802f2b4b
// source: re/dump/decompile/0x1802f2b4b_FUN_1802f2b4b.c
// size: 38 bytes; thunk: false
// body sha256: 6adb03359c14d867a47c96be584f8ed94262050a8a18b60f6531e16fccf4cb54
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2b4b{
    "0x1802f2b4b",
    "FUN_1802f2b4b",
    R"F1802f2b4bS(undefined FUN_1802f2b4b())F1802f2b4bS",
    R"B1802f2b4b(// 0x1802f2b4b  FUN_1802f2b4b
// size=38 thunk=false
// signature: undefined FUN_1802f2b4b()
// status: ok


void FUN_1802f2b4b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


)B1802f2b4b",
    "6adb03359c14d867a47c96be584f8ed94262050a8a18b60f6531e16fccf4cb54",
    R"F1802f2b4bC(FUN_18021b0b0)F1802f2b4bC",
    R"F1802f2b4bD()F1802f2b4bD",
    R"F1802f2b4bT()F1802f2b4bT",
    R"F1802f2b4bF(10: if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
14: return;)F1802f2b4bF",
    R"F1802f2b4bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2b4bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2b4b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2b4b", "FUN_1802f2b4b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x78);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 6adb03359c14d867a47c96be584f8ed94262050a8a18b60f6531e16fccf4cb54
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2b4b;
}

// 0x1802f2b71 FUN_1802f2b71
// source: re/dump/decompile/0x1802f2b71_FUN_1802f2b71.c
// size: 32 bytes; thunk: false
// body sha256: a49ff24ca9056e5fd7fcd771ad3280c6424a055eb8d146f10d5b3c8557bf7c62
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2b71{
    "0x1802f2b71",
    "FUN_1802f2b71",
    R"F1802f2b71S(undefined FUN_1802f2b71())F1802f2b71S",
    R"B1802f2b71(// 0x1802f2b71  FUN_1802f2b71
// size=32 thunk=false
// signature: undefined FUN_1802f2b71()
// status: ok


void FUN_1802f2b71(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}


)B1802f2b71",
    "a49ff24ca9056e5fd7fcd771ad3280c6424a055eb8d146f10d5b3c8557bf7c62",
    R"F1802f2b71C()F1802f2b71C",
    R"F1802f2b71D()F1802f2b71D",
    R"F1802f2b71T()F1802f2b71T",
    R"F1802f2b71F(11: return;)F1802f2b71F",
    R"F1802f2b71U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2b71U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2b71() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2b71", "FUN_1802f2b71");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x80));
    // body sha256: a49ff24ca9056e5fd7fcd771ad3280c6424a055eb8d146f10d5b3c8557bf7c62
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x80));");
            trace.statement("return;");
        }
    return kFunction_0x1802f2b71;
}

// 0x1802f2cdc FUN_1802f2cdc
// source: re/dump/decompile/0x1802f2cdc_FUN_1802f2cdc.c
// size: 39 bytes; thunk: false
// body sha256: c7f82c61e6043c0f258a52e055adb7e19cf1960a079d36df79ea5a35cf3be6c5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2cdc{
    "0x1802f2cdc",
    "FUN_1802f2cdc",
    R"F1802f2cdcS(undefined FUN_1802f2cdc())F1802f2cdcS",
    R"B1802f2cdc(// 0x1802f2cdc  FUN_1802f2cdc
// size=39 thunk=false
// signature: undefined FUN_1802f2cdc()
// status: ok


undefined8 FUN_1802f2cdc(void)

{
  DAT_1803e9800 = 0;
  return 0;
}


)B1802f2cdc",
    "c7f82c61e6043c0f258a52e055adb7e19cf1960a079d36df79ea5a35cf3be6c5",
    R"F1802f2cdcC()F1802f2cdcC",
    R"F1802f2cdcD(DAT_1803e9800)F1802f2cdcD",
    R"F1802f2cdcT()F1802f2cdcT",
    R"F1802f2cdcF(11: return 0;)F1802f2cdcF",
    R"F1802f2cdcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9800.)F1802f2cdcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2cdc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2cdc", "FUN_1802f2cdc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9800.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803e9800", static_cast<const void*>(&image::DAT_1803e9800));
    // body sha256: c7f82c61e6043c0f258a52e055adb7e19cf1960a079d36df79ea5a35cf3be6c5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803e9800 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f2cdc;
}

// 0x1802f2d1c FUN_1802f2d1c
// source: re/dump/decompile/0x1802f2d1c_FUN_1802f2d1c.c
// size: 38 bytes; thunk: false
// body sha256: 7c8cf452746242a6ee88d450cf341b4bbee527b694226ad175f319de97aa0201
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2d1c{
    "0x1802f2d1c",
    "FUN_1802f2d1c",
    R"F1802f2d1cS(undefined FUN_1802f2d1c())F1802f2d1cS",
    R"B1802f2d1c(// 0x1802f2d1c  FUN_1802f2d1c
// size=38 thunk=false
// signature: undefined FUN_1802f2d1c()
// status: ok


void FUN_1802f2d1c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}


)B1802f2d1c",
    "7c8cf452746242a6ee88d450cf341b4bbee527b694226ad175f319de97aa0201",
    R"F1802f2d1cC()F1802f2d1cC",
    R"F1802f2d1cD()F1802f2d1cD",
    R"F1802f2d1cT()F1802f2d1cT",
    R"F1802f2d1cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f2d1cF",
    R"F1802f2d1cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2d1cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2d1c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2d1c", "FUN_1802f2d1c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x68, 0));
    // body sha256: 7c8cf452746242a6ee88d450cf341b4bbee527b694226ad175f319de97aa0201
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x68));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2d1c;
}

// 0x1802f2d42 FUN_1802f2d42
// source: re/dump/decompile/0x1802f2d42_FUN_1802f2d42.c
// size: 38 bytes; thunk: false
// body sha256: 7d6c44cff16e40319e94bb861058f5beae3673d89eae8225818291907bc49b1b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2d42{
    "0x1802f2d42",
    "FUN_1802f2d42",
    R"F1802f2d42S(undefined FUN_1802f2d42())F1802f2d42S",
    R"B1802f2d42(// 0x1802f2d42  FUN_1802f2d42
// size=38 thunk=false
// signature: undefined FUN_1802f2d42()
// status: ok


void FUN_1802f2d42(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f2d42",
    "7d6c44cff16e40319e94bb861058f5beae3673d89eae8225818291907bc49b1b",
    R"F1802f2d42C()F1802f2d42C",
    R"F1802f2d42D()F1802f2d42D",
    R"F1802f2d42T()F1802f2d42T",
    R"F1802f2d42F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f2d42F",
    R"F1802f2d42U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2d42U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2d42() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2d42", "FUN_1802f2d42");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 7d6c44cff16e40319e94bb861058f5beae3673d89eae8225818291907bc49b1b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2d42;
}

// 0x1802f2d68 FUN_1802f2d68
// source: re/dump/decompile/0x1802f2d68_FUN_1802f2d68.c
// size: 38 bytes; thunk: false
// body sha256: f944cf1d69e1ec2f9c0e0af7cf06f4112473f6e3f02b95b94dce455c5208ca5b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2d68{
    "0x1802f2d68",
    "FUN_1802f2d68",
    R"F1802f2d68S(undefined FUN_1802f2d68())F1802f2d68S",
    R"B1802f2d68(// 0x1802f2d68  FUN_1802f2d68
// size=38 thunk=false
// signature: undefined FUN_1802f2d68()
// status: ok


void FUN_1802f2d68(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f2d68",
    "f944cf1d69e1ec2f9c0e0af7cf06f4112473f6e3f02b95b94dce455c5208ca5b",
    R"F1802f2d68C()F1802f2d68C",
    R"F1802f2d68D()F1802f2d68D",
    R"F1802f2d68T()F1802f2d68T",
    R"F1802f2d68F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f2d68F",
    R"F1802f2d68U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2d68U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2d68() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2d68", "FUN_1802f2d68");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: f944cf1d69e1ec2f9c0e0af7cf06f4112473f6e3f02b95b94dce455c5208ca5b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2d68;
}

// 0x1802f2d8e FUN_1802f2d8e
// source: re/dump/decompile/0x1802f2d8e_FUN_1802f2d8e.c
// size: 38 bytes; thunk: false
// body sha256: 9619fc49377993717129e903b81a7e14036765af6b67c8b4bef5d6d43c2d7af9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2d8e{
    "0x1802f2d8e",
    "FUN_1802f2d8e",
    R"F1802f2d8eS(undefined FUN_1802f2d8e())F1802f2d8eS",
    R"B1802f2d8e(// 0x1802f2d8e  FUN_1802f2d8e
// size=38 thunk=false
// signature: undefined FUN_1802f2d8e()
// status: ok


void FUN_1802f2d8e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f2d8e",
    "9619fc49377993717129e903b81a7e14036765af6b67c8b4bef5d6d43c2d7af9",
    R"F1802f2d8eC()F1802f2d8eC",
    R"F1802f2d8eD()F1802f2d8eD",
    R"F1802f2d8eT()F1802f2d8eT",
    R"F1802f2d8eF(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f2d8eF",
    R"F1802f2d8eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2d8eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2d8e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2d8e", "FUN_1802f2d8e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 9619fc49377993717129e903b81a7e14036765af6b67c8b4bef5d6d43c2d7af9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2d8e;
}

// 0x1802f2db4 FUN_1802f2db4
// source: re/dump/decompile/0x1802f2db4_FUN_1802f2db4.c
// size: 38 bytes; thunk: false
// body sha256: 38cb9232d4de50ed0ee17ad282a1c7e214f78ee15d5ade3c6f9312c9b340533f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2db4{
    "0x1802f2db4",
    "FUN_1802f2db4",
    R"F1802f2db4S(undefined FUN_1802f2db4())F1802f2db4S",
    R"B1802f2db4(// 0x1802f2db4  FUN_1802f2db4
// size=38 thunk=false
// signature: undefined FUN_1802f2db4()
// status: ok


void FUN_1802f2db4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f2db4",
    "38cb9232d4de50ed0ee17ad282a1c7e214f78ee15d5ade3c6f9312c9b340533f",
    R"F1802f2db4C()F1802f2db4C",
    R"F1802f2db4D()F1802f2db4D",
    R"F1802f2db4T()F1802f2db4T",
    R"F1802f2db4F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f2db4F",
    R"F1802f2db4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2db4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2db4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2db4", "FUN_1802f2db4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 38cb9232d4de50ed0ee17ad282a1c7e214f78ee15d5ade3c6f9312c9b340533f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2db4;
}

// 0x1802f2dda FUN_1802f2dda
// source: re/dump/decompile/0x1802f2dda_FUN_1802f2dda.c
// size: 38 bytes; thunk: false
// body sha256: 0c53eb80b671170c7353f21fda45e2c71bb8dbaaa955f812cce7d7ea4260f5bf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2dda{
    "0x1802f2dda",
    "FUN_1802f2dda",
    R"F1802f2ddaS(undefined FUN_1802f2dda())F1802f2ddaS",
    R"B1802f2dda(// 0x1802f2dda  FUN_1802f2dda
// size=38 thunk=false
// signature: undefined FUN_1802f2dda()
// status: ok


void FUN_1802f2dda(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f2dda",
    "0c53eb80b671170c7353f21fda45e2c71bb8dbaaa955f812cce7d7ea4260f5bf",
    R"F1802f2ddaC()F1802f2ddaC",
    R"F1802f2ddaD()F1802f2ddaD",
    R"F1802f2ddaT()F1802f2ddaT",
    R"F1802f2ddaF(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802f2ddaF",
    R"F1802f2ddaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2ddaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2dda() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2dda", "FUN_1802f2dda");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 0c53eb80b671170c7353f21fda45e2c71bb8dbaaa955f812cce7d7ea4260f5bf
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2dda;
}

// 0x1802f2e00 FUN_1802f2e00
// source: re/dump/decompile/0x1802f2e00_FUN_1802f2e00.c
// size: 38 bytes; thunk: false
// body sha256: 8b6b5a4cf3f7d220d2ff6097e7a712dcd6d8623f52d3604dc55021f1b3cbf4a2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2e00{
    "0x1802f2e00",
    "FUN_1802f2e00",
    R"F1802f2e00S(undefined FUN_1802f2e00())F1802f2e00S",
    R"B1802f2e00(// 0x1802f2e00  FUN_1802f2e00
// size=38 thunk=false
// signature: undefined FUN_1802f2e00()
// status: ok


void FUN_1802f2e00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f2e00",
    "8b6b5a4cf3f7d220d2ff6097e7a712dcd6d8623f52d3604dc55021f1b3cbf4a2",
    R"F1802f2e00C()F1802f2e00C",
    R"F1802f2e00D()F1802f2e00D",
    R"F1802f2e00T()F1802f2e00T",
    R"F1802f2e00F(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802f2e00F",
    R"F1802f2e00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2e00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2e00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2e00", "FUN_1802f2e00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 8b6b5a4cf3f7d220d2ff6097e7a712dcd6d8623f52d3604dc55021f1b3cbf4a2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2e00;
}

// 0x1802f2e30 FUN_1802f2e30
// source: re/dump/decompile/0x1802f2e30_FUN_1802f2e30.c
// size: 29 bytes; thunk: false
// body sha256: 0d092a0915f66008332dea0508800320adffe9983e59020fc6c8f342c7ed2937
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2e30{
    "0x1802f2e30",
    "FUN_1802f2e30",
    R"F1802f2e30S(undefined FUN_1802f2e30())F1802f2e30S",
    R"B1802f2e30(// 0x1802f2e30  FUN_1802f2e30
// size=29 thunk=false
// signature: undefined FUN_1802f2e30()
// status: ok


undefined8 FUN_1802f2e30(void)

{
  return 0;
}


)B1802f2e30",
    "0d092a0915f66008332dea0508800320adffe9983e59020fc6c8f342c7ed2937",
    R"F1802f2e30C()F1802f2e30C",
    R"F1802f2e30D()F1802f2e30D",
    R"F1802f2e30T()F1802f2e30T",
    R"F1802f2e30F(10: return 0;)F1802f2e30F",
    R"F1802f2e30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2e30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2e30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2e30", "FUN_1802f2e30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0d092a0915f66008332dea0508800320adffe9983e59020fc6c8f342c7ed2937
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f2e30;
}

// 0x1802f2e4e FUN_1802f2e4e
// source: re/dump/decompile/0x1802f2e4e_FUN_1802f2e4e.c
// size: 37 bytes; thunk: false
// body sha256: 97a3f3a201e8c56ffc9057c3e1a9081e79f5b0b20f1abb01d2d7a0f87e11da1c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2e4e{
    "0x1802f2e4e",
    "FUN_1802f2e4e",
    R"F1802f2e4eS(undefined FUN_1802f2e4e())F1802f2e4eS",
    R"B1802f2e4e(// 0x1802f2e4e  FUN_1802f2e4e
// size=37 thunk=false
// signature: undefined FUN_1802f2e4e()
// status: ok


undefined8 FUN_1802f2e4e(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x28) = 0;
  return 0;
}


)B1802f2e4e",
    "97a3f3a201e8c56ffc9057c3e1a9081e79f5b0b20f1abb01d2d7a0f87e11da1c",
    R"F1802f2e4eC()F1802f2e4eC",
    R"F1802f2e4eD()F1802f2e4eD",
    R"F1802f2e4eT()F1802f2e4eT",
    R"F1802f2e4eF(11: return 0;)F1802f2e4eF",
    R"F1802f2e4eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2e4eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2e4e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2e4e", "FUN_1802f2e4e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 97a3f3a201e8c56ffc9057c3e1a9081e79f5b0b20f1abb01d2d7a0f87e11da1c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined8 *)(param_2 + 0x28) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f2e4e;
}

// 0x1802f2e74 FUN_1802f2e74
// source: re/dump/decompile/0x1802f2e74_FUN_1802f2e74.c
// size: 38 bytes; thunk: false
// body sha256: 66960d2f86183b36b7e78067fd6e16a876fa720de9e639801d23f5edd27d45f2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2e74{
    "0x1802f2e74",
    "FUN_1802f2e74",
    R"F1802f2e74S(undefined FUN_1802f2e74())F1802f2e74S",
    R"B1802f2e74(// 0x1802f2e74  FUN_1802f2e74
// size=38 thunk=false
// signature: undefined FUN_1802f2e74()
// status: ok


void FUN_1802f2e74(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B1802f2e74",
    "66960d2f86183b36b7e78067fd6e16a876fa720de9e639801d23f5edd27d45f2",
    R"F1802f2e74C()F1802f2e74C",
    R"F1802f2e74D()F1802f2e74D",
    R"F1802f2e74T()F1802f2e74T",
    R"F1802f2e74F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f2e74F",
    R"F1802f2e74U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2e74U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2e74() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2e74", "FUN_1802f2e74");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x50);
    // body sha256: 66960d2f86183b36b7e78067fd6e16a876fa720de9e639801d23f5edd27d45f2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2e74;
}

// 0x1802f2e9a FUN_1802f2e9a
// source: re/dump/decompile/0x1802f2e9a_FUN_1802f2e9a.c
// size: 38 bytes; thunk: false
// body sha256: 3bb3b8c4e47f54582b9bdbe846eb9a04302427d84b72875866e6975e7a74fa0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2e9a{
    "0x1802f2e9a",
    "FUN_1802f2e9a",
    R"F1802f2e9aS(undefined FUN_1802f2e9a())F1802f2e9aS",
    R"B1802f2e9a(// 0x1802f2e9a  FUN_1802f2e9a
// size=38 thunk=false
// signature: undefined FUN_1802f2e9a()
// status: ok


void FUN_1802f2e9a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802f2e9a",
    "3bb3b8c4e47f54582b9bdbe846eb9a04302427d84b72875866e6975e7a74fa0d",
    R"F1802f2e9aC()F1802f2e9aC",
    R"F1802f2e9aD()F1802f2e9aD",
    R"F1802f2e9aT()F1802f2e9aT",
    R"F1802f2e9aF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f2e9aF",
    R"F1802f2e9aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2e9aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2e9a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2e9a", "FUN_1802f2e9a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: 3bb3b8c4e47f54582b9bdbe846eb9a04302427d84b72875866e6975e7a74fa0d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2e9a;
}

// 0x1802f2ec0 FUN_1802f2ec0
// source: re/dump/decompile/0x1802f2ec0_FUN_1802f2ec0.c
// size: 41 bytes; thunk: false
// body sha256: 67981602314f7f249bd95a12fdc8d0b10bc6d09210a84f404a65aeed191a2503
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2ec0{
    "0x1802f2ec0",
    "FUN_1802f2ec0",
    R"F1802f2ec0S(undefined FUN_1802f2ec0())F1802f2ec0S",
    R"B1802f2ec0(// 0x1802f2ec0  FUN_1802f2ec0
// size=41 thunk=false
// signature: undefined FUN_1802f2ec0()
// status: ok


void FUN_1802f2ec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f2ec0",
    "67981602314f7f249bd95a12fdc8d0b10bc6d09210a84f404a65aeed191a2503",
    R"F1802f2ec0C()F1802f2ec0C",
    R"F1802f2ec0D()F1802f2ec0D",
    R"F1802f2ec0T()F1802f2ec0T",
    R"F1802f2ec0F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f2ec0F",
    R"F1802f2ec0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2ec0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2ec0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2ec0", "FUN_1802f2ec0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x80, 0));
    // body sha256: 67981602314f7f249bd95a12fdc8d0b10bc6d09210a84f404a65aeed191a2503
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f2ec0;
}

// 0x1802f2f10 FUN_1802f2f10
// source: re/dump/decompile/0x1802f2f10_FUN_1802f2f10.c
// size: 29 bytes; thunk: false
// body sha256: 041a6e4d88829b52a80d598e52593533f5f62358c8568213449721e8ae4ebb7a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2f10{
    "0x1802f2f10",
    "FUN_1802f2f10",
    R"F1802f2f10S(undefined FUN_1802f2f10())F1802f2f10S",
    R"B1802f2f10(// 0x1802f2f10  FUN_1802f2f10
// size=29 thunk=false
// signature: undefined FUN_1802f2f10()
// status: ok


undefined8 FUN_1802f2f10(void)

{
  return 0;
}


)B1802f2f10",
    "041a6e4d88829b52a80d598e52593533f5f62358c8568213449721e8ae4ebb7a",
    R"F1802f2f10C()F1802f2f10C",
    R"F1802f2f10D()F1802f2f10D",
    R"F1802f2f10T()F1802f2f10T",
    R"F1802f2f10F(10: return 0;)F1802f2f10F",
    R"F1802f2f10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2f10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2f10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2f10", "FUN_1802f2f10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 041a6e4d88829b52a80d598e52593533f5f62358c8568213449721e8ae4ebb7a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f2f10;
}

// 0x1802f2fca FUN_1802f2fca
// source: re/dump/decompile/0x1802f2fca_FUN_1802f2fca.c
// size: 29 bytes; thunk: false
// body sha256: 1201985b06bcf12025f530e4f708a26dba4a049a945180790238f15858fd8ba0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2fca{
    "0x1802f2fca",
    "FUN_1802f2fca",
    R"F1802f2fcaS(undefined FUN_1802f2fca())F1802f2fcaS",
    R"B1802f2fca(// 0x1802f2fca  FUN_1802f2fca
// size=29 thunk=false
// signature: undefined FUN_1802f2fca()
// status: ok


undefined8 FUN_1802f2fca(void)

{
  return 0;
}


)B1802f2fca",
    "1201985b06bcf12025f530e4f708a26dba4a049a945180790238f15858fd8ba0",
    R"F1802f2fcaC()F1802f2fcaC",
    R"F1802f2fcaD()F1802f2fcaD",
    R"F1802f2fcaT()F1802f2fcaT",
    R"F1802f2fcaF(10: return 0;)F1802f2fcaF",
    R"F1802f2fcaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2fcaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2fca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2fca", "FUN_1802f2fca");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1201985b06bcf12025f530e4f708a26dba4a049a945180790238f15858fd8ba0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f2fca;
}

// 0x1802f2ff0 FUN_1802f2ff0
// source: re/dump/decompile/0x1802f2ff0_FUN_1802f2ff0.c
// size: 107 bytes; thunk: false
// body sha256: 121635f32d0ce4c8fa74e4dfa71e23c2ba193ead57ed135d190408fe45ae05d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f2ff0{
    "0x1802f2ff0",
    "FUN_1802f2ff0",
    R"F1802f2ff0S(undefined FUN_1802f2ff0())F1802f2ff0S",
    R"B1802f2ff0(// 0x1802f2ff0  FUN_1802f2ff0
// size=107 thunk=false
// signature: undefined FUN_1802f2ff0()
// status: ok


undefined8 FUN_1802f2ff0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (*(longlong *)(lVar1 + 8) != lVar2) {
    lVar3 = *(longlong *)(lVar1 + 8);
    *(longlong *)(param_2 + 0x28) = lVar3;
    while (lVar3 != lVar2) {
      FUN_18020e450(lVar3 + 0x28);
      FUN_18020e450(lVar3 + 8);
      lVar3 = lVar3 + 0x50;
      *(longlong *)(param_2 + 0x28) = lVar3;
    }
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}


)B1802f2ff0",
    "121635f32d0ce4c8fa74e4dfa71e23c2ba193ead57ed135d190408fe45ae05d7",
    R"F1802f2ff0C(FUN_18020e450)F1802f2ff0C",
    R"F1802f2ff0D()F1802f2ff0D",
    R"F1802f2ff0T()F1802f2ff0T",
    R"F1802f2ff0F(16: if (*(longlong *)(lVar1 + 8) != lVar2) {
19: while (lVar3 != lVar2) {
27: return 0;)F1802f2ff0F",
    R"F1802f2ff0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f2ff0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f2ff0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f2ff0", "FUN_1802f2ff0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", lVar3 + 0x28);
    trace.call_arguments("FUN_18020e450", lVar3 + 8);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    // body sha256: 121635f32d0ce4c8fa74e4dfa71e23c2ba193ead57ed135d190408fe45ae05d7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("lVar1 = *(longlong *)(param_2 + 0x20);");
            trace.statement("lVar2 = *(longlong *)(lVar1 + 0x10);");
            if (trace.checked_condition("if (*(longlong *)(lVar1 + 8) != lVar2)", [&]() -> bool { return static_cast<bool>(load_at<std::int64_t>(lVar1 + 8, 0) != lVar2); })) {
                trace.statement("lVar3 = *(longlong *)(lVar1 + 8);");
                trace.statement("*(longlong *)(param_2 + 0x28) = lVar3;");
                while (trace.checked_loop_condition("while (lVar3 != lVar2)", [&]() -> bool { return static_cast<bool>(lVar3 != lVar2); })) {
                    trace.statement("FUN_18020e450(lVar3 + 0x28);");
                    trace.statement("FUN_18020e450(lVar3 + 8);");
                    trace.statement("lVar3 = lVar3 + 0x50;");
                    trace.statement("*(longlong *)(param_2 + 0x28) = lVar3;");
                }
                trace.statement("*(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 8);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802f2ff0;
}

// 0x1802f30e0 FUN_1802f30e0
// source: re/dump/decompile/0x1802f30e0_FUN_1802f30e0.c
// size: 22 bytes; thunk: false
// body sha256: 627db9da1ae2c5c80d3ebc98bb37838c423c5c99bc0b6b7dfff2b1a6299d1d4c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f30e0{
    "0x1802f30e0",
    "FUN_1802f30e0",
    R"F1802f30e0S(undefined FUN_1802f30e0())F1802f30e0S",
    R"B1802f30e0(// 0x1802f30e0  FUN_1802f30e0
// size=22 thunk=false
// signature: undefined FUN_1802f30e0()
// status: ok


void FUN_1802f30e0(void)

{
  DAT_180427660 = DAT_180427660 & 0xfffffffe;
  return;
}


)B1802f30e0",
    "627db9da1ae2c5c80d3ebc98bb37838c423c5c99bc0b6b7dfff2b1a6299d1d4c",
    R"F1802f30e0C()F1802f30e0C",
    R"F1802f30e0D(DAT_180427660)F1802f30e0D",
    R"F1802f30e0T()F1802f30e0T",
    R"F1802f30e0F(11: return;)F1802f30e0F",
    R"F1802f30e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427660.)F1802f30e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f30e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f30e0", "FUN_1802f30e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427660.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180427660", static_cast<const void*>(&image::DAT_180427660));
    // body sha256: 627db9da1ae2c5c80d3ebc98bb37838c423c5c99bc0b6b7dfff2b1a6299d1d4c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180427660 = DAT_180427660 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f30e0;
}

// 0x1802f3180 FUN_1802f3180
// source: re/dump/decompile/0x1802f3180_FUN_1802f3180.c
// size: 250 bytes; thunk: false
// body sha256: 4315f2218be51c9d8c72cd24f0a4ee302256917f6ce0b6389f584c3930576aab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3180{
    "0x1802f3180",
    "FUN_1802f3180",
    R"F1802f3180S(undefined FUN_1802f3180())F1802f3180S",
    R"B1802f3180(// 0x1802f3180  FUN_1802f3180
// size=250 thunk=false
// signature: undefined FUN_1802f3180()
// status: ok


undefined8 FUN_1802f3180(void)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180014410("[MP] model parse faulted - preview disabled\n");
  lVar1 = DAT_1803ea2c8;
  if (DAT_1803eb360 != DAT_1803eb368) {
    DAT_1803eb368 = DAT_1803eb360;
  }
  if (DAT_1803e9a68 != DAT_1803e9a70) {
    DAT_1803e9a70 = DAT_1803e9a68;
  }
  if (DAT_1803e9a80 != DAT_1803e9a88) {
    DAT_1803e9a88 = DAT_1803e9a80;
  }
  lVar2 = DAT_1803ea2c0;
  if (DAT_1803ea2c0 != DAT_1803ea2c8) {
    do {
      FUN_18020e450(lVar2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar1);
    DAT_1803ea2c8 = DAT_1803ea2c0;
  }
  if (DAT_1803eb808 != DAT_1803eb810) {
    DAT_1803eb810 = DAT_1803eb808;
  }
  if (DAT_1803e9a50 != DAT_1803e9a58) {
    DAT_1803e9a58 = DAT_1803e9a50;
  }
  if (DAT_1803edd30 != DAT_1803edd38) {
    DAT_1803edd38 = DAT_1803edd30;
  }
  DAT_180423a6c = 0;
  DAT_180423a88 = 1;
  return 0;
}


)B1802f3180",
    "4315f2218be51c9d8c72cd24f0a4ee302256917f6ce0b6389f584c3930576aab",
    R"F1802f3180C(FUN_180014410
FUN_18020e450)F1802f3180C",
    R"F1802f3180D(DAT_1803e9a50
DAT_1803e9a58
DAT_1803e9a68
DAT_1803e9a70
DAT_1803e9a80
DAT_1803e9a88
DAT_1803ea2c0
DAT_1803ea2c8
DAT_1803eb360
DAT_1803eb368
DAT_1803eb808
DAT_1803eb810
DAT_1803edd30
DAT_1803edd38
DAT_180423a6c
DAT_180423a88)F1802f3180D",
    R"F1802f3180T("[MP] model parse faulted - preview disabled\\n")F1802f3180T",
    R"F1802f3180F(15: if (DAT_1803eb360 != DAT_1803eb368) {
18: if (DAT_1803e9a68 != DAT_1803e9a70) {
21: if (DAT_1803e9a80 != DAT_1803e9a88) {
25: if (DAT_1803ea2c0 != DAT_1803ea2c8) {
26: do {
32: if (DAT_1803eb808 != DAT_1803eb810) {
35: if (DAT_1803e9a50 != DAT_1803e9a58) {
38: if (DAT_1803edd30 != DAT_1803edd38) {
43: return 0;)F1802f3180F",
    R"F1802f3180U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a58.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a68.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a70.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a80.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a88.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea2c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea2c8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb360.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb368.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb808.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb810.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edd30.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edd38.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423a6c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423a88.)F1802f3180U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3180() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3180", "FUN_1802f3180");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a58.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a68.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a70.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a80.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a88.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea2c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea2c8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb360.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb368.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb808.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb810.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edd30.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edd38.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423a6c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423a88.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[MP] model parse faulted - preview disabled\n");
    trace.call_arguments("FUN_18020e450", lVar2);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9a50", static_cast<const void*>(&image::DAT_1803e9a50));
    trace.data_ref("DAT_1803e9a58", static_cast<const void*>(&image::DAT_1803e9a58));
    trace.data_ref("DAT_1803e9a68", static_cast<const void*>(&image::DAT_1803e9a68));
    trace.data_ref("DAT_1803e9a70", static_cast<const void*>(&image::DAT_1803e9a70));
    trace.data_ref("DAT_1803e9a80", static_cast<const void*>(&image::DAT_1803e9a80));
    trace.data_ref("DAT_1803e9a88", static_cast<const void*>(&image::DAT_1803e9a88));
    trace.data_ref("DAT_1803ea2c0", static_cast<const void*>(&image::DAT_1803ea2c0));
    trace.data_ref("DAT_1803ea2c8", static_cast<const void*>(&image::DAT_1803ea2c8));
    trace.data_ref("DAT_1803eb360", static_cast<const void*>(&image::DAT_1803eb360));
    trace.data_ref("DAT_1803eb368", static_cast<const void*>(&image::DAT_1803eb368));
    trace.data_ref("DAT_1803eb808", static_cast<const void*>(&image::DAT_1803eb808));
    trace.data_ref("DAT_1803eb810", static_cast<const void*>(&image::DAT_1803eb810));
    trace.data_ref("DAT_1803edd30", static_cast<const void*>(&image::DAT_1803edd30));
    trace.data_ref("DAT_1803edd38", static_cast<const void*>(&image::DAT_1803edd38));
    trace.data_ref("DAT_180423a6c", static_cast<const void*>(&image::DAT_180423a6c));
    trace.data_ref("DAT_180423a88", static_cast<const void*>(&image::DAT_180423a88));
    trace.string_literal("[MP] model parse faulted - preview disabled\\n");
    // body sha256: 4315f2218be51c9d8c72cd24f0a4ee302256917f6ce0b6389f584c3930576aab
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("FUN_180014410(\"[MP] model parse faulted - preview disabled\\n\");");
            trace.statement("lVar1 = DAT_1803ea2c8;");
            if (trace.checked_condition("if (DAT_1803eb360 != DAT_1803eb368)", [&]() -> bool { return static_cast<bool>(image::DAT_1803eb360 != image::DAT_1803eb368); })) {
                trace.statement("DAT_1803eb368 = DAT_1803eb360;");
            }
            if (trace.checked_condition("if (DAT_1803e9a68 != DAT_1803e9a70)", [&]() -> bool { return static_cast<bool>(image::DAT_1803e9a68 != image::DAT_1803e9a70); })) {
                trace.statement("DAT_1803e9a70 = DAT_1803e9a68;");
            }
            if (trace.checked_condition("if (DAT_1803e9a80 != DAT_1803e9a88)", [&]() -> bool { return static_cast<bool>(image::DAT_1803e9a80 != image::DAT_1803e9a88); })) {
                trace.statement("DAT_1803e9a88 = DAT_1803e9a80;");
            }
            trace.statement("lVar2 = DAT_1803ea2c0;");
            if (trace.checked_condition("if (DAT_1803ea2c0 != DAT_1803ea2c8)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ea2c0 != image::DAT_1803ea2c8); })) {
                do {
                    trace.statement("FUN_18020e450(lVar2);");
                    trace.statement("lVar2 = lVar2 + 0x20;");
                } while (trace.loop_condition("while (lVar2 != lVar1);"));
                trace.statement("DAT_1803ea2c8 = DAT_1803ea2c0;");
            }
            if (trace.checked_condition("if (DAT_1803eb808 != DAT_1803eb810)", [&]() -> bool { return static_cast<bool>(image::DAT_1803eb808 != image::DAT_1803eb810); })) {
                trace.statement("DAT_1803eb810 = DAT_1803eb808;");
            }
            if (trace.checked_condition("if (DAT_1803e9a50 != DAT_1803e9a58)", [&]() -> bool { return static_cast<bool>(image::DAT_1803e9a50 != image::DAT_1803e9a58); })) {
                trace.statement("DAT_1803e9a58 = DAT_1803e9a50;");
            }
            if (trace.checked_condition("if (DAT_1803edd30 != DAT_1803edd38)", [&]() -> bool { return static_cast<bool>(image::DAT_1803edd30 != image::DAT_1803edd38); })) {
                trace.statement("DAT_1803edd38 = DAT_1803edd30;");
            }
            trace.statement("DAT_180423a6c = 0;");
            trace.statement("DAT_180423a88 = 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f3180;
}

// 0x1802f32c0 FUN_1802f32c0
// source: re/dump/decompile/0x1802f32c0_FUN_1802f32c0.c
// size: 38 bytes; thunk: false
// body sha256: dafbd7621fd2e3aa68fa9f43fec707bf04bfdf4d2f2022b9368be77a63d0c273
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f32c0{
    "0x1802f32c0",
    "FUN_1802f32c0",
    R"F1802f32c0S(undefined FUN_1802f32c0())F1802f32c0S",
    R"B1802f32c0(// 0x1802f32c0  FUN_1802f32c0
// size=38 thunk=false
// signature: undefined FUN_1802f32c0()
// status: ok


void FUN_1802f32c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f32c0",
    "dafbd7621fd2e3aa68fa9f43fec707bf04bfdf4d2f2022b9368be77a63d0c273",
    R"F1802f32c0C()F1802f32c0C",
    R"F1802f32c0D()F1802f32c0D",
    R"F1802f32c0T()F1802f32c0T",
    R"F1802f32c0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f32c0F",
    R"F1802f32c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f32c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f32c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f32c0", "FUN_1802f32c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: dafbd7621fd2e3aa68fa9f43fec707bf04bfdf4d2f2022b9368be77a63d0c273
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f32c0;
}

// 0x1802f32e6 FUN_1802f32e6
// source: re/dump/decompile/0x1802f32e6_FUN_1802f32e6.c
// size: 38 bytes; thunk: false
// body sha256: 5e72ba6d2d5cfc6e63018335a1d381b49978e0e52442c5c37ff84e2dda29c383
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f32e6{
    "0x1802f32e6",
    "FUN_1802f32e6",
    R"F1802f32e6S(undefined FUN_1802f32e6())F1802f32e6S",
    R"B1802f32e6(// 0x1802f32e6  FUN_1802f32e6
// size=38 thunk=false
// signature: undefined FUN_1802f32e6()
// status: ok


void FUN_1802f32e6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802f32e6",
    "5e72ba6d2d5cfc6e63018335a1d381b49978e0e52442c5c37ff84e2dda29c383",
    R"F1802f32e6C()F1802f32e6C",
    R"F1802f32e6D()F1802f32e6D",
    R"F1802f32e6T()F1802f32e6T",
    R"F1802f32e6F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f32e6F",
    R"F1802f32e6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f32e6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f32e6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f32e6", "FUN_1802f32e6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: 5e72ba6d2d5cfc6e63018335a1d381b49978e0e52442c5c37ff84e2dda29c383
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f32e6;
}

// 0x1802f330c FUN_1802f330c
// source: re/dump/decompile/0x1802f330c_FUN_1802f330c.c
// size: 38 bytes; thunk: false
// body sha256: 44c319bea2323351640eb9624558ac6612be25ef767e3de7dafee60558b257ff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f330c{
    "0x1802f330c",
    "FUN_1802f330c",
    R"F1802f330cS(undefined FUN_1802f330c())F1802f330cS",
    R"B1802f330c(// 0x1802f330c  FUN_1802f330c
// size=38 thunk=false
// signature: undefined FUN_1802f330c()
// status: ok


void FUN_1802f330c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802f330c",
    "44c319bea2323351640eb9624558ac6612be25ef767e3de7dafee60558b257ff",
    R"F1802f330cC()F1802f330cC",
    R"F1802f330cD()F1802f330cD",
    R"F1802f330cT()F1802f330cT",
    R"F1802f330cF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f330cF",
    R"F1802f330cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f330cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f330c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f330c", "FUN_1802f330c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x50, 0));
    // body sha256: 44c319bea2323351640eb9624558ac6612be25ef767e3de7dafee60558b257ff
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f330c;
}

// 0x1802f334c FUN_1802f334c
// source: re/dump/decompile/0x1802f334c_FUN_1802f334c.c
// size: 38 bytes; thunk: false
// body sha256: c8f8ee59096fc45eea3a8a4862d5ef7564a86fa6fa897b478ac555ba290f3488
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f334c{
    "0x1802f334c",
    "FUN_1802f334c",
    R"F1802f334cS(undefined FUN_1802f334c())F1802f334cS",
    R"B1802f334c(// 0x1802f334c  FUN_1802f334c
// size=38 thunk=false
// signature: undefined FUN_1802f334c()
// status: ok


void FUN_1802f334c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f334c",
    "c8f8ee59096fc45eea3a8a4862d5ef7564a86fa6fa897b478ac555ba290f3488",
    R"F1802f334cC()F1802f334cC",
    R"F1802f334cD()F1802f334cD",
    R"F1802f334cT()F1802f334cT",
    R"F1802f334cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f334cF",
    R"F1802f334cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f334cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f334c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f334c", "FUN_1802f334c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: c8f8ee59096fc45eea3a8a4862d5ef7564a86fa6fa897b478ac555ba290f3488
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f334c;
}

// 0x1802f33d8 FUN_1802f33d8
// source: re/dump/decompile/0x1802f33d8_FUN_1802f33d8.c
// size: 38 bytes; thunk: false
// body sha256: 08139e3049e7aabf87047e6805a97a5a1befdea929310b8bc40addc21dbcad52
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f33d8{
    "0x1802f33d8",
    "FUN_1802f33d8",
    R"F1802f33d8S(undefined FUN_1802f33d8())F1802f33d8S",
    R"B1802f33d8(// 0x1802f33d8  FUN_1802f33d8
// size=38 thunk=false
// signature: undefined FUN_1802f33d8()
// status: ok


void FUN_1802f33d8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f33d8",
    "08139e3049e7aabf87047e6805a97a5a1befdea929310b8bc40addc21dbcad52",
    R"F1802f33d8C()F1802f33d8C",
    R"F1802f33d8D()F1802f33d8D",
    R"F1802f33d8T()F1802f33d8T",
    R"F1802f33d8F(10: if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
14: return;)F1802f33d8F",
    R"F1802f33d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f33d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f33d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f33d8", "FUN_1802f33d8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 08139e3049e7aabf87047e6805a97a5a1befdea929310b8bc40addc21dbcad52
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x60) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x60, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f33d8;
}

// 0x1802f33fe FUN_1802f33fe
// source: re/dump/decompile/0x1802f33fe_FUN_1802f33fe.c
// size: 41 bytes; thunk: false
// body sha256: 9016af052f4eca9df96535dca5ff217b84546bbe639fa4fe4c5e649e3477d575
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f33fe{
    "0x1802f33fe",
    "FUN_1802f33fe",
    R"F1802f33feS(undefined FUN_1802f33fe())F1802f33feS",
    R"B1802f33fe(// 0x1802f33fe  FUN_1802f33fe
// size=41 thunk=false
// signature: undefined FUN_1802f33fe()
// status: ok


void FUN_1802f33fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x150);
  }
  return;
}


)B1802f33fe",
    "9016af052f4eca9df96535dca5ff217b84546bbe639fa4fe4c5e649e3477d575",
    R"F1802f33feC()F1802f33feC",
    R"F1802f33feD()F1802f33feD",
    R"F1802f33feT()F1802f33feT",
    R"F1802f33feF(10: if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
14: return;)F1802f33feF",
    R"F1802f33feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f33feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f33fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f33fe", "FUN_1802f33fe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x150);
    // body sha256: 9016af052f4eca9df96535dca5ff217b84546bbe639fa4fe4c5e649e3477d575
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x60) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x60, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x150);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f33fe;
}

// 0x1802f343f FUN_1802f343f
// source: re/dump/decompile/0x1802f343f_FUN_1802f343f.c
// size: 41 bytes; thunk: false
// body sha256: c80ecb1e66991ce15cdb5850603b5b98e53c7454d214fd51e322a76b5b22f00c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f343f{
    "0x1802f343f",
    "FUN_1802f343f",
    R"F1802f343fS(undefined FUN_1802f343f())F1802f343fS",
    R"B1802f343f(// 0x1802f343f  FUN_1802f343f
// size=41 thunk=false
// signature: undefined FUN_1802f343f()
// status: ok


void FUN_1802f343f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf0);
  }
  return;
}


)B1802f343f",
    "c80ecb1e66991ce15cdb5850603b5b98e53c7454d214fd51e322a76b5b22f00c",
    R"F1802f343fC()F1802f343fC",
    R"F1802f343fD()F1802f343fD",
    R"F1802f343fT()F1802f343fT",
    R"F1802f343fF(10: if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
14: return;)F1802f343fF",
    R"F1802f343fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f343fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f343f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f343f", "FUN_1802f343f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xf0);
    // body sha256: c80ecb1e66991ce15cdb5850603b5b98e53c7454d214fd51e322a76b5b22f00c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x60) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x60, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f343f;
}

// 0x1802f3468 FUN_1802f3468
// source: re/dump/decompile/0x1802f3468_FUN_1802f3468.c
// size: 41 bytes; thunk: false
// body sha256: ae6b6d54dc7e30f887a684116e498907f2e1c9420a7a49e84de5b85c8096f6fe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3468{
    "0x1802f3468",
    "FUN_1802f3468",
    R"F1802f3468S(undefined FUN_1802f3468())F1802f3468S",
    R"B1802f3468(// 0x1802f3468  FUN_1802f3468
// size=41 thunk=false
// signature: undefined FUN_1802f3468()
// status: ok


void FUN_1802f3468(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x300);
  }
  return;
}


)B1802f3468",
    "ae6b6d54dc7e30f887a684116e498907f2e1c9420a7a49e84de5b85c8096f6fe",
    R"F1802f3468C()F1802f3468C",
    R"F1802f3468D()F1802f3468D",
    R"F1802f3468T()F1802f3468T",
    R"F1802f3468F(10: if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
14: return;)F1802f3468F",
    R"F1802f3468U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3468U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3468() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3468", "FUN_1802f3468");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x300);
    // body sha256: ae6b6d54dc7e30f887a684116e498907f2e1c9420a7a49e84de5b85c8096f6fe
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x60) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x60, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x300);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3468;
}

// 0x1802f3500 FUN_1802f3500
// source: re/dump/decompile/0x1802f3500_FUN_1802f3500.c
// size: 22 bytes; thunk: false
// body sha256: 8d5209cf32b6a396c985cd8b55ff99a09cb40054ea036cd2ccec21b1daa20bed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3500{
    "0x1802f3500",
    "FUN_1802f3500",
    R"F1802f3500S(undefined FUN_1802f3500())F1802f3500S",
    R"B1802f3500(// 0x1802f3500  FUN_1802f3500
// size=22 thunk=false
// signature: undefined FUN_1802f3500()
// status: ok


void FUN_1802f3500(void)

{
  DAT_18042bc78 = DAT_18042bc78 & 0xfffffffe;
  return;
}


)B1802f3500",
    "8d5209cf32b6a396c985cd8b55ff99a09cb40054ea036cd2ccec21b1daa20bed",
    R"F1802f3500C()F1802f3500C",
    R"F1802f3500D(DAT_18042bc78)F1802f3500D",
    R"F1802f3500T()F1802f3500T",
    R"F1802f3500F(11: return;)F1802f3500F",
    R"F1802f3500U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042bc78.)F1802f3500U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3500() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3500", "FUN_1802f3500");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042bc78.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042bc78", static_cast<const void*>(&image::DAT_18042bc78));
    // body sha256: 8d5209cf32b6a396c985cd8b55ff99a09cb40054ea036cd2ccec21b1daa20bed
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042bc78 = DAT_18042bc78 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f3500;
}

// 0x1802f3516 FUN_1802f3516
// source: re/dump/decompile/0x1802f3516_FUN_1802f3516.c
// size: 48 bytes; thunk: false
// body sha256: c62e6e9bb7ed81afbe3971c949ed780cb46512e0007f7d1982738acffdbb4d4d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3516{
    "0x1802f3516",
    "FUN_1802f3516",
    R"F1802f3516S(undefined FUN_1802f3516())F1802f3516S",
    R"B1802f3516(// 0x1802f3516  FUN_1802f3516
// size=48 thunk=false
// signature: undefined FUN_1802f3516()
// status: ok


undefined8 FUN_1802f3516(void)

{
  FUN_180014410("[MP] preview render faulted - disabled\n");
  DAT_180423a68 = 1;
  return 0;
}


)B1802f3516",
    "c62e6e9bb7ed81afbe3971c949ed780cb46512e0007f7d1982738acffdbb4d4d",
    R"F1802f3516C(FUN_180014410)F1802f3516C",
    R"F1802f3516D(DAT_180423a68)F1802f3516D",
    R"F1802f3516T("[MP] preview render faulted - disabled\\n")F1802f3516T",
    R"F1802f3516F(12: return 0;)F1802f3516F",
    R"F1802f3516U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423a68.)F1802f3516U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3516() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3516", "FUN_1802f3516");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423a68.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[MP] preview render faulted - disabled\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_180423a68", static_cast<const void*>(&image::DAT_180423a68));
    trace.string_literal("[MP] preview render faulted - disabled\\n");
    // body sha256: c62e6e9bb7ed81afbe3971c949ed780cb46512e0007f7d1982738acffdbb4d4d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[MP] preview render faulted - disabled\\n\");");
            trace.statement("DAT_180423a68 = 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f3516;
}

// 0x1802f3590 FUN_1802f3590
// source: re/dump/decompile/0x1802f3590_FUN_1802f3590.c
// size: 45 bytes; thunk: false
// body sha256: 158cbee0025c9b68b96d5c5e5d6f57f31185ec408199d7de5182c82cd96e092b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3590{
    "0x1802f3590",
    "FUN_1802f3590",
    R"F1802f3590S(undefined FUN_1802f3590())F1802f3590S",
    R"B1802f3590(// 0x1802f3590  FUN_1802f3590
// size=45 thunk=false
// signature: undefined FUN_1802f3590()
// status: ok


void FUN_1802f3590(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0xf0),0x38,2,FUN_18016c7e0);
  return;
}


)B1802f3590",
    "158cbee0025c9b68b96d5c5e5d6f57f31185ec408199d7de5182c82cd96e092b",
    R"F1802f3590C(FUN_18016c7e0)F1802f3590C",
    R"F1802f3590D()F1802f3590D",
    R"F1802f3590T()F1802f3590T",
    R"F1802f3590F(11: return;)F1802f3590F",
    R"F1802f3590U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3590() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3590", "FUN_1802f3590");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0xf0), 0x38, 2, &image::FUN_18016c7e0);
    trace.call_target("FUN_18016c7e0", reinterpret_cast<const void*>(&image::FUN_18016c7e0));
    // body sha256: 158cbee0025c9b68b96d5c5e5d6f57f31185ec408199d7de5182c82cd96e092b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0xf0),0x38,2,FUN_18016c7e0);");
            trace.statement("return;");
        }
    return kFunction_0x1802f3590;
}

// 0x1802f3718 FUN_1802f3718
// source: re/dump/decompile/0x1802f3718_FUN_1802f3718.c
// size: 42 bytes; thunk: false
// body sha256: 8046e7db82cec6f5548290c250d7ba35222015d34f83741cd07792eb2286846d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3718{
    "0x1802f3718",
    "FUN_1802f3718",
    R"F1802f3718S(undefined FUN_1802f3718())F1802f3718S",
    R"B1802f3718(// 0x1802f3718  FUN_1802f3718
// size=42 thunk=false
// signature: undefined FUN_1802f3718()
// status: ok


void FUN_1802f3718(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(param_2 + 0x40),0x20,0xf,
             Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
  return;
}


)B1802f3718",
    "8046e7db82cec6f5548290c250d7ba35222015d34f83741cd07792eb2286846d",
    R"F1802f3718C()F1802f3718C",
    R"F1802f3718D()F1802f3718D",
    R"F1802f3718T()F1802f3718T",
    R"F1802f3718F(13: return;)F1802f3718F",
    R"F1802f3718U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3718U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3718() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3718", "FUN_1802f3718");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8046e7db82cec6f5548290c250d7ba35222015d34f83741cd07792eb2286846d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_");
            trace.statement("((void *)(param_2 + 0x40),0x20,0xf,");
            trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);");
            trace.statement("return;");
        }
    return kFunction_0x1802f3718;
}

// 0x1802f3884 FUN_1802f3884
// source: re/dump/decompile/0x1802f3884_FUN_1802f3884.c
// size: 41 bytes; thunk: false
// body sha256: 50edceffa26f8cc5532b0d3a74edaa955e7336d726d1af0b86a66e40aac77ad6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3884{
    "0x1802f3884",
    "FUN_1802f3884",
    R"F1802f3884S(undefined FUN_1802f3884())F1802f3884S",
    R"B1802f3884(// 0x1802f3884  FUN_1802f3884
// size=41 thunk=false
// signature: undefined FUN_1802f3884()
// status: ok


void FUN_1802f3884(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


)B1802f3884",
    "50edceffa26f8cc5532b0d3a74edaa955e7336d726d1af0b86a66e40aac77ad6",
    R"F1802f3884C()F1802f3884C",
    R"F1802f3884D()F1802f3884D",
    R"F1802f3884T()F1802f3884T",
    R"F1802f3884F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802f3884F",
    R"F1802f3884U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3884U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3884() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3884", "FUN_1802f3884");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0xf8, 0));
    // body sha256: 50edceffa26f8cc5532b0d3a74edaa955e7336d726d1af0b86a66e40aac77ad6
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3884;
}

// 0x1802f38ad FUN_1802f38ad
// source: re/dump/decompile/0x1802f38ad_FUN_1802f38ad.c
// size: 41 bytes; thunk: false
// body sha256: bddaca84d29f89a7dc8889dd88918be3d6e26111d0ee34198c6f4876564918a8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f38ad{
    "0x1802f38ad",
    "FUN_1802f38ad",
    R"F1802f38adS(undefined FUN_1802f38ad())F1802f38adS",
    R"B1802f38ad(// 0x1802f38ad  FUN_1802f38ad
// size=41 thunk=false
// signature: undefined FUN_1802f38ad()
// status: ok


void FUN_1802f38ad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


)B1802f38ad",
    "bddaca84d29f89a7dc8889dd88918be3d6e26111d0ee34198c6f4876564918a8",
    R"F1802f38adC()F1802f38adC",
    R"F1802f38adD()F1802f38adD",
    R"F1802f38adT()F1802f38adT",
    R"F1802f38adF(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f38adF",
    R"F1802f38adU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f38adU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f38ad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f38ad", "FUN_1802f38ad");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0xf8, 0));
    // body sha256: bddaca84d29f89a7dc8889dd88918be3d6e26111d0ee34198c6f4876564918a8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f38ad;
}

// 0x1802f38d6 FUN_1802f38d6
// source: re/dump/decompile/0x1802f38d6_FUN_1802f38d6.c
// size: 38 bytes; thunk: false
// body sha256: 737e34186b1c9887c40263aeca8a381d47114acd0067488564a96b13be82931c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f38d6{
    "0x1802f38d6",
    "FUN_1802f38d6",
    R"F1802f38d6S(undefined FUN_1802f38d6())F1802f38d6S",
    R"B1802f38d6(// 0x1802f38d6  FUN_1802f38d6
// size=38 thunk=false
// signature: undefined FUN_1802f38d6()
// status: ok


void FUN_1802f38d6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f38d6",
    "737e34186b1c9887c40263aeca8a381d47114acd0067488564a96b13be82931c",
    R"F1802f38d6C()F1802f38d6C",
    R"F1802f38d6D()F1802f38d6D",
    R"F1802f38d6T()F1802f38d6T",
    R"F1802f38d6F(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802f38d6F",
    R"F1802f38d6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f38d6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f38d6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f38d6", "FUN_1802f38d6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 737e34186b1c9887c40263aeca8a381d47114acd0067488564a96b13be82931c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f38d6;
}

// 0x1802f38fc FUN_1802f38fc
// source: re/dump/decompile/0x1802f38fc_FUN_1802f38fc.c
// size: 46 bytes; thunk: false
// body sha256: 54c664ea215ed6065dfd57ada0c87212a27d9be635efa09c009322bba486050c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f38fc{
    "0x1802f38fc",
    "FUN_1802f38fc",
    R"F1802f38fcS(undefined FUN_1802f38fc())F1802f38fcS",
    R"B1802f38fc(// 0x1802f38fc  FUN_1802f38fc
// size=46 thunk=false
// signature: undefined FUN_1802f38fc()
// status: ok


void FUN_1802f38fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


)B1802f38fc",
    "54c664ea215ed6065dfd57ada0c87212a27d9be635efa09c009322bba486050c",
    R"F1802f38fcC()F1802f38fcC",
    R"F1802f38fcD()F1802f38fcD",
    R"F1802f38fcT()F1802f38fcT",
    R"F1802f38fcF(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802f38fcF",
    R"F1802f38fcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f38fcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f38fc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f38fc", "FUN_1802f38fc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0xf8, 0));
    // body sha256: 54c664ea215ed6065dfd57ada0c87212a27d9be635efa09c009322bba486050c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f38fc;
}

// 0x1802f394c FUN_1802f394c
// source: re/dump/decompile/0x1802f394c_FUN_1802f394c.c
// size: 38 bytes; thunk: false
// body sha256: 9a35f7bd916ffba4a865842fa0cf5718e6b44285bffe579ddc5a9cf3d51dbea3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f394c{
    "0x1802f394c",
    "FUN_1802f394c",
    R"F1802f394cS(undefined FUN_1802f394c())F1802f394cS",
    R"B1802f394c(// 0x1802f394c  FUN_1802f394c
// size=38 thunk=false
// signature: undefined FUN_1802f394c()
// status: ok


void FUN_1802f394c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180020a30(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802f394c",
    "9a35f7bd916ffba4a865842fa0cf5718e6b44285bffe579ddc5a9cf3d51dbea3",
    R"F1802f394cC(FUN_180020a30)F1802f394cC",
    R"F1802f394cD()F1802f394cD",
    R"F1802f394cT()F1802f394cT",
    R"F1802f394cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f394cF",
    R"F1802f394cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f394cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f394c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f394c", "FUN_1802f394c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180020a30", load_at<std::uint64_t>(param_2 + 0x78, 0));
    trace.call_target("FUN_180020a30", reinterpret_cast<const void*>(&image::FUN_180020a30));
    // body sha256: 9a35f7bd916ffba4a865842fa0cf5718e6b44285bffe579ddc5a9cf3d51dbea3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180020a30(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f394c;
}

// 0x1802f398c FUN_1802f398c
// source: re/dump/decompile/0x1802f398c_FUN_1802f398c.c
// size: 46 bytes; thunk: false
// body sha256: 6b146052e6c481db7aac38a5823ed108feb2d3e3a8598c30256784992e7dbd0b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f398c{
    "0x1802f398c",
    "FUN_1802f398c",
    R"F1802f398cS(undefined FUN_1802f398c())F1802f398cS",
    R"B1802f398c(// 0x1802f398c  FUN_1802f398c
// size=46 thunk=false
// signature: undefined FUN_1802f398c()
// status: ok


void FUN_1802f398c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


)B1802f398c",
    "6b146052e6c481db7aac38a5823ed108feb2d3e3a8598c30256784992e7dbd0b",
    R"F1802f398cC()F1802f398cC",
    R"F1802f398cD()F1802f398cD",
    R"F1802f398cT()F1802f398cT",
    R"F1802f398cF(10: if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
14: return;)F1802f398cF",
    R"F1802f398cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f398cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f398c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f398c", "FUN_1802f398c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x128);
    // body sha256: 6b146052e6c481db7aac38a5823ed108feb2d3e3a8598c30256784992e7dbd0b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f398c;
}

// 0x1802f39ba FUN_1802f39ba
// source: re/dump/decompile/0x1802f39ba_FUN_1802f39ba.c
// size: 46 bytes; thunk: false
// body sha256: 618abf76e4be6f1d64f91af387c3baee0aff4e549058c570b9fab66491dbfefb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f39ba{
    "0x1802f39ba",
    "FUN_1802f39ba",
    R"F1802f39baS(undefined FUN_1802f39ba())F1802f39baS",
    R"B1802f39ba(// 0x1802f39ba  FUN_1802f39ba
// size=46 thunk=false
// signature: undefined FUN_1802f39ba()
// status: ok


void FUN_1802f39ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f39ba",
    "618abf76e4be6f1d64f91af387c3baee0aff4e549058c570b9fab66491dbfefb",
    R"F1802f39baC()F1802f39baC",
    R"F1802f39baD()F1802f39baD",
    R"F1802f39baT()F1802f39baT",
    R"F1802f39baF(10: if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
14: return;)F1802f39baF",
    R"F1802f39baU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f39baU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f39ba() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f39ba", "FUN_1802f39ba");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe0);
    // body sha256: 618abf76e4be6f1d64f91af387c3baee0aff4e549058c570b9fab66491dbfefb
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f39ba;
}

// 0x1802f3a50 FUN_1802f3a50
// source: re/dump/decompile/0x1802f3a50_FUN_1802f3a50.c
// size: 38 bytes; thunk: false
// body sha256: 9cd3a4af5a910c59f37ffa65cdca179a58bf39050c0487a4a7ce5c674cf23af0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3a50{
    "0x1802f3a50",
    "FUN_1802f3a50",
    R"F1802f3a50S(undefined FUN_1802f3a50())F1802f3a50S",
    R"B1802f3a50(// 0x1802f3a50  FUN_1802f3a50
// size=38 thunk=false
// signature: undefined FUN_1802f3a50()
// status: ok


void FUN_1802f3a50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f3a50",
    "9cd3a4af5a910c59f37ffa65cdca179a58bf39050c0487a4a7ce5c674cf23af0",
    R"F1802f3a50C()F1802f3a50C",
    R"F1802f3a50D()F1802f3a50D",
    R"F1802f3a50T()F1802f3a50T",
    R"F1802f3a50F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f3a50F",
    R"F1802f3a50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3a50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3a50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3a50", "FUN_1802f3a50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 9cd3a4af5a910c59f37ffa65cdca179a58bf39050c0487a4a7ce5c674cf23af0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3a50;
}

// 0x1802f3a76 FUN_1802f3a76
// source: re/dump/decompile/0x1802f3a76_FUN_1802f3a76.c
// size: 41 bytes; thunk: false
// body sha256: a915daa7f89566bd25857702ffc06a0ab4d66ba573c0515e10d1cd16f9f92602
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3a76{
    "0x1802f3a76",
    "FUN_1802f3a76",
    R"F1802f3a76S(undefined FUN_1802f3a76())F1802f3a76S",
    R"B1802f3a76(// 0x1802f3a76  FUN_1802f3a76
// size=41 thunk=false
// signature: undefined FUN_1802f3a76()
// status: ok


void FUN_1802f3a76(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);
  }
  return;
}


)B1802f3a76",
    "a915daa7f89566bd25857702ffc06a0ab4d66ba573c0515e10d1cd16f9f92602",
    R"F1802f3a76C()F1802f3a76C",
    R"F1802f3a76D()F1802f3a76D",
    R"F1802f3a76T()F1802f3a76T",
    R"F1802f3a76F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f3a76F",
    R"F1802f3a76U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3a76U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3a76() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3a76", "FUN_1802f3a76");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x170);
    // body sha256: a915daa7f89566bd25857702ffc06a0ab4d66ba573c0515e10d1cd16f9f92602
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3a76;
}

// 0x1802f3a9f FUN_1802f3a9f
// source: re/dump/decompile/0x1802f3a9f_FUN_1802f3a9f.c
// size: 38 bytes; thunk: false
// body sha256: e483d57f2d372a062a6a0f691fca5ff5b909cc502c3378284de2cd55c91e033f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3a9f{
    "0x1802f3a9f",
    "FUN_1802f3a9f",
    R"F1802f3a9fS(undefined FUN_1802f3a9f())F1802f3a9fS",
    R"B1802f3a9f(// 0x1802f3a9f  FUN_1802f3a9f
// size=38 thunk=false
// signature: undefined FUN_1802f3a9f()
// status: ok


void FUN_1802f3a9f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f3a9f",
    "e483d57f2d372a062a6a0f691fca5ff5b909cc502c3378284de2cd55c91e033f",
    R"F1802f3a9fC()F1802f3a9fC",
    R"F1802f3a9fD()F1802f3a9fD",
    R"F1802f3a9fT()F1802f3a9fT",
    R"F1802f3a9fF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f3a9fF",
    R"F1802f3a9fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3a9fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3a9f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3a9f", "FUN_1802f3a9f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: e483d57f2d372a062a6a0f691fca5ff5b909cc502c3378284de2cd55c91e033f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3a9f;
}

// 0x1802f3b1d FUN_1802f3b1d
// source: re/dump/decompile/0x1802f3b1d_FUN_1802f3b1d.c
// size: 55 bytes; thunk: false
// body sha256: 12e76b01bb4917ee652563a42799f529e4581020400ab019f73addecb9d2dbe0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3b1d{
    "0x1802f3b1d",
    "FUN_1802f3b1d",
    R"F1802f3b1dS(undefined FUN_1802f3b1d())F1802f3b1dS",
    R"B1802f3b1d(// 0x1802f3b1d  FUN_1802f3b1d
// size=55 thunk=false
// signature: undefined FUN_1802f3b1d()
// status: ok


undefined8 FUN_1802f3b1d(undefined8 param_1,longlong param_2)

{
  FUN_180212700(param_2 + 0x150,"Error",5);
  return 0;
}


)B1802f3b1d",
    "12e76b01bb4917ee652563a42799f529e4581020400ab019f73addecb9d2dbe0",
    R"F1802f3b1dC(FUN_180212700)F1802f3b1dC",
    R"F1802f3b1dD()F1802f3b1dD",
    R"F1802f3b1dT("Error")F1802f3b1dT",
    R"F1802f3b1dF(11: return 0;)F1802f3b1dF",
    R"F1802f3b1dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3b1dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3b1d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3b1d", "FUN_1802f3b1d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180212700", param_2 + 0x150, "Error", 5);
    trace.call_target("FUN_180212700", reinterpret_cast<const void*>(&image::FUN_180212700));
    trace.string_literal("Error");
    // body sha256: 12e76b01bb4917ee652563a42799f529e4581020400ab019f73addecb9d2dbe0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180212700(param_2 + 0x150,\"Error\",5);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f3b1d;
}

// 0x1802f3bd9 FUN_1802f3bd9
// source: re/dump/decompile/0x1802f3bd9_FUN_1802f3bd9.c
// size: 38 bytes; thunk: false
// body sha256: 683c8c9fa97b9a88232ce853fdc9eec4a6d105d946800b591a58ea2bb1d77d6f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3bd9{
    "0x1802f3bd9",
    "FUN_1802f3bd9",
    R"F1802f3bd9S(undefined FUN_1802f3bd9())F1802f3bd9S",
    R"B1802f3bd9(// 0x1802f3bd9  FUN_1802f3bd9
// size=38 thunk=false
// signature: undefined FUN_1802f3bd9()
// status: ok


void FUN_1802f3bd9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f3bd9",
    "683c8c9fa97b9a88232ce853fdc9eec4a6d105d946800b591a58ea2bb1d77d6f",
    R"F1802f3bd9C()F1802f3bd9C",
    R"F1802f3bd9D()F1802f3bd9D",
    R"F1802f3bd9T()F1802f3bd9T",
    R"F1802f3bd9F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802f3bd9F",
    R"F1802f3bd9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3bd9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3bd9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3bd9", "FUN_1802f3bd9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 683c8c9fa97b9a88232ce853fdc9eec4a6d105d946800b591a58ea2bb1d77d6f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3bd9;
}

// 0x1802f3bff FUN_1802f3bff
// source: re/dump/decompile/0x1802f3bff_FUN_1802f3bff.c
// size: 38 bytes; thunk: false
// body sha256: 87e9ce050ab70908156656a1ac2075be8a07e400e69fde8397e0aa240250a8c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3bff{
    "0x1802f3bff",
    "FUN_1802f3bff",
    R"F1802f3bffS(undefined FUN_1802f3bff())F1802f3bffS",
    R"B1802f3bff(// 0x1802f3bff  FUN_1802f3bff
// size=38 thunk=false
// signature: undefined FUN_1802f3bff()
// status: ok


void FUN_1802f3bff(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f3bff",
    "87e9ce050ab70908156656a1ac2075be8a07e400e69fde8397e0aa240250a8c8",
    R"F1802f3bffC()F1802f3bffC",
    R"F1802f3bffD()F1802f3bffD",
    R"F1802f3bffT()F1802f3bffT",
    R"F1802f3bffF(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802f3bffF",
    R"F1802f3bffU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3bffU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3bff() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3bff", "FUN_1802f3bff");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 87e9ce050ab70908156656a1ac2075be8a07e400e69fde8397e0aa240250a8c8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3bff;
}

// 0x1802f3d0d FUN_1802f3d0d
// source: re/dump/decompile/0x1802f3d0d_FUN_1802f3d0d.c
// size: 55 bytes; thunk: false
// body sha256: 11aab05036d4ae4f9110f4c1d3a8d0551ece8c40bc81f511d03383be61da7ffe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3d0d{
    "0x1802f3d0d",
    "FUN_1802f3d0d",
    R"F1802f3d0dS(undefined FUN_1802f3d0d())F1802f3d0dS",
    R"B1802f3d0d(// 0x1802f3d0d  FUN_1802f3d0d
// size=55 thunk=false
// signature: undefined FUN_1802f3d0d()
// status: ok


undefined8 FUN_1802f3d0d(undefined8 param_1,longlong param_2)

{
  FUN_180212700(param_2 + 0x150,&DAT_18033e9cc,1);
  return 0;
}


)B1802f3d0d",
    "11aab05036d4ae4f9110f4c1d3a8d0551ece8c40bc81f511d03383be61da7ffe",
    R"F1802f3d0dC(FUN_180212700)F1802f3d0dC",
    R"F1802f3d0dD(DAT_18033e9cc)F1802f3d0dD",
    R"F1802f3d0dT()F1802f3d0dT",
    R"F1802f3d0dF(11: return 0;)F1802f3d0dF",
    R"F1802f3d0dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e9cc.)F1802f3d0dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3d0d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3d0d", "FUN_1802f3d0d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e9cc.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180212700", param_2 + 0x150, &image::DAT_18033e9cc, 1);
    trace.call_target("FUN_180212700", reinterpret_cast<const void*>(&image::FUN_180212700));
    trace.data_ref("DAT_18033e9cc", static_cast<const void*>(&image::DAT_18033e9cc));
    // body sha256: 11aab05036d4ae4f9110f4c1d3a8d0551ece8c40bc81f511d03383be61da7ffe
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180212700(param_2 + 0x150,&DAT_18033e9cc,1);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f3d0d;
}

// 0x1802f3d45 FUN_1802f3d45
// source: re/dump/decompile/0x1802f3d45_FUN_1802f3d45.c
// size: 41 bytes; thunk: false
// body sha256: 5563b0185bcc37b48fa0a35f11d12eeb653915fcf6cb56e243dc5b9ad87da677
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3d45{
    "0x1802f3d45",
    "FUN_1802f3d45",
    R"F1802f3d45S(undefined FUN_1802f3d45())F1802f3d45S",
    R"B1802f3d45(// 0x1802f3d45  FUN_1802f3d45
// size=41 thunk=false
// signature: undefined FUN_1802f3d45()
// status: ok


void FUN_1802f3d45(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);
  }
  return;
}


)B1802f3d45",
    "5563b0185bcc37b48fa0a35f11d12eeb653915fcf6cb56e243dc5b9ad87da677",
    R"F1802f3d45C()F1802f3d45C",
    R"F1802f3d45D()F1802f3d45D",
    R"F1802f3d45T()F1802f3d45T",
    R"F1802f3d45F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802f3d45F",
    R"F1802f3d45U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3d45U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3d45() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3d45", "FUN_1802f3d45");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x170);
    // body sha256: 5563b0185bcc37b48fa0a35f11d12eeb653915fcf6cb56e243dc5b9ad87da677
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3d45;
}

// 0x1802f3d6e FUN_1802f3d6e
// source: re/dump/decompile/0x1802f3d6e_FUN_1802f3d6e.c
// size: 38 bytes; thunk: false
// body sha256: f1b7ccd7e7b6950d60bf4082fbebfdc817e79dcba98f273c950d47aac03d31e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3d6e{
    "0x1802f3d6e",
    "FUN_1802f3d6e",
    R"F1802f3d6eS(undefined FUN_1802f3d6e())F1802f3d6eS",
    R"B1802f3d6e(// 0x1802f3d6e  FUN_1802f3d6e
// size=38 thunk=false
// signature: undefined FUN_1802f3d6e()
// status: ok


void FUN_1802f3d6e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f3d6e",
    "f1b7ccd7e7b6950d60bf4082fbebfdc817e79dcba98f273c950d47aac03d31e7",
    R"F1802f3d6eC()F1802f3d6eC",
    R"F1802f3d6eD()F1802f3d6eD",
    R"F1802f3d6eT()F1802f3d6eT",
    R"F1802f3d6eF(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802f3d6eF",
    R"F1802f3d6eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3d6eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3d6e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3d6e", "FUN_1802f3d6e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: f1b7ccd7e7b6950d60bf4082fbebfdc817e79dcba98f273c950d47aac03d31e7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3d6e;
}

// 0x1802f3d94 FUN_1802f3d94
// source: re/dump/decompile/0x1802f3d94_FUN_1802f3d94.c
// size: 46 bytes; thunk: false
// body sha256: dff9824306f0d2b3b3db7bb20e4ac96222bc4197ff448372a3bcf2ed9dc32ce4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3d94{
    "0x1802f3d94",
    "FUN_1802f3d94",
    R"F1802f3d94S(undefined FUN_1802f3d94())F1802f3d94S",
    R"B1802f3d94(// 0x1802f3d94  FUN_1802f3d94
// size=46 thunk=false
// signature: undefined FUN_1802f3d94()
// status: ok


void FUN_1802f3d94(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802f3d94",
    "dff9824306f0d2b3b3db7bb20e4ac96222bc4197ff448372a3bcf2ed9dc32ce4",
    R"F1802f3d94C()F1802f3d94C",
    R"F1802f3d94D()F1802f3d94D",
    R"F1802f3d94T()F1802f3d94T",
    R"F1802f3d94F(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802f3d94F",
    R"F1802f3d94U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3d94U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3d94() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3d94", "FUN_1802f3d94");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xc0);
    // body sha256: dff9824306f0d2b3b3db7bb20e4ac96222bc4197ff448372a3bcf2ed9dc32ce4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3d94;
}

// 0x1802f3dd0 FUN_1802f3dd0
// source: re/dump/decompile/0x1802f3dd0_FUN_1802f3dd0.c
// size: 29 bytes; thunk: false
// body sha256: 35efdbec8f9f41dd3b01cc1f729b755dc85bd6533dbd0cbdfb9a890ecc82a1fa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3dd0{
    "0x1802f3dd0",
    "FUN_1802f3dd0",
    R"F1802f3dd0S(undefined FUN_1802f3dd0())F1802f3dd0S",
    R"B1802f3dd0(// 0x1802f3dd0  FUN_1802f3dd0
// size=29 thunk=false
// signature: undefined FUN_1802f3dd0()
// status: ok


undefined8 FUN_1802f3dd0(void)

{
  return 0;
}


)B1802f3dd0",
    "35efdbec8f9f41dd3b01cc1f729b755dc85bd6533dbd0cbdfb9a890ecc82a1fa",
    R"F1802f3dd0C()F1802f3dd0C",
    R"F1802f3dd0D()F1802f3dd0D",
    R"F1802f3dd0T()F1802f3dd0T",
    R"F1802f3dd0F(10: return 0;)F1802f3dd0F",
    R"F1802f3dd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3dd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3dd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3dd0", "FUN_1802f3dd0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 35efdbec8f9f41dd3b01cc1f729b755dc85bd6533dbd0cbdfb9a890ecc82a1fa
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f3dd0;
}

// 0x1802f3dee FUN_1802f3dee
// source: re/dump/decompile/0x1802f3dee_FUN_1802f3dee.c
// size: 38 bytes; thunk: false
// body sha256: 26e98386bfd5af02c57545cad3014a2ef4a2708ff6848e92fa516bbeecece8b4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3dee{
    "0x1802f3dee",
    "FUN_1802f3dee",
    R"F1802f3deeS(undefined FUN_1802f3dee())F1802f3deeS",
    R"B1802f3dee(// 0x1802f3dee  FUN_1802f3dee
// size=38 thunk=false
// signature: undefined FUN_1802f3dee()
// status: ok


void FUN_1802f3dee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B1802f3dee",
    "26e98386bfd5af02c57545cad3014a2ef4a2708ff6848e92fa516bbeecece8b4",
    R"F1802f3deeC()F1802f3deeC",
    R"F1802f3deeD()F1802f3deeD",
    R"F1802f3deeT()F1802f3deeT",
    R"F1802f3deeF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f3deeF",
    R"F1802f3deeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3deeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3dee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3dee", "FUN_1802f3dee");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x50);
    // body sha256: 26e98386bfd5af02c57545cad3014a2ef4a2708ff6848e92fa516bbeecece8b4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3dee;
}

// 0x1802f3e14 FUN_1802f3e14
// source: re/dump/decompile/0x1802f3e14_FUN_1802f3e14.c
// size: 38 bytes; thunk: false
// body sha256: 180a4533be1e5ccaa04164aae2cfb7f33eb9974768b64e615769455e4b7f6d4f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3e14{
    "0x1802f3e14",
    "FUN_1802f3e14",
    R"F1802f3e14S(undefined FUN_1802f3e14())F1802f3e14S",
    R"B1802f3e14(// 0x1802f3e14  FUN_1802f3e14
// size=38 thunk=false
// signature: undefined FUN_1802f3e14()
// status: ok


void FUN_1802f3e14(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802f3e14",
    "180a4533be1e5ccaa04164aae2cfb7f33eb9974768b64e615769455e4b7f6d4f",
    R"F1802f3e14C()F1802f3e14C",
    R"F1802f3e14D()F1802f3e14D",
    R"F1802f3e14T()F1802f3e14T",
    R"F1802f3e14F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f3e14F",
    R"F1802f3e14U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3e14U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3e14() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3e14", "FUN_1802f3e14");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: 180a4533be1e5ccaa04164aae2cfb7f33eb9974768b64e615769455e4b7f6d4f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3e14;
}

// 0x1802f3e3a FUN_1802f3e3a
// source: re/dump/decompile/0x1802f3e3a_FUN_1802f3e3a.c
// size: 41 bytes; thunk: false
// body sha256: 2325807286892400a98e88d6a861abda5f3232c6dcfe9a7c83fcb6598725b8cc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3e3a{
    "0x1802f3e3a",
    "FUN_1802f3e3a",
    R"F1802f3e3aS(undefined FUN_1802f3e3a())F1802f3e3aS",
    R"B1802f3e3a(// 0x1802f3e3a  FUN_1802f3e3a
// size=41 thunk=false
// signature: undefined FUN_1802f3e3a()
// status: ok


void FUN_1802f3e3a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802f3e3a",
    "2325807286892400a98e88d6a861abda5f3232c6dcfe9a7c83fcb6598725b8cc",
    R"F1802f3e3aC()F1802f3e3aC",
    R"F1802f3e3aD()F1802f3e3aD",
    R"F1802f3e3aT()F1802f3e3aT",
    R"F1802f3e3aF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f3e3aF",
    R"F1802f3e3aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3e3aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3e3a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3e3a", "FUN_1802f3e3a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x98, 0));
    // body sha256: 2325807286892400a98e88d6a861abda5f3232c6dcfe9a7c83fcb6598725b8cc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3e3a;
}

// 0x1802f3f9c FUN_1802f3f9c
// source: re/dump/decompile/0x1802f3f9c_FUN_1802f3f9c.c
// size: 41 bytes; thunk: false
// body sha256: d633ac78b9ea4dab2dadcb64a8bb48253c2bd4342be334e854d1f486884af485
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f3f9c{
    "0x1802f3f9c",
    "FUN_1802f3f9c",
    R"F1802f3f9cS(undefined FUN_1802f3f9c())F1802f3f9cS",
    R"B1802f3f9c(// 0x1802f3f9c  FUN_1802f3f9c
// size=41 thunk=false
// signature: undefined FUN_1802f3f9c()
// status: ok


void FUN_1802f3f9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x3c) & 1) != 0) {
    *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xfffffffe;
    FUN_180173460(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f3f9c",
    "d633ac78b9ea4dab2dadcb64a8bb48253c2bd4342be334e854d1f486884af485",
    R"F1802f3f9cC(FUN_180173460)F1802f3f9cC",
    R"F1802f3f9cD()F1802f3f9cD",
    R"F1802f3f9cT()F1802f3f9cT",
    R"F1802f3f9cF(10: if ((*(uint *)(param_2 + 0x3c) & 1) != 0) {
14: return;)F1802f3f9cF",
    R"F1802f3f9cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f3f9cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f3f9c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f3f9c", "FUN_1802f3f9c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180173460", load_at<std::uint64_t>(param_2 + 0x80, 0));
    trace.call_target("FUN_180173460", reinterpret_cast<const void*>(&image::FUN_180173460));
    // body sha256: d633ac78b9ea4dab2dadcb64a8bb48253c2bd4342be334e854d1f486884af485
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x3c) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x3c, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xfffffffe;");
                trace.statement("FUN_180173460(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f3f9c;
}

// 0x1802f419c FUN_1802f419c
// source: re/dump/decompile/0x1802f419c_FUN_1802f419c.c
// size: 41 bytes; thunk: false
// body sha256: 1224992228dfae0a33d3e25f341427549872ccc84837d10337e2a981fb3a7cb8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f419c{
    "0x1802f419c",
    "FUN_1802f419c",
    R"F1802f419cS(undefined FUN_1802f419c())F1802f419cS",
    R"B1802f419c(// 0x1802f419c  FUN_1802f419c
// size=41 thunk=false
// signature: undefined FUN_1802f419c()
// status: ok


void FUN_1802f419c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021bab0(*(undefined8 *)(param_2 + 0xd0));
  }
  return;
}


)B1802f419c",
    "1224992228dfae0a33d3e25f341427549872ccc84837d10337e2a981fb3a7cb8",
    R"F1802f419cC()F1802f419cC",
    R"F1802f419cD()F1802f419cD",
    R"F1802f419cT()F1802f419cT",
    R"F1802f419cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f419cF",
    R"F1802f419cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f419cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f419c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f419c", "FUN_1802f419c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021bab0", load_at<std::uint64_t>(param_2 + 0xd0, 0));
    // body sha256: 1224992228dfae0a33d3e25f341427549872ccc84837d10337e2a981fb3a7cb8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021bab0(*(undefined8 *)(param_2 + 0xd0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f419c;
}

// 0x1802f4204 FUN_1802f4204
// source: re/dump/decompile/0x1802f4204_FUN_1802f4204.c
// size: 41 bytes; thunk: false
// body sha256: 747cbaa99f2bee7bbbd00b1876722581131757dda05e842a554715fdef17efa4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4204{
    "0x1802f4204",
    "FUN_1802f4204",
    R"F1802f4204S(undefined FUN_1802f4204())F1802f4204S",
    R"B1802f4204(// 0x1802f4204  FUN_1802f4204
// size=41 thunk=false
// signature: undefined FUN_1802f4204()
// status: ok


void FUN_1802f4204(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


)B1802f4204",
    "747cbaa99f2bee7bbbd00b1876722581131757dda05e842a554715fdef17efa4",
    R"F1802f4204C()F1802f4204C",
    R"F1802f4204D()F1802f4204D",
    R"F1802f4204T()F1802f4204T",
    R"F1802f4204F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f4204F",
    R"F1802f4204U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4204U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4204() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4204", "FUN_1802f4204");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0xc0, 0));
    // body sha256: 747cbaa99f2bee7bbbd00b1876722581131757dda05e842a554715fdef17efa4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xc0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4204;
}

// 0x1802f422d FUN_1802f422d
// source: re/dump/decompile/0x1802f422d_FUN_1802f422d.c
// size: 41 bytes; thunk: false
// body sha256: 9f2ba1df04f50a41ea798cb2d32d628094305407baf3f9d80f462d435877564e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f422d{
    "0x1802f422d",
    "FUN_1802f422d",
    R"F1802f422dS(undefined FUN_1802f422d())F1802f422dS",
    R"B1802f422d(// 0x1802f422d  FUN_1802f422d
// size=41 thunk=false
// signature: undefined FUN_1802f422d()
// status: ok


void FUN_1802f422d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


)B1802f422d",
    "9f2ba1df04f50a41ea798cb2d32d628094305407baf3f9d80f462d435877564e",
    R"F1802f422dC()F1802f422dC",
    R"F1802f422dD()F1802f422dD",
    R"F1802f422dT()F1802f422dT",
    R"F1802f422dF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f422dF",
    R"F1802f422dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f422dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f422d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f422d", "FUN_1802f422d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0xc0, 0));
    // body sha256: 9f2ba1df04f50a41ea798cb2d32d628094305407baf3f9d80f462d435877564e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xc0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f422d;
}

// 0x1802f4260 FUN_1802f4260
// source: re/dump/decompile/0x1802f4260_FUN_1802f4260.c
// size: 38 bytes; thunk: false
// body sha256: 69c751cc6b868cd2edd01ceb39bc42fbfb632a983974a36aa8d02680a0f10b47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4260{
    "0x1802f4260",
    "FUN_1802f4260",
    R"F1802f4260S(undefined FUN_1802f4260())F1802f4260S",
    R"B1802f4260(// 0x1802f4260  FUN_1802f4260
// size=38 thunk=false
// signature: undefined FUN_1802f4260()
// status: ok


void FUN_1802f4260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f4260",
    "69c751cc6b868cd2edd01ceb39bc42fbfb632a983974a36aa8d02680a0f10b47",
    R"F1802f4260C()F1802f4260C",
    R"F1802f4260D()F1802f4260D",
    R"F1802f4260T()F1802f4260T",
    R"F1802f4260F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f4260F",
    R"F1802f4260U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4260U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4260() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4260", "FUN_1802f4260");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 69c751cc6b868cd2edd01ceb39bc42fbfb632a983974a36aa8d02680a0f10b47
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4260;
}

// 0x1802f4286 FUN_1802f4286
// source: re/dump/decompile/0x1802f4286_FUN_1802f4286.c
// size: 38 bytes; thunk: false
// body sha256: d56c1afddc1f3c3df42a318a33ce1d5b3d07501e1286b97ca4d4895e317f746c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4286{
    "0x1802f4286",
    "FUN_1802f4286",
    R"F1802f4286S(undefined FUN_1802f4286())F1802f4286S",
    R"B1802f4286(// 0x1802f4286  FUN_1802f4286
// size=38 thunk=false
// signature: undefined FUN_1802f4286()
// status: ok


void FUN_1802f4286(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f4286",
    "d56c1afddc1f3c3df42a318a33ce1d5b3d07501e1286b97ca4d4895e317f746c",
    R"F1802f4286C()F1802f4286C",
    R"F1802f4286D()F1802f4286D",
    R"F1802f4286T()F1802f4286T",
    R"F1802f4286F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f4286F",
    R"F1802f4286U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4286U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4286() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4286", "FUN_1802f4286");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: d56c1afddc1f3c3df42a318a33ce1d5b3d07501e1286b97ca4d4895e317f746c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4286;
}

// 0x1802f42ac FUN_1802f42ac
// source: re/dump/decompile/0x1802f42ac_FUN_1802f42ac.c
// size: 38 bytes; thunk: false
// body sha256: 51380003fec9605c45a9fc6fddc52a30001b491d2563573145124b9bf188a588
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f42ac{
    "0x1802f42ac",
    "FUN_1802f42ac",
    R"F1802f42acS(undefined FUN_1802f42ac())F1802f42acS",
    R"B1802f42ac(// 0x1802f42ac  FUN_1802f42ac
// size=38 thunk=false
// signature: undefined FUN_1802f42ac()
// status: ok


void FUN_1802f42ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f42ac",
    "51380003fec9605c45a9fc6fddc52a30001b491d2563573145124b9bf188a588",
    R"F1802f42acC()F1802f42acC",
    R"F1802f42acD()F1802f42acD",
    R"F1802f42acT()F1802f42acT",
    R"F1802f42acF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f42acF",
    R"F1802f42acU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f42acU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f42ac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f42ac", "FUN_1802f42ac");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 51380003fec9605c45a9fc6fddc52a30001b491d2563573145124b9bf188a588
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f42ac;
}

// 0x1802f42e0 FUN_1802f42e0
// source: re/dump/decompile/0x1802f42e0_FUN_1802f42e0.c
// size: 38 bytes; thunk: false
// body sha256: d42dc7a6d521ede096a53d4f0c441b9f91f787313ea2a82f8b90482b93136888
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f42e0{
    "0x1802f42e0",
    "FUN_1802f42e0",
    R"F1802f42e0S(undefined FUN_1802f42e0())F1802f42e0S",
    R"B1802f42e0(// 0x1802f42e0  FUN_1802f42e0
// size=38 thunk=false
// signature: undefined FUN_1802f42e0()
// status: ok


void FUN_1802f42e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f42e0",
    "d42dc7a6d521ede096a53d4f0c441b9f91f787313ea2a82f8b90482b93136888",
    R"F1802f42e0C()F1802f42e0C",
    R"F1802f42e0D()F1802f42e0D",
    R"F1802f42e0T()F1802f42e0T",
    R"F1802f42e0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f42e0F",
    R"F1802f42e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f42e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f42e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f42e0", "FUN_1802f42e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: d42dc7a6d521ede096a53d4f0c441b9f91f787313ea2a82f8b90482b93136888
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f42e0;
}

// 0x1802f4306 FUN_1802f4306
// source: re/dump/decompile/0x1802f4306_FUN_1802f4306.c
// size: 38 bytes; thunk: false
// body sha256: 4fdb58b26848be6703129af732dd32c66b1fa9d4527caa876951cbb4f38892f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4306{
    "0x1802f4306",
    "FUN_1802f4306",
    R"F1802f4306S(undefined FUN_1802f4306())F1802f4306S",
    R"B1802f4306(// 0x1802f4306  FUN_1802f4306
// size=38 thunk=false
// signature: undefined FUN_1802f4306()
// status: ok


void FUN_1802f4306(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f4306",
    "4fdb58b26848be6703129af732dd32c66b1fa9d4527caa876951cbb4f38892f6",
    R"F1802f4306C()F1802f4306C",
    R"F1802f4306D()F1802f4306D",
    R"F1802f4306T()F1802f4306T",
    R"F1802f4306F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f4306F",
    R"F1802f4306U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4306U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4306() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4306", "FUN_1802f4306");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 4fdb58b26848be6703129af732dd32c66b1fa9d4527caa876951cbb4f38892f6
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4306;
}

// 0x1802f432c FUN_1802f432c
// source: re/dump/decompile/0x1802f432c_FUN_1802f432c.c
// size: 38 bytes; thunk: false
// body sha256: 19180a5dd6901b5f0ba8c980b79976d1abfac68c294a3b8f22ba248e9d2514d4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f432c{
    "0x1802f432c",
    "FUN_1802f432c",
    R"F1802f432cS(undefined FUN_1802f432c())F1802f432cS",
    R"B1802f432c(// 0x1802f432c  FUN_1802f432c
// size=38 thunk=false
// signature: undefined FUN_1802f432c()
// status: ok


void FUN_1802f432c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f432c",
    "19180a5dd6901b5f0ba8c980b79976d1abfac68c294a3b8f22ba248e9d2514d4",
    R"F1802f432cC()F1802f432cC",
    R"F1802f432cD()F1802f432cD",
    R"F1802f432cT()F1802f432cT",
    R"F1802f432cF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f432cF",
    R"F1802f432cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f432cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f432c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f432c", "FUN_1802f432c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 19180a5dd6901b5f0ba8c980b79976d1abfac68c294a3b8f22ba248e9d2514d4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f432c;
}

// 0x1802f4352 FUN_1802f4352
// source: re/dump/decompile/0x1802f4352_FUN_1802f4352.c
// size: 38 bytes; thunk: false
// body sha256: df37c9106c5741f54aa7d77e010cf0be9e694f8618aff43c2e6c852cc522e1c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4352{
    "0x1802f4352",
    "FUN_1802f4352",
    R"F1802f4352S(undefined FUN_1802f4352())F1802f4352S",
    R"B1802f4352(// 0x1802f4352  FUN_1802f4352
// size=38 thunk=false
// signature: undefined FUN_1802f4352()
// status: ok


void FUN_1802f4352(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f4352",
    "df37c9106c5741f54aa7d77e010cf0be9e694f8618aff43c2e6c852cc522e1c6",
    R"F1802f4352C()F1802f4352C",
    R"F1802f4352D()F1802f4352D",
    R"F1802f4352T()F1802f4352T",
    R"F1802f4352F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802f4352F",
    R"F1802f4352U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4352U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4352() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4352", "FUN_1802f4352");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: df37c9106c5741f54aa7d77e010cf0be9e694f8618aff43c2e6c852cc522e1c6
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4352;
}

// 0x1802f4380 FUN_1802f4380
// source: re/dump/decompile/0x1802f4380_FUN_1802f4380.c
// size: 38 bytes; thunk: false
// body sha256: 1cd5edb665146dc152675e40ce4dd3a796305052374521af7e2ea7a39d732f8f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4380{
    "0x1802f4380",
    "FUN_1802f4380",
    R"F1802f4380S(undefined FUN_1802f4380())F1802f4380S",
    R"B1802f4380(// 0x1802f4380  FUN_1802f4380
// size=38 thunk=false
// signature: undefined FUN_1802f4380()
// status: ok


void FUN_1802f4380(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802f4380",
    "1cd5edb665146dc152675e40ce4dd3a796305052374521af7e2ea7a39d732f8f",
    R"F1802f4380C()F1802f4380C",
    R"F1802f4380D()F1802f4380D",
    R"F1802f4380T()F1802f4380T",
    R"F1802f4380F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f4380F",
    R"F1802f4380U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4380U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4380() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4380", "FUN_1802f4380");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 1cd5edb665146dc152675e40ce4dd3a796305052374521af7e2ea7a39d732f8f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4380;
}

// 0x1802f43a6 FUN_1802f43a6
// source: re/dump/decompile/0x1802f43a6_FUN_1802f43a6.c
// size: 46 bytes; thunk: false
// body sha256: d157ec795bf460ab5b46a029393863a864d3578946fb4dbd0317bf7bb2d2a996
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f43a6{
    "0x1802f43a6",
    "FUN_1802f43a6",
    R"F1802f43a6S(undefined FUN_1802f43a6())F1802f43a6S",
    R"B1802f43a6(// 0x1802f43a6  FUN_1802f43a6
// size=46 thunk=false
// signature: undefined FUN_1802f43a6()
// status: ok


void FUN_1802f43a6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xf0));
  }
  return;
}


)B1802f43a6",
    "d157ec795bf460ab5b46a029393863a864d3578946fb4dbd0317bf7bb2d2a996",
    R"F1802f43a6C()F1802f43a6C",
    R"F1802f43a6D()F1802f43a6D",
    R"F1802f43a6T()F1802f43a6T",
    R"F1802f43a6F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
15: return;)F1802f43a6F",
    R"F1802f43a6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f43a6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f43a6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f43a6", "FUN_1802f43a6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d157ec795bf460ab5b46a029393863a864d3578946fb4dbd0317bf7bb2d2a996
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xf0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f43a6;
}

// 0x1802f4480 FUN_1802f4480
// source: re/dump/decompile/0x1802f4480_FUN_1802f4480.c
// size: 38 bytes; thunk: false
// body sha256: bf9175d16018a98e91a6c2ddc2425e6e2132fbcf72fc8be460815e104cdd72ad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4480{
    "0x1802f4480",
    "FUN_1802f4480",
    R"F1802f4480S(undefined FUN_1802f4480())F1802f4480S",
    R"B1802f4480(// 0x1802f4480  FUN_1802f4480
// size=38 thunk=false
// signature: undefined FUN_1802f4480()
// status: ok


void FUN_1802f4480(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f4480",
    "bf9175d16018a98e91a6c2ddc2425e6e2132fbcf72fc8be460815e104cdd72ad",
    R"F1802f4480C()F1802f4480C",
    R"F1802f4480D()F1802f4480D",
    R"F1802f4480T()F1802f4480T",
    R"F1802f4480F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f4480F",
    R"F1802f4480U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4480U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4480() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4480", "FUN_1802f4480");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: bf9175d16018a98e91a6c2ddc2425e6e2132fbcf72fc8be460815e104cdd72ad
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4480;
}

// 0x1802f44a6 FUN_1802f44a6
// source: re/dump/decompile/0x1802f44a6_FUN_1802f44a6.c
// size: 38 bytes; thunk: false
// body sha256: 06eac78f9a201290f3d40b0aab0110a0a03e1bfd78bda78142ecdaec31ece249
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f44a6{
    "0x1802f44a6",
    "FUN_1802f44a6",
    R"F1802f44a6S(undefined FUN_1802f44a6())F1802f44a6S",
    R"B1802f44a6(// 0x1802f44a6  FUN_1802f44a6
// size=38 thunk=false
// signature: undefined FUN_1802f44a6()
// status: ok


void FUN_1802f44a6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f44a6",
    "06eac78f9a201290f3d40b0aab0110a0a03e1bfd78bda78142ecdaec31ece249",
    R"F1802f44a6C()F1802f44a6C",
    R"F1802f44a6D()F1802f44a6D",
    R"F1802f44a6T()F1802f44a6T",
    R"F1802f44a6F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f44a6F",
    R"F1802f44a6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f44a6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f44a6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f44a6", "FUN_1802f44a6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 06eac78f9a201290f3d40b0aab0110a0a03e1bfd78bda78142ecdaec31ece249
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f44a6;
}

// 0x1802f44cc FUN_1802f44cc
// source: re/dump/decompile/0x1802f44cc_FUN_1802f44cc.c
// size: 41 bytes; thunk: false
// body sha256: 13523098b4a4e8e8889a9d2c7a0923456e31a450e436989d4a9aa0c4cdd60306
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f44cc{
    "0x1802f44cc",
    "FUN_1802f44cc",
    R"F1802f44ccS(undefined FUN_1802f44cc())F1802f44ccS",
    R"B1802f44cc(// 0x1802f44cc  FUN_1802f44cc
// size=41 thunk=false
// signature: undefined FUN_1802f44cc()
// status: ok


void FUN_1802f44cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f44cc",
    "13523098b4a4e8e8889a9d2c7a0923456e31a450e436989d4a9aa0c4cdd60306",
    R"F1802f44ccC()F1802f44ccC",
    R"F1802f44ccD()F1802f44ccD",
    R"F1802f44ccT()F1802f44ccT",
    R"F1802f44ccF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f44ccF",
    R"F1802f44ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f44ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f44cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f44cc", "FUN_1802f44cc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 13523098b4a4e8e8889a9d2c7a0923456e31a450e436989d4a9aa0c4cdd60306
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f44cc;
}

// 0x1802f44f5 FUN_1802f44f5
// source: re/dump/decompile/0x1802f44f5_FUN_1802f44f5.c
// size: 41 bytes; thunk: false
// body sha256: 2adeb690cc503fc03c380992642edc2cbf69a573fb66ae3b564bf95df1d3e27c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f44f5{
    "0x1802f44f5",
    "FUN_1802f44f5",
    R"F1802f44f5S(undefined FUN_1802f44f5())F1802f44f5S",
    R"B1802f44f5(// 0x1802f44f5  FUN_1802f44f5
// size=41 thunk=false
// signature: undefined FUN_1802f44f5()
// status: ok


void FUN_1802f44f5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802f44f5",
    "2adeb690cc503fc03c380992642edc2cbf69a573fb66ae3b564bf95df1d3e27c",
    R"F1802f44f5C()F1802f44f5C",
    R"F1802f44f5D()F1802f44f5D",
    R"F1802f44f5T()F1802f44f5T",
    R"F1802f44f5F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802f44f5F",
    R"F1802f44f5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f44f5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f44f5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f44f5", "FUN_1802f44f5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: 2adeb690cc503fc03c380992642edc2cbf69a573fb66ae3b564bf95df1d3e27c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f44f5;
}

// 0x1802f4520 FUN_1802f4520
// source: re/dump/decompile/0x1802f4520_FUN_1802f4520.c
// size: 38 bytes; thunk: false
// body sha256: 6bc4a72458c94079f154135deab5b1a43f88df524d4e3182e76f35223da3d693
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4520{
    "0x1802f4520",
    "FUN_1802f4520",
    R"F1802f4520S(undefined FUN_1802f4520())F1802f4520S",
    R"B1802f4520(// 0x1802f4520  FUN_1802f4520
// size=38 thunk=false
// signature: undefined FUN_1802f4520()
// status: ok


void FUN_1802f4520(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f4520",
    "6bc4a72458c94079f154135deab5b1a43f88df524d4e3182e76f35223da3d693",
    R"F1802f4520C()F1802f4520C",
    R"F1802f4520D()F1802f4520D",
    R"F1802f4520T()F1802f4520T",
    R"F1802f4520F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f4520F",
    R"F1802f4520U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4520U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4520() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4520", "FUN_1802f4520");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 6bc4a72458c94079f154135deab5b1a43f88df524d4e3182e76f35223da3d693
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4520;
}

// 0x1802f456a FUN_1802f456a
// source: re/dump/decompile/0x1802f456a_FUN_1802f456a.c
// size: 38 bytes; thunk: false
// body sha256: 85898459a0006bec3abb7917016564590ca3e71e96226de6151ae23456384b1d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f456a{
    "0x1802f456a",
    "FUN_1802f456a",
    R"F1802f456aS(undefined FUN_1802f456a())F1802f456aS",
    R"B1802f456a(// 0x1802f456a  FUN_1802f456a
// size=38 thunk=false
// signature: undefined FUN_1802f456a()
// status: ok


void FUN_1802f456a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f456a",
    "85898459a0006bec3abb7917016564590ca3e71e96226de6151ae23456384b1d",
    R"F1802f456aC()F1802f456aC",
    R"F1802f456aD()F1802f456aD",
    R"F1802f456aT()F1802f456aT",
    R"F1802f456aF(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f456aF",
    R"F1802f456aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f456aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f456a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f456a", "FUN_1802f456a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 85898459a0006bec3abb7917016564590ca3e71e96226de6151ae23456384b1d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f456a;
}

// 0x1802f4590 FUN_1802f4590
// source: re/dump/decompile/0x1802f4590_FUN_1802f4590.c
// size: 38 bytes; thunk: false
// body sha256: e58c0b5551c3bda6e030ea1eaf1bc679f5fcd3510892d74101b85b59fe37b31b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4590{
    "0x1802f4590",
    "FUN_1802f4590",
    R"F1802f4590S(undefined FUN_1802f4590())F1802f4590S",
    R"B1802f4590(// 0x1802f4590  FUN_1802f4590
// size=38 thunk=false
// signature: undefined FUN_1802f4590()
// status: ok


void FUN_1802f4590(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f4590",
    "e58c0b5551c3bda6e030ea1eaf1bc679f5fcd3510892d74101b85b59fe37b31b",
    R"F1802f4590C()F1802f4590C",
    R"F1802f4590D()F1802f4590D",
    R"F1802f4590T()F1802f4590T",
    R"F1802f4590F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f4590F",
    R"F1802f4590U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4590() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4590", "FUN_1802f4590");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: e58c0b5551c3bda6e030ea1eaf1bc679f5fcd3510892d74101b85b59fe37b31b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4590;
}

// 0x1802f45da FUN_1802f45da
// source: re/dump/decompile/0x1802f45da_FUN_1802f45da.c
// size: 43 bytes; thunk: false
// body sha256: d9cb27931e2b53b821b8133c8a254be78f2de14570377eef06d98f267c585cc1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f45da{
    "0x1802f45da",
    "FUN_1802f45da",
    R"F1802f45daS(undefined FUN_1802f45da())F1802f45daS",
    R"B1802f45da(// 0x1802f45da  FUN_1802f45da
// size=43 thunk=false
// signature: undefined FUN_1802f45da()
// status: ok


void FUN_1802f45da(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f45da",
    "d9cb27931e2b53b821b8133c8a254be78f2de14570377eef06d98f267c585cc1",
    R"F1802f45daC()F1802f45daC",
    R"F1802f45daD()F1802f45daD",
    R"F1802f45daT()F1802f45daT",
    R"F1802f45daF(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802f45daF",
    R"F1802f45daU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f45daU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f45da() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f45da", "FUN_1802f45da");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: d9cb27931e2b53b821b8133c8a254be78f2de14570377eef06d98f267c585cc1
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f45da;
}

// 0x1802f4605 FUN_1802f4605
// source: re/dump/decompile/0x1802f4605_FUN_1802f4605.c
// size: 43 bytes; thunk: false
// body sha256: 2c321275efa9cc9ffbd5b48e26b1a225cfff84d30101863d2e708ea4b5ea6e1c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4605{
    "0x1802f4605",
    "FUN_1802f4605",
    R"F1802f4605S(undefined FUN_1802f4605())F1802f4605S",
    R"B1802f4605(// 0x1802f4605  FUN_1802f4605
// size=43 thunk=false
// signature: undefined FUN_1802f4605()
// status: ok


void FUN_1802f4605(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f4605",
    "2c321275efa9cc9ffbd5b48e26b1a225cfff84d30101863d2e708ea4b5ea6e1c",
    R"F1802f4605C()F1802f4605C",
    R"F1802f4605D()F1802f4605D",
    R"F1802f4605T()F1802f4605T",
    R"F1802f4605F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802f4605F",
    R"F1802f4605U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4605U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4605() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4605", "FUN_1802f4605");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 2c321275efa9cc9ffbd5b48e26b1a225cfff84d30101863d2e708ea4b5ea6e1c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4605;
}

// 0x1802f4654 FUN_1802f4654
// source: re/dump/decompile/0x1802f4654_FUN_1802f4654.c
// size: 43 bytes; thunk: false
// body sha256: 621eff04bd2932f8e6b0b2afa53659f8421292158a1c210e92b4c153abb307a2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4654{
    "0x1802f4654",
    "FUN_1802f4654",
    R"F1802f4654S(undefined FUN_1802f4654())F1802f4654S",
    R"B1802f4654(// 0x1802f4654  FUN_1802f4654
// size=43 thunk=false
// signature: undefined FUN_1802f4654()
// status: ok


void FUN_1802f4654(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f4654",
    "621eff04bd2932f8e6b0b2afa53659f8421292158a1c210e92b4c153abb307a2",
    R"F1802f4654C()F1802f4654C",
    R"F1802f4654D()F1802f4654D",
    R"F1802f4654T()F1802f4654T",
    R"F1802f4654F(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802f4654F",
    R"F1802f4654U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4654U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4654() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4654", "FUN_1802f4654");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 621eff04bd2932f8e6b0b2afa53659f8421292158a1c210e92b4c153abb307a2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4654;
}

// 0x1802f467f FUN_1802f467f
// source: re/dump/decompile/0x1802f467f_FUN_1802f467f.c
// size: 46 bytes; thunk: false
// body sha256: 464180712ba2a7c573c37a284fa0ea0f00a17aec89c9dfd2628c04202948df46
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f467f{
    "0x1802f467f",
    "FUN_1802f467f",
    R"F1802f467fS(undefined FUN_1802f467f())F1802f467fS",
    R"B1802f467f(// 0x1802f467f  FUN_1802f467f
// size=46 thunk=false
// signature: undefined FUN_1802f467f()
// status: ok


void FUN_1802f467f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f467f",
    "464180712ba2a7c573c37a284fa0ea0f00a17aec89c9dfd2628c04202948df46",
    R"F1802f467fC()F1802f467fC",
    R"F1802f467fD()F1802f467fD",
    R"F1802f467fT()F1802f467fT",
    R"F1802f467fF(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802f467fF",
    R"F1802f467fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f467fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f467f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f467f", "FUN_1802f467f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 464180712ba2a7c573c37a284fa0ea0f00a17aec89c9dfd2628c04202948df46
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f467f;
}

// 0x1802f46d1 FUN_1802f46d1
// source: re/dump/decompile/0x1802f46d1_FUN_1802f46d1.c
// size: 46 bytes; thunk: false
// body sha256: 7e4d922a2b0ab8a3980efe0a62dc114ebebe581db7bc4efcb90b8aa256ffc2c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f46d1{
    "0x1802f46d1",
    "FUN_1802f46d1",
    R"F1802f46d1S(undefined FUN_1802f46d1())F1802f46d1S",
    R"B1802f46d1(// 0x1802f46d1  FUN_1802f46d1
// size=46 thunk=false
// signature: undefined FUN_1802f46d1()
// status: ok


void FUN_1802f46d1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f46d1",
    "7e4d922a2b0ab8a3980efe0a62dc114ebebe581db7bc4efcb90b8aa256ffc2c8",
    R"F1802f46d1C()F1802f46d1C",
    R"F1802f46d1D()F1802f46d1D",
    R"F1802f46d1T()F1802f46d1T",
    R"F1802f46d1F(10: if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
14: return;)F1802f46d1F",
    R"F1802f46d1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f46d1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f46d1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f46d1", "FUN_1802f46d1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 7e4d922a2b0ab8a3980efe0a62dc114ebebe581db7bc4efcb90b8aa256ffc2c8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f46d1;
}

// 0x1802f46ff FUN_1802f46ff
// source: re/dump/decompile/0x1802f46ff_FUN_1802f46ff.c
// size: 46 bytes; thunk: false
// body sha256: 5e764b936c81550949a280d1e2f19af71966377e3ac842ceaa5c44c7285587e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f46ff{
    "0x1802f46ff",
    "FUN_1802f46ff",
    R"F1802f46ffS(undefined FUN_1802f46ff())F1802f46ffS",
    R"B1802f46ff(// 0x1802f46ff  FUN_1802f46ff
// size=46 thunk=false
// signature: undefined FUN_1802f46ff()
// status: ok


void FUN_1802f46ff(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802f46ff",
    "5e764b936c81550949a280d1e2f19af71966377e3ac842ceaa5c44c7285587e7",
    R"F1802f46ffC()F1802f46ffC",
    R"F1802f46ffD()F1802f46ffD",
    R"F1802f46ffT()F1802f46ffT",
    R"F1802f46ffF(10: if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
14: return;)F1802f46ffF",
    R"F1802f46ffU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f46ffU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f46ff() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f46ff", "FUN_1802f46ff");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: 5e764b936c81550949a280d1e2f19af71966377e3ac842ceaa5c44c7285587e7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f46ff;
}

// 0x1802f4751 FUN_1802f4751
// source: re/dump/decompile/0x1802f4751_FUN_1802f4751.c
// size: 46 bytes; thunk: false
// body sha256: fda089278b6802049ce88905e7e16ab7782fa94222aa23c1ec1efe989f9c6e6b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4751{
    "0x1802f4751",
    "FUN_1802f4751",
    R"F1802f4751S(undefined FUN_1802f4751())F1802f4751S",
    R"B1802f4751(// 0x1802f4751  FUN_1802f4751
// size=46 thunk=false
// signature: undefined FUN_1802f4751()
// status: ok


void FUN_1802f4751(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802f4751",
    "fda089278b6802049ce88905e7e16ab7782fa94222aa23c1ec1efe989f9c6e6b",
    R"F1802f4751C()F1802f4751C",
    R"F1802f4751D()F1802f4751D",
    R"F1802f4751T()F1802f4751T",
    R"F1802f4751F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
14: return;)F1802f4751F",
    R"F1802f4751U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4751U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4751() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4751", "FUN_1802f4751");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: fda089278b6802049ce88905e7e16ab7782fa94222aa23c1ec1efe989f9c6e6b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4751;
}

// 0x1802f4780 FUN_1802f4780
// source: re/dump/decompile/0x1802f4780_FUN_1802f4780.c
// size: 38 bytes; thunk: false
// body sha256: 17b6c2d0954526a3337c6121e89a39276a77cd166ea5b40c83913bb854a21bf5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4780{
    "0x1802f4780",
    "FUN_1802f4780",
    R"F1802f4780S(undefined FUN_1802f4780())F1802f4780S",
    R"B1802f4780(// 0x1802f4780  FUN_1802f4780
// size=38 thunk=false
// signature: undefined FUN_1802f4780()
// status: ok


void FUN_1802f4780(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f4780",
    "17b6c2d0954526a3337c6121e89a39276a77cd166ea5b40c83913bb854a21bf5",
    R"F1802f4780C()F1802f4780C",
    R"F1802f4780D()F1802f4780D",
    R"F1802f4780T()F1802f4780T",
    R"F1802f4780F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f4780F",
    R"F1802f4780U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4780() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4780", "FUN_1802f4780");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 17b6c2d0954526a3337c6121e89a39276a77cd166ea5b40c83913bb854a21bf5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4780;
}

// 0x1802f47ca FUN_1802f47ca
// source: re/dump/decompile/0x1802f47ca_FUN_1802f47ca.c
// size: 38 bytes; thunk: false
// body sha256: 346a3105ef2caafc76c2fab3458a16e75e820cb004c1ed3fe7a2760ce0fce71e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f47ca{
    "0x1802f47ca",
    "FUN_1802f47ca",
    R"F1802f47caS(undefined FUN_1802f47ca())F1802f47caS",
    R"B1802f47ca(// 0x1802f47ca  FUN_1802f47ca
// size=38 thunk=false
// signature: undefined FUN_1802f47ca()
// status: ok


void FUN_1802f47ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f47ca",
    "346a3105ef2caafc76c2fab3458a16e75e820cb004c1ed3fe7a2760ce0fce71e",
    R"F1802f47caC()F1802f47caC",
    R"F1802f47caD()F1802f47caD",
    R"F1802f47caT()F1802f47caT",
    R"F1802f47caF(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f47caF",
    R"F1802f47caU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f47caU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f47ca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f47ca", "FUN_1802f47ca");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 346a3105ef2caafc76c2fab3458a16e75e820cb004c1ed3fe7a2760ce0fce71e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f47ca;
}

// 0x1802f47fc FUN_1802f47fc
// source: re/dump/decompile/0x1802f47fc_FUN_1802f47fc.c
// size: 38 bytes; thunk: false
// body sha256: 86e610b90e00a1d25cb4ba968f610bc3e06cad9ecfbe9a6659b8769f57de8967
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f47fc{
    "0x1802f47fc",
    "FUN_1802f47fc",
    R"F1802f47fcS(undefined FUN_1802f47fc())F1802f47fcS",
    R"B1802f47fc(// 0x1802f47fc  FUN_1802f47fc
// size=38 thunk=false
// signature: undefined FUN_1802f47fc()
// status: ok


void FUN_1802f47fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f47fc",
    "86e610b90e00a1d25cb4ba968f610bc3e06cad9ecfbe9a6659b8769f57de8967",
    R"F1802f47fcC()F1802f47fcC",
    R"F1802f47fcD()F1802f47fcD",
    R"F1802f47fcT()F1802f47fcT",
    R"F1802f47fcF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f47fcF",
    R"F1802f47fcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f47fcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f47fc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f47fc", "FUN_1802f47fc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 86e610b90e00a1d25cb4ba968f610bc3e06cad9ecfbe9a6659b8769f57de8967
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f47fc;
}

// 0x1802f4846 FUN_1802f4846
// source: re/dump/decompile/0x1802f4846_FUN_1802f4846.c
// size: 43 bytes; thunk: false
// body sha256: 58de28852bd99579e3a73cafa8efc4b183dd5edc69f29ff2b3ce320c5b36c5b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4846{
    "0x1802f4846",
    "FUN_1802f4846",
    R"F1802f4846S(undefined FUN_1802f4846())F1802f4846S",
    R"B1802f4846(// 0x1802f4846  FUN_1802f4846
// size=43 thunk=false
// signature: undefined FUN_1802f4846()
// status: ok


void FUN_1802f4846(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f4846",
    "58de28852bd99579e3a73cafa8efc4b183dd5edc69f29ff2b3ce320c5b36c5b9",
    R"F1802f4846C()F1802f4846C",
    R"F1802f4846D()F1802f4846D",
    R"F1802f4846T()F1802f4846T",
    R"F1802f4846F(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802f4846F",
    R"F1802f4846U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4846U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4846() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4846", "FUN_1802f4846");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 58de28852bd99579e3a73cafa8efc4b183dd5edc69f29ff2b3ce320c5b36c5b9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4846;
}

// 0x1802f4871 FUN_1802f4871
// source: re/dump/decompile/0x1802f4871_FUN_1802f4871.c
// size: 43 bytes; thunk: false
// body sha256: 5e830a0b082f83c700138332ab050ec9709ab687b0911ebcca5384452e8c8edf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4871{
    "0x1802f4871",
    "FUN_1802f4871",
    R"F1802f4871S(undefined FUN_1802f4871())F1802f4871S",
    R"B1802f4871(// 0x1802f4871  FUN_1802f4871
// size=43 thunk=false
// signature: undefined FUN_1802f4871()
// status: ok


void FUN_1802f4871(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f4871",
    "5e830a0b082f83c700138332ab050ec9709ab687b0911ebcca5384452e8c8edf",
    R"F1802f4871C()F1802f4871C",
    R"F1802f4871D()F1802f4871D",
    R"F1802f4871T()F1802f4871T",
    R"F1802f4871F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802f4871F",
    R"F1802f4871U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4871U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4871() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4871", "FUN_1802f4871");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 5e830a0b082f83c700138332ab050ec9709ab687b0911ebcca5384452e8c8edf
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4871;
}

// 0x1802f48c0 FUN_1802f48c0
// source: re/dump/decompile/0x1802f48c0_FUN_1802f48c0.c
// size: 43 bytes; thunk: false
// body sha256: ace9000557806c3a3d67be7856e27081fe14e6522d65392a33bad65008b809ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f48c0{
    "0x1802f48c0",
    "FUN_1802f48c0",
    R"F1802f48c0S(undefined FUN_1802f48c0())F1802f48c0S",
    R"B1802f48c0(// 0x1802f48c0  FUN_1802f48c0
// size=43 thunk=false
// signature: undefined FUN_1802f48c0()
// status: ok


void FUN_1802f48c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f48c0",
    "ace9000557806c3a3d67be7856e27081fe14e6522d65392a33bad65008b809ac",
    R"F1802f48c0C()F1802f48c0C",
    R"F1802f48c0D()F1802f48c0D",
    R"F1802f48c0T()F1802f48c0T",
    R"F1802f48c0F(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802f48c0F",
    R"F1802f48c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f48c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f48c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f48c0", "FUN_1802f48c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: ace9000557806c3a3d67be7856e27081fe14e6522d65392a33bad65008b809ac
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f48c0;
}

// 0x1802f48eb FUN_1802f48eb
// source: re/dump/decompile/0x1802f48eb_FUN_1802f48eb.c
// size: 46 bytes; thunk: false
// body sha256: 2bffaf40d703473072718875008c41025aa8ba88fa2ec587b5e062f3e8804f62
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f48eb{
    "0x1802f48eb",
    "FUN_1802f48eb",
    R"F1802f48ebS(undefined FUN_1802f48eb())F1802f48ebS",
    R"B1802f48eb(// 0x1802f48eb  FUN_1802f48eb
// size=46 thunk=false
// signature: undefined FUN_1802f48eb()
// status: ok


void FUN_1802f48eb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f48eb",
    "2bffaf40d703473072718875008c41025aa8ba88fa2ec587b5e062f3e8804f62",
    R"F1802f48ebC()F1802f48ebC",
    R"F1802f48ebD()F1802f48ebD",
    R"F1802f48ebT()F1802f48ebT",
    R"F1802f48ebF(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802f48ebF",
    R"F1802f48ebU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f48ebU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f48eb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f48eb", "FUN_1802f48eb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 2bffaf40d703473072718875008c41025aa8ba88fa2ec587b5e062f3e8804f62
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f48eb;
}

// 0x1802f493d FUN_1802f493d
// source: re/dump/decompile/0x1802f493d_FUN_1802f493d.c
// size: 46 bytes; thunk: false
// body sha256: 2653a7f4a080213b4d93236bd5f21297165cee0766b5e5d72ad4e8615cfa9988
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f493d{
    "0x1802f493d",
    "FUN_1802f493d",
    R"F1802f493dS(undefined FUN_1802f493d())F1802f493dS",
    R"B1802f493d(// 0x1802f493d  FUN_1802f493d
// size=46 thunk=false
// signature: undefined FUN_1802f493d()
// status: ok


void FUN_1802f493d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f493d",
    "2653a7f4a080213b4d93236bd5f21297165cee0766b5e5d72ad4e8615cfa9988",
    R"F1802f493dC()F1802f493dC",
    R"F1802f493dD()F1802f493dD",
    R"F1802f493dT()F1802f493dT",
    R"F1802f493dF(10: if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
14: return;)F1802f493dF",
    R"F1802f493dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f493dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f493d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f493d", "FUN_1802f493d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 2653a7f4a080213b4d93236bd5f21297165cee0766b5e5d72ad4e8615cfa9988
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f493d;
}

// 0x1802f496b FUN_1802f496b
// source: re/dump/decompile/0x1802f496b_FUN_1802f496b.c
// size: 46 bytes; thunk: false
// body sha256: 31e3e3847bc023d1e6db40e419e8b745cd846aa169af3b5551ffbde7fb3cf6b8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f496b{
    "0x1802f496b",
    "FUN_1802f496b",
    R"F1802f496bS(undefined FUN_1802f496b())F1802f496bS",
    R"B1802f496b(// 0x1802f496b  FUN_1802f496b
// size=46 thunk=false
// signature: undefined FUN_1802f496b()
// status: ok


void FUN_1802f496b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802f496b",
    "31e3e3847bc023d1e6db40e419e8b745cd846aa169af3b5551ffbde7fb3cf6b8",
    R"F1802f496bC()F1802f496bC",
    R"F1802f496bD()F1802f496bD",
    R"F1802f496bT()F1802f496bT",
    R"F1802f496bF(10: if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
14: return;)F1802f496bF",
    R"F1802f496bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f496bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f496b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f496b", "FUN_1802f496b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: 31e3e3847bc023d1e6db40e419e8b745cd846aa169af3b5551ffbde7fb3cf6b8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f496b;
}

// 0x1802f49bd FUN_1802f49bd
// source: re/dump/decompile/0x1802f49bd_FUN_1802f49bd.c
// size: 46 bytes; thunk: false
// body sha256: f05160701b517f67a95b0b3854dabd800a86bf5164f5ae6886478ff6d087a4ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f49bd{
    "0x1802f49bd",
    "FUN_1802f49bd",
    R"F1802f49bdS(undefined FUN_1802f49bd())F1802f49bdS",
    R"B1802f49bd(// 0x1802f49bd  FUN_1802f49bd
// size=46 thunk=false
// signature: undefined FUN_1802f49bd()
// status: ok


void FUN_1802f49bd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802f49bd",
    "f05160701b517f67a95b0b3854dabd800a86bf5164f5ae6886478ff6d087a4ae",
    R"F1802f49bdC()F1802f49bdC",
    R"F1802f49bdD()F1802f49bdD",
    R"F1802f49bdT()F1802f49bdT",
    R"F1802f49bdF(10: if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
14: return;)F1802f49bdF",
    R"F1802f49bdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f49bdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f49bd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f49bd", "FUN_1802f49bd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: f05160701b517f67a95b0b3854dabd800a86bf5164f5ae6886478ff6d087a4ae
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f49bd;
}

// 0x1802f4a08 FUN_1802f4a08
// source: re/dump/decompile/0x1802f4a08_FUN_1802f4a08.c
// size: 43 bytes; thunk: false
// body sha256: 6ec46e0be90c3b15bbe0281381d69d95ec739b87161ba35e8c4f2fb36210130b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4a08{
    "0x1802f4a08",
    "FUN_1802f4a08",
    R"F1802f4a08S(undefined FUN_1802f4a08())F1802f4a08S",
    R"B1802f4a08(// 0x1802f4a08  FUN_1802f4a08
// size=43 thunk=false
// signature: undefined FUN_1802f4a08()
// status: ok


void FUN_1802f4a08(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f4a08",
    "6ec46e0be90c3b15bbe0281381d69d95ec739b87161ba35e8c4f2fb36210130b",
    R"F1802f4a08C()F1802f4a08C",
    R"F1802f4a08D()F1802f4a08D",
    R"F1802f4a08T()F1802f4a08T",
    R"F1802f4a08F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802f4a08F",
    R"F1802f4a08U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4a08U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4a08() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4a08", "FUN_1802f4a08");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 6ec46e0be90c3b15bbe0281381d69d95ec739b87161ba35e8c4f2fb36210130b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4a08;
}

// 0x1802f4a57 FUN_1802f4a57
// source: re/dump/decompile/0x1802f4a57_FUN_1802f4a57.c
// size: 43 bytes; thunk: false
// body sha256: 18a66ea68130ebacf76dbbab15540f062e016597f43c3fa56e554bc64db6c885
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4a57{
    "0x1802f4a57",
    "FUN_1802f4a57",
    R"F1802f4a57S(undefined FUN_1802f4a57())F1802f4a57S",
    R"B1802f4a57(// 0x1802f4a57  FUN_1802f4a57
// size=43 thunk=false
// signature: undefined FUN_1802f4a57()
// status: ok


void FUN_1802f4a57(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f4a57",
    "18a66ea68130ebacf76dbbab15540f062e016597f43c3fa56e554bc64db6c885",
    R"F1802f4a57C()F1802f4a57C",
    R"F1802f4a57D()F1802f4a57D",
    R"F1802f4a57T()F1802f4a57T",
    R"F1802f4a57F(10: if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
14: return;)F1802f4a57F",
    R"F1802f4a57U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4a57U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4a57() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4a57", "FUN_1802f4a57");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 18a66ea68130ebacf76dbbab15540f062e016597f43c3fa56e554bc64db6c885
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4a57;
}

// 0x1802f4a82 FUN_1802f4a82
// source: re/dump/decompile/0x1802f4a82_FUN_1802f4a82.c
// size: 46 bytes; thunk: false
// body sha256: 399076470824deb78f524513fdfb29bbe0a2327e251b7921f7a184a23277a9b2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4a82{
    "0x1802f4a82",
    "FUN_1802f4a82",
    R"F1802f4a82S(undefined FUN_1802f4a82())F1802f4a82S",
    R"B1802f4a82(// 0x1802f4a82  FUN_1802f4a82
// size=46 thunk=false
// signature: undefined FUN_1802f4a82()
// status: ok


void FUN_1802f4a82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f4a82",
    "399076470824deb78f524513fdfb29bbe0a2327e251b7921f7a184a23277a9b2",
    R"F1802f4a82C()F1802f4a82C",
    R"F1802f4a82D()F1802f4a82D",
    R"F1802f4a82T()F1802f4a82T",
    R"F1802f4a82F(10: if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
14: return;)F1802f4a82F",
    R"F1802f4a82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4a82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4a82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4a82", "FUN_1802f4a82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 399076470824deb78f524513fdfb29bbe0a2327e251b7921f7a184a23277a9b2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4a82;
}

// 0x1802f4ad4 FUN_1802f4ad4
// source: re/dump/decompile/0x1802f4ad4_FUN_1802f4ad4.c
// size: 46 bytes; thunk: false
// body sha256: 704b4db3dbd65aab0709df2c69b1d9dc40544565fac02512b57280b9a2b4b119
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4ad4{
    "0x1802f4ad4",
    "FUN_1802f4ad4",
    R"F1802f4ad4S(undefined FUN_1802f4ad4())F1802f4ad4S",
    R"B1802f4ad4(// 0x1802f4ad4  FUN_1802f4ad4
// size=46 thunk=false
// signature: undefined FUN_1802f4ad4()
// status: ok


void FUN_1802f4ad4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f4ad4",
    "704b4db3dbd65aab0709df2c69b1d9dc40544565fac02512b57280b9a2b4b119",
    R"F1802f4ad4C()F1802f4ad4C",
    R"F1802f4ad4D()F1802f4ad4D",
    R"F1802f4ad4T()F1802f4ad4T",
    R"F1802f4ad4F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
14: return;)F1802f4ad4F",
    R"F1802f4ad4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4ad4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4ad4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4ad4", "FUN_1802f4ad4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 704b4db3dbd65aab0709df2c69b1d9dc40544565fac02512b57280b9a2b4b119
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4ad4;
}

// 0x1802f4b02 FUN_1802f4b02
// source: re/dump/decompile/0x1802f4b02_FUN_1802f4b02.c
// size: 46 bytes; thunk: false
// body sha256: a8fb19609dc41dccdb6af42c54d593c2bbec9f6ba31765f46e13ea0174238c4c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4b02{
    "0x1802f4b02",
    "FUN_1802f4b02",
    R"F1802f4b02S(undefined FUN_1802f4b02())F1802f4b02S",
    R"B1802f4b02(// 0x1802f4b02  FUN_1802f4b02
// size=46 thunk=false
// signature: undefined FUN_1802f4b02()
// status: ok


void FUN_1802f4b02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802f4b02",
    "a8fb19609dc41dccdb6af42c54d593c2bbec9f6ba31765f46e13ea0174238c4c",
    R"F1802f4b02C()F1802f4b02C",
    R"F1802f4b02D()F1802f4b02D",
    R"F1802f4b02T()F1802f4b02T",
    R"F1802f4b02F(10: if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
14: return;)F1802f4b02F",
    R"F1802f4b02U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4b02U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4b02() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4b02", "FUN_1802f4b02");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: a8fb19609dc41dccdb6af42c54d593c2bbec9f6ba31765f46e13ea0174238c4c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4b02;
}

// 0x1802f4b54 FUN_1802f4b54
// source: re/dump/decompile/0x1802f4b54_FUN_1802f4b54.c
// size: 46 bytes; thunk: false
// body sha256: c0c7212fb996bae38785270174c0512035e15e83d905ece9e9a930b182e7d36b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4b54{
    "0x1802f4b54",
    "FUN_1802f4b54",
    R"F1802f4b54S(undefined FUN_1802f4b54())F1802f4b54S",
    R"B1802f4b54(// 0x1802f4b54  FUN_1802f4b54
// size=46 thunk=false
// signature: undefined FUN_1802f4b54()
// status: ok


void FUN_1802f4b54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802f4b54",
    "c0c7212fb996bae38785270174c0512035e15e83d905ece9e9a930b182e7d36b",
    R"F1802f4b54C()F1802f4b54C",
    R"F1802f4b54D()F1802f4b54D",
    R"F1802f4b54T()F1802f4b54T",
    R"F1802f4b54F(10: if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
14: return;)F1802f4b54F",
    R"F1802f4b54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4b54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4b54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4b54", "FUN_1802f4b54");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: c0c7212fb996bae38785270174c0512035e15e83d905ece9e9a930b182e7d36b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4b54;
}

// 0x1802f4b82 FUN_1802f4b82
// source: re/dump/decompile/0x1802f4b82_FUN_1802f4b82.c
// size: 46 bytes; thunk: false
// body sha256: 10bb79355b75149373c70a3910f097758da5885e37e7b404ee3dd4c1986dd5ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4b82{
    "0x1802f4b82",
    "FUN_1802f4b82",
    R"F1802f4b82S(undefined FUN_1802f4b82())F1802f4b82S",
    R"B1802f4b82(// 0x1802f4b82  FUN_1802f4b82
// size=46 thunk=false
// signature: undefined FUN_1802f4b82()
// status: ok


void FUN_1802f4b82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


)B1802f4b82",
    "10bb79355b75149373c70a3910f097758da5885e37e7b404ee3dd4c1986dd5ba",
    R"F1802f4b82C()F1802f4b82C",
    R"F1802f4b82D()F1802f4b82D",
    R"F1802f4b82T()F1802f4b82T",
    R"F1802f4b82F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
14: return;)F1802f4b82F",
    R"F1802f4b82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4b82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4b82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4b82", "FUN_1802f4b82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 200);
    // body sha256: 10bb79355b75149373c70a3910f097758da5885e37e7b404ee3dd4c1986dd5ba
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4b82;
}

// 0x1802f4bd4 FUN_1802f4bd4
// source: re/dump/decompile/0x1802f4bd4_FUN_1802f4bd4.c
// size: 46 bytes; thunk: false
// body sha256: f37c41dbebfd4618625899ab69cb83b6afe02bb861613b923a20b64bd7414688
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4bd4{
    "0x1802f4bd4",
    "FUN_1802f4bd4",
    R"F1802f4bd4S(undefined FUN_1802f4bd4())F1802f4bd4S",
    R"B1802f4bd4(// 0x1802f4bd4  FUN_1802f4bd4
// size=46 thunk=false
// signature: undefined FUN_1802f4bd4()
// status: ok


void FUN_1802f4bd4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


)B1802f4bd4",
    "f37c41dbebfd4618625899ab69cb83b6afe02bb861613b923a20b64bd7414688",
    R"F1802f4bd4C()F1802f4bd4C",
    R"F1802f4bd4D()F1802f4bd4D",
    R"F1802f4bd4T()F1802f4bd4T",
    R"F1802f4bd4F(10: if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
14: return;)F1802f4bd4F",
    R"F1802f4bd4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4bd4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4bd4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4bd4", "FUN_1802f4bd4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 200);
    // body sha256: f37c41dbebfd4618625899ab69cb83b6afe02bb861613b923a20b64bd7414688
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x8000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4bd4;
}

// 0x1802f4c02 FUN_1802f4c02
// source: re/dump/decompile/0x1802f4c02_FUN_1802f4c02.c
// size: 46 bytes; thunk: false
// body sha256: 173c01f392afea4293bdc166e733a51072e0dc1e0b9abc507ca33f2246fea5eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4c02{
    "0x1802f4c02",
    "FUN_1802f4c02",
    R"F1802f4c02S(undefined FUN_1802f4c02())F1802f4c02S",
    R"B1802f4c02(// 0x1802f4c02  FUN_1802f4c02
// size=46 thunk=false
// signature: undefined FUN_1802f4c02()
// status: ok


void FUN_1802f4c02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


)B1802f4c02",
    "173c01f392afea4293bdc166e733a51072e0dc1e0b9abc507ca33f2246fea5eb",
    R"F1802f4c02C()F1802f4c02C",
    R"F1802f4c02D()F1802f4c02D",
    R"F1802f4c02T()F1802f4c02T",
    R"F1802f4c02F(10: if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
14: return;)F1802f4c02F",
    R"F1802f4c02U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4c02U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4c02() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4c02", "FUN_1802f4c02");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe8);
    // body sha256: 173c01f392afea4293bdc166e733a51072e0dc1e0b9abc507ca33f2246fea5eb
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4c02;
}

// 0x1802f4c54 FUN_1802f4c54
// source: re/dump/decompile/0x1802f4c54_FUN_1802f4c54.c
// size: 46 bytes; thunk: false
// body sha256: b305301c1c3dd5f1afa4addfb56e11ae59cadd873740d900bd9b5ad4b7e1d21c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4c54{
    "0x1802f4c54",
    "FUN_1802f4c54",
    R"F1802f4c54S(undefined FUN_1802f4c54())F1802f4c54S",
    R"B1802f4c54(// 0x1802f4c54  FUN_1802f4c54
// size=46 thunk=false
// signature: undefined FUN_1802f4c54()
// status: ok


void FUN_1802f4c54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


)B1802f4c54",
    "b305301c1c3dd5f1afa4addfb56e11ae59cadd873740d900bd9b5ad4b7e1d21c",
    R"F1802f4c54C()F1802f4c54C",
    R"F1802f4c54D()F1802f4c54D",
    R"F1802f4c54T()F1802f4c54T",
    R"F1802f4c54F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
14: return;)F1802f4c54F",
    R"F1802f4c54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4c54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4c54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4c54", "FUN_1802f4c54");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe8);
    // body sha256: b305301c1c3dd5f1afa4addfb56e11ae59cadd873740d900bd9b5ad4b7e1d21c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4c54;
}

// 0x1802f4c82 FUN_1802f4c82
// source: re/dump/decompile/0x1802f4c82_FUN_1802f4c82.c
// size: 41 bytes; thunk: false
// body sha256: cd88d5fc164c6135322a25a7af2f8ee1311ef0a25f101ed40ce1b9bf8faf745b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4c82{
    "0x1802f4c82",
    "FUN_1802f4c82",
    R"F1802f4c82S(undefined FUN_1802f4c82())F1802f4c82S",
    R"B1802f4c82(// 0x1802f4c82  FUN_1802f4c82
// size=41 thunk=false
// signature: undefined FUN_1802f4c82()
// status: ok


void FUN_1802f4c82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


)B1802f4c82",
    "cd88d5fc164c6135322a25a7af2f8ee1311ef0a25f101ed40ce1b9bf8faf745b",
    R"F1802f4c82C()F1802f4c82C",
    R"F1802f4c82D()F1802f4c82D",
    R"F1802f4c82T()F1802f4c82T",
    R"F1802f4c82F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f4c82F",
    R"F1802f4c82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4c82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4c82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4c82", "FUN_1802f4c82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x108);
    // body sha256: cd88d5fc164c6135322a25a7af2f8ee1311ef0a25f101ed40ce1b9bf8faf745b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4c82;
}

// 0x1802f4ccf FUN_1802f4ccf
// source: re/dump/decompile/0x1802f4ccf_FUN_1802f4ccf.c
// size: 41 bytes; thunk: false
// body sha256: 23c319580b92d1e9f475e27479ed7b337a92da0b548d0f9bbc28b1a59ed7ee94
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4ccf{
    "0x1802f4ccf",
    "FUN_1802f4ccf",
    R"F1802f4ccfS(undefined FUN_1802f4ccf())F1802f4ccfS",
    R"B1802f4ccf(// 0x1802f4ccf  FUN_1802f4ccf
// size=41 thunk=false
// signature: undefined FUN_1802f4ccf()
// status: ok


void FUN_1802f4ccf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


)B1802f4ccf",
    "23c319580b92d1e9f475e27479ed7b337a92da0b548d0f9bbc28b1a59ed7ee94",
    R"F1802f4ccfC()F1802f4ccfC",
    R"F1802f4ccfD()F1802f4ccfD",
    R"F1802f4ccfT()F1802f4ccfT",
    R"F1802f4ccfF(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f4ccfF",
    R"F1802f4ccfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4ccfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4ccf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4ccf", "FUN_1802f4ccf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x108);
    // body sha256: 23c319580b92d1e9f475e27479ed7b337a92da0b548d0f9bbc28b1a59ed7ee94
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4ccf;
}

// 0x1802f4cf8 FUN_1802f4cf8
// source: re/dump/decompile/0x1802f4cf8_FUN_1802f4cf8.c
// size: 41 bytes; thunk: false
// body sha256: ceeeb54c1d331004dc8e6a71c0c416533ad0c44ccc207ff359f434eba8dd9885
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4cf8{
    "0x1802f4cf8",
    "FUN_1802f4cf8",
    R"F1802f4cf8S(undefined FUN_1802f4cf8())F1802f4cf8S",
    R"B1802f4cf8(// 0x1802f4cf8  FUN_1802f4cf8
// size=41 thunk=false
// signature: undefined FUN_1802f4cf8()
// status: ok


void FUN_1802f4cf8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


)B1802f4cf8",
    "ceeeb54c1d331004dc8e6a71c0c416533ad0c44ccc207ff359f434eba8dd9885",
    R"F1802f4cf8C()F1802f4cf8C",
    R"F1802f4cf8D()F1802f4cf8D",
    R"F1802f4cf8T()F1802f4cf8T",
    R"F1802f4cf8F(10: if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
14: return;)F1802f4cf8F",
    R"F1802f4cf8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4cf8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4cf8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4cf8", "FUN_1802f4cf8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x128);
    // body sha256: ceeeb54c1d331004dc8e6a71c0c416533ad0c44ccc207ff359f434eba8dd9885
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4cf8;
}

// 0x1802f4d45 FUN_1802f4d45
// source: re/dump/decompile/0x1802f4d45_FUN_1802f4d45.c
// size: 41 bytes; thunk: false
// body sha256: 3b23deeb63d40fc1f734ddde5b68375cfd09a86cae065d7aabfafa0915e9b66b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4d45{
    "0x1802f4d45",
    "FUN_1802f4d45",
    R"F1802f4d45S(undefined FUN_1802f4d45())F1802f4d45S",
    R"B1802f4d45(// 0x1802f4d45  FUN_1802f4d45
// size=41 thunk=false
// signature: undefined FUN_1802f4d45()
// status: ok


void FUN_1802f4d45(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


)B1802f4d45",
    "3b23deeb63d40fc1f734ddde5b68375cfd09a86cae065d7aabfafa0915e9b66b",
    R"F1802f4d45C()F1802f4d45C",
    R"F1802f4d45D()F1802f4d45D",
    R"F1802f4d45T()F1802f4d45T",
    R"F1802f4d45F(10: if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
14: return;)F1802f4d45F",
    R"F1802f4d45U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4d45U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4d45() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4d45", "FUN_1802f4d45");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x128);
    // body sha256: 3b23deeb63d40fc1f734ddde5b68375cfd09a86cae065d7aabfafa0915e9b66b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4d45;
}

// 0x1802f4d6e FUN_1802f4d6e
// source: re/dump/decompile/0x1802f4d6e_FUN_1802f4d6e.c
// size: 41 bytes; thunk: false
// body sha256: ba6318b075e428d1357a324285ee5281ac5de2de443b18a929e8b0acd38a405d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4d6e{
    "0x1802f4d6e",
    "FUN_1802f4d6e",
    R"F1802f4d6eS(undefined FUN_1802f4d6e())F1802f4d6eS",
    R"B1802f4d6e(// 0x1802f4d6e  FUN_1802f4d6e
// size=41 thunk=false
// signature: undefined FUN_1802f4d6e()
// status: ok


void FUN_1802f4d6e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);
  }
  return;
}


)B1802f4d6e",
    "ba6318b075e428d1357a324285ee5281ac5de2de443b18a929e8b0acd38a405d",
    R"F1802f4d6eC()F1802f4d6eC",
    R"F1802f4d6eD()F1802f4d6eD",
    R"F1802f4d6eT()F1802f4d6eT",
    R"F1802f4d6eF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f4d6eF",
    R"F1802f4d6eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4d6eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4d6e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4d6e", "FUN_1802f4d6e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x148);
    // body sha256: ba6318b075e428d1357a324285ee5281ac5de2de443b18a929e8b0acd38a405d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4d6e;
}

// 0x1802f4dbb FUN_1802f4dbb
// source: re/dump/decompile/0x1802f4dbb_FUN_1802f4dbb.c
// size: 46 bytes; thunk: false
// body sha256: c213cc032f3d18c8535f111b1570641ab3c97828c09de4c79b206a26efd39553
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4dbb{
    "0x1802f4dbb",
    "FUN_1802f4dbb",
    R"F1802f4dbbS(undefined FUN_1802f4dbb())F1802f4dbbS",
    R"B1802f4dbb(// 0x1802f4dbb  FUN_1802f4dbb
// size=46 thunk=false
// signature: undefined FUN_1802f4dbb()
// status: ok


void FUN_1802f4dbb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);
  }
  return;
}


)B1802f4dbb",
    "c213cc032f3d18c8535f111b1570641ab3c97828c09de4c79b206a26efd39553",
    R"F1802f4dbbC()F1802f4dbbC",
    R"F1802f4dbbD()F1802f4dbbD",
    R"F1802f4dbbT()F1802f4dbbT",
    R"F1802f4dbbF(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802f4dbbF",
    R"F1802f4dbbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4dbbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4dbb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4dbb", "FUN_1802f4dbb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x148);
    // body sha256: c213cc032f3d18c8535f111b1570641ab3c97828c09de4c79b206a26efd39553
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4dbb;
}

// 0x1802f4de9 FUN_1802f4de9
// source: re/dump/decompile/0x1802f4de9_FUN_1802f4de9.c
// size: 46 bytes; thunk: false
// body sha256: 3e4b79630c0083213c6b00524916c6c557ae04c0f53c3578866589bc1531424a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4de9{
    "0x1802f4de9",
    "FUN_1802f4de9",
    R"F1802f4de9S(undefined FUN_1802f4de9())F1802f4de9S",
    R"B1802f4de9(// 0x1802f4de9  FUN_1802f4de9
// size=46 thunk=false
// signature: undefined FUN_1802f4de9()
// status: ok


void FUN_1802f4de9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


)B1802f4de9",
    "3e4b79630c0083213c6b00524916c6c557ae04c0f53c3578866589bc1531424a",
    R"F1802f4de9C()F1802f4de9C",
    R"F1802f4de9D()F1802f4de9D",
    R"F1802f4de9T()F1802f4de9T",
    R"F1802f4de9F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802f4de9F",
    R"F1802f4de9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4de9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4de9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4de9", "FUN_1802f4de9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x168);
    // body sha256: 3e4b79630c0083213c6b00524916c6c557ae04c0f53c3578866589bc1531424a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4de9;
}

// 0x1802f4e3b FUN_1802f4e3b
// source: re/dump/decompile/0x1802f4e3b_FUN_1802f4e3b.c
// size: 46 bytes; thunk: false
// body sha256: 14b85f25e461840fa54be16ecb99435235ef4ee4349f1f1d0b3aa14dec02f5e1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4e3b{
    "0x1802f4e3b",
    "FUN_1802f4e3b",
    R"F1802f4e3bS(undefined FUN_1802f4e3b())F1802f4e3bS",
    R"B1802f4e3b(// 0x1802f4e3b  FUN_1802f4e3b
// size=46 thunk=false
// signature: undefined FUN_1802f4e3b()
// status: ok


void FUN_1802f4e3b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


)B1802f4e3b",
    "14b85f25e461840fa54be16ecb99435235ef4ee4349f1f1d0b3aa14dec02f5e1",
    R"F1802f4e3bC()F1802f4e3bC",
    R"F1802f4e3bD()F1802f4e3bD",
    R"F1802f4e3bT()F1802f4e3bT",
    R"F1802f4e3bF(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802f4e3bF",
    R"F1802f4e3bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4e3bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4e3b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4e3b", "FUN_1802f4e3b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x168);
    // body sha256: 14b85f25e461840fa54be16ecb99435235ef4ee4349f1f1d0b3aa14dec02f5e1
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4e3b;
}

}  // namespace sf::reconstructed
