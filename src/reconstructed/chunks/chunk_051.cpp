// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802ee138 FUN_1802ee138
// source: re/dump/decompile/0x1802ee138_FUN_1802ee138.c
// size: 38 bytes; thunk: false
// body sha256: 86472923d63ce6cf8f232e833382c858c0bc57972b00984b1820357207bb9d16
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee138{
    "0x1802ee138",
    "FUN_1802ee138",
    R"F1802ee138S(undefined FUN_1802ee138())F1802ee138S",
    R"B1802ee138(// 0x1802ee138  FUN_1802ee138
// size=38 thunk=false
// signature: undefined FUN_1802ee138()
// status: ok


void FUN_1802ee138(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802ee138",
    "86472923d63ce6cf8f232e833382c858c0bc57972b00984b1820357207bb9d16",
    R"F1802ee138C()F1802ee138C",
    R"F1802ee138D()F1802ee138D",
    R"F1802ee138T()F1802ee138T",
    R"F1802ee138F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ee138F",
    R"F1802ee138U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee138U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee138() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee138", "FUN_1802ee138");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 86472923d63ce6cf8f232e833382c858c0bc57972b00984b1820357207bb9d16
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee138;
}

// 0x1802ee176 FUN_1802ee176
// source: re/dump/decompile/0x1802ee176_FUN_1802ee176.c
// size: 38 bytes; thunk: false
// body sha256: 0dd54406d9b2a1bce99212d9843f384696c64be286fd9a374eb4066204feeff7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee176{
    "0x1802ee176",
    "FUN_1802ee176",
    R"F1802ee176S(undefined FUN_1802ee176())F1802ee176S",
    R"B1802ee176(// 0x1802ee176  FUN_1802ee176
// size=38 thunk=false
// signature: undefined FUN_1802ee176()
// status: ok


void FUN_1802ee176(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802ee176",
    "0dd54406d9b2a1bce99212d9843f384696c64be286fd9a374eb4066204feeff7",
    R"F1802ee176C()F1802ee176C",
    R"F1802ee176D()F1802ee176D",
    R"F1802ee176T()F1802ee176T",
    R"F1802ee176F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ee176F",
    R"F1802ee176U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee176U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee176() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee176", "FUN_1802ee176");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x70);
    // body sha256: 0dd54406d9b2a1bce99212d9843f384696c64be286fd9a374eb4066204feeff7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee176;
}

// 0x1802ee19c FUN_1802ee19c
// source: re/dump/decompile/0x1802ee19c_FUN_1802ee19c.c
// size: 38 bytes; thunk: false
// body sha256: 46e7a60a2313dd3b9889451020092e8f49adf6e2883a43bc2d71ea1eb9be625a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee19c{
    "0x1802ee19c",
    "FUN_1802ee19c",
    R"F1802ee19cS(undefined FUN_1802ee19c())F1802ee19cS",
    R"B1802ee19c(// 0x1802ee19c  FUN_1802ee19c
// size=38 thunk=false
// signature: undefined FUN_1802ee19c()
// status: ok


void FUN_1802ee19c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ee19c",
    "46e7a60a2313dd3b9889451020092e8f49adf6e2883a43bc2d71ea1eb9be625a",
    R"F1802ee19cC()F1802ee19cC",
    R"F1802ee19cD()F1802ee19cD",
    R"F1802ee19cT()F1802ee19cT",
    R"F1802ee19cF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802ee19cF",
    R"F1802ee19cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee19cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee19c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee19c", "FUN_1802ee19c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 46e7a60a2313dd3b9889451020092e8f49adf6e2883a43bc2d71ea1eb9be625a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee19c;
}

// 0x1802ee1e6 FUN_1802ee1e6
// source: re/dump/decompile/0x1802ee1e6_FUN_1802ee1e6.c
// size: 41 bytes; thunk: false
// body sha256: b629dac4542a6f0a4ceed7176e52a16a8ee6dd07dac96dbd294f969aabd87713
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee1e6{
    "0x1802ee1e6",
    "FUN_1802ee1e6",
    R"F1802ee1e6S(undefined FUN_1802ee1e6())F1802ee1e6S",
    R"B1802ee1e6(// 0x1802ee1e6  FUN_1802ee1e6
// size=41 thunk=false
// signature: undefined FUN_1802ee1e6()
// status: ok


void FUN_1802ee1e6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


)B1802ee1e6",
    "b629dac4542a6f0a4ceed7176e52a16a8ee6dd07dac96dbd294f969aabd87713",
    R"F1802ee1e6C()F1802ee1e6C",
    R"F1802ee1e6D()F1802ee1e6D",
    R"F1802ee1e6T()F1802ee1e6T",
    R"F1802ee1e6F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802ee1e6F",
    R"F1802ee1e6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee1e6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee1e6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee1e6", "FUN_1802ee1e6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xb0);
    // body sha256: b629dac4542a6f0a4ceed7176e52a16a8ee6dd07dac96dbd294f969aabd87713
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee1e6;
}

// 0x1802ee254 FUN_1802ee254
// source: re/dump/decompile/0x1802ee254_FUN_1802ee254.c
// size: 42 bytes; thunk: false
// body sha256: 489a15f48c2fa08b3396f94f69b69fb915623611e08c0553f2d3ec509611c927
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee254{
    "0x1802ee254",
    "FUN_1802ee254",
    R"F1802ee254S(undefined FUN_1802ee254())F1802ee254S",
    R"B1802ee254(// 0x1802ee254  FUN_1802ee254
// size=42 thunk=false
// signature: undefined FUN_1802ee254()
// status: ok


void FUN_1802ee254(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(param_2 + 0x48),0x20,1,
             Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
  return;
}


)B1802ee254",
    "489a15f48c2fa08b3396f94f69b69fb915623611e08c0553f2d3ec509611c927",
    R"F1802ee254C()F1802ee254C",
    R"F1802ee254D()F1802ee254D",
    R"F1802ee254T()F1802ee254T",
    R"F1802ee254F(13: return;)F1802ee254F",
    R"F1802ee254U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee254U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee254() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee254", "FUN_1802ee254");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 489a15f48c2fa08b3396f94f69b69fb915623611e08c0553f2d3ec509611c927
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_");
            trace.statement("((void *)(param_2 + 0x48),0x20,1,");
            trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);");
            trace.statement("return;");
        }
    return kFunction_0x1802ee254;
}

// 0x1802ee2ba FUN_1802ee2ba
// source: re/dump/decompile/0x1802ee2ba_FUN_1802ee2ba.c
// size: 41 bytes; thunk: false
// body sha256: 9dbeeb666d0bca45d70a6196986cf73fd4d0bc7751d479a1cd55f3a3b41266fe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee2ba{
    "0x1802ee2ba",
    "FUN_1802ee2ba",
    R"F1802ee2baS(undefined FUN_1802ee2ba())F1802ee2baS",
    R"B1802ee2ba(// 0x1802ee2ba  FUN_1802ee2ba
// size=41 thunk=false
// signature: undefined FUN_1802ee2ba()
// status: ok


void FUN_1802ee2ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


)B1802ee2ba",
    "9dbeeb666d0bca45d70a6196986cf73fd4d0bc7751d479a1cd55f3a3b41266fe",
    R"F1802ee2baC()F1802ee2baC",
    R"F1802ee2baD()F1802ee2baD",
    R"F1802ee2baT()F1802ee2baT",
    R"F1802ee2baF(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ee2baF",
    R"F1802ee2baU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee2baU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee2ba() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee2ba", "FUN_1802ee2ba");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x90);
    // body sha256: 9dbeeb666d0bca45d70a6196986cf73fd4d0bc7751d479a1cd55f3a3b41266fe
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee2ba;
}

// 0x1802ee2e3 FUN_1802ee2e3
// source: re/dump/decompile/0x1802ee2e3_FUN_1802ee2e3.c
// size: 41 bytes; thunk: false
// body sha256: be0f989e67f781b0198da43f16189ebd4671feeeea9db9c37618ff38f8b52105
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee2e3{
    "0x1802ee2e3",
    "FUN_1802ee2e3",
    R"F1802ee2e3S(undefined FUN_1802ee2e3())F1802ee2e3S",
    R"B1802ee2e3(// 0x1802ee2e3  FUN_1802ee2e3
// size=41 thunk=false
// signature: undefined FUN_1802ee2e3()
// status: ok


void FUN_1802ee2e3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


)B1802ee2e3",
    "be0f989e67f781b0198da43f16189ebd4671feeeea9db9c37618ff38f8b52105",
    R"F1802ee2e3C()F1802ee2e3C",
    R"F1802ee2e3D()F1802ee2e3D",
    R"F1802ee2e3T()F1802ee2e3T",
    R"F1802ee2e3F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802ee2e3F",
    R"F1802ee2e3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee2e3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee2e3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee2e3", "FUN_1802ee2e3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x108);
    // body sha256: be0f989e67f781b0198da43f16189ebd4671feeeea9db9c37618ff38f8b52105
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee2e3;
}

// 0x1802ee8a0 FUN_1802ee8a0
// source: re/dump/decompile/0x1802ee8a0_FUN_1802ee8a0.c
// size: 38 bytes; thunk: false
// body sha256: 0868170faa176a029ef36f60d3d934acdb467f4d6eb50f4d21136c0a08df0e47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee8a0{
    "0x1802ee8a0",
    "FUN_1802ee8a0",
    R"F1802ee8a0S(undefined FUN_1802ee8a0())F1802ee8a0S",
    R"B1802ee8a0(// 0x1802ee8a0  FUN_1802ee8a0
// size=38 thunk=false
// signature: undefined FUN_1802ee8a0()
// status: ok


void FUN_1802ee8a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18014cc90(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802ee8a0",
    "0868170faa176a029ef36f60d3d934acdb467f4d6eb50f4d21136c0a08df0e47",
    R"F1802ee8a0C(FUN_18014cc90)F1802ee8a0C",
    R"F1802ee8a0D()F1802ee8a0D",
    R"F1802ee8a0T()F1802ee8a0T",
    R"F1802ee8a0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ee8a0F",
    R"F1802ee8a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee8a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee8a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee8a0", "FUN_1802ee8a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18014cc90", load_at<std::uint64_t>(param_2 + 0x30, 0));
    trace.call_target("FUN_18014cc90", reinterpret_cast<const void*>(&image::FUN_18014cc90));
    // body sha256: 0868170faa176a029ef36f60d3d934acdb467f4d6eb50f4d21136c0a08df0e47
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_18014cc90(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee8a0;
}

// 0x1802ee93e FUN_1802ee93e
// source: re/dump/decompile/0x1802ee93e_FUN_1802ee93e.c
// size: 59 bytes; thunk: false
// body sha256: 0d17f5b6a29c4b491d39d316929ce565d97ed135d91269726c40786139deca88
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee93e{
    "0x1802ee93e",
    "FUN_1802ee93e",
    R"F1802ee93eS(undefined FUN_1802ee93e())F1802ee93eS",
    R"B1802ee93e(// 0x1802ee93e  FUN_1802ee93e
// size=59 thunk=false
// signature: undefined FUN_1802ee93e()
// status: ok


undefined8 FUN_1802ee93e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_2 + 0x30);
  *puVar1 = 0;
  FUN_180212700(puVar1 + 8,"read failed",0xb);
  return 0;
}


)B1802ee93e",
    "0d17f5b6a29c4b491d39d316929ce565d97ed135d91269726c40786139deca88",
    R"F1802ee93eC(FUN_180212700)F1802ee93eC",
    R"F1802ee93eD()F1802ee93eD",
    R"F1802ee93eT("read failed")F1802ee93eT",
    R"F1802ee93eF(15: return 0;)F1802ee93eF",
    R"F1802ee93eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee93eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee93e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee93e", "FUN_1802ee93e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint8_t * puVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180212700", puVar1 + 8, "read failed", 0xb);
    trace.call_target("FUN_180212700", reinterpret_cast<const void*>(&image::FUN_180212700));
    trace.string_literal("read failed");
    // body sha256: 0d17f5b6a29c4b491d39d316929ce565d97ed135d91269726c40786139deca88
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined1 *puVar1;");
            trace.statement("puVar1 = *(undefined1 **)(param_2 + 0x30);");
            trace.statement("*puVar1 = 0;");
            trace.statement("FUN_180212700(puVar1 + 8,\"read failed\",0xb);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802ee93e;
}

// 0x1802ee9fc FUN_1802ee9fc
// source: re/dump/decompile/0x1802ee9fc_FUN_1802ee9fc.c
// size: 38 bytes; thunk: false
// body sha256: 21f1b97c35a9550ec78429137655866024c5728f453e4f6970b3e6082e9f0bc1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ee9fc{
    "0x1802ee9fc",
    "FUN_1802ee9fc",
    R"F1802ee9fcS(undefined FUN_1802ee9fc())F1802ee9fcS",
    R"B1802ee9fc(// 0x1802ee9fc  FUN_1802ee9fc
// size=38 thunk=false
// signature: undefined FUN_1802ee9fc()
// status: ok


void FUN_1802ee9fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ee9fc",
    "21f1b97c35a9550ec78429137655866024c5728f453e4f6970b3e6082e9f0bc1",
    R"F1802ee9fcC()F1802ee9fcC",
    R"F1802ee9fcD()F1802ee9fcD",
    R"F1802ee9fcT()F1802ee9fcT",
    R"F1802ee9fcF(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ee9fcF",
    R"F1802ee9fcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ee9fcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ee9fc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ee9fc", "FUN_1802ee9fc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 21f1b97c35a9550ec78429137655866024c5728f453e4f6970b3e6082e9f0bc1
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ee9fc;
}

// 0x1802eea22 FUN_1802eea22
// source: re/dump/decompile/0x1802eea22_FUN_1802eea22.c
// size: 38 bytes; thunk: false
// body sha256: fcf373cf9a79e6a223198900b862b209f0389509ee565f027a8cb33cab8d8288
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eea22{
    "0x1802eea22",
    "FUN_1802eea22",
    R"F1802eea22S(undefined FUN_1802eea22())F1802eea22S",
    R"B1802eea22(// 0x1802eea22  FUN_1802eea22
// size=38 thunk=false
// signature: undefined FUN_1802eea22()
// status: ok


void FUN_1802eea22(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


)B1802eea22",
    "fcf373cf9a79e6a223198900b862b209f0389509ee565f027a8cb33cab8d8288",
    R"F1802eea22C()F1802eea22C",
    R"F1802eea22D()F1802eea22D",
    R"F1802eea22T()F1802eea22T",
    R"F1802eea22F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802eea22F",
    R"F1802eea22U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eea22U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eea22() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eea22", "FUN_1802eea22");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x40);
    // body sha256: fcf373cf9a79e6a223198900b862b209f0389509ee565f027a8cb33cab8d8288
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eea22;
}

// 0x1802eea48 FUN_1802eea48
// source: re/dump/decompile/0x1802eea48_FUN_1802eea48.c
// size: 41 bytes; thunk: false
// body sha256: 6bdf8e433b73e7cf00249ddfb5fff27ac27ae18ebb77761d588f91732a121132
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eea48{
    "0x1802eea48",
    "FUN_1802eea48",
    R"F1802eea48S(undefined FUN_1802eea48())F1802eea48S",
    R"B1802eea48(// 0x1802eea48  FUN_1802eea48
// size=41 thunk=false
// signature: undefined FUN_1802eea48()
// status: ok


void FUN_1802eea48(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


)B1802eea48",
    "6bdf8e433b73e7cf00249ddfb5fff27ac27ae18ebb77761d588f91732a121132",
    R"F1802eea48C()F1802eea48C",
    R"F1802eea48D()F1802eea48D",
    R"F1802eea48T()F1802eea48T",
    R"F1802eea48F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802eea48F",
    R"F1802eea48U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eea48U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eea48() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eea48", "FUN_1802eea48");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x160);
    // body sha256: 6bdf8e433b73e7cf00249ddfb5fff27ac27ae18ebb77761d588f91732a121132
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eea48;
}

// 0x1802eea80 FUN_1802eea80
// source: re/dump/decompile/0x1802eea80_FUN_1802eea80.c
// size: 41 bytes; thunk: false
// body sha256: ff25fadbb791b04ed62f6ccd5666c60ac6aeb335d763a35a728d2f8d69b9451a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eea80{
    "0x1802eea80",
    "FUN_1802eea80",
    R"F1802eea80S(undefined FUN_1802eea80())F1802eea80S",
    R"B1802eea80(// 0x1802eea80  FUN_1802eea80
// size=41 thunk=false
// signature: undefined FUN_1802eea80()
// status: ok


void FUN_1802eea80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802eea80",
    "ff25fadbb791b04ed62f6ccd5666c60ac6aeb335d763a35a728d2f8d69b9451a",
    R"F1802eea80C()F1802eea80C",
    R"F1802eea80D()F1802eea80D",
    R"F1802eea80T()F1802eea80T",
    R"F1802eea80F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802eea80F",
    R"F1802eea80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eea80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eea80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eea80", "FUN_1802eea80");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: ff25fadbb791b04ed62f6ccd5666c60ac6aeb335d763a35a728d2f8d69b9451a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eea80;
}

// 0x1802eeab5 FUN_1802eeab5
// source: re/dump/decompile/0x1802eeab5_FUN_1802eeab5.c
// size: 41 bytes; thunk: false
// body sha256: 0fc7d8aadb79a08bf71ad0b2fcb78d4bde74b6426f259d618fd331a50ac87a46
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeab5{
    "0x1802eeab5",
    "FUN_1802eeab5",
    R"F1802eeab5S(undefined FUN_1802eeab5())F1802eeab5S",
    R"B1802eeab5(// 0x1802eeab5  FUN_1802eeab5
// size=41 thunk=false
// signature: undefined FUN_1802eeab5()
// status: ok


void FUN_1802eeab5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802eeab5",
    "0fc7d8aadb79a08bf71ad0b2fcb78d4bde74b6426f259d618fd331a50ac87a46",
    R"F1802eeab5C()F1802eeab5C",
    R"F1802eeab5D()F1802eeab5D",
    R"F1802eeab5T()F1802eeab5T",
    R"F1802eeab5F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802eeab5F",
    R"F1802eeab5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeab5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeab5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeab5", "FUN_1802eeab5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: 0fc7d8aadb79a08bf71ad0b2fcb78d4bde74b6426f259d618fd331a50ac87a46
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeab5;
}

// 0x1802eeade FUN_1802eeade
// source: re/dump/decompile/0x1802eeade_FUN_1802eeade.c
// size: 38 bytes; thunk: false
// body sha256: 3c5999f704785776a7c138d2022b0d7aa957d0d1f3213d426ffc0ceee0fce9d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeade{
    "0x1802eeade",
    "FUN_1802eeade",
    R"F1802eeadeS(undefined FUN_1802eeade())F1802eeadeS",
    R"B1802eeade(// 0x1802eeade  FUN_1802eeade
// size=38 thunk=false
// signature: undefined FUN_1802eeade()
// status: ok


void FUN_1802eeade(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802eeade",
    "3c5999f704785776a7c138d2022b0d7aa957d0d1f3213d426ffc0ceee0fce9d2",
    R"F1802eeadeC()F1802eeadeC",
    R"F1802eeadeD()F1802eeadeD",
    R"F1802eeadeT()F1802eeadeT",
    R"F1802eeadeF(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802eeadeF",
    R"F1802eeadeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeadeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeade() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeade", "FUN_1802eeade");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 3c5999f704785776a7c138d2022b0d7aa957d0d1f3213d426ffc0ceee0fce9d2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeade;
}

// 0x1802eeb10 FUN_1802eeb10
// source: re/dump/decompile/0x1802eeb10_FUN_1802eeb10.c
// size: 41 bytes; thunk: false
// body sha256: ce71676ef7754448bf73ecf8b0c9e407cef4a2b861cfe10a3bd5373e24aa70f9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeb10{
    "0x1802eeb10",
    "FUN_1802eeb10",
    R"F1802eeb10S(undefined FUN_1802eeb10())F1802eeb10S",
    R"B1802eeb10(// 0x1802eeb10  FUN_1802eeb10
// size=41 thunk=false
// signature: undefined FUN_1802eeb10()
// status: ok


