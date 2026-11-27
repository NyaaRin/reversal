// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802fc026 FUN_1802fc026
// source: re/dump/decompile/0x1802fc026_FUN_1802fc026.c
// size: 38 bytes; thunk: false
// body sha256: db4ea2ba6e483e8657099db7fbbca56388232d96b8b2cb09447d21839aac3619
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc026{
    "0x1802fc026",
    "FUN_1802fc026",
    R"F1802fc026S(undefined FUN_1802fc026())F1802fc026S",
    R"B1802fc026(// 0x1802fc026  FUN_1802fc026
// size=38 thunk=false
// signature: undefined FUN_1802fc026()
// status: ok


void FUN_1802fc026(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802fc026",
    "db4ea2ba6e483e8657099db7fbbca56388232d96b8b2cb09447d21839aac3619",
    R"F1802fc026C()F1802fc026C",
    R"F1802fc026D()F1802fc026D",
    R"F1802fc026T()F1802fc026T",
    R"F1802fc026F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802fc026F",
    R"F1802fc026U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc026U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc026() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc026", "FUN_1802fc026");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x58, 0));
    // body sha256: db4ea2ba6e483e8657099db7fbbca56388232d96b8b2cb09447d21839aac3619
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc026;
}

// 0x1802fc088 FUN_1802fc088
// source: re/dump/decompile/0x1802fc088_FUN_1802fc088.c
// size: 29 bytes; thunk: false
// body sha256: a413057d31c6c9826ac58d72a48929fe4e425f1eaadd4515938fe745d4dca8d6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc088{
    "0x1802fc088",
    "FUN_1802fc088",
    R"F1802fc088S(undefined FUN_1802fc088())F1802fc088S",
    R"B1802fc088(// 0x1802fc088  FUN_1802fc088
// size=29 thunk=false
// signature: undefined FUN_1802fc088()
// status: ok


undefined8 FUN_1802fc088(void)

{
  return 0;
}


)B1802fc088",
    "a413057d31c6c9826ac58d72a48929fe4e425f1eaadd4515938fe745d4dca8d6",
    R"F1802fc088C()F1802fc088C",
    R"F1802fc088D()F1802fc088D",
    R"F1802fc088T()F1802fc088T",
    R"F1802fc088F(10: return 0;)F1802fc088F",
    R"F1802fc088U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc088U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc088() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc088", "FUN_1802fc088");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a413057d31c6c9826ac58d72a48929fe4e425f1eaadd4515938fe745d4dca8d6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fc088;
}

// 0x1802fc110 FUN_1802fc110
// source: re/dump/decompile/0x1802fc110_FUN_1802fc110.c
// size: 38 bytes; thunk: false
// body sha256: f015ef09eb1ef3538b7b7fa20ce2d549cc648ca5e5fd7f57dacd3fd75f9b4c9c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc110{
    "0x1802fc110",
    "FUN_1802fc110",
    R"F1802fc110S(undefined FUN_1802fc110())F1802fc110S",
    R"B1802fc110(// 0x1802fc110  FUN_1802fc110
// size=38 thunk=false
// signature: undefined FUN_1802fc110()
// status: ok


void FUN_1802fc110(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802fc110",
    "f015ef09eb1ef3538b7b7fa20ce2d549cc648ca5e5fd7f57dacd3fd75f9b4c9c",
    R"F1802fc110C()F1802fc110C",
    R"F1802fc110D()F1802fc110D",
    R"F1802fc110T()F1802fc110T",
    R"F1802fc110F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc110F",
    R"F1802fc110U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc110U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc110() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc110", "FUN_1802fc110");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x60, 0));
    // body sha256: f015ef09eb1ef3538b7b7fa20ce2d549cc648ca5e5fd7f57dacd3fd75f9b4c9c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc110;
}

// 0x1802fc150 FUN_1802fc150
// source: re/dump/decompile/0x1802fc150_FUN_1802fc150.c
// size: 38 bytes; thunk: false
// body sha256: 74af52bd3a86eb4b34670a0d9e6c41117f7da2bf41d4670fd7994e37b466e716
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc150{
    "0x1802fc150",
    "FUN_1802fc150",
    R"F1802fc150S(undefined FUN_1802fc150())F1802fc150S",
    R"B1802fc150(// 0x1802fc150  FUN_1802fc150
// size=38 thunk=false
// signature: undefined FUN_1802fc150()
// status: ok


void FUN_1802fc150(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802fc150",
    "74af52bd3a86eb4b34670a0d9e6c41117f7da2bf41d4670fd7994e37b466e716",
    R"F1802fc150C()F1802fc150C",
    R"F1802fc150D()F1802fc150D",
    R"F1802fc150T()F1802fc150T",
    R"F1802fc150F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc150F",
    R"F1802fc150U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc150() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc150", "FUN_1802fc150");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x40, 0));
    // body sha256: 74af52bd3a86eb4b34670a0d9e6c41117f7da2bf41d4670fd7994e37b466e716
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc150;
}

// 0x1802fc190 FUN_1802fc190
// source: re/dump/decompile/0x1802fc190_FUN_1802fc190.c
// size: 38 bytes; thunk: false
// body sha256: 3f7afd7d36d2bd55be988a4fdb8c7407244a613c786e4933b6b3809d370ec756
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc190{
    "0x1802fc190",
    "FUN_1802fc190",
    R"F1802fc190S(undefined FUN_1802fc190())F1802fc190S",
    R"B1802fc190(// 0x1802fc190  FUN_1802fc190
// size=38 thunk=false
// signature: undefined FUN_1802fc190()
// status: ok


void FUN_1802fc190(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x28);
  }
  return;
}


)B1802fc190",
    "3f7afd7d36d2bd55be988a4fdb8c7407244a613c786e4933b6b3809d370ec756",
    R"F1802fc190C(FUN_18021b0b0)F1802fc190C",
    R"F1802fc190D()F1802fc190D",
    R"F1802fc190T()F1802fc190T",
    R"F1802fc190F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc190F",
    R"F1802fc190U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc190() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc190", "FUN_1802fc190");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x28);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 3f7afd7d36d2bd55be988a4fdb8c7407244a613c786e4933b6b3809d370ec756
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc190;
}

// 0x1802fc1b6 FUN_1802fc1b6
// source: re/dump/decompile/0x1802fc1b6_FUN_1802fc1b6.c
// size: 29 bytes; thunk: false
// body sha256: 8f933ac5f25ecc980fd81a75bd8896c60dfed3f640fc8a52c382f83ac3e92553
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc1b6{
    "0x1802fc1b6",
    "FUN_1802fc1b6",
    R"F1802fc1b6S(undefined FUN_1802fc1b6())F1802fc1b6S",
    R"B1802fc1b6(// 0x1802fc1b6  FUN_1802fc1b6
// size=29 thunk=false
// signature: undefined FUN_1802fc1b6()
// status: ok


void FUN_1802fc1b6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fc1b6",
    "8f933ac5f25ecc980fd81a75bd8896c60dfed3f640fc8a52c382f83ac3e92553",
    R"F1802fc1b6C()F1802fc1b6C",
    R"F1802fc1b6D()F1802fc1b6D",
    R"F1802fc1b6T()F1802fc1b6T",
    R"F1802fc1b6F(11: return;)F1802fc1b6F",
    R"F1802fc1b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc1b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc1b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc1b6", "FUN_1802fc1b6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 8f933ac5f25ecc980fd81a75bd8896c60dfed3f640fc8a52c382f83ac3e92553
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc1b6;
}

// 0x1802fc1e0 FUN_1802fc1e0
// source: re/dump/decompile/0x1802fc1e0_FUN_1802fc1e0.c
// size: 38 bytes; thunk: false
// body sha256: 0f39464f20cc4c20e330eca89161168bb9a29bc2846167da8574e55cfb3946a4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc1e0{
    "0x1802fc1e0",
    "FUN_1802fc1e0",
    R"F1802fc1e0S(undefined FUN_1802fc1e0())F1802fc1e0S",
    R"B1802fc1e0(// 0x1802fc1e0  FUN_1802fc1e0
// size=38 thunk=false
// signature: undefined FUN_1802fc1e0()
// status: ok


void FUN_1802fc1e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b310(param_2 + 0x48);
  }
  return;
}


)B1802fc1e0",
    "0f39464f20cc4c20e330eca89161168bb9a29bc2846167da8574e55cfb3946a4",
    R"F1802fc1e0C(FUN_18021b310)F1802fc1e0C",
    R"F1802fc1e0D()F1802fc1e0D",
    R"F1802fc1e0T()F1802fc1e0T",
    R"F1802fc1e0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc1e0F",
    R"F1802fc1e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc1e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc1e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc1e0", "FUN_1802fc1e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b310", param_2 + 0x48);
    trace.call_target("FUN_18021b310", reinterpret_cast<const void*>(&image::FUN_18021b310));
    // body sha256: 0f39464f20cc4c20e330eca89161168bb9a29bc2846167da8574e55cfb3946a4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b310(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc1e0;
}

// 0x1802fc206 FUN_1802fc206
// source: re/dump/decompile/0x1802fc206_FUN_1802fc206.c
// size: 29 bytes; thunk: false
// body sha256: a567d51a62746c486d7e3c7cf241b8fce82ae520664505e4a318b3543344f5f4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc206{
    "0x1802fc206",
    "FUN_1802fc206",
    R"F1802fc206S(undefined FUN_1802fc206())F1802fc206S",
    R"B1802fc206(// 0x1802fc206  FUN_1802fc206
// size=29 thunk=false
// signature: undefined FUN_1802fc206()
// status: ok


void FUN_1802fc206(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}


)B1802fc206",
    "a567d51a62746c486d7e3c7cf241b8fce82ae520664505e4a318b3543344f5f4",
    R"F1802fc206C()F1802fc206C",
    R"F1802fc206D()F1802fc206D",
    R"F1802fc206T()F1802fc206T",
    R"F1802fc206F(11: return;)F1802fc206F",
    R"F1802fc206U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc206U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc206() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc206", "FUN_1802fc206");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x40));
    // body sha256: a567d51a62746c486d7e3c7cf241b8fce82ae520664505e4a318b3543344f5f4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x40));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc206;
}

// 0x1802fc270 FUN_1802fc270
// source: re/dump/decompile/0x1802fc270_FUN_1802fc270.c
// size: 38 bytes; thunk: false
// body sha256: 43af86e16c0bf14b4de32e7cc9b88f9bfb439d691e4b85c4844485b1c1009572
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc270{
    "0x1802fc270",
    "FUN_1802fc270",
    R"F1802fc270S(undefined FUN_1802fc270())F1802fc270S",
    R"B1802fc270(// 0x1802fc270  FUN_1802fc270
// size=38 thunk=false
// signature: undefined FUN_1802fc270()
// status: ok


void FUN_1802fc270(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b2b0(param_2 + 0x48);
  }
  return;
}


)B1802fc270",
    "43af86e16c0bf14b4de32e7cc9b88f9bfb439d691e4b85c4844485b1c1009572",
    R"F1802fc270C(FUN_18021b2b0)F1802fc270C",
    R"F1802fc270D()F1802fc270D",
    R"F1802fc270T()F1802fc270T",
    R"F1802fc270F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc270F",
    R"F1802fc270U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc270U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc270() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc270", "FUN_1802fc270");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b2b0", param_2 + 0x48);
    trace.call_target("FUN_18021b2b0", reinterpret_cast<const void*>(&image::FUN_18021b2b0));
    // body sha256: 43af86e16c0bf14b4de32e7cc9b88f9bfb439d691e4b85c4844485b1c1009572
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b2b0(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc270;
}

// 0x1802fc296 FUN_1802fc296
// source: re/dump/decompile/0x1802fc296_FUN_1802fc296.c
// size: 29 bytes; thunk: false
// body sha256: d00132d1d5e51f21851299dc52cc0297c13c2c93c497c7a923364c2230c4e7ed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc296{
    "0x1802fc296",
    "FUN_1802fc296",
    R"F1802fc296S(undefined FUN_1802fc296())F1802fc296S",
    R"B1802fc296(// 0x1802fc296  FUN_1802fc296
// size=29 thunk=false
// signature: undefined FUN_1802fc296()
// status: ok


void FUN_1802fc296(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc296",
    "d00132d1d5e51f21851299dc52cc0297c13c2c93c497c7a923364c2230c4e7ed",
    R"F1802fc296C()F1802fc296C",
    R"F1802fc296D()F1802fc296D",
    R"F1802fc296T()F1802fc296T",
    R"F1802fc296F(11: return;)F1802fc296F",
    R"F1802fc296U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc296U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc296() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc296", "FUN_1802fc296");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: d00132d1d5e51f21851299dc52cc0297c13c2c93c497c7a923364c2230c4e7ed
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc296;
}

// 0x1802fc2d0 FUN_1802fc2d0
// source: re/dump/decompile/0x1802fc2d0_FUN_1802fc2d0.c
// size: 38 bytes; thunk: false
// body sha256: db0d583e53570d59feb4b1e621391893705d675f6eda2106c6cb9fe8fec83d62
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc2d0{
    "0x1802fc2d0",
    "FUN_1802fc2d0",
    R"F1802fc2d0S(undefined FUN_1802fc2d0())F1802fc2d0S",
    R"B1802fc2d0(// 0x1802fc2d0  FUN_1802fc2d0
// size=38 thunk=false
// signature: undefined FUN_1802fc2d0()
// status: ok


void FUN_1802fc2d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b290(param_2 + 0x58);
  }
  return;
}


)B1802fc2d0",
    "db0d583e53570d59feb4b1e621391893705d675f6eda2106c6cb9fe8fec83d62",
    R"F1802fc2d0C(FUN_18021b290)F1802fc2d0C",
    R"F1802fc2d0D()F1802fc2d0D",
    R"F1802fc2d0T()F1802fc2d0T",
    R"F1802fc2d0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc2d0F",
    R"F1802fc2d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc2d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc2d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc2d0", "FUN_1802fc2d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b290", param_2 + 0x58);
    trace.call_target("FUN_18021b290", reinterpret_cast<const void*>(&image::FUN_18021b290));
    // body sha256: db0d583e53570d59feb4b1e621391893705d675f6eda2106c6cb9fe8fec83d62
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b290(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc2d0;
}

// 0x1802fc2f6 FUN_1802fc2f6
// source: re/dump/decompile/0x1802fc2f6_FUN_1802fc2f6.c
// size: 29 bytes; thunk: false
// body sha256: 4e42aee8265fd978c2fe3b888c3643da29f11ae5073d0723e108f927375f129a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc2f6{
    "0x1802fc2f6",
    "FUN_1802fc2f6",
    R"F1802fc2f6S(undefined FUN_1802fc2f6())F1802fc2f6S",
    R"B1802fc2f6(// 0x1802fc2f6  FUN_1802fc2f6
// size=29 thunk=false
// signature: undefined FUN_1802fc2f6()
// status: ok


void FUN_1802fc2f6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}


)B1802fc2f6",
    "4e42aee8265fd978c2fe3b888c3643da29f11ae5073d0723e108f927375f129a",
    R"F1802fc2f6C()F1802fc2f6C",
    R"F1802fc2f6D()F1802fc2f6D",
    R"F1802fc2f6T()F1802fc2f6T",
    R"F1802fc2f6F(11: return;)F1802fc2f6F",
    R"F1802fc2f6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc2f6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc2f6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc2f6", "FUN_1802fc2f6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x60));
    // body sha256: 4e42aee8265fd978c2fe3b888c3643da29f11ae5073d0723e108f927375f129a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x60));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc2f6;
}

// 0x1802fc320 FUN_1802fc320
// source: re/dump/decompile/0x1802fc320_FUN_1802fc320.c
// size: 38 bytes; thunk: false
// body sha256: 1040c9025ad057b5e06404f6453924caabf5a663ab65f5dc9e3aae27be475cad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc320{
    "0x1802fc320",
    "FUN_1802fc320",
    R"F1802fc320S(undefined FUN_1802fc320())F1802fc320S",
    R"B1802fc320(// 0x1802fc320  FUN_1802fc320
// size=38 thunk=false
// signature: undefined FUN_1802fc320()
// status: ok


void FUN_1802fc320(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b270(param_2 + 0x48);
  }
  return;
}


)B1802fc320",
    "1040c9025ad057b5e06404f6453924caabf5a663ab65f5dc9e3aae27be475cad",
    R"F1802fc320C(FUN_18021b270)F1802fc320C",
    R"F1802fc320D()F1802fc320D",
    R"F1802fc320T()F1802fc320T",
    R"F1802fc320F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc320F",
    R"F1802fc320U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc320U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc320() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc320", "FUN_1802fc320");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b270", param_2 + 0x48);
    trace.call_target("FUN_18021b270", reinterpret_cast<const void*>(&image::FUN_18021b270));
    // body sha256: 1040c9025ad057b5e06404f6453924caabf5a663ab65f5dc9e3aae27be475cad
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b270(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc320;
}

// 0x1802fc346 FUN_1802fc346
// source: re/dump/decompile/0x1802fc346_FUN_1802fc346.c
// size: 29 bytes; thunk: false
// body sha256: 1e82a4d02340b34ac58eb4495ab27d72c16d098d9213d00b09f0ccf52d8b9dff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc346{
    "0x1802fc346",
    "FUN_1802fc346",
    R"F1802fc346S(undefined FUN_1802fc346())F1802fc346S",
    R"B1802fc346(// 0x1802fc346  FUN_1802fc346
// size=29 thunk=false
// signature: undefined FUN_1802fc346()
// status: ok


void FUN_1802fc346(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc346",
    "1e82a4d02340b34ac58eb4495ab27d72c16d098d9213d00b09f0ccf52d8b9dff",
    R"F1802fc346C()F1802fc346C",
    R"F1802fc346D()F1802fc346D",
    R"F1802fc346T()F1802fc346T",
    R"F1802fc346F(11: return;)F1802fc346F",
    R"F1802fc346U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc346U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc346() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc346", "FUN_1802fc346");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: 1e82a4d02340b34ac58eb4495ab27d72c16d098d9213d00b09f0ccf52d8b9dff
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc346;
}

// 0x1802fc370 FUN_1802fc370
// source: re/dump/decompile/0x1802fc370_FUN_1802fc370.c
// size: 38 bytes; thunk: false
// body sha256: 6268cd1b78c7e57c2f5dd19f1955cf4f5bde84b3404aa08cdf9c2369c6868d9a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc370{
    "0x1802fc370",
    "FUN_1802fc370",
    R"F1802fc370S(undefined FUN_1802fc370())F1802fc370S",
    R"B1802fc370(// 0x1802fc370  FUN_1802fc370
// size=38 thunk=false
// signature: undefined FUN_1802fc370()
// status: ok


void FUN_1802fc370(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b250(param_2 + 0x48);
  }
  return;
}


)B1802fc370",
    "6268cd1b78c7e57c2f5dd19f1955cf4f5bde84b3404aa08cdf9c2369c6868d9a",
    R"F1802fc370C(FUN_18021b250)F1802fc370C",
    R"F1802fc370D()F1802fc370D",
    R"F1802fc370T()F1802fc370T",
    R"F1802fc370F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc370F",
    R"F1802fc370U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc370U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc370() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc370", "FUN_1802fc370");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b250", param_2 + 0x48);
    trace.call_target("FUN_18021b250", reinterpret_cast<const void*>(&image::FUN_18021b250));
    // body sha256: 6268cd1b78c7e57c2f5dd19f1955cf4f5bde84b3404aa08cdf9c2369c6868d9a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b250(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc370;
}

// 0x1802fc396 FUN_1802fc396
// source: re/dump/decompile/0x1802fc396_FUN_1802fc396.c
// size: 29 bytes; thunk: false
// body sha256: e873549c46f30a35af5991a663bd6eaea8f0efbdbc9f187ba0262e9cf22bf3de
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc396{
    "0x1802fc396",
    "FUN_1802fc396",
    R"F1802fc396S(undefined FUN_1802fc396())F1802fc396S",
    R"B1802fc396(// 0x1802fc396  FUN_1802fc396
// size=29 thunk=false
// signature: undefined FUN_1802fc396()
// status: ok


void FUN_1802fc396(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc396",
    "e873549c46f30a35af5991a663bd6eaea8f0efbdbc9f187ba0262e9cf22bf3de",
    R"F1802fc396C()F1802fc396C",
    R"F1802fc396D()F1802fc396D",
    R"F1802fc396T()F1802fc396T",
    R"F1802fc396F(11: return;)F1802fc396F",
    R"F1802fc396U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc396U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc396() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc396", "FUN_1802fc396");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: e873549c46f30a35af5991a663bd6eaea8f0efbdbc9f187ba0262e9cf22bf3de
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc396;
}

// 0x1802fc3c0 FUN_1802fc3c0
// source: re/dump/decompile/0x1802fc3c0_FUN_1802fc3c0.c
// size: 38 bytes; thunk: false
// body sha256: b8e5b676cffdb0494917b046e9d56c42448c4bb4670bc90c11209944db0cd6cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc3c0{
    "0x1802fc3c0",
    "FUN_1802fc3c0",
    R"F1802fc3c0S(undefined FUN_1802fc3c0())F1802fc3c0S",
    R"B1802fc3c0(// 0x1802fc3c0  FUN_1802fc3c0
// size=38 thunk=false
// signature: undefined FUN_1802fc3c0()
// status: ok


void FUN_1802fc3c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b230(param_2 + 0x48);
  }
  return;
}


)B1802fc3c0",
    "b8e5b676cffdb0494917b046e9d56c42448c4bb4670bc90c11209944db0cd6cd",
    R"F1802fc3c0C(FUN_18021b230)F1802fc3c0C",
    R"F1802fc3c0D()F1802fc3c0D",
    R"F1802fc3c0T()F1802fc3c0T",
    R"F1802fc3c0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc3c0F",
    R"F1802fc3c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc3c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc3c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc3c0", "FUN_1802fc3c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b230", param_2 + 0x48);
    trace.call_target("FUN_18021b230", reinterpret_cast<const void*>(&image::FUN_18021b230));
    // body sha256: b8e5b676cffdb0494917b046e9d56c42448c4bb4670bc90c11209944db0cd6cd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b230(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc3c0;
}