void FUN_1802eeb10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


)B1802eeb10",
    "ce71676ef7754448bf73ecf8b0c9e407cef4a2b861cfe10a3bd5373e24aa70f9",
    R"F1802eeb10C()F1802eeb10C",
    R"F1802eeb10D()F1802eeb10D",
    R"F1802eeb10T()F1802eeb10T",
    R"F1802eeb10F(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802eeb10F",
    R"F1802eeb10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeb10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeb10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeb10", "FUN_1802eeb10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe8);
    // body sha256: ce71676ef7754448bf73ecf8b0c9e407cef4a2b861cfe10a3bd5373e24aa70f9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeb10;
}

// 0x1802eeb39 FUN_1802eeb39
// source: re/dump/decompile/0x1802eeb39_FUN_1802eeb39.c
// size: 38 bytes; thunk: false
// body sha256: 57a1ec7bb2dd8c0a2c750985e09ddcd742e2b6dc7e38c04031d66da806dd00cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeb39{
    "0x1802eeb39",
    "FUN_1802eeb39",
    R"F1802eeb39S(undefined FUN_1802eeb39())F1802eeb39S",
    R"B1802eeb39(// 0x1802eeb39  FUN_1802eeb39
// size=38 thunk=false
// signature: undefined FUN_1802eeb39()
// status: ok


void FUN_1802eeb39(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802eeb39",
    "57a1ec7bb2dd8c0a2c750985e09ddcd742e2b6dc7e38c04031d66da806dd00cd",
    R"F1802eeb39C()F1802eeb39C",
    R"F1802eeb39D()F1802eeb39D",
    R"F1802eeb39T()F1802eeb39T",
    R"F1802eeb39F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802eeb39F",
    R"F1802eeb39U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeb39U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeb39() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeb39", "FUN_1802eeb39");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x68);
    // body sha256: 57a1ec7bb2dd8c0a2c750985e09ddcd742e2b6dc7e38c04031d66da806dd00cd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeb39;
}

// 0x1802eeb5f FUN_1802eeb5f
// source: re/dump/decompile/0x1802eeb5f_FUN_1802eeb5f.c
// size: 41 bytes; thunk: false
// body sha256: 3883aa054ecce6fb372286a192f9cc4fffd18f53289d7e17364b59a0020d4c2c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeb5f{
    "0x1802eeb5f",
    "FUN_1802eeb5f",
    R"F1802eeb5fS(undefined FUN_1802eeb5f())F1802eeb5fS",
    R"B1802eeb5f(// 0x1802eeb5f  FUN_1802eeb5f
// size=41 thunk=false
// signature: undefined FUN_1802eeb5f()
// status: ok


void FUN_1802eeb5f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


)B1802eeb5f",
    "3883aa054ecce6fb372286a192f9cc4fffd18f53289d7e17364b59a0020d4c2c",
    R"F1802eeb5fC()F1802eeb5fC",
    R"F1802eeb5fD()F1802eeb5fD",
    R"F1802eeb5fT()F1802eeb5fT",
    R"F1802eeb5fF(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802eeb5fF",
    R"F1802eeb5fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeb5fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeb5f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeb5f", "FUN_1802eeb5f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 200);
    // body sha256: 3883aa054ecce6fb372286a192f9cc4fffd18f53289d7e17364b59a0020d4c2c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeb5f;
}

// 0x1802eebc0 FUN_1802eebc0
// source: re/dump/decompile/0x1802eebc0_FUN_1802eebc0.c
// size: 41 bytes; thunk: false
// body sha256: 3b034caeb3534dfc031a39dd38084c64ac909eb5888272f02d3f9f9eac2484fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eebc0{
    "0x1802eebc0",
    "FUN_1802eebc0",
    R"F1802eebc0S(undefined FUN_1802eebc0())F1802eebc0S",
    R"B1802eebc0(// 0x1802eebc0  FUN_1802eebc0
// size=41 thunk=false
// signature: undefined FUN_1802eebc0()
// status: ok


void FUN_1802eebc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_18014ddf0(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


)B1802eebc0",
    "3b034caeb3534dfc031a39dd38084c64ac909eb5888272f02d3f9f9eac2484fb",
    R"F1802eebc0C(FUN_18014ddf0)F1802eebc0C",
    R"F1802eebc0D()F1802eebc0D",
    R"F1802eebc0T()F1802eebc0T",
    R"F1802eebc0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802eebc0F",
    R"F1802eebc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eebc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eebc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eebc0", "FUN_1802eebc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18014ddf0", load_at<std::uint64_t>(param_2 + 0xc0, 0));
    trace.call_target("FUN_18014ddf0", reinterpret_cast<const void*>(&image::FUN_18014ddf0));
    // body sha256: 3b034caeb3534dfc031a39dd38084c64ac909eb5888272f02d3f9f9eac2484fb
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("FUN_18014ddf0(*(undefined8 *)(param_2 + 0xc0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eebc0;
}

// 0x1802eec25 FUN_1802eec25
// source: re/dump/decompile/0x1802eec25_FUN_1802eec25.c
// size: 41 bytes; thunk: false
// body sha256: 2bc26b0a98490d489612ee6721597a53f32aa71754ebee229e37b66943a8cbf8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eec25{
    "0x1802eec25",
    "FUN_1802eec25",
    R"F1802eec25S(undefined FUN_1802eec25())F1802eec25S",
    R"B1802eec25(// 0x1802eec25  FUN_1802eec25
// size=41 thunk=false
// signature: undefined FUN_1802eec25()
// status: ok


void FUN_1802eec25(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


)B1802eec25",
    "2bc26b0a98490d489612ee6721597a53f32aa71754ebee229e37b66943a8cbf8",
    R"F1802eec25C()F1802eec25C",
    R"F1802eec25D()F1802eec25D",
    R"F1802eec25T()F1802eec25T",
    R"F1802eec25F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802eec25F",
    R"F1802eec25U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eec25U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eec25() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eec25", "FUN_1802eec25");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xd0);
    // body sha256: 2bc26b0a98490d489612ee6721597a53f32aa71754ebee229e37b66943a8cbf8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eec25;
}

// 0x1802eec4e FUN_1802eec4e
// source: re/dump/decompile/0x1802eec4e_FUN_1802eec4e.c
// size: 38 bytes; thunk: false
// body sha256: e9672cbe32ff78c8dfa5f5b6235cd1ee4d3d990e18887a266bbd354b2590889b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eec4e{
    "0x1802eec4e",
    "FUN_1802eec4e",
    R"F1802eec4eS(undefined FUN_1802eec4e())F1802eec4eS",
    R"B1802eec4e(// 0x1802eec4e  FUN_1802eec4e
// size=38 thunk=false
// signature: undefined FUN_1802eec4e()
// status: ok


void FUN_1802eec4e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


)B1802eec4e",
    "e9672cbe32ff78c8dfa5f5b6235cd1ee4d3d990e18887a266bbd354b2590889b",
    R"F1802eec4eC()F1802eec4eC",
    R"F1802eec4eD()F1802eec4eD",
    R"F1802eec4eT()F1802eec4eT",
    R"F1802eec4eF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802eec4eF",
    R"F1802eec4eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eec4eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eec4e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eec4e", "FUN_1802eec4e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x60);
    // body sha256: e9672cbe32ff78c8dfa5f5b6235cd1ee4d3d990e18887a266bbd354b2590889b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eec4e;
}

// 0x1802eecec FUN_1802eecec
// source: re/dump/decompile/0x1802eecec_FUN_1802eecec.c
// size: 38 bytes; thunk: false
// body sha256: 558b758f42b3905beba52689a10783e70166977cb6a3ecbe5085029ddf0edc42
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eecec{
    "0x1802eecec",
    "FUN_1802eecec",
    R"F1802eececS(undefined FUN_1802eecec())F1802eececS",
    R"B1802eecec(// 0x1802eecec  FUN_1802eecec
// size=38 thunk=false
// signature: undefined FUN_1802eecec()
// status: ok


void FUN_1802eecec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802eecec",
    "558b758f42b3905beba52689a10783e70166977cb6a3ecbe5085029ddf0edc42",
    R"F1802eececC()F1802eececC",
    R"F1802eececD()F1802eececD",
    R"F1802eececT()F1802eececT",
    R"F1802eececF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802eececF",
    R"F1802eececU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eececU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eecec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eecec", "FUN_1802eecec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18020d5c0", load_at<std::uint64_t>(param_2 + 0x40, 0));
    // body sha256: 558b758f42b3905beba52689a10783e70166977cb6a3ecbe5085029ddf0edc42
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eecec;
}

// 0x1802eed2c FUN_1802eed2c
// source: re/dump/decompile/0x1802eed2c_FUN_1802eed2c.c
// size: 38 bytes; thunk: false
// body sha256: a40886963e83e8e0af3a0a68d4fc9cca0798d6478506d4949feead46ba78ea1b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eed2c{
    "0x1802eed2c",
    "FUN_1802eed2c",
    R"F1802eed2cS(undefined FUN_1802eed2c())F1802eed2cS",
    R"B1802eed2c(// 0x1802eed2c  FUN_1802eed2c
// size=38 thunk=false
// signature: undefined FUN_1802eed2c()
// status: ok


void FUN_1802eed2c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021c730(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802eed2c",
    "a40886963e83e8e0af3a0a68d4fc9cca0798d6478506d4949feead46ba78ea1b",
    R"F1802eed2cC()F1802eed2cC",
    R"F1802eed2cD()F1802eed2cD",
    R"F1802eed2cT()F1802eed2cT",
    R"F1802eed2cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802eed2cF",
    R"F1802eed2cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eed2cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eed2c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eed2c", "FUN_1802eed2c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021c730", load_at<std::uint64_t>(param_2 + 0x40, 0));
    // body sha256: a40886963e83e8e0af3a0a68d4fc9cca0798d6478506d4949feead46ba78ea1b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021c730(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eed2c;
}

// 0x1802eed60 FUN_1802eed60
// source: re/dump/decompile/0x1802eed60_FUN_1802eed60.c
// size: 22 bytes; thunk: false
// body sha256: 64d4b0269e9d519ff9e68af5e77cb27b01ff9e8bee993133f2a4e8af82cbb76b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eed60{
    "0x1802eed60",
    "FUN_1802eed60",
    R"F1802eed60S(undefined FUN_1802eed60())F1802eed60S",
    R"B1802eed60(// 0x1802eed60  FUN_1802eed60
// size=22 thunk=false
// signature: undefined FUN_1802eed60()
// status: ok


void FUN_1802eed60(void)

{
  DAT_180430158 = DAT_180430158 & 0xfffffffe;
  return;
}


)B1802eed60",
    "64d4b0269e9d519ff9e68af5e77cb27b01ff9e8bee993133f2a4e8af82cbb76b",
    R"F1802eed60C()F1802eed60C",
    R"F1802eed60D(DAT_180430158)F1802eed60D",
    R"F1802eed60T()F1802eed60T",
    R"F1802eed60F(11: return;)F1802eed60F",
    R"F1802eed60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180430158.)F1802eed60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eed60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eed60", "FUN_1802eed60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180430158.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180430158", static_cast<const void*>(&image::DAT_180430158));
    // body sha256: 64d4b0269e9d519ff9e68af5e77cb27b01ff9e8bee993133f2a4e8af82cbb76b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180430158 = DAT_180430158 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802eed60;
}

// 0x1802eed80 FUN_1802eed80
// source: re/dump/decompile/0x1802eed80_FUN_1802eed80.c
// size: 38 bytes; thunk: false
// body sha256: b9d265d260658e345b2908513bf52eceeac672ae8d6ac337979916e2c727ee19
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eed80{
    "0x1802eed80",
    "FUN_1802eed80",
    R"F1802eed80S(undefined FUN_1802eed80())F1802eed80S",
    R"B1802eed80(// 0x1802eed80  FUN_1802eed80
// size=38 thunk=false
// signature: undefined FUN_1802eed80()
// status: ok


void FUN_1802eed80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802eed80",
    "b9d265d260658e345b2908513bf52eceeac672ae8d6ac337979916e2c727ee19",
    R"F1802eed80C()F1802eed80C",
    R"F1802eed80D()F1802eed80D",
    R"F1802eed80T()F1802eed80T",
    R"F1802eed80F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802eed80F",
    R"F1802eed80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eed80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eed80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eed80", "FUN_1802eed80");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: b9d265d260658e345b2908513bf52eceeac672ae8d6ac337979916e2c727ee19
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eed80;
}

// 0x1802eeda6 FUN_1802eeda6
// source: re/dump/decompile/0x1802eeda6_FUN_1802eeda6.c
// size: 38 bytes; thunk: false
// body sha256: 3a6a58a514dbab1108ea58c7d9d4aac3c1051581da7a6c56bd4c31d6a1b1869c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeda6{
    "0x1802eeda6",
    "FUN_1802eeda6",
    R"F1802eeda6S(undefined FUN_1802eeda6())F1802eeda6S",
    R"B1802eeda6(// 0x1802eeda6  FUN_1802eeda6
// size=38 thunk=false
// signature: undefined FUN_1802eeda6()
// status: ok


void FUN_1802eeda6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802eeda6",
    "3a6a58a514dbab1108ea58c7d9d4aac3c1051581da7a6c56bd4c31d6a1b1869c",
    R"F1802eeda6C()F1802eeda6C",
    R"F1802eeda6D()F1802eeda6D",
    R"F1802eeda6T()F1802eeda6T",
    R"F1802eeda6F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802eeda6F",
    R"F1802eeda6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeda6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeda6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeda6", "FUN_1802eeda6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: 3a6a58a514dbab1108ea58c7d9d4aac3c1051581da7a6c56bd4c31d6a1b1869c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeda6;
}

// 0x1802eedd8 FUN_1802eedd8
// source: re/dump/decompile/0x1802eedd8_FUN_1802eedd8.c
// size: 38 bytes; thunk: false
// body sha256: 5ffc4c968b71f7a0da671092fac50e4be287f524495d731978106470b3432211
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eedd8{
    "0x1802eedd8",
    "FUN_1802eedd8",
    R"F1802eedd8S(undefined FUN_1802eedd8())F1802eedd8S",
    R"B1802eedd8(// 0x1802eedd8  FUN_1802eedd8
// size=38 thunk=false
// signature: undefined FUN_1802eedd8()
// status: ok


void FUN_1802eedd8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}


)B1802eedd8",
    "5ffc4c968b71f7a0da671092fac50e4be287f524495d731978106470b3432211",
    R"F1802eedd8C()F1802eedd8C",
    R"F1802eedd8D()F1802eedd8D",
    R"F1802eedd8T()F1802eedd8T",
    R"F1802eedd8F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802eedd8F",
    R"F1802eedd8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eedd8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eedd8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eedd8", "FUN_1802eedd8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x68, 0));
    // body sha256: 5ffc4c968b71f7a0da671092fac50e4be287f524495d731978106470b3432211
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x68));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eedd8;
}

// 0x1802eedfe FUN_1802eedfe
// source: re/dump/decompile/0x1802eedfe_FUN_1802eedfe.c
// size: 38 bytes; thunk: false
// body sha256: 5634cf0b9f08e775daced8e4179c9dc8acdbba75ba64d4d1ea18f7a78912ec44
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eedfe{
    "0x1802eedfe",
    "FUN_1802eedfe",
    R"F1802eedfeS(undefined FUN_1802eedfe())F1802eedfeS",
    R"B1802eedfe(// 0x1802eedfe  FUN_1802eedfe
// size=38 thunk=false
// signature: undefined FUN_1802eedfe()
// status: ok


void FUN_1802eedfe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}


)B1802eedfe",
    "5634cf0b9f08e775daced8e4179c9dc8acdbba75ba64d4d1ea18f7a78912ec44",
    R"F1802eedfeC()F1802eedfeC",
    R"F1802eedfeD()F1802eedfeD",
    R"F1802eedfeT()F1802eedfeT",
    R"F1802eedfeF(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802eedfeF",
    R"F1802eedfeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eedfeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eedfe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eedfe", "FUN_1802eedfe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x68, 0));
    // body sha256: 5634cf0b9f08e775daced8e4179c9dc8acdbba75ba64d4d1ea18f7a78912ec44
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x68));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eedfe;
}

// 0x1802eee80 FUN_1802eee80
// source: re/dump/decompile/0x1802eee80_FUN_1802eee80.c
// size: 22 bytes; thunk: false
// body sha256: 092e4073856f5923cc6412a0c259da6a82425c47af2e9f1866412a06e0e85a8f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eee80{
    "0x1802eee80",
    "FUN_1802eee80",
    R"F1802eee80S(undefined FUN_1802eee80())F1802eee80S",
    R"B1802eee80(// 0x1802eee80  FUN_1802eee80
// size=22 thunk=false
// signature: undefined FUN_1802eee80()
// status: ok


void FUN_1802eee80(void)

{
  DAT_1805c3928 = DAT_1805c3928 & 0xfffffffe;
  return;
}


)B1802eee80",
    "092e4073856f5923cc6412a0c259da6a82425c47af2e9f1866412a06e0e85a8f",
    R"F1802eee80C()F1802eee80C",
    R"F1802eee80D(DAT_1805c3928)F1802eee80D",
    R"F1802eee80T()F1802eee80T",
    R"F1802eee80F(11: return;)F1802eee80F",
    R"F1802eee80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c3928.)F1802eee80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eee80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eee80", "FUN_1802eee80");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c3928.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c3928", static_cast<const void*>(&image::DAT_1805c3928));
    // body sha256: 092e4073856f5923cc6412a0c259da6a82425c47af2e9f1866412a06e0e85a8f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c3928 = DAT_1805c3928 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802eee80;
}

// 0x1802eeea2 FUN_1802eeea2
// source: re/dump/decompile/0x1802eeea2_FUN_1802eeea2.c
// size: 38 bytes; thunk: false
// body sha256: a84991eefda9432a7df711689f0322215e207c2cfaf24272e444fe03766d9570
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeea2{
    "0x1802eeea2",
    "FUN_1802eeea2",
    R"F1802eeea2S(undefined FUN_1802eeea2())F1802eeea2S",
    R"B1802eeea2(// 0x1802eeea2  FUN_1802eeea2
// size=38 thunk=false
// signature: undefined FUN_1802eeea2()
// status: ok


void FUN_1802eeea2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802eeea2",
    "a84991eefda9432a7df711689f0322215e207c2cfaf24272e444fe03766d9570",
    R"F1802eeea2C(FUN_1800668e0)F1802eeea2C",
    R"F1802eeea2D()F1802eeea2D",
    R"F1802eeea2T()F1802eeea2T",
    R"F1802eeea2F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802eeea2F",
    R"F1802eeea2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeea2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeea2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeea2", "FUN_1802eeea2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", load_at<std::uint64_t>(param_2 + 0x60, 0));
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: a84991eefda9432a7df711689f0322215e207c2cfaf24272e444fe03766d9570
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeea2;
}

// 0x1802eeeec FUN_1802eeeec
// source: re/dump/decompile/0x1802eeeec_FUN_1802eeeec.c
// size: 38 bytes; thunk: false
// body sha256: 9d2addf7a6375565c4e81bcecf4fd0e0bb1d9e39a2840b092948155bb42d959c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eeeec{
    "0x1802eeeec",
    "FUN_1802eeeec",
    R"F1802eeeecS(undefined FUN_1802eeeec())F1802eeeecS",
    R"B1802eeeec(// 0x1802eeeec  FUN_1802eeeec
// size=38 thunk=false
// signature: undefined FUN_1802eeeec()
// status: ok


void FUN_1802eeeec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802eeeec",
    "9d2addf7a6375565c4e81bcecf4fd0e0bb1d9e39a2840b092948155bb42d959c",
    R"F1802eeeecC()F1802eeeecC",
    R"F1802eeeecD()F1802eeeecD",
    R"F1802eeeecT()F1802eeeecT",
    R"F1802eeeecF(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802eeeecF",
    R"F1802eeeecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eeeecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eeeec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eeeec", "FUN_1802eeeec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: 9d2addf7a6375565c4e81bcecf4fd0e0bb1d9e39a2840b092948155bb42d959c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eeeec;
}

// 0x1802eef12 FUN_1802eef12
// source: re/dump/decompile/0x1802eef12_FUN_1802eef12.c
// size: 38 bytes; thunk: false
// body sha256: f629c44594aef8595c7f480140be838a43df1c20a4b5a64d38fdf32f6d81165a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eef12{
    "0x1802eef12",
    "FUN_1802eef12",
    R"F1802eef12S(undefined FUN_1802eef12())F1802eef12S",
    R"B1802eef12(// 0x1802eef12  FUN_1802eef12
// size=38 thunk=false
// signature: undefined FUN_1802eef12()
// status: ok


void FUN_1802eef12(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802eef12",
    "f629c44594aef8595c7f480140be838a43df1c20a4b5a64d38fdf32f6d81165a",
    R"F1802eef12C()F1802eef12C",
    R"F1802eef12D()F1802eef12D",
    R"F1802eef12T()F1802eef12T",
    R"F1802eef12F(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802eef12F",
    R"F1802eef12U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eef12U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eef12() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eef12", "FUN_1802eef12");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: f629c44594aef8595c7f480140be838a43df1c20a4b5a64d38fdf32f6d81165a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eef12;
}

// 0x1802eef5c FUN_1802eef5c
// source: re/dump/decompile/0x1802eef5c_FUN_1802eef5c.c
// size: 38 bytes; thunk: false
// body sha256: b5c6aa89d83d41fac17de619d186dcaeb6bfd5e1528062a8ec47746f7dcfc7a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eef5c{
    "0x1802eef5c",
    "FUN_1802eef5c",
    R"F1802eef5cS(undefined FUN_1802eef5c())F1802eef5cS",
    R"B1802eef5c(// 0x1802eef5c  FUN_1802eef5c
// size=38 thunk=false
// signature: undefined FUN_1802eef5c()
// status: ok


void FUN_1802eef5c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800668e0(param_2 + 0x68);
  }
  return;
}


)B1802eef5c",
    "b5c6aa89d83d41fac17de619d186dcaeb6bfd5e1528062a8ec47746f7dcfc7a7",
    R"F1802eef5cC(FUN_1800668e0)F1802eef5cC",
    R"F1802eef5cD()F1802eef5cD",
    R"F1802eef5cT()F1802eef5cT",
    R"F1802eef5cF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802eef5cF",
    R"F1802eef5cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eef5cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eef5c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eef5c", "FUN_1802eef5c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x68);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: b5c6aa89d83d41fac17de619d186dcaeb6bfd5e1528062a8ec47746f7dcfc7a7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_1800668e0(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eef5c;
}

// 0x1802ef09c FUN_1802ef09c
// source: re/dump/decompile/0x1802ef09c_FUN_1802ef09c.c
// size: 29 bytes; thunk: false
// body sha256: 905ceee45e4abd2ff0b4cca602e48ac4f925d80df917aca917887b91489719f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef09c{
    "0x1802ef09c",
    "FUN_1802ef09c",
    R"F1802ef09cS(undefined FUN_1802ef09c())F1802ef09cS",
    R"B1802ef09c(// 0x1802ef09c  FUN_1802ef09c
// size=29 thunk=false
// signature: undefined FUN_1802ef09c()
// status: ok


undefined8 FUN_1802ef09c(void)

{
  return 0;
}


)B1802ef09c",
    "905ceee45e4abd2ff0b4cca602e48ac4f925d80df917aca917887b91489719f8",
    R"F1802ef09cC()F1802ef09cC",
    R"F1802ef09cD()F1802ef09cD",
    R"F1802ef09cT()F1802ef09cT",
    R"F1802ef09cF(10: return 0;)F1802ef09cF",
    R"F1802ef09cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef09cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef09c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef09c", "FUN_1802ef09c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 905ceee45e4abd2ff0b4cca602e48ac4f925d80df917aca917887b91489719f8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ef09c;
}

// 0x1802ef0cc FUN_1802ef0cc
// source: re/dump/decompile/0x1802ef0cc_FUN_1802ef0cc.c
// size: 42 bytes; thunk: false
// body sha256: 57be9feaa2ade0b19452c2b48a702c2e9d55f6216d18143eb141dc385bdddcad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef0cc{
    "0x1802ef0cc",
    "FUN_1802ef0cc",
    R"F1802ef0ccS(undefined FUN_1802ef0cc())F1802ef0ccS",
    R"B1802ef0cc(// 0x1802ef0cc  FUN_1802ef0cc
// size=42 thunk=false
// signature: undefined FUN_1802ef0cc()
// status: ok


void FUN_1802ef0cc(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x40),0x20,1,FUN_1800668e0);
  return;
}


)B1802ef0cc",
    "57be9feaa2ade0b19452c2b48a702c2e9d55f6216d18143eb141dc385bdddcad",
    R"F1802ef0ccC(FUN_1800668e0)F1802ef0ccC",
    R"F1802ef0ccD()F1802ef0ccD",
    R"F1802ef0ccT()F1802ef0ccT",
    R"F1802ef0ccF(11: return;)F1802ef0ccF",
    R"F1802ef0ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef0ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef0cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef0cc", "FUN_1802ef0cc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x40), 0x20, 1, &image::FUN_1800668e0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 57be9feaa2ade0b19452c2b48a702c2e9d55f6216d18143eb141dc385bdddcad
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x40),0x20,1,FUN_1800668e0);");
            trace.statement("return;");
        }
    return kFunction_0x1802ef0cc;
}

// 0x1802ef1b8 FUN_1802ef1b8
// source: re/dump/decompile/0x1802ef1b8_FUN_1802ef1b8.c
// size: 38 bytes; thunk: false
// body sha256: 96fe289479b4a7781e960ef9dbf7f61a6b39771f75a9bafbc3ccaf06e343d207
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef1b8{
    "0x1802ef1b8",
    "FUN_1802ef1b8",
    R"F1802ef1b8S(undefined FUN_1802ef1b8())F1802ef1b8S",
    R"B1802ef1b8(// 0x1802ef1b8  FUN_1802ef1b8
// size=38 thunk=false
// signature: undefined FUN_1802ef1b8()
// status: ok


void FUN_1802ef1b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


)B1802ef1b8",
    "96fe289479b4a7781e960ef9dbf7f61a6b39771f75a9bafbc3ccaf06e343d207",
    R"F1802ef1b8C()F1802ef1b8C",
    R"F1802ef1b8D()F1802ef1b8D",
    R"F1802ef1b8T()F1802ef1b8T",
    R"F1802ef1b8F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ef1b8F",
    R"F1802ef1b8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef1b8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef1b8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef1b8", "FUN_1802ef1b8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x60);
    // body sha256: 96fe289479b4a7781e960ef9dbf7f61a6b39771f75a9bafbc3ccaf06e343d207
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef1b8;
}

// 0x1802ef1f0 FUN_1802ef1f0
// source: re/dump/decompile/0x1802ef1f0_FUN_1802ef1f0.c
// size: 38 bytes; thunk: false
// body sha256: 87224c745dc7ad16516f8f5076f07237bb2f9eac772c8f3aa1ebb97b3ba36d7f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef1f0{
    "0x1802ef1f0",
    "FUN_1802ef1f0",
    R"F1802ef1f0S(undefined FUN_1802ef1f0())F1802ef1f0S",
    R"B1802ef1f0(// 0x1802ef1f0  FUN_1802ef1f0
// size=38 thunk=false
// signature: undefined FUN_1802ef1f0()
// status: ok


void FUN_1802ef1f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802ef1f0",
    "87224c745dc7ad16516f8f5076f07237bb2f9eac772c8f3aa1ebb97b3ba36d7f",
    R"F1802ef1f0C()F1802ef1f0C",
    R"F1802ef1f0D()F1802ef1f0D",
    R"F1802ef1f0T()F1802ef1f0T",
    R"F1802ef1f0F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ef1f0F",
    R"F1802ef1f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef1f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef1f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef1f0", "FUN_1802ef1f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: 87224c745dc7ad16516f8f5076f07237bb2f9eac772c8f3aa1ebb97b3ba36d7f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef1f0;
}

// 0x1802ef216 FUN_1802ef216
// source: re/dump/decompile/0x1802ef216_FUN_1802ef216.c
// size: 38 bytes; thunk: false
// body sha256: c4835f08ba2ee86b9ce9ed0bd0abf1bfe2521f10e2b9739f8d77b83fe0ed95bb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef216{
    "0x1802ef216",
    "FUN_1802ef216",
    R"F1802ef216S(undefined FUN_1802ef216())F1802ef216S",
    R"B1802ef216(// 0x1802ef216  FUN_1802ef216
// size=38 thunk=false
// signature: undefined FUN_1802ef216()
// status: ok


void FUN_1802ef216(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


)B1802ef216",
    "c4835f08ba2ee86b9ce9ed0bd0abf1bfe2521f10e2b9739f8d77b83fe0ed95bb",
    R"F1802ef216C()F1802ef216C",
    R"F1802ef216D()F1802ef216D",
    R"F1802ef216T()F1802ef216T",
    R"F1802ef216F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802ef216F",
    R"F1802ef216U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef216U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef216() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef216", "FUN_1802ef216");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x30, 0));
    // body sha256: c4835f08ba2ee86b9ce9ed0bd0abf1bfe2521f10e2b9739f8d77b83fe0ed95bb
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef216;
}

// 0x1802ef260 FUN_1802ef260
// source: re/dump/decompile/0x1802ef260_FUN_1802ef260.c
// size: 38 bytes; thunk: false
// body sha256: 0c5438b288f32fed98c29a36b35e1bcb120445a101b543f47e81a6f1db25e404
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef260{
    "0x1802ef260",
    "FUN_1802ef260",
    R"F1802ef260S(undefined FUN_1802ef260())F1802ef260S",
    R"B1802ef260(// 0x1802ef260  FUN_1802ef260
// size=38 thunk=false
// signature: undefined FUN_1802ef260()
// status: ok


void FUN_1802ef260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ef260",
    "0c5438b288f32fed98c29a36b35e1bcb120445a101b543f47e81a6f1db25e404",
    R"F1802ef260C()F1802ef260C",
    R"F1802ef260D()F1802ef260D",
    R"F1802ef260T()F1802ef260T",
    R"F1802ef260F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802ef260F",
    R"F1802ef260U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef260U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef260() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef260", "FUN_1802ef260");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 0c5438b288f32fed98c29a36b35e1bcb120445a101b543f47e81a6f1db25e404
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef260;
}

// 0x1802ef286 FUN_1802ef286
// source: re/dump/decompile/0x1802ef286_FUN_1802ef286.c
// size: 38 bytes; thunk: false
// body sha256: a2e49b34ae04c273eb7bc121ad942eb0a05ebf4c3dd0ad7982512f140367ceaf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef286{
    "0x1802ef286",
    "FUN_1802ef286",
    R"F1802ef286S(undefined FUN_1802ef286())F1802ef286S",
    R"B1802ef286(// 0x1802ef286  FUN_1802ef286
// size=38 thunk=false
// signature: undefined FUN_1802ef286()
// status: ok


void FUN_1802ef286(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802ef286",
    "a2e49b34ae04c273eb7bc121ad942eb0a05ebf4c3dd0ad7982512f140367ceaf",
    R"F1802ef286C()F1802ef286C",
    R"F1802ef286D()F1802ef286D",
    R"F1802ef286T()F1802ef286T",
    R"F1802ef286F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802ef286F",
    R"F1802ef286U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef286U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef286() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef286", "FUN_1802ef286");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: a2e49b34ae04c273eb7bc121ad942eb0a05ebf4c3dd0ad7982512f140367ceaf
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef286;
}

// 0x1802ef2d0 FUN_1802ef2d0
// source: re/dump/decompile/0x1802ef2d0_FUN_1802ef2d0.c
// size: 38 bytes; thunk: false
// body sha256: e8579ac66aaeeca901b9afe7f6be8b31c08d0f72ba4e193a69dd16cade049c54
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef2d0{
    "0x1802ef2d0",
    "FUN_1802ef2d0",
    R"F1802ef2d0S(undefined FUN_1802ef2d0())F1802ef2d0S",
    R"B1802ef2d0(// 0x1802ef2d0  FUN_1802ef2d0
// size=38 thunk=false
// signature: undefined FUN_1802ef2d0()
// status: ok


void FUN_1802ef2d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ef2d0",
    "e8579ac66aaeeca901b9afe7f6be8b31c08d0f72ba4e193a69dd16cade049c54",
    R"F1802ef2d0C()F1802ef2d0C",
    R"F1802ef2d0D()F1802ef2d0D",
    R"F1802ef2d0T()F1802ef2d0T",
    R"F1802ef2d0F(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802ef2d0F",
    R"F1802ef2d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef2d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef2d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef2d0", "FUN_1802ef2d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: e8579ac66aaeeca901b9afe7f6be8b31c08d0f72ba4e193a69dd16cade049c54
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef2d0;
}

// 0x1802ef2f6 FUN_1802ef2f6
// source: re/dump/decompile/0x1802ef2f6_FUN_1802ef2f6.c
// size: 38 bytes; thunk: false
// body sha256: 6b170f853e104c977031ff23986ee06e065f9c318a21f62aaf0cda65470c149f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef2f6{
    "0x1802ef2f6",
    "FUN_1802ef2f6",
    R"F1802ef2f6S(undefined FUN_1802ef2f6())F1802ef2f6S",
    R"B1802ef2f6(// 0x1802ef2f6  FUN_1802ef2f6
// size=38 thunk=false
// signature: undefined FUN_1802ef2f6()
// status: ok


void FUN_1802ef2f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ef2f6",
    "6b170f853e104c977031ff23986ee06e065f9c318a21f62aaf0cda65470c149f",
    R"F1802ef2f6C()F1802ef2f6C",
    R"F1802ef2f6D()F1802ef2f6D",
    R"F1802ef2f6T()F1802ef2f6T",
    R"F1802ef2f6F(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802ef2f6F",
    R"F1802ef2f6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef2f6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef2f6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef2f6", "FUN_1802ef2f6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: 6b170f853e104c977031ff23986ee06e065f9c318a21f62aaf0cda65470c149f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef2f6;
}

// 0x1802ef340 FUN_1802ef340
// source: re/dump/decompile/0x1802ef340_FUN_1802ef340.c
// size: 45 bytes; thunk: false
// body sha256: 16aadd2644494cad782a26620cbfe9a1f335882898493291fba5f33dc1be8bd2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef340{
    "0x1802ef340",
    "FUN_1802ef340",
    R"F1802ef340S(undefined FUN_1802ef340())F1802ef340S",
    R"B1802ef340(// 0x1802ef340  FUN_1802ef340
// size=45 thunk=false
// signature: undefined FUN_1802ef340()
// status: ok


void FUN_1802ef340(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x110),0x20,2,FUN_1800668e0);
  return;
}


)B1802ef340",
    "16aadd2644494cad782a26620cbfe9a1f335882898493291fba5f33dc1be8bd2",
    R"F1802ef340C(FUN_1800668e0)F1802ef340C",
    R"F1802ef340D()F1802ef340D",
    R"F1802ef340T()F1802ef340T",
    R"F1802ef340F(11: return;)F1802ef340F",
    R"F1802ef340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef340", "FUN_1802ef340");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x110), 0x20, 2, &image::FUN_1800668e0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 16aadd2644494cad782a26620cbfe9a1f335882898493291fba5f33dc1be8bd2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x110),0x20,2,FUN_1800668e0);");
            trace.statement("return;");
        }
    return kFunction_0x1802ef340;
}

// 0x1802ef3a9 FUN_1802ef3a9
// source: re/dump/decompile/0x1802ef3a9_FUN_1802ef3a9.c
// size: 45 bytes; thunk: false
// body sha256: 57ac15d8d91fcba15525099d9a0cb9ee067ddb6fe05bbe45694f1d8864d108bc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef3a9{
    "0x1802ef3a9",
    "FUN_1802ef3a9",
    R"F1802ef3a9S(undefined FUN_1802ef3a9())F1802ef3a9S",
    R"B1802ef3a9(// 0x1802ef3a9  FUN_1802ef3a9
// size=45 thunk=false
// signature: undefined FUN_1802ef3a9()
// status: ok


void FUN_1802ef3a9(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0xd0),0x20,2,FUN_1800668e0);
  return;
}


)B1802ef3a9",
    "57ac15d8d91fcba15525099d9a0cb9ee067ddb6fe05bbe45694f1d8864d108bc",
    R"F1802ef3a9C(FUN_1800668e0)F1802ef3a9C",
    R"F1802ef3a9D()F1802ef3a9D",
    R"F1802ef3a9T()F1802ef3a9T",
    R"F1802ef3a9F(11: return;)F1802ef3a9F",
    R"F1802ef3a9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef3a9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef3a9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef3a9", "FUN_1802ef3a9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0xd0), 0x20, 2, &image::FUN_1800668e0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 57ac15d8d91fcba15525099d9a0cb9ee067ddb6fe05bbe45694f1d8864d108bc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0xd0),0x20,2,FUN_1800668e0);");
            trace.statement("return;");
        }
    return kFunction_0x1802ef3a9;
}

// 0x1802ef42c FUN_1802ef42c
// source: re/dump/decompile/0x1802ef42c_FUN_1802ef42c.c
// size: 41 bytes; thunk: false
// body sha256: fcf3ce5b33cc78ccc20bc5845fe0055b0258ed1040835de58ff7b495b2b1f917
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef42c{
    "0x1802ef42c",
    "FUN_1802ef42c",
    R"F1802ef42cS(undefined FUN_1802ef42c())F1802ef42cS",
    R"B1802ef42c(// 0x1802ef42c  FUN_1802ef42c
// size=41 thunk=false
// signature: undefined FUN_1802ef42c()
// status: ok


void FUN_1802ef42c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}


)B1802ef42c",
    "fcf3ce5b33cc78ccc20bc5845fe0055b0258ed1040835de58ff7b495b2b1f917",
    R"F1802ef42cC()F1802ef42cC",
    R"F1802ef42cD()F1802ef42cD",
    R"F1802ef42cT()F1802ef42cT",
    R"F1802ef42cF(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ef42cF",
    R"F1802ef42cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef42cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef42c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef42c", "FUN_1802ef42c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xb0, 0));
    // body sha256: fcf3ce5b33cc78ccc20bc5845fe0055b0258ed1040835de58ff7b495b2b1f917
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef42c;
}

// 0x1802ef455 FUN_1802ef455
// source: re/dump/decompile/0x1802ef455_FUN_1802ef455.c
// size: 41 bytes; thunk: false
// body sha256: 924c88d8eea6c4641cb5c4b27d0350e75f59c0c4762f79edbbee32119b696dac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef455{
    "0x1802ef455",
    "FUN_1802ef455",
    R"F1802ef455S(undefined FUN_1802ef455())F1802ef455S",
    R"B1802ef455(// 0x1802ef455  FUN_1802ef455
// size=41 thunk=false
// signature: undefined FUN_1802ef455()
// status: ok


void FUN_1802ef455(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}


)B1802ef455",
    "924c88d8eea6c4641cb5c4b27d0350e75f59c0c4762f79edbbee32119b696dac",
    R"F1802ef455C()F1802ef455C",
    R"F1802ef455D()F1802ef455D",
    R"F1802ef455T()F1802ef455T",
    R"F1802ef455F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802ef455F",
    R"F1802ef455U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef455U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef455() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef455", "FUN_1802ef455");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xb0, 0));
    // body sha256: 924c88d8eea6c4641cb5c4b27d0350e75f59c0c4762f79edbbee32119b696dac
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef455;
}

// 0x1802ef4ba FUN_1802ef4ba
// source: re/dump/decompile/0x1802ef4ba_FUN_1802ef4ba.c
// size: 38 bytes; thunk: false
// body sha256: e4d9eb13b6ed711683ea829c7a86f40a07accd98f553d4879533b0583e62372a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef4ba{
    "0x1802ef4ba",
    "FUN_1802ef4ba",
    R"F1802ef4baS(undefined FUN_1802ef4ba())F1802ef4baS",
    R"B1802ef4ba(// 0x1802ef4ba  FUN_1802ef4ba
// size=38 thunk=false
// signature: undefined FUN_1802ef4ba()
// status: ok


void FUN_1802ef4ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    FUN_1800668e0(param_2 + 0x58);
  }
  return;
}


)B1802ef4ba",
    "e4d9eb13b6ed711683ea829c7a86f40a07accd98f553d4879533b0583e62372a",
    R"F1802ef4baC(FUN_1800668e0)F1802ef4baC",
    R"F1802ef4baD()F1802ef4baD",
    R"F1802ef4baT()F1802ef4baT",
    R"F1802ef4baF(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802ef4baF",
    R"F1802ef4baU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef4baU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef4ba() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef4ba", "FUN_1802ef4ba");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x58);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: e4d9eb13b6ed711683ea829c7a86f40a07accd98f553d4879533b0583e62372a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("FUN_1800668e0(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef4ba;
}