// 0x1802fc3e6 FUN_1802fc3e6
// source: re/dump/decompile/0x1802fc3e6_FUN_1802fc3e6.c
// size: 29 bytes; thunk: false
// body sha256: b385e6205591e18a8428338c9fdea239f4e68dc2a0f8b53cc7c30effad511d29
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc3e6{
    "0x1802fc3e6",
    "FUN_1802fc3e6",
    R"F1802fc3e6S(undefined FUN_1802fc3e6())F1802fc3e6S",
    R"B1802fc3e6(// 0x1802fc3e6  FUN_1802fc3e6
// size=29 thunk=false
// signature: undefined FUN_1802fc3e6()
// status: ok


void FUN_1802fc3e6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc3e6",
    "b385e6205591e18a8428338c9fdea239f4e68dc2a0f8b53cc7c30effad511d29",
    R"F1802fc3e6C()F1802fc3e6C",
    R"F1802fc3e6D()F1802fc3e6D",
    R"F1802fc3e6T()F1802fc3e6T",
    R"F1802fc3e6F(11: return;)F1802fc3e6F",
    R"F1802fc3e6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc3e6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc3e6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc3e6", "FUN_1802fc3e6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: b385e6205591e18a8428338c9fdea239f4e68dc2a0f8b53cc7c30effad511d29
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc3e6;
}

// 0x1802fc410 FUN_1802fc410
// source: re/dump/decompile/0x1802fc410_FUN_1802fc410.c
// size: 38 bytes; thunk: false
// body sha256: 794be2cd1542d755ff5d1e5d7e74bdf186c8f1701e67c54f5859de5dc26adb48
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc410{
    "0x1802fc410",
    "FUN_1802fc410",
    R"F1802fc410S(undefined FUN_1802fc410())F1802fc410S",
    R"B1802fc410(// 0x1802fc410  FUN_1802fc410
// size=38 thunk=false
// signature: undefined FUN_1802fc410()
// status: ok


void FUN_1802fc410(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b1d0(param_2 + 0x58);
  }
  return;
}


)B1802fc410",
    "794be2cd1542d755ff5d1e5d7e74bdf186c8f1701e67c54f5859de5dc26adb48",
    R"F1802fc410C(FUN_18021b1d0)F1802fc410C",
    R"F1802fc410D()F1802fc410D",
    R"F1802fc410T()F1802fc410T",
    R"F1802fc410F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc410F",
    R"F1802fc410U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc410() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc410", "FUN_1802fc410");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b1d0", param_2 + 0x58);
    trace.call_target("FUN_18021b1d0", reinterpret_cast<const void*>(&image::FUN_18021b1d0));
    // body sha256: 794be2cd1542d755ff5d1e5d7e74bdf186c8f1701e67c54f5859de5dc26adb48
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b1d0(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc410;
}

// 0x1802fc436 FUN_1802fc436
// source: re/dump/decompile/0x1802fc436_FUN_1802fc436.c
// size: 29 bytes; thunk: false
// body sha256: 31a12de0472b830c9602ba137e23a2ac80038e6a3b6d4338b10bccf11c21dcc8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc436{
    "0x1802fc436",
    "FUN_1802fc436",
    R"F1802fc436S(undefined FUN_1802fc436())F1802fc436S",
    R"B1802fc436(// 0x1802fc436  FUN_1802fc436
// size=29 thunk=false
// signature: undefined FUN_1802fc436()
// status: ok


void FUN_1802fc436(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}


)B1802fc436",
    "31a12de0472b830c9602ba137e23a2ac80038e6a3b6d4338b10bccf11c21dcc8",
    R"F1802fc436C()F1802fc436C",
    R"F1802fc436D()F1802fc436D",
    R"F1802fc436T()F1802fc436T",
    R"F1802fc436F(11: return;)F1802fc436F",
    R"F1802fc436U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc436U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc436() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc436", "FUN_1802fc436");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x60));
    // body sha256: 31a12de0472b830c9602ba137e23a2ac80038e6a3b6d4338b10bccf11c21dcc8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x60));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc436;
}

// 0x1802fc4a0 FUN_1802fc4a0
// source: re/dump/decompile/0x1802fc4a0_FUN_1802fc4a0.c
// size: 38 bytes; thunk: false
// body sha256: 5fba02cbefff5142584cadecb9c8dc7b6619de7ec89227bc5392b3cf5f5eafdf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc4a0{
    "0x1802fc4a0",
    "FUN_1802fc4a0",
    R"F1802fc4a0S(undefined FUN_1802fc4a0())F1802fc4a0S",
    R"B1802fc4a0(// 0x1802fc4a0  FUN_1802fc4a0
// size=38 thunk=false
// signature: undefined FUN_1802fc4a0()
// status: ok


void FUN_1802fc4a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x48);
  }
  return;
}


)B1802fc4a0",
    "5fba02cbefff5142584cadecb9c8dc7b6619de7ec89227bc5392b3cf5f5eafdf",
    R"F1802fc4a0C(FUN_18021b0b0)F1802fc4a0C",
    R"F1802fc4a0D()F1802fc4a0D",
    R"F1802fc4a0T()F1802fc4a0T",
    R"F1802fc4a0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc4a0F",
    R"F1802fc4a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc4a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc4a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc4a0", "FUN_1802fc4a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x48);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 5fba02cbefff5142584cadecb9c8dc7b6619de7ec89227bc5392b3cf5f5eafdf
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc4a0;
}

// 0x1802fc4c6 FUN_1802fc4c6
// source: re/dump/decompile/0x1802fc4c6_FUN_1802fc4c6.c
// size: 29 bytes; thunk: false
// body sha256: dd1530d865c5ddcd03324c2a08d916ac11dd43deea3862386bff1755a0e8b9fd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc4c6{
    "0x1802fc4c6",
    "FUN_1802fc4c6",
    R"F1802fc4c6S(undefined FUN_1802fc4c6())F1802fc4c6S",
    R"B1802fc4c6(// 0x1802fc4c6  FUN_1802fc4c6
// size=29 thunk=false
// signature: undefined FUN_1802fc4c6()
// status: ok


void FUN_1802fc4c6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc4c6",
    "dd1530d865c5ddcd03324c2a08d916ac11dd43deea3862386bff1755a0e8b9fd",
    R"F1802fc4c6C()F1802fc4c6C",
    R"F1802fc4c6D()F1802fc4c6D",
    R"F1802fc4c6T()F1802fc4c6T",
    R"F1802fc4c6F(11: return;)F1802fc4c6F",
    R"F1802fc4c6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc4c6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc4c6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc4c6", "FUN_1802fc4c6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: dd1530d865c5ddcd03324c2a08d916ac11dd43deea3862386bff1755a0e8b9fd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc4c6;
}

// 0x1802fc4f0 FUN_1802fc4f0
// source: re/dump/decompile/0x1802fc4f0_FUN_1802fc4f0.c
// size: 38 bytes; thunk: false
// body sha256: 5b6f885b747028d2e5bd1afb0b40cb0ebe21f1e77b1c7e006493c40979471232
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc4f0{
    "0x1802fc4f0",
    "FUN_1802fc4f0",
    R"F1802fc4f0S(undefined FUN_1802fc4f0())F1802fc4f0S",
    R"B1802fc4f0(// 0x1802fc4f0  FUN_1802fc4f0
// size=38 thunk=false
// signature: undefined FUN_1802fc4f0()
// status: ok


void FUN_1802fc4f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b1b0(param_2 + 0x48);
  }
  return;
}


)B1802fc4f0",
    "5b6f885b747028d2e5bd1afb0b40cb0ebe21f1e77b1c7e006493c40979471232",
    R"F1802fc4f0C(FUN_18021b1b0)F1802fc4f0C",
    R"F1802fc4f0D()F1802fc4f0D",
    R"F1802fc4f0T()F1802fc4f0T",
    R"F1802fc4f0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc4f0F",
    R"F1802fc4f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc4f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc4f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc4f0", "FUN_1802fc4f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b1b0", param_2 + 0x48);
    trace.call_target("FUN_18021b1b0", reinterpret_cast<const void*>(&image::FUN_18021b1b0));
    // body sha256: 5b6f885b747028d2e5bd1afb0b40cb0ebe21f1e77b1c7e006493c40979471232
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b1b0(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc4f0;
}

// 0x1802fc516 FUN_1802fc516
// source: re/dump/decompile/0x1802fc516_FUN_1802fc516.c
// size: 29 bytes; thunk: false
// body sha256: 4400d3a8371bfebc18ee63378d31fc706a1b7412fcfbf249b801d879f4c03de8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc516{
    "0x1802fc516",
    "FUN_1802fc516",
    R"F1802fc516S(undefined FUN_1802fc516())F1802fc516S",
    R"B1802fc516(// 0x1802fc516  FUN_1802fc516
// size=29 thunk=false
// signature: undefined FUN_1802fc516()
// status: ok


void FUN_1802fc516(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc516",
    "4400d3a8371bfebc18ee63378d31fc706a1b7412fcfbf249b801d879f4c03de8",
    R"F1802fc516C()F1802fc516C",
    R"F1802fc516D()F1802fc516D",
    R"F1802fc516T()F1802fc516T",
    R"F1802fc516F(11: return;)F1802fc516F",
    R"F1802fc516U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc516U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc516() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc516", "FUN_1802fc516");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: 4400d3a8371bfebc18ee63378d31fc706a1b7412fcfbf249b801d879f4c03de8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc516;
}

// 0x1802fc540 FUN_1802fc540
// source: re/dump/decompile/0x1802fc540_FUN_1802fc540.c
// size: 38 bytes; thunk: false
// body sha256: aac4d5f6255823ba2ade30556c7d2b598fc04ea2527c87108a51e45f62c541a9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc540{
    "0x1802fc540",
    "FUN_1802fc540",
    R"F1802fc540S(undefined FUN_1802fc540())F1802fc540S",
    R"B1802fc540(// 0x1802fc540  FUN_1802fc540
// size=38 thunk=false
// signature: undefined FUN_1802fc540()
// status: ok


void FUN_1802fc540(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b1b0(param_2 + 0x28);
  }
  return;
}


)B1802fc540",
    "aac4d5f6255823ba2ade30556c7d2b598fc04ea2527c87108a51e45f62c541a9",
    R"F1802fc540C(FUN_18021b1b0)F1802fc540C",
    R"F1802fc540D()F1802fc540D",
    R"F1802fc540T()F1802fc540T",
    R"F1802fc540F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc540F",
    R"F1802fc540U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc540() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc540", "FUN_1802fc540");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b1b0", param_2 + 0x28);
    trace.call_target("FUN_18021b1b0", reinterpret_cast<const void*>(&image::FUN_18021b1b0));
    // body sha256: aac4d5f6255823ba2ade30556c7d2b598fc04ea2527c87108a51e45f62c541a9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b1b0(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc540;
}

// 0x1802fc566 FUN_1802fc566
// source: re/dump/decompile/0x1802fc566_FUN_1802fc566.c
// size: 29 bytes; thunk: false
// body sha256: b6692f268de367f98765651da67c8f762859c32e2f4eb260bc1590b68c511144
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc566{
    "0x1802fc566",
    "FUN_1802fc566",
    R"F1802fc566S(undefined FUN_1802fc566())F1802fc566S",
    R"B1802fc566(// 0x1802fc566  FUN_1802fc566
// size=29 thunk=false
// signature: undefined FUN_1802fc566()
// status: ok


void FUN_1802fc566(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fc566",
    "b6692f268de367f98765651da67c8f762859c32e2f4eb260bc1590b68c511144",
    R"F1802fc566C()F1802fc566C",
    R"F1802fc566D()F1802fc566D",
    R"F1802fc566T()F1802fc566T",
    R"F1802fc566F(11: return;)F1802fc566F",
    R"F1802fc566U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc566U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc566() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc566", "FUN_1802fc566");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: b6692f268de367f98765651da67c8f762859c32e2f4eb260bc1590b68c511144
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc566;
}

// 0x1802fc590 FUN_1802fc590
// source: re/dump/decompile/0x1802fc590_FUN_1802fc590.c
// size: 38 bytes; thunk: false
// body sha256: 62d9ede83a7aa8858318e1b38656f97e87023921af7c0a662913d1e7fb800a98
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc590{
    "0x1802fc590",
    "FUN_1802fc590",
    R"F1802fc590S(undefined FUN_1802fc590())F1802fc590S",
    R"B1802fc590(// 0x1802fc590  FUN_1802fc590
// size=38 thunk=false
// signature: undefined FUN_1802fc590()
// status: ok


void FUN_1802fc590(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b170(param_2 + 0x48);
  }
  return;
}


)B1802fc590",
    "62d9ede83a7aa8858318e1b38656f97e87023921af7c0a662913d1e7fb800a98",
    R"F1802fc590C(FUN_18021b170)F1802fc590C",
    R"F1802fc590D()F1802fc590D",
    R"F1802fc590T()F1802fc590T",
    R"F1802fc590F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc590F",
    R"F1802fc590U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc590() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc590", "FUN_1802fc590");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b170", param_2 + 0x48);
    trace.call_target("FUN_18021b170", reinterpret_cast<const void*>(&image::FUN_18021b170));
    // body sha256: 62d9ede83a7aa8858318e1b38656f97e87023921af7c0a662913d1e7fb800a98
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b170(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc590;
}

// 0x1802fc5b6 FUN_1802fc5b6
// source: re/dump/decompile/0x1802fc5b6_FUN_1802fc5b6.c
// size: 29 bytes; thunk: false
// body sha256: d3809fecd7ad3364b406528fe4dbc64fa6ead83dc9c65c3dc7f55175b52aa5ed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc5b6{
    "0x1802fc5b6",
    "FUN_1802fc5b6",
    R"F1802fc5b6S(undefined FUN_1802fc5b6())F1802fc5b6S",
    R"B1802fc5b6(// 0x1802fc5b6  FUN_1802fc5b6
// size=29 thunk=false
// signature: undefined FUN_1802fc5b6()
// status: ok


void FUN_1802fc5b6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc5b6",
    "d3809fecd7ad3364b406528fe4dbc64fa6ead83dc9c65c3dc7f55175b52aa5ed",
    R"F1802fc5b6C()F1802fc5b6C",
    R"F1802fc5b6D()F1802fc5b6D",
    R"F1802fc5b6T()F1802fc5b6T",
    R"F1802fc5b6F(11: return;)F1802fc5b6F",
    R"F1802fc5b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc5b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc5b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc5b6", "FUN_1802fc5b6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: d3809fecd7ad3364b406528fe4dbc64fa6ead83dc9c65c3dc7f55175b52aa5ed
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc5b6;
}

// 0x1802fc600 FUN_1802fc600
// source: re/dump/decompile/0x1802fc600_FUN_1802fc600.c
// size: 38 bytes; thunk: false
// body sha256: 96c81f1f21100560b2186997ff112a2b352bb6b3120b671bca7735738543dadc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc600{
    "0x1802fc600",
    "FUN_1802fc600",
    R"F1802fc600S(undefined FUN_1802fc600())F1802fc600S",
    R"B1802fc600(// 0x1802fc600  FUN_1802fc600
// size=38 thunk=false
// signature: undefined FUN_1802fc600()
// status: ok


void FUN_1802fc600(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b150(param_2 + 0x48);
  }
  return;
}


)B1802fc600",
    "96c81f1f21100560b2186997ff112a2b352bb6b3120b671bca7735738543dadc",
    R"F1802fc600C(FUN_18021b150)F1802fc600C",
    R"F1802fc600D()F1802fc600D",
    R"F1802fc600T()F1802fc600T",
    R"F1802fc600F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc600F",
    R"F1802fc600U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc600() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc600", "FUN_1802fc600");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b150", param_2 + 0x48);
    trace.call_target("FUN_18021b150", reinterpret_cast<const void*>(&image::FUN_18021b150));
    // body sha256: 96c81f1f21100560b2186997ff112a2b352bb6b3120b671bca7735738543dadc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b150(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc600;
}

// 0x1802fc626 FUN_1802fc626
// source: re/dump/decompile/0x1802fc626_FUN_1802fc626.c
// size: 29 bytes; thunk: false
// body sha256: f2a9404f3abe5ba7d60631bd0e5db965dd13b595a579fffeb7be540557ed7781
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc626{
    "0x1802fc626",
    "FUN_1802fc626",
    R"F1802fc626S(undefined FUN_1802fc626())F1802fc626S",
    R"B1802fc626(// 0x1802fc626  FUN_1802fc626
// size=29 thunk=false
// signature: undefined FUN_1802fc626()
// status: ok


void FUN_1802fc626(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc626",
    "f2a9404f3abe5ba7d60631bd0e5db965dd13b595a579fffeb7be540557ed7781",
    R"F1802fc626C()F1802fc626C",
    R"F1802fc626D()F1802fc626D",
    R"F1802fc626T()F1802fc626T",
    R"F1802fc626F(11: return;)F1802fc626F",
    R"F1802fc626U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc626U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc626() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc626", "FUN_1802fc626");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: f2a9404f3abe5ba7d60631bd0e5db965dd13b595a579fffeb7be540557ed7781
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc626;
}

// 0x1802fc650 FUN_1802fc650
// source: re/dump/decompile/0x1802fc650_FUN_1802fc650.c
// size: 38 bytes; thunk: false
// body sha256: 72c0a87b70c43473ea270efb2bf8f634e4121cad9be3990b0919a6bd20b18923
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc650{
    "0x1802fc650",
    "FUN_1802fc650",
    R"F1802fc650S(undefined FUN_1802fc650())F1802fc650S",
    R"B1802fc650(// 0x1802fc650  FUN_1802fc650
// size=38 thunk=false
// signature: undefined FUN_1802fc650()
// status: ok


void FUN_1802fc650(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0d0(param_2 + 0x48);
  }
  return;
}


)B1802fc650",
    "72c0a87b70c43473ea270efb2bf8f634e4121cad9be3990b0919a6bd20b18923",
    R"F1802fc650C(FUN_18021b0d0)F1802fc650C",
    R"F1802fc650D()F1802fc650D",
    R"F1802fc650T()F1802fc650T",
    R"F1802fc650F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc650F",
    R"F1802fc650U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc650U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc650() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc650", "FUN_1802fc650");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0d0", param_2 + 0x48);
    trace.call_target("FUN_18021b0d0", reinterpret_cast<const void*>(&image::FUN_18021b0d0));
    // body sha256: 72c0a87b70c43473ea270efb2bf8f634e4121cad9be3990b0919a6bd20b18923
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18021b0d0(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc650;
}

// 0x1802fc676 FUN_1802fc676
// source: re/dump/decompile/0x1802fc676_FUN_1802fc676.c
// size: 29 bytes; thunk: false
// body sha256: 359f1cc409bf03a6f86ca8326a76cb736afa8dfa3bb47e4f654aa3030aea3b7d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc676{
    "0x1802fc676",
    "FUN_1802fc676",
    R"F1802fc676S(undefined FUN_1802fc676())F1802fc676S",
    R"B1802fc676(// 0x1802fc676  FUN_1802fc676
// size=29 thunk=false
// signature: undefined FUN_1802fc676()
// status: ok


void FUN_1802fc676(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}


)B1802fc676",
    "359f1cc409bf03a6f86ca8326a76cb736afa8dfa3bb47e4f654aa3030aea3b7d",
    R"F1802fc676C()F1802fc676C",
    R"F1802fc676D()F1802fc676D",
    R"F1802fc676T()F1802fc676T",
    R"F1802fc676F(11: return;)F1802fc676F",
    R"F1802fc676U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc676U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc676() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc676", "FUN_1802fc676");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x50));
    // body sha256: 359f1cc409bf03a6f86ca8326a76cb736afa8dfa3bb47e4f654aa3030aea3b7d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x50));");
            trace.statement("return;");
        }
    return kFunction_0x1802fc676;
}

// 0x1802fc6b8 FUN_1802fc6b8
// source: re/dump/decompile/0x1802fc6b8_FUN_1802fc6b8.c
// size: 29 bytes; thunk: false
// body sha256: 43c9f171e5475f408ca6eb11e76963dc59aa512dc114bc958a8811c980dbafa5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc6b8{
    "0x1802fc6b8",
    "FUN_1802fc6b8",
    R"F1802fc6b8S(undefined FUN_1802fc6b8())F1802fc6b8S",
    R"B1802fc6b8(// 0x1802fc6b8  FUN_1802fc6b8
// size=29 thunk=false
// signature: undefined FUN_1802fc6b8()
// status: ok


undefined8 FUN_1802fc6b8(void)

{
  return 0;
}


)B1802fc6b8",
    "43c9f171e5475f408ca6eb11e76963dc59aa512dc114bc958a8811c980dbafa5",
    R"F1802fc6b8C()F1802fc6b8C",
    R"F1802fc6b8D()F1802fc6b8D",
    R"F1802fc6b8T()F1802fc6b8T",
    R"F1802fc6b8F(10: return 0;)F1802fc6b8F",
    R"F1802fc6b8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc6b8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc6b8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc6b8", "FUN_1802fc6b8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 43c9f171e5475f408ca6eb11e76963dc59aa512dc114bc958a8811c980dbafa5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fc6b8;
}

// 0x1802fc718 FUN_1802fc718
// source: re/dump/decompile/0x1802fc718_FUN_1802fc718.c
// size: 61 bytes; thunk: false
// body sha256: 25ff56db8e2f463226fb1b3942ab36af81482de7c88fe64a78389fb6e8d975d1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc718{
    "0x1802fc718",
    "FUN_1802fc718",
    R"F1802fc718S(undefined FUN_1802fc718())F1802fc718S",
    R"B1802fc718(// 0x1802fc718  FUN_1802fc718
// size=61 thunk=false
// signature: undefined FUN_1802fc718()
// status: ok


undefined8 FUN_1802fc718(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4) +
             (longlong)*(longlong **)(param_2 + 0x80)),4,true);
  return 0;
}


)B1802fc718",
    "25ff56db8e2f463226fb1b3942ab36af81482de7c88fe64a78389fb6e8d975d1",
    R"F1802fc718C()F1802fc718C",
    R"F1802fc718D()F1802fc718D",
    R"F1802fc718T()F1802fc718T",
    R"F1802fc718F(14: return 0;)F1802fc718F",
    R"F1802fc718U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc718U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc718() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc718", "FUN_1802fc718");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 25ff56db8e2f463226fb1b3942ab36af81482de7c88fe64a78389fb6e8d975d1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("std::basic_ios<char,std::char_traits<char>_>::setstate");
            trace.statement("((basic_ios<char,std::char_traits<char>_> *)");
            trace.statement("((longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4) +");
            trace.statement("(longlong)*(longlong **)(param_2 + 0x80)),4,true);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fc718;
}

// 0x1802fc77c FUN_1802fc77c
// source: re/dump/decompile/0x1802fc77c_FUN_1802fc77c.c
// size: 29 bytes; thunk: false
// body sha256: 1abd44676802f83fd7f554bf9038663246904a44ff61df61632642b01aaafe04
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc77c{
    "0x1802fc77c",
    "FUN_1802fc77c",
    R"F1802fc77cS(undefined FUN_1802fc77c())F1802fc77cS",
    R"B1802fc77c(// 0x1802fc77c  FUN_1802fc77c
// size=29 thunk=false
// signature: undefined FUN_1802fc77c()
// status: ok


undefined8 FUN_1802fc77c(void)

{
  return 0;
}


)B1802fc77c",
    "1abd44676802f83fd7f554bf9038663246904a44ff61df61632642b01aaafe04",
    R"F1802fc77cC()F1802fc77cC",
    R"F1802fc77cD()F1802fc77cD",
    R"F1802fc77cT()F1802fc77cT",
    R"F1802fc77cF(10: return 0;)F1802fc77cF",
    R"F1802fc77cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc77cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc77c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc77c", "FUN_1802fc77c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1abd44676802f83fd7f554bf9038663246904a44ff61df61632642b01aaafe04
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fc77c;
}

// 0x1802fc7a0 FUN_1802fc7a0
// source: re/dump/decompile/0x1802fc7a0_FUN_1802fc7a0.c
// size: 29 bytes; thunk: false
// body sha256: 5b8d73c8f1df9572f879c1958254ad8d6cd836fb597ff11bc5e9c60c240a44c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc7a0{
    "0x1802fc7a0",
    "FUN_1802fc7a0",
    R"F1802fc7a0S(undefined FUN_1802fc7a0())F1802fc7a0S",
    R"B1802fc7a0(// 0x1802fc7a0  FUN_1802fc7a0
// size=29 thunk=false
// signature: undefined FUN_1802fc7a0()
// status: ok


undefined8 FUN_1802fc7a0(void)

{
  return 0;
}


)B1802fc7a0",
    "5b8d73c8f1df9572f879c1958254ad8d6cd836fb597ff11bc5e9c60c240a44c4",
    R"F1802fc7a0C()F1802fc7a0C",
    R"F1802fc7a0D()F1802fc7a0D",
    R"F1802fc7a0T()F1802fc7a0T",
    R"F1802fc7a0F(10: return 0;)F1802fc7a0F",
    R"F1802fc7a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc7a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc7a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc7a0", "FUN_1802fc7a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5b8d73c8f1df9572f879c1958254ad8d6cd836fb597ff11bc5e9c60c240a44c4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fc7a0;
}

// 0x1802fc874 FUN_1802fc874
// source: re/dump/decompile/0x1802fc874_FUN_1802fc874.c
// size: 58 bytes; thunk: false
// body sha256: 0e4c195aa5a5a35f247ba5fb233a36e86d8e0bcc672e867b85096a92466197c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc874{
    "0x1802fc874",
    "FUN_1802fc874",
    R"F1802fc874S(undefined FUN_1802fc874())F1802fc874S",
    R"B1802fc874(// 0x1802fc874  FUN_1802fc874
// size=58 thunk=false
// signature: undefined FUN_1802fc874()
// status: ok


undefined8 FUN_1802fc874(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x30) + 4) +
             (longlong)*(longlong **)(param_2 + 0x30)),4,true);
  return 0;
}


)B1802fc874",
    "0e4c195aa5a5a35f247ba5fb233a36e86d8e0bcc672e867b85096a92466197c8",
    R"F1802fc874C()F1802fc874C",
    R"F1802fc874D()F1802fc874D",
    R"F1802fc874T()F1802fc874T",
    R"F1802fc874F(14: return 0;)F1802fc874F",
    R"F1802fc874U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc874U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc874() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc874", "FUN_1802fc874");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0e4c195aa5a5a35f247ba5fb233a36e86d8e0bcc672e867b85096a92466197c8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("std::basic_ios<char,std::char_traits<char>_>::setstate");
            trace.statement("((basic_ios<char,std::char_traits<char>_> *)");
            trace.statement("((longlong)*(int *)(**(longlong **)(param_2 + 0x30) + 4) +");
            trace.statement("(longlong)*(longlong **)(param_2 + 0x30)),4,true);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fc874;
}

// 0x1802fcd30 FUN_1802fcd30
// source: re/dump/decompile/0x1802fcd30_FUN_1802fcd30.c
// size: 38 bytes; thunk: false
// body sha256: 3543499af0b4275bfec0a00b8487e0dd422ac8b4c28cd57ee025dcf171e1e1d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fcd30{
    "0x1802fcd30",
    "FUN_1802fcd30",
    R"F1802fcd30S(undefined FUN_1802fcd30())F1802fcd30S",
    R"B1802fcd30(// 0x1802fcd30  FUN_1802fcd30
// size=38 thunk=false
// signature: undefined FUN_1802fcd30()
// status: ok


void FUN_1802fcd30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802fcd30",
    "3543499af0b4275bfec0a00b8487e0dd422ac8b4c28cd57ee025dcf171e1e1d2",
    R"F1802fcd30C()F1802fcd30C",
    R"F1802fcd30D()F1802fcd30D",
    R"F1802fcd30T()F1802fcd30T",
    R"F1802fcd30F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802fcd30F",
    R"F1802fcd30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fcd30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fcd30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fcd30", "FUN_1802fcd30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 3543499af0b4275bfec0a00b8487e0dd422ac8b4c28cd57ee025dcf171e1e1d2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fcd30;
}

// 0x1802fcd70 FUN_1802fcd70
// source: re/dump/decompile/0x1802fcd70_FUN_1802fcd70.c
// size: 46 bytes; thunk: false
// body sha256: 735543005fb4c8a7f24f73cb91361b31f084c47b37631c8388ad77eb2bc28608
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fcd70{
    "0x1802fcd70",
    "FUN_1802fcd70",
    R"F1802fcd70S(undefined FUN_1802fcd70())F1802fcd70S",
    R"B1802fcd70(// 0x1802fcd70  FUN_1802fcd70
// size=46 thunk=false
// signature: undefined FUN_1802fcd70()
// status: ok


void FUN_1802fcd70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x90));
  }
  return;
}


)B1802fcd70",
    "735543005fb4c8a7f24f73cb91361b31f084c47b37631c8388ad77eb2bc28608",
    R"F1802fcd70C()F1802fcd70C",
    R"F1802fcd70D()F1802fcd70D",
    R"F1802fcd70T()F1802fcd70T",
    R"F1802fcd70F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
15: return;)F1802fcd70F",
    R"F1802fcd70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fcd70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fcd70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fcd70", "FUN_1802fcd70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 735543005fb4c8a7f24f73cb91361b31f084c47b37631c8388ad77eb2bc28608
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x90));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fcd70;
}

// 0x1802fcea8 FUN_1802fcea8
// source: re/dump/decompile/0x1802fcea8_FUN_1802fcea8.c
// size: 58 bytes; thunk: false
// body sha256: a6a379287dae81d105b9a649fff29d409d074f56d3e6282784dac3bf64b14d33
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fcea8{
    "0x1802fcea8",
    "FUN_1802fcea8",
    R"F1802fcea8S(undefined FUN_1802fcea8())F1802fcea8S",
    R"B1802fcea8(// 0x1802fcea8  FUN_1802fcea8
// size=58 thunk=false
// signature: undefined FUN_1802fcea8()
// status: ok


undefined8 FUN_1802fcea8(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return 0;
}


)B1802fcea8",
    "a6a379287dae81d105b9a649fff29d409d074f56d3e6282784dac3bf64b14d33",
    R"F1802fcea8C()F1802fcea8C",
    R"F1802fcea8D()F1802fcea8D",
    R"F1802fcea8T()F1802fcea8T",
    R"F1802fcea8F(14: return 0;)F1802fcea8F",
    R"F1802fcea8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fcea8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fcea8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fcea8", "FUN_1802fcea8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a6a379287dae81d105b9a649fff29d409d074f56d3e6282784dac3bf64b14d33
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("std::basic_ios<char,std::char_traits<char>_>::setstate");
            trace.statement("((basic_ios<char,std::char_traits<char>_> *)");
            trace.statement("((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +");
            trace.statement("(longlong)*(longlong **)(param_2 + 0x70)),4,true);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fcea8;
}

// 0x1802fd178 FUN_1802fd178
// source: re/dump/decompile/0x1802fd178_FUN_1802fd178.c
// size: 152 bytes; thunk: false
// body sha256: cfa7e841aa7ebca8073fc2782b99b1a4b16c18b01e5e43f035c582b3c22c7adc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd178{
    "0x1802fd178",
    "FUN_1802fd178",
    R"F1802fd178S(undefined FUN_1802fd178())F1802fd178S",
    R"B1802fd178(// 0x1802fd178  FUN_1802fd178
// size=152 thunk=false
// signature: undefined FUN_1802fd178()
// status: ok


void FUN_1802fd178(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x168);
  *(longlong *)(param_2 + 0x48) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_2 + 0x58) = lVar3 * 0x98 + lVar1;
  FUN_180220190(lVar3 * 0x98 + lVar1,lVar3 * 0x130 + lVar1,lVar1);
  *(undefined8 *)(param_2 + 0x40) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  FUN_180220200(lVar3 * 0x130 + lVar1,*puVar4,lVar3 * 0x98 + lVar1);
  FUN_180217fc0();
  *puVar4 = uVar2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


)B1802fd178",
    "cfa7e841aa7ebca8073fc2782b99b1a4b16c18b01e5e43f035c582b3c22c7adc",
    R"F1802fd178C(FUN_180217fc0
FUN_180220190
FUN_180220200)F1802fd178C",
    R"F1802fd178D()F1802fd178D",
    R"F1802fd178T()F1802fd178T",
    R"F1802fd178F(linear body (no explicit branch keyword found))F1802fd178F",
    R"F1802fd178U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd178U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd178() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd178", "FUN_1802fd178");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::uint64_t uVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t * puVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: (void *)0x0,(ThrowInfo *)0x0
    trace.call_arguments("FUN_180220190", lVar3 * 0x98 + lVar1, lVar3 * 0x130 + lVar1, lVar1);
    trace.call_arguments("FUN_180220200", lVar3 * 0x130 + lVar1, *puVar4, lVar3 * 0x98 + lVar1);
    trace.call_arguments("FUN_180217fc0");
    trace.call_target("FUN_180217fc0", reinterpret_cast<const void*>(&image::FUN_180217fc0));
    trace.call_target("FUN_180220190", reinterpret_cast<const void*>(&image::FUN_180220190));
    trace.call_target("FUN_180220200", reinterpret_cast<const void*>(&image::FUN_180220200));
    // body sha256: cfa7e841aa7ebca8073fc2782b99b1a4b16c18b01e5e43f035c582b3c22c7adc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("undefined8 uVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 *puVar4;");
            trace.statement("*(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);");
            trace.statement("lVar1 = *(longlong *)(param_2 + 0x168);");
            trace.statement("*(longlong *)(param_2 + 0x48) = lVar1;");
            trace.statement("uVar2 = *(undefined8 *)(param_2 + 0x60);");
            trace.statement("*(undefined8 *)(param_2 + 0x50) = uVar2;");
            trace.statement("lVar3 = *(longlong *)(param_2 + 0x30);");
            trace.statement("*(longlong *)(param_2 + 0x58) = lVar3 * 0x98 + lVar1;");
            trace.statement("FUN_180220190(lVar3 * 0x98 + lVar1,lVar3 * 0x130 + lVar1,lVar1);");
            trace.statement("*(undefined8 *)(param_2 + 0x40) = 0;");
            trace.statement("puVar4 = *(undefined8 **)(param_2 + 0x20);");
            trace.statement("FUN_180220200(lVar3 * 0x130 + lVar1,*puVar4,lVar3 * 0x98 + lVar1);");
            trace.statement("FUN_180217fc0();");
            trace.statement("*puVar4 = uVar2;");
            trace.statement("_CxxThrowException((void *)0x0,(ThrowInfo *)0x0);");
        }
    return kFunction_0x1802fd178;
}

// 0x1802fd229 FUN_1802fd229
// source: re/dump/decompile/0x1802fd229_FUN_1802fd229.c
// size: 97 bytes; thunk: false
// body sha256: f325f8ab90232384eda37d45981361ce9a305e46435aab3ade6df6913d959065
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd229{
    "0x1802fd229",
    "FUN_1802fd229",
    R"F1802fd229S(undefined FUN_1802fd229())F1802fd229S",
    R"B1802fd229(// 0x1802fd229  FUN_1802fd229
// size=97 thunk=false
// signature: undefined FUN_1802fd229()
// status: ok


void FUN_1802fd229(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x168);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x30);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  FUN_180220190(*(undefined8 *)(param_2 + 0x30),*puVar2);
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_180217fc0();
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


)B1802fd229",
    "f325f8ab90232384eda37d45981361ce9a305e46435aab3ade6df6913d959065",
    R"F1802fd229C(FUN_180217fc0
FUN_180220190)F1802fd229C",
    R"F1802fd229D()F1802fd229D",
    R"F1802fd229T()F1802fd229T",
    R"F1802fd229F(linear body (no explicit branch keyword found))F1802fd229F",
    R"F1802fd229U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd229U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd229() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd229", "FUN_1802fd229");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::uint64_t * puVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: (void *)0x0,(ThrowInfo *)0x0
    trace.call_arguments("FUN_180220190", load_at<std::uint64_t>(param_2 + 0x30, 0), *puVar2);
    trace.call_arguments("FUN_180217fc0");
    trace.call_target("FUN_180217fc0", reinterpret_cast<const void*>(&image::FUN_180217fc0));
    trace.call_target("FUN_180220190", reinterpret_cast<const void*>(&image::FUN_180220190));
    // body sha256: f325f8ab90232384eda37d45981361ce9a305e46435aab3ade6df6913d959065
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("undefined8 *puVar2;");
            trace.statement("*(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x168);");
            trace.statement("uVar1 = *(undefined8 *)(param_2 + 0x60);");
            trace.statement("*(undefined8 *)(param_2 + 0x50) = uVar1;");
            trace.statement("*(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x30);");
            trace.statement("puVar2 = *(undefined8 **)(param_2 + 0x20);");
            trace.statement("FUN_180220190(*(undefined8 *)(param_2 + 0x30),*puVar2);");
            trace.statement("*(undefined8 *)(param_2 + 0x40) = 0;");
            trace.statement("FUN_180217fc0();");
            trace.statement("*puVar2 = uVar1;");
            trace.statement("_CxxThrowException((void *)0x0,(ThrowInfo *)0x0);");
        }
    return kFunction_0x1802fd229;
}

// 0x1802fd35c FUN_1802fd35c
// source: re/dump/decompile/0x1802fd35c_FUN_1802fd35c.c
// size: 111 bytes; thunk: false
// body sha256: 40047a40b0dd63438b964bcfe4151d911c1b13b4d4d1cf16649db4c65c4f6451
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd35c{
    "0x1802fd35c",
    "FUN_1802fd35c",
    R"F1802fd35cS(undefined FUN_1802fd35c())F1802fd35cS",
    R"B1802fd35c(// 0x1802fd35c  FUN_1802fd35c
// size=111 thunk=false
// signature: undefined FUN_1802fd35c()
// status: ok


void FUN_1802fd35c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x108);
  *(longlong *)(param_2 + 0x50) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  lVar3 = *(longlong *)(param_2 + 0x38);
  *(longlong *)(param_2 + 0x60) = lVar3 + lVar1;
  FUN_180220bc0(lVar3 + lVar1,lVar1 + lVar3 * 2,lVar1);
  *(undefined8 *)(param_2 + 0x48) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  FUN_180220c00(lVar1 + lVar3 * 2,*puVar4,lVar3 + lVar1);
  *puVar4 = uVar2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


)B1802fd35c",
    "40047a40b0dd63438b964bcfe4151d911c1b13b4d4d1cf16649db4c65c4f6451",
    R"F1802fd35cC(FUN_180220bc0
FUN_180220c00)F1802fd35cC",
    R"F1802fd35cD()F1802fd35cD",
    R"F1802fd35cT()F1802fd35cT",
    R"F1802fd35cF(linear body (no explicit branch keyword found))F1802fd35cF",
    R"F1802fd35cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd35cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd35c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd35c", "FUN_1802fd35c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::uint64_t uVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t * puVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: (void *)0x0,(ThrowInfo *)0x0
    trace.call_arguments("FUN_180220bc0", lVar3 + lVar1, lVar1 + lVar3 * 2, lVar1);
    trace.call_arguments("FUN_180220c00", lVar1 + lVar3 * 2, *puVar4, lVar3 + lVar1);
    trace.call_target("FUN_180220bc0", reinterpret_cast<const void*>(&image::FUN_180220bc0));
    trace.call_target("FUN_180220c00", reinterpret_cast<const void*>(&image::FUN_180220c00));
    // body sha256: 40047a40b0dd63438b964bcfe4151d911c1b13b4d4d1cf16649db4c65c4f6451
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("undefined8 uVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 *puVar4;");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x20);");
            trace.statement("lVar1 = *(longlong *)(param_2 + 0x108);");
            trace.statement("*(longlong *)(param_2 + 0x50) = lVar1;");
            trace.statement("uVar2 = *(undefined8 *)(param_2 + 0x28);");
            trace.statement("*(undefined8 *)(param_2 + 0x58) = uVar2;");
            trace.statement("lVar3 = *(longlong *)(param_2 + 0x38);");
            trace.statement("*(longlong *)(param_2 + 0x60) = lVar3 + lVar1;");
            trace.statement("FUN_180220bc0(lVar3 + lVar1,lVar1 + lVar3 * 2,lVar1);");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = 0;");
            trace.statement("puVar4 = *(undefined8 **)(param_2 + 0x30);");
            trace.statement("FUN_180220c00(lVar1 + lVar3 * 2,*puVar4,lVar3 + lVar1);");
            trace.statement("*puVar4 = uVar2;");
            trace.statement("_CxxThrowException((void *)0x0,(ThrowInfo *)0x0);");
        }
    return kFunction_0x1802fd35c;
}

// 0x1802fd3d8 FUN_1802fd3d8
// source: re/dump/decompile/0x1802fd3d8_FUN_1802fd3d8.c
// size: 82 bytes; thunk: false
// body sha256: 2fb141d6bee523a312a300ed88264754eaa9344ec227bda6a2cf0955646a2d3e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd3d8{
    "0x1802fd3d8",
    "FUN_1802fd3d8",
    R"F1802fd3d8S(undefined FUN_1802fd3d8())F1802fd3d8S",
    R"B1802fd3d8(// 0x1802fd3d8  FUN_1802fd3d8
// size=82 thunk=false
// signature: undefined FUN_1802fd3d8()
// status: ok


void FUN_1802fd3d8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x108);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x40);
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  FUN_180220bc0();
  *(undefined8 *)(param_2 + 0x48) = 0;
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


)B1802fd3d8",
    "2fb141d6bee523a312a300ed88264754eaa9344ec227bda6a2cf0955646a2d3e",
    R"F1802fd3d8C(FUN_180220bc0)F1802fd3d8C",
    R"F1802fd3d8D()F1802fd3d8D",
    R"F1802fd3d8T()F1802fd3d8T",
    R"F1802fd3d8F(linear body (no explicit branch keyword found))F1802fd3d8F",
    R"F1802fd3d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd3d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd3d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd3d8", "FUN_1802fd3d8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::uint64_t * puVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: (void *)0x0,(ThrowInfo *)0x0
    trace.call_arguments("FUN_180220bc0");
    trace.call_target("FUN_180220bc0", reinterpret_cast<const void*>(&image::FUN_180220bc0));
    // body sha256: 2fb141d6bee523a312a300ed88264754eaa9344ec227bda6a2cf0955646a2d3e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("undefined8 *puVar2;");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x20);");
            trace.statement("*(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x108);");
            trace.statement("uVar1 = *(undefined8 *)(param_2 + 0x28);");
            trace.statement("*(undefined8 *)(param_2 + 0x58) = uVar1;");
            trace.statement("*(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x40);");
            trace.statement("puVar2 = *(undefined8 **)(param_2 + 0x30);");
            trace.statement("FUN_180220bc0();");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = 0;");
            trace.statement("*puVar2 = uVar1;");
            trace.statement("_CxxThrowException((void *)0x0,(ThrowInfo *)0x0);");
        }
    return kFunction_0x1802fd3d8;
}

// 0x1802fd440 FUN_1802fd440
// source: re/dump/decompile/0x1802fd440_FUN_1802fd440.c
// size: 29 bytes; thunk: false
// body sha256: 1abdb3fa7f864c3e635e0c071178851ef52012018061fb3a90b682fd5ef18f56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd440{
    "0x1802fd440",
    "FUN_1802fd440",
    R"F1802fd440S(undefined FUN_1802fd440())F1802fd440S",
    R"B1802fd440(// 0x1802fd440  FUN_1802fd440
// size=29 thunk=false
// signature: undefined FUN_1802fd440()
// status: ok


void FUN_1802fd440(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fd440",
    "1abdb3fa7f864c3e635e0c071178851ef52012018061fb3a90b682fd5ef18f56",
    R"F1802fd440C()F1802fd440C",
    R"F1802fd440D()F1802fd440D",
    R"F1802fd440T()F1802fd440T",
    R"F1802fd440F(11: return;)F1802fd440F",
    R"F1802fd440U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd440U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd440() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd440", "FUN_1802fd440");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 1abdb3fa7f864c3e635e0c071178851ef52012018061fb3a90b682fd5ef18f56
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fd440;
}

// 0x1802fd469 FUN_1802fd469
// source: re/dump/decompile/0x1802fd469_FUN_1802fd469.c
// size: 38 bytes; thunk: false
// body sha256: fe635adbfd24f419f34b24d841f6e018c665399967f27ad81e661e82fe711b81
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd469{
    "0x1802fd469",
    "FUN_1802fd469",
    R"F1802fd469S(undefined FUN_1802fd469())F1802fd469S",
    R"B1802fd469(// 0x1802fd469  FUN_1802fd469
// size=38 thunk=false
// signature: undefined FUN_1802fd469()
// status: ok


void FUN_1802fd469(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fd469",
    "fe635adbfd24f419f34b24d841f6e018c665399967f27ad81e661e82fe711b81",
    R"F1802fd469C(FUN_180209d90)F1802fd469C",
    R"F1802fd469D()F1802fd469D",
    R"F1802fd469T()F1802fd469T",
    R"F1802fd469F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fd469F",
    R"F1802fd469U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd469U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd469() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd469", "FUN_1802fd469");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: fe635adbfd24f419f34b24d841f6e018c665399967f27ad81e661e82fe711b81
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fd469;
}