// 0x1802ef4e0 FUN_1802ef4e0
// source: re/dump/decompile/0x1802ef4e0_FUN_1802ef4e0.c
// size: 41 bytes; thunk: false
// body sha256: 7451ed4b18ea3be4393d5e8895840bfcaa41400a017db4bc5a5bbdb7e35f0eda
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef4e0{
    "0x1802ef4e0",
    "FUN_1802ef4e0",
    R"F1802ef4e0S(undefined FUN_1802ef4e0())F1802ef4e0S",
    R"B1802ef4e0(// 0x1802ef4e0  FUN_1802ef4e0
// size=41 thunk=false
// signature: undefined FUN_1802ef4e0()
// status: ok


void FUN_1802ef4e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb8));
  }
  return;
}


)B1802ef4e0",
    "7451ed4b18ea3be4393d5e8895840bfcaa41400a017db4bc5a5bbdb7e35f0eda",
    R"F1802ef4e0C()F1802ef4e0C",
    R"F1802ef4e0D()F1802ef4e0D",
    R"F1802ef4e0T()F1802ef4e0T",
    R"F1802ef4e0F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802ef4e0F",
    R"F1802ef4e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef4e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef4e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef4e0", "FUN_1802ef4e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xb8, 0));
    // body sha256: 7451ed4b18ea3be4393d5e8895840bfcaa41400a017db4bc5a5bbdb7e35f0eda
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef4e0;
}

// 0x1802ef509 FUN_1802ef509
// source: re/dump/decompile/0x1802ef509_FUN_1802ef509.c
// size: 41 bytes; thunk: false
// body sha256: e22f0d81e66f9cb65be7725530b1d5b071fc7fa5df1d92725f4418d460253f75
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef509{
    "0x1802ef509",
    "FUN_1802ef509",
    R"F1802ef509S(undefined FUN_1802ef509())F1802ef509S",
    R"B1802ef509(// 0x1802ef509  FUN_1802ef509
// size=41 thunk=false
// signature: undefined FUN_1802ef509()
// status: ok


void FUN_1802ef509(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb8));
  }
  return;
}


)B1802ef509",
    "e22f0d81e66f9cb65be7725530b1d5b071fc7fa5df1d92725f4418d460253f75",
    R"F1802ef509C()F1802ef509C",
    R"F1802ef509D()F1802ef509D",
    R"F1802ef509T()F1802ef509T",
    R"F1802ef509F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802ef509F",
    R"F1802ef509U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef509U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef509() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef509", "FUN_1802ef509");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xb8, 0));
    // body sha256: e22f0d81e66f9cb65be7725530b1d5b071fc7fa5df1d92725f4418d460253f75
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef509;
}

// 0x1802ef570 FUN_1802ef570
// source: re/dump/decompile/0x1802ef570_FUN_1802ef570.c
// size: 38 bytes; thunk: false
// body sha256: 990809457eb4e14995db4528cd859b91e03d5537016962142980f2ace4f7ba71
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef570{
    "0x1802ef570",
    "FUN_1802ef570",
    R"F1802ef570S(undefined FUN_1802ef570())F1802ef570S",
    R"B1802ef570(// 0x1802ef570  FUN_1802ef570
// size=38 thunk=false
// signature: undefined FUN_1802ef570()
// status: ok


void FUN_1802ef570(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802ef570",
    "990809457eb4e14995db4528cd859b91e03d5537016962142980f2ace4f7ba71",
    R"F1802ef570C()F1802ef570C",
    R"F1802ef570D()F1802ef570D",
    R"F1802ef570T()F1802ef570T",
    R"F1802ef570F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802ef570F",
    R"F1802ef570U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef570U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef570() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef570", "FUN_1802ef570");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x58, 0));
    // body sha256: 990809457eb4e14995db4528cd859b91e03d5537016962142980f2ace4f7ba71
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef570;
}

// 0x1802ef596 FUN_1802ef596
// source: re/dump/decompile/0x1802ef596_FUN_1802ef596.c
// size: 38 bytes; thunk: false
// body sha256: 05613914b276b3dfe3a47cd93aded4830525e4c810178320aec8d65d9c683a8f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef596{
    "0x1802ef596",
    "FUN_1802ef596",
    R"F1802ef596S(undefined FUN_1802ef596())F1802ef596S",
    R"B1802ef596(// 0x1802ef596  FUN_1802ef596
// size=38 thunk=false
// signature: undefined FUN_1802ef596()
// status: ok


void FUN_1802ef596(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802ef596",
    "05613914b276b3dfe3a47cd93aded4830525e4c810178320aec8d65d9c683a8f",
    R"F1802ef596C()F1802ef596C",
    R"F1802ef596D()F1802ef596D",
    R"F1802ef596T()F1802ef596T",
    R"F1802ef596F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802ef596F",
    R"F1802ef596U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef596U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef596() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef596", "FUN_1802ef596");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x58, 0));
    // body sha256: 05613914b276b3dfe3a47cd93aded4830525e4c810178320aec8d65d9c683a8f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef596;
}

// 0x1802ef5c8 FUN_1802ef5c8
// source: re/dump/decompile/0x1802ef5c8_FUN_1802ef5c8.c
// size: 38 bytes; thunk: false
// body sha256: 1d658b9bb13b2f660913768be010fe75d2c77298c96449f5cec9fd282e0a0e5f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef5c8{
    "0x1802ef5c8",
    "FUN_1802ef5c8",
    R"F1802ef5c8S(undefined FUN_1802ef5c8())F1802ef5c8S",
    R"B1802ef5c8(// 0x1802ef5c8  FUN_1802ef5c8
// size=38 thunk=false
// signature: undefined FUN_1802ef5c8()
// status: ok


void FUN_1802ef5c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802ef5c8",
    "1d658b9bb13b2f660913768be010fe75d2c77298c96449f5cec9fd282e0a0e5f",
    R"F1802ef5c8C()F1802ef5c8C",
    R"F1802ef5c8D()F1802ef5c8D",
    R"F1802ef5c8T()F1802ef5c8T",
    R"F1802ef5c8F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802ef5c8F",
    R"F1802ef5c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef5c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef5c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef5c8", "FUN_1802ef5c8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x60, 0));
    // body sha256: 1d658b9bb13b2f660913768be010fe75d2c77298c96449f5cec9fd282e0a0e5f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef5c8;
}

// 0x1802ef5ee FUN_1802ef5ee
// source: re/dump/decompile/0x1802ef5ee_FUN_1802ef5ee.c
// size: 38 bytes; thunk: false
// body sha256: 83ea747fa6b80b05ff18e1b7b86024fcc5ae7c844490254ab02b4f5c9bdfecbd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef5ee{
    "0x1802ef5ee",
    "FUN_1802ef5ee",
    R"F1802ef5eeS(undefined FUN_1802ef5ee())F1802ef5eeS",
    R"B1802ef5ee(// 0x1802ef5ee  FUN_1802ef5ee
// size=38 thunk=false
// signature: undefined FUN_1802ef5ee()
// status: ok


void FUN_1802ef5ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802ef5ee",
    "83ea747fa6b80b05ff18e1b7b86024fcc5ae7c844490254ab02b4f5c9bdfecbd",
    R"F1802ef5eeC()F1802ef5eeC",
    R"F1802ef5eeD()F1802ef5eeD",
    R"F1802ef5eeT()F1802ef5eeT",
    R"F1802ef5eeF(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802ef5eeF",
    R"F1802ef5eeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef5eeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef5ee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef5ee", "FUN_1802ef5ee");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x60, 0));
    // body sha256: 83ea747fa6b80b05ff18e1b7b86024fcc5ae7c844490254ab02b4f5c9bdfecbd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef5ee;
}

// 0x1802ef680 FUN_1802ef680
// source: re/dump/decompile/0x1802ef680_FUN_1802ef680.c
// size: 38 bytes; thunk: false
// body sha256: d3186278e5a58c5bc5f38d14437a73df298d85aa3bb78d384d4282f5bb8ca7e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef680{
    "0x1802ef680",
    "FUN_1802ef680",
    R"F1802ef680S(undefined FUN_1802ef680())F1802ef680S",
    R"B1802ef680(// 0x1802ef680  FUN_1802ef680
// size=38 thunk=false
// signature: undefined FUN_1802ef680()
// status: ok


void FUN_1802ef680(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x38);
  }
  return;
}


)B1802ef680",
    "d3186278e5a58c5bc5f38d14437a73df298d85aa3bb78d384d4282f5bb8ca7e3",
    R"F1802ef680C()F1802ef680C",
    R"F1802ef680D()F1802ef680D",
    R"F1802ef680T()F1802ef680T",
    R"F1802ef680F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ef680F",
    R"F1802ef680U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef680U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef680() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef680", "FUN_1802ef680");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x38);
    // body sha256: d3186278e5a58c5bc5f38d14437a73df298d85aa3bb78d384d4282f5bb8ca7e3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef680;
}

// 0x1802ef6f0 FUN_1802ef6f0
// source: re/dump/decompile/0x1802ef6f0_FUN_1802ef6f0.c
// size: 46 bytes; thunk: false
// body sha256: e402bea0a97457c8f084f3ce1756c854ceaca91687ae25ab929c81ba4d85d28b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef6f0{
    "0x1802ef6f0",
    "FUN_1802ef6f0",
    R"F1802ef6f0S(undefined FUN_1802ef6f0())F1802ef6f0S",
    R"B1802ef6f0(// 0x1802ef6f0  FUN_1802ef6f0
// size=46 thunk=false
// signature: undefined FUN_1802ef6f0()
// status: ok


void FUN_1802ef6f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802ef6f0",
    "e402bea0a97457c8f084f3ce1756c854ceaca91687ae25ab929c81ba4d85d28b",
    R"F1802ef6f0C()F1802ef6f0C",
    R"F1802ef6f0D()F1802ef6f0D",
    R"F1802ef6f0T()F1802ef6f0T",
    R"F1802ef6f0F(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802ef6f0F",
    R"F1802ef6f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef6f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef6f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef6f0", "FUN_1802ef6f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x98, 0));
    // body sha256: e402bea0a97457c8f084f3ce1756c854ceaca91687ae25ab929c81ba4d85d28b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef6f0;
}

// 0x1802ef71e FUN_1802ef71e
// source: re/dump/decompile/0x1802ef71e_FUN_1802ef71e.c
// size: 46 bytes; thunk: false
// body sha256: 98fd65606fac61e0508c2bf7c2e10b5d59777989cc9d53931aae7dbb702f7d18
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef71e{
    "0x1802ef71e",
    "FUN_1802ef71e",
    R"F1802ef71eS(undefined FUN_1802ef71e())F1802ef71eS",
    R"B1802ef71e(// 0x1802ef71e  FUN_1802ef71e
// size=46 thunk=false
// signature: undefined FUN_1802ef71e()
// status: ok


void FUN_1802ef71e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802ef71e",
    "98fd65606fac61e0508c2bf7c2e10b5d59777989cc9d53931aae7dbb702f7d18",
    R"F1802ef71eC()F1802ef71eC",
    R"F1802ef71eD()F1802ef71eD",
    R"F1802ef71eT()F1802ef71eT",
    R"F1802ef71eF(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802ef71eF",
    R"F1802ef71eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef71eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef71e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef71e", "FUN_1802ef71e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x98, 0));
    // body sha256: 98fd65606fac61e0508c2bf7c2e10b5d59777989cc9d53931aae7dbb702f7d18
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef71e;
}

// 0x1802ef74c FUN_1802ef74c
// source: re/dump/decompile/0x1802ef74c_FUN_1802ef74c.c
// size: 38 bytes; thunk: false
// body sha256: 9e9fd025be6648122baf25b233575a69da79f034a177c85fb17c4c85d56cbebf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef74c{
    "0x1802ef74c",
    "FUN_1802ef74c",
    R"F1802ef74cS(undefined FUN_1802ef74c())F1802ef74cS",
    R"B1802ef74c(// 0x1802ef74c  FUN_1802ef74c
// size=38 thunk=false
// signature: undefined FUN_1802ef74c()
// status: ok


void FUN_1802ef74c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0x70);
  }
  return;
}


)B1802ef74c",
    "9e9fd025be6648122baf25b233575a69da79f034a177c85fb17c4c85d56cbebf",
    R"F1802ef74cC(FUN_1800668e0)F1802ef74cC",
    R"F1802ef74cD()F1802ef74cD",
    R"F1802ef74cT()F1802ef74cT",
    R"F1802ef74cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ef74cF",
    R"F1802ef74cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef74cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef74c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef74c", "FUN_1802ef74c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x70);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 9e9fd025be6648122baf25b233575a69da79f034a177c85fb17c4c85d56cbebf
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef74c;
}

// 0x1802ef772 FUN_1802ef772
// source: re/dump/decompile/0x1802ef772_FUN_1802ef772.c
// size: 43 bytes; thunk: false
// body sha256: 58882c9bfa578bd260d099eeef9941704a630d63a43e2c2761d94b7fe2450c23
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef772{
    "0x1802ef772",
    "FUN_1802ef772",
    R"F1802ef772S(undefined FUN_1802ef772())F1802ef772S",
    R"B1802ef772(// 0x1802ef772  FUN_1802ef772
// size=43 thunk=false
// signature: undefined FUN_1802ef772()
// status: ok


void FUN_1802ef772(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ef772",
    "58882c9bfa578bd260d099eeef9941704a630d63a43e2c2761d94b7fe2450c23",
    R"F1802ef772C()F1802ef772C",
    R"F1802ef772D()F1802ef772D",
    R"F1802ef772T()F1802ef772T",
    R"F1802ef772F(10: if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
14: return;)F1802ef772F",
    R"F1802ef772U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef772U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef772() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef772", "FUN_1802ef772");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: 58882c9bfa578bd260d099eeef9941704a630d63a43e2c2761d94b7fe2450c23
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef772;
}

// 0x1802ef79d FUN_1802ef79d
// source: re/dump/decompile/0x1802ef79d_FUN_1802ef79d.c
// size: 43 bytes; thunk: false
// body sha256: 35a2f3e4e5fb224511df57e74664498aac4dab268c5b0331ca4196656840bec2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef79d{
    "0x1802ef79d",
    "FUN_1802ef79d",
    R"F1802ef79dS(undefined FUN_1802ef79d())F1802ef79dS",
    R"B1802ef79d(// 0x1802ef79d  FUN_1802ef79d
// size=43 thunk=false
// signature: undefined FUN_1802ef79d()
// status: ok


void FUN_1802ef79d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ef79d",
    "35a2f3e4e5fb224511df57e74664498aac4dab268c5b0331ca4196656840bec2",
    R"F1802ef79dC()F1802ef79dC",
    R"F1802ef79dD()F1802ef79dD",
    R"F1802ef79dT()F1802ef79dT",
    R"F1802ef79dF(10: if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
14: return;)F1802ef79dF",
    R"F1802ef79dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef79dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef79d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef79d", "FUN_1802ef79d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: 35a2f3e4e5fb224511df57e74664498aac4dab268c5b0331ca4196656840bec2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef79d;
}

// 0x1802ef7c8 FUN_1802ef7c8
// source: re/dump/decompile/0x1802ef7c8_FUN_1802ef7c8.c
// size: 38 bytes; thunk: false
// body sha256: 161e08bc500f54d688536c4ee5ec61fadc56c8764132c1ebbd304a1a296d6e07
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef7c8{
    "0x1802ef7c8",
    "FUN_1802ef7c8",
    R"F1802ef7c8S(undefined FUN_1802ef7c8())F1802ef7c8S",
    R"B1802ef7c8(// 0x1802ef7c8  FUN_1802ef7c8
// size=38 thunk=false
// signature: undefined FUN_1802ef7c8()
// status: ok


void FUN_1802ef7c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800668e0(param_2 + 0x50);
  }
  return;
}


)B1802ef7c8",
    "161e08bc500f54d688536c4ee5ec61fadc56c8764132c1ebbd304a1a296d6e07",
    R"F1802ef7c8C(FUN_1800668e0)F1802ef7c8C",
    R"F1802ef7c8D()F1802ef7c8D",
    R"F1802ef7c8T()F1802ef7c8T",
    R"F1802ef7c8F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ef7c8F",
    R"F1802ef7c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef7c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef7c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef7c8", "FUN_1802ef7c8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x50);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 161e08bc500f54d688536c4ee5ec61fadc56c8764132c1ebbd304a1a296d6e07
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_1800668e0(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef7c8;
}

// 0x1802ef7ee FUN_1802ef7ee
// source: re/dump/decompile/0x1802ef7ee_FUN_1802ef7ee.c
// size: 41 bytes; thunk: false
// body sha256: 584e0cafa7a8392e009f4f2488bd558b05cf932786a3c198415d21f263e0ad29
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef7ee{
    "0x1802ef7ee",
    "FUN_1802ef7ee",
    R"F1802ef7eeS(undefined FUN_1802ef7ee())F1802ef7eeS",
    R"B1802ef7ee(// 0x1802ef7ee  FUN_1802ef7ee
// size=41 thunk=false
// signature: undefined FUN_1802ef7ee()
// status: ok


void FUN_1802ef7ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1800668e0(param_2 + 0xe0);
  }
  return;
}


)B1802ef7ee",
    "584e0cafa7a8392e009f4f2488bd558b05cf932786a3c198415d21f263e0ad29",
    R"F1802ef7eeC(FUN_1800668e0)F1802ef7eeC",
    R"F1802ef7eeD()F1802ef7eeD",
    R"F1802ef7eeT()F1802ef7eeT",
    R"F1802ef7eeF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802ef7eeF",
    R"F1802ef7eeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef7eeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef7ee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef7ee", "FUN_1802ef7ee");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0xe0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 584e0cafa7a8392e009f4f2488bd558b05cf932786a3c198415d21f263e0ad29
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_1800668e0(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef7ee;
}

// 0x1802ef817 FUN_1802ef817
// source: re/dump/decompile/0x1802ef817_FUN_1802ef817.c
// size: 41 bytes; thunk: false
// body sha256: 8b0470a3cba7c7f90db280c1d8b729db269148e31cddf39c0d65b41963f6f7a2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef817{
    "0x1802ef817",
    "FUN_1802ef817",
    R"F1802ef817S(undefined FUN_1802ef817())F1802ef817S",
    R"B1802ef817(// 0x1802ef817  FUN_1802ef817
// size=41 thunk=false
// signature: undefined FUN_1802ef817()
// status: ok


void FUN_1802ef817(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_1800668e0(param_2 + 0xc0);
  }
  return;
}


)B1802ef817",
    "8b0470a3cba7c7f90db280c1d8b729db269148e31cddf39c0d65b41963f6f7a2",
    R"F1802ef817C(FUN_1800668e0)F1802ef817C",
    R"F1802ef817D()F1802ef817D",
    R"F1802ef817T()F1802ef817T",
    R"F1802ef817F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802ef817F",
    R"F1802ef817U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef817U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef817() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef817", "FUN_1802ef817");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0xc0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 8b0470a3cba7c7f90db280c1d8b729db269148e31cddf39c0d65b41963f6f7a2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("FUN_1800668e0(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef817;
}

// 0x1802ef840 FUN_1802ef840
// source: re/dump/decompile/0x1802ef840_FUN_1802ef840.c
// size: 43 bytes; thunk: false
// body sha256: da5262cd11ad8b741f6297437b33ec2270fc203e1d954798b02dfe6a0464fdba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef840{
    "0x1802ef840",
    "FUN_1802ef840",
    R"F1802ef840S(undefined FUN_1802ef840())F1802ef840S",
    R"B1802ef840(// 0x1802ef840  FUN_1802ef840
// size=43 thunk=false
// signature: undefined FUN_1802ef840()
// status: ok


void FUN_1802ef840(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ef840",
    "da5262cd11ad8b741f6297437b33ec2270fc203e1d954798b02dfe6a0464fdba",
    R"F1802ef840C()F1802ef840C",
    R"F1802ef840D()F1802ef840D",
    R"F1802ef840T()F1802ef840T",
    R"F1802ef840F(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802ef840F",
    R"F1802ef840U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef840U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef840() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef840", "FUN_1802ef840");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: da5262cd11ad8b741f6297437b33ec2270fc203e1d954798b02dfe6a0464fdba
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef840;
}