// 0x1802fd490 FUN_1802fd490
// source: re/dump/decompile/0x1802fd490_FUN_1802fd490.c
// size: 29 bytes; thunk: false
// body sha256: 54150573719e989ac5ad42be7e3b850faefe8a61cd225ed4ea8f3b1ba72fbadf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd490{
    "0x1802fd490",
    "FUN_1802fd490",
    R"F1802fd490S(undefined FUN_1802fd490())F1802fd490S",
    R"B1802fd490(// 0x1802fd490  FUN_1802fd490
// size=29 thunk=false
// signature: undefined FUN_1802fd490()
// status: ok


void FUN_1802fd490(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fd490",
    "54150573719e989ac5ad42be7e3b850faefe8a61cd225ed4ea8f3b1ba72fbadf",
    R"F1802fd490C()F1802fd490C",
    R"F1802fd490D()F1802fd490D",
    R"F1802fd490T()F1802fd490T",
    R"F1802fd490F(11: return;)F1802fd490F",
    R"F1802fd490U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd490U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd490() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd490", "FUN_1802fd490");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 54150573719e989ac5ad42be7e3b850faefe8a61cd225ed4ea8f3b1ba72fbadf
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fd490;
}

// 0x1802fd4ad FUN_1802fd4ad
// source: re/dump/decompile/0x1802fd4ad_FUN_1802fd4ad.c
// size: 38 bytes; thunk: false
// body sha256: cf1bc57fbff66bc7a3bc8e1aca4bee507854b0d02b4528162e876fb88296947d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd4ad{
    "0x1802fd4ad",
    "FUN_1802fd4ad",
    R"F1802fd4adS(undefined FUN_1802fd4ad())F1802fd4adS",
    R"B1802fd4ad(// 0x1802fd4ad  FUN_1802fd4ad
// size=38 thunk=false
// signature: undefined FUN_1802fd4ad()
// status: ok


void FUN_1802fd4ad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fd4ad",
    "cf1bc57fbff66bc7a3bc8e1aca4bee507854b0d02b4528162e876fb88296947d",
    R"F1802fd4adC(FUN_180209d90)F1802fd4adC",
    R"F1802fd4adD()F1802fd4adD",
    R"F1802fd4adT()F1802fd4adT",
    R"F1802fd4adF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fd4adF",
    R"F1802fd4adU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd4adU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd4ad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd4ad", "FUN_1802fd4ad");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: cf1bc57fbff66bc7a3bc8e1aca4bee507854b0d02b4528162e876fb88296947d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fd4ad;
}

// 0x1802fd4e0 FUN_1802fd4e0
// source: re/dump/decompile/0x1802fd4e0_FUN_1802fd4e0.c
// size: 29 bytes; thunk: false
// body sha256: afb18e3e6d05e20bc3680880563c76913991a8737123885c5fd41fc1ed33205f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd4e0{
    "0x1802fd4e0",
    "FUN_1802fd4e0",
    R"F1802fd4e0S(undefined FUN_1802fd4e0())F1802fd4e0S",
    R"B1802fd4e0(// 0x1802fd4e0  FUN_1802fd4e0
// size=29 thunk=false
// signature: undefined FUN_1802fd4e0()
// status: ok


void FUN_1802fd4e0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fd4e0",
    "afb18e3e6d05e20bc3680880563c76913991a8737123885c5fd41fc1ed33205f",
    R"F1802fd4e0C()F1802fd4e0C",
    R"F1802fd4e0D()F1802fd4e0D",
    R"F1802fd4e0T()F1802fd4e0T",
    R"F1802fd4e0F(11: return;)F1802fd4e0F",
    R"F1802fd4e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd4e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd4e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd4e0", "FUN_1802fd4e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: afb18e3e6d05e20bc3680880563c76913991a8737123885c5fd41fc1ed33205f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fd4e0;
}

// 0x1802fd4fd FUN_1802fd4fd
// source: re/dump/decompile/0x1802fd4fd_FUN_1802fd4fd.c
// size: 38 bytes; thunk: false
// body sha256: f2bddf7a4ca71bf545c74707cd5575817730648d05e9fac01b7cb8b927a89b1f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd4fd{
    "0x1802fd4fd",
    "FUN_1802fd4fd",
    R"F1802fd4fdS(undefined FUN_1802fd4fd())F1802fd4fdS",
    R"B1802fd4fd(// 0x1802fd4fd  FUN_1802fd4fd
// size=38 thunk=false
// signature: undefined FUN_1802fd4fd()
// status: ok


void FUN_1802fd4fd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fd4fd",
    "f2bddf7a4ca71bf545c74707cd5575817730648d05e9fac01b7cb8b927a89b1f",
    R"F1802fd4fdC(FUN_180209d90)F1802fd4fdC",
    R"F1802fd4fdD()F1802fd4fdD",
    R"F1802fd4fdT()F1802fd4fdT",
    R"F1802fd4fdF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fd4fdF",
    R"F1802fd4fdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd4fdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd4fd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd4fd", "FUN_1802fd4fd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: f2bddf7a4ca71bf545c74707cd5575817730648d05e9fac01b7cb8b927a89b1f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fd4fd;
}

// 0x1802fd530 FUN_1802fd530
// source: re/dump/decompile/0x1802fd530_FUN_1802fd530.c
// size: 29 bytes; thunk: false
// body sha256: 148354c89aa67d5ea0d4c35e423f61c00885789bc8a125171caf2fb3706c3d2a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd530{
    "0x1802fd530",
    "FUN_1802fd530",
    R"F1802fd530S(undefined FUN_1802fd530())F1802fd530S",
    R"B1802fd530(// 0x1802fd530  FUN_1802fd530
// size=29 thunk=false
// signature: undefined FUN_1802fd530()
// status: ok


void FUN_1802fd530(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fd530",
    "148354c89aa67d5ea0d4c35e423f61c00885789bc8a125171caf2fb3706c3d2a",
    R"F1802fd530C()F1802fd530C",
    R"F1802fd530D()F1802fd530D",
    R"F1802fd530T()F1802fd530T",
    R"F1802fd530F(11: return;)F1802fd530F",
    R"F1802fd530U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd530U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd530() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd530", "FUN_1802fd530");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 148354c89aa67d5ea0d4c35e423f61c00885789bc8a125171caf2fb3706c3d2a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fd530;
}

// 0x1802fd559 FUN_1802fd559
// source: re/dump/decompile/0x1802fd559_FUN_1802fd559.c
// size: 38 bytes; thunk: false
// body sha256: b469fbfc43154b119c2e80982a84ae51997ea99b39e06dd9937f11a5b033b8d8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd559{
    "0x1802fd559",
    "FUN_1802fd559",
    R"F1802fd559S(undefined FUN_1802fd559())F1802fd559S",
    R"B1802fd559(// 0x1802fd559  FUN_1802fd559
// size=38 thunk=false
// signature: undefined FUN_1802fd559()
// status: ok


void FUN_1802fd559(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fd559",
    "b469fbfc43154b119c2e80982a84ae51997ea99b39e06dd9937f11a5b033b8d8",
    R"F1802fd559C(FUN_180209d90)F1802fd559C",
    R"F1802fd559D()F1802fd559D",
    R"F1802fd559T()F1802fd559T",
    R"F1802fd559F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fd559F",
    R"F1802fd559U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd559U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd559() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd559", "FUN_1802fd559");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: b469fbfc43154b119c2e80982a84ae51997ea99b39e06dd9937f11a5b033b8d8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fd559;
}

// 0x1802fd580 FUN_1802fd580
// source: re/dump/decompile/0x1802fd580_FUN_1802fd580.c
// size: 29 bytes; thunk: false
// body sha256: 3799a6005f1b5b67777f0fe75a01a03da13e7d1f249998c0336c33de916dd365
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd580{
    "0x1802fd580",
    "FUN_1802fd580",
    R"F1802fd580S(undefined FUN_1802fd580())F1802fd580S",
    R"B1802fd580(// 0x1802fd580  FUN_1802fd580
// size=29 thunk=false
// signature: undefined FUN_1802fd580()
// status: ok


void FUN_1802fd580(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fd580",
    "3799a6005f1b5b67777f0fe75a01a03da13e7d1f249998c0336c33de916dd365",
    R"F1802fd580C()F1802fd580C",
    R"F1802fd580D()F1802fd580D",
    R"F1802fd580T()F1802fd580T",
    R"F1802fd580F(11: return;)F1802fd580F",
    R"F1802fd580U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd580U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd580() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd580", "FUN_1802fd580");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 3799a6005f1b5b67777f0fe75a01a03da13e7d1f249998c0336c33de916dd365
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fd580;
}

// 0x1802fd5a9 FUN_1802fd5a9
// source: re/dump/decompile/0x1802fd5a9_FUN_1802fd5a9.c
// size: 38 bytes; thunk: false
// body sha256: 222a20f3a38966d0459566195f8c458f8ff6dba01723e1123cf1b5d6513c0315
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd5a9{
    "0x1802fd5a9",
    "FUN_1802fd5a9",
    R"F1802fd5a9S(undefined FUN_1802fd5a9())F1802fd5a9S",
    R"B1802fd5a9(// 0x1802fd5a9  FUN_1802fd5a9
// size=38 thunk=false
// signature: undefined FUN_1802fd5a9()
// status: ok


void FUN_1802fd5a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fd5a9",
    "222a20f3a38966d0459566195f8c458f8ff6dba01723e1123cf1b5d6513c0315",
    R"F1802fd5a9C(FUN_180209d90)F1802fd5a9C",
    R"F1802fd5a9D()F1802fd5a9D",
    R"F1802fd5a9T()F1802fd5a9T",
    R"F1802fd5a9F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fd5a9F",
    R"F1802fd5a9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd5a9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd5a9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd5a9", "FUN_1802fd5a9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: 222a20f3a38966d0459566195f8c458f8ff6dba01723e1123cf1b5d6513c0315
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fd5a9;
}

// 0x1802fd5d0 FUN_1802fd5d0
// source: re/dump/decompile/0x1802fd5d0_FUN_1802fd5d0.c
// size: 29 bytes; thunk: false
// body sha256: b9337faf34675d637d6bfdb35197e4b8982637ddfe508faf8d5a5c6ccb9d9143
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd5d0{
    "0x1802fd5d0",
    "FUN_1802fd5d0",
    R"F1802fd5d0S(undefined FUN_1802fd5d0())F1802fd5d0S",
    R"B1802fd5d0(// 0x1802fd5d0  FUN_1802fd5d0
// size=29 thunk=false
// signature: undefined FUN_1802fd5d0()
// status: ok


void FUN_1802fd5d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fd5d0",
    "b9337faf34675d637d6bfdb35197e4b8982637ddfe508faf8d5a5c6ccb9d9143",
    R"F1802fd5d0C()F1802fd5d0C",
    R"F1802fd5d0D()F1802fd5d0D",
    R"F1802fd5d0T()F1802fd5d0T",
    R"F1802fd5d0F(11: return;)F1802fd5d0F",
    R"F1802fd5d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd5d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd5d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd5d0", "FUN_1802fd5d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: b9337faf34675d637d6bfdb35197e4b8982637ddfe508faf8d5a5c6ccb9d9143
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fd5d0;
}

// 0x1802fd5f9 FUN_1802fd5f9
// source: re/dump/decompile/0x1802fd5f9_FUN_1802fd5f9.c
// size: 38 bytes; thunk: false
// body sha256: c27271fa314c28f8bdfcebd2f4f84c58d9476bf6a17abbce40d313a6f8e6b90d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd5f9{
    "0x1802fd5f9",
    "FUN_1802fd5f9",
    R"F1802fd5f9S(undefined FUN_1802fd5f9())F1802fd5f9S",
    R"B1802fd5f9(// 0x1802fd5f9  FUN_1802fd5f9
// size=38 thunk=false
// signature: undefined FUN_1802fd5f9()
// status: ok


void FUN_1802fd5f9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fd5f9",
    "c27271fa314c28f8bdfcebd2f4f84c58d9476bf6a17abbce40d313a6f8e6b90d",
    R"F1802fd5f9C(FUN_180209d90)F1802fd5f9C",
    R"F1802fd5f9D()F1802fd5f9D",
    R"F1802fd5f9T()F1802fd5f9T",
    R"F1802fd5f9F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fd5f9F",
    R"F1802fd5f9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd5f9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd5f9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd5f9", "FUN_1802fd5f9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: c27271fa314c28f8bdfcebd2f4f84c58d9476bf6a17abbce40d313a6f8e6b90d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fd5f9;
}

// 0x1802fd620 FUN_1802fd620
// source: re/dump/decompile/0x1802fd620_FUN_1802fd620.c
// size: 29 bytes; thunk: false
// body sha256: 1177aa7161bcae7e8e555c6b6ef5b28396864195fc8dfc29ab42c5a1fd670b4b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd620{
    "0x1802fd620",
    "FUN_1802fd620",
    R"F1802fd620S(undefined FUN_1802fd620())F1802fd620S",
    R"B1802fd620(// 0x1802fd620  FUN_1802fd620
// size=29 thunk=false
// signature: undefined FUN_1802fd620()
// status: ok


void FUN_1802fd620(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B1802fd620",
    "1177aa7161bcae7e8e555c6b6ef5b28396864195fc8dfc29ab42c5a1fd670b4b",
    R"F1802fd620C()F1802fd620C",
    R"F1802fd620D()F1802fd620D",
    R"F1802fd620T()F1802fd620T",
    R"F1802fd620F(11: return;)F1802fd620F",
    R"F1802fd620U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd620() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd620", "FUN_1802fd620");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 1177aa7161bcae7e8e555c6b6ef5b28396864195fc8dfc29ab42c5a1fd670b4b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802fd620;
}

// 0x1802fd63d FUN_1802fd63d
// source: re/dump/decompile/0x1802fd63d_FUN_1802fd63d.c
// size: 38 bytes; thunk: false
// body sha256: 0cd6f6796722c5ff1502d21f139327fdb2e052c5e819a6dcc84dcd5b4cbcb061
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd63d{
    "0x1802fd63d",
    "FUN_1802fd63d",
    R"F1802fd63dS(undefined FUN_1802fd63d())F1802fd63dS",
    R"B1802fd63d(// 0x1802fd63d  FUN_1802fd63d
// size=38 thunk=false
// signature: undefined FUN_1802fd63d()
// status: ok


void FUN_1802fd63d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fd63d",
    "0cd6f6796722c5ff1502d21f139327fdb2e052c5e819a6dcc84dcd5b4cbcb061",
    R"F1802fd63dC(FUN_180209d90)F1802fd63dC",
    R"F1802fd63dD()F1802fd63dD",
    R"F1802fd63dT()F1802fd63dT",
    R"F1802fd63dF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fd63dF",
    R"F1802fd63dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd63dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd63d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd63d", "FUN_1802fd63d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: 0cd6f6796722c5ff1502d21f139327fdb2e052c5e819a6dcc84dcd5b4cbcb061
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fd63d;
}

// 0x1802fd794 FUN_1802fd794
// source: re/dump/decompile/0x1802fd794_FUN_1802fd794.c
// size: 58 bytes; thunk: false
// body sha256: 8351824b299a7230fbd8da2db33a032970a17a75720a40a5ceb061ba4e3aa80e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fd794{
    "0x1802fd794",
    "FUN_1802fd794",
    R"F1802fd794S(undefined FUN_1802fd794())F1802fd794S",
    R"B1802fd794(// 0x1802fd794  FUN_1802fd794
// size=58 thunk=false
// signature: undefined FUN_1802fd794()
// status: ok


undefined8 FUN_1802fd794(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x38) + 4) +
             (longlong)*(longlong **)(param_2 + 0x38)),4,true);
  return 0;
}


)B1802fd794",
    "8351824b299a7230fbd8da2db33a032970a17a75720a40a5ceb061ba4e3aa80e",
    R"F1802fd794C()F1802fd794C",
    R"F1802fd794D()F1802fd794D",
    R"F1802fd794T()F1802fd794T",
    R"F1802fd794F(14: return 0;)F1802fd794F",
    R"F1802fd794U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fd794U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fd794() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fd794", "FUN_1802fd794");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8351824b299a7230fbd8da2db33a032970a17a75720a40a5ceb061ba4e3aa80e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("std::basic_ios<char,std::char_traits<char>_>::setstate");
            trace.statement("((basic_ios<char,std::char_traits<char>_> *)");
            trace.statement("((longlong)*(int *)(**(longlong **)(param_2 + 0x38) + 4) +");
            trace.statement("(longlong)*(longlong **)(param_2 + 0x38)),4,true);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fd794;
}

// 0x1802fdef0 FUN_1802fdef0
// source: re/dump/decompile/0x1802fdef0_FUN_1802fdef0.c
// size: 58 bytes; thunk: false
// body sha256: 4cfcabf07755cb5f860ec2675cd1500b2a87d3abed04e146837fcd74639d4c79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fdef0{
    "0x1802fdef0",
    "FUN_1802fdef0",
    R"F1802fdef0S(undefined FUN_1802fdef0())F1802fdef0S",
    R"B1802fdef0(// 0x1802fdef0  FUN_1802fdef0
// size=58 thunk=false
// signature: undefined FUN_1802fdef0()
// status: ok


void FUN_1802fdef0(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0x30) + 8),0x18,0x102,FUN_18021ef60);
  return;
}


)B1802fdef0",
    "4cfcabf07755cb5f860ec2675cd1500b2a87d3abed04e146837fcd74639d4c79",
    R"F1802fdef0C(FUN_18021ef60)F1802fdef0C",
    R"F1802fdef0D()F1802fdef0D",
    R"F1802fdef0T()F1802fdef0T",
    R"F1802fdef0F(12: return;)F1802fdef0F",
    R"F1802fdef0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fdef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fdef0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fdef0", "FUN_1802fdef0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021ef60", reinterpret_cast<const void*>(&image::FUN_18021ef60));
    // body sha256: 4cfcabf07755cb5f860ec2675cd1500b2a87d3abed04e146837fcd74639d4c79
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_");
            trace.statement("((void *)(*(longlong *)(param_2 + 0x30) + 8),0x18,0x102,FUN_18021ef60);");
            trace.statement("return;");
        }
    return kFunction_0x1802fdef0;
}

// 0x1802fe1c0 FUN_1802fe1c0
// source: re/dump/decompile/0x1802fe1c0_FUN_1802fe1c0.c
// size: 46 bytes; thunk: false
// body sha256: 5b148664413d2c0fd414c7d2ca2ed740c3bba11a9c16af3a7b4ab87062ce3e16
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fe1c0{
    "0x1802fe1c0",
    "FUN_1802fe1c0",
    R"F1802fe1c0S(undefined FUN_1802fe1c0())F1802fe1c0S",
    R"B1802fe1c0(// 0x1802fe1c0  FUN_1802fe1c0
// size=46 thunk=false
// signature: undefined FUN_1802fe1c0()
// status: ok


void FUN_1802fe1c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xb0));
  }
  return;
}


)B1802fe1c0",
    "5b148664413d2c0fd414c7d2ca2ed740c3bba11a9c16af3a7b4ab87062ce3e16",
    R"F1802fe1c0C()F1802fe1c0C",
    R"F1802fe1c0D()F1802fe1c0D",
    R"F1802fe1c0T()F1802fe1c0T",
    R"F1802fe1c0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
15: return;)F1802fe1c0F",
    R"F1802fe1c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fe1c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fe1c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fe1c0", "FUN_1802fe1c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5b148664413d2c0fd414c7d2ca2ed740c3bba11a9c16af3a7b4ab87062ce3e16
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xb0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fe1c0;
}

// 0x1802fe3c0 FUN_1802fe3c0
// source: re/dump/decompile/0x1802fe3c0_FUN_1802fe3c0.c
// size: 81 bytes; thunk: false
// body sha256: 584413cd8aed7306bd5ae1a356601f6ce8b00218594e2e1161c31e131fc9fc7b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fe3c0{
    "0x1802fe3c0",
    "FUN_1802fe3c0",
    R"F1802fe3c0S(undefined FUN_1802fe3c0())F1802fe3c0S",
    R"B1802fe3c0(// 0x1802fe3c0  FUN_1802fe3c0
// size=81 thunk=false
// signature: undefined FUN_1802fe3c0()
// status: ok


void FUN_1802fe3c0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_2 + 0x20) == '\0') && (lVar3 = *(longlong *)(param_2 + 0x28), lVar3 != 0)) {
    pcVar1 = *(code **)(param_2 + 0x30);
    lVar2 = *(longlong *)(param_2 + 0x50);
    do {
      (*pcVar1)(lVar2 + (lVar3 + -1) * 0x18);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  return;
}


)B1802fe3c0",
    "584413cd8aed7306bd5ae1a356601f6ce8b00218594e2e1161c31e131fc9fc7b",
    R"F1802fe3c0C()F1802fe3c0C",
    R"F1802fe3c0D()F1802fe3c0D",
    R"F1802fe3c0T()F1802fe3c0T",
    R"F1802fe3c0F(14: if ((*(char *)(param_2 + 0x20) == '\0') && (lVar3 = *(longlong *)(param_2 + 0x28), lVar3 != 0)) {
17: do {
23: return;)F1802fe3c0F",
    R"F1802fe3c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 15: pcVar1 = *(code **)(param_2 + 0x30);.