// 0x1802ef86b FUN_1802ef86b
// source: re/dump/decompile/0x1802ef86b_FUN_1802ef86b.c
// size: 43 bytes; thunk: false
// body sha256: 448b19453b91f8ce57822999f6dcbe0eaeb113147af5fe00e56e2acfeb6961ca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef86b{
    "0x1802ef86b",
    "FUN_1802ef86b",
    R"F1802ef86bS(undefined FUN_1802ef86b())F1802ef86bS",
    R"B1802ef86b(// 0x1802ef86b  FUN_1802ef86b
// size=43 thunk=false
// signature: undefined FUN_1802ef86b()
// status: ok


void FUN_1802ef86b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802ef86b",
    "448b19453b91f8ce57822999f6dcbe0eaeb113147af5fe00e56e2acfeb6961ca",
    R"F1802ef86bC()F1802ef86bC",
    R"F1802ef86bD()F1802ef86bD",
    R"F1802ef86bT()F1802ef86bT",
    R"F1802ef86bF(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802ef86bF",
    R"F1802ef86bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef86bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef86b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef86b", "FUN_1802ef86b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: 448b19453b91f8ce57822999f6dcbe0eaeb113147af5fe00e56e2acfeb6961ca
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef86b;
}

// 0x1802ef896 FUN_1802ef896
// source: re/dump/decompile/0x1802ef896_FUN_1802ef896.c
// size: 38 bytes; thunk: false
// body sha256: 3180e508744b2f7b8c96d0a2800975718da9edea09140d3e784881538b11b7e9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef896{
    "0x1802ef896",
    "FUN_1802ef896",
    R"F1802ef896S(undefined FUN_1802ef896())F1802ef896S",
    R"B1802ef896(// 0x1802ef896  FUN_1802ef896
// size=38 thunk=false
// signature: undefined FUN_1802ef896()
// status: ok


void FUN_1802ef896(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_1800668e0(param_2 + 0x30);
  }
  return;
}


)B1802ef896",
    "3180e508744b2f7b8c96d0a2800975718da9edea09140d3e784881538b11b7e9",
    R"F1802ef896C(FUN_1800668e0)F1802ef896C",
    R"F1802ef896D()F1802ef896D",
    R"F1802ef896T()F1802ef896T",
    R"F1802ef896F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802ef896F",
    R"F1802ef896U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef896U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef896() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef896", "FUN_1802ef896");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x30);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 3180e508744b2f7b8c96d0a2800975718da9edea09140d3e784881538b11b7e9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("FUN_1800668e0(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef896;
}

// 0x1802ef8bc FUN_1802ef8bc
// source: re/dump/decompile/0x1802ef8bc_FUN_1802ef8bc.c
// size: 41 bytes; thunk: false
// body sha256: 6e1c19fa0777d9e225aee6856bd7bd366c0b807917799220760d595605c9cbd8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef8bc{
    "0x1802ef8bc",
    "FUN_1802ef8bc",
    R"F1802ef8bcS(undefined FUN_1802ef8bc())F1802ef8bcS",
    R"B1802ef8bc(// 0x1802ef8bc  FUN_1802ef8bc
// size=41 thunk=false
// signature: undefined FUN_1802ef8bc()
// status: ok


void FUN_1802ef8bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_1800668e0(param_2 + 0xa0);
  }
  return;
}


)B1802ef8bc",
    "6e1c19fa0777d9e225aee6856bd7bd366c0b807917799220760d595605c9cbd8",
    R"F1802ef8bcC(FUN_1800668e0)F1802ef8bcC",
    R"F1802ef8bcD()F1802ef8bcD",
    R"F1802ef8bcT()F1802ef8bcT",
    R"F1802ef8bcF(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802ef8bcF",
    R"F1802ef8bcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef8bcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef8bc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef8bc", "FUN_1802ef8bc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0xa0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 6e1c19fa0777d9e225aee6856bd7bd366c0b807917799220760d595605c9cbd8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("FUN_1800668e0(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef8bc;
}

// 0x1802ef8f1 FUN_1802ef8f1
// source: re/dump/decompile/0x1802ef8f1_FUN_1802ef8f1.c
// size: 41 bytes; thunk: false
// body sha256: 5fb34639f6bb9ff266ac6c4c0b866e0ded5bb44cd85e61ccc6c6b32e009b6d6c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef8f1{
    "0x1802ef8f1",
    "FUN_1802ef8f1",
    R"F1802ef8f1S(undefined FUN_1802ef8f1())F1802ef8f1S",
    R"B1802ef8f1(// 0x1802ef8f1  FUN_1802ef8f1
// size=41 thunk=false
// signature: undefined FUN_1802ef8f1()
// status: ok


void FUN_1802ef8f1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


)B1802ef8f1",
    "5fb34639f6bb9ff266ac6c4c0b866e0ded5bb44cd85e61ccc6c6b32e009b6d6c",
    R"F1802ef8f1C(FUN_1800668e0)F1802ef8f1C",
    R"F1802ef8f1D()F1802ef8f1D",
    R"F1802ef8f1T()F1802ef8f1T",
    R"F1802ef8f1F(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802ef8f1F",
    R"F1802ef8f1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef8f1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef8f1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef8f1", "FUN_1802ef8f1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", load_at<std::uint64_t>(param_2 + 0x90, 0));
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 5fb34639f6bb9ff266ac6c4c0b866e0ded5bb44cd85e61ccc6c6b32e009b6d6c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x90));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef8f1;
}

// 0x1802ef970 FUN_1802ef970
// source: re/dump/decompile/0x1802ef970_FUN_1802ef970.c
// size: 22 bytes; thunk: false
// body sha256: f9b8bd24b114651604541013c1b880288ac54e031c4483e32857671aa3c0dccc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef970{
    "0x1802ef970",
    "FUN_1802ef970",
    R"F1802ef970S(undefined FUN_1802ef970())F1802ef970S",
    R"B1802ef970(// 0x1802ef970  FUN_1802ef970
// size=22 thunk=false
// signature: undefined FUN_1802ef970()
// status: ok


void FUN_1802ef970(void)

{
  DAT_180430158 = DAT_180430158 & 0xfffffffe;
  return;
}


)B1802ef970",
    "f9b8bd24b114651604541013c1b880288ac54e031c4483e32857671aa3c0dccc",
    R"F1802ef970C()F1802ef970C",
    R"F1802ef970D(DAT_180430158)F1802ef970D",
    R"F1802ef970T()F1802ef970T",
    R"F1802ef970F(11: return;)F1802ef970F",
    R"F1802ef970U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180430158.)F1802ef970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef970() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef970", "FUN_1802ef970");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180430158.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180430158", static_cast<const void*>(&image::DAT_180430158));
    // body sha256: f9b8bd24b114651604541013c1b880288ac54e031c4483e32857671aa3c0dccc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180430158 = DAT_180430158 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ef970;
}

// 0x1802ef9ce FUN_1802ef9ce
// source: re/dump/decompile/0x1802ef9ce_FUN_1802ef9ce.c
// size: 22 bytes; thunk: false
// body sha256: 5b90b4e7404771e6829531443a86aee1200cd27115f6fcd9a66cc21f329b2214
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef9ce{
    "0x1802ef9ce",
    "FUN_1802ef9ce",
    R"F1802ef9ceS(undefined FUN_1802ef9ce())F1802ef9ceS",
    R"B1802ef9ce(// 0x1802ef9ce  FUN_1802ef9ce
// size=22 thunk=false
// signature: undefined FUN_1802ef9ce()
// status: ok


void FUN_1802ef9ce(void)

{
  DAT_180430158 = DAT_180430158 & 0xfffffffe;
  return;
}


)B1802ef9ce",
    "5b90b4e7404771e6829531443a86aee1200cd27115f6fcd9a66cc21f329b2214",
    R"F1802ef9ceC()F1802ef9ceC",
    R"F1802ef9ceD(DAT_180430158)F1802ef9ceD",
    R"F1802ef9ceT()F1802ef9ceT",
    R"F1802ef9ceF(11: return;)F1802ef9ceF",
    R"F1802ef9ceU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180430158.)F1802ef9ceU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef9ce() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef9ce", "FUN_1802ef9ce");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180430158.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180430158", static_cast<const void*>(&image::DAT_180430158));
    // body sha256: 5b90b4e7404771e6829531443a86aee1200cd27115f6fcd9a66cc21f329b2214
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180430158 = DAT_180430158 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ef9ce;
}

// 0x1802ef9f0 FUN_1802ef9f0
// source: re/dump/decompile/0x1802ef9f0_FUN_1802ef9f0.c
// size: 38 bytes; thunk: false
// body sha256: 9953818c7a376ec52f55c989e2b525a2042c9ae3f6ac3bf9eded5efc91a30f3b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ef9f0{
    "0x1802ef9f0",
    "FUN_1802ef9f0",
    R"F1802ef9f0S(undefined FUN_1802ef9f0())F1802ef9f0S",
    R"B1802ef9f0(// 0x1802ef9f0  FUN_1802ef9f0
// size=38 thunk=false
// signature: undefined FUN_1802ef9f0()
// status: ok


void FUN_1802ef9f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802ef9f0",
    "9953818c7a376ec52f55c989e2b525a2042c9ae3f6ac3bf9eded5efc91a30f3b",
    R"F1802ef9f0C()F1802ef9f0C",
    R"F1802ef9f0D()F1802ef9f0D",
    R"F1802ef9f0T()F1802ef9f0T",
    R"F1802ef9f0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802ef9f0F",
    R"F1802ef9f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ef9f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ef9f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ef9f0", "FUN_1802ef9f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 9953818c7a376ec52f55c989e2b525a2042c9ae3f6ac3bf9eded5efc91a30f3b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ef9f0;
}

// 0x1802efa22 FUN_1802efa22
// source: re/dump/decompile/0x1802efa22_FUN_1802efa22.c
// size: 38 bytes; thunk: false
// body sha256: 9b99d4d31a3a627586ee53f44c985631a9048b85cca9ac995c895cccbecadbbe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efa22{
    "0x1802efa22",
    "FUN_1802efa22",
    R"F1802efa22S(undefined FUN_1802efa22())F1802efa22S",
    R"B1802efa22(// 0x1802efa22  FUN_1802efa22
// size=38 thunk=false
// signature: undefined FUN_1802efa22()
// status: ok


void FUN_1802efa22(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802efa22",
    "9b99d4d31a3a627586ee53f44c985631a9048b85cca9ac995c895cccbecadbbe",
    R"F1802efa22C()F1802efa22C",
    R"F1802efa22D()F1802efa22D",
    R"F1802efa22T()F1802efa22T",
    R"F1802efa22F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802efa22F",
    R"F1802efa22U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efa22U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efa22() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efa22", "FUN_1802efa22");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x48);
    // body sha256: 9b99d4d31a3a627586ee53f44c985631a9048b85cca9ac995c895cccbecadbbe
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efa22;
}

// 0x1802efac8 FUN_1802efac8
// source: re/dump/decompile/0x1802efac8_FUN_1802efac8.c
// size: 41 bytes; thunk: false
// body sha256: ca2dc672d72b1f61e5eb03d041b7dbb3ef37809c778c326ea90cd80272a119fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efac8{
    "0x1802efac8",
    "FUN_1802efac8",
    R"F1802efac8S(undefined FUN_1802efac8())F1802efac8S",
    R"B1802efac8(// 0x1802efac8  FUN_1802efac8
// size=41 thunk=false
// signature: undefined FUN_1802efac8()
// status: ok


void FUN_1802efac8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B1802efac8",
    "ca2dc672d72b1f61e5eb03d041b7dbb3ef37809c778c326ea90cd80272a119fb",
    R"F1802efac8C()F1802efac8C",
    R"F1802efac8D()F1802efac8D",
    R"F1802efac8T()F1802efac8T",
    R"F1802efac8F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802efac8F",
    R"F1802efac8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efac8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efac8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efac8", "FUN_1802efac8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x98);
    // body sha256: ca2dc672d72b1f61e5eb03d041b7dbb3ef37809c778c326ea90cd80272a119fb
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efac8;
}

// 0x1802efb98 FUN_1802efb98
// source: re/dump/decompile/0x1802efb98_FUN_1802efb98.c
// size: 46 bytes; thunk: false
// body sha256: 739ba500d8fafc1005c9d39c65010317b979d1457f59c307737733f1c65e199a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efb98{
    "0x1802efb98",
    "FUN_1802efb98",
    R"F1802efb98S(undefined FUN_1802efb98())F1802efb98S",
    R"B1802efb98(// 0x1802efb98  FUN_1802efb98
// size=46 thunk=false
// signature: undefined FUN_1802efb98()
// status: ok


void FUN_1802efb98(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfff7ffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x100));
  }
  return;
}


)B1802efb98",
    "739ba500d8fafc1005c9d39c65010317b979d1457f59c307737733f1c65e199a",
    R"F1802efb98C()F1802efb98C",
    R"F1802efb98D()F1802efb98D",
    R"F1802efb98T()F1802efb98T",
    R"F1802efb98F(10: if ((*(uint *)(param_2 + 0x30) & 0x80000) != 0) {
14: return;)F1802efb98F",
    R"F1802efb98U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efb98U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efb98() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efb98", "FUN_1802efb98");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x100, 0));
    // body sha256: 739ba500d8fafc1005c9d39c65010317b979d1457f59c307737733f1c65e199a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfff7ffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x100));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efb98;
}

// 0x1802efbc6 FUN_1802efbc6
// source: re/dump/decompile/0x1802efbc6_FUN_1802efbc6.c
// size: 46 bytes; thunk: false
// body sha256: 8889ccfa117c51008e439f9239b2c8bbc0eef19c7bb80972eb7306b9bba32eb6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efbc6{
    "0x1802efbc6",
    "FUN_1802efbc6",
    R"F1802efbc6S(undefined FUN_1802efbc6())F1802efbc6S",
    R"B1802efbc6(// 0x1802efbc6  FUN_1802efbc6
// size=46 thunk=false
// signature: undefined FUN_1802efbc6()
// status: ok


void FUN_1802efbc6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffefffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x100));
  }
  return;
}


)B1802efbc6",
    "8889ccfa117c51008e439f9239b2c8bbc0eef19c7bb80972eb7306b9bba32eb6",
    R"F1802efbc6C()F1802efbc6C",
    R"F1802efbc6D()F1802efbc6D",
    R"F1802efbc6T()F1802efbc6T",
    R"F1802efbc6F(10: if ((*(uint *)(param_2 + 0x30) & 0x100000) != 0) {
14: return;)F1802efbc6F",
    R"F1802efbc6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efbc6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efbc6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efbc6", "FUN_1802efbc6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x100, 0));
    // body sha256: 8889ccfa117c51008e439f9239b2c8bbc0eef19c7bb80972eb7306b9bba32eb6
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffefffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x100));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efbc6;
}

// 0x1802efc18 FUN_1802efc18
// source: re/dump/decompile/0x1802efc18_FUN_1802efc18.c
// size: 46 bytes; thunk: false
// body sha256: e8a87cfc80f6c3d152831fc44b7c98eb50a4c3964b719c8fc11bdb2293695513
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efc18{
    "0x1802efc18",
    "FUN_1802efc18",
    R"F1802efc18S(undefined FUN_1802efc18())F1802efc18S",
    R"B1802efc18(// 0x1802efc18  FUN_1802efc18
// size=46 thunk=false
// signature: undefined FUN_1802efc18()
// status: ok


void FUN_1802efc18(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x108));
  }
  return;
}


)B1802efc18",
    "e8a87cfc80f6c3d152831fc44b7c98eb50a4c3964b719c8fc11bdb2293695513",
    R"F1802efc18C()F1802efc18C",
    R"F1802efc18D()F1802efc18D",
    R"F1802efc18T()F1802efc18T",
    R"F1802efc18F(10: if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
14: return;)F1802efc18F",
    R"F1802efc18U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efc18U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efc18() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efc18", "FUN_1802efc18");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x108, 0));
    // body sha256: e8a87cfc80f6c3d152831fc44b7c98eb50a4c3964b719c8fc11bdb2293695513
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x108));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efc18;
}

// 0x1802efc46 FUN_1802efc46
// source: re/dump/decompile/0x1802efc46_FUN_1802efc46.c
// size: 46 bytes; thunk: false
// body sha256: 5fdc8fda65f862279bb28512208f1acc2b09a98becd32290c68625fa824fa8c3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efc46{
    "0x1802efc46",
    "FUN_1802efc46",
    R"F1802efc46S(undefined FUN_1802efc46())F1802efc46S",
    R"B1802efc46(// 0x1802efc46  FUN_1802efc46
// size=46 thunk=false
// signature: undefined FUN_1802efc46()
// status: ok


void FUN_1802efc46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x108));
  }
  return;
}


)B1802efc46",
    "5fdc8fda65f862279bb28512208f1acc2b09a98becd32290c68625fa824fa8c3",
    R"F1802efc46C()F1802efc46C",
    R"F1802efc46D()F1802efc46D",
    R"F1802efc46T()F1802efc46T",
    R"F1802efc46F(10: if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
14: return;)F1802efc46F",
    R"F1802efc46U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efc46U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efc46() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efc46", "FUN_1802efc46");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x108, 0));
    // body sha256: 5fdc8fda65f862279bb28512208f1acc2b09a98becd32290c68625fa824fa8c3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x40000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x108));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efc46;
}

// 0x1802efca4 FUN_1802efca4
// source: re/dump/decompile/0x1802efca4_FUN_1802efca4.c
// size: 46 bytes; thunk: false
// body sha256: bebd2106ab034c3836db7ebb33c3a49e25ae352ceabb348fa67df0f02b9a9cfb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efca4{
    "0x1802efca4",
    "FUN_1802efca4",
    R"F1802efca4S(undefined FUN_1802efca4())F1802efca4S",
    R"B1802efca4(// 0x1802efca4  FUN_1802efca4
// size=46 thunk=false
// signature: undefined FUN_1802efca4()
// status: ok


void FUN_1802efca4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffff7fff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));
  }
  return;
}


)B1802efca4",
    "bebd2106ab034c3836db7ebb33c3a49e25ae352ceabb348fa67df0f02b9a9cfb",
    R"F1802efca4C()F1802efca4C",
    R"F1802efca4D()F1802efca4D",
    R"F1802efca4T()F1802efca4T",
    R"F1802efca4F(10: if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) {
14: return;)F1802efca4F",
    R"F1802efca4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efca4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efca4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efca4", "FUN_1802efca4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x110, 0));
    // body sha256: bebd2106ab034c3836db7ebb33c3a49e25ae352ceabb348fa67df0f02b9a9cfb
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffff7fff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efca4;
}

// 0x1802efcd2 FUN_1802efcd2
// source: re/dump/decompile/0x1802efcd2_FUN_1802efcd2.c
// size: 46 bytes; thunk: false
// body sha256: e0486abbf62912213c88d3f9dc6f70c3643ed68e79b0666b555790c6b36e884d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efcd2{
    "0x1802efcd2",
    "FUN_1802efcd2",
    R"F1802efcd2S(undefined FUN_1802efcd2())F1802efcd2S",
    R"B1802efcd2(// 0x1802efcd2  FUN_1802efcd2
// size=46 thunk=false
// signature: undefined FUN_1802efcd2()
// status: ok


void FUN_1802efcd2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));
  }
  return;
}


)B1802efcd2",
    "e0486abbf62912213c88d3f9dc6f70c3643ed68e79b0666b555790c6b36e884d",
    R"F1802efcd2C()F1802efcd2C",
    R"F1802efcd2D()F1802efcd2D",
    R"F1802efcd2T()F1802efcd2T",
    R"F1802efcd2F(10: if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
14: return;)F1802efcd2F",
    R"F1802efcd2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efcd2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efcd2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efcd2", "FUN_1802efcd2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x110, 0));
    // body sha256: e0486abbf62912213c88d3f9dc6f70c3643ed68e79b0666b555790c6b36e884d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efcd2;
}

// 0x1802efd34 FUN_1802efd34
// source: re/dump/decompile/0x1802efd34_FUN_1802efd34.c
// size: 46 bytes; thunk: false
// body sha256: 6b5ce682eec23e82a781d88430ac3eb2d6fe72c10a73d4fa4a5e415574486f76
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efd34{
    "0x1802efd34",
    "FUN_1802efd34",
    R"F1802efd34S(undefined FUN_1802efd34())F1802efd34S",
    R"B1802efd34(// 0x1802efd34  FUN_1802efd34
// size=46 thunk=false
// signature: undefined FUN_1802efd34()
// status: ok


void FUN_1802efd34(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x118));
  }
  return;
}


)B1802efd34",
    "6b5ce682eec23e82a781d88430ac3eb2d6fe72c10a73d4fa4a5e415574486f76",
    R"F1802efd34C()F1802efd34C",
    R"F1802efd34D()F1802efd34D",
    R"F1802efd34T()F1802efd34T",
    R"F1802efd34F(10: if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
14: return;)F1802efd34F",
    R"F1802efd34U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efd34U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efd34() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efd34", "FUN_1802efd34");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x118, 0));
    // body sha256: 6b5ce682eec23e82a781d88430ac3eb2d6fe72c10a73d4fa4a5e415574486f76
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x118));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efd34;
}

// 0x1802efd62 FUN_1802efd62
// source: re/dump/decompile/0x1802efd62_FUN_1802efd62.c
// size: 46 bytes; thunk: false
// body sha256: 34bfc3bc5d01f91cc7eed79c5e1d4eb2d1a4e695776e4ceda46d08260fbe1dc0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efd62{
    "0x1802efd62",
    "FUN_1802efd62",
    R"F1802efd62S(undefined FUN_1802efd62())F1802efd62S",
    R"B1802efd62(// 0x1802efd62  FUN_1802efd62
// size=46 thunk=false
// signature: undefined FUN_1802efd62()
// status: ok


void FUN_1802efd62(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x118));
  }
  return;
}


)B1802efd62",
    "34bfc3bc5d01f91cc7eed79c5e1d4eb2d1a4e695776e4ceda46d08260fbe1dc0",
    R"F1802efd62C()F1802efd62C",
    R"F1802efd62D()F1802efd62D",
    R"F1802efd62T()F1802efd62T",
    R"F1802efd62F(10: if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
14: return;)F1802efd62F",
    R"F1802efd62U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efd62U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efd62() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efd62", "FUN_1802efd62");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x118, 0));
    // body sha256: 34bfc3bc5d01f91cc7eed79c5e1d4eb2d1a4e695776e4ceda46d08260fbe1dc0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x118));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efd62;
}

// 0x1802efdc4 FUN_1802efdc4
// source: re/dump/decompile/0x1802efdc4_FUN_1802efdc4.c
// size: 46 bytes; thunk: false
// body sha256: f47f4f28dcf8d68bb9952268b395d7d527d721feba2737f70d6e84bba1c294b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efdc4{
    "0x1802efdc4",
    "FUN_1802efdc4",
    R"F1802efdc4S(undefined FUN_1802efdc4())F1802efdc4S",
    R"B1802efdc4(// 0x1802efdc4  FUN_1802efdc4
// size=46 thunk=false
// signature: undefined FUN_1802efdc4()
// status: ok


void FUN_1802efdc4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


)B1802efdc4",
    "f47f4f28dcf8d68bb9952268b395d7d527d721feba2737f70d6e84bba1c294b9",
    R"F1802efdc4C()F1802efdc4C",
    R"F1802efdc4D()F1802efdc4D",
    R"F1802efdc4T()F1802efdc4T",
    R"F1802efdc4F(10: if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
14: return;)F1802efdc4F",
    R"F1802efdc4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efdc4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efdc4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efdc4", "FUN_1802efdc4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xc0, 0));
    // body sha256: f47f4f28dcf8d68bb9952268b395d7d527d721feba2737f70d6e84bba1c294b9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efdc4;
}

// 0x1802efdf2 FUN_1802efdf2
// source: re/dump/decompile/0x1802efdf2_FUN_1802efdf2.c
// size: 46 bytes; thunk: false
// body sha256: 27cf71146df79d85258a7013ef9799fa63aab3b04464227fa3fb5877c2517949
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efdf2{
    "0x1802efdf2",
    "FUN_1802efdf2",
    R"F1802efdf2S(undefined FUN_1802efdf2())F1802efdf2S",
    R"B1802efdf2(// 0x1802efdf2  FUN_1802efdf2
// size=46 thunk=false
// signature: undefined FUN_1802efdf2()
// status: ok


void FUN_1802efdf2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


)B1802efdf2",
    "27cf71146df79d85258a7013ef9799fa63aab3b04464227fa3fb5877c2517949",
    R"F1802efdf2C()F1802efdf2C",
    R"F1802efdf2D()F1802efdf2D",
    R"F1802efdf2T()F1802efdf2T",
    R"F1802efdf2F(10: if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0) {
14: return;)F1802efdf2F",
    R"F1802efdf2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efdf2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efdf2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efdf2", "FUN_1802efdf2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xc0, 0));
    // body sha256: 27cf71146df79d85258a7013ef9799fa63aab3b04464227fa3fb5877c2517949
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffefff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efdf2;
}

// 0x1802efe57 FUN_1802efe57
// source: re/dump/decompile/0x1802efe57_FUN_1802efe57.c
// size: 43 bytes; thunk: false
// body sha256: 23747a5450feadfd4ec695a2fa0dcbab5b071a4ef54934b440e8c72182faf549
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efe57{
    "0x1802efe57",
    "FUN_1802efe57",
    R"F1802efe57S(undefined FUN_1802efe57())F1802efe57S",
    R"B1802efe57(// 0x1802efe57  FUN_1802efe57
// size=43 thunk=false
// signature: undefined FUN_1802efe57()
// status: ok


void FUN_1802efe57(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802efe57",
    "23747a5450feadfd4ec695a2fa0dcbab5b071a4ef54934b440e8c72182faf549",
    R"F1802efe57C()F1802efe57C",
    R"F1802efe57D()F1802efe57D",
    R"F1802efe57T()F1802efe57T",
    R"F1802efe57F(10: if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
14: return;)F1802efe57F",
    R"F1802efe57U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efe57U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efe57() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efe57", "FUN_1802efe57");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 23747a5450feadfd4ec695a2fa0dcbab5b071a4ef54934b440e8c72182faf549
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efe57;
}

// 0x1802efe82 FUN_1802efe82
// source: re/dump/decompile/0x1802efe82_FUN_1802efe82.c
// size: 43 bytes; thunk: false
// body sha256: bd8e66cf8b5dbff12277a69bb674275be2aa402d0b685a4f8c62e658bfdcb137
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efe82{
    "0x1802efe82",
    "FUN_1802efe82",
    R"F1802efe82S(undefined FUN_1802efe82())F1802efe82S",
    R"B1802efe82(// 0x1802efe82  FUN_1802efe82
// size=43 thunk=false
// signature: undefined FUN_1802efe82()
// status: ok


void FUN_1802efe82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802efe82",
    "bd8e66cf8b5dbff12277a69bb674275be2aa402d0b685a4f8c62e658bfdcb137",
    R"F1802efe82C()F1802efe82C",
    R"F1802efe82D()F1802efe82D",
    R"F1802efe82T()F1802efe82T",
    R"F1802efe82F(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802efe82F",
    R"F1802efe82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efe82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efe82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efe82", "FUN_1802efe82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: bd8e66cf8b5dbff12277a69bb674275be2aa402d0b685a4f8c62e658bfdcb137
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802efe82;
}

// 0x1802efed1 FUN_1802efed1
// source: re/dump/decompile/0x1802efed1_FUN_1802efed1.c
// size: 45 bytes; thunk: false
// body sha256: 712da5c89a0018a203b3b3330807de37c7c524d43ccd73aa59d8252c5741f35c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802efed1{
    "0x1802efed1",
    "FUN_1802efed1",
    R"F1802efed1S(undefined FUN_1802efed1())F1802efed1S",
    R"B1802efed1(// 0x1802efed1  FUN_1802efed1
// size=45 thunk=false
// signature: undefined FUN_1802efed1()
// status: ok


void FUN_1802efed1(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x220),0x30,5,FUN_180151950);
  return;
}


)B1802efed1",
    "712da5c89a0018a203b3b3330807de37c7c524d43ccd73aa59d8252c5741f35c",
    R"F1802efed1C(FUN_180151950)F1802efed1C",
    R"F1802efed1D()F1802efed1D",
    R"F1802efed1T()F1802efed1T",
    R"F1802efed1F(11: return;)F1802efed1F",
    R"F1802efed1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802efed1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802efed1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802efed1", "FUN_1802efed1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", (void *)(param_2 + 0x220), 0x30, 5, &image::FUN_180151950);
    trace.call_target("FUN_180151950", reinterpret_cast<const void*>(&image::FUN_180151950));
    // body sha256: 712da5c89a0018a203b3b3330807de37c7c524d43ccd73aa59d8252c5741f35c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_((void *)(param_2 + 0x220),0x30,5,FUN_180151950);");
            trace.statement("return;");
        }
    return kFunction_0x1802efed1;
}

// 0x1802eff22 FUN_1802eff22
// source: re/dump/decompile/0x1802eff22_FUN_1802eff22.c
// size: 43 bytes; thunk: false
// body sha256: f4267020bb1bf2ee887da9a831acaf74f268193c504791bca667a617bc71bf6d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eff22{
    "0x1802eff22",
    "FUN_1802eff22",
    R"F1802eff22S(undefined FUN_1802eff22())F1802eff22S",
    R"B1802eff22(// 0x1802eff22  FUN_1802eff22
// size=43 thunk=false
// signature: undefined FUN_1802eff22()
// status: ok


void FUN_1802eff22(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802eff22",
    "f4267020bb1bf2ee887da9a831acaf74f268193c504791bca667a617bc71bf6d",
    R"F1802eff22C()F1802eff22C",
    R"F1802eff22D()F1802eff22D",
    R"F1802eff22T()F1802eff22T",
    R"F1802eff22F(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802eff22F",
    R"F1802eff22U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eff22U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eff22() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eff22", "FUN_1802eff22");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: f4267020bb1bf2ee887da9a831acaf74f268193c504791bca667a617bc71bf6d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eff22;
}

// 0x1802eff4d FUN_1802eff4d
// source: re/dump/decompile/0x1802eff4d_FUN_1802eff4d.c
// size: 43 bytes; thunk: false
// body sha256: 8b5cdac82c1eba9094a33bc4b2ce42bbc90f0aa7fe74238cd219b832bd2697e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eff4d{
    "0x1802eff4d",
    "FUN_1802eff4d",
    R"F1802eff4dS(undefined FUN_1802eff4d())F1802eff4dS",
    R"B1802eff4d(// 0x1802eff4d  FUN_1802eff4d
// size=43 thunk=false
// signature: undefined FUN_1802eff4d()
// status: ok


void FUN_1802eff4d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802eff4d",
    "8b5cdac82c1eba9094a33bc4b2ce42bbc90f0aa7fe74238cd219b832bd2697e4",
    R"F1802eff4dC()F1802eff4dC",
    R"F1802eff4dD()F1802eff4dD",
    R"F1802eff4dT()F1802eff4dT",
    R"F1802eff4dF(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802eff4dF",
    R"F1802eff4dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eff4dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eff4d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eff4d", "FUN_1802eff4d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 8b5cdac82c1eba9094a33bc4b2ce42bbc90f0aa7fe74238cd219b832bd2697e4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eff4d;
}

// 0x1802effa8 FUN_1802effa8
// source: re/dump/decompile/0x1802effa8_FUN_1802effa8.c
// size: 38 bytes; thunk: false
// body sha256: 851916fdbafe5db7e3b10ef2eb6796156ebebe6ed64e0515d3d8ca69b9b955d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802effa8{
    "0x1802effa8",
    "FUN_1802effa8",
    R"F1802effa8S(undefined FUN_1802effa8())F1802effa8S",
    R"B1802effa8(// 0x1802effa8  FUN_1802effa8
// size=38 thunk=false
// signature: undefined FUN_1802effa8()
// status: ok


void FUN_1802effa8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802effa8",
    "851916fdbafe5db7e3b10ef2eb6796156ebebe6ed64e0515d3d8ca69b9b955d3",
    R"F1802effa8C()F1802effa8C",
    R"F1802effa8D()F1802effa8D",
    R"F1802effa8T()F1802effa8T",
    R"F1802effa8F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802effa8F",
    R"F1802effa8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802effa8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802effa8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802effa8", "FUN_1802effa8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 851916fdbafe5db7e3b10ef2eb6796156ebebe6ed64e0515d3d8ca69b9b955d3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802effa8;
}

// 0x1802effce FUN_1802effce
// source: re/dump/decompile/0x1802effce_FUN_1802effce.c
// size: 38 bytes; thunk: false
// body sha256: 157ef2083472c64f10e582337ab769929fe217465dc8189e15fc67865a4014b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802effce{
    "0x1802effce",
    "FUN_1802effce",
    R"F1802effceS(undefined FUN_1802effce())F1802effceS",
    R"B1802effce(// 0x1802effce  FUN_1802effce
// size=38 thunk=false
// signature: undefined FUN_1802effce()
// status: ok


void FUN_1802effce(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802effce",
    "157ef2083472c64f10e582337ab769929fe217465dc8189e15fc67865a4014b5",
    R"F1802effceC()F1802effceC",
    R"F1802effceD()F1802effceD",
    R"F1802effceT()F1802effceT",
    R"F1802effceF(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802effceF",
    R"F1802effceU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802effceU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802effce() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802effce", "FUN_1802effce");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: 157ef2083472c64f10e582337ab769929fe217465dc8189e15fc67865a4014b5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802effce;
}

// 0x1802f003c FUN_1802f003c
// source: re/dump/decompile/0x1802f003c_FUN_1802f003c.c
// size: 38 bytes; thunk: false
// body sha256: a56054881c63d5c7e9e76aa4a1dda64bd0997ab435acde8c6d18e6046f6ddbc3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f003c{
    "0x1802f003c",
    "FUN_1802f003c",
    R"F1802f003cS(undefined FUN_1802f003c())F1802f003cS",
    R"B1802f003c(// 0x1802f003c  FUN_1802f003c
// size=38 thunk=false
// signature: undefined FUN_1802f003c()
// status: ok


void FUN_1802f003c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802f003c",
    "a56054881c63d5c7e9e76aa4a1dda64bd0997ab435acde8c6d18e6046f6ddbc3",
    R"F1802f003cC()F1802f003cC",
    R"F1802f003cD()F1802f003cD",
    R"F1802f003cT()F1802f003cT",
    R"F1802f003cF(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802f003cF",
    R"F1802f003cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f003cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f003c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f003c", "FUN_1802f003c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: a56054881c63d5c7e9e76aa4a1dda64bd0997ab435acde8c6d18e6046f6ddbc3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f003c;
}

// 0x1802f0062 FUN_1802f0062
// source: re/dump/decompile/0x1802f0062_FUN_1802f0062.c
// size: 38 bytes; thunk: false
// body sha256: a5b52fdf5fc00fb71989106883a40b47808c8ed242b187323579f4a703c9b9c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0062{
    "0x1802f0062",
    "FUN_1802f0062",
    R"F1802f0062S(undefined FUN_1802f0062())F1802f0062S",
    R"B1802f0062(// 0x1802f0062  FUN_1802f0062
// size=38 thunk=false
// signature: undefined FUN_1802f0062()
// status: ok


void FUN_1802f0062(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802f0062",
    "a5b52fdf5fc00fb71989106883a40b47808c8ed242b187323579f4a703c9b9c9",
    R"F1802f0062C()F1802f0062C",
    R"F1802f0062D()F1802f0062D",
    R"F1802f0062T()F1802f0062T",
    R"F1802f0062F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802f0062F",
    R"F1802f0062U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0062U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0062() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0062", "FUN_1802f0062");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x38, 0));
    // body sha256: a5b52fdf5fc00fb71989106883a40b47808c8ed242b187323579f4a703c9b9c9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0062;
}

// 0x1802f0094 FUN_1802f0094
// source: re/dump/decompile/0x1802f0094_FUN_1802f0094.c
// size: 41 bytes; thunk: false
// body sha256: dc53406dac742b571bf8cfb720c0f6cae219fdfc9339ece3834162eb1f93df48
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0094{
    "0x1802f0094",
    "FUN_1802f0094",
    R"F1802f0094S(undefined FUN_1802f0094())F1802f0094S",
    R"B1802f0094(// 0x1802f0094  FUN_1802f0094
// size=41 thunk=false
// signature: undefined FUN_1802f0094()
// status: ok


void FUN_1802f0094(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


)B1802f0094",
    "dc53406dac742b571bf8cfb720c0f6cae219fdfc9339ece3834162eb1f93df48",
    R"F1802f0094C()F1802f0094C",
    R"F1802f0094D()F1802f0094D",
    R"F1802f0094T()F1802f0094T",
    R"F1802f0094F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802f0094F",
    R"F1802f0094U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0094U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0094() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0094", "FUN_1802f0094");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xc0, 0));
    // body sha256: dc53406dac742b571bf8cfb720c0f6cae219fdfc9339ece3834162eb1f93df48
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0094;
}

// 0x1802f00bd FUN_1802f00bd
// source: re/dump/decompile/0x1802f00bd_FUN_1802f00bd.c
// size: 41 bytes; thunk: false
// body sha256: 60b337616860da9a3df6ed85993ef7918eeb4e8b7f523393703fdce08e72e8f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f00bd{
    "0x1802f00bd",
    "FUN_1802f00bd",
    R"F1802f00bdS(undefined FUN_1802f00bd())F1802f00bdS",
    R"B1802f00bd(// 0x1802f00bd  FUN_1802f00bd
// size=41 thunk=false
// signature: undefined FUN_1802f00bd()
// status: ok


void FUN_1802f00bd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


)B1802f00bd",
    "60b337616860da9a3df6ed85993ef7918eeb4e8b7f523393703fdce08e72e8f3",
    R"F1802f00bdC()F1802f00bdC",
    R"F1802f00bdD()F1802f00bdD",
    R"F1802f00bdT()F1802f00bdT",
    R"F1802f00bdF(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802f00bdF",
    R"F1802f00bdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f00bdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f00bd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f00bd", "FUN_1802f00bd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xc0, 0));
    // body sha256: 60b337616860da9a3df6ed85993ef7918eeb4e8b7f523393703fdce08e72e8f3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f00bd;
}

// 0x1802f0146 FUN_1802f0146
// source: re/dump/decompile/0x1802f0146_FUN_1802f0146.c
// size: 41 bytes; thunk: false
// body sha256: 0008aad472a161d7125a39c29559ec2fc3707d3b8168f67b05aa8ec11f06274c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0146{
    "0x1802f0146",
    "FUN_1802f0146",
    R"F1802f0146S(undefined FUN_1802f0146())F1802f0146S",
    R"B1802f0146(// 0x1802f0146  FUN_1802f0146
// size=41 thunk=false
// signature: undefined FUN_1802f0146()
// status: ok


void FUN_1802f0146(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x178);
  }
  return;
}


)B1802f0146",
    "0008aad472a161d7125a39c29559ec2fc3707d3b8168f67b05aa8ec11f06274c",
    R"F1802f0146C()F1802f0146C",
    R"F1802f0146D()F1802f0146D",
    R"F1802f0146T()F1802f0146T",
    R"F1802f0146F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f0146F",
    R"F1802f0146U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0146U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0146() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0146", "FUN_1802f0146");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x178);
    // body sha256: 0008aad472a161d7125a39c29559ec2fc3707d3b8168f67b05aa8ec11f06274c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x178);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0146;
}

// 0x1802f02cc FUN_1802f02cc
// source: re/dump/decompile/0x1802f02cc_FUN_1802f02cc.c
// size: 41 bytes; thunk: false
// body sha256: ff19946e933c4a18112369fd8cb09fe10a439004ca89fe84094041ba1cd76206
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f02cc{
    "0x1802f02cc",
    "FUN_1802f02cc",
    R"F1802f02ccS(undefined FUN_1802f02cc())F1802f02ccS",
    R"B1802f02cc(// 0x1802f02cc  FUN_1802f02cc
// size=41 thunk=false
// signature: undefined FUN_1802f02cc()
// status: ok


void FUN_1802f02cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x90);
  }
  return;
}


)B1802f02cc",
    "ff19946e933c4a18112369fd8cb09fe10a439004ca89fe84094041ba1cd76206",
    R"F1802f02ccC(FUN_18021b0b0)F1802f02ccC",
    R"F1802f02ccD()F1802f02ccD",
    R"F1802f02ccT()F1802f02ccT",
    R"F1802f02ccF(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f02ccF",
    R"F1802f02ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f02ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f02cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f02cc", "FUN_1802f02cc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021b0b0", param_2 + 0x90);
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: ff19946e933c4a18112369fd8cb09fe10a439004ca89fe84094041ba1cd76206
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f02cc;
}