TODO: resolve the indirect call in body 18: (*pcVar1)(lVar2 + (lVar3 + -1) * 0x18);.)F1802fe3c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fe3c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fe3c0", "FUN_1802fe3c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 15: pcVar1 = *(code **)(param_2 + 0x30);.
    // TODO: resolve the indirect call in body 18: (*pcVar1)(lVar2 + (lVar3 + -1) * 0x18);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((*(char *)(param_2 + 0x20) == '\0') && (lVar3 = *(longlong *)(param_2 + 0x28), lVar3 != 0))
    // body sha256: 584413cd8aed7306bd5ae1a356601f6ce8b00218594e2e1161c31e131fc9fc7b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong lVar3;");
            if (trace.condition("if ((*(char *)(param_2 + 0x20) == '\\0') && (lVar3 = *(longlong *)(param_2 + 0x28), lVar3 != 0))")) {
                trace.statement("pcVar1 = *(code **)(param_2 + 0x30);");
                trace.statement("lVar2 = *(longlong *)(param_2 + 0x50);");
                do {
                    trace.statement("(*pcVar1)(lVar2 + (lVar3 + -1) * 0x18);");
                    trace.statement("lVar3 = lVar3 + -1;");
                } while (trace.loop_condition("while (lVar3 != 0);"));
                trace.statement("*(undefined8 *)(param_2 + 0x28) = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fe3c0;
}

// 0x1802ff00c FUN_1802ff00c
// source: re/dump/decompile/0x1802ff00c_FUN_1802ff00c.c
// size: 42 bytes; thunk: false
// body sha256: 81900628930ee5ea306db2818e072cf9b4b1674dc56645c36678f6673d901a92
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ff00c{
    "0x1802ff00c",
    "FUN_1802ff00c",
    R"F1802ff00cS(undefined FUN_1802ff00c())F1802ff00cS",
    R"B1802ff00c(// 0x1802ff00c  FUN_1802ff00c
// size=42 thunk=false
// signature: undefined FUN_1802ff00c()
// status: ok


void FUN_1802ff00c(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_(*(void **)(param_2 + 0x30),0x48,4,FUN_180021090);
  return;
}


)B1802ff00c",
    "81900628930ee5ea306db2818e072cf9b4b1674dc56645c36678f6673d901a92",
    R"F1802ff00cC(FUN_180021090)F1802ff00cC",
    R"F1802ff00cD()F1802ff00cD",
    R"F1802ff00cT()F1802ff00cT",
    R"F1802ff00cF(11: return;)F1802ff00cF",
    R"F1802ff00cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ff00cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ff00c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ff00c", "FUN_1802ff00c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", *(void **)(param_2 + 0x30), 0x48, 4, &image::FUN_180021090);
    trace.call_target("FUN_180021090", reinterpret_cast<const void*>(&image::FUN_180021090));
    // body sha256: 81900628930ee5ea306db2818e072cf9b4b1674dc56645c36678f6673d901a92
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_(*(void **)(param_2 + 0x30),0x48,4,FUN_180021090);");
            trace.statement("return;");
        }
    return kFunction_0x1802ff00c;
}

// 0x1802ffabe FUN_1802ffabe
// source: re/dump/decompile/0x1802ffabe_FUN_1802ffabe.c
// size: 29 bytes; thunk: false
// body sha256: a77bf893334064f48c5ad760ef8be9f78f35ec098931979a003cec4f501d1f4c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ffabe{
    "0x1802ffabe",
    "FUN_1802ffabe",
    R"F1802ffabeS(undefined FUN_1802ffabe())F1802ffabeS",
    R"B1802ffabe(// 0x1802ffabe  FUN_1802ffabe
// size=29 thunk=false
// signature: undefined FUN_1802ffabe()
// status: ok


void FUN_1802ffabe(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}


)B1802ffabe",
    "a77bf893334064f48c5ad760ef8be9f78f35ec098931979a003cec4f501d1f4c",
    R"F1802ffabeC()F1802ffabeC",
    R"F1802ffabeD()F1802ffabeD",
    R"F1802ffabeT()F1802ffabeT",
    R"F1802ffabeF(11: return;)F1802ffabeF",
    R"F1802ffabeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ffabeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ffabe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ffabe", "FUN_1802ffabe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x28));
    // body sha256: a77bf893334064f48c5ad760ef8be9f78f35ec098931979a003cec4f501d1f4c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x28));");
            trace.statement("return;");
        }
    return kFunction_0x1802ffabe;
}

// 0x1802ffadb FUN_1802ffadb
// source: re/dump/decompile/0x1802ffadb_FUN_1802ffadb.c
// size: 38 bytes; thunk: false
// body sha256: c64890f18838610e1fa13b8bc89e60076f7c13597442c514516ce3c69c9fcd31
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ffadb{
    "0x1802ffadb",
    "FUN_1802ffadb",
    R"F1802ffadbS(undefined FUN_1802ffadb())F1802ffadbS",
    R"B1802ffadb(// 0x1802ffadb  FUN_1802ffadb
// size=38 thunk=false
// signature: undefined FUN_1802ffadb()
// status: ok


void FUN_1802ffadb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


)B1802ffadb",
    "c64890f18838610e1fa13b8bc89e60076f7c13597442c514516ce3c69c9fcd31",
    R"F1802ffadbC()F1802ffadbC",
    R"F1802ffadbD()F1802ffadbD",
    R"F1802ffadbT()F1802ffadbT",
    R"F1802ffadbF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ffadbF",
    R"F1802ffadbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ffadbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ffadb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ffadb", "FUN_1802ffadb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x40);
    // body sha256: c64890f18838610e1fa13b8bc89e60076f7c13597442c514516ce3c69c9fcd31
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ffadb;
}

// 0x1802ffb01 FUN_1802ffb01
// source: re/dump/decompile/0x1802ffb01_FUN_1802ffb01.c
// size: 39 bytes; thunk: false
// body sha256: 8ea32a98430d7d113048a8f3c66014ed6950324e617daaa71c18dbfb975a0377
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ffb01{
    "0x1802ffb01",
    "FUN_1802ffb01",
    R"F1802ffb01S(undefined FUN_1802ffb01())F1802ffb01S",
    R"B1802ffb01(// 0x1802ffb01  FUN_1802ffb01
// size=39 thunk=false
// signature: undefined FUN_1802ffb01()
// status: ok


void FUN_1802ffb01(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::_Locinfo::~_Locinfo((_Locinfo *)(param_2 + 0x60));
  }
  return;
}


)B1802ffb01",
    "8ea32a98430d7d113048a8f3c66014ed6950324e617daaa71c18dbfb975a0377",
    R"F1802ffb01C()F1802ffb01C",
    R"F1802ffb01D()F1802ffb01D",
    R"F1802ffb01T()F1802ffb01T",
    R"F1802ffb01F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ffb01F",
    R"F1802ffb01U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ffb01U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ffb01() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ffb01", "FUN_1802ffb01");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _Locinfo: (_Locinfo *)(param_2 + 0x60)
    // body sha256: 8ea32a98430d7d113048a8f3c66014ed6950324e617daaa71c18dbfb975a0377
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("std::_Locinfo::~_Locinfo((_Locinfo *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ffb01;
}

// 0x1802fff40 FUN_1802fff40
// source: re/dump/decompile/0x1802fff40_FUN_1802fff40.c
// size: 42 bytes; thunk: false
// body sha256: 82bc29ff4c02c8657fd0b1aafcbf0e75fbcb817c3cc464f31ae50b18cd652b53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fff40{
    "0x1802fff40",
    "FUN_1802fff40",
    R"F1802fff40S(undefined FUN_1802fff40())F1802fff40S",
    R"B1802fff40(// 0x1802fff40  FUN_1802fff40
// size=42 thunk=false
// signature: undefined FUN_1802fff40()
// status: ok


void FUN_1802fff40(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_(*(void **)(param_2 + 0x38),0x48,4,FUN_180021090);
  return;
}


)B1802fff40",
    "82bc29ff4c02c8657fd0b1aafcbf0e75fbcb817c3cc464f31ae50b18cd652b53",
    R"F1802fff40C(FUN_180021090)F1802fff40C",
    R"F1802fff40D()F1802fff40D",
    R"F1802fff40T()F1802fff40T",
    R"F1802fff40F(11: return;)F1802fff40F",
    R"F1802fff40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fff40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fff40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fff40", "FUN_1802fff40");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", *(void **)(param_2 + 0x38), 0x48, 4, &image::FUN_180021090);
    trace.call_target("FUN_180021090", reinterpret_cast<const void*>(&image::FUN_180021090));
    // body sha256: 82bc29ff4c02c8657fd0b1aafcbf0e75fbcb817c3cc464f31ae50b18cd652b53
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_(*(void **)(param_2 + 0x38),0x48,4,FUN_180021090);");
            trace.statement("return;");
        }
    return kFunction_0x1802fff40;
}

// 0x1802fff70 FUN_1802fff70
// source: re/dump/decompile/0x1802fff70_FUN_1802fff70.c
// size: 42 bytes; thunk: false
// body sha256: 1abf714f292bf454ac33ae7e413713cfd9904893de46b9523f8e97f23bee5f84
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fff70{
    "0x1802fff70",
    "FUN_1802fff70",
    R"F1802fff70S(undefined FUN_1802fff70())F1802fff70S",
    R"B1802fff70(// 0x1802fff70  FUN_1802fff70
// size=42 thunk=false
// signature: undefined FUN_1802fff70()
// status: ok


void FUN_1802fff70(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_(*(void **)(param_2 + 0x30),0x48,4,FUN_180021090);
  return;
}


)B1802fff70",
    "1abf714f292bf454ac33ae7e413713cfd9904893de46b9523f8e97f23bee5f84",
    R"F1802fff70C(FUN_180021090)F1802fff70C",
    R"F1802fff70D()F1802fff70D",
    R"F1802fff70T()F1802fff70T",
    R"F1802fff70F(11: return;)F1802fff70F",
    R"F1802fff70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fff70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fff70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fff70", "FUN_1802fff70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", *(void **)(param_2 + 0x30), 0x48, 4, &image::FUN_180021090);
    trace.call_target("FUN_180021090", reinterpret_cast<const void*>(&image::FUN_180021090));
    // body sha256: 1abf714f292bf454ac33ae7e413713cfd9904893de46b9523f8e97f23bee5f84
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_(*(void **)(param_2 + 0x30),0x48,4,FUN_180021090);");
            trace.statement("return;");
        }
    return kFunction_0x1802fff70;
}

// 0x1803000dc FUN_1803000dc
// source: re/dump/decompile/0x1803000dc_FUN_1803000dc.c
// size: 38 bytes; thunk: false
// body sha256: cfac272b64ceed329bfe61bc197a29f2455abf50755d773afde56568a5b7c05b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803000dc{
    "0x1803000dc",
    "FUN_1803000dc",
    R"F1803000dcS(undefined FUN_1803000dc())F1803000dcS",
    R"B1803000dc(// 0x1803000dc  FUN_1803000dc
// size=38 thunk=false
// signature: undefined FUN_1803000dc()
// status: ok


void FUN_1803000dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1803000dc",
    "cfac272b64ceed329bfe61bc197a29f2455abf50755d773afde56568a5b7c05b",
    R"F1803000dcC()F1803000dcC",
    R"F1803000dcD()F1803000dcD",
    R"F1803000dcT()F1803000dcT",
    R"F1803000dcF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1803000dcF",
    R"F1803000dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803000dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803000dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803000dc", "FUN_1803000dc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: cfac272b64ceed329bfe61bc197a29f2455abf50755d773afde56568a5b7c05b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1803000dc;
}

// 0x180300102 FUN_180300102
// source: re/dump/decompile/0x180300102_FUN_180300102.c
// size: 38 bytes; thunk: false
// body sha256: 4cd305d94e0373ff8e28d906f1d9ba4122e1dd657aef568001bddf3a258759b2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180300102{
    "0x180300102",
    "FUN_180300102",
    R"F180300102S(undefined FUN_180300102())F180300102S",
    R"B180300102(// 0x180300102  FUN_180300102
// size=38 thunk=false
// signature: undefined FUN_180300102()
// status: ok


void FUN_180300102(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B180300102",
    "4cd305d94e0373ff8e28d906f1d9ba4122e1dd657aef568001bddf3a258759b2",
    R"F180300102C()F180300102C",
    R"F180300102D()F180300102D",
    R"F180300102T()F180300102T",
    R"F180300102F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F180300102F",
    R"F180300102U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180300102U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180300102() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180300102", "FUN_180300102");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 4cd305d94e0373ff8e28d906f1d9ba4122e1dd657aef568001bddf3a258759b2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180300102;
}

// 0x18030013c FUN_18030013c
// source: re/dump/decompile/0x18030013c_FUN_18030013c.c
// size: 38 bytes; thunk: false
// body sha256: dc8fc9cf76124c558ee9f9e0c284d71bcf23187778cea05b2bf9c8d3d4178327
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030013c{
    "0x18030013c",
    "FUN_18030013c",
    R"F18030013cS(undefined FUN_18030013c())F18030013cS",
    R"B18030013c(// 0x18030013c  FUN_18030013c
// size=38 thunk=false
// signature: undefined FUN_18030013c()
// status: ok


void FUN_18030013c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B18030013c",
    "dc8fc9cf76124c558ee9f9e0c284d71bcf23187778cea05b2bf9c8d3d4178327",
    R"F18030013cC()F18030013cC",
    R"F18030013cD()F18030013cD",
    R"F18030013cT()F18030013cT",
    R"F18030013cF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F18030013cF",
    R"F18030013cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030013cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030013c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030013c", "FUN_18030013c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: dc8fc9cf76124c558ee9f9e0c284d71bcf23187778cea05b2bf9c8d3d4178327
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030013c;
}

// 0x180300162 FUN_180300162
// source: re/dump/decompile/0x180300162_FUN_180300162.c
// size: 38 bytes; thunk: false
// body sha256: e323de42b0be9871d7acfa892a493910876838a73bb8c77b2569994b9229ac51
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180300162{
    "0x180300162",
    "FUN_180300162",
    R"F180300162S(undefined FUN_180300162())F180300162S",
    R"B180300162(// 0x180300162  FUN_180300162
// size=38 thunk=false
// signature: undefined FUN_180300162()
// status: ok


void FUN_180300162(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B180300162",
    "e323de42b0be9871d7acfa892a493910876838a73bb8c77b2569994b9229ac51",
    R"F180300162C()F180300162C",
    R"F180300162D()F180300162D",
    R"F180300162T()F180300162T",
    R"F180300162F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F180300162F",
    R"F180300162U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180300162U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180300162() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180300162", "FUN_180300162");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: e323de42b0be9871d7acfa892a493910876838a73bb8c77b2569994b9229ac51
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x180300162;
}

// 0x180300420 FUN_180300420
// source: re/dump/decompile/0x180300420_FUN_180300420.c
// size: 38 bytes; thunk: false
// body sha256: 1e30acf3df80ad4d784cb27728a1c9c20cd894c3ca0ce03ec6ecb452d4f6bcb7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180300420{
    "0x180300420",
    "FUN_180300420",
    R"F180300420S(undefined FUN_180300420())F180300420S",
    R"B180300420(// 0x180300420  FUN_180300420
// size=38 thunk=false
// signature: undefined FUN_180300420()
// status: ok


void FUN_180300420(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B180300420",
    "1e30acf3df80ad4d784cb27728a1c9c20cd894c3ca0ce03ec6ecb452d4f6bcb7",
    R"F180300420C()F180300420C",
    R"F180300420D()F180300420D",
    R"F180300420T()F180300420T",
    R"F180300420F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F180300420F",
    R"F180300420U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180300420U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180300420() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180300420", "FUN_180300420");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 1e30acf3df80ad4d784cb27728a1c9c20cd894c3ca0ce03ec6ecb452d4f6bcb7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x180300420;
}

// 0x18030067c FUN_18030067c
// source: re/dump/decompile/0x18030067c_FUN_18030067c.c
// size: 45 bytes; thunk: false
// body sha256: 3d6be945475f1733ed135dbec38506aae444ebb87a6fc6f12e987f4beccdf8b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030067c{
    "0x18030067c",
    "FUN_18030067c",
    R"F18030067cS(undefined FUN_18030067c())F18030067cS",
    R"B18030067c(// 0x18030067c  FUN_18030067c
// size=45 thunk=false
// signature: undefined FUN_18030067c()
// status: ok


void FUN_18030067c(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x1320),0x58,2,FUN_1802416a0);
  return;
}


)B18030067c",
    "3d6be945475f1733ed135dbec38506aae444ebb87a6fc6f12e987f4beccdf8b1",
    R"F18030067cC(FUN_1802416a0)F18030067cC",
    R"F18030067cD()F18030067cD",
    R"F18030067cT()F18030067cT",
    R"F18030067cF(11: return;)F18030067cF",
    R"F18030067cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030067cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030067c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030067c", "FUN_18030067c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x1320), 0x58, 2, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 3d6be945475f1733ed135dbec38506aae444ebb87a6fc6f12e987f4beccdf8b1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x1320),0x58,2,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x18030067c;
}

// 0x180300bb1 FUN_180300bb1
// source: re/dump/decompile/0x180300bb1_FUN_180300bb1.c
// size: 45 bytes; thunk: false
// body sha256: 4f640e12ec2e13bcfbe47d0fc0a2d7051139e1512fd90f41be1bb0c89c5b32a1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180300bb1{
    "0x180300bb1",
    "FUN_180300bb1",
    R"F180300bb1S(undefined FUN_180300bb1())F180300bb1S",
    R"B180300bb1(// 0x180300bb1  FUN_180300bb1
// size=45 thunk=false
// signature: undefined FUN_180300bb1()
// status: ok


void FUN_180300bb1(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x137e0),0x58,3,FUN_1802416a0);
  return;
}


)B180300bb1",
    "4f640e12ec2e13bcfbe47d0fc0a2d7051139e1512fd90f41be1bb0c89c5b32a1",
    R"F180300bb1C(FUN_1802416a0)F180300bb1C",
    R"F180300bb1D()F180300bb1D",
    R"F180300bb1T()F180300bb1T",
    R"F180300bb1F(11: return;)F180300bb1F",
    R"F180300bb1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180300bb1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180300bb1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180300bb1", "FUN_180300bb1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x137e0), 0x58, 3, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 4f640e12ec2e13bcfbe47d0fc0a2d7051139e1512fd90f41be1bb0c89c5b32a1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x137e0),0x58,3,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180300bb1;
}

// 0x180300c02 FUN_180300c02
// source: re/dump/decompile/0x180300c02_FUN_180300c02.c
// size: 45 bytes; thunk: false
// body sha256: f95447d4d05ad68e6d0893c1ac294ae9d8d86fa37f3fd60dfcbfab94beac59a8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180300c02{
    "0x180300c02",
    "FUN_180300c02",
    R"F180300c02S(undefined FUN_180300c02())F180300c02S",
    R"B180300c02(// 0x180300c02  FUN_180300c02
// size=45 thunk=false
// signature: undefined FUN_180300c02()
// status: ok


void FUN_180300c02(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x2780),0x58,1,FUN_1802416a0);
  return;
}


)B180300c02",
    "f95447d4d05ad68e6d0893c1ac294ae9d8d86fa37f3fd60dfcbfab94beac59a8",
    R"F180300c02C(FUN_1802416a0)F180300c02C",
    R"F180300c02D()F180300c02D",
    R"F180300c02T()F180300c02T",
    R"F180300c02F(11: return;)F180300c02F",
    R"F180300c02U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180300c02U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180300c02() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180300c02", "FUN_180300c02");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x2780), 0x58, 1, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: f95447d4d05ad68e6d0893c1ac294ae9d8d86fa37f3fd60dfcbfab94beac59a8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x2780),0x58,1,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180300c02;
}

// 0x180300c47 FUN_180300c47
// source: re/dump/decompile/0x180300c47_FUN_180300c47.c
// size: 45 bytes; thunk: false
// body sha256: 15dec3646ba6ee0e613a280e23cac1c1ac734401ebdf47e688a2af308c293f88
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180300c47{
    "0x180300c47",
    "FUN_180300c47",
    R"F180300c47S(undefined FUN_180300c47())F180300c47S",
    R"B180300c47(// 0x180300c47  FUN_180300c47
// size=45 thunk=false
// signature: undefined FUN_180300c47()
// status: ok


void FUN_180300c47(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x2720),0x58,1,FUN_1802416a0);
  return;
}


)B180300c47",
    "15dec3646ba6ee0e613a280e23cac1c1ac734401ebdf47e688a2af308c293f88",
    R"F180300c47C(FUN_1802416a0)F180300c47C",
    R"F180300c47D()F180300c47D",
    R"F180300c47T()F180300c47T",
    R"F180300c47F(11: return;)F180300c47F",
    R"F180300c47U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180300c47U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180300c47() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180300c47", "FUN_180300c47");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x2720), 0x58, 1, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 15dec3646ba6ee0e613a280e23cac1c1ac734401ebdf47e688a2af308c293f88
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x2720),0x58,1,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180300c47;
}

// 0x180301184 FUN_180301184
// source: re/dump/decompile/0x180301184_FUN_180301184.c
// size: 45 bytes; thunk: false
// body sha256: a2468e7281ddb62453d54a145f1889da68b9a78a42c835bdd1057352b35be061
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180301184{
    "0x180301184",
    "FUN_180301184",
    R"F180301184S(undefined FUN_180301184())F180301184S",
    R"B180301184(// 0x180301184  FUN_180301184
// size=45 thunk=false
// signature: undefined FUN_180301184()
// status: ok


void FUN_180301184(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x27e0),0x58,0x35,FUN_1802416a0);
  return;
}


)B180301184",
    "a2468e7281ddb62453d54a145f1889da68b9a78a42c835bdd1057352b35be061",
    R"F180301184C(FUN_1802416a0)F180301184C",
    R"F180301184D()F180301184D",
    R"F180301184T()F180301184T",
    R"F180301184F(11: return;)F180301184F",
    R"F180301184U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180301184U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180301184() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180301184", "FUN_180301184");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x27e0), 0x58, 0x35, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: a2468e7281ddb62453d54a145f1889da68b9a78a42c835bdd1057352b35be061
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x27e0),0x58,0x35,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180301184;
}

// 0x180301259 FUN_180301259
// source: re/dump/decompile/0x180301259_FUN_180301259.c
// size: 45 bytes; thunk: false
// body sha256: 87dc5dc3d7f11e21f1929a84fdb3c2dc288862411a28a05907a84a6792c29b85
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180301259{
    "0x180301259",
    "FUN_180301259",
    R"F180301259S(undefined FUN_180301259())F180301259S",
    R"B180301259(// 0x180301259  FUN_180301259
// size=45 thunk=false
// signature: undefined FUN_180301259()
// status: ok


void FUN_180301259(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x138f0),0x58,4,FUN_1802416a0);
  return;
}


)B180301259",
    "87dc5dc3d7f11e21f1929a84fdb3c2dc288862411a28a05907a84a6792c29b85",
    R"F180301259C(FUN_1802416a0)F180301259C",
    R"F180301259D()F180301259D",
    R"F180301259T()F180301259T",
    R"F180301259F(11: return;)F180301259F",
    R"F180301259U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180301259U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180301259() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180301259", "FUN_180301259");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x138f0), 0x58, 4, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 87dc5dc3d7f11e21f1929a84fdb3c2dc288862411a28a05907a84a6792c29b85
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x138f0),0x58,4,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180301259;
}