// 0x1802f0340 FUN_1802f0340
// source: re/dump/decompile/0x1802f0340_FUN_1802f0340.c
// size: 38 bytes; thunk: false
// body sha256: 3d8b07d11b8b59fe886fa675b4d3675f7b4fb03a7f397d2c2eadbcfa68e103d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0340{
    "0x1802f0340",
    "FUN_1802f0340",
    R"F1802f0340S(undefined FUN_1802f0340())F1802f0340S",
    R"B1802f0340(// 0x1802f0340  FUN_1802f0340
// size=38 thunk=false
// signature: undefined FUN_1802f0340()
// status: ok


void FUN_1802f0340(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802f0340",
    "3d8b07d11b8b59fe886fa675b4d3675f7b4fb03a7f397d2c2eadbcfa68e103d9",
    R"F1802f0340C()F1802f0340C",
    R"F1802f0340D()F1802f0340D",
    R"F1802f0340T()F1802f0340T",
    R"F1802f0340F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f0340F",
    R"F1802f0340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0340", "FUN_1802f0340");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: 3d8b07d11b8b59fe886fa675b4d3675f7b4fb03a7f397d2c2eadbcfa68e103d9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0340;
}

// 0x1802f0366 FUN_1802f0366
// source: re/dump/decompile/0x1802f0366_FUN_1802f0366.c
// size: 38 bytes; thunk: false
// body sha256: a99ca269db090105b75603690fa230b4580ee9a7b6dc089d995b372f61cf4530
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0366{
    "0x1802f0366",
    "FUN_1802f0366",
    R"F1802f0366S(undefined FUN_1802f0366())F1802f0366S",
    R"B1802f0366(// 0x1802f0366  FUN_1802f0366
// size=38 thunk=false
// signature: undefined FUN_1802f0366()
// status: ok


void FUN_1802f0366(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802f0366",
    "a99ca269db090105b75603690fa230b4580ee9a7b6dc089d995b372f61cf4530",
    R"F1802f0366C()F1802f0366C",
    R"F1802f0366D()F1802f0366D",
    R"F1802f0366T()F1802f0366T",
    R"F1802f0366F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802f0366F",
    R"F1802f0366U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0366U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0366() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0366", "FUN_1802f0366");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: a99ca269db090105b75603690fa230b4580ee9a7b6dc089d995b372f61cf4530
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0366;
}

// 0x1802f03b0 FUN_1802f03b0
// source: re/dump/decompile/0x1802f03b0_FUN_1802f03b0.c
// size: 38 bytes; thunk: false
// body sha256: 09a834a0a0acd698bbcf0776f0b49512c43238019e02018db45258e5cc9d5e20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f03b0{
    "0x1802f03b0",
    "FUN_1802f03b0",
    R"F1802f03b0S(undefined FUN_1802f03b0())F1802f03b0S",
    R"B1802f03b0(// 0x1802f03b0  FUN_1802f03b0
// size=38 thunk=false
// signature: undefined FUN_1802f03b0()
// status: ok


void FUN_1802f03b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802f03b0",
    "09a834a0a0acd698bbcf0776f0b49512c43238019e02018db45258e5cc9d5e20",
    R"F1802f03b0C()F1802f03b0C",
    R"F1802f03b0D()F1802f03b0D",
    R"F1802f03b0T()F1802f03b0T",
    R"F1802f03b0F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802f03b0F",
    R"F1802f03b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f03b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f03b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f03b0", "FUN_1802f03b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: 09a834a0a0acd698bbcf0776f0b49512c43238019e02018db45258e5cc9d5e20
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f03b0;
}

// 0x1802f03d6 FUN_1802f03d6
// source: re/dump/decompile/0x1802f03d6_FUN_1802f03d6.c
// size: 38 bytes; thunk: false
// body sha256: f53a19c165e74b5b582bffd9ee8fbd3b7ede5049e72cbd487333f27260a09646
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f03d6{
    "0x1802f03d6",
    "FUN_1802f03d6",
    R"F1802f03d6S(undefined FUN_1802f03d6())F1802f03d6S",
    R"B1802f03d6(// 0x1802f03d6  FUN_1802f03d6
// size=38 thunk=false
// signature: undefined FUN_1802f03d6()
// status: ok


void FUN_1802f03d6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802f03d6",
    "f53a19c165e74b5b582bffd9ee8fbd3b7ede5049e72cbd487333f27260a09646",
    R"F1802f03d6C()F1802f03d6C",
    R"F1802f03d6D()F1802f03d6D",
    R"F1802f03d6T()F1802f03d6T",
    R"F1802f03d6F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802f03d6F",
    R"F1802f03d6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f03d6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f03d6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f03d6", "FUN_1802f03d6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: f53a19c165e74b5b582bffd9ee8fbd3b7ede5049e72cbd487333f27260a09646
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f03d6;
}

// 0x1802f042c FUN_1802f042c
// source: re/dump/decompile/0x1802f042c_FUN_1802f042c.c
// size: 38 bytes; thunk: false
// body sha256: 83d8f46f041c5caaf6a18f40df53282028d69bf1da4a2edd1c59d71023e4fe39
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f042c{
    "0x1802f042c",
    "FUN_1802f042c",
    R"F1802f042cS(undefined FUN_1802f042c())F1802f042cS",
    R"B1802f042c(// 0x1802f042c  FUN_1802f042c
// size=38 thunk=false
// signature: undefined FUN_1802f042c()
// status: ok


void FUN_1802f042c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802f042c",
    "83d8f46f041c5caaf6a18f40df53282028d69bf1da4a2edd1c59d71023e4fe39",
    R"F1802f042cC()F1802f042cC",
    R"F1802f042cD()F1802f042cD",
    R"F1802f042cT()F1802f042cT",
    R"F1802f042cF(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802f042cF",
    R"F1802f042cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f042cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f042c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f042c", "FUN_1802f042c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: 83d8f46f041c5caaf6a18f40df53282028d69bf1da4a2edd1c59d71023e4fe39
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f042c;
}

// 0x1802f0452 FUN_1802f0452
// source: re/dump/decompile/0x1802f0452_FUN_1802f0452.c
// size: 43 bytes; thunk: false
// body sha256: e383eba1a50bfdd50a676be40574fcf7812fb79819b0aac884c8864ca24493ef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0452{
    "0x1802f0452",
    "FUN_1802f0452",
    R"F1802f0452S(undefined FUN_1802f0452())F1802f0452S",
    R"B1802f0452(// 0x1802f0452  FUN_1802f0452
// size=43 thunk=false
// signature: undefined FUN_1802f0452()
// status: ok


void FUN_1802f0452(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802f0452",
    "e383eba1a50bfdd50a676be40574fcf7812fb79819b0aac884c8864ca24493ef",
    R"F1802f0452C()F1802f0452C",
    R"F1802f0452D()F1802f0452D",
    R"F1802f0452T()F1802f0452T",
    R"F1802f0452F(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802f0452F",
    R"F1802f0452U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0452U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0452() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0452", "FUN_1802f0452");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x78, 0));
    // body sha256: e383eba1a50bfdd50a676be40574fcf7812fb79819b0aac884c8864ca24493ef
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0452;
}

// 0x1802f04ad FUN_1802f04ad
// source: re/dump/decompile/0x1802f04ad_FUN_1802f04ad.c
// size: 46 bytes; thunk: false
// body sha256: 8b9964f6f43176834d0f68c54bd7dfff0c764fbd6ef841a2d0bacad79d4895ee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f04ad{
    "0x1802f04ad",
    "FUN_1802f04ad",
    R"F1802f04adS(undefined FUN_1802f04ad())F1802f04adS",
    R"B1802f04ad(// 0x1802f04ad  FUN_1802f04ad
// size=46 thunk=false
// signature: undefined FUN_1802f04ad()
// status: ok


void FUN_1802f04ad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802f04ad",
    "8b9964f6f43176834d0f68c54bd7dfff0c764fbd6ef841a2d0bacad79d4895ee",
    R"F1802f04adC()F1802f04adC",
    R"F1802f04adD()F1802f04adD",
    R"F1802f04adT()F1802f04adT",
    R"F1802f04adF(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802f04adF",
    R"F1802f04adU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f04adU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f04ad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f04ad", "FUN_1802f04ad");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xa0, 0));
    // body sha256: 8b9964f6f43176834d0f68c54bd7dfff0c764fbd6ef841a2d0bacad79d4895ee
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f04ad;
}

// 0x1802f04db FUN_1802f04db
// source: re/dump/decompile/0x1802f04db_FUN_1802f04db.c
// size: 46 bytes; thunk: false
// body sha256: 99ebbccaad1ccd0cfb90b2ae4e76bc0fea94a2ba3d53c6e8f2b6ee51deeb25db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f04db{
    "0x1802f04db",
    "FUN_1802f04db",
    R"F1802f04dbS(undefined FUN_1802f04db())F1802f04dbS",
    R"B1802f04db(// 0x1802f04db  FUN_1802f04db
// size=46 thunk=false
// signature: undefined FUN_1802f04db()
// status: ok


void FUN_1802f04db(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802f04db",
    "99ebbccaad1ccd0cfb90b2ae4e76bc0fea94a2ba3d53c6e8f2b6ee51deeb25db",
    R"F1802f04dbC()F1802f04dbC",
    R"F1802f04dbD()F1802f04dbD",
    R"F1802f04dbT()F1802f04dbT",
    R"F1802f04dbF(10: if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
14: return;)F1802f04dbF",
    R"F1802f04dbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f04dbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f04db() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f04db", "FUN_1802f04db");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0xa0, 0));
    // body sha256: 99ebbccaad1ccd0cfb90b2ae4e76bc0fea94a2ba3d53c6e8f2b6ee51deeb25db
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f04db;
}

// 0x1802f0539 FUN_1802f0539
// source: re/dump/decompile/0x1802f0539_FUN_1802f0539.c
// size: 46 bytes; thunk: false
// body sha256: 0ac653ca02088fe279a7bf13eae8fcccd897b106a8ed702b8bdc71585b6b2315
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0539{
    "0x1802f0539",
    "FUN_1802f0539",
    R"F1802f0539S(undefined FUN_1802f0539())F1802f0539S",
    R"B1802f0539(// 0x1802f0539  FUN_1802f0539
// size=46 thunk=false
// signature: undefined FUN_1802f0539()
// status: ok


void FUN_1802f0539(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f0539",
    "0ac653ca02088fe279a7bf13eae8fcccd897b106a8ed702b8bdc71585b6b2315",
    R"F1802f0539C()F1802f0539C",
    R"F1802f0539D()F1802f0539D",
    R"F1802f0539T()F1802f0539T",
    R"F1802f0539F(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802f0539F",
    R"F1802f0539U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0539U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0539() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0539", "FUN_1802f0539");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x80, 0));
    // body sha256: 0ac653ca02088fe279a7bf13eae8fcccd897b106a8ed702b8bdc71585b6b2315
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0539;
}

// 0x1802f0567 FUN_1802f0567
// source: re/dump/decompile/0x1802f0567_FUN_1802f0567.c
// size: 46 bytes; thunk: false
// body sha256: 4dbfd4f87ad62636d5765f858d5237a4f86fe233b13806c24ff04263390fb276
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0567{
    "0x1802f0567",
    "FUN_1802f0567",
    R"F1802f0567S(undefined FUN_1802f0567())F1802f0567S",
    R"B1802f0567(// 0x1802f0567  FUN_1802f0567
// size=46 thunk=false
// signature: undefined FUN_1802f0567()
// status: ok


void FUN_1802f0567(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f0567",
    "4dbfd4f87ad62636d5765f858d5237a4f86fe233b13806c24ff04263390fb276",
    R"F1802f0567C()F1802f0567C",
    R"F1802f0567D()F1802f0567D",
    R"F1802f0567T()F1802f0567T",
    R"F1802f0567F(10: if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
14: return;)F1802f0567F",
    R"F1802f0567U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0567U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0567() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0567", "FUN_1802f0567");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x80, 0));
    // body sha256: 4dbfd4f87ad62636d5765f858d5237a4f86fe233b13806c24ff04263390fb276
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0567;
}

// 0x1802f05c5 FUN_1802f05c5
// source: re/dump/decompile/0x1802f05c5_FUN_1802f05c5.c
// size: 41 bytes; thunk: false
// body sha256: 8e154a9540efd3da6f51d9c8115dc167ce9edfc5dcbfb7666c4c27febbb9e926
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f05c5{
    "0x1802f05c5",
    "FUN_1802f05c5",
    R"F1802f05c5S(undefined FUN_1802f05c5())F1802f05c5S",
    R"B1802f05c5(// 0x1802f05c5  FUN_1802f05c5
// size=41 thunk=false
// signature: undefined FUN_1802f05c5()
// status: ok


void FUN_1802f05c5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f05c5",
    "8e154a9540efd3da6f51d9c8115dc167ce9edfc5dcbfb7666c4c27febbb9e926",
    R"F1802f05c5C()F1802f05c5C",
    R"F1802f05c5D()F1802f05c5D",
    R"F1802f05c5T()F1802f05c5T",
    R"F1802f05c5F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802f05c5F",
    R"F1802f05c5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f05c5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f05c5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f05c5", "FUN_1802f05c5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x80, 0));
    // body sha256: 8e154a9540efd3da6f51d9c8115dc167ce9edfc5dcbfb7666c4c27febbb9e926
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f05c5;
}

// 0x1802f05ee FUN_1802f05ee
// source: re/dump/decompile/0x1802f05ee_FUN_1802f05ee.c
// size: 41 bytes; thunk: false
// body sha256: 855787ebf28184ce6bfd4ba2cc41eb9b75ab368b33d0898de524cfb38ef90343
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f05ee{
    "0x1802f05ee",
    "FUN_1802f05ee",
    R"F1802f05eeS(undefined FUN_1802f05ee())F1802f05eeS",
    R"B1802f05ee(// 0x1802f05ee  FUN_1802f05ee
// size=41 thunk=false
// signature: undefined FUN_1802f05ee()
// status: ok


void FUN_1802f05ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f05ee",
    "855787ebf28184ce6bfd4ba2cc41eb9b75ab368b33d0898de524cfb38ef90343",
    R"F1802f05eeC()F1802f05eeC",
    R"F1802f05eeD()F1802f05eeD",
    R"F1802f05eeT()F1802f05eeT",
    R"F1802f05eeF(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802f05eeF",
    R"F1802f05eeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f05eeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f05ee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f05ee", "FUN_1802f05ee");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x80, 0));
    // body sha256: 855787ebf28184ce6bfd4ba2cc41eb9b75ab368b33d0898de524cfb38ef90343
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f05ee;
}

// 0x1802f06ac FUN_1802f06ac
// source: re/dump/decompile/0x1802f06ac_FUN_1802f06ac.c
// size: 38 bytes; thunk: false
// body sha256: 2fde02ce48ce2f09b72c8050ebdb7705046cd6262053ce831ba52baeaddd22e5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f06ac{
    "0x1802f06ac",
    "FUN_1802f06ac",
    R"F1802f06acS(undefined FUN_1802f06ac())F1802f06acS",
    R"B1802f06ac(// 0x1802f06ac  FUN_1802f06ac
// size=38 thunk=false
// signature: undefined FUN_1802f06ac()
// status: ok


void FUN_1802f06ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(param_2 + 0x38);
  }
  return;
}


)B1802f06ac",
    "2fde02ce48ce2f09b72c8050ebdb7705046cd6262053ce831ba52baeaddd22e5",
    R"F1802f06acC()F1802f06acC",
    R"F1802f06acD()F1802f06acD",
    R"F1802f06acT()F1802f06acT",
    R"F1802f06acF(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802f06acF",
    R"F1802f06acU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f06acU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f06ac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f06ac", "FUN_1802f06ac");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x38);
    // body sha256: 2fde02ce48ce2f09b72c8050ebdb7705046cd6262053ce831ba52baeaddd22e5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f06ac;
}

// 0x1802f06d2 FUN_1802f06d2
// source: re/dump/decompile/0x1802f06d2_FUN_1802f06d2.c
// size: 38 bytes; thunk: false
// body sha256: 2faa3e5c440cc9800989d92a1c30d24fb3a9653087ec93ea69ab221fba40ded1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f06d2{
    "0x1802f06d2",
    "FUN_1802f06d2",
    R"F1802f06d2S(undefined FUN_1802f06d2())F1802f06d2S",
    R"B1802f06d2(// 0x1802f06d2  FUN_1802f06d2
// size=38 thunk=false
// signature: undefined FUN_1802f06d2()
// status: ok


void FUN_1802f06d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802f06d2",
    "2faa3e5c440cc9800989d92a1c30d24fb3a9653087ec93ea69ab221fba40ded1",
    R"F1802f06d2C()F1802f06d2C",
    R"F1802f06d2D()F1802f06d2D",
    R"F1802f06d2T()F1802f06d2T",
    R"F1802f06d2F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802f06d2F",
    R"F1802f06d2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f06d2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f06d2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f06d2", "FUN_1802f06d2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x58, 0));
    // body sha256: 2faa3e5c440cc9800989d92a1c30d24fb3a9653087ec93ea69ab221fba40ded1
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f06d2;
}

// 0x1802f06f8 FUN_1802f06f8
// source: re/dump/decompile/0x1802f06f8_FUN_1802f06f8.c
// size: 38 bytes; thunk: false
// body sha256: 6a7fba28e88e17727e4b82025dac3d0f7ceb674383273ba63c65d2d5a04b84eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f06f8{
    "0x1802f06f8",
    "FUN_1802f06f8",
    R"F1802f06f8S(undefined FUN_1802f06f8())F1802f06f8S",
    R"B1802f06f8(// 0x1802f06f8  FUN_1802f06f8
// size=38 thunk=false
// signature: undefined FUN_1802f06f8()
// status: ok


void FUN_1802f06f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802f06f8",
    "6a7fba28e88e17727e4b82025dac3d0f7ceb674383273ba63c65d2d5a04b84eb",
    R"F1802f06f8C()F1802f06f8C",
    R"F1802f06f8D()F1802f06f8D",
    R"F1802f06f8T()F1802f06f8T",
    R"F1802f06f8F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f06f8F",
    R"F1802f06f8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f06f8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f06f8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f06f8", "FUN_1802f06f8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x58, 0));
    // body sha256: 6a7fba28e88e17727e4b82025dac3d0f7ceb674383273ba63c65d2d5a04b84eb
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f06f8;
}

// 0x1802f0720 FUN_1802f0720
// source: re/dump/decompile/0x1802f0720_FUN_1802f0720.c
// size: 38 bytes; thunk: false
// body sha256: 151cc2fd05fcb1e8983c65ea087c2e8b3aff15d31408702f8e37ca838b2c7369
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0720{
    "0x1802f0720",
    "FUN_1802f0720",
    R"F1802f0720S(undefined FUN_1802f0720())F1802f0720S",
    R"B1802f0720(// 0x1802f0720  FUN_1802f0720
// size=38 thunk=false
// signature: undefined FUN_1802f0720()
// status: ok


void FUN_1802f0720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802f0720",
    "151cc2fd05fcb1e8983c65ea087c2e8b3aff15d31408702f8e37ca838b2c7369",
    R"F1802f0720C()F1802f0720C",
    R"F1802f0720D()F1802f0720D",
    R"F1802f0720T()F1802f0720T",
    R"F1802f0720F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f0720F",
    R"F1802f0720U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0720() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0720", "FUN_1802f0720");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x28, 0));
    // body sha256: 151cc2fd05fcb1e8983c65ea087c2e8b3aff15d31408702f8e37ca838b2c7369
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0720;
}

// 0x1802f0750 FUN_1802f0750
// source: re/dump/decompile/0x1802f0750_FUN_1802f0750.c
// size: 43 bytes; thunk: false
// body sha256: ec43cdd3e37c2e47bf4539c5923a0e4d22ff7b2e40b208c1607b592f7011ddf3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0750{
    "0x1802f0750",
    "FUN_1802f0750",
    R"F1802f0750S(undefined FUN_1802f0750())F1802f0750S",
    R"B1802f0750(// 0x1802f0750  FUN_1802f0750
// size=43 thunk=false
// signature: undefined FUN_1802f0750()
// status: ok


void FUN_1802f0750(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffbfffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0750",
    "ec43cdd3e37c2e47bf4539c5923a0e4d22ff7b2e40b208c1607b592f7011ddf3",
    R"F1802f0750C()F1802f0750C",
    R"F1802f0750D()F1802f0750D",
    R"F1802f0750T()F1802f0750T",
    R"F1802f0750F(10: if ((*(uint *)(param_2 + 0x20) & 0x400000) != 0) {
14: return;)F1802f0750F",
    R"F1802f0750U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0750() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0750", "FUN_1802f0750");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: ec43cdd3e37c2e47bf4539c5923a0e4d22ff7b2e40b208c1607b592f7011ddf3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x400000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x400000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffbfffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0750;
}

// 0x1802f077b FUN_1802f077b
// source: re/dump/decompile/0x1802f077b_FUN_1802f077b.c
// size: 43 bytes; thunk: false
// body sha256: aebb5ed181cb9729d1a7a41adeea8ddf591d0ebf0982f1969698068d9e2abf88
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f077b{
    "0x1802f077b",
    "FUN_1802f077b",
    R"F1802f077bS(undefined FUN_1802f077b())F1802f077bS",
    R"B1802f077b(// 0x1802f077b  FUN_1802f077b
// size=43 thunk=false
// signature: undefined FUN_1802f077b()
// status: ok


void FUN_1802f077b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f077b",
    "aebb5ed181cb9729d1a7a41adeea8ddf591d0ebf0982f1969698068d9e2abf88",
    R"F1802f077bC()F1802f077bC",
    R"F1802f077bD()F1802f077bD",
    R"F1802f077bT()F1802f077bT",
    R"F1802f077bF(10: if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
14: return;)F1802f077bF",
    R"F1802f077bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f077bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f077b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f077b", "FUN_1802f077b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: aebb5ed181cb9729d1a7a41adeea8ddf591d0ebf0982f1969698068d9e2abf88
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f077b;
}

// 0x1802f07ca FUN_1802f07ca
// source: re/dump/decompile/0x1802f07ca_FUN_1802f07ca.c
// size: 46 bytes; thunk: false
// body sha256: e12630284e3bf46dcff2bcd7203b72565498bcbdbe50d80199552f273fef7acc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f07ca{
    "0x1802f07ca",
    "FUN_1802f07ca",
    R"F1802f07caS(undefined FUN_1802f07ca())F1802f07caS",
    R"B1802f07ca(// 0x1802f07ca  FUN_1802f07ca
// size=46 thunk=false
// signature: undefined FUN_1802f07ca()
// status: ok


void FUN_1802f07ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;
    thunk_FUN_18021e290(param_2 + 0x198);
  }
  return;
}


)B1802f07ca",
    "e12630284e3bf46dcff2bcd7203b72565498bcbdbe50d80199552f273fef7acc",
    R"F1802f07caC()F1802f07caC",
    R"F1802f07caD()F1802f07caD",
    R"F1802f07caT()F1802f07caT",
    R"F1802f07caF(10: if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
14: return;)F1802f07caF",
    R"F1802f07caU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f07caU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f07ca() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f07ca", "FUN_1802f07ca");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x198);
    // body sha256: e12630284e3bf46dcff2bcd7203b72565498bcbdbe50d80199552f273fef7acc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x198);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f07ca;
}

// 0x1802f07f8 FUN_1802f07f8
// source: re/dump/decompile/0x1802f07f8_FUN_1802f07f8.c
// size: 46 bytes; thunk: false
// body sha256: e7a80adde0ca4a2c538d47f532b01e33b165e7c7dd5a00b1aba182a330fa32e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f07f8{
    "0x1802f07f8",
    "FUN_1802f07f8",
    R"F1802f07f8S(undefined FUN_1802f07f8())F1802f07f8S",
    R"B1802f07f8(// 0x1802f07f8  FUN_1802f07f8
// size=46 thunk=false
// signature: undefined FUN_1802f07f8()
// status: ok


void FUN_1802f07f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfdffffff;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


)B1802f07f8",
    "e7a80adde0ca4a2c538d47f532b01e33b165e7c7dd5a00b1aba182a330fa32e3",
    R"F1802f07f8C()F1802f07f8C",
    R"F1802f07f8D()F1802f07f8D",
    R"F1802f07f8T()F1802f07f8T",
    R"F1802f07f8F(10: if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0) {
14: return;)F1802f07f8F",
    R"F1802f07f8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f07f8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f07f8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f07f8", "FUN_1802f07f8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x90);
    // body sha256: e7a80adde0ca4a2c538d47f532b01e33b165e7c7dd5a00b1aba182a330fa32e3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x2000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfdffffff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f07f8;
}

// 0x1802f0826 FUN_1802f0826
// source: re/dump/decompile/0x1802f0826_FUN_1802f0826.c
// size: 46 bytes; thunk: false
// body sha256: f390d809f5179288bfb00b525d7933fe7847bded7b4599e3e200d6f12fbc5967
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0826{
    "0x1802f0826",
    "FUN_1802f0826",
    R"F1802f0826S(undefined FUN_1802f0826())F1802f0826S",
    R"B1802f0826(// 0x1802f0826  FUN_1802f0826
// size=46 thunk=false
// signature: undefined FUN_1802f0826()
// status: ok


void FUN_1802f0826(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfbffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x170));
  }
  return;
}


)B1802f0826",
    "f390d809f5179288bfb00b525d7933fe7847bded7b4599e3e200d6f12fbc5967",
    R"F1802f0826C()F1802f0826C",
    R"F1802f0826D()F1802f0826D",
    R"F1802f0826T()F1802f0826T",
    R"F1802f0826F(10: if ((*(uint *)(param_2 + 0x20) & 0x4000000) != 0) {
14: return;)F1802f0826F",
    R"F1802f0826U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0826U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0826() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0826", "FUN_1802f0826");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x170, 0));
    // body sha256: f390d809f5179288bfb00b525d7933fe7847bded7b4599e3e200d6f12fbc5967
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x4000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x4000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfbffffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x170));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0826;
}

// 0x1802f0854 FUN_1802f0854
// source: re/dump/decompile/0x1802f0854_FUN_1802f0854.c
// size: 41 bytes; thunk: false
// body sha256: c0dde56edb09a2da72666f17c4d9434c529beb2a1c40b42f08a5c21d4e0eb707
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0854{
    "0x1802f0854",
    "FUN_1802f0854",
    R"F1802f0854S(undefined FUN_1802f0854())F1802f0854S",
    R"B1802f0854(// 0x1802f0854  FUN_1802f0854
// size=41 thunk=false
// signature: undefined FUN_1802f0854()
// status: ok


void FUN_1802f0854(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x170));
  }
  return;
}


)B1802f0854",
    "c0dde56edb09a2da72666f17c4d9434c529beb2a1c40b42f08a5c21d4e0eb707",
    R"F1802f0854C()F1802f0854C",
    R"F1802f0854D()F1802f0854D",
    R"F1802f0854T()F1802f0854T",
    R"F1802f0854F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f0854F",
    R"F1802f0854U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0854U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0854() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0854", "FUN_1802f0854");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x170, 0));
    // body sha256: c0dde56edb09a2da72666f17c4d9434c529beb2a1c40b42f08a5c21d4e0eb707
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x170));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0854;
}

// 0x1802f087d FUN_1802f087d
// source: re/dump/decompile/0x1802f087d_FUN_1802f087d.c
// size: 43 bytes; thunk: false
// body sha256: 8f30a73585aea6a193f332d8499bdbbd5e569129226f3fc189e100bdcbacdb61
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f087d{
    "0x1802f087d",
    "FUN_1802f087d",
    R"F1802f087dS(undefined FUN_1802f087d())F1802f087dS",
    R"B1802f087d(// 0x1802f087d  FUN_1802f087d
// size=43 thunk=false
// signature: undefined FUN_1802f087d()
// status: ok


void FUN_1802f087d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f087d",
    "8f30a73585aea6a193f332d8499bdbbd5e569129226f3fc189e100bdcbacdb61",
    R"F1802f087dC()F1802f087dC",
    R"F1802f087dD()F1802f087dD",
    R"F1802f087dT()F1802f087dT",
    R"F1802f087dF(10: if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
14: return;)F1802f087dF",
    R"F1802f087dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f087dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f087d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f087d", "FUN_1802f087d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 8f30a73585aea6a193f332d8499bdbbd5e569129226f3fc189e100bdcbacdb61
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x8000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f087d;
}

// 0x1802f08a8 FUN_1802f08a8
// source: re/dump/decompile/0x1802f08a8_FUN_1802f08a8.c
// size: 43 bytes; thunk: false
// body sha256: 459d273070e13a0b538419272238b16edf47a1dbf373fe2d9ab4da1e4412d3d8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f08a8{
    "0x1802f08a8",
    "FUN_1802f08a8",
    R"F1802f08a8S(undefined FUN_1802f08a8())F1802f08a8S",
    R"B1802f08a8(// 0x1802f08a8  FUN_1802f08a8
// size=43 thunk=false
// signature: undefined FUN_1802f08a8()
// status: ok


void FUN_1802f08a8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f08a8",
    "459d273070e13a0b538419272238b16edf47a1dbf373fe2d9ab4da1e4412d3d8",
    R"F1802f08a8C()F1802f08a8C",
    R"F1802f08a8D()F1802f08a8D",
    R"F1802f08a8T()F1802f08a8T",
    R"F1802f08a8F(10: if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
14: return;)F1802f08a8F",
    R"F1802f08a8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f08a8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f08a8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f08a8", "FUN_1802f08a8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 459d273070e13a0b538419272238b16edf47a1dbf373fe2d9ab4da1e4412d3d8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f08a8;
}

// 0x1802f090f FUN_1802f090f
// source: re/dump/decompile/0x1802f090f_FUN_1802f090f.c
// size: 38 bytes; thunk: false
// body sha256: 41a2bb5213c414a98c49c60bb69fbdca0f5d7f3c3599ce1095c00b1be15ab55f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f090f{
    "0x1802f090f",
    "FUN_1802f090f",
    R"F1802f090fS(undefined FUN_1802f090f())F1802f090fS",
    R"B1802f090f(// 0x1802f090f  FUN_1802f090f
// size=38 thunk=false
// signature: undefined FUN_1802f090f()
// status: ok


void FUN_1802f090f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f090f",
    "41a2bb5213c414a98c49c60bb69fbdca0f5d7f3c3599ce1095c00b1be15ab55f",
    R"F1802f090fC()F1802f090fC",
    R"F1802f090fD()F1802f090fD",
    R"F1802f090fT()F1802f090fT",
    R"F1802f090fF(10: if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
14: return;)F1802f090fF",
    R"F1802f090fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f090fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f090f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f090f", "FUN_1802f090f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 41a2bb5213c414a98c49c60bb69fbdca0f5d7f3c3599ce1095c00b1be15ab55f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f090f;
}

// 0x1802f0935 FUN_1802f0935
// source: re/dump/decompile/0x1802f0935_FUN_1802f0935.c
// size: 38 bytes; thunk: false
// body sha256: 9abd5f1953f887eb43f2dec020bd8ef41a99d0097733a55d3f754e1582e06e17
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0935{
    "0x1802f0935",
    "FUN_1802f0935",
    R"F1802f0935S(undefined FUN_1802f0935())F1802f0935S",
    R"B1802f0935(// 0x1802f0935  FUN_1802f0935
// size=38 thunk=false
// signature: undefined FUN_1802f0935()
// status: ok


void FUN_1802f0935(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 4) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0935",
    "9abd5f1953f887eb43f2dec020bd8ef41a99d0097733a55d3f754e1582e06e17",
    R"F1802f0935C()F1802f0935C",
    R"F1802f0935D()F1802f0935D",
    R"F1802f0935T()F1802f0935T",
    R"F1802f0935F(10: if ((*(uint *)(param_2 + 0x24) & 4) != 0) {
14: return;)F1802f0935F",
    R"F1802f0935U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0935U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0935() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0935", "FUN_1802f0935");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 9abd5f1953f887eb43f2dec020bd8ef41a99d0097733a55d3f754e1582e06e17
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0935;
}

// 0x1802f0997 FUN_1802f0997
// source: re/dump/decompile/0x1802f0997_FUN_1802f0997.c
// size: 43 bytes; thunk: false
// body sha256: a5057fd8a5e017eecc34e311564a8a065a34d896ca3ba12eca1260e6f72c4c67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0997{
    "0x1802f0997",
    "FUN_1802f0997",
    R"F1802f0997S(undefined FUN_1802f0997())F1802f0997S",
    R"B1802f0997(// 0x1802f0997  FUN_1802f0997
// size=43 thunk=false
// signature: undefined FUN_1802f0997()
// status: ok


void FUN_1802f0997(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0997",
    "a5057fd8a5e017eecc34e311564a8a065a34d896ca3ba12eca1260e6f72c4c67",
    R"F1802f0997C()F1802f0997C",
    R"F1802f0997D()F1802f0997D",
    R"F1802f0997T()F1802f0997T",
    R"F1802f0997F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
14: return;)F1802f0997F",
    R"F1802f0997U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0997U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0997() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0997", "FUN_1802f0997");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: a5057fd8a5e017eecc34e311564a8a065a34d896ca3ba12eca1260e6f72c4c67
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0997;
}

// 0x1802f09c2 FUN_1802f09c2
// source: re/dump/decompile/0x1802f09c2_FUN_1802f09c2.c
// size: 38 bytes; thunk: false
// body sha256: 978f4987c3371cbc96f220140dcdd95c2fd2675fc201a758283fbe7bad9bcf24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f09c2{
    "0x1802f09c2",
    "FUN_1802f09c2",
    R"F1802f09c2S(undefined FUN_1802f09c2())F1802f09c2S",
    R"B1802f09c2(// 0x1802f09c2  FUN_1802f09c2
// size=38 thunk=false
// signature: undefined FUN_1802f09c2()
// status: ok


void FUN_1802f09c2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f09c2",
    "978f4987c3371cbc96f220140dcdd95c2fd2675fc201a758283fbe7bad9bcf24",
    R"F1802f09c2C()F1802f09c2C",
    R"F1802f09c2D()F1802f09c2D",
    R"F1802f09c2T()F1802f09c2T",
    R"F1802f09c2F(10: if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
14: return;)F1802f09c2F",
    R"F1802f09c2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f09c2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f09c2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f09c2", "FUN_1802f09c2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 978f4987c3371cbc96f220140dcdd95c2fd2675fc201a758283fbe7bad9bcf24
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f09c2;
}

// 0x1802f0a24 FUN_1802f0a24
// source: re/dump/decompile/0x1802f0a24_FUN_1802f0a24.c
// size: 43 bytes; thunk: false
// body sha256: 2a0702795c46f79ec0159a12fff73be98befc6651a335ec51402b76d2801d7dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0a24{
    "0x1802f0a24",
    "FUN_1802f0a24",
    R"F1802f0a24S(undefined FUN_1802f0a24())F1802f0a24S",
    R"B1802f0a24(// 0x1802f0a24  FUN_1802f0a24
// size=43 thunk=false
// signature: undefined FUN_1802f0a24()
// status: ok


void FUN_1802f0a24(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xdfffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0a24",
    "2a0702795c46f79ec0159a12fff73be98befc6651a335ec51402b76d2801d7dc",
    R"F1802f0a24C()F1802f0a24C",
    R"F1802f0a24D()F1802f0a24D",
    R"F1802f0a24T()F1802f0a24T",
    R"F1802f0a24F(10: if ((*(uint *)(param_2 + 0x20) & 0x20000000) != 0) {
14: return;)F1802f0a24F",
    R"F1802f0a24U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0a24U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0a24() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0a24", "FUN_1802f0a24");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 2a0702795c46f79ec0159a12fff73be98befc6651a335ec51402b76d2801d7dc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x20000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xdfffffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0a24;
}

// 0x1802f0a4f FUN_1802f0a4f
// source: re/dump/decompile/0x1802f0a4f_FUN_1802f0a4f.c
// size: 43 bytes; thunk: false
// body sha256: 64060fc237a196b028abcff6efd7216d45f26fa15f3a76697f65e485ae73d03d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0a4f{
    "0x1802f0a4f",
    "FUN_1802f0a4f",
    R"F1802f0a4fS(undefined FUN_1802f0a4f())F1802f0a4fS",
    R"B1802f0a4f(// 0x1802f0a4f  FUN_1802f0a4f
// size=43 thunk=false
// signature: undefined FUN_1802f0a4f()
// status: ok


void FUN_1802f0a4f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xbfffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0a4f",
    "64060fc237a196b028abcff6efd7216d45f26fa15f3a76697f65e485ae73d03d",
    R"F1802f0a4fC()F1802f0a4fC",
    R"F1802f0a4fD()F1802f0a4fD",
    R"F1802f0a4fT()F1802f0a4fT",
    R"F1802f0a4fF(10: if ((*(uint *)(param_2 + 0x20) & 0x40000000) != 0) {
14: return;)F1802f0a4fF",
    R"F1802f0a4fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0a4fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0a4f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0a4f", "FUN_1802f0a4f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 64060fc237a196b028abcff6efd7216d45f26fa15f3a76697f65e485ae73d03d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40000000) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 0x40000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xbfffffff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0a4f;
}

// 0x1802f0ab6 FUN_1802f0ab6
// source: re/dump/decompile/0x1802f0ab6_FUN_1802f0ab6.c
// size: 38 bytes; thunk: false
// body sha256: b9032b91d92bae7e47426c358957a87ebc2836f434b62869ab407f76b1709381
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0ab6{
    "0x1802f0ab6",
    "FUN_1802f0ab6",
    R"F1802f0ab6S(undefined FUN_1802f0ab6())F1802f0ab6S",
    R"B1802f0ab6(// 0x1802f0ab6  FUN_1802f0ab6
// size=38 thunk=false
// signature: undefined FUN_1802f0ab6()
// status: ok


void FUN_1802f0ab6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0ab6",
    "b9032b91d92bae7e47426c358957a87ebc2836f434b62869ab407f76b1709381",
    R"F1802f0ab6C()F1802f0ab6C",
    R"F1802f0ab6D()F1802f0ab6D",
    R"F1802f0ab6T()F1802f0ab6T",
    R"F1802f0ab6F(10: if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
14: return;)F1802f0ab6F",
    R"F1802f0ab6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0ab6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0ab6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0ab6", "FUN_1802f0ab6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: b9032b91d92bae7e47426c358957a87ebc2836f434b62869ab407f76b1709381
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0ab6;
}

// 0x1802f0adc FUN_1802f0adc
// source: re/dump/decompile/0x1802f0adc_FUN_1802f0adc.c
// size: 38 bytes; thunk: false
// body sha256: 9055adef861628cc702ed8fd3c8432fbc85991ee82668e260351b3825ec60209
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0adc{
    "0x1802f0adc",
    "FUN_1802f0adc",
    R"F1802f0adcS(undefined FUN_1802f0adc())F1802f0adcS",
    R"B1802f0adc(// 0x1802f0adc  FUN_1802f0adc
// size=38 thunk=false
// signature: undefined FUN_1802f0adc()
// status: ok


void FUN_1802f0adc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x10) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802f0adc",
    "9055adef861628cc702ed8fd3c8432fbc85991ee82668e260351b3825ec60209",
    R"F1802f0adcC()F1802f0adcC",
    R"F1802f0adcD()F1802f0adcD",
    R"F1802f0adcT()F1802f0adcT",
    R"F1802f0adcF(10: if ((*(uint *)(param_2 + 0x24) & 0x10) != 0) {
14: return;)F1802f0adcF",
    R"F1802f0adcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0adcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0adc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0adc", "FUN_1802f0adc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 9055adef861628cc702ed8fd3c8432fbc85991ee82668e260351b3825ec60209
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x24, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0adc;
}

// 0x1802f0b56 FUN_1802f0b56
// source: re/dump/decompile/0x1802f0b56_FUN_1802f0b56.c
// size: 41 bytes; thunk: false
// body sha256: e7121fa02d90a50d6b3161d565512293f3bcc885a81136f17e9a5c288c3489e0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f0b56{
    "0x1802f0b56",
    "FUN_1802f0b56",
    R"F1802f0b56S(undefined FUN_1802f0b56())F1802f0b56S",
    R"B1802f0b56(// 0x1802f0b56  FUN_1802f0b56
// size=41 thunk=false
// signature: undefined FUN_1802f0b56()
// status: ok


void FUN_1802f0b56(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 0xb0);
  }
  return;
}


)B1802f0b56",
    "e7121fa02d90a50d6b3161d565512293f3bcc885a81136f17e9a5c288c3489e0",
    R"F1802f0b56C()F1802f0b56C",
    R"F1802f0b56D()F1802f0b56D",
    R"F1802f0b56T()F1802f0b56T",
    R"F1802f0b56F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f0b56F",
    R"F1802f0b56U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f0b56U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f0b56() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f0b56", "FUN_1802f0b56");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0xb0);
    // body sha256: e7121fa02d90a50d6b3161d565512293f3bcc885a81136f17e9a5c288c3489e0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0xb0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f0b56;
}

}  // namespace sf::reconstructed