// 0x180301352 FUN_180301352
// source: re/dump/decompile/0x180301352_FUN_180301352.c
// size: 45 bytes; thunk: false
// body sha256: d1bff1b08d34faa76af974ec856dc85d12345d78e0f95a5520ed3ca113e62667
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180301352{
    "0x180301352",
    "FUN_180301352",
    R"F180301352S(undefined FUN_180301352())F180301352S",
    R"B180301352(// 0x180301352  FUN_180301352
// size=45 thunk=false
// signature: undefined FUN_180301352()
// status: ok


void FUN_180301352(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x13a50),0x58,5,FUN_1802416a0);
  return;
}


)B180301352",
    "d1bff1b08d34faa76af974ec856dc85d12345d78e0f95a5520ed3ca113e62667",
    R"F180301352C(FUN_1802416a0)F180301352C",
    R"F180301352D()F180301352D",
    R"F180301352T()F180301352T",
    R"F180301352F(11: return;)F180301352F",
    R"F180301352U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180301352U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180301352() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180301352", "FUN_180301352");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x13a50), 0x58, 5, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: d1bff1b08d34faa76af974ec856dc85d12345d78e0f95a5520ed3ca113e62667
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x13a50),0x58,5,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180301352;
}

// 0x1803015b3 FUN_1803015b3
// source: re/dump/decompile/0x1803015b3_FUN_1803015b3.c
// size: 45 bytes; thunk: false
// body sha256: 3eb7e0ba466cda6c956b6f2b0eebb33db08c77af652a15b44cc51eb446199443
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803015b3{
    "0x1803015b3",
    "FUN_1803015b3",
    R"F1803015b3S(undefined FUN_1803015b3())F1803015b3S",
    R"B1803015b3(// 0x1803015b3  FUN_1803015b3
// size=45 thunk=false
// signature: undefined FUN_1803015b3()
// status: ok


void FUN_1803015b3(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x14190),0x58,0xf,FUN_1802416a0);
  return;
}


)B1803015b3",
    "3eb7e0ba466cda6c956b6f2b0eebb33db08c77af652a15b44cc51eb446199443",
    R"F1803015b3C(FUN_1802416a0)F1803015b3C",
    R"F1803015b3D()F1803015b3D",
    R"F1803015b3T()F1803015b3T",
    R"F1803015b3F(11: return;)F1803015b3F",
    R"F1803015b3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803015b3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803015b3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803015b3", "FUN_1803015b3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x14190), 0x58, 0xf, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 3eb7e0ba466cda6c956b6f2b0eebb33db08c77af652a15b44cc51eb446199443
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x14190),0x58,0xf,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x1803015b3;
}

// 0x180301760 FUN_180301760
// source: re/dump/decompile/0x180301760_FUN_180301760.c
// size: 45 bytes; thunk: false
// body sha256: 17e0749adcccbd88a8c872f521013fce9a394a01cc606c3c2b0ab031495fe706
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180301760{
    "0x180301760",
    "FUN_180301760",
    R"F180301760S(undefined FUN_180301760())F180301760S",
    R"B180301760(// 0x180301760  FUN_180301760
// size=45 thunk=false
// signature: undefined FUN_180301760()
// status: ok


void FUN_180301760(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x13e20),0x58,10,FUN_1802416a0);
  return;
}


)B180301760",
    "17e0749adcccbd88a8c872f521013fce9a394a01cc606c3c2b0ab031495fe706",
    R"F180301760C(FUN_1802416a0)F180301760C",
    R"F180301760D()F180301760D",
    R"F180301760T()F180301760T",
    R"F180301760F(11: return;)F180301760F",
    R"F180301760U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180301760U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180301760() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180301760", "FUN_180301760");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x13e20), 0x58, 10, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 17e0749adcccbd88a8c872f521013fce9a394a01cc606c3c2b0ab031495fe706
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x13e20),0x58,10,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180301760;
}

// 0x18030187d FUN_18030187d
// source: re/dump/decompile/0x18030187d_FUN_18030187d.c
// size: 45 bytes; thunk: false
// body sha256: c3e5d3c183e8e671c59e8be59680ea5b3733131e731d0a1b9fb66178ed80647a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030187d{
    "0x18030187d",
    "FUN_18030187d",
    R"F18030187dS(undefined FUN_18030187d())F18030187dS",
    R"B18030187d(// 0x18030187d  FUN_18030187d
// size=45 thunk=false
// signature: undefined FUN_18030187d()
// status: ok


void FUN_18030187d(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x13c10),0x58,6,FUN_1802416a0);
  return;
}


)B18030187d",
    "c3e5d3c183e8e671c59e8be59680ea5b3733131e731d0a1b9fb66178ed80647a",
    R"F18030187dC(FUN_1802416a0)F18030187dC",
    R"F18030187dD()F18030187dD",
    R"F18030187dT()F18030187dT",
    R"F18030187dF(11: return;)F18030187dF",
    R"F18030187dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030187dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030187d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030187d", "FUN_18030187d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x13c10), 0x58, 6, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: c3e5d3c183e8e671c59e8be59680ea5b3733131e731d0a1b9fb66178ed80647a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x13c10),0x58,6,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x18030187d;
}

// 0x180302012 FUN_180302012
// source: re/dump/decompile/0x180302012_FUN_180302012.c
// size: 45 bytes; thunk: false
// body sha256: 6a35b7c47b1c3fb683ee32a74dfdb91bb7b44d0a4061e6d8149beffab86be12b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180302012{
    "0x180302012",
    "FUN_180302012",
    R"F180302012S(undefined FUN_180302012())F180302012S",
    R"B180302012(// 0x180302012  FUN_180302012
// size=45 thunk=false
// signature: undefined FUN_180302012()
// status: ok


void FUN_180302012(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x146c0),0x58,0x34,FUN_1802416a0);
  return;
}


)B180302012",
    "6a35b7c47b1c3fb683ee32a74dfdb91bb7b44d0a4061e6d8149beffab86be12b",
    R"F180302012C(FUN_1802416a0)F180302012C",
    R"F180302012D()F180302012D",
    R"F180302012T()F180302012T",
    R"F180302012F(11: return;)F180302012F",
    R"F180302012U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180302012U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180302012() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180302012", "FUN_180302012");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x146c0), 0x58, 0x34, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 6a35b7c47b1c3fb683ee32a74dfdb91bb7b44d0a4061e6d8149beffab86be12b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x146c0),0x58,0x34,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180302012;
}

// 0x1803049f7 FUN_1803049f7
// source: re/dump/decompile/0x1803049f7_FUN_1803049f7.c
// size: 45 bytes; thunk: false
// body sha256: e9cb9c1951a7c72514ad2affba8570818c1f35d3948ff9e1fd29fcf0b29ac89e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803049f7{
    "0x1803049f7",
    "FUN_1803049f7",
    R"F1803049f7S(undefined FUN_1803049f7())F1803049f7S",
    R"B1803049f7(// 0x1803049f7  FUN_1803049f7
// size=45 thunk=false
// signature: undefined FUN_1803049f7()
// status: ok


void FUN_1803049f7(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x158a0),0x58,0x126,FUN_1802416a0);
  return;
}


)B1803049f7",
    "e9cb9c1951a7c72514ad2affba8570818c1f35d3948ff9e1fd29fcf0b29ac89e",
    R"F1803049f7C(FUN_1802416a0)F1803049f7C",
    R"F1803049f7D()F1803049f7D",
    R"F1803049f7T()F1803049f7T",
    R"F1803049f7F(11: return;)F1803049f7F",
    R"F1803049f7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803049f7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803049f7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803049f7", "FUN_1803049f7");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x158a0), 0x58, 0x126, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: e9cb9c1951a7c72514ad2affba8570818c1f35d3948ff9e1fd29fcf0b29ac89e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x158a0),0x58,0x126,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x1803049f7;
}

// 0x180304a3c FUN_180304a3c
// source: re/dump/decompile/0x180304a3c_FUN_180304a3c.c
// size: 45 bytes; thunk: false
// body sha256: ea8dce0da27695a8f4afabe1f3e09bc6d822bceea52a66ca7c8cc08fb354eb79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180304a3c{
    "0x180304a3c",
    "FUN_180304a3c",
    R"F180304a3cS(undefined FUN_180304a3c())F180304a3cS",
    R"B180304a3c(// 0x180304a3c  FUN_180304a3c
// size=45 thunk=false
// signature: undefined FUN_180304a3c()
// status: ok


void FUN_180304a3c(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0xa6a0),0x58,9,FUN_1802416a0);
  return;
}


)B180304a3c",
    "ea8dce0da27695a8f4afabe1f3e09bc6d822bceea52a66ca7c8cc08fb354eb79",
    R"F180304a3cC(FUN_1802416a0)F180304a3cC",
    R"F180304a3cD()F180304a3cD",
    R"F180304a3cT()F180304a3cT",
    R"F180304a3cF(11: return;)F180304a3cF",
    R"F180304a3cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180304a3cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180304a3c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180304a3c", "FUN_180304a3c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0xa6a0), 0x58, 9, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: ea8dce0da27695a8f4afabe1f3e09bc6d822bceea52a66ca7c8cc08fb354eb79
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0xa6a0),0x58,9,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180304a3c;
}

// 0x180304b50 FUN_180304b50
// source: re/dump/decompile/0x180304b50_FUN_180304b50.c
// size: 45 bytes; thunk: false
// body sha256: 5bdbe9289e157b569810ab034a324dad83c901f27b09d6d94093a294e3db5dfe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180304b50{
    "0x180304b50",
    "FUN_180304b50",
    R"F180304b50S(undefined FUN_180304b50())F180304b50S",
    R"B180304b50(// 0x180304b50  FUN_180304b50
// size=45 thunk=false
// signature: undefined FUN_180304b50()
// status: ok


void FUN_180304b50(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x180),0x58,1,FUN_1802416a0);
  return;
}


)B180304b50",
    "5bdbe9289e157b569810ab034a324dad83c901f27b09d6d94093a294e3db5dfe",
    R"F180304b50C(FUN_1802416a0)F180304b50C",
    R"F180304b50D()F180304b50D",
    R"F180304b50T()F180304b50T",
    R"F180304b50F(11: return;)F180304b50F",
    R"F180304b50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180304b50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180304b50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180304b50", "FUN_180304b50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x180), 0x58, 1, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 5bdbe9289e157b569810ab034a324dad83c901f27b09d6d94093a294e3db5dfe
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x180),0x58,1,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180304b50;
}

// 0x180304bd9 FUN_180304bd9
// source: re/dump/decompile/0x180304bd9_FUN_180304bd9.c
// size: 45 bytes; thunk: false
// body sha256: db1a6bddfde40344a7ec01a2af07108c073f13f96a38783cb4bfadf90897c5af
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180304bd9{
    "0x180304bd9",
    "FUN_180304bd9",
    R"F180304bd9S(undefined FUN_180304bd9())F180304bd9S",
    R"B180304bd9(// 0x180304bd9  FUN_180304bd9
// size=45 thunk=false
// signature: undefined FUN_180304bd9()
// status: ok


void FUN_180304bd9(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x120),0x58,1,FUN_1802416a0);
  return;
}


)B180304bd9",
    "db1a6bddfde40344a7ec01a2af07108c073f13f96a38783cb4bfadf90897c5af",
    R"F180304bd9C(FUN_1802416a0)F180304bd9C",
    R"F180304bd9D()F180304bd9D",
    R"F180304bd9T()F180304bd9T",
    R"F180304bd9F(11: return;)F180304bd9F",
    R"F180304bd9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180304bd9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180304bd9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180304bd9", "FUN_180304bd9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x120), 0x58, 1, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: db1a6bddfde40344a7ec01a2af07108c073f13f96a38783cb4bfadf90897c5af
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x120),0x58,1,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180304bd9;
}

// 0x180304d76 FUN_180304d76
// source: re/dump/decompile/0x180304d76_FUN_180304d76.c
// size: 45 bytes; thunk: false
// body sha256: 9244e5b038f58df7463642042a844bcaf0ac845d3afc7ad41a015cdb5827da1f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180304d76{
    "0x180304d76",
    "FUN_180304d76",
    R"F180304d76S(undefined FUN_180304d76())F180304d76S",
    R"B180304d76(// 0x180304d76  FUN_180304d76
// size=45 thunk=false
// signature: undefined FUN_180304d76()
// status: ok


void FUN_180304d76(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x4b0),0x58,3,FUN_1802416a0);
  return;
}


)B180304d76",
    "9244e5b038f58df7463642042a844bcaf0ac845d3afc7ad41a015cdb5827da1f",
    R"F180304d76C(FUN_1802416a0)F180304d76C",
    R"F180304d76D()F180304d76D",
    R"F180304d76T()F180304d76T",
    R"F180304d76F(11: return;)F180304d76F",
    R"F180304d76U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180304d76U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180304d76() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180304d76", "FUN_180304d76");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x4b0), 0x58, 3, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 9244e5b038f58df7463642042a844bcaf0ac845d3afc7ad41a015cdb5827da1f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x4b0),0x58,3,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180304d76;
}

// 0x180304ed3 FUN_180304ed3
// source: re/dump/decompile/0x180304ed3_FUN_180304ed3.c
// size: 45 bytes; thunk: false
// body sha256: 4803ac2aebb4dadb30d62ce8bfa133c7326d5acd5e902d21e61afa5ccc22a665
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180304ed3{
    "0x180304ed3",
    "FUN_180304ed3",
    R"F180304ed3S(undefined FUN_180304ed3())F180304ed3S",
    R"B180304ed3(// 0x180304ed3  FUN_180304ed3
// size=45 thunk=false
// signature: undefined FUN_180304ed3()
// status: ok


void FUN_180304ed3(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x1e0),0x58,2,FUN_1802416a0);
  return;
}


)B180304ed3",
    "4803ac2aebb4dadb30d62ce8bfa133c7326d5acd5e902d21e61afa5ccc22a665",
    R"F180304ed3C(FUN_1802416a0)F180304ed3C",
    R"F180304ed3D()F180304ed3D",
    R"F180304ed3T()F180304ed3T",
    R"F180304ed3F(11: return;)F180304ed3F",
    R"F180304ed3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180304ed3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180304ed3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180304ed3", "FUN_180304ed3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x1e0), 0x58, 2, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 4803ac2aebb4dadb30d62ce8bfa133c7326d5acd5e902d21e61afa5ccc22a665
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x1e0),0x58,2,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180304ed3;
}

// 0x18030508c FUN_18030508c
// source: re/dump/decompile/0x18030508c_FUN_18030508c.c
// size: 45 bytes; thunk: false
// body sha256: 87e47d619c1be7a6293327197915c784069fbc28b402b41f7efe138dc22ce6a9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030508c{
    "0x18030508c",
    "FUN_18030508c",
    R"F18030508cS(undefined FUN_18030508c())F18030508cS",
    R"B18030508c(// 0x18030508c  FUN_18030508c
// size=45 thunk=false
// signature: undefined FUN_18030508c()
// status: ok


void FUN_18030508c(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x3a0),0x58,3,FUN_1802416a0);
  return;
}


)B18030508c",
    "87e47d619c1be7a6293327197915c784069fbc28b402b41f7efe138dc22ce6a9",
    R"F18030508cC(FUN_1802416a0)F18030508cC",
    R"F18030508cD()F18030508cD",
    R"F18030508cT()F18030508cT",
    R"F18030508cF(11: return;)F18030508cF",
    R"F18030508cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030508cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030508c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030508c", "FUN_18030508c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x3a0), 0x58, 3, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 87e47d619c1be7a6293327197915c784069fbc28b402b41f7efe138dc22ce6a9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x3a0),0x58,3,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x18030508c;
}

// 0x180305245 FUN_180305245
// source: re/dump/decompile/0x180305245_FUN_180305245.c
// size: 45 bytes; thunk: false
// body sha256: bb81db21bdc1acafdca103ca14b4bc5ebc6eb7c8541f8ff93f321113a3c49f8c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305245{
    "0x180305245",
    "FUN_180305245",
    R"F180305245S(undefined FUN_180305245())F180305245S",
    R"B180305245(// 0x180305245  FUN_180305245
// size=45 thunk=false
// signature: undefined FUN_180305245()
// status: ok


void FUN_180305245(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x290),0x58,3,FUN_1802416a0);
  return;
}


)B180305245",
    "bb81db21bdc1acafdca103ca14b4bc5ebc6eb7c8541f8ff93f321113a3c49f8c",
    R"F180305245C(FUN_1802416a0)F180305245C",
    R"F180305245D()F180305245D",
    R"F180305245T()F180305245T",
    R"F180305245F(11: return;)F180305245F",
    R"F180305245U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305245U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305245() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305245", "FUN_180305245");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x290), 0x58, 3, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: bb81db21bdc1acafdca103ca14b4bc5ebc6eb7c8541f8ff93f321113a3c49f8c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x290),0x58,3,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x180305245;
}

// 0x1803053fe FUN_1803053fe
// source: re/dump/decompile/0x1803053fe_FUN_1803053fe.c
// size: 45 bytes; thunk: false
// body sha256: 1e6994cd6ec4787ebcdaa5e7bb8048054e77ed423bb6511838b6ce2690c72e31
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803053fe{
    "0x1803053fe",
    "FUN_1803053fe",
    R"F1803053feS(undefined FUN_1803053fe())F1803053feS",
    R"B1803053fe(// 0x1803053fe  FUN_1803053fe
// size=45 thunk=false
// signature: undefined FUN_1803053fe()
// status: ok


void FUN_1803053fe(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x5c0),0x58,3,FUN_1802416a0);
  return;
}


)B1803053fe",
    "1e6994cd6ec4787ebcdaa5e7bb8048054e77ed423bb6511838b6ce2690c72e31",
    R"F1803053feC(FUN_1802416a0)F1803053feC",
    R"F1803053feD()F1803053feD",
    R"F1803053feT()F1803053feT",
    R"F1803053feF(11: return;)F1803053feF",
    R"F1803053feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803053feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803053fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803053fe", "FUN_1803053fe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x5c0), 0x58, 3, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 1e6994cd6ec4787ebcdaa5e7bb8048054e77ed423bb6511838b6ce2690c72e31
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x5c0),0x58,3,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x1803053fe;
}

// 0x1803054af FUN_1803054af
// source: re/dump/decompile/0x1803054af_FUN_1803054af.c
// size: 45 bytes; thunk: false
// body sha256: 4a7dbc0e521f6cc84d0f4910defa077c5a852fcbe29f2eddbd7b98c6961428ca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803054af{
    "0x1803054af",
    "FUN_1803054af",
    R"F1803054afS(undefined FUN_1803054af())F1803054afS",
    R"B1803054af(// 0x1803054af  FUN_1803054af
// size=45 thunk=false
// signature: undefined FUN_1803054af()
// status: ok


void FUN_1803054af(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x1ba0),0x58,3,FUN_1802416a0);
  return;
}


)B1803054af",
    "4a7dbc0e521f6cc84d0f4910defa077c5a852fcbe29f2eddbd7b98c6961428ca",
    R"F1803054afC(FUN_1802416a0)F1803054afC",
    R"F1803054afD()F1803054afD",
    R"F1803054afT()F1803054afT",
    R"F1803054afF(11: return;)F1803054afF",
    R"F1803054afU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803054afU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803054af() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803054af", "FUN_1803054af");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x1ba0), 0x58, 3, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 4a7dbc0e521f6cc84d0f4910defa077c5a852fcbe29f2eddbd7b98c6961428ca
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x1ba0),0x58,3,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x1803054af;
}

// 0x1803054f4 FUN_1803054f4
// source: re/dump/decompile/0x1803054f4_FUN_1803054f4.c
// size: 45 bytes; thunk: false
// body sha256: aeab33ea8572013c3e09167d5ee7753536bcc44a4dce9e546080431c53b67d58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803054f4{
    "0x1803054f4",
    "FUN_1803054f4",
    R"F1803054f4S(undefined FUN_1803054f4())F1803054f4S",
    R"B1803054f4(// 0x1803054f4  FUN_1803054f4
// size=45 thunk=false
// signature: undefined FUN_1803054f4()
// status: ok


void FUN_1803054f4(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0xdb0),0x58,7,FUN_1802416a0);
  return;
}


)B1803054f4",
    "aeab33ea8572013c3e09167d5ee7753536bcc44a4dce9e546080431c53b67d58",
    R"F1803054f4C(FUN_1802416a0)F1803054f4C",
    R"F1803054f4D()F1803054f4D",
    R"F1803054f4T()F1803054f4T",
    R"F1803054f4F(11: return;)F1803054f4F",
    R"F1803054f4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803054f4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803054f4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803054f4", "FUN_1803054f4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0xdb0), 0x58, 7, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: aeab33ea8572013c3e09167d5ee7753536bcc44a4dce9e546080431c53b67d58
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0xdb0),0x58,7,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x1803054f4;
}

// 0x18030555d FUN_18030555d
// source: re/dump/decompile/0x18030555d_FUN_18030555d.c
// size: 45 bytes; thunk: false
// body sha256: 2053f4af6966dd1e61b78072fd77c661b6656141d10e22aab7857fce71ec6873
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030555d{
    "0x18030555d",
    "FUN_18030555d",
    R"F18030555dS(undefined FUN_18030555d())F18030555dS",
    R"B18030555d(// 0x18030555d  FUN_18030555d
// size=45 thunk=false
// signature: undefined FUN_18030555d()
// status: ok


void FUN_18030555d(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x1180),0x58,1,FUN_1802416a0);
  return;
}


)B18030555d",
    "2053f4af6966dd1e61b78072fd77c661b6656141d10e22aab7857fce71ec6873",
    R"F18030555dC(FUN_1802416a0)F18030555dC",
    R"F18030555dD()F18030555dD",
    R"F18030555dT()F18030555dT",
    R"F18030555dF(11: return;)F18030555dF",
    R"F18030555dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030555dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030555d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030555d", "FUN_18030555d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x1180), 0x58, 1, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 2053f4af6966dd1e61b78072fd77c661b6656141d10e22aab7857fce71ec6873
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x1180),0x58,1,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x18030555d;
}

// 0x1803055a2 FUN_1803055a2
// source: re/dump/decompile/0x1803055a2_FUN_1803055a2.c
// size: 45 bytes; thunk: false
// body sha256: 4560d8dec2cae58253cd148b50a8f9762b74522bd7fa7b4b088233112186fec3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803055a2{
    "0x1803055a2",
    "FUN_1803055a2",
    R"F1803055a2S(undefined FUN_1803055a2())F1803055a2S",
    R"B1803055a2(// 0x1803055a2  FUN_1803055a2
// size=45 thunk=false
// signature: undefined FUN_1803055a2()
// status: ok


void FUN_1803055a2(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x1320),0x58,2,FUN_1802416a0);
  return;
}


)B1803055a2",
    "4560d8dec2cae58253cd148b50a8f9762b74522bd7fa7b4b088233112186fec3",
    R"F1803055a2C(FUN_1802416a0)F1803055a2C",
    R"F1803055a2D()F1803055a2D",
    R"F1803055a2T()F1803055a2T",
    R"F1803055a2F(11: return;)F1803055a2F",
    R"F1803055a2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803055a2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803055a2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803055a2", "FUN_1803055a2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x1320), 0x58, 2, &image::FUN_1802416a0);
    trace.call_target("FUN_1802416a0", reinterpret_cast<const void*>(&image::FUN_1802416a0));
    // body sha256: 4560d8dec2cae58253cd148b50a8f9762b74522bd7fa7b4b088233112186fec3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x1320),0x58,2,FUN_1802416a0);");
            trace.statement("return;");
        }
    return kFunction_0x1803055a2;
}

// 0x180305850 FUN_180305850
// source: re/dump/decompile/0x180305850_FUN_180305850.c
// size: 41 bytes; thunk: false
// body sha256: e79aa8207458119e28f6d2f7c14950f11d912b03c5b4e19349d1235ea7b90cad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305850{
    "0x180305850",
    "FUN_180305850",
    R"F180305850S(undefined FUN_180305850())F180305850S",
    R"B180305850(// 0x180305850  FUN_180305850
// size=41 thunk=false
// signature: undefined FUN_180305850()
// status: ok


void FUN_180305850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b1b0(param_2 + 0x88);
  }
  return;
}


)B180305850",
    "e79aa8207458119e28f6d2f7c14950f11d912b03c5b4e19349d1235ea7b90cad",
    R"F180305850C(FUN_18021b1b0)F180305850C",
    R"F180305850D()F180305850D",
    R"F180305850T()F180305850T",
    R"F180305850F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F180305850F",
    R"F180305850U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305850() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305850", "FUN_180305850");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b1b0", param_2 + 0x88);
    trace.call_target("FUN_18021b1b0", reinterpret_cast<const void*>(&image::FUN_18021b1b0));
    // body sha256: e79aa8207458119e28f6d2f7c14950f11d912b03c5b4e19349d1235ea7b90cad
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18021b1b0(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180305850;
}

// 0x180305c60 FUN_180305c60
// source: re/dump/decompile/0x180305c60_FUN_180305c60.c
// size: 41 bytes; thunk: false
// body sha256: c9809870a5d722859d9dbb4c3704fd2e7e4fe6d452cfce95123ea13406c8996a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305c60{
    "0x180305c60",
    "FUN_180305c60",
    R"F180305c60S(undefined FUN_180305c60())F180305c60S",
    R"B180305c60(// 0x180305c60  FUN_180305c60
// size=41 thunk=false
// signature: undefined FUN_180305c60()
// status: ok


void FUN_180305c60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


)B180305c60",
    "c9809870a5d722859d9dbb4c3704fd2e7e4fe6d452cfce95123ea13406c8996a",
    R"F180305c60C()F180305c60C",
    R"F180305c60D()F180305c60D",
    R"F180305c60T()F180305c60T",
    R"F180305c60F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F180305c60F",
    R"F180305c60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305c60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305c60", "FUN_180305c60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xd0);
    // body sha256: c9809870a5d722859d9dbb4c3704fd2e7e4fe6d452cfce95123ea13406c8996a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180305c60;
}

// 0x180305c89 FUN_180305c89
// source: re/dump/decompile/0x180305c89_FUN_180305c89.c
// size: 41 bytes; thunk: false
// body sha256: 42bc394714d080ed60dc32bdec916f4fb2ea2c3a70ac882e2a783a5e061b2ece
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305c89{
    "0x180305c89",
    "FUN_180305c89",
    R"F180305c89S(undefined FUN_180305c89())F180305c89S",
    R"B180305c89(// 0x180305c89  FUN_180305c89
// size=41 thunk=false
// signature: undefined FUN_180305c89()
// status: ok


void FUN_180305c89(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B180305c89",
    "42bc394714d080ed60dc32bdec916f4fb2ea2c3a70ac882e2a783a5e061b2ece",
    R"F180305c89C()F180305c89C",
    R"F180305c89D()F180305c89D",
    R"F180305c89T()F180305c89T",
    R"F180305c89F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F180305c89F",
    R"F180305c89U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305c89U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305c89() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305c89", "FUN_180305c89");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x98);
    // body sha256: 42bc394714d080ed60dc32bdec916f4fb2ea2c3a70ac882e2a783a5e061b2ece
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180305c89;
}

// 0x180305cb2 FUN_180305cb2
// source: re/dump/decompile/0x180305cb2_FUN_180305cb2.c
// size: 38 bytes; thunk: false
// body sha256: faa02d9575bb92fac208e5d70521110cb38a7e88477df012efd940c59dc1a5b3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305cb2{
    "0x180305cb2",
    "FUN_180305cb2",
    R"F180305cb2S(undefined FUN_180305cb2())F180305cb2S",
    R"B180305cb2(// 0x180305cb2  FUN_180305cb2
// size=38 thunk=false
// signature: undefined FUN_180305cb2()
// status: ok


void FUN_180305cb2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B180305cb2",
    "faa02d9575bb92fac208e5d70521110cb38a7e88477df012efd940c59dc1a5b3",
    R"F180305cb2C()F180305cb2C",
    R"F180305cb2D()F180305cb2D",
    R"F180305cb2T()F180305cb2T",
    R"F180305cb2F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F180305cb2F",
    R"F180305cb2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305cb2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305cb2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305cb2", "FUN_180305cb2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x78);
    // body sha256: faa02d9575bb92fac208e5d70521110cb38a7e88477df012efd940c59dc1a5b3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180305cb2;
}

// 0x180305d68 FUN_180305d68
// source: re/dump/decompile/0x180305d68_FUN_180305d68.c
// size: 38 bytes; thunk: false
// body sha256: c6cecc7e28fadb73eacd4afdfe88f078c6a159209a65e845139b5906b0879721
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305d68{
    "0x180305d68",
    "FUN_180305d68",
    R"F180305d68S(undefined FUN_180305d68())F180305d68S",
    R"B180305d68(// 0x180305d68  FUN_180305d68
// size=38 thunk=false
// signature: undefined FUN_180305d68()
// status: ok


void FUN_180305d68(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B180305d68",
    "c6cecc7e28fadb73eacd4afdfe88f078c6a159209a65e845139b5906b0879721",
    R"F180305d68C()F180305d68C",
    R"F180305d68D()F180305d68D",
    R"F180305d68T()F180305d68T",
    R"F180305d68F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F180305d68F",
    R"F180305d68U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305d68U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305d68() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305d68", "FUN_180305d68");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x50);
    // body sha256: c6cecc7e28fadb73eacd4afdfe88f078c6a159209a65e845139b5906b0879721
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180305d68;
}

// 0x180305d8e FUN_180305d8e
// source: re/dump/decompile/0x180305d8e_FUN_180305d8e.c
// size: 41 bytes; thunk: false
// body sha256: 5a6379c8a7a23d3f0fcf3bbeae647a3a86b96c2e32c6fb336a685f0407f53b6c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305d8e{
    "0x180305d8e",
    "FUN_180305d8e",
    R"F180305d8eS(undefined FUN_180305d8e())F180305d8eS",
    R"B180305d8e(// 0x180305d8e  FUN_180305d8e
// size=41 thunk=false
// signature: undefined FUN_180305d8e()
// status: ok


void FUN_180305d8e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


)B180305d8e",
    "5a6379c8a7a23d3f0fcf3bbeae647a3a86b96c2e32c6fb336a685f0407f53b6c",
    R"F180305d8eC()F180305d8eC",
    R"F180305d8eD()F180305d8eD",
    R"F180305d8eT()F180305d8eT",
    R"F180305d8eF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F180305d8eF",
    R"F180305d8eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305d8eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305d8e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305d8e", "FUN_180305d8e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xb0);
    // body sha256: 5a6379c8a7a23d3f0fcf3bbeae647a3a86b96c2e32c6fb336a685f0407f53b6c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180305d8e;
}

// 0x180305db7 FUN_180305db7
// source: re/dump/decompile/0x180305db7_FUN_180305db7.c
// size: 38 bytes; thunk: false
// body sha256: 0893ba636a7d07718d7341ddb685b0308ea7e0b8df8e10099255d9163c13f18b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180305db7{
    "0x180305db7",
    "FUN_180305db7",
    R"F180305db7S(undefined FUN_180305db7())F180305db7S",
    R"B180305db7(// 0x180305db7  FUN_180305db7
// size=38 thunk=false
// signature: undefined FUN_180305db7()
// status: ok


void FUN_180305db7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B180305db7",
    "0893ba636a7d07718d7341ddb685b0308ea7e0b8df8e10099255d9163c13f18b",
    R"F180305db7C()F180305db7C",
    R"F180305db7D()F180305db7D",
    R"F180305db7T()F180305db7T",
    R"F180305db7F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F180305db7F",
    R"F180305db7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180305db7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180305db7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180305db7", "FUN_180305db7");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x70);
    // body sha256: 0893ba636a7d07718d7341ddb685b0308ea7e0b8df8e10099255d9163c13f18b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180305db7;
}

// 0x1803060d4 FUN_1803060d4
// source: re/dump/decompile/0x1803060d4_FUN_1803060d4.c
// size: 41 bytes; thunk: false
// body sha256: f1bc138e4f9880094f28c2cbc91e568c125070dbd40ae532ea0f77c070e10ce0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803060d4{
    "0x1803060d4",
    "FUN_1803060d4",
    R"F1803060d4S(undefined FUN_1803060d4())F1803060d4S",
    R"B1803060d4(// 0x1803060d4  FUN_1803060d4
// size=41 thunk=false
// signature: undefined FUN_1803060d4()
// status: ok


void FUN_1803060d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1803060d4",
    "f1bc138e4f9880094f28c2cbc91e568c125070dbd40ae532ea0f77c070e10ce0",
    R"F1803060d4C()F1803060d4C",
    R"F1803060d4D()F1803060d4D",
    R"F1803060d4T()F1803060d4T",
    R"F1803060d4F(10: if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
14: return;)F1803060d4F",
    R"F1803060d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803060d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803060d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803060d4", "FUN_1803060d4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x140);
    // body sha256: f1bc138e4f9880094f28c2cbc91e568c125070dbd40ae532ea0f77c070e10ce0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x60) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x60, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1803060d4;
}

// 0x180306140 FUN_180306140
// source: re/dump/decompile/0x180306140_FUN_180306140.c
// size: 38 bytes; thunk: false
// body sha256: 18a49fec5a1e47e83e8d02f74a71c7f25ad50672dadd0e28765d1071e4afa92f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306140{
    "0x180306140",
    "FUN_180306140",
    R"F180306140S(undefined FUN_180306140())F180306140S",
    R"B180306140(// 0x180306140  FUN_180306140
// size=38 thunk=false
// signature: undefined FUN_180306140()
// status: ok


void FUN_180306140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18020c610(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B180306140",
    "18a49fec5a1e47e83e8d02f74a71c7f25ad50672dadd0e28765d1071e4afa92f",
    R"F180306140C(FUN_18020c610)F180306140C",
    R"F180306140D()F180306140D",
    R"F180306140T()F180306140T",
    R"F180306140F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F180306140F",
    R"F180306140U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180306140U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306140() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306140", "FUN_180306140");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020c610", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_18020c610", reinterpret_cast<const void*>(&image::FUN_18020c610));
    // body sha256: 18a49fec5a1e47e83e8d02f74a71c7f25ad50672dadd0e28765d1071e4afa92f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_18020c610(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x180306140;
}

// 0x180306166 FUN_180306166
// source: re/dump/decompile/0x180306166_FUN_180306166.c
// size: 38 bytes; thunk: false
// body sha256: 624ee3dbdd562ad30651916e38c55c20a54f33e2acc6d9ea2da6c978c6dccd6b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306166{
    "0x180306166",
    "FUN_180306166",
    R"F180306166S(undefined FUN_180306166())F180306166S",
    R"B180306166(// 0x180306166  FUN_180306166
// size=38 thunk=false
// signature: undefined FUN_180306166()
// status: ok


void FUN_180306166(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_18020c610(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B180306166",
    "624ee3dbdd562ad30651916e38c55c20a54f33e2acc6d9ea2da6c978c6dccd6b",
    R"F180306166C(FUN_18020c610)F180306166C",
    R"F180306166D()F180306166D",
    R"F180306166T()F180306166T",
    R"F180306166F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F180306166F",
    R"F180306166U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180306166U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306166() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306166", "FUN_180306166");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020c610", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_18020c610", reinterpret_cast<const void*>(&image::FUN_18020c610));
    // body sha256: 624ee3dbdd562ad30651916e38c55c20a54f33e2acc6d9ea2da6c978c6dccd6b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_18020c610(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x180306166;
}

// 0x18030618c FUN_18030618c
// source: re/dump/decompile/0x18030618c_FUN_18030618c.c
// size: 29 bytes; thunk: false
// body sha256: 1d492b1a119721080677352d362213c5dbcb548910a55c7086db0fc284fc2f19
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030618c{
    "0x18030618c",
    "FUN_18030618c",
    R"F18030618cS(undefined FUN_18030618c())F18030618cS",
    R"B18030618c(// 0x18030618c  FUN_18030618c
// size=29 thunk=false
// signature: undefined FUN_18030618c()
// status: ok


void FUN_18030618c(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}


)B18030618c",
    "1d492b1a119721080677352d362213c5dbcb548910a55c7086db0fc284fc2f19",
    R"F18030618cC()F18030618cC",
    R"F18030618cD()F18030618cD",
    R"F18030618cT()F18030618cT",
    R"F18030618cF(11: return;)F18030618cF",
    R"F18030618cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030618cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030618c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030618c", "FUN_18030618c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x30));
    // body sha256: 1d492b1a119721080677352d362213c5dbcb548910a55c7086db0fc284fc2f19
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x18030618c;
}

// 0x1803061d5 FUN_1803061d5
// source: re/dump/decompile/0x1803061d5_FUN_1803061d5.c
// size: 38 bytes; thunk: false
// body sha256: 0704d6d37a821d320bb3c1289192aed5da73fa7811b353bed9bd9afa34d8d036
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803061d5{
    "0x1803061d5",
    "FUN_1803061d5",
    R"F1803061d5S(undefined FUN_1803061d5())F1803061d5S",
    R"B1803061d5(// 0x1803061d5  FUN_1803061d5
// size=38 thunk=false
// signature: undefined FUN_1803061d5()
// status: ok


void FUN_1803061d5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18020c610(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1803061d5",
    "0704d6d37a821d320bb3c1289192aed5da73fa7811b353bed9bd9afa34d8d036",
    R"F1803061d5C(FUN_18020c610)F1803061d5C",
    R"F1803061d5D()F1803061d5D",
    R"F1803061d5T()F1803061d5T",
    R"F1803061d5F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1803061d5F",
    R"F1803061d5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803061d5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803061d5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803061d5", "FUN_1803061d5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020c610", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_18020c610", reinterpret_cast<const void*>(&image::FUN_18020c610));
    // body sha256: 0704d6d37a821d320bb3c1289192aed5da73fa7811b353bed9bd9afa34d8d036
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18020c610(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1803061d5;
}

// 0x1803062ac FUN_1803062ac
// source: re/dump/decompile/0x1803062ac_FUN_1803062ac.c
// size: 41 bytes; thunk: false
// body sha256: 7db42f97c3b031dfa66c1af61c560303c696cd052edc353a957f673ab73d923e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803062ac{
    "0x1803062ac",
    "FUN_1803062ac",
    R"F1803062acS(undefined FUN_1803062ac())F1803062acS",
    R"B1803062ac(// 0x1803062ac  FUN_1803062ac
// size=41 thunk=false
// signature: undefined FUN_1803062ac()
// status: ok


void FUN_1803062ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1803062ac",
    "7db42f97c3b031dfa66c1af61c560303c696cd052edc353a957f673ab73d923e",
    R"F1803062acC()F1803062acC",
    R"F1803062acD()F1803062acD",
    R"F1803062acT()F1803062acT",
    R"F1803062acF(10: if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
14: return;)F1803062acF",
    R"F1803062acU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803062acU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803062ac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803062ac", "FUN_1803062ac");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x140);
    // body sha256: 7db42f97c3b031dfa66c1af61c560303c696cd052edc353a957f673ab73d923e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x50, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1803062ac;
}

// 0x180306560 FUN_180306560
// source: re/dump/decompile/0x180306560_FUN_180306560.c
// size: 22 bytes; thunk: false
// body sha256: bc45c42e518733fe62c5e155447dbc025eb0e69618d6786987980a2d691d746d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306560{
    "0x180306560",
    "FUN_180306560",
    R"F180306560S(undefined FUN_180306560())F180306560S",
    R"B180306560(// 0x180306560  FUN_180306560
// size=22 thunk=false
// signature: undefined FUN_180306560()
// status: ok


void FUN_180306560(void)

{
  DAT_1805c7db8 = DAT_1805c7db8 & 0xfffffffe;
  return;
}


)B180306560",
    "bc45c42e518733fe62c5e155447dbc025eb0e69618d6786987980a2d691d746d",
    R"F180306560C()F180306560C",
    R"F180306560D(DAT_1805c7db8)F180306560D",
    R"F180306560T()F180306560T",
    R"F180306560F(11: return;)F180306560F",
    R"F180306560U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7db8.)F180306560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306560() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306560", "FUN_180306560");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7db8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7db8", static_cast<const void*>(&image::DAT_1805c7db8));
    // body sha256: bc45c42e518733fe62c5e155447dbc025eb0e69618d6786987980a2d691d746d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7db8 = DAT_1805c7db8 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x180306560;
}

// 0x1803065c0 FUN_1803065c0
// source: re/dump/decompile/0x1803065c0_FUN_1803065c0.c
// size: 22 bytes; thunk: false
// body sha256: c1fde90983e6ed8f4f910b9c62756de99e4e2a50cdb8ae4f3d4832d3834fb4d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803065c0{
    "0x1803065c0",
    "FUN_1803065c0",
    R"F1803065c0S(undefined FUN_1803065c0())F1803065c0S",
    R"B1803065c0(// 0x1803065c0  FUN_1803065c0
// size=22 thunk=false
// signature: undefined FUN_1803065c0()
// status: ok


void FUN_1803065c0(void)

{
  DAT_1805c8400 = DAT_1805c8400 & 0xfffffffe;
  return;
}


)B1803065c0",
    "c1fde90983e6ed8f4f910b9c62756de99e4e2a50cdb8ae4f3d4832d3834fb4d9",
    R"F1803065c0C()F1803065c0C",
    R"F1803065c0D(DAT_1805c8400)F1803065c0D",
    R"F1803065c0T()F1803065c0T",
    R"F1803065c0F(11: return;)F1803065c0F",
    R"F1803065c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c8400.)F1803065c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803065c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803065c0", "FUN_1803065c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c8400.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c8400", static_cast<const void*>(&image::DAT_1805c8400));
    // body sha256: c1fde90983e6ed8f4f910b9c62756de99e4e2a50cdb8ae4f3d4832d3834fb4d9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c8400 = DAT_1805c8400 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1803065c0;
}

// 0x180306620 FUN_180306620
// source: re/dump/decompile/0x180306620_FUN_180306620.c
// size: 22 bytes; thunk: false
// body sha256: 4df3d10afb8a6d2af60baf4566d66b327fbe27d7cd1c3dbb4db9f7e08757fb1f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306620{
    "0x180306620",
    "FUN_180306620",
    R"F180306620S(undefined FUN_180306620())F180306620S",
    R"B180306620(// 0x180306620  FUN_180306620
// size=22 thunk=false
// signature: undefined FUN_180306620()
// status: ok


void FUN_180306620(void)

{
  DAT_1805c7e00 = DAT_1805c7e00 & 0xfffffffe;
  return;
}


)B180306620",
    "4df3d10afb8a6d2af60baf4566d66b327fbe27d7cd1c3dbb4db9f7e08757fb1f",
    R"F180306620C()F180306620C",
    R"F180306620D(DAT_1805c7e00)F180306620D",
    R"F180306620T()F180306620T",
    R"F180306620F(11: return;)F180306620F",
    R"F180306620U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7e00.)F180306620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306620() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306620", "FUN_180306620");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7e00.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7e00", static_cast<const void*>(&image::DAT_1805c7e00));
    // body sha256: 4df3d10afb8a6d2af60baf4566d66b327fbe27d7cd1c3dbb4db9f7e08757fb1f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7e00 = DAT_1805c7e00 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x180306620;
}

// 0x1803066a0 FUN_1803066a0
// source: re/dump/decompile/0x1803066a0_FUN_1803066a0.c
// size: 22 bytes; thunk: false
// body sha256: 74d73e5f37561234fc4edea70e6e087da847d813ade965043ff72d06663468af
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803066a0{
    "0x1803066a0",
    "FUN_1803066a0",
    R"F1803066a0S(undefined FUN_1803066a0())F1803066a0S",
    R"B1803066a0(// 0x1803066a0  FUN_1803066a0
// size=22 thunk=false
// signature: undefined FUN_1803066a0()
// status: ok


void FUN_1803066a0(void)

{
  DAT_1805c7dbc = DAT_1805c7dbc & 0xfffffffe;
  return;
}


)B1803066a0",
    "74d73e5f37561234fc4edea70e6e087da847d813ade965043ff72d06663468af",
    R"F1803066a0C()F1803066a0C",
    R"F1803066a0D(DAT_1805c7dbc)F1803066a0D",
    R"F1803066a0T()F1803066a0T",
    R"F1803066a0F(11: return;)F1803066a0F",
    R"F1803066a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7dbc.)F1803066a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803066a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803066a0", "FUN_1803066a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7dbc.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7dbc", static_cast<const void*>(&image::DAT_1805c7dbc));
    // body sha256: 74d73e5f37561234fc4edea70e6e087da847d813ade965043ff72d06663468af
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7dbc = DAT_1805c7dbc & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1803066a0;
}

// 0x180306720 FUN_180306720
// source: re/dump/decompile/0x180306720_FUN_180306720.c
// size: 22 bytes; thunk: false
// body sha256: 1c1ccf6688fbf9d79e5a6a595af4df84b6cba4a3a71735ca6e7badc706d9ae7c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306720{
    "0x180306720",
    "FUN_180306720",
    R"F180306720S(undefined FUN_180306720())F180306720S",
    R"B180306720(// 0x180306720  FUN_180306720
// size=22 thunk=false
// signature: undefined FUN_180306720()
// status: ok


void FUN_180306720(void)

{
  DAT_1805c7db4 = DAT_1805c7db4 & 0xfffffffe;
  return;
}


)B180306720",
    "1c1ccf6688fbf9d79e5a6a595af4df84b6cba4a3a71735ca6e7badc706d9ae7c",
    R"F180306720C()F180306720C",
    R"F180306720D(DAT_1805c7db4)F180306720D",
    R"F180306720T()F180306720T",
    R"F180306720F(11: return;)F180306720F",
    R"F180306720U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7db4.)F180306720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306720() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306720", "FUN_180306720");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7db4.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7db4", static_cast<const void*>(&image::DAT_1805c7db4));
    // body sha256: 1c1ccf6688fbf9d79e5a6a595af4df84b6cba4a3a71735ca6e7badc706d9ae7c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7db4 = DAT_1805c7db4 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x180306720;
}

// 0x1803067a0 FUN_1803067a0
// source: re/dump/decompile/0x1803067a0_FUN_1803067a0.c
// size: 22 bytes; thunk: false
// body sha256: 8d609ccd1f864a4faebad0ef6b68e5c06ee05ab187b4f1c515e254fd1c224a56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803067a0{
    "0x1803067a0",
    "FUN_1803067a0",
    R"F1803067a0S(undefined FUN_1803067a0())F1803067a0S",
    R"B1803067a0(// 0x1803067a0  FUN_1803067a0
// size=22 thunk=false
// signature: undefined FUN_1803067a0()
// status: ok


void FUN_1803067a0(void)

{
  DAT_1805c7db0 = DAT_1805c7db0 & 0xfffffffe;
  return;
}


)B1803067a0",
    "8d609ccd1f864a4faebad0ef6b68e5c06ee05ab187b4f1c515e254fd1c224a56",
    R"F1803067a0C()F1803067a0C",
    R"F1803067a0D(DAT_1805c7db0)F1803067a0D",
    R"F1803067a0T()F1803067a0T",
    R"F1803067a0F(11: return;)F1803067a0F",
    R"F1803067a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7db0.)F1803067a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803067a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803067a0", "FUN_1803067a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7db0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7db0", static_cast<const void*>(&image::DAT_1805c7db0));
    // body sha256: 8d609ccd1f864a4faebad0ef6b68e5c06ee05ab187b4f1c515e254fd1c224a56
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7db0 = DAT_1805c7db0 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1803067a0;
}

// 0x180306820 FUN_180306820
// source: re/dump/decompile/0x180306820_FUN_180306820.c
// size: 22 bytes; thunk: false
// body sha256: 4f78b1781c67a3c5a63c52e5e5f26fc9692fa7893fe2d226b8430c5bf42ff01b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306820{
    "0x180306820",
    "FUN_180306820",
    R"F180306820S(undefined FUN_180306820())F180306820S",
    R"B180306820(// 0x180306820  FUN_180306820
// size=22 thunk=false
// signature: undefined FUN_180306820()
// status: ok


void FUN_180306820(void)

{
  DAT_1805c83b0 = DAT_1805c83b0 & 0xfffffffe;
  return;
}


)B180306820",
    "4f78b1781c67a3c5a63c52e5e5f26fc9692fa7893fe2d226b8430c5bf42ff01b",
    R"F180306820C()F180306820C",
    R"F180306820D(DAT_1805c83b0)F180306820D",
    R"F180306820T()F180306820T",
    R"F180306820F(11: return;)F180306820F",
    R"F180306820U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c83b0.)F180306820U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306820() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306820", "FUN_180306820");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c83b0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c83b0", static_cast<const void*>(&image::DAT_1805c83b0));
    // body sha256: 4f78b1781c67a3c5a63c52e5e5f26fc9692fa7893fe2d226b8430c5bf42ff01b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c83b0 = DAT_1805c83b0 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x180306820;
}

// 0x1803068a0 FUN_1803068a0
// source: re/dump/decompile/0x1803068a0_FUN_1803068a0.c
// size: 22 bytes; thunk: false
// body sha256: 90c613679574fe6071b2f568604903ef516ce8f8d9b403359890b92edf187098
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803068a0{
    "0x1803068a0",
    "FUN_1803068a0",
    R"F1803068a0S(undefined FUN_1803068a0())F1803068a0S",
    R"B1803068a0(// 0x1803068a0  FUN_1803068a0
// size=22 thunk=false
// signature: undefined FUN_1803068a0()
// status: ok


void FUN_1803068a0(void)

{
  DAT_1805c7ea0 = DAT_1805c7ea0 & 0xfffffffe;
  return;
}


)B1803068a0",
    "90c613679574fe6071b2f568604903ef516ce8f8d9b403359890b92edf187098",
    R"F1803068a0C()F1803068a0C",
    R"F1803068a0D(DAT_1805c7ea0)F1803068a0D",
    R"F1803068a0T()F1803068a0T",
    R"F1803068a0F(11: return;)F1803068a0F",
    R"F1803068a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7ea0.)F1803068a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803068a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803068a0", "FUN_1803068a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7ea0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7ea0", static_cast<const void*>(&image::DAT_1805c7ea0));
    // body sha256: 90c613679574fe6071b2f568604903ef516ce8f8d9b403359890b92edf187098
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7ea0 = DAT_1805c7ea0 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1803068a0;
}

// 0x1803068e2 FUN_1803068e2
// source: re/dump/decompile/0x1803068e2_FUN_1803068e2.c
// size: 22 bytes; thunk: false
// body sha256: 528fe56ec6ca9ba2b0deb65bca72ddb13317198ec780e6c30574e4a22e62b672
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803068e2{
    "0x1803068e2",
    "FUN_1803068e2",
    R"F1803068e2S(undefined FUN_1803068e2())F1803068e2S",
    R"B1803068e2(// 0x1803068e2  FUN_1803068e2
// size=22 thunk=false
// signature: undefined FUN_1803068e2()
// status: ok


void FUN_1803068e2(void)

{
  DAT_1805c7ea0 = DAT_1805c7ea0 & 0xfffffffd;
  return;
}


)B1803068e2",
    "528fe56ec6ca9ba2b0deb65bca72ddb13317198ec780e6c30574e4a22e62b672",
    R"F1803068e2C()F1803068e2C",
    R"F1803068e2D(DAT_1805c7ea0)F1803068e2D",
    R"F1803068e2T()F1803068e2T",
    R"F1803068e2F(11: return;)F1803068e2F",
    R"F1803068e2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7ea0.)F1803068e2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803068e2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803068e2", "FUN_1803068e2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7ea0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7ea0", static_cast<const void*>(&image::DAT_1805c7ea0));
    // body sha256: 528fe56ec6ca9ba2b0deb65bca72ddb13317198ec780e6c30574e4a22e62b672
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7ea0 = DAT_1805c7ea0 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1803068e2;
}

// 0x180306990 FUN_180306990
// source: re/dump/decompile/0x180306990_FUN_180306990.c
// size: 22 bytes; thunk: false
// body sha256: cf5e40fa2e1106e09cc25f662c161174a6a151a6457b71519ec6ffec5a05844f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306990{
    "0x180306990",
    "FUN_180306990",
    R"F180306990S(undefined FUN_180306990())F180306990S",
    R"B180306990(// 0x180306990  FUN_180306990
// size=22 thunk=false
// signature: undefined FUN_180306990()
// status: ok


void FUN_180306990(void)

{
  DAT_1805c7ea8 = DAT_1805c7ea8 & 0xfffffffe;
  return;
}


)B180306990",
    "cf5e40fa2e1106e09cc25f662c161174a6a151a6457b71519ec6ffec5a05844f",
    R"F180306990C()F180306990C",
    R"F180306990D(DAT_1805c7ea8)F180306990D",
    R"F180306990T()F180306990T",
    R"F180306990F(11: return;)F180306990F",
    R"F180306990U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7ea8.)F180306990U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306990() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306990", "FUN_180306990");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7ea8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7ea8", static_cast<const void*>(&image::DAT_1805c7ea8));
    // body sha256: cf5e40fa2e1106e09cc25f662c161174a6a151a6457b71519ec6ffec5a05844f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7ea8 = DAT_1805c7ea8 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x180306990;
}

// 0x1803069d2 FUN_1803069d2
// source: re/dump/decompile/0x1803069d2_FUN_1803069d2.c
// size: 22 bytes; thunk: false
// body sha256: 66192dec1c3c4a8014c7e17de375897b68ab7bcd30b0601ab0f63661c2b50518
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803069d2{
    "0x1803069d2",
    "FUN_1803069d2",
    R"F1803069d2S(undefined FUN_1803069d2())F1803069d2S",
    R"B1803069d2(// 0x1803069d2  FUN_1803069d2
// size=22 thunk=false
// signature: undefined FUN_1803069d2()
// status: ok


void FUN_1803069d2(void)

{
  DAT_1805c7ea8 = DAT_1805c7ea8 & 0xfffffffd;
  return;
}


)B1803069d2",
    "66192dec1c3c4a8014c7e17de375897b68ab7bcd30b0601ab0f63661c2b50518",
    R"F1803069d2C()F1803069d2C",
    R"F1803069d2D(DAT_1805c7ea8)F1803069d2D",
    R"F1803069d2T()F1803069d2T",
    R"F1803069d2F(11: return;)F1803069d2F",
    R"F1803069d2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7ea8.)F1803069d2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803069d2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803069d2", "FUN_1803069d2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7ea8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7ea8", static_cast<const void*>(&image::DAT_1805c7ea8));
    // body sha256: 66192dec1c3c4a8014c7e17de375897b68ab7bcd30b0601ab0f63661c2b50518
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7ea8 = DAT_1805c7ea8 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1803069d2;
}

// 0x180306a80 FUN_180306a80
// source: re/dump/decompile/0x180306a80_FUN_180306a80.c
// size: 22 bytes; thunk: false
// body sha256: c657d7634be375ef035b989c8246fe05f61989f15ac51b626298860e63e29676
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306a80{
    "0x180306a80",
    "FUN_180306a80",
    R"F180306a80S(undefined FUN_180306a80())F180306a80S",
    R"B180306a80(// 0x180306a80  FUN_180306a80
// size=22 thunk=false
// signature: undefined FUN_180306a80()
// status: ok


void FUN_180306a80(void)

{
  DAT_1805c7ea4 = DAT_1805c7ea4 & 0xfffffffe;
  return;
}


)B180306a80",
    "c657d7634be375ef035b989c8246fe05f61989f15ac51b626298860e63e29676",
    R"F180306a80C()F180306a80C",
    R"F180306a80D(DAT_1805c7ea4)F180306a80D",
    R"F180306a80T()F180306a80T",
    R"F180306a80F(11: return;)F180306a80F",
    R"F180306a80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7ea4.)F180306a80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306a80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306a80", "FUN_180306a80");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7ea4.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7ea4", static_cast<const void*>(&image::DAT_1805c7ea4));
    // body sha256: c657d7634be375ef035b989c8246fe05f61989f15ac51b626298860e63e29676
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7ea4 = DAT_1805c7ea4 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x180306a80;
}

// 0x180306b00 FUN_180306b00
// source: re/dump/decompile/0x180306b00_FUN_180306b00.c
// size: 22 bytes; thunk: false
// body sha256: 2b46dbce2e12ef5ff5487ad43367c52075441eaf23b00704b51f79ba8a795920
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306b00{
    "0x180306b00",
    "FUN_180306b00",
    R"F180306b00S(undefined FUN_180306b00())F180306b00S",
    R"B180306b00(// 0x180306b00  FUN_180306b00
// size=22 thunk=false
// signature: undefined FUN_180306b00()
// status: ok


void FUN_180306b00(void)

{
  DAT_1805c7e50 = DAT_1805c7e50 & 0xfffffffe;
  return;
}


)B180306b00",
    "2b46dbce2e12ef5ff5487ad43367c52075441eaf23b00704b51f79ba8a795920",
    R"F180306b00C()F180306b00C",
    R"F180306b00D(DAT_1805c7e50)F180306b00D",
    R"F180306b00T()F180306b00T",
    R"F180306b00F(11: return;)F180306b00F",
    R"F180306b00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7e50.)F180306b00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306b00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306b00", "FUN_180306b00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7e50.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7e50", static_cast<const void*>(&image::DAT_1805c7e50));
    // body sha256: 2b46dbce2e12ef5ff5487ad43367c52075441eaf23b00704b51f79ba8a795920
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7e50 = DAT_1805c7e50 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x180306b00;
}

// 0x180306bfc FUN_180306bfc
// source: re/dump/decompile/0x180306bfc_FUN_180306bfc.c
// size: 38 bytes; thunk: false
// body sha256: 8d5a54700a72fdc14becb4e2a165e9ca8729f63daabb23e0c7081dd46c9df6be
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306bfc{
    "0x180306bfc",
    "FUN_180306bfc",
    R"F180306bfcS(undefined FUN_180306bfc())F180306bfcS",
    R"B180306bfc(// 0x180306bfc  FUN_180306bfc
// size=38 thunk=false
// signature: undefined FUN_180306bfc()
// status: ok


void FUN_180306bfc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FUN_18020c610(param_2 + 0x78);
  }
  return;
}


)B180306bfc",
    "8d5a54700a72fdc14becb4e2a165e9ca8729f63daabb23e0c7081dd46c9df6be",
    R"F180306bfcC(FUN_18020c610)F180306bfcC",
    R"F180306bfcD()F180306bfcD",
    R"F180306bfcT()F180306bfcT",
    R"F180306bfcF(10: if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
14: return;)F180306bfcF",
    R"F180306bfcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180306bfcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306bfc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306bfc", "FUN_180306bfc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020c610", param_2 + 0x78);
    trace.call_target("FUN_18020c610", reinterpret_cast<const void*>(&image::FUN_18020c610));
    // body sha256: 8d5a54700a72fdc14becb4e2a165e9ca8729f63daabb23e0c7081dd46c9df6be
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x50) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x50, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;");
                trace.statement("FUN_18020c610(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180306bfc;
}

// 0x180306c22 FUN_180306c22
// source: re/dump/decompile/0x180306c22_FUN_180306c22.c
// size: 32 bytes; thunk: false
// body sha256: ea5773f60163d6fadd0d4e86883fb4fdff91145fabb1f6c165e81e7f6dd24bd5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180306c22{
    "0x180306c22",
    "FUN_180306c22",
    R"F180306c22S(undefined FUN_180306c22())F180306c22S",
    R"B180306c22(// 0x180306c22  FUN_180306c22
// size=32 thunk=false
// signature: undefined FUN_180306c22()
// status: ok


void FUN_180306c22(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x90));
  return;
}


)B180306c22",
    "ea5773f60163d6fadd0d4e86883fb4fdff91145fabb1f6c165e81e7f6dd24bd5",
    R"F180306c22C()F180306c22C",
    R"F180306c22D()F180306c22D",
    R"F180306c22T()F180306c22T",
    R"F180306c22F(11: return;)F180306c22F",
    R"F180306c22U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180306c22U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180306c22() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180306c22", "FUN_180306c22");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x90));
    // body sha256: ea5773f60163d6fadd0d4e86883fb4fdff91145fabb1f6c165e81e7f6dd24bd5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x90));");
            trace.statement("return;");
        }
    return kFunction_0x180306c22;
}

// 0x1803070a0 FUN_1803070a0
// source: re/dump/decompile/0x1803070a0_FUN_1803070a0.c
// size: 22 bytes; thunk: false
// body sha256: ba40310f9ce2dcf669ffe6ef82e54d73b59b132e192d3ab0a586413b1703e98c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803070a0{
    "0x1803070a0",
    "FUN_1803070a0",
    R"F1803070a0S(undefined FUN_1803070a0())F1803070a0S",
    R"B1803070a0(// 0x1803070a0  FUN_1803070a0
// size=22 thunk=false
// signature: undefined FUN_1803070a0()
// status: ok


void FUN_1803070a0(void)

{
  DAT_1805c8404 = DAT_1805c8404 & 0xfffffffe;
  return;
}


)B1803070a0",
    "ba40310f9ce2dcf669ffe6ef82e54d73b59b132e192d3ab0a586413b1703e98c",
    R"F1803070a0C()F1803070a0C",
    R"F1803070a0D(DAT_1805c8404)F1803070a0D",
    R"F1803070a0T()F1803070a0T",
    R"F1803070a0F(11: return;)F1803070a0F",
    R"F1803070a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c8404.)F1803070a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803070a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803070a0", "FUN_1803070a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c8404.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c8404", static_cast<const void*>(&image::DAT_1805c8404));
    // body sha256: ba40310f9ce2dcf669ffe6ef82e54d73b59b132e192d3ab0a586413b1703e98c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c8404 = DAT_1805c8404 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1803070a0;
}

// 0x1803071ec FUN_1803071ec
// source: re/dump/decompile/0x1803071ec_FUN_1803071ec.c
// size: 139 bytes; thunk: false
// body sha256: cdf76120dd5e8818f9990c998737629a06b52ad80114684dfacc1a5ac8dc55b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1803071ec{
    "0x1803071ec",
    "FUN_1803071ec",
    R"F1803071ecS(undefined FUN_1803071ec())F1803071ecS",
    R"B1803071ec(// 0x1803071ec  FUN_1803071ec
// size=139 thunk=false
// signature: undefined FUN_1803071ec()
// status: ok


void FUN_1803071ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0x108);
  *(longlong *)(param_2 + 0x50) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  lVar3 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_2 + 0x60) = lVar3 * 0x10 + lVar1;
  FUN_18023a4a0(lVar3 * 0x10 + lVar1,lVar3 * 0x20 + lVar1,lVar1);
  *(undefined8 *)(param_2 + 0x48) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x40);
  FUN_180220c00(lVar1 + lVar3 * 0x20,*puVar4,lVar3 * 0x10 + lVar1);
  *puVar4 = uVar2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


)B1803071ec",
    "cdf76120dd5e8818f9990c998737629a06b52ad80114684dfacc1a5ac8dc55b6",
    R"F1803071ecC(FUN_180220c00
FUN_18023a4a0)F1803071ecC",
    R"F1803071ecD()F1803071ecD",
    R"F1803071ecT()F1803071ecT",
    R"F1803071ecF(linear body (no explicit branch keyword found))F1803071ecF",
    R"F1803071ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1803071ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1803071ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1803071ec", "FUN_1803071ec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::uint64_t uVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t * puVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: (void *)0x0,(ThrowInfo *)0x0
    trace.call_arguments("FUN_18023a4a0", lVar3 * 0x10 + lVar1, lVar3 * 0x20 + lVar1, lVar1);
    trace.call_arguments("FUN_180220c00", lVar1 + lVar3 * 0x20, *puVar4, lVar3 * 0x10 + lVar1);
    trace.call_target("FUN_180220c00", reinterpret_cast<const void*>(&image::FUN_180220c00));
    trace.call_target("FUN_18023a4a0", reinterpret_cast<const void*>(&image::FUN_18023a4a0));
    // body sha256: cdf76120dd5e8818f9990c998737629a06b52ad80114684dfacc1a5ac8dc55b6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("undefined8 uVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 *puVar4;");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x30);");
            trace.statement("lVar1 = *(longlong *)(param_2 + 0x108);");
            trace.statement("*(longlong *)(param_2 + 0x50) = lVar1;");
            trace.statement("uVar2 = *(undefined8 *)(param_2 + 0x38);");
            trace.statement("*(undefined8 *)(param_2 + 0x58) = uVar2;");
            trace.statement("lVar3 = *(longlong *)(param_2 + 0x28);");
            trace.statement("*(longlong *)(param_2 + 0x60) = lVar3 * 0x10 + lVar1;");
            trace.statement("FUN_18023a4a0(lVar3 * 0x10 + lVar1,lVar3 * 0x20 + lVar1,lVar1);");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = 0;");
            trace.statement("puVar4 = *(undefined8 **)(param_2 + 0x40);");
            trace.statement("FUN_180220c00(lVar1 + lVar3 * 0x20,*puVar4,lVar3 * 0x10 + lVar1);");
            trace.statement("*puVar4 = uVar2;");
            trace.statement("_CxxThrowException((void *)0x0,(ThrowInfo *)0x0);");
        }
    return kFunction_0x1803071ec;
}

// 0x180307284 FUN_180307284
// source: re/dump/decompile/0x180307284_FUN_180307284.c
// size: 82 bytes; thunk: false
// body sha256: c1b300f7f73a92e967e8bb6a3f2379e560b611f4e86b429e580cb326957cdd59
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180307284{
    "0x180307284",
    "FUN_180307284",
    R"F180307284S(undefined FUN_180307284())F180307284S",
    R"B180307284(// 0x180307284  FUN_180307284
// size=82 thunk=false
// signature: undefined FUN_180307284()
// status: ok


void FUN_180307284(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x108);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x28);
  puVar2 = *(undefined8 **)(param_2 + 0x40);
  FUN_18023a4a0();
  *(undefined8 *)(param_2 + 0x48) = 0;
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


)B180307284",
    "c1b300f7f73a92e967e8bb6a3f2379e560b611f4e86b429e580cb326957cdd59",
    R"F180307284C(FUN_18023a4a0)F180307284C",
    R"F180307284D()F180307284D",
    R"F180307284T()F180307284T",
    R"F180307284F(linear body (no explicit branch keyword found))F180307284F",
    R"F180307284U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180307284U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180307284() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180307284", "FUN_180307284");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::uint64_t * puVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for _CxxThrowException: (void *)0x0,(ThrowInfo *)0x0
    trace.call_arguments("FUN_18023a4a0");
    trace.call_target("FUN_18023a4a0", reinterpret_cast<const void*>(&image::FUN_18023a4a0));
    // body sha256: c1b300f7f73a92e967e8bb6a3f2379e560b611f4e86b429e580cb326957cdd59
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("undefined8 *puVar2;");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x30);");
            trace.statement("*(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x108);");
            trace.statement("uVar1 = *(undefined8 *)(param_2 + 0x38);");
            trace.statement("*(undefined8 *)(param_2 + 0x58) = uVar1;");
            trace.statement("*(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x28);");
            trace.statement("puVar2 = *(undefined8 **)(param_2 + 0x40);");
            trace.statement("FUN_18023a4a0();");
            trace.statement("*(undefined8 *)(param_2 + 0x48) = 0;");
            trace.statement("*puVar2 = uVar1;");
            trace.statement("_CxxThrowException((void *)0x0,(ThrowInfo *)0x0);");
        }
    return kFunction_0x180307284;
}

}  // namespace sf::reconstructed
