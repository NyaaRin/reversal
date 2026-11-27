// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802f97b6 FUN_1802f97b6
// source: re/dump/decompile/0x1802f97b6_FUN_1802f97b6.c
// size: 52 bytes; thunk: false
// body sha256: 23d03e4f9d8dcf83a900e96f335bf25e5c8ccf0bb5fac5a91e05cdc692659c84
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f97b6{
    "0x1802f97b6",
    "FUN_1802f97b6",
    R"F1802f97b6S(undefined FUN_1802f97b6())F1802f97b6S",
    R"B1802f97b6(// 0x1802f97b6  FUN_1802f97b6
// size=52 thunk=false
// signature: undefined FUN_1802f97b6()
// status: ok


void FUN_1802f97b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x84) & 0x80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffffff7f;
    FUN_18022b4b0(param_2 + 0x11d0);
  }
  return;
}


)B1802f97b6",
    "23d03e4f9d8dcf83a900e96f335bf25e5c8ccf0bb5fac5a91e05cdc692659c84",
    R"F1802f97b6C(FUN_18022b4b0)F1802f97b6C",
    R"F1802f97b6D()F1802f97b6D",
    R"F1802f97b6T()F1802f97b6T",
    R"F1802f97b6F(10: if ((*(uint *)(param_2 + 0x84) & 0x80) != 0) {
14: return;)F1802f97b6F",
    R"F1802f97b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f97b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f97b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f97b6", "FUN_1802f97b6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18022b4b0", param_2 + 0x11d0);
    trace.call_target("FUN_18022b4b0", reinterpret_cast<const void*>(&image::FUN_18022b4b0));
    // body sha256: 23d03e4f9d8dcf83a900e96f335bf25e5c8ccf0bb5fac5a91e05cdc692659c84
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x84) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x84, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffffff7f;");
                trace.statement("FUN_18022b4b0(param_2 + 0x11d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f97b6;
}

// 0x1802f9826 FUN_1802f9826
// source: re/dump/decompile/0x1802f9826_FUN_1802f9826.c
// size: 22 bytes; thunk: false
// body sha256: 1e8388663134eb75003601dafbf2927b1a48793ba69127d6032cd689f9acebff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9826{
    "0x1802f9826",
    "FUN_1802f9826",
    R"F1802f9826S(undefined FUN_1802f9826())F1802f9826S",
    R"B1802f9826(// 0x1802f9826  FUN_1802f9826
// size=22 thunk=false
// signature: undefined FUN_1802f9826()
// status: ok


void FUN_1802f9826(void)

{
  DAT_180570800 = DAT_180570800 & 0xfffffffd;
  return;
}


)B1802f9826",
    "1e8388663134eb75003601dafbf2927b1a48793ba69127d6032cd689f9acebff",
    R"F1802f9826C()F1802f9826C",
    R"F1802f9826D(DAT_180570800)F1802f9826D",
    R"F1802f9826T()F1802f9826T",
    R"F1802f9826F(11: return;)F1802f9826F",
    R"F1802f9826U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180570800.)F1802f9826U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9826() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9826", "FUN_1802f9826");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180570800.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180570800", static_cast<const void*>(&image::DAT_180570800));
    // body sha256: 1e8388663134eb75003601dafbf2927b1a48793ba69127d6032cd689f9acebff
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180570800 = DAT_180570800 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9826;
}

// 0x1802f9848 FUN_1802f9848
// source: re/dump/decompile/0x1802f9848_FUN_1802f9848.c
// size: 47 bytes; thunk: false
// body sha256: 4229f9aea17907343f41a580532fc2ecdc75e1acf79e31074a6befba44fa4180
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9848{
    "0x1802f9848",
    "FUN_1802f9848",
    R"F1802f9848S(undefined FUN_1802f9848())F1802f9848S",
    R"B1802f9848(// 0x1802f9848  FUN_1802f9848
// size=47 thunk=false
// signature: undefined FUN_1802f9848()
// status: ok


void FUN_1802f9848(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x84) & 0x40) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffffffbf;
    thunk_FUN_18020d5c0(param_2 + 0x658);
  }
  return;
}


)B1802f9848",
    "4229f9aea17907343f41a580532fc2ecdc75e1acf79e31074a6befba44fa4180",
    R"F1802f9848C()F1802f9848C",
    R"F1802f9848D()F1802f9848D",
    R"F1802f9848T()F1802f9848T",
    R"F1802f9848F(10: if ((*(uint *)(param_2 + 0x84) & 0x40) != 0) {
14: return;)F1802f9848F",
    R"F1802f9848U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9848U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9848() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9848", "FUN_1802f9848");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18020d5c0", param_2 + 0x658);
    // body sha256: 4229f9aea17907343f41a580532fc2ecdc75e1acf79e31074a6befba44fa4180
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x84) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x84, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffffffbf;");
                trace.statement("thunk_FUN_18020d5c0(param_2 + 0x658);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9848;
}

// 0x1802f992c FUN_1802f992c
// source: re/dump/decompile/0x1802f992c_FUN_1802f992c.c
// size: 41 bytes; thunk: false
// body sha256: 3c8896917f47682ba1fe13a7c1af95cfa14527e69f55b3ddcc988c68d3528a83
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f992c{
    "0x1802f992c",
    "FUN_1802f992c",
    R"F1802f992cS(undefined FUN_1802f992c())F1802f992cS",
    R"B1802f992c(// 0x1802f992c  FUN_1802f992c
// size=41 thunk=false
// signature: undefined FUN_1802f992c()
// status: ok


void FUN_1802f992c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x20) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f992c",
    "3c8896917f47682ba1fe13a7c1af95cfa14527e69f55b3ddcc988c68d3528a83",
    R"F1802f992cC()F1802f992cC",
    R"F1802f992cD()F1802f992cD",
    R"F1802f992cT()F1802f992cT",
    R"F1802f992cF(10: if ((*(uint *)(param_2 + 0x58) & 0x20) != 0) {
14: return;)F1802f992cF",
    R"F1802f992cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f992cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f992c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f992c", "FUN_1802f992c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe0);
    // body sha256: 3c8896917f47682ba1fe13a7c1af95cfa14527e69f55b3ddcc988c68d3528a83
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x58, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f992c;
}

// 0x1802f9961 FUN_1802f9961
// source: re/dump/decompile/0x1802f9961_FUN_1802f9961.c
// size: 22 bytes; thunk: false
// body sha256: e90c366f816ef53c1e232f0ccea158b7609264cbb39be3fab2f7ef724af8ade8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9961{
    "0x1802f9961",
    "FUN_1802f9961",
    R"F1802f9961S(undefined FUN_1802f9961())F1802f9961S",
    R"B1802f9961(// 0x1802f9961  FUN_1802f9961
// size=22 thunk=false
// signature: undefined FUN_1802f9961()
// status: ok


void FUN_1802f9961(void)

{
  DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffffe;
  return;
}


)B1802f9961",
    "e90c366f816ef53c1e232f0ccea158b7609264cbb39be3fab2f7ef724af8ade8",
    R"F1802f9961C()F1802f9961C",
    R"F1802f9961D(DAT_1805c7aa0)F1802f9961D",
    R"F1802f9961T()F1802f9961T",
    R"F1802f9961F(11: return;)F1802f9961F",
    R"F1802f9961U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7aa0.)F1802f9961U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9961() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9961", "FUN_1802f9961");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7aa0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7aa0", static_cast<const void*>(&image::DAT_1805c7aa0));
    // body sha256: e90c366f816ef53c1e232f0ccea158b7609264cbb39be3fab2f7ef724af8ade8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9961;
}

// 0x1802f9977 FUN_1802f9977
// source: re/dump/decompile/0x1802f9977_FUN_1802f9977.c
// size: 22 bytes; thunk: false
// body sha256: e134b799f25ec5782d7bc0f5030f444c4482a3741523acc98c87d9d48e3c36c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9977{
    "0x1802f9977",
    "FUN_1802f9977",
    R"F1802f9977S(undefined FUN_1802f9977())F1802f9977S",
    R"B1802f9977(// 0x1802f9977  FUN_1802f9977
// size=22 thunk=false
// signature: undefined FUN_1802f9977()
// status: ok


void FUN_1802f9977(void)

{
  DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffffd;
  return;
}


)B1802f9977",
    "e134b799f25ec5782d7bc0f5030f444c4482a3741523acc98c87d9d48e3c36c4",
    R"F1802f9977C()F1802f9977C",
    R"F1802f9977D(DAT_1805c7aa0)F1802f9977D",
    R"F1802f9977T()F1802f9977T",
    R"F1802f9977F(11: return;)F1802f9977F",
    R"F1802f9977U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7aa0.)F1802f9977U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9977() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9977", "FUN_1802f9977");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7aa0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7aa0", static_cast<const void*>(&image::DAT_1805c7aa0));
    // body sha256: e134b799f25ec5782d7bc0f5030f444c4482a3741523acc98c87d9d48e3c36c4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9977;
}

// 0x1802f998d FUN_1802f998d
// source: re/dump/decompile/0x1802f998d_FUN_1802f998d.c
// size: 22 bytes; thunk: false
// body sha256: 6cc6f364fae34e219822be312dae665ddb23892a815b5effc70b534542c019c1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f998d{
    "0x1802f998d",
    "FUN_1802f998d",
    R"F1802f998dS(undefined FUN_1802f998d())F1802f998dS",
    R"B1802f998d(// 0x1802f998d  FUN_1802f998d
// size=22 thunk=false
// signature: undefined FUN_1802f998d()
// status: ok


void FUN_1802f998d(void)

{
  DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffffb;
  return;
}


)B1802f998d",
    "6cc6f364fae34e219822be312dae665ddb23892a815b5effc70b534542c019c1",
    R"F1802f998dC()F1802f998dC",
    R"F1802f998dD(DAT_1805c7aa0)F1802f998dD",
    R"F1802f998dT()F1802f998dT",
    R"F1802f998dF(11: return;)F1802f998dF",
    R"F1802f998dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7aa0.)F1802f998dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f998d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f998d", "FUN_1802f998d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7aa0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7aa0", static_cast<const void*>(&image::DAT_1805c7aa0));
    // body sha256: 6cc6f364fae34e219822be312dae665ddb23892a815b5effc70b534542c019c1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffffb;");
            trace.statement("return;");
        }
    return kFunction_0x1802f998d;
}

// 0x1802f99a3 FUN_1802f99a3
// source: re/dump/decompile/0x1802f99a3_FUN_1802f99a3.c
// size: 22 bytes; thunk: false
// body sha256: db6751d012d740e641674e62bac0d63a83d150a8dde6752e317d2b176cecb8d4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f99a3{
    "0x1802f99a3",
    "FUN_1802f99a3",
    R"F1802f99a3S(undefined FUN_1802f99a3())F1802f99a3S",
    R"B1802f99a3(// 0x1802f99a3  FUN_1802f99a3
// size=22 thunk=false
// signature: undefined FUN_1802f99a3()
// status: ok


void FUN_1802f99a3(void)

{
  DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffff7;
  return;
}


)B1802f99a3",
    "db6751d012d740e641674e62bac0d63a83d150a8dde6752e317d2b176cecb8d4",
    R"F1802f99a3C()F1802f99a3C",
    R"F1802f99a3D(DAT_1805c7aa0)F1802f99a3D",
    R"F1802f99a3T()F1802f99a3T",
    R"F1802f99a3F(11: return;)F1802f99a3F",
    R"F1802f99a3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7aa0.)F1802f99a3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f99a3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f99a3", "FUN_1802f99a3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7aa0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7aa0", static_cast<const void*>(&image::DAT_1805c7aa0));
    // body sha256: db6751d012d740e641674e62bac0d63a83d150a8dde6752e317d2b176cecb8d4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7aa0 = DAT_1805c7aa0 & 0xfffffff7;");
            trace.statement("return;");
        }
    return kFunction_0x1802f99a3;
}

// 0x1802f99d1 FUN_1802f99d1
// source: re/dump/decompile/0x1802f99d1_FUN_1802f99d1.c
// size: 41 bytes; thunk: false
// body sha256: 3b43740c81e576620c1f28728e71beaf11cb78c6b5795faacda9783a4e4f7ea4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f99d1{
    "0x1802f99d1",
    "FUN_1802f99d1",
    R"F1802f99d1S(undefined FUN_1802f99d1())F1802f99d1S",
    R"B1802f99d1(// 0x1802f99d1  FUN_1802f99d1
// size=41 thunk=false
// signature: undefined FUN_1802f99d1()
// status: ok


void FUN_1802f99d1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


)B1802f99d1",
    "3b43740c81e576620c1f28728e71beaf11cb78c6b5795faacda9783a4e4f7ea4",
    R"F1802f99d1C()F1802f99d1C",
    R"F1802f99d1D()F1802f99d1D",
    R"F1802f99d1T()F1802f99d1T",
    R"F1802f99d1F(10: if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
14: return;)F1802f99d1F",
    R"F1802f99d1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f99d1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f99d1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f99d1", "FUN_1802f99d1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1a0);
    // body sha256: 3b43740c81e576620c1f28728e71beaf11cb78c6b5795faacda9783a4e4f7ea4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x58, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f99d1;
}

// 0x1802f99fa FUN_1802f99fa
// source: re/dump/decompile/0x1802f99fa_FUN_1802f99fa.c
// size: 41 bytes; thunk: false
// body sha256: eed46fec2b2bc4ead45bec61c485d38b6e85f012775011908ed727cbd95fc03f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f99fa{
    "0x1802f99fa",
    "FUN_1802f99fa",
    R"F1802f99faS(undefined FUN_1802f99fa())F1802f99faS",
    R"B1802f99fa(// 0x1802f99fa  FUN_1802f99fa
// size=41 thunk=false
// signature: undefined FUN_1802f99fa()
// status: ok


void FUN_1802f99fa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f99fa",
    "eed46fec2b2bc4ead45bec61c485d38b6e85f012775011908ed727cbd95fc03f",
    R"F1802f99faC()F1802f99faC",
    R"F1802f99faD()F1802f99faD",
    R"F1802f99faT()F1802f99faT",
    R"F1802f99faF(10: if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
14: return;)F1802f99faF",
    R"F1802f99faU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f99faU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f99fa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f99fa", "FUN_1802f99fa");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x100);
    // body sha256: eed46fec2b2bc4ead45bec61c485d38b6e85f012775011908ed727cbd95fc03f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x58, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f99fa;
}

// 0x1802f9a2f FUN_1802f9a2f
// source: re/dump/decompile/0x1802f9a2f_FUN_1802f9a2f.c
// size: 41 bytes; thunk: false
// body sha256: 27ccfa408c362dfd4a15455e7dc9d9b78738301f3ddd5e758488b49f902f1761
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9a2f{
    "0x1802f9a2f",
    "FUN_1802f9a2f",
    R"F1802f9a2fS(undefined FUN_1802f9a2f())F1802f9a2fS",
    R"B1802f9a2f(// 0x1802f9a2f  FUN_1802f9a2f
// size=41 thunk=false
// signature: undefined FUN_1802f9a2f()
// status: ok


void FUN_1802f9a2f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x10) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1802f9a2f",
    "27ccfa408c362dfd4a15455e7dc9d9b78738301f3ddd5e758488b49f902f1761",
    R"F1802f9a2fC()F1802f9a2fC",
    R"F1802f9a2fD()F1802f9a2fD",
    R"F1802f9a2fT()F1802f9a2fT",
    R"F1802f9a2fF(10: if ((*(uint *)(param_2 + 0x58) & 0x10) != 0) {
14: return;)F1802f9a2fF",
    R"F1802f9a2fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9a2fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9a2f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9a2f", "FUN_1802f9a2f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x140);
    // body sha256: 27ccfa408c362dfd4a15455e7dc9d9b78738301f3ddd5e758488b49f902f1761
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x58, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9a2f;
}

// 0x1802f9a58 FUN_1802f9a58
// source: re/dump/decompile/0x1802f9a58_FUN_1802f9a58.c
// size: 41 bytes; thunk: false
// body sha256: 833ebc776c4f7153188a1259f4e100763f40d3e722d4f301b696e4fc7090497b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9a58{
    "0x1802f9a58",
    "FUN_1802f9a58",
    R"F1802f9a58S(undefined FUN_1802f9a58())F1802f9a58S",
    R"B1802f9a58(// 0x1802f9a58  FUN_1802f9a58
// size=41 thunk=false
// signature: undefined FUN_1802f9a58()
// status: ok


void FUN_1802f9a58(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 8) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802f9a58",
    "833ebc776c4f7153188a1259f4e100763f40d3e722d4f301b696e4fc7090497b",
    R"F1802f9a58C()F1802f9a58C",
    R"F1802f9a58D()F1802f9a58D",
    R"F1802f9a58T()F1802f9a58T",
    R"F1802f9a58F(10: if ((*(uint *)(param_2 + 0x58) & 8) != 0) {
14: return;)F1802f9a58F",
    R"F1802f9a58U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9a58U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9a58() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9a58", "FUN_1802f9a58");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x120);
    // body sha256: 833ebc776c4f7153188a1259f4e100763f40d3e722d4f301b696e4fc7090497b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x58, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9a58;
}

// 0x1802f9a99 FUN_1802f9a99
// source: re/dump/decompile/0x1802f9a99_FUN_1802f9a99.c
// size: 41 bytes; thunk: false
// body sha256: f32ac015033c8f463d9339f1e3929a45705ac3fcddf90580753c71eceb0d267c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9a99{
    "0x1802f9a99",
    "FUN_1802f9a99",
    R"F1802f9a99S(undefined FUN_1802f9a99())F1802f9a99S",
    R"B1802f9a99(// 0x1802f9a99  FUN_1802f9a99
// size=41 thunk=false
// signature: undefined FUN_1802f9a99()
// status: ok


void FUN_1802f9a99(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x40) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B1802f9a99",
    "f32ac015033c8f463d9339f1e3929a45705ac3fcddf90580753c71eceb0d267c",
    R"F1802f9a99C()F1802f9a99C",
    R"F1802f9a99D()F1802f9a99D",
    R"F1802f9a99T()F1802f9a99T",
    R"F1802f9a99F(10: if ((*(uint *)(param_2 + 0x58) & 0x40) != 0) {
14: return;)F1802f9a99F",
    R"F1802f9a99U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9a99U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9a99() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9a99", "FUN_1802f9a99");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x98);
    // body sha256: f32ac015033c8f463d9339f1e3929a45705ac3fcddf90580753c71eceb0d267c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x58, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9a99;
}

// 0x1802f9ace FUN_1802f9ace
// source: re/dump/decompile/0x1802f9ace_FUN_1802f9ace.c
// size: 41 bytes; thunk: false
// body sha256: dad5bcbe8573136a53dd26c715f5089bddd82c163b1fb36aa6ee3219c76b289a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9ace{
    "0x1802f9ace",
    "FUN_1802f9ace",
    R"F1802f9aceS(undefined FUN_1802f9ace())F1802f9aceS",
    R"B1802f9ace(// 0x1802f9ace  FUN_1802f9ace
// size=41 thunk=false
// signature: undefined FUN_1802f9ace()
// status: ok


void FUN_1802f9ace(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 4) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffb;
    FUN_180209db0(param_2 + 0x228);
  }
  return;
}


)B1802f9ace",
    "dad5bcbe8573136a53dd26c715f5089bddd82c163b1fb36aa6ee3219c76b289a",
    R"F1802f9aceC(FUN_180209db0)F1802f9aceC",
    R"F1802f9aceD()F1802f9aceD",
    R"F1802f9aceT()F1802f9aceT",
    R"F1802f9aceF(10: if ((*(uint *)(param_2 + 0x58) & 4) != 0) {
14: return;)F1802f9aceF",
    R"F1802f9aceU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9aceU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9ace() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9ace", "FUN_1802f9ace");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209db0", param_2 + 0x228);
    trace.call_target("FUN_180209db0", reinterpret_cast<const void*>(&image::FUN_180209db0));
    // body sha256: dad5bcbe8573136a53dd26c715f5089bddd82c163b1fb36aa6ee3219c76b289a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x58) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x58, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffb;");
                trace.statement("FUN_180209db0(param_2 + 0x228);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9ace;
}

// 0x1802f9b0c FUN_1802f9b0c
// source: re/dump/decompile/0x1802f9b0c_FUN_1802f9b0c.c
// size: 41 bytes; thunk: false
// body sha256: 5b6cdc4c4006593f183addacd1b4152879ade637d69b6474e43726d30c33053a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9b0c{
    "0x1802f9b0c",
    "FUN_1802f9b0c",
    R"F1802f9b0cS(undefined FUN_1802f9b0c())F1802f9b0cS",
    R"B1802f9b0c(// 0x1802f9b0c  FUN_1802f9b0c
// size=41 thunk=false
// signature: undefined FUN_1802f9b0c()
// status: ok


void FUN_1802f9b0c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


)B1802f9b0c",
    "5b6cdc4c4006593f183addacd1b4152879ade637d69b6474e43726d30c33053a",
    R"F1802f9b0cC()F1802f9b0cC",
    R"F1802f9b0cD()F1802f9b0cD",
    R"F1802f9b0cT()F1802f9b0cT",
    R"F1802f9b0cF(10: if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
14: return;)F1802f9b0cF",
    R"F1802f9b0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9b0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9b0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9b0c", "FUN_1802f9b0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x80);
    // body sha256: 5b6cdc4c4006593f183addacd1b4152879ade637d69b6474e43726d30c33053a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9b0c;
}

// 0x1802f9b35 FUN_1802f9b35
// source: re/dump/decompile/0x1802f9b35_FUN_1802f9b35.c
// size: 41 bytes; thunk: false
// body sha256: 713789c9da94a864a3ca05cc3176d8eeb80d83563d7431724b30c394e0596cd0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9b35{
    "0x1802f9b35",
    "FUN_1802f9b35",
    R"F1802f9b35S(undefined FUN_1802f9b35())F1802f9b35S",
    R"B1802f9b35(// 0x1802f9b35  FUN_1802f9b35
// size=41 thunk=false
// signature: undefined FUN_1802f9b35()
// status: ok


void FUN_1802f9b35(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802f9b35",
    "713789c9da94a864a3ca05cc3176d8eeb80d83563d7431724b30c394e0596cd0",
    R"F1802f9b35C()F1802f9b35C",
    R"F1802f9b35D()F1802f9b35D",
    R"F1802f9b35T()F1802f9b35T",
    R"F1802f9b35F(10: if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
14: return;)F1802f9b35F",
    R"F1802f9b35U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9b35U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9b35() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9b35", "FUN_1802f9b35");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x120);
    // body sha256: 713789c9da94a864a3ca05cc3176d8eeb80d83563d7431724b30c394e0596cd0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9b35;
}

// 0x1802f9b6a FUN_1802f9b6a
// source: re/dump/decompile/0x1802f9b6a_FUN_1802f9b6a.c
// size: 41 bytes; thunk: false
// body sha256: f52f52cb0a4e3e8ae35a387a9f34e4023e3e4abc5e016139c668888ccee76e75
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9b6a{
    "0x1802f9b6a",
    "FUN_1802f9b6a",
    R"F1802f9b6aS(undefined FUN_1802f9b6a())F1802f9b6aS",
    R"B1802f9b6a(// 0x1802f9b6a  FUN_1802f9b6a
// size=41 thunk=false
// signature: undefined FUN_1802f9b6a()
// status: ok


void FUN_1802f9b6a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f9b6a",
    "f52f52cb0a4e3e8ae35a387a9f34e4023e3e4abc5e016139c668888ccee76e75",
    R"F1802f9b6aC()F1802f9b6aC",
    R"F1802f9b6aD()F1802f9b6aD",
    R"F1802f9b6aT()F1802f9b6aT",
    R"F1802f9b6aF(10: if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
14: return;)F1802f9b6aF",
    R"F1802f9b6aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9b6aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9b6a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9b6a", "FUN_1802f9b6a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x100);
    // body sha256: f52f52cb0a4e3e8ae35a387a9f34e4023e3e4abc5e016139c668888ccee76e75
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9b6a;
}

// 0x1802f9bab FUN_1802f9bab
// source: re/dump/decompile/0x1802f9bab_FUN_1802f9bab.c
// size: 41 bytes; thunk: false
// body sha256: 7ddbe234afc58547d7fce2c1170bb4778f84cca1dce89b010d8a08abf7d6fda9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9bab{
    "0x1802f9bab",
    "FUN_1802f9bab",
    R"F1802f9babS(undefined FUN_1802f9bab())F1802f9babS",
    R"B1802f9bab(// 0x1802f9bab  FUN_1802f9bab
// size=41 thunk=false
// signature: undefined FUN_1802f9bab()
// status: ok


void FUN_1802f9bab(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1802f9bab",
    "7ddbe234afc58547d7fce2c1170bb4778f84cca1dce89b010d8a08abf7d6fda9",
    R"F1802f9babC()F1802f9babC",
    R"F1802f9babD()F1802f9babD",
    R"F1802f9babT()F1802f9babT",
    R"F1802f9babF(10: if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
14: return;)F1802f9babF",
    R"F1802f9babU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9babU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9bab() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9bab", "FUN_1802f9bab");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x140);
    // body sha256: 7ddbe234afc58547d7fce2c1170bb4778f84cca1dce89b010d8a08abf7d6fda9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 8) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9bab;
}

// 0x1802f9bd4 FUN_1802f9bd4
// source: re/dump/decompile/0x1802f9bd4_FUN_1802f9bd4.c
// size: 41 bytes; thunk: false
// body sha256: f1bdb3474fe66e1646e0f7721bfa30c115a9a219cf502a1af7ebf0552930ce1d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9bd4{
    "0x1802f9bd4",
    "FUN_1802f9bd4",
    R"F1802f9bd4S(undefined FUN_1802f9bd4())F1802f9bd4S",
    R"B1802f9bd4(// 0x1802f9bd4  FUN_1802f9bd4
// size=41 thunk=false
// signature: undefined FUN_1802f9bd4()
// status: ok


void FUN_1802f9bd4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b0);
  }
  return;
}


)B1802f9bd4",
    "f1bdb3474fe66e1646e0f7721bfa30c115a9a219cf502a1af7ebf0552930ce1d",
    R"F1802f9bd4C()F1802f9bd4C",
    R"F1802f9bd4D()F1802f9bd4D",
    R"F1802f9bd4T()F1802f9bd4T",
    R"F1802f9bd4F(10: if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
14: return;)F1802f9bd4F",
    R"F1802f9bd4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9bd4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9bd4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9bd4", "FUN_1802f9bd4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1b0);
    // body sha256: f1bdb3474fe66e1646e0f7721bfa30c115a9a219cf502a1af7ebf0552930ce1d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9bd4;
}

// 0x1802f9c09 FUN_1802f9c09
// source: re/dump/decompile/0x1802f9c09_FUN_1802f9c09.c
// size: 46 bytes; thunk: false
// body sha256: 3150b3c830c88f03f55e955fd90581ee861774c5fac698c8ea1dbd7abaf5c356
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9c09{
    "0x1802f9c09",
    "FUN_1802f9c09",
    R"F1802f9c09S(undefined FUN_1802f9c09())F1802f9c09S",
    R"B1802f9c09(// 0x1802f9c09  FUN_1802f9c09
// size=46 thunk=false
// signature: undefined FUN_1802f9c09()
// status: ok


void FUN_1802f9c09(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;
    FUN_18022b4b0(param_2 + 0x1a0);
  }
  return;
}


)B1802f9c09",
    "3150b3c830c88f03f55e955fd90581ee861774c5fac698c8ea1dbd7abaf5c356",
    R"F1802f9c09C(FUN_18022b4b0)F1802f9c09C",
    R"F1802f9c09D()F1802f9c09D",
    R"F1802f9c09T()F1802f9c09T",
    R"F1802f9c09F(10: if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
14: return;)F1802f9c09F",
    R"F1802f9c09U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9c09U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9c09() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9c09", "FUN_1802f9c09");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18022b4b0", param_2 + 0x1a0);
    trace.call_target("FUN_18022b4b0", reinterpret_cast<const void*>(&image::FUN_18022b4b0));
    // body sha256: 3150b3c830c88f03f55e955fd90581ee861774c5fac698c8ea1dbd7abaf5c356
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;");
                trace.statement("FUN_18022b4b0(param_2 + 0x1a0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9c09;
}

// 0x1802f9c43 FUN_1802f9c43
// source: re/dump/decompile/0x1802f9c43_FUN_1802f9c43.c
// size: 41 bytes; thunk: false
// body sha256: d157ddcafd5724bd73e0bece64ed3d58f95d01d18519d28b49efdb92020e63cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9c43{
    "0x1802f9c43",
    "FUN_1802f9c43",
    R"F1802f9c43S(undefined FUN_1802f9c43())F1802f9c43S",
    R"B1802f9c43(// 0x1802f9c43  FUN_1802f9c43
// size=41 thunk=false
// signature: undefined FUN_1802f9c43()
// status: ok


void FUN_1802f9c43(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


)B1802f9c43",
    "d157ddcafd5724bd73e0bece64ed3d58f95d01d18519d28b49efdb92020e63cd",
    R"F1802f9c43C()F1802f9c43C",
    R"F1802f9c43D()F1802f9c43D",
    R"F1802f9c43T()F1802f9c43T",
    R"F1802f9c43F(10: if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
14: return;)F1802f9c43F",
    R"F1802f9c43U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9c43U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9c43() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9c43", "FUN_1802f9c43");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x80);
    // body sha256: d157ddcafd5724bd73e0bece64ed3d58f95d01d18519d28b49efdb92020e63cd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9c43;
}

// 0x1802f9c6c FUN_1802f9c6c
// source: re/dump/decompile/0x1802f9c6c_FUN_1802f9c6c.c
// size: 38 bytes; thunk: false
// body sha256: 4bb233a567934a1b2743867c097d6ed9a960b5f13d062caa47db0782c50a5ca9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9c6c{
    "0x1802f9c6c",
    "FUN_1802f9c6c",
    R"F1802f9c6cS(undefined FUN_1802f9c6c())F1802f9c6cS",
    R"B1802f9c6c(// 0x1802f9c6c  FUN_1802f9c6c
// size=38 thunk=false
// signature: undefined FUN_1802f9c6c()
// status: ok


void FUN_1802f9c6c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B1802f9c6c",
    "4bb233a567934a1b2743867c097d6ed9a960b5f13d062caa47db0782c50a5ca9",
    R"F1802f9c6cC()F1802f9c6cC",
    R"F1802f9c6cD()F1802f9c6cD",
    R"F1802f9c6cT()F1802f9c6cT",
    R"F1802f9c6cF(10: if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
14: return;)F1802f9c6cF",
    R"F1802f9c6cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9c6cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9c6c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9c6c", "FUN_1802f9c6c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x50);
    // body sha256: 4bb233a567934a1b2743867c097d6ed9a960b5f13d062caa47db0782c50a5ca9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9c6c;
}

// 0x1802f9c92 FUN_1802f9c92
// source: re/dump/decompile/0x1802f9c92_FUN_1802f9c92.c
// size: 22 bytes; thunk: false
// body sha256: 2396aa406244d751a83c4b5083561e880dcd16f2040181a17e8d7a693fe4d123
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9c92{
    "0x1802f9c92",
    "FUN_1802f9c92",
    R"F1802f9c92S(undefined FUN_1802f9c92())F1802f9c92S",
    R"B1802f9c92(// 0x1802f9c92  FUN_1802f9c92
// size=22 thunk=false
// signature: undefined FUN_1802f9c92()
// status: ok


void FUN_1802f9c92(void)

{
  DAT_180426238 = DAT_180426238 & 0xfffffffe;
  return;
}


)B1802f9c92",
    "2396aa406244d751a83c4b5083561e880dcd16f2040181a17e8d7a693fe4d123",
    R"F1802f9c92C()F1802f9c92C",
    R"F1802f9c92D(DAT_180426238)F1802f9c92D",
    R"F1802f9c92T()F1802f9c92T",
    R"F1802f9c92F(11: return;)F1802f9c92F",
    R"F1802f9c92U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180426238.)F1802f9c92U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9c92() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9c92", "FUN_1802f9c92");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180426238.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180426238", static_cast<const void*>(&image::DAT_180426238));
    // body sha256: 2396aa406244d751a83c4b5083561e880dcd16f2040181a17e8d7a693fe4d123
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180426238 = DAT_180426238 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9c92;
}

// 0x1802f9cb4 FUN_1802f9cb4
// source: re/dump/decompile/0x1802f9cb4_FUN_1802f9cb4.c
// size: 46 bytes; thunk: false
// body sha256: dda1065b144c1df5ac14fbabfb8ca56118c9ae0166a75121ff5a76a7ac602d20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9cb4{
    "0x1802f9cb4",
    "FUN_1802f9cb4",
    R"F1802f9cb4S(undefined FUN_1802f9cb4())F1802f9cb4S",
    R"B1802f9cb4(// 0x1802f9cb4  FUN_1802f9cb4
// size=46 thunk=false
// signature: undefined FUN_1802f9cb4()
// status: ok


void FUN_1802f9cb4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;
    thunk_FUN_18021e290(param_2 + 0xe0);
  }
  return;
}


)B1802f9cb4",
    "dda1065b144c1df5ac14fbabfb8ca56118c9ae0166a75121ff5a76a7ac602d20",
    R"F1802f9cb4C()F1802f9cb4C",
    R"F1802f9cb4D()F1802f9cb4D",
    R"F1802f9cb4T()F1802f9cb4T",
    R"F1802f9cb4F(10: if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
14: return;)F1802f9cb4F",
    R"F1802f9cb4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9cb4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9cb4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9cb4", "FUN_1802f9cb4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0xe0);
    // body sha256: dda1065b144c1df5ac14fbabfb8ca56118c9ae0166a75121ff5a76a7ac602d20
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x44, 0) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9cb4;
}

// 0x1802f9d30 FUN_1802f9d30
// source: re/dump/decompile/0x1802f9d30_FUN_1802f9d30.c
// size: 22 bytes; thunk: false
// body sha256: 07555a865526f01acbea81284c890148865e577fc60f73f3b27171122723aa9d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9d30{
    "0x1802f9d30",
    "FUN_1802f9d30",
    R"F1802f9d30S(undefined FUN_1802f9d30())F1802f9d30S",
    R"B1802f9d30(// 0x1802f9d30  FUN_1802f9d30
// size=22 thunk=false
// signature: undefined FUN_1802f9d30()
// status: ok


void FUN_1802f9d30(void)

{
  DAT_1804275f8 = DAT_1804275f8 & 0xfffffffe;
  return;
}


)B1802f9d30",
    "07555a865526f01acbea81284c890148865e577fc60f73f3b27171122723aa9d",
    R"F1802f9d30C()F1802f9d30C",
    R"F1802f9d30D(DAT_1804275f8)F1802f9d30D",
    R"F1802f9d30T()F1802f9d30T",
    R"F1802f9d30F(11: return;)F1802f9d30F",
    R"F1802f9d30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804275f8.)F1802f9d30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9d30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9d30", "FUN_1802f9d30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804275f8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1804275f8", static_cast<const void*>(&image::DAT_1804275f8));
    // body sha256: 07555a865526f01acbea81284c890148865e577fc60f73f3b27171122723aa9d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1804275f8 = DAT_1804275f8 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9d30;
}

// 0x1802f9d50 FUN_1802f9d50
// source: re/dump/decompile/0x1802f9d50_FUN_1802f9d50.c
// size: 38 bytes; thunk: false
// body sha256: e29d9cebb49e5c163213b03af743c17509e1ac938dbcd210a7ba4573edc1f22a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9d50{
    "0x1802f9d50",
    "FUN_1802f9d50",
    R"F1802f9d50S(undefined FUN_1802f9d50())F1802f9d50S",
    R"B1802f9d50(// 0x1802f9d50  FUN_1802f9d50
// size=38 thunk=false
// signature: undefined FUN_1802f9d50()
// status: ok


void FUN_1802f9d50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


)B1802f9d50",
    "e29d9cebb49e5c163213b03af743c17509e1ac938dbcd210a7ba4573edc1f22a",
    R"F1802f9d50C()F1802f9d50C",
    R"F1802f9d50D()F1802f9d50D",
    R"F1802f9d50T()F1802f9d50T",
    R"F1802f9d50F(10: if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
14: return;)F1802f9d50F",
    R"F1802f9d50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9d50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9d50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9d50", "FUN_1802f9d50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x40);
    // body sha256: e29d9cebb49e5c163213b03af743c17509e1ac938dbcd210a7ba4573edc1f22a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x38) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x38, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9d50;
}

// 0x1802f9d82 FUN_1802f9d82
// source: re/dump/decompile/0x1802f9d82_FUN_1802f9d82.c
// size: 38 bytes; thunk: false
// body sha256: c87d17bd163623fb1071cbc788b476a3d9ca7c050b13e300202e8dcc3dc56e5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9d82{
    "0x1802f9d82",
    "FUN_1802f9d82",
    R"F1802f9d82S(undefined FUN_1802f9d82())F1802f9d82S",
    R"B1802f9d82(// 0x1802f9d82  FUN_1802f9d82
// size=38 thunk=false
// signature: undefined FUN_1802f9d82()
// status: ok


void FUN_1802f9d82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


)B1802f9d82",
    "c87d17bd163623fb1071cbc788b476a3d9ca7c050b13e300202e8dcc3dc56e5c",
    R"F1802f9d82C()F1802f9d82C",
    R"F1802f9d82D()F1802f9d82D",
    R"F1802f9d82T()F1802f9d82T",
    R"F1802f9d82F(10: if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
14: return;)F1802f9d82F",
    R"F1802f9d82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9d82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9d82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9d82", "FUN_1802f9d82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x40);
    // body sha256: c87d17bd163623fb1071cbc788b476a3d9ca7c050b13e300202e8dcc3dc56e5c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x38) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x38, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9d82;
}

// 0x1802f9db0 FUN_1802f9db0
// source: re/dump/decompile/0x1802f9db0_FUN_1802f9db0.c
// size: 65 bytes; thunk: false
// body sha256: 17da143deb3a66396a60d2c242383ab383c2b95605d77ad20897105f0f7f8914
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9db0{
    "0x1802f9db0",
    "FUN_1802f9db0",
    R"F1802f9db0S(undefined FUN_1802f9db0())F1802f9db0S",
    R"B1802f9db0(// 0x1802f9db0  FUN_1802f9db0
// size=65 thunk=false
// signature: undefined FUN_1802f9db0()
// status: ok


undefined8 FUN_1802f9db0(undefined8 param_1,longlong param_2)

{
  FUN_180014410("[SAFE] SEH 0x%x in %s:%d\n",*(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0x18),
                "Visuals::Menu::Draw",0x29b9);
  return 0;
}


)B1802f9db0",
    "17da143deb3a66396a60d2c242383ab383c2b95605d77ad20897105f0f7f8914",
    R"F1802f9db0C(FUN_180014410)F1802f9db0C",
    R"F1802f9db0D()F1802f9db0D",
    R"F1802f9db0T("Visuals::Menu::Draw"
"[SAFE] SEH 0x%x in %s:%d\\n")F1802f9db0T",
    R"F1802f9db0F(12: return 0;)F1802f9db0F",
    R"F1802f9db0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9db0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9db0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9db0", "FUN_1802f9db0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("Visuals::Menu::Draw");
    trace.string_literal("[SAFE] SEH 0x%x in %s:%d\\n");
    // body sha256: 17da143deb3a66396a60d2c242383ab383c2b95605d77ad20897105f0f7f8914
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] SEH 0x%x in %s:%d\\n\",*(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0x18),");
            trace.statement("\"Visuals::Menu::Draw\",0x29b9);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f9db0;
}

// 0x1802f9df2 FUN_1802f9df2
// source: re/dump/decompile/0x1802f9df2_FUN_1802f9df2.c
// size: 71 bytes; thunk: false
// body sha256: 0f078cfc496fad85d7a58c561ff86b728a5a385dfd23aae5f6d1431209c32303
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9df2{
    "0x1802f9df2",
    "FUN_1802f9df2",
    R"F1802f9df2S(undefined FUN_1802f9df2())F1802f9df2S",
    R"B1802f9df2(// 0x1802f9df2  FUN_1802f9df2
// size=71 thunk=false
// signature: undefined FUN_1802f9df2()
// status: ok


undefined8 FUN_1802f9df2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 200) + 8))();
  FUN_180014410("[SAFE] %s in %s:%d\n",uVar1,"Visuals::Menu::Draw",0x29b9);
  return 0;
}


)B1802f9df2",
    "0f078cfc496fad85d7a58c561ff86b728a5a385dfd23aae5f6d1431209c32303",
    R"F1802f9df2C(FUN_180014410)F1802f9df2C",
    R"F1802f9df2D()F1802f9df2D",
    R"F1802f9df2T("Visuals::Menu::Draw"
"[SAFE] %s in %s:%d\\n")F1802f9df2T",
    R"F1802f9df2F(14: return 0;)F1802f9df2F",
    R"F1802f9df2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 200) + 8))();.)F1802f9df2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9df2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9df2", "FUN_1802f9df2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 200) + 8))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] %s in %s:%d\n", uVar1, "Visuals::Menu::Draw", 0x29b9);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("Visuals::Menu::Draw");
    trace.string_literal("[SAFE] %s in %s:%d\\n");
    // body sha256: 0f078cfc496fad85d7a58c561ff86b728a5a385dfd23aae5f6d1431209c32303
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("uVar1 = (**(code **)(**(longlong **)(param_2 + 200) + 8))();");
            trace.statement("FUN_180014410(\"[SAFE] %s in %s:%d\\n\",uVar1,\"Visuals::Menu::Draw\",0x29b9);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f9df2;
}

// 0x1802f9e3a FUN_1802f9e3a
// source: re/dump/decompile/0x1802f9e3a_FUN_1802f9e3a.c
// size: 55 bytes; thunk: false
// body sha256: add8ebd2cb422d77815533399690f98a808d1b0b1f873c28fd0be7b8a0245efa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9e3a{
    "0x1802f9e3a",
    "FUN_1802f9e3a",
    R"F1802f9e3aS(undefined FUN_1802f9e3a())F1802f9e3aS",
    R"B1802f9e3a(// 0x1802f9e3a  FUN_1802f9e3a
// size=55 thunk=false
// signature: undefined FUN_1802f9e3a()
// status: ok


undefined8 FUN_1802f9e3a(void)

{
  FUN_180014410("[SAFE] Unknown exception in %s:%d\n","Visuals::Menu::Draw",0x29b9);
  return 0;
}


)B1802f9e3a",
    "add8ebd2cb422d77815533399690f98a808d1b0b1f873c28fd0be7b8a0245efa",
    R"F1802f9e3aC(FUN_180014410)F1802f9e3aC",
    R"F1802f9e3aD()F1802f9e3aD",
    R"F1802f9e3aT("Visuals::Menu::Draw"
"[SAFE] Unknown exception in %s:%d\\n")F1802f9e3aT",
    R"F1802f9e3aF(11: return 0;)F1802f9e3aF",
    R"F1802f9e3aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9e3aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9e3a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9e3a", "FUN_1802f9e3a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] Unknown exception in %s:%d\n", "Visuals::Menu::Draw", 0x29b9);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("Visuals::Menu::Draw");
    trace.string_literal("[SAFE] Unknown exception in %s:%d\\n");
    // body sha256: add8ebd2cb422d77815533399690f98a808d1b0b1f873c28fd0be7b8a0245efa
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] Unknown exception in %s:%d\\n\",\"Visuals::Menu::Draw\",0x29b9);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f9e3a;
}

// 0x1802f9e80 FUN_1802f9e80
// source: re/dump/decompile/0x1802f9e80_FUN_1802f9e80.c
// size: 22 bytes; thunk: false
// body sha256: 29a25ca60d259ec7b4f8ec869142996c4823c1bc048acc88a90160ec3c96e147
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9e80{
    "0x1802f9e80",
    "FUN_1802f9e80",
    R"F1802f9e80S(undefined FUN_1802f9e80())F1802f9e80S",
    R"B1802f9e80(// 0x1802f9e80  FUN_1802f9e80
// size=22 thunk=false
// signature: undefined FUN_1802f9e80()
// status: ok


void FUN_1802f9e80(void)

{
  DAT_18042f17c = DAT_18042f17c & 0xfffffffe;
  return;
}


)B1802f9e80",
    "29a25ca60d259ec7b4f8ec869142996c4823c1bc048acc88a90160ec3c96e147",
    R"F1802f9e80C()F1802f9e80C",
    R"F1802f9e80D(DAT_18042f17c)F1802f9e80D",
    R"F1802f9e80T()F1802f9e80T",
    R"F1802f9e80F(11: return;)F1802f9e80F",
    R"F1802f9e80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f17c.)F1802f9e80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9e80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9e80", "FUN_1802f9e80");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f17c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f17c", static_cast<const void*>(&image::DAT_18042f17c));
    // body sha256: 29a25ca60d259ec7b4f8ec869142996c4823c1bc048acc88a90160ec3c96e147
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042f17c = DAT_18042f17c & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9e80;
}

// 0x1802f9eae FUN_1802f9eae
// source: re/dump/decompile/0x1802f9eae_FUN_1802f9eae.c
// size: 22 bytes; thunk: false
// body sha256: 8735049e2ab07c4edb3fb4004bdeb96c7ddb0574290e13b15c67665ed9f42c58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9eae{
    "0x1802f9eae",
    "FUN_1802f9eae",
    R"F1802f9eaeS(undefined FUN_1802f9eae())F1802f9eaeS",
    R"B1802f9eae(// 0x1802f9eae  FUN_1802f9eae
// size=22 thunk=false
// signature: undefined FUN_1802f9eae()
// status: ok


void FUN_1802f9eae(void)

{
  DAT_18042f17c = DAT_18042f17c & 0xfffffffe;
  return;
}


)B1802f9eae",
    "8735049e2ab07c4edb3fb4004bdeb96c7ddb0574290e13b15c67665ed9f42c58",
    R"F1802f9eaeC()F1802f9eaeC",
    R"F1802f9eaeD(DAT_18042f17c)F1802f9eaeD",
    R"F1802f9eaeT()F1802f9eaeT",
    R"F1802f9eaeF(11: return;)F1802f9eaeF",
    R"F1802f9eaeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f17c.)F1802f9eaeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9eae() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9eae", "FUN_1802f9eae");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f17c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f17c", static_cast<const void*>(&image::DAT_18042f17c));
    // body sha256: 8735049e2ab07c4edb3fb4004bdeb96c7ddb0574290e13b15c67665ed9f42c58
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042f17c = DAT_18042f17c & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9eae;
}

// 0x1802f9edc FUN_1802f9edc
// source: re/dump/decompile/0x1802f9edc_FUN_1802f9edc.c
// size: 22 bytes; thunk: false
// body sha256: d88c23771177f4c05249a9f1621510db45075f60e8b89dda2092afba29761f23
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9edc{
    "0x1802f9edc",
    "FUN_1802f9edc",
    R"F1802f9edcS(undefined FUN_1802f9edc())F1802f9edcS",
    R"B1802f9edc(// 0x1802f9edc  FUN_1802f9edc
// size=22 thunk=false
// signature: undefined FUN_1802f9edc()
// status: ok


void FUN_1802f9edc(void)

{
  DAT_18042f17c = DAT_18042f17c & 0xfffffffe;
  return;
}


)B1802f9edc",
    "d88c23771177f4c05249a9f1621510db45075f60e8b89dda2092afba29761f23",
    R"F1802f9edcC()F1802f9edcC",
    R"F1802f9edcD(DAT_18042f17c)F1802f9edcD",
    R"F1802f9edcT()F1802f9edcT",
    R"F1802f9edcF(11: return;)F1802f9edcF",
    R"F1802f9edcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f17c.)F1802f9edcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9edc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9edc", "FUN_1802f9edc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f17c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f17c", static_cast<const void*>(&image::DAT_18042f17c));
    // body sha256: d88c23771177f4c05249a9f1621510db45075f60e8b89dda2092afba29761f23
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042f17c = DAT_18042f17c & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9edc;
}

// 0x1802f9f0a FUN_1802f9f0a
// source: re/dump/decompile/0x1802f9f0a_FUN_1802f9f0a.c
// size: 22 bytes; thunk: false
// body sha256: 54a33a744b9c2f3da74c959ef7f6121544d204b718f5feed0799f58ce7370ed9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9f0a{
    "0x1802f9f0a",
    "FUN_1802f9f0a",
    R"F1802f9f0aS(undefined FUN_1802f9f0a())F1802f9f0aS",
    R"B1802f9f0a(// 0x1802f9f0a  FUN_1802f9f0a
// size=22 thunk=false
// signature: undefined FUN_1802f9f0a()
// status: ok


void FUN_1802f9f0a(void)

{
  DAT_18042f17c = DAT_18042f17c & 0xfffffffe;
  return;
}


)B1802f9f0a",
    "54a33a744b9c2f3da74c959ef7f6121544d204b718f5feed0799f58ce7370ed9",
    R"F1802f9f0aC()F1802f9f0aC",
    R"F1802f9f0aD(DAT_18042f17c)F1802f9f0aD",
    R"F1802f9f0aT()F1802f9f0aT",
    R"F1802f9f0aF(11: return;)F1802f9f0aF",
    R"F1802f9f0aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f17c.)F1802f9f0aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9f0a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9f0a", "FUN_1802f9f0a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f17c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f17c", static_cast<const void*>(&image::DAT_18042f17c));
    // body sha256: 54a33a744b9c2f3da74c959ef7f6121544d204b718f5feed0799f58ce7370ed9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042f17c = DAT_18042f17c & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9f0a;
}

// 0x1802f9f38 FUN_1802f9f38
// source: re/dump/decompile/0x1802f9f38_FUN_1802f9f38.c
// size: 22 bytes; thunk: false
// body sha256: 16835ca354ec2a06efdb78563c7564202e44d0555af06c013f54628f8781b2f1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9f38{
    "0x1802f9f38",
    "FUN_1802f9f38",
    R"F1802f9f38S(undefined FUN_1802f9f38())F1802f9f38S",
    R"B1802f9f38(// 0x1802f9f38  FUN_1802f9f38
// size=22 thunk=false
// signature: undefined FUN_1802f9f38()
// status: ok


void FUN_1802f9f38(void)

{
  DAT_18042f17c = DAT_18042f17c & 0xfffffffe;
  return;
}


)B1802f9f38",
    "16835ca354ec2a06efdb78563c7564202e44d0555af06c013f54628f8781b2f1",
    R"F1802f9f38C()F1802f9f38C",
    R"F1802f9f38D(DAT_18042f17c)F1802f9f38D",
    R"F1802f9f38T()F1802f9f38T",
    R"F1802f9f38F(11: return;)F1802f9f38F",
    R"F1802f9f38U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f17c.)F1802f9f38U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9f38() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9f38", "FUN_1802f9f38");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f17c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f17c", static_cast<const void*>(&image::DAT_18042f17c));
    // body sha256: 16835ca354ec2a06efdb78563c7564202e44d0555af06c013f54628f8781b2f1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042f17c = DAT_18042f17c & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9f38;
}

// 0x1802f9f66 FUN_1802f9f66
// source: re/dump/decompile/0x1802f9f66_FUN_1802f9f66.c
// size: 22 bytes; thunk: false
// body sha256: 3dd8233df3b10080878e2b12d68535ef166d289cb4d848c3fb0c9d4dd611b1b3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9f66{
    "0x1802f9f66",
    "FUN_1802f9f66",
    R"F1802f9f66S(undefined FUN_1802f9f66())F1802f9f66S",
    R"B1802f9f66(// 0x1802f9f66  FUN_1802f9f66
// size=22 thunk=false
// signature: undefined FUN_1802f9f66()
// status: ok


void FUN_1802f9f66(void)

{
  DAT_18042f17c = DAT_18042f17c & 0xfffffffe;
  return;
}


)B1802f9f66",
    "3dd8233df3b10080878e2b12d68535ef166d289cb4d848c3fb0c9d4dd611b1b3",
    R"F1802f9f66C()F1802f9f66C",
    R"F1802f9f66D(DAT_18042f17c)F1802f9f66D",
    R"F1802f9f66T()F1802f9f66T",
    R"F1802f9f66F(11: return;)F1802f9f66F",
    R"F1802f9f66U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f17c.)F1802f9f66U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9f66() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9f66", "FUN_1802f9f66");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f17c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042f17c", static_cast<const void*>(&image::DAT_18042f17c));
    // body sha256: 3dd8233df3b10080878e2b12d68535ef166d289cb4d848c3fb0c9d4dd611b1b3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18042f17c = DAT_18042f17c & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9f66;
}

// 0x1802f9f94 FUN_1802f9f94
// source: re/dump/decompile/0x1802f9f94_FUN_1802f9f94.c
// size: 22 bytes; thunk: false
// body sha256: 626b78a809100c91556aa1ea9e3a48fe0f8830bb720fb4ff452f9689a4ca974a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9f94{
    "0x1802f9f94",
    "FUN_1802f9f94",
    R"F1802f9f94S(undefined FUN_1802f9f94())F1802f9f94S",
    R"B1802f9f94(// 0x1802f9f94  FUN_1802f9f94
// size=22 thunk=false
// signature: undefined FUN_1802f9f94()
// status: ok


void FUN_1802f9f94(void)

{
  DAT_1805c7c20 = DAT_1805c7c20 & 0xfffffffe;
  return;
}


)B1802f9f94",
    "626b78a809100c91556aa1ea9e3a48fe0f8830bb720fb4ff452f9689a4ca974a",
    R"F1802f9f94C()F1802f9f94C",
    R"F1802f9f94D(DAT_1805c7c20)F1802f9f94D",
    R"F1802f9f94T()F1802f9f94T",
    R"F1802f9f94F(11: return;)F1802f9f94F",
    R"F1802f9f94U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7c20.)F1802f9f94U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9f94() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9f94", "FUN_1802f9f94");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7c20.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7c20", static_cast<const void*>(&image::DAT_1805c7c20));
    // body sha256: 626b78a809100c91556aa1ea9e3a48fe0f8830bb720fb4ff452f9689a4ca974a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1805c7c20 = DAT_1805c7c20 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9f94;
}

// 0x1802f9fec FUN_1802f9fec
// source: re/dump/decompile/0x1802f9fec_FUN_1802f9fec.c
// size: 38 bytes; thunk: false
// body sha256: 3b7c27a5593dff06a8b49bcdf89ef83fa00fdf30c684400e489e9602f041a10d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9fec{
    "0x1802f9fec",
    "FUN_1802f9fec",
    R"F1802f9fecS(undefined FUN_1802f9fec())F1802f9fecS",
    R"B1802f9fec(// 0x1802f9fec  FUN_1802f9fec
// size=38 thunk=false
// signature: undefined FUN_1802f9fec()
// status: ok


void FUN_1802f9fec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802f9fec",
    "3b7c27a5593dff06a8b49bcdf89ef83fa00fdf30c684400e489e9602f041a10d",
    R"F1802f9fecC()F1802f9fecC",
    R"F1802f9fecD()F1802f9fecD",
    R"F1802f9fecT()F1802f9fecT",
    R"F1802f9fecF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f9fecF",
    R"F1802f9fecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9fecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9fec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9fec", "FUN_1802f9fec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x50, 0));
    // body sha256: 3b7c27a5593dff06a8b49bcdf89ef83fa00fdf30c684400e489e9602f041a10d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9fec;
}

// 0x1802fa012 FUN_1802fa012
// source: re/dump/decompile/0x1802fa012_FUN_1802fa012.c
// size: 38 bytes; thunk: false
// body sha256: 21773ad2387bb7fa90f1bd5fd4aee53bafdf9e11b64f262a6e69819606b4455e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa012{
    "0x1802fa012",
    "FUN_1802fa012",
    R"F1802fa012S(undefined FUN_1802fa012())F1802fa012S",
    R"B1802fa012(// 0x1802fa012  FUN_1802fa012
// size=38 thunk=false
// signature: undefined FUN_1802fa012()
// status: ok


void FUN_1802fa012(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802fa012",
    "21773ad2387bb7fa90f1bd5fd4aee53bafdf9e11b64f262a6e69819606b4455e",
    R"F1802fa012C()F1802fa012C",
    R"F1802fa012D()F1802fa012D",
    R"F1802fa012T()F1802fa012T",
    R"F1802fa012F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802fa012F",
    R"F1802fa012U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fa012U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa012() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa012", "FUN_1802fa012");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x50, 0));
    // body sha256: 21773ad2387bb7fa90f1bd5fd4aee53bafdf9e11b64f262a6e69819606b4455e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fa012;
}

// 0x1802fa050 FUN_1802fa050
// source: re/dump/decompile/0x1802fa050_FUN_1802fa050.c
// size: 38 bytes; thunk: false
// body sha256: 94d0e40a6781068dc18b32b71231c6d6fb5bf344d637523da0289254cbccfc30
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa050{
    "0x1802fa050",
    "FUN_1802fa050",
    R"F1802fa050S(undefined FUN_1802fa050())F1802fa050S",
    R"B1802fa050(// 0x1802fa050  FUN_1802fa050
// size=38 thunk=false
// signature: undefined FUN_1802fa050()
// status: ok


void FUN_1802fa050(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802fa050",
    "94d0e40a6781068dc18b32b71231c6d6fb5bf344d637523da0289254cbccfc30",
    R"F1802fa050C()F1802fa050C",
    R"F1802fa050D()F1802fa050D",
    R"F1802fa050T()F1802fa050T",
    R"F1802fa050F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fa050F",
    R"F1802fa050U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fa050U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa050() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa050", "FUN_1802fa050");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x48, 0));
    // body sha256: 94d0e40a6781068dc18b32b71231c6d6fb5bf344d637523da0289254cbccfc30
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fa050;
}

// 0x1802fa0c8 FUN_1802fa0c8
// source: re/dump/decompile/0x1802fa0c8_FUN_1802fa0c8.c
// size: 42 bytes; thunk: false
// body sha256: c7ae561cf0b087966ecab0c4cb0dfcc7bb4515d3b54064ae0846c3ed627b4d7f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa0c8{
    "0x1802fa0c8",
    "FUN_1802fa0c8",
    R"F1802fa0c8S(undefined FUN_1802fa0c8())F1802fa0c8S",
    R"B1802fa0c8(// 0x1802fa0c8  FUN_1802fa0c8
// size=42 thunk=false
// signature: undefined FUN_1802fa0c8()
// status: ok


undefined8 FUN_1802fa0c8(void)

{
  FUN_180014410("[UNLOAD-WARN] render target release faulted; surfaces leaked\n");
  return 0;
}


)B1802fa0c8",
    "c7ae561cf0b087966ecab0c4cb0dfcc7bb4515d3b54064ae0846c3ed627b4d7f",
    R"F1802fa0c8C(FUN_180014410)F1802fa0c8C",
    R"F1802fa0c8D()F1802fa0c8D",
    R"F1802fa0c8T("[UNLOAD-WARN] render target release faulted; surfaces leaked\\n")F1802fa0c8T",
    R"F1802fa0c8F(11: return 0;)F1802fa0c8F",
    R"F1802fa0c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fa0c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa0c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa0c8", "FUN_1802fa0c8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for FUN_180014410: "[UNLOAD-WARN] render target release faulted; surfaces leaked\n" [reason: ambiguous operand type]
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[UNLOAD-WARN] render target release faulted; surfaces leaked\\n");
    // body sha256: c7ae561cf0b087966ecab0c4cb0dfcc7bb4515d3b54064ae0846c3ed627b4d7f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[UNLOAD-WARN] render target release faulted; surfaces leaked\\n\");");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa0c8;
}

// 0x1802fa100 FUN_1802fa100
// source: re/dump/decompile/0x1802fa100_FUN_1802fa100.c
// size: 46 bytes; thunk: false
// body sha256: e7a33db446b6b4959cd83db0870d8d3411f806cddb42a99a32038020fd73a3bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa100{
    "0x1802fa100",
    "FUN_1802fa100",
    R"F1802fa100S(undefined FUN_1802fa100())F1802fa100S",
    R"B1802fa100(// 0x1802fa100  FUN_1802fa100
// size=46 thunk=false
// signature: undefined FUN_1802fa100()
// status: ok


undefined8 FUN_1802fa100(undefined8 param_1,longlong param_2)

{
  FUN_180014410("[UNLOAD-WARN] imgui %s backend shutdown faulted\n",*(undefined8 *)(param_2 + 0x40))
  ;
  return 0;
}


)B1802fa100",
    "e7a33db446b6b4959cd83db0870d8d3411f806cddb42a99a32038020fd73a3bd",
    R"F1802fa100C(FUN_180014410)F1802fa100C",
    R"F1802fa100D()F1802fa100D",
    R"F1802fa100T("[UNLOAD-WARN] imgui %s backend shutdown faulted\\n")F1802fa100T",
    R"F1802fa100F(12: return 0;)F1802fa100F",
    R"F1802fa100U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fa100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa100() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa100", "FUN_1802fa100");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[UNLOAD-WARN] imgui %s backend shutdown faulted\n", load_at<std::uint64_t>(param_2 + 0x40, 0));
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[UNLOAD-WARN] imgui %s backend shutdown faulted\\n");
    // body sha256: e7a33db446b6b4959cd83db0870d8d3411f806cddb42a99a32038020fd73a3bd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[UNLOAD-WARN] imgui %s backend shutdown faulted\\n\",*(undefined8 *)(param_2 + 0x40))");
            trace.statement(";");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa100;
}

// 0x1802fa13c FUN_1802fa13c
// source: re/dump/decompile/0x1802fa13c_FUN_1802fa13c.c
// size: 36 bytes; thunk: false
// body sha256: 7b255aada1e6059a4de951eee2f07c6773eaf21c317e0f8550ea1df90a4ebdf6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa13c{
    "0x1802fa13c",
    "FUN_1802fa13c",
    R"F1802fa13cS(undefined FUN_1802fa13c())F1802fa13cS",
    R"B1802fa13c(// 0x1802fa13c  FUN_1802fa13c
// size=36 thunk=false
// signature: undefined FUN_1802fa13c()
// status: ok


undefined8 FUN_1802fa13c(void)

{
  DAT_18040a3c0 = 0;
  return 0;
}


)B1802fa13c",
    "7b255aada1e6059a4de951eee2f07c6773eaf21c317e0f8550ea1df90a4ebdf6",
    R"F1802fa13cC()F1802fa13cC",
    R"F1802fa13cD(DAT_18040a3c0)F1802fa13cD",
    R"F1802fa13cT()F1802fa13cT",
    R"F1802fa13cF(11: return 0;)F1802fa13cF",
    R"F1802fa13cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a3c0.)F1802fa13cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa13c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa13c", "FUN_1802fa13c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a3c0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18040a3c0", static_cast<const void*>(&image::DAT_18040a3c0));
    // body sha256: 7b255aada1e6059a4de951eee2f07c6773eaf21c317e0f8550ea1df90a4ebdf6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_18040a3c0 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa13c;
}

// 0x1802fa161 FUN_1802fa161
// source: re/dump/decompile/0x1802fa161_FUN_1802fa161.c
// size: 115 bytes; thunk: false
// body sha256: 2d92f00bd63d40eabe864e8715d8682f31af5d3c9e69a8a554b143c6e526f73e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa161{
    "0x1802fa161",
    "FUN_1802fa161",
    R"F1802fa161S(undefined FUN_1802fa161())F1802fa161S",
    R"B1802fa161(// 0x1802fa161  FUN_1802fa161
// size=115 thunk=false
// signature: undefined FUN_1802fa161()
// status: ok


undefined8 FUN_1802fa161(undefined8 param_1,longlong param_2)

{
  DAT_1803fa566 = 0;
  DAT_1803feb1c = 0;
  DAT_180425390 = DAT_180425390 + 1;
  if ((DAT_180425390 < 0xb) || (DAT_180425390 == (DAT_180425390 / 300) * 300)) {
    FUN_180014410("[SAFE] ESP render SEH 0x%x #%d\n",
                  *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x18));
  }
  return 0;
}


)B1802fa161",
    "2d92f00bd63d40eabe864e8715d8682f31af5d3c9e69a8a554b143c6e526f73e",
    R"F1802fa161C(FUN_180014410)F1802fa161C",
    R"F1802fa161D(DAT_1803fa566
DAT_1803feb1c
DAT_180425390)F1802fa161D",
    R"F1802fa161T("[SAFE] ESP render SEH 0x%x #%d\\n")F1802fa161T",
    R"F1802fa161F(13: if ((DAT_180425390 < 0xb) || (DAT_180425390 == (DAT_180425390 / 300) * 300)) {
17: return 0;)F1802fa161F",
    R"F1802fa161U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa566.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803feb1c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425390.)F1802fa161U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa161() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa161", "FUN_1802fa161");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa566.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803feb1c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425390.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1803fa566", static_cast<const void*>(&image::DAT_1803fa566));
    trace.data_ref("DAT_1803feb1c", static_cast<const void*>(&image::DAT_1803feb1c));
    trace.data_ref("DAT_180425390", static_cast<const void*>(&image::DAT_180425390));
    trace.string_literal("[SAFE] ESP render SEH 0x%x #%d\\n");
    // body sha256: 2d92f00bd63d40eabe864e8715d8682f31af5d3c9e69a8a554b143c6e526f73e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803fa566 = 0;");
            trace.statement("DAT_1803feb1c = 0;");
            trace.statement("DAT_180425390 = DAT_180425390 + 1;");
            if (trace.checked_condition("if ((DAT_180425390 < 0xb) || (DAT_180425390 == (DAT_180425390 / 300) * 300))", [&]() -> bool { return static_cast<bool>((image::DAT_180425390 < 0xb) || (image::DAT_180425390 == (image::DAT_180425390 / 300) * 300)); })) {
                trace.statement("FUN_180014410(\"[SAFE] ESP render SEH 0x%x #%d\\n\",");
                trace.statement("*(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x18));");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa161;
}

// 0x1802fa1d5 FUN_1802fa1d5
// source: re/dump/decompile/0x1802fa1d5_FUN_1802fa1d5.c
// size: 111 bytes; thunk: false
// body sha256: c4ed54c9c8aaefbfa804b23bf90a25def5bbb07dc7339a58d5c4743265af77e2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa1d5{
    "0x1802fa1d5",
    "FUN_1802fa1d5",
    R"F1802fa1d5S(undefined FUN_1802fa1d5())F1802fa1d5S",
    R"B1802fa1d5(// 0x1802fa1d5  FUN_1802fa1d5
// size=111 thunk=false
// signature: undefined FUN_1802fa1d5()
// status: ok


undefined8 FUN_1802fa1d5(void)

{
  DAT_1803fa566 = 0;
  DAT_1803feb1c = 0;
  DAT_180425894 = DAT_180425894 + 1;
  if ((DAT_180425894 < 0xb) || (DAT_180425894 == (DAT_180425894 / 300) * 300)) {
    FUN_180014410("[SAFE] ESP render exception #%d\n",DAT_180425894);
  }
  return 0;
}


)B1802fa1d5",
    "c4ed54c9c8aaefbfa804b23bf90a25def5bbb07dc7339a58d5c4743265af77e2",
    R"F1802fa1d5C(FUN_180014410)F1802fa1d5C",
    R"F1802fa1d5D(DAT_1803fa566
DAT_1803feb1c
DAT_180425894)F1802fa1d5D",
    R"F1802fa1d5T("[SAFE] ESP render exception #%d\\n")F1802fa1d5T",
    R"F1802fa1d5F(13: if ((DAT_180425894 < 0xb) || (DAT_180425894 == (DAT_180425894 / 300) * 300)) {
16: return 0;)F1802fa1d5F",
    R"F1802fa1d5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa566.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803feb1c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425894.)F1802fa1d5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa1d5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa1d5", "FUN_1802fa1d5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa566.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803feb1c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425894.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] ESP render exception #%d\n", image::DAT_180425894);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1803fa566", static_cast<const void*>(&image::DAT_1803fa566));
    trace.data_ref("DAT_1803feb1c", static_cast<const void*>(&image::DAT_1803feb1c));
    trace.data_ref("DAT_180425894", static_cast<const void*>(&image::DAT_180425894));
    trace.string_literal("[SAFE] ESP render exception #%d\\n");
    // body sha256: c4ed54c9c8aaefbfa804b23bf90a25def5bbb07dc7339a58d5c4743265af77e2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803fa566 = 0;");
            trace.statement("DAT_1803feb1c = 0;");
            trace.statement("DAT_180425894 = DAT_180425894 + 1;");
            if (trace.checked_condition("if ((DAT_180425894 < 0xb) || (DAT_180425894 == (DAT_180425894 / 300) * 300))", [&]() -> bool { return static_cast<bool>((image::DAT_180425894 < 0xb) || (image::DAT_180425894 == (image::DAT_180425894 / 300) * 300)); })) {
                trace.statement("FUN_180014410(\"[SAFE] ESP render exception #%d\\n\",DAT_180425894);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa1d5;
}

// 0x1802fa25d FUN_1802fa25d
// source: re/dump/decompile/0x1802fa25d_FUN_1802fa25d.c
// size: 101 bytes; thunk: false
// body sha256: affce13ebef87660106cb0a8f955233f24009e06ceb44498cd3d83bc77e72a03
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa25d{
    "0x1802fa25d",
    "FUN_1802fa25d",
    R"F1802fa25dS(undefined FUN_1802fa25d())F1802fa25dS",
    R"B1802fa25d(// 0x1802fa25d  FUN_1802fa25d
// size=101 thunk=false
// signature: undefined FUN_1802fa25d()
// status: ok


undefined8 FUN_1802fa25d(undefined8 param_1,longlong param_2)

{
  DAT_180425fcc = DAT_180425fcc + 1;
  if ((DAT_180425fcc < 0xb) || (DAT_180425fcc == (DAT_180425fcc / 300) * 300)) {
    FUN_180014410("[SAFE] menu frame SEH 0x%x #%d\n",
                  *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18));
  }
  return 0;
}


)B1802fa25d",
    "affce13ebef87660106cb0a8f955233f24009e06ceb44498cd3d83bc77e72a03",
    R"F1802fa25dC(FUN_180014410)F1802fa25dC",
    R"F1802fa25dD(DAT_180425fcc)F1802fa25dD",
    R"F1802fa25dT("[SAFE] menu frame SEH 0x%x #%d\\n")F1802fa25dT",
    R"F1802fa25dF(11: if ((DAT_180425fcc < 0xb) || (DAT_180425fcc == (DAT_180425fcc / 300) * 300)) {
15: return 0;)F1802fa25dF",
    R"F1802fa25dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425fcc.)F1802fa25dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa25d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa25d", "FUN_1802fa25d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425fcc.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_180425fcc", static_cast<const void*>(&image::DAT_180425fcc));
    trace.string_literal("[SAFE] menu frame SEH 0x%x #%d\\n");
    // body sha256: affce13ebef87660106cb0a8f955233f24009e06ceb44498cd3d83bc77e72a03
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180425fcc = DAT_180425fcc + 1;");
            if (trace.checked_condition("if ((DAT_180425fcc < 0xb) || (DAT_180425fcc == (DAT_180425fcc / 300) * 300))", [&]() -> bool { return static_cast<bool>((image::DAT_180425fcc < 0xb) || (image::DAT_180425fcc == (image::DAT_180425fcc / 300) * 300)); })) {
                trace.statement("FUN_180014410(\"[SAFE] menu frame SEH 0x%x #%d\\n\",");
                trace.statement("*(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18));");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa25d;
}

// 0x1802fa2c3 FUN_1802fa2c3
// source: re/dump/decompile/0x1802fa2c3_FUN_1802fa2c3.c
// size: 106 bytes; thunk: false
// body sha256: a516b1297840c501df1a13dc7830fb184d8af036d8396f4d6340a9153ed9a1f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa2c3{
    "0x1802fa2c3",
    "FUN_1802fa2c3",
    R"F1802fa2c3S(undefined FUN_1802fa2c3())F1802fa2c3S",
    R"B1802fa2c3(// 0x1802fa2c3  FUN_1802fa2c3
// size=106 thunk=false
// signature: undefined FUN_1802fa2c3()
// status: ok


undefined8 FUN_1802fa2c3(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = DAT_18042587c + 1;
  DAT_18042587c = iVar2;
  if ((iVar2 < 0xb) || (iVar2 == (iVar2 / 300) * 300)) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();
    FUN_180014410("[SAFE] menu frame exception \'%s\' #%d\n",uVar1,iVar2);
  }
  return 0;
}


)B1802fa2c3",
    "a516b1297840c501df1a13dc7830fb184d8af036d8396f4d6340a9153ed9a1f8",
    R"F1802fa2c3C(FUN_180014410)F1802fa2c3C",
    R"F1802fa2c3D(DAT_18042587c)F1802fa2c3D",
    R"F1802fa2c3T("[SAFE] menu frame exception \\'%s\\' #%d\\n")F1802fa2c3T",
    R"F1802fa2c3F(15: if ((iVar2 < 0xb) || (iVar2 == (iVar2 / 300) * 300)) {
19: return 0;)F1802fa2c3F",
    R"F1802fa2c3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042587c.
TODO: resolve the indirect call in body 16: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();.)F1802fa2c3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa2c3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa2c3", "FUN_1802fa2c3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042587c.
    // TODO: resolve the indirect call in body 16: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] menu frame exception '%s' #%d\n", uVar1, iVar2);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_18042587c", static_cast<const void*>(&image::DAT_18042587c));
    trace.string_literal("[SAFE] menu frame exception \\'%s\\' #%d\\n");
    // body sha256: a516b1297840c501df1a13dc7830fb184d8af036d8396f4d6340a9153ed9a1f8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("int iVar2;");
            trace.statement("iVar2 = DAT_18042587c + 1;");
            trace.statement("DAT_18042587c = iVar2;");
            if (trace.checked_condition("if ((iVar2 < 0xb) || (iVar2 == (iVar2 / 300) * 300))", [&]() -> bool { return static_cast<bool>((iVar2 < 0xb) || (iVar2 == (iVar2 / 300) * 300)); })) {
                trace.statement("uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();");
                trace.statement("FUN_180014410(\"[SAFE] menu frame exception \\'%s\\' #%d\\n\",uVar1,iVar2);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa2c3;
}

// 0x1802fa32e FUN_1802fa32e
// source: re/dump/decompile/0x1802fa32e_FUN_1802fa32e.c
// size: 97 bytes; thunk: false
// body sha256: 3bbbb62764ee100853108f8c494c7054e3066d5eff93c0f1c56afb3d296be5fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa32e{
    "0x1802fa32e",
    "FUN_1802fa32e",
    R"F1802fa32eS(undefined FUN_1802fa32e())F1802fa32eS",
    R"B1802fa32e(// 0x1802fa32e  FUN_1802fa32e
// size=97 thunk=false
// signature: undefined FUN_1802fa32e()
// status: ok


undefined8 FUN_1802fa32e(void)

{
  DAT_1804260c4 = DAT_1804260c4 + 1;
  if ((DAT_1804260c4 < 0xb) || (DAT_1804260c4 == (DAT_1804260c4 / 300) * 300)) {
    FUN_180014410("[SAFE] menu frame exception #%d\n",DAT_1804260c4);
  }
  return 0;
}


)B1802fa32e",
    "3bbbb62764ee100853108f8c494c7054e3066d5eff93c0f1c56afb3d296be5fc",
    R"F1802fa32eC(FUN_180014410)F1802fa32eC",
    R"F1802fa32eD(DAT_1804260c4)F1802fa32eD",
    R"F1802fa32eT("[SAFE] menu frame exception #%d\\n")F1802fa32eT",
    R"F1802fa32eF(11: if ((DAT_1804260c4 < 0xb) || (DAT_1804260c4 == (DAT_1804260c4 / 300) * 300)) {
14: return 0;)F1802fa32eF",
    R"F1802fa32eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804260c4.)F1802fa32eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa32e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa32e", "FUN_1802fa32e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804260c4.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] menu frame exception #%d\n", image::DAT_1804260c4);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1804260c4", static_cast<const void*>(&image::DAT_1804260c4));
    trace.string_literal("[SAFE] menu frame exception #%d\\n");
    // body sha256: 3bbbb62764ee100853108f8c494c7054e3066d5eff93c0f1c56afb3d296be5fc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1804260c4 = DAT_1804260c4 + 1;");
            if (trace.checked_condition("if ((DAT_1804260c4 < 0xb) || (DAT_1804260c4 == (DAT_1804260c4 / 300) * 300))", [&]() -> bool { return static_cast<bool>((image::DAT_1804260c4 < 0xb) || (image::DAT_1804260c4 == (image::DAT_1804260c4 / 300) * 300)); })) {
                trace.statement("FUN_180014410(\"[SAFE] menu frame exception #%d\\n\",DAT_1804260c4);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa32e;
}

// 0x1802fa390 FUN_1802fa390
// source: re/dump/decompile/0x1802fa390_FUN_1802fa390.c
// size: 75 bytes; thunk: false
// body sha256: 9e490048556fb6a37e8d857362ad079ec18d4e0b2b41b812b17822cc590f22e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa390{
    "0x1802fa390",
    "FUN_1802fa390",
    R"F1802fa390S(undefined FUN_1802fa390())F1802fa390S",
    R"B1802fa390(// 0x1802fa390  FUN_1802fa390
// size=75 thunk=false
// signature: undefined FUN_1802fa390()
// status: ok


undefined8 FUN_1802fa390(void)

{
  DAT_1803fa456 = 0;
  DAT_1804259e0 = 0;
  DAT_180425890 = DAT_180425890 + 1;
  if (DAT_180425890 < 0xb) {
    FUN_180014410("[SAFE] script ui render exception #%d\n");
  }
  return 0;
}


)B1802fa390",
    "9e490048556fb6a37e8d857362ad079ec18d4e0b2b41b812b17822cc590f22e3",
    R"F1802fa390C(FUN_180014410)F1802fa390C",
    R"F1802fa390D(DAT_1803fa456
DAT_180425890
DAT_1804259e0)F1802fa390D",
    R"F1802fa390T("[SAFE] script ui render exception #%d\\n")F1802fa390T",
    R"F1802fa390F(13: if (DAT_180425890 < 0xb) {
16: return 0;)F1802fa390F",
    R"F1802fa390U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa456.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425890.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804259e0.)F1802fa390U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa390() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa390", "FUN_1802fa390");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa456.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425890.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804259e0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] script ui render exception #%d\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1803fa456", static_cast<const void*>(&image::DAT_1803fa456));
    trace.data_ref("DAT_180425890", static_cast<const void*>(&image::DAT_180425890));
    trace.data_ref("DAT_1804259e0", static_cast<const void*>(&image::DAT_1804259e0));
    trace.string_literal("[SAFE] script ui render exception #%d\\n");
    // body sha256: 9e490048556fb6a37e8d857362ad079ec18d4e0b2b41b812b17822cc590f22e3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803fa456 = 0;");
            trace.statement("DAT_1804259e0 = 0;");
            trace.statement("DAT_180425890 = DAT_180425890 + 1;");
            if (trace.checked_condition("if (DAT_180425890 < 0xb)", [&]() -> bool { return static_cast<bool>(image::DAT_180425890 < 0xb); })) {
                trace.statement("FUN_180014410(\"[SAFE] script ui render exception #%d\\n\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa390;
}

// 0x1802fa41c FUN_1802fa41c
// source: re/dump/decompile/0x1802fa41c_FUN_1802fa41c.c
// size: 62 bytes; thunk: false
// body sha256: 5f503e051e22efe86bf5c19497e7a36e5a3103cddd3912e9af6b3f3d6cd48f11
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa41c{
    "0x1802fa41c",
    "FUN_1802fa41c",
    R"F1802fa41cS(undefined FUN_1802fa41c())F1802fa41cS",
    R"B1802fa41c(// 0x1802fa41c  FUN_1802fa41c
// size=62 thunk=false
// signature: undefined FUN_1802fa41c()
// status: ok


undefined8 FUN_1802fa41c(undefined8 param_1,longlong param_2)

{
  FUN_180014410("[SAFE] SEH 0x%x in %s:%d\n",*(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18),
                "Visuals::Hooks::hookPresent",0x556);
  return 0;
}


)B1802fa41c",
    "5f503e051e22efe86bf5c19497e7a36e5a3103cddd3912e9af6b3f3d6cd48f11",
    R"F1802fa41cC(FUN_180014410)F1802fa41cC",
    R"F1802fa41cD()F1802fa41cD",
    R"F1802fa41cT("[SAFE] SEH 0x%x in %s:%d\\n"
"Visuals::Hooks::hookPresent")F1802fa41cT",
    R"F1802fa41cF(12: return 0;)F1802fa41cF",
    R"F1802fa41cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fa41cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa41c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa41c", "FUN_1802fa41c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[SAFE] SEH 0x%x in %s:%d\\n");
    trace.string_literal("Visuals::Hooks::hookPresent");
    // body sha256: 5f503e051e22efe86bf5c19497e7a36e5a3103cddd3912e9af6b3f3d6cd48f11
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] SEH 0x%x in %s:%d\\n\",*(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18),");
            trace.statement("\"Visuals::Hooks::hookPresent\",0x556);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa41c;
}

// 0x1802fa45b FUN_1802fa45b
// source: re/dump/decompile/0x1802fa45b_FUN_1802fa45b.c
// size: 68 bytes; thunk: false
// body sha256: 31aee358b792e43c1573ca1463f978e65e385ce4380321850fe66f8bfc477078
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa45b{
    "0x1802fa45b",
    "FUN_1802fa45b",
    R"F1802fa45bS(undefined FUN_1802fa45b())F1802fa45bS",
    R"B1802fa45b(// 0x1802fa45b  FUN_1802fa45b
// size=68 thunk=false
// signature: undefined FUN_1802fa45b()
// status: ok


undefined8 FUN_1802fa45b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();
  FUN_180014410("[SAFE] %s in %s:%d\n",uVar1,"Visuals::Hooks::hookPresent",0x556);
  return 0;
}


)B1802fa45b",
    "31aee358b792e43c1573ca1463f978e65e385ce4380321850fe66f8bfc477078",
    R"F1802fa45bC(FUN_180014410)F1802fa45bC",
    R"F1802fa45bD()F1802fa45bD",
    R"F1802fa45bT("[SAFE] %s in %s:%d\\n"
"Visuals::Hooks::hookPresent")F1802fa45bT",
    R"F1802fa45bF(14: return 0;)F1802fa45bF",
    R"F1802fa45bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();.)F1802fa45bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa45b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa45b", "FUN_1802fa45b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] %s in %s:%d\n", uVar1, "Visuals::Hooks::hookPresent", 0x556);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[SAFE] %s in %s:%d\\n");
    trace.string_literal("Visuals::Hooks::hookPresent");
    // body sha256: 31aee358b792e43c1573ca1463f978e65e385ce4380321850fe66f8bfc477078
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();");
            trace.statement("FUN_180014410(\"[SAFE] %s in %s:%d\\n\",uVar1,\"Visuals::Hooks::hookPresent\",0x556);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa45b;
}

// 0x1802fa4a0 FUN_1802fa4a0
// source: re/dump/decompile/0x1802fa4a0_FUN_1802fa4a0.c
// size: 55 bytes; thunk: false
// body sha256: 89de5c6dbe720fe5c7ecdd1917552133820ff4172d05485849608be0f1aeabdb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa4a0{
    "0x1802fa4a0",
    "FUN_1802fa4a0",
    R"F1802fa4a0S(undefined FUN_1802fa4a0())F1802fa4a0S",
    R"B1802fa4a0(// 0x1802fa4a0  FUN_1802fa4a0
// size=55 thunk=false
// signature: undefined FUN_1802fa4a0()
// status: ok


undefined8 FUN_1802fa4a0(void)

{
  FUN_180014410("[SAFE] Unknown exception in %s:%d\n","Visuals::Hooks::hookPresent",0x556);
  return 0;
}


)B1802fa4a0",
    "89de5c6dbe720fe5c7ecdd1917552133820ff4172d05485849608be0f1aeabdb",
    R"F1802fa4a0C(FUN_180014410)F1802fa4a0C",
    R"F1802fa4a0D()F1802fa4a0D",
    R"F1802fa4a0T("Visuals::Hooks::hookPresent"
"[SAFE] Unknown exception in %s:%d\\n")F1802fa4a0T",
    R"F1802fa4a0F(11: return 0;)F1802fa4a0F",
    R"F1802fa4a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fa4a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa4a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa4a0", "FUN_1802fa4a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] Unknown exception in %s:%d\n", "Visuals::Hooks::hookPresent", 0x556);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("Visuals::Hooks::hookPresent");
    trace.string_literal("[SAFE] Unknown exception in %s:%d\\n");
    // body sha256: 89de5c6dbe720fe5c7ecdd1917552133820ff4172d05485849608be0f1aeabdb
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] Unknown exception in %s:%d\\n\",\"Visuals::Hooks::hookPresent\",0x556);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa4a0;
}

// 0x1802fa9b0 FUN_1802fa9b0
// source: re/dump/decompile/0x1802fa9b0_FUN_1802fa9b0.c
// size: 35 bytes; thunk: false
// body sha256: 94857c898c8a4a48998adef62dcbc5061bd978db9920a13cffc1abbb8fca47dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fa9b0{
    "0x1802fa9b0",
    "FUN_1802fa9b0",
    R"F1802fa9b0S(undefined FUN_1802fa9b0())F1802fa9b0S",
    R"B1802fa9b0(// 0x1802fa9b0  FUN_1802fa9b0
// size=35 thunk=false
// signature: undefined FUN_1802fa9b0()
// status: ok


undefined8 FUN_1802fa9b0(void)

{
  return 0;
}


)B1802fa9b0",
    "94857c898c8a4a48998adef62dcbc5061bd978db9920a13cffc1abbb8fca47dc",
    R"F1802fa9b0C()F1802fa9b0C",
    R"F1802fa9b0D()F1802fa9b0D",
    R"F1802fa9b0T()F1802fa9b0T",
    R"F1802fa9b0F(10: return 0;)F1802fa9b0F",
    R"F1802fa9b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fa9b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fa9b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fa9b0", "FUN_1802fa9b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 94857c898c8a4a48998adef62dcbc5061bd978db9920a13cffc1abbb8fca47dc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fa9b0;
}

// 0x1802faa08 FUN_1802faa08
// source: re/dump/decompile/0x1802faa08_FUN_1802faa08.c
// size: 29 bytes; thunk: false
// body sha256: 11cff7c28b6fa331a698543715801c79c94bc6b699d91ed1495fbc5e71de049c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faa08{
    "0x1802faa08",
    "FUN_1802faa08",
    R"F1802faa08S(undefined FUN_1802faa08())F1802faa08S",
    R"B1802faa08(// 0x1802faa08  FUN_1802faa08
// size=29 thunk=false
// signature: undefined FUN_1802faa08()
// status: ok


undefined8 FUN_1802faa08(void)

{
  return 0;
}


)B1802faa08",
    "11cff7c28b6fa331a698543715801c79c94bc6b699d91ed1495fbc5e71de049c",
    R"F1802faa08C()F1802faa08C",
    R"F1802faa08D()F1802faa08D",
    R"F1802faa08T()F1802faa08T",
    R"F1802faa08F(10: return 0;)F1802faa08F",
    R"F1802faa08U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faa08U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faa08() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faa08", "FUN_1802faa08");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 11cff7c28b6fa331a698543715801c79c94bc6b699d91ed1495fbc5e71de049c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802faa08;
}

// 0x1802faa26 FUN_1802faa26
// source: re/dump/decompile/0x1802faa26_FUN_1802faa26.c
// size: 29 bytes; thunk: false
// body sha256: db6158f3adf703fd1ad70e2845f07180c943e47e13f48c4ac259c5effca58780
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faa26{
    "0x1802faa26",
    "FUN_1802faa26",
    R"F1802faa26S(undefined FUN_1802faa26())F1802faa26S",
    R"B1802faa26(// 0x1802faa26  FUN_1802faa26
// size=29 thunk=false
// signature: undefined FUN_1802faa26()
// status: ok


undefined8 FUN_1802faa26(void)

{
  return 0;
}


)B1802faa26",
    "db6158f3adf703fd1ad70e2845f07180c943e47e13f48c4ac259c5effca58780",
    R"F1802faa26C()F1802faa26C",
    R"F1802faa26D()F1802faa26D",
    R"F1802faa26T()F1802faa26T",
    R"F1802faa26F(10: return 0;)F1802faa26F",
    R"F1802faa26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faa26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faa26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faa26", "FUN_1802faa26");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: db6158f3adf703fd1ad70e2845f07180c943e47e13f48c4ac259c5effca58780
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802faa26;
}

// 0x1802faa44 FUN_1802faa44
// source: re/dump/decompile/0x1802faa44_FUN_1802faa44.c
// size: 29 bytes; thunk: false
// body sha256: 55de42f564ab748512be244731298a6f765c8a62525fdca5ce5bbd588d8cfdf1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faa44{
    "0x1802faa44",
    "FUN_1802faa44",
    R"F1802faa44S(undefined FUN_1802faa44())F1802faa44S",
    R"B1802faa44(// 0x1802faa44  FUN_1802faa44
// size=29 thunk=false
// signature: undefined FUN_1802faa44()
// status: ok


undefined8 FUN_1802faa44(void)

{
  return 0;
}


)B1802faa44",
    "55de42f564ab748512be244731298a6f765c8a62525fdca5ce5bbd588d8cfdf1",
    R"F1802faa44C()F1802faa44C",
    R"F1802faa44D()F1802faa44D",
    R"F1802faa44T()F1802faa44T",
    R"F1802faa44F(10: return 0;)F1802faa44F",
    R"F1802faa44U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faa44U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faa44() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faa44", "FUN_1802faa44");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 55de42f564ab748512be244731298a6f765c8a62525fdca5ce5bbd588d8cfdf1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802faa44;
}

// 0x1802faa62 FUN_1802faa62
// source: re/dump/decompile/0x1802faa62_FUN_1802faa62.c
// size: 29 bytes; thunk: false
// body sha256: 33c23d1de6abd26a15a4538129d4a8d50adea6ce48a4fc1afa82824ae927ce4c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faa62{
    "0x1802faa62",
    "FUN_1802faa62",
    R"F1802faa62S(undefined FUN_1802faa62())F1802faa62S",
    R"B1802faa62(// 0x1802faa62  FUN_1802faa62
// size=29 thunk=false
// signature: undefined FUN_1802faa62()
// status: ok


undefined8 FUN_1802faa62(void)

{
  return 0;
}


)B1802faa62",
    "33c23d1de6abd26a15a4538129d4a8d50adea6ce48a4fc1afa82824ae927ce4c",
    R"F1802faa62C()F1802faa62C",
    R"F1802faa62D()F1802faa62D",
    R"F1802faa62T()F1802faa62T",
    R"F1802faa62F(10: return 0;)F1802faa62F",
    R"F1802faa62U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faa62U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faa62() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faa62", "FUN_1802faa62");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 33c23d1de6abd26a15a4538129d4a8d50adea6ce48a4fc1afa82824ae927ce4c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802faa62;
}

// 0x1802faac4 FUN_1802faac4
// source: re/dump/decompile/0x1802faac4_FUN_1802faac4.c
// size: 29 bytes; thunk: false
// body sha256: 0220a88fd16a10a2914cb006410bca2e5e22947fe2736343896b1410f1b0cef4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faac4{
    "0x1802faac4",
    "FUN_1802faac4",
    R"F1802faac4S(undefined FUN_1802faac4())F1802faac4S",
    R"B1802faac4(// 0x1802faac4  FUN_1802faac4
// size=29 thunk=false
// signature: undefined FUN_1802faac4()
// status: ok


undefined8 FUN_1802faac4(void)

{
  return 0;
}


)B1802faac4",
    "0220a88fd16a10a2914cb006410bca2e5e22947fe2736343896b1410f1b0cef4",
    R"F1802faac4C()F1802faac4C",
    R"F1802faac4D()F1802faac4D",
    R"F1802faac4T()F1802faac4T",
    R"F1802faac4F(10: return 0;)F1802faac4F",
    R"F1802faac4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faac4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faac4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faac4", "FUN_1802faac4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0220a88fd16a10a2914cb006410bca2e5e22947fe2736343896b1410f1b0cef4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802faac4;
}

// 0x1802faae2 FUN_1802faae2
// source: re/dump/decompile/0x1802faae2_FUN_1802faae2.c
// size: 29 bytes; thunk: false
// body sha256: e18f8be97a9c865a8f1f678999ad81d6ff74531c4bf40aff0a85dacbd794e4bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faae2{
    "0x1802faae2",
    "FUN_1802faae2",
    R"F1802faae2S(undefined FUN_1802faae2())F1802faae2S",
    R"B1802faae2(// 0x1802faae2  FUN_1802faae2
// size=29 thunk=false
// signature: undefined FUN_1802faae2()
// status: ok


undefined8 FUN_1802faae2(void)

{
  return 0;
}


)B1802faae2",
    "e18f8be97a9c865a8f1f678999ad81d6ff74531c4bf40aff0a85dacbd794e4bd",
    R"F1802faae2C()F1802faae2C",
    R"F1802faae2D()F1802faae2D",
    R"F1802faae2T()F1802faae2T",
    R"F1802faae2F(10: return 0;)F1802faae2F",
    R"F1802faae2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faae2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faae2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faae2", "FUN_1802faae2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e18f8be97a9c865a8f1f678999ad81d6ff74531c4bf40aff0a85dacbd794e4bd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802faae2;
}

// 0x1802fab00 FUN_1802fab00
// source: re/dump/decompile/0x1802fab00_FUN_1802fab00.c
// size: 61 bytes; thunk: false
// body sha256: 36d798b8cdfd58f403d58b8efedef05070cdf80b4dda2312a1e68d122d8bee75
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fab00{
    "0x1802fab00",
    "FUN_1802fab00",
    R"F1802fab00S(undefined FUN_1802fab00())F1802fab00S",
    R"B1802fab00(// 0x1802fab00  FUN_1802fab00
// size=61 thunk=false
// signature: undefined FUN_1802fab00()
// status: ok


undefined8 FUN_1802fab00(void)

{
  DAT_1803ff798 = DAT_1803ff798 + 1;
  if (DAT_1803ff798 < 4) {
    FUN_180014410("[SAFE] StartPrediction CRASHED #%d\n");
  }
  return 0;
}


)B1802fab00",
    "36d798b8cdfd58f403d58b8efedef05070cdf80b4dda2312a1e68d122d8bee75",
    R"F1802fab00C(FUN_180014410)F1802fab00C",
    R"F1802fab00D(DAT_1803ff798)F1802fab00D",
    R"F1802fab00T("[SAFE] StartPrediction CRASHED #%d\\n")F1802fab00T",
    R"F1802fab00F(11: if (DAT_1803ff798 < 4) {
14: return 0;)F1802fab00F",
    R"F1802fab00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff798.)F1802fab00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fab00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fab00", "FUN_1802fab00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff798.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] StartPrediction CRASHED #%d\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1803ff798", static_cast<const void*>(&image::DAT_1803ff798));
    trace.string_literal("[SAFE] StartPrediction CRASHED #%d\\n");
    // body sha256: 36d798b8cdfd58f403d58b8efedef05070cdf80b4dda2312a1e68d122d8bee75
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803ff798 = DAT_1803ff798 + 1;");
            if (trace.checked_condition("if (DAT_1803ff798 < 4)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff798 < 4); })) {
                trace.statement("FUN_180014410(\"[SAFE] StartPrediction CRASHED #%d\\n\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fab00;
}

// 0x1802fab3e FUN_1802fab3e
// source: re/dump/decompile/0x1802fab3e_FUN_1802fab3e.c
// size: 41 bytes; thunk: false
// body sha256: 97aea2f890391a94686e7b0dd07f0222680a72983f3ef9a06b27eccf7fe87865
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fab3e{
    "0x1802fab3e",
    "FUN_1802fab3e",
    R"F1802fab3eS(undefined FUN_1802fab3e())F1802fab3eS",
    R"B1802fab3e(// 0x1802fab3e  FUN_1802fab3e
// size=41 thunk=false
// signature: undefined FUN_1802fab3e()
// status: ok


void FUN_1802fab3e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x108);
  }
  return;
}


)B1802fab3e",
    "97aea2f890391a94686e7b0dd07f0222680a72983f3ef9a06b27eccf7fe87865",
    R"F1802fab3eC(FUN_18001bc60)F1802fab3eC",
    R"F1802fab3eD()F1802fab3eD",
    R"F1802fab3eT()F1802fab3eT",
    R"F1802fab3eF(10: if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
14: return;)F1802fab3eF",
    R"F1802fab3eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fab3eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fab3e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fab3e", "FUN_1802fab3e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 0x108);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 97aea2f890391a94686e7b0dd07f0222680a72983f3ef9a06b27eccf7fe87865
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x60) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x60, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;");
                trace.statement("FUN_18001bc60(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fab3e;
}

// 0x1802fab67 FUN_1802fab67
// source: re/dump/decompile/0x1802fab67_FUN_1802fab67.c
// size: 41 bytes; thunk: false
// body sha256: 45e8f4bed3b74999484705dcbc71ebe68ef9abfb5ccc625e407842c849e2ac2e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fab67{
    "0x1802fab67",
    "FUN_1802fab67",
    R"F1802fab67S(undefined FUN_1802fab67())F1802fab67S",
    R"B1802fab67(// 0x1802fab67  FUN_1802fab67
// size=41 thunk=false
// signature: undefined FUN_1802fab67()
// status: ok


void FUN_1802fab67(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    FUN_18001bc60(param_2 + 200);
  }
  return;
}


)B1802fab67",
    "45e8f4bed3b74999484705dcbc71ebe68ef9abfb5ccc625e407842c849e2ac2e",
    R"F1802fab67C(FUN_18001bc60)F1802fab67C",
    R"F1802fab67D()F1802fab67D",
    R"F1802fab67T()F1802fab67T",
    R"F1802fab67F(10: if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
14: return;)F1802fab67F",
    R"F1802fab67U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fab67U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fab67() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fab67", "FUN_1802fab67");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18001bc60", param_2 + 200);
    trace.call_target("FUN_18001bc60", reinterpret_cast<const void*>(&image::FUN_18001bc60));
    // body sha256: 45e8f4bed3b74999484705dcbc71ebe68ef9abfb5ccc625e407842c849e2ac2e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x60) & 2) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x60, 0) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;");
                trace.statement("FUN_18001bc60(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fab67;
}

// 0x1802fab9c FUN_1802fab9c
// source: re/dump/decompile/0x1802fab9c_FUN_1802fab9c.c
// size: 89 bytes; thunk: false
// body sha256: 451f158536219450eef1a62edd453055667fba6d4209017ad1c72f4a52f437e1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fab9c{
    "0x1802fab9c",
    "FUN_1802fab9c",
    R"F1802fab9cS(undefined FUN_1802fab9c())F1802fab9cS",
    R"B1802fab9c(// 0x1802fab9c  FUN_1802fab9c
// size=89 thunk=false
// signature: undefined FUN_1802fab9c()
// status: ok


undefined8 FUN_1802fab9c(undefined8 param_1,longlong param_2)

{
  DAT_1804260e0 = DAT_1804260e0 + 1;
  if (DAT_1804260e0 < 0xb) {
    *(longlong *)(param_2 + 0x98) = DAT_1803fcc70 - DAT_1803fcc68 >> 3;
    FUN_180014410("[SAFE] PredCM crash feat#%d/%d\n",*(undefined4 *)(param_2 + 0x70));
  }
  return 0;
}


)B1802fab9c",
    "451f158536219450eef1a62edd453055667fba6d4209017ad1c72f4a52f437e1",
    R"F1802fab9cC(FUN_180014410)F1802fab9cC",
    R"F1802fab9cD(DAT_1803fcc68
DAT_1803fcc70
DAT_1804260e0)F1802fab9cD",
    R"F1802fab9cT("[SAFE] PredCM crash feat#%d/%d\\n")F1802fab9cT",
    R"F1802fab9cF(11: if (DAT_1804260e0 < 0xb) {
15: return 0;)F1802fab9cF",
    R"F1802fab9cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc68.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc70.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804260e0.)F1802fab9cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fab9c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fab9c", "FUN_1802fab9c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc68.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc70.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804260e0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] PredCM crash feat#%d/%d\n", load_at<std::uint32_t>(param_2 + 0x70, 0));
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1803fcc68", static_cast<const void*>(&image::DAT_1803fcc68));
    trace.data_ref("DAT_1803fcc70", static_cast<const void*>(&image::DAT_1803fcc70));
    trace.data_ref("DAT_1804260e0", static_cast<const void*>(&image::DAT_1804260e0));
    trace.string_literal("[SAFE] PredCM crash feat#%d/%d\\n");
    // body sha256: 451f158536219450eef1a62edd453055667fba6d4209017ad1c72f4a52f437e1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1804260e0 = DAT_1804260e0 + 1;");
            if (trace.checked_condition("if (DAT_1804260e0 < 0xb)", [&]() -> bool { return static_cast<bool>(image::DAT_1804260e0 < 0xb); })) {
                trace.statement("*(longlong *)(param_2 + 0x98) = DAT_1803fcc70 - DAT_1803fcc68 >> 3;");
                trace.statement("FUN_180014410(\"[SAFE] PredCM crash feat#%d/%d\\n\",*(undefined4 *)(param_2 + 0x70));");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fab9c;
}

// 0x1802fabf6 FUN_1802fabf6
// source: re/dump/decompile/0x1802fabf6_FUN_1802fabf6.c
// size: 29 bytes; thunk: false
// body sha256: da94d02e4b403a0d3c88d88d5cc4c335540e459679d5b1d728630217441aa8f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fabf6{
    "0x1802fabf6",
    "FUN_1802fabf6",
    R"F1802fabf6S(undefined FUN_1802fabf6())F1802fabf6S",
    R"B1802fabf6(// 0x1802fabf6  FUN_1802fabf6
// size=29 thunk=false
// signature: undefined FUN_1802fabf6()
// status: ok


undefined8 FUN_1802fabf6(void)

{
  return 0;
}


)B1802fabf6",
    "da94d02e4b403a0d3c88d88d5cc4c335540e459679d5b1d728630217441aa8f6",
    R"F1802fabf6C()F1802fabf6C",
    R"F1802fabf6D()F1802fabf6D",
    R"F1802fabf6T()F1802fabf6T",
    R"F1802fabf6F(10: return 0;)F1802fabf6F",
    R"F1802fabf6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fabf6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fabf6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fabf6", "FUN_1802fabf6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: da94d02e4b403a0d3c88d88d5cc4c335540e459679d5b1d728630217441aa8f6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fabf6;
}

// 0x1802fac14 FUN_1802fac14
// source: re/dump/decompile/0x1802fac14_FUN_1802fac14.c
// size: 29 bytes; thunk: false
// body sha256: 4f396d18a2389321d26577d563b7a9d1de313047f2ccff4891ee518822640f7a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fac14{
    "0x1802fac14",
    "FUN_1802fac14",
    R"F1802fac14S(undefined FUN_1802fac14())F1802fac14S",
    R"B1802fac14(// 0x1802fac14  FUN_1802fac14
// size=29 thunk=false
// signature: undefined FUN_1802fac14()
// status: ok


undefined8 FUN_1802fac14(void)

{
  return 0;
}


)B1802fac14",
    "4f396d18a2389321d26577d563b7a9d1de313047f2ccff4891ee518822640f7a",
    R"F1802fac14C()F1802fac14C",
    R"F1802fac14D()F1802fac14D",
    R"F1802fac14T()F1802fac14T",
    R"F1802fac14F(10: return 0;)F1802fac14F",
    R"F1802fac14U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fac14U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fac14() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fac14", "FUN_1802fac14");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4f396d18a2389321d26577d563b7a9d1de313047f2ccff4891ee518822640f7a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fac14;
}

// 0x1802fac32 FUN_1802fac32
// source: re/dump/decompile/0x1802fac32_FUN_1802fac32.c
// size: 68 bytes; thunk: false
// body sha256: 523ceab98c4b3b67f564ec34ad624931776473ace22fd3faf9b1f17b797ad757
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fac32{
    "0x1802fac32",
    "FUN_1802fac32",
    R"F1802fac32S(undefined FUN_1802fac32())F1802fac32S",
    R"B1802fac32(// 0x1802fac32  FUN_1802fac32
// size=68 thunk=false
// signature: undefined FUN_1802fac32()
// status: ok


undefined8 FUN_1802fac32(void)

{
  DAT_1803ffcf0 = DAT_1803ffcf0 + 1;
  if (DAT_1803ffcf0 < 0xb) {
    FUN_180014410("[SAFE] CreateMove feature exception #%d in %s\n",DAT_1803ffcf0,
                  "Hooks::CreateMove");
  }
  return 0;
}


)B1802fac32",
    "523ceab98c4b3b67f564ec34ad624931776473ace22fd3faf9b1f17b797ad757",
    R"F1802fac32C(FUN_180014410)F1802fac32C",
    R"F1802fac32D(DAT_1803ffcf0)F1802fac32D",
    R"F1802fac32T("Hooks::CreateMove"
"[SAFE] CreateMove feature exception #%d in %s\\n")F1802fac32T",
    R"F1802fac32F(11: if (DAT_1803ffcf0 < 0xb) {
15: return 0;)F1802fac32F",
    R"F1802fac32U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ffcf0.)F1802fac32U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fac32() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fac32", "FUN_1802fac32");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ffcf0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1803ffcf0", static_cast<const void*>(&image::DAT_1803ffcf0));
    trace.string_literal("Hooks::CreateMove");
    trace.string_literal("[SAFE] CreateMove feature exception #%d in %s\\n");
    // body sha256: 523ceab98c4b3b67f564ec34ad624931776473ace22fd3faf9b1f17b797ad757
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803ffcf0 = DAT_1803ffcf0 + 1;");
            if (trace.checked_condition("if (DAT_1803ffcf0 < 0xb)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ffcf0 < 0xb); })) {
                trace.statement("FUN_180014410(\"[SAFE] CreateMove feature exception #%d in %s\\n\",DAT_1803ffcf0,");
                trace.statement("\"Hooks::CreateMove\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fac32;
}

// 0x1802fac77 FUN_1802fac77
// source: re/dump/decompile/0x1802fac77_FUN_1802fac77.c
// size: 29 bytes; thunk: false
// body sha256: 5f962b98bd573fbb17013ccb8cf045de2afc47ff1746668b3c1dfbd8976bec20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fac77{
    "0x1802fac77",
    "FUN_1802fac77",
    R"F1802fac77S(undefined FUN_1802fac77())F1802fac77S",
    R"B1802fac77(// 0x1802fac77  FUN_1802fac77
// size=29 thunk=false
// signature: undefined FUN_1802fac77()
// status: ok


undefined8 FUN_1802fac77(void)

{
  return 0;
}


)B1802fac77",
    "5f962b98bd573fbb17013ccb8cf045de2afc47ff1746668b3c1dfbd8976bec20",
    R"F1802fac77C()F1802fac77C",
    R"F1802fac77D()F1802fac77D",
    R"F1802fac77T()F1802fac77T",
    R"F1802fac77F(10: return 0;)F1802fac77F",
    R"F1802fac77U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fac77U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fac77() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fac77", "FUN_1802fac77");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5f962b98bd573fbb17013ccb8cf045de2afc47ff1746668b3c1dfbd8976bec20
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fac77;
}

// 0x1802fac95 FUN_1802fac95
// source: re/dump/decompile/0x1802fac95_FUN_1802fac95.c
// size: 29 bytes; thunk: false
// body sha256: fc3028ddb5d27f8369b3de4376fb99a839c177f470d4756fff9c013f46eb236c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fac95{
    "0x1802fac95",
    "FUN_1802fac95",
    R"F1802fac95S(undefined FUN_1802fac95())F1802fac95S",
    R"B1802fac95(// 0x1802fac95  FUN_1802fac95
// size=29 thunk=false
// signature: undefined FUN_1802fac95()
// status: ok


undefined8 FUN_1802fac95(void)

{
  return 0;
}


)B1802fac95",
    "fc3028ddb5d27f8369b3de4376fb99a839c177f470d4756fff9c013f46eb236c",
    R"F1802fac95C()F1802fac95C",
    R"F1802fac95D()F1802fac95D",
    R"F1802fac95T()F1802fac95T",
    R"F1802fac95F(10: return 0;)F1802fac95F",
    R"F1802fac95U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fac95U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fac95() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fac95", "FUN_1802fac95");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fc3028ddb5d27f8369b3de4376fb99a839c177f470d4756fff9c013f46eb236c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fac95;
}

// 0x1802facb3 FUN_1802facb3
// source: re/dump/decompile/0x1802facb3_FUN_1802facb3.c
// size: 29 bytes; thunk: false
// body sha256: 46c91231a788edf59983425aa5db12221ecd26523b3bac33e5d81e067796ff8b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802facb3{
    "0x1802facb3",
    "FUN_1802facb3",
    R"F1802facb3S(undefined FUN_1802facb3())F1802facb3S",
    R"B1802facb3(// 0x1802facb3  FUN_1802facb3
// size=29 thunk=false
// signature: undefined FUN_1802facb3()
// status: ok


undefined8 FUN_1802facb3(void)

{
  return 0;
}


)B1802facb3",
    "46c91231a788edf59983425aa5db12221ecd26523b3bac33e5d81e067796ff8b",
    R"F1802facb3C()F1802facb3C",
    R"F1802facb3D()F1802facb3D",
    R"F1802facb3T()F1802facb3T",
    R"F1802facb3F(10: return 0;)F1802facb3F",
    R"F1802facb3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802facb3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802facb3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802facb3", "FUN_1802facb3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 46c91231a788edf59983425aa5db12221ecd26523b3bac33e5d81e067796ff8b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802facb3;
}

// 0x1802facd1 FUN_1802facd1
// source: re/dump/decompile/0x1802facd1_FUN_1802facd1.c
// size: 29 bytes; thunk: false
// body sha256: 0580edc2819537366c163adc518de1866e68db93c8b988def502547634de68f5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802facd1{
    "0x1802facd1",
    "FUN_1802facd1",
    R"F1802facd1S(undefined FUN_1802facd1())F1802facd1S",
    R"B1802facd1(// 0x1802facd1  FUN_1802facd1
// size=29 thunk=false
// signature: undefined FUN_1802facd1()
// status: ok


undefined8 FUN_1802facd1(void)

{
  return 0;
}


)B1802facd1",
    "0580edc2819537366c163adc518de1866e68db93c8b988def502547634de68f5",
    R"F1802facd1C()F1802facd1C",
    R"F1802facd1D()F1802facd1D",
    R"F1802facd1T()F1802facd1T",
    R"F1802facd1F(10: return 0;)F1802facd1F",
    R"F1802facd1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802facd1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802facd1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802facd1", "FUN_1802facd1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0580edc2819537366c163adc518de1866e68db93c8b988def502547634de68f5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802facd1;
}

// 0x1802facef FUN_1802facef
// source: re/dump/decompile/0x1802facef_FUN_1802facef.c
// size: 29 bytes; thunk: false
// body sha256: 0b3c46f772a116e691a822773698d2e55083fdcd41150003d17e1bb363bc95dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802facef{
    "0x1802facef",
    "FUN_1802facef",
    R"F1802facefS(undefined FUN_1802facef())F1802facefS",
    R"B1802facef(// 0x1802facef  FUN_1802facef
// size=29 thunk=false
// signature: undefined FUN_1802facef()
// status: ok


undefined8 FUN_1802facef(void)

{
  return 0;
}


)B1802facef",
    "0b3c46f772a116e691a822773698d2e55083fdcd41150003d17e1bb363bc95dd",
    R"F1802facefC()F1802facefC",
    R"F1802facefD()F1802facefD",
    R"F1802facefT()F1802facefT",
    R"F1802facefF(10: return 0;)F1802facefF",
    R"F1802facefU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802facefU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802facef() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802facef", "FUN_1802facef");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0b3c46f772a116e691a822773698d2e55083fdcd41150003d17e1bb363bc95dd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802facef;
}

// 0x1802fad0d FUN_1802fad0d
// source: re/dump/decompile/0x1802fad0d_FUN_1802fad0d.c
// size: 29 bytes; thunk: false
// body sha256: e52a190e1faa13d16f0478c576bc5f0ab01337f55eb687092a368f0272251d90
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fad0d{
    "0x1802fad0d",
    "FUN_1802fad0d",
    R"F1802fad0dS(undefined FUN_1802fad0d())F1802fad0dS",
    R"B1802fad0d(// 0x1802fad0d  FUN_1802fad0d
// size=29 thunk=false
// signature: undefined FUN_1802fad0d()
// status: ok


undefined8 FUN_1802fad0d(void)

{
  return 0;
}


)B1802fad0d",
    "e52a190e1faa13d16f0478c576bc5f0ab01337f55eb687092a368f0272251d90",
    R"F1802fad0dC()F1802fad0dC",
    R"F1802fad0dD()F1802fad0dD",
    R"F1802fad0dT()F1802fad0dT",
    R"F1802fad0dF(10: return 0;)F1802fad0dF",
    R"F1802fad0dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fad0dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fad0d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fad0d", "FUN_1802fad0d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e52a190e1faa13d16f0478c576bc5f0ab01337f55eb687092a368f0272251d90
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fad0d;
}

// 0x1802fad30 FUN_1802fad30
// source: re/dump/decompile/0x1802fad30_FUN_1802fad30.c
// size: 28 bytes; thunk: false
// body sha256: 533fd95849d30748ea537199e7996bc93d3ffeced52d9407f81e4277d4a00dca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fad30{
    "0x1802fad30",
    "FUN_1802fad30",
    R"F1802fad30S(undefined FUN_1802fad30())F1802fad30S",
    R"B1802fad30(// 0x1802fad30  FUN_1802fad30
// size=28 thunk=false
// signature: undefined FUN_1802fad30()
// status: ok


void FUN_1802fad30(undefined8 param_1)

{
  FUN_1801f14a0(param_1,"orgRenderView");
  return;
}


)B1802fad30",
    "533fd95849d30748ea537199e7996bc93d3ffeced52d9407f81e4277d4a00dca",
    R"F1802fad30C(FUN_1801f14a0)F1802fad30C",
    R"F1802fad30D()F1802fad30D",
    R"F1802fad30T("orgRenderView")F1802fad30T",
    R"F1802fad30F(11: return;)F1802fad30F",
    R"F1802fad30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fad30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fad30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fad30", "FUN_1802fad30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1801f14a0", param_1, "orgRenderView");
    trace.call_target("FUN_1801f14a0", reinterpret_cast<const void*>(&image::FUN_1801f14a0));
    trace.string_literal("orgRenderView");
    // body sha256: 533fd95849d30748ea537199e7996bc93d3ffeced52d9407f81e4277d4a00dca
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1801f14a0(param_1,\"orgRenderView\");");
            trace.statement("return;");
        }
    return kFunction_0x1802fad30;
}

// 0x1802fad50 FUN_1802fad50
// source: re/dump/decompile/0x1802fad50_FUN_1802fad50.c
// size: 28 bytes; thunk: false
// body sha256: 757e89d70453781ab44fe0a1a95ef662da1db6f9a48c486af060a3bc1a0a0abf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fad50{
    "0x1802fad50",
    "FUN_1802fad50",
    R"F1802fad50S(undefined FUN_1802fad50())F1802fad50S",
    R"B1802fad50(// 0x1802fad50  FUN_1802fad50
// size=28 thunk=false
// signature: undefined FUN_1802fad50()
// status: ok


void FUN_1802fad50(undefined8 param_1)

{
  FUN_1801f14a0(param_1,"orgViewRender");
  return;
}


)B1802fad50",
    "757e89d70453781ab44fe0a1a95ef662da1db6f9a48c486af060a3bc1a0a0abf",
    R"F1802fad50C(FUN_1801f14a0)F1802fad50C",
    R"F1802fad50D()F1802fad50D",
    R"F1802fad50T("orgViewRender")F1802fad50T",
    R"F1802fad50F(11: return;)F1802fad50F",
    R"F1802fad50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fad50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fad50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fad50", "FUN_1802fad50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1801f14a0", param_1, "orgViewRender");
    trace.call_target("FUN_1801f14a0", reinterpret_cast<const void*>(&image::FUN_1801f14a0));
    trace.string_literal("orgViewRender");
    // body sha256: 757e89d70453781ab44fe0a1a95ef662da1db6f9a48c486af060a3bc1a0a0abf
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1801f14a0(param_1,\"orgViewRender\");");
            trace.statement("return;");
        }
    return kFunction_0x1802fad50;
}

// 0x1802fade8 FUN_1802fade8
// source: re/dump/decompile/0x1802fade8_FUN_1802fade8.c
// size: 61 bytes; thunk: false
// body sha256: 33a3f0ea1f70a1eee2a004d663c40e4a0e3b0eeb2305e75c289763f992efbf5f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fade8{
    "0x1802fade8",
    "FUN_1802fade8",
    R"F1802fade8S(undefined FUN_1802fade8())F1802fade8S",
    R"B1802fade8(// 0x1802fade8  FUN_1802fade8
// size=61 thunk=false
// signature: undefined FUN_1802fade8()
// status: ok


undefined8 FUN_1802fade8(void)

{
  DAT_1804253e8 = DAT_1804253e8 + 1;
  if (DAT_1804253e8 < 6) {
    FUN_180014410("[SAFE] streamproof pass1 exception #%d\n");
  }
  return 0;
}


)B1802fade8",
    "33a3f0ea1f70a1eee2a004d663c40e4a0e3b0eeb2305e75c289763f992efbf5f",
    R"F1802fade8C(FUN_180014410)F1802fade8C",
    R"F1802fade8D(DAT_1804253e8)F1802fade8D",
    R"F1802fade8T("[SAFE] streamproof pass1 exception #%d\\n")F1802fade8T",
    R"F1802fade8F(11: if (DAT_1804253e8 < 6) {
14: return 0;)F1802fade8F",
    R"F1802fade8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804253e8.)F1802fade8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fade8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fade8", "FUN_1802fade8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804253e8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] streamproof pass1 exception #%d\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1804253e8", static_cast<const void*>(&image::DAT_1804253e8));
    trace.string_literal("[SAFE] streamproof pass1 exception #%d\\n");
    // body sha256: 33a3f0ea1f70a1eee2a004d663c40e4a0e3b0eeb2305e75c289763f992efbf5f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1804253e8 = DAT_1804253e8 + 1;");
            if (trace.checked_condition("if (DAT_1804253e8 < 6)", [&]() -> bool { return static_cast<bool>(image::DAT_1804253e8 < 6); })) {
                trace.statement("FUN_180014410(\"[SAFE] streamproof pass1 exception #%d\\n\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fade8;
}

// 0x1802fae26 FUN_1802fae26
// source: re/dump/decompile/0x1802fae26_FUN_1802fae26.c
// size: 61 bytes; thunk: false
// body sha256: ccfc7775779a460aeec3a2f4dd72630d7b025427bdfdf638e5dc0bb4af41cb47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fae26{
    "0x1802fae26",
    "FUN_1802fae26",
    R"F1802fae26S(undefined FUN_1802fae26())F1802fae26S",
    R"B1802fae26(// 0x1802fae26  FUN_1802fae26
// size=61 thunk=false
// signature: undefined FUN_1802fae26()
// status: ok


undefined8 FUN_1802fae26(void)

{
  DAT_1803fd0d8 = DAT_1803fd0d8 + 1;
  if (DAT_1803fd0d8 < 6) {
    FUN_180014410("[SAFE] streamproof state restore exception #%d\n");
  }
  return 0;
}


)B1802fae26",
    "ccfc7775779a460aeec3a2f4dd72630d7b025427bdfdf638e5dc0bb4af41cb47",
    R"F1802fae26C(FUN_180014410)F1802fae26C",
    R"F1802fae26D(DAT_1803fd0d8)F1802fae26D",
    R"F1802fae26T("[SAFE] streamproof state restore exception #%d\\n")F1802fae26T",
    R"F1802fae26F(11: if (DAT_1803fd0d8 < 6) {
14: return 0;)F1802fae26F",
    R"F1802fae26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fd0d8.)F1802fae26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fae26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fae26", "FUN_1802fae26");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fd0d8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] streamproof state restore exception #%d\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1803fd0d8", static_cast<const void*>(&image::DAT_1803fd0d8));
    trace.string_literal("[SAFE] streamproof state restore exception #%d\\n");
    // body sha256: ccfc7775779a460aeec3a2f4dd72630d7b025427bdfdf638e5dc0bb4af41cb47
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1803fd0d8 = DAT_1803fd0d8 + 1;");
            if (trace.checked_condition("if (DAT_1803fd0d8 < 6)", [&]() -> bool { return static_cast<bool>(image::DAT_1803fd0d8 < 6); })) {
                trace.statement("FUN_180014410(\"[SAFE] streamproof state restore exception #%d\\n\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fae26;
}

// 0x1802fae70 FUN_1802fae70
// source: re/dump/decompile/0x1802fae70_FUN_1802fae70.c
// size: 29 bytes; thunk: false
// body sha256: 3ea08cf5731f017d8a9c18ae3c8f12f03dfde0bec11a1485210bdee7357d8c75
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fae70{
    "0x1802fae70",
    "FUN_1802fae70",
    R"F1802fae70S(undefined FUN_1802fae70())F1802fae70S",
    R"B1802fae70(// 0x1802fae70  FUN_1802fae70
// size=29 thunk=false
// signature: undefined FUN_1802fae70()
// status: ok


undefined8 FUN_1802fae70(void)

{
  return 0;
}


)B1802fae70",
    "3ea08cf5731f017d8a9c18ae3c8f12f03dfde0bec11a1485210bdee7357d8c75",
    R"F1802fae70C()F1802fae70C",
    R"F1802fae70D()F1802fae70D",
    R"F1802fae70T()F1802fae70T",
    R"F1802fae70F(10: return 0;)F1802fae70F",
    R"F1802fae70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fae70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fae70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fae70", "FUN_1802fae70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3ea08cf5731f017d8a9c18ae3c8f12f03dfde0bec11a1485210bdee7357d8c75
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fae70;
}

// 0x1802fae8e FUN_1802fae8e
// source: re/dump/decompile/0x1802fae8e_FUN_1802fae8e.c
// size: 68 bytes; thunk: false
// body sha256: 8a5a55861db4c25b962ca7e4d4c327a3b629d7cb36ffdfc65c1d4e5528befe20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fae8e{
    "0x1802fae8e",
    "FUN_1802fae8e",
    R"F1802fae8eS(undefined FUN_1802fae8e())F1802fae8eS",
    R"B1802fae8e(// 0x1802fae8e  FUN_1802fae8e
// size=68 thunk=false
// signature: undefined FUN_1802fae8e()
// status: ok


undefined8 FUN_1802fae8e(void)

{
  DAT_180423ad8 = DAT_180423ad8 + 1;
  if (DAT_180423ad8 < 0xb) {
    FUN_180014410("[SAFE] RenderView feature exception #%d in %s\n",DAT_180423ad8,
                  "Hooks::RenderView");
  }
  return 0;
}


)B1802fae8e",
    "8a5a55861db4c25b962ca7e4d4c327a3b629d7cb36ffdfc65c1d4e5528befe20",
    R"F1802fae8eC(FUN_180014410)F1802fae8eC",
    R"F1802fae8eD(DAT_180423ad8)F1802fae8eD",
    R"F1802fae8eT("Hooks::RenderView"
"[SAFE] RenderView feature exception #%d in %s\\n")F1802fae8eT",
    R"F1802fae8eF(11: if (DAT_180423ad8 < 0xb) {
15: return 0;)F1802fae8eF",
    R"F1802fae8eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423ad8.)F1802fae8eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fae8e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fae8e", "FUN_1802fae8e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423ad8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_180423ad8", static_cast<const void*>(&image::DAT_180423ad8));
    trace.string_literal("Hooks::RenderView");
    trace.string_literal("[SAFE] RenderView feature exception #%d in %s\\n");
    // body sha256: 8a5a55861db4c25b962ca7e4d4c327a3b629d7cb36ffdfc65c1d4e5528befe20
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180423ad8 = DAT_180423ad8 + 1;");
            if (trace.checked_condition("if (DAT_180423ad8 < 0xb)", [&]() -> bool { return static_cast<bool>(image::DAT_180423ad8 < 0xb); })) {
                trace.statement("FUN_180014410(\"[SAFE] RenderView feature exception #%d in %s\\n\",DAT_180423ad8,");
                trace.statement("\"Hooks::RenderView\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fae8e;
}

// 0x1802faedf FUN_1802faedf
// source: re/dump/decompile/0x1802faedf_FUN_1802faedf.c
// size: 29 bytes; thunk: false
// body sha256: 1602ef00283b62e8de22b1c21a492e7351eebc91dd158e0dc5eec3d855d2e060
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faedf{
    "0x1802faedf",
    "FUN_1802faedf",
    R"F1802faedfS(undefined FUN_1802faedf())F1802faedfS",
    R"B1802faedf(// 0x1802faedf  FUN_1802faedf
// size=29 thunk=false
// signature: undefined FUN_1802faedf()
// status: ok


undefined8 FUN_1802faedf(void)

{
  return 0;
}


)B1802faedf",
    "1602ef00283b62e8de22b1c21a492e7351eebc91dd158e0dc5eec3d855d2e060",
    R"F1802faedfC()F1802faedfC",
    R"F1802faedfD()F1802faedfD",
    R"F1802faedfT()F1802faedfT",
    R"F1802faedfF(10: return 0;)F1802faedfF",
    R"F1802faedfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faedfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faedf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faedf", "FUN_1802faedf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1602ef00283b62e8de22b1c21a492e7351eebc91dd158e0dc5eec3d855d2e060
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802faedf;
}

// 0x1802faf10 FUN_1802faf10
// source: re/dump/decompile/0x1802faf10_FUN_1802faf10.c
// size: 36 bytes; thunk: false
// body sha256: 7e07c264995765fb982af32aa035517d20934376dd067e4ca46d4cf4cc3b804d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faf10{
    "0x1802faf10",
    "FUN_1802faf10",
    R"F1802faf10S(undefined FUN_1802faf10())F1802faf10S",
    R"B1802faf10(// 0x1802faf10  FUN_1802faf10
// size=36 thunk=false
// signature: undefined FUN_1802faf10()
// status: ok


undefined8 FUN_1802faf10(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 0;
}


)B1802faf10",
    "7e07c264995765fb982af32aa035517d20934376dd067e4ca46d4cf4cc3b804d",
    R"F1802faf10C()F1802faf10C",
    R"F1802faf10D()F1802faf10D",
    R"F1802faf10T()F1802faf10T",
    R"F1802faf10F(11: return 0;)F1802faf10F",
    R"F1802faf10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faf10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faf10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faf10", "FUN_1802faf10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7e07c264995765fb982af32aa035517d20934376dd067e4ca46d4cf4cc3b804d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined4 *)(param_2 + 0x3c) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802faf10;
}

// 0x1802faf35 FUN_1802faf35
// source: re/dump/decompile/0x1802faf35_FUN_1802faf35.c
// size: 33 bytes; thunk: false
// body sha256: efc2fc3b9025e44910d1ce235bc15be8d6e0ff9ecd46e26cbe1b367d88760e79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faf35{
    "0x1802faf35",
    "FUN_1802faf35",
    R"F1802faf35S(undefined FUN_1802faf35())F1802faf35S",
    R"B1802faf35(// 0x1802faf35  FUN_1802faf35
// size=33 thunk=false
// signature: undefined FUN_1802faf35()
// status: ok


undefined8 FUN_1802faf35(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x31) = 0;
  return 0;
}


)B1802faf35",
    "efc2fc3b9025e44910d1ce235bc15be8d6e0ff9ecd46e26cbe1b367d88760e79",
    R"F1802faf35C()F1802faf35C",
    R"F1802faf35D()F1802faf35D",
    R"F1802faf35T()F1802faf35T",
    R"F1802faf35F(11: return 0;)F1802faf35F",
    R"F1802faf35U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802faf35U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faf35() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faf35", "FUN_1802faf35");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: efc2fc3b9025e44910d1ce235bc15be8d6e0ff9ecd46e26cbe1b367d88760e79
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined1 *)(param_2 + 0x31) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802faf35;
}

// 0x1802faf60 FUN_1802faf60
// source: re/dump/decompile/0x1802faf60_FUN_1802faf60.c
// size: 319 bytes; thunk: false
// body sha256: d6ab1a75e93e2e072e37284d5bddc4e393df6e1dfa063aeede99228a17a1b38c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802faf60{
    "0x1802faf60",
    "FUN_1802faf60",
    R"F1802faf60S(undefined FUN_1802faf60())F1802faf60S",
    R"B1802faf60(// 0x1802faf60  FUN_1802faf60
// size=319 thunk=false
// signature: undefined FUN_1802faf60()
// status: ok


void FUN_1802faf60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if ((*(char *)(param_2 + 0x40) != '\0') && (DAT_1803fa598 != (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
  }
  plVar3 = DAT_1803f9280;
  if ((*(char *)(param_2 + 0x41) != '\0') && (DAT_1803f9280 != (longlong *)0x0)) {
    *(undefined4 *)(param_2 + 0xc0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xc4) = 0x3f800000;
    *(undefined4 *)(param_2 + 200) = 0x3f800000;
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2 + 0xc0);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
  }
  if ((*(char *)(param_2 + 0x42) != '\0') && (DAT_1803fa630 != (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);
  }
  uVar4 = (ulonglong)_tls_index;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8);
    lVar2 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xdb8);
    *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) = 0;
    *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xdb8) = 0;
    if (lVar2 != 0) {
      FUN_1801e95c0(lVar2,uVar1);
    }
    FUN_180114540(uVar1);
  }
  return;
}


)B1802faf60",
    "d6ab1a75e93e2e072e37284d5bddc4e393df6e1dfa063aeede99228a17a1b38c",
    R"F1802faf60C(FUN_180114540
FUN_1801e95c0)F1802faf60C",
    R"F1802faf60D(DAT_180380bb0
DAT_1803f9280
DAT_1803fa598
DAT_1803fa630)F1802faf60D",
    R"F1802faf60T()F1802faf60T",
    R"F1802faf60F(15: if ((*(char *)(param_2 + 0x40) != '\0') && (DAT_1803fa598 != (longlong *)0x0)) {
19: if ((*(char *)(param_2 + 0x41) != '\0') && (DAT_1803f9280 != (longlong *)0x0)) {
26: if ((*(char *)(param_2 + 0x42) != '\0') && (DAT_1803fa630 != (longlong *)0x0)) {
30: if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) != 0) {
35: if (lVar2 != 0) {
40: return;)F1802faf60F",
    R"F1802faf60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380bb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f9280.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa598.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa630.
TODO: resolve the indirect call in body 16: (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar3 + 0x30))(plVar3,param_2 + 0xc0);.
TODO: resolve the indirect call in body 24: (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);.
TODO: resolve the indirect call in body 27: (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);.)F1802faf60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802faf60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802faf60", "FUN_1802faf60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380bb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f9280.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa598.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa630.
    // TODO: resolve the indirect call in body 16: (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);.
    // TODO: resolve the indirect call in body 23: (**(code **)(*plVar3 + 0x30))(plVar3,param_2 + 0xc0);.
    // TODO: resolve the indirect call in body 24: (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);.
    // TODO: resolve the indirect call in body 27: (**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) != 0) [reason: pointer depth/pointee not proven]
    trace.call_arguments("FUN_1801e95c0", lVar2, uVar1);
    trace.call_arguments("FUN_180114540", uVar1);
    trace.call_target("FUN_180114540", reinterpret_cast<const void*>(&image::FUN_180114540));
    trace.call_target("FUN_1801e95c0", reinterpret_cast<const void*>(&image::FUN_1801e95c0));
    trace.data_ref("DAT_180380bb0", static_cast<const void*>(&image::DAT_180380bb0));
    trace.data_ref("DAT_1803f9280", static_cast<const void*>(&image::DAT_1803f9280));
    trace.data_ref("DAT_1803fa598", static_cast<const void*>(&image::DAT_1803fa598));
    trace.data_ref("DAT_1803fa630", static_cast<const void*>(&image::DAT_1803fa630));
    // body sha256: d6ab1a75e93e2e072e37284d5bddc4e393df6e1dfa063aeede99228a17a1b38c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("ulonglong uVar4;");
            if (trace.checked_condition("if ((*(char *)(param_2 + 0x40) != '\\0') && (DAT_1803fa598 != (longlong *)0x0))", [&]() -> bool { return static_cast<bool>((load_at<char>(param_2 + 0x40, 0) != '\0') && (load_at<void*>(&image::DAT_1803fa598, 0) != (longlong *)0x0)); })) {
                trace.statement("(**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);");
            }
            trace.statement("plVar3 = DAT_1803f9280;");
            if (trace.checked_condition("if ((*(char *)(param_2 + 0x41) != '\\0') && (DAT_1803f9280 != (longlong *)0x0))", [&]() -> bool { return static_cast<bool>((load_at<char>(param_2 + 0x41, 0) != '\0') && (load_at<void*>(&image::DAT_1803f9280, 0) != (longlong *)0x0)); })) {
                trace.statement("*(undefined4 *)(param_2 + 0xc0) = 0x3f800000;");
                trace.statement("*(undefined4 *)(param_2 + 0xc4) = 0x3f800000;");
                trace.statement("*(undefined4 *)(param_2 + 200) = 0x3f800000;");
                trace.statement("(**(code **)(*plVar3 + 0x30))(plVar3,param_2 + 0xc0);");
                trace.statement("(**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);");
            }
            if (trace.checked_condition("if ((*(char *)(param_2 + 0x42) != '\\0') && (DAT_1803fa630 != (longlong *)0x0))", [&]() -> bool { return static_cast<bool>((load_at<char>(param_2 + 0x42, 0) != '\0') && (load_at<void*>(&image::DAT_1803fa630, 0) != (longlong *)0x0)); })) {
                trace.statement("(**(code **)(*DAT_1803fa630 + 0x240))(DAT_1803fa630,0,1);");
            }
            trace.statement("uVar4 = (ulonglong)_tls_index;");
            if (trace.condition("if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) != 0)")) {
                trace.statement("uVar1 = *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8);");
                trace.statement("lVar2 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xdb8);");
                trace.statement("*(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xed8) = 0;");
                trace.statement("*(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xdb8) = 0;");
                if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                    trace.statement("FUN_1801e95c0(lVar2,uVar1);");
                }
                trace.statement("FUN_180114540(uVar1);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802faf60;
}

// 0x1802fb0b8 FUN_1802fb0b8
// source: re/dump/decompile/0x1802fb0b8_FUN_1802fb0b8.c
// size: 29 bytes; thunk: false
// body sha256: e534eae5a8bb867a58e3ed15c42f1e402d8cf13064f32e03362fca372c889f23
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb0b8{
    "0x1802fb0b8",
    "FUN_1802fb0b8",
    R"F1802fb0b8S(undefined FUN_1802fb0b8())F1802fb0b8S",
    R"B1802fb0b8(// 0x1802fb0b8  FUN_1802fb0b8
// size=29 thunk=false
// signature: undefined FUN_1802fb0b8()
// status: ok


undefined8 FUN_1802fb0b8(void)

{
  return 0;
}


)B1802fb0b8",
    "e534eae5a8bb867a58e3ed15c42f1e402d8cf13064f32e03362fca372c889f23",
    R"F1802fb0b8C()F1802fb0b8C",
    R"F1802fb0b8D()F1802fb0b8D",
    R"F1802fb0b8T()F1802fb0b8T",
    R"F1802fb0b8F(10: return 0;)F1802fb0b8F",
    R"F1802fb0b8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb0b8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb0b8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb0b8", "FUN_1802fb0b8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e534eae5a8bb867a58e3ed15c42f1e402d8cf13064f32e03362fca372c889f23
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb0b8;
}

// 0x1802fb0d6 FUN_1802fb0d6
// source: re/dump/decompile/0x1802fb0d6_FUN_1802fb0d6.c
// size: 29 bytes; thunk: false
// body sha256: c315402538483aa5e22c6a0f39c242add25ae9646beb3de72a364057a6f9cd7e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb0d6{
    "0x1802fb0d6",
    "FUN_1802fb0d6",
    R"F1802fb0d6S(undefined FUN_1802fb0d6())F1802fb0d6S",
    R"B1802fb0d6(// 0x1802fb0d6  FUN_1802fb0d6
// size=29 thunk=false
// signature: undefined FUN_1802fb0d6()
// status: ok


undefined8 FUN_1802fb0d6(void)

{
  return 0;
}


)B1802fb0d6",
    "c315402538483aa5e22c6a0f39c242add25ae9646beb3de72a364057a6f9cd7e",
    R"F1802fb0d6C()F1802fb0d6C",
    R"F1802fb0d6D()F1802fb0d6D",
    R"F1802fb0d6T()F1802fb0d6T",
    R"F1802fb0d6F(10: return 0;)F1802fb0d6F",
    R"F1802fb0d6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb0d6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb0d6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb0d6", "FUN_1802fb0d6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c315402538483aa5e22c6a0f39c242add25ae9646beb3de72a364057a6f9cd7e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb0d6;
}

// 0x1802fb100 FUN_1802fb100
// source: re/dump/decompile/0x1802fb100_FUN_1802fb100.c
// size: 61 bytes; thunk: false
// body sha256: 6686b789f8f54ccb9711c7132ffaa1fb958878b72dfcf231117decd322983037
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb100{
    "0x1802fb100",
    "FUN_1802fb100",
    R"F1802fb100S(undefined FUN_1802fb100())F1802fb100S",
    R"B1802fb100(// 0x1802fb100  FUN_1802fb100
// size=61 thunk=false
// signature: undefined FUN_1802fb100()
// status: ok


undefined8 FUN_1802fb100(void)

{
  DAT_1804257b0 = DAT_1804257b0 + 1;
  if (DAT_1804257b0 < 0xb) {
    FUN_180014410("[SAFE] script ui build exception #%d\n");
  }
  return 0;
}


)B1802fb100",
    "6686b789f8f54ccb9711c7132ffaa1fb958878b72dfcf231117decd322983037",
    R"F1802fb100C(FUN_180014410)F1802fb100C",
    R"F1802fb100D(DAT_1804257b0)F1802fb100D",
    R"F1802fb100T("[SAFE] script ui build exception #%d\\n")F1802fb100T",
    R"F1802fb100F(11: if (DAT_1804257b0 < 0xb) {
14: return 0;)F1802fb100F",
    R"F1802fb100U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804257b0.)F1802fb100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb100() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb100", "FUN_1802fb100");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804257b0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] script ui build exception #%d\n");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.data_ref("DAT_1804257b0", static_cast<const void*>(&image::DAT_1804257b0));
    trace.string_literal("[SAFE] script ui build exception #%d\\n");
    // body sha256: 6686b789f8f54ccb9711c7132ffaa1fb958878b72dfcf231117decd322983037
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_1804257b0 = DAT_1804257b0 + 1;");
            if (trace.checked_condition("if (DAT_1804257b0 < 0xb)", [&]() -> bool { return static_cast<bool>(image::DAT_1804257b0 < 0xb); })) {
                trace.statement("FUN_180014410(\"[SAFE] script ui build exception #%d\\n\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb100;
}

// 0x1802fb158 FUN_1802fb158
// source: re/dump/decompile/0x1802fb158_FUN_1802fb158.c
// size: 29 bytes; thunk: false
// body sha256: 6edfe53bb3e0d637ef559ab0bc985fefabcee52fab4031b72058c470a7f08cdd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb158{
    "0x1802fb158",
    "FUN_1802fb158",
    R"F1802fb158S(undefined FUN_1802fb158())F1802fb158S",
    R"B1802fb158(// 0x1802fb158  FUN_1802fb158
// size=29 thunk=false
// signature: undefined FUN_1802fb158()
// status: ok


undefined8 FUN_1802fb158(void)

{
  return 0;
}


)B1802fb158",
    "6edfe53bb3e0d637ef559ab0bc985fefabcee52fab4031b72058c470a7f08cdd",
    R"F1802fb158C()F1802fb158C",
    R"F1802fb158D()F1802fb158D",
    R"F1802fb158T()F1802fb158T",
    R"F1802fb158F(10: return 0;)F1802fb158F",
    R"F1802fb158U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb158U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb158() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb158", "FUN_1802fb158");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6edfe53bb3e0d637ef559ab0bc985fefabcee52fab4031b72058c470a7f08cdd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb158;
}

// 0x1802fb176 FUN_1802fb176
// source: re/dump/decompile/0x1802fb176_FUN_1802fb176.c
// size: 29 bytes; thunk: false
// body sha256: 3801cefa5e3feaa10b5c6d9656d6b1dee4d8e059798ee3ed7cfc9b3c2dcd10ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb176{
    "0x1802fb176",
    "FUN_1802fb176",
    R"F1802fb176S(undefined FUN_1802fb176())F1802fb176S",
    R"B1802fb176(// 0x1802fb176  FUN_1802fb176
// size=29 thunk=false
// signature: undefined FUN_1802fb176()
// status: ok


undefined8 FUN_1802fb176(void)

{
  return 0;
}


)B1802fb176",
    "3801cefa5e3feaa10b5c6d9656d6b1dee4d8e059798ee3ed7cfc9b3c2dcd10ac",
    R"F1802fb176C()F1802fb176C",
    R"F1802fb176D()F1802fb176D",
    R"F1802fb176T()F1802fb176T",
    R"F1802fb176F(10: return 0;)F1802fb176F",
    R"F1802fb176U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb176U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb176() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb176", "FUN_1802fb176");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3801cefa5e3feaa10b5c6d9656d6b1dee4d8e059798ee3ed7cfc9b3c2dcd10ac
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb176;
}

// 0x1802fb194 FUN_1802fb194
// source: re/dump/decompile/0x1802fb194_FUN_1802fb194.c
// size: 29 bytes; thunk: false
// body sha256: 9301366eb7e6a860b2eefc8fe3870730752fe5a8f4719fbb8ccf028abb83a73b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb194{
    "0x1802fb194",
    "FUN_1802fb194",
    R"F1802fb194S(undefined FUN_1802fb194())F1802fb194S",
    R"B1802fb194(// 0x1802fb194  FUN_1802fb194
// size=29 thunk=false
// signature: undefined FUN_1802fb194()
// status: ok


undefined8 FUN_1802fb194(void)

{
  return 0;
}


)B1802fb194",
    "9301366eb7e6a860b2eefc8fe3870730752fe5a8f4719fbb8ccf028abb83a73b",
    R"F1802fb194C()F1802fb194C",
    R"F1802fb194D()F1802fb194D",
    R"F1802fb194T()F1802fb194T",
    R"F1802fb194F(10: return 0;)F1802fb194F",
    R"F1802fb194U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb194U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb194() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb194", "FUN_1802fb194");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9301366eb7e6a860b2eefc8fe3870730752fe5a8f4719fbb8ccf028abb83a73b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb194;
}

// 0x1802fb1b2 FUN_1802fb1b2
// source: re/dump/decompile/0x1802fb1b2_FUN_1802fb1b2.c
// size: 29 bytes; thunk: false
// body sha256: b2a43c392ac0a4599e1dac7b91d28f4246b98682935492c8906c5cab9880f242
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb1b2{
    "0x1802fb1b2",
    "FUN_1802fb1b2",
    R"F1802fb1b2S(undefined FUN_1802fb1b2())F1802fb1b2S",
    R"B1802fb1b2(// 0x1802fb1b2  FUN_1802fb1b2
// size=29 thunk=false
// signature: undefined FUN_1802fb1b2()
// status: ok


undefined8 FUN_1802fb1b2(void)

{
  return 0;
}


)B1802fb1b2",
    "b2a43c392ac0a4599e1dac7b91d28f4246b98682935492c8906c5cab9880f242",
    R"F1802fb1b2C()F1802fb1b2C",
    R"F1802fb1b2D()F1802fb1b2D",
    R"F1802fb1b2T()F1802fb1b2T",
    R"F1802fb1b2F(10: return 0;)F1802fb1b2F",
    R"F1802fb1b2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb1b2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb1b2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb1b2", "FUN_1802fb1b2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b2a43c392ac0a4599e1dac7b91d28f4246b98682935492c8906c5cab9880f242
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb1b2;
}

// 0x1802fb1d0 FUN_1802fb1d0
// source: re/dump/decompile/0x1802fb1d0_FUN_1802fb1d0.c
// size: 62 bytes; thunk: false
// body sha256: 4a48ff818b8982ed870bf914cf3db42508576c8dee5d3d9a1946fd3e861a89cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb1d0{
    "0x1802fb1d0",
    "FUN_1802fb1d0",
    R"F1802fb1d0S(undefined FUN_1802fb1d0())F1802fb1d0S",
    R"B1802fb1d0(// 0x1802fb1d0  FUN_1802fb1d0
// size=62 thunk=false
// signature: undefined FUN_1802fb1d0()
// status: ok


undefined8 FUN_1802fb1d0(undefined8 param_1,longlong param_2)

{
  FUN_180014410("[SAFE] SEH 0x%x in %s:%d\n",*(undefined4 *)(*(longlong *)(param_2 + 0x60) + 0x18),
                "Hooks::BuildEspOverlay",0xfc1);
  return 0;
}


)B1802fb1d0",
    "4a48ff818b8982ed870bf914cf3db42508576c8dee5d3d9a1946fd3e861a89cd",
    R"F1802fb1d0C(FUN_180014410)F1802fb1d0C",
    R"F1802fb1d0D()F1802fb1d0D",
    R"F1802fb1d0T("Hooks::BuildEspOverlay"
"[SAFE] SEH 0x%x in %s:%d\\n")F1802fb1d0T",
    R"F1802fb1d0F(12: return 0;)F1802fb1d0F",
    R"F1802fb1d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb1d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb1d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb1d0", "FUN_1802fb1d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("Hooks::BuildEspOverlay");
    trace.string_literal("[SAFE] SEH 0x%x in %s:%d\\n");
    // body sha256: 4a48ff818b8982ed870bf914cf3db42508576c8dee5d3d9a1946fd3e861a89cd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] SEH 0x%x in %s:%d\\n\",*(undefined4 *)(*(longlong *)(param_2 + 0x60) + 0x18),");
            trace.statement("\"Hooks::BuildEspOverlay\",0xfc1);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb1d0;
}

// 0x1802fb20f FUN_1802fb20f
// source: re/dump/decompile/0x1802fb20f_FUN_1802fb20f.c
// size: 68 bytes; thunk: false
// body sha256: 9f936e8490e067960101b34c0a6a2bf38382339c93dcd8c14986e6d1e1b21bf2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb20f{
    "0x1802fb20f",
    "FUN_1802fb20f",
    R"F1802fb20fS(undefined FUN_1802fb20f())F1802fb20fS",
    R"B1802fb20f(// 0x1802fb20f  FUN_1802fb20f
// size=68 thunk=false
// signature: undefined FUN_1802fb20f()
// status: ok


undefined8 FUN_1802fb20f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x68) + 8))();
  FUN_180014410("[SAFE] %s in %s:%d\n",uVar1,"Hooks::BuildEspOverlay",0xfc1);
  return 0;
}


)B1802fb20f",
    "9f936e8490e067960101b34c0a6a2bf38382339c93dcd8c14986e6d1e1b21bf2",
    R"F1802fb20fC(FUN_180014410)F1802fb20fC",
    R"F1802fb20fD()F1802fb20fD",
    R"F1802fb20fT("[SAFE] %s in %s:%d\\n"
"Hooks::BuildEspOverlay")F1802fb20fT",
    R"F1802fb20fF(14: return 0;)F1802fb20fF",
    R"F1802fb20fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x68) + 8))();.)F1802fb20fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb20f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb20f", "FUN_1802fb20f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x68) + 8))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] %s in %s:%d\n", uVar1, "Hooks::BuildEspOverlay", 0xfc1);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[SAFE] %s in %s:%d\\n");
    trace.string_literal("Hooks::BuildEspOverlay");
    // body sha256: 9f936e8490e067960101b34c0a6a2bf38382339c93dcd8c14986e6d1e1b21bf2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("uVar1 = (**(code **)(**(longlong **)(param_2 + 0x68) + 8))();");
            trace.statement("FUN_180014410(\"[SAFE] %s in %s:%d\\n\",uVar1,\"Hooks::BuildEspOverlay\",0xfc1);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb20f;
}

// 0x1802fb254 FUN_1802fb254
// source: re/dump/decompile/0x1802fb254_FUN_1802fb254.c
// size: 55 bytes; thunk: false
// body sha256: 302458dddd9c0003a10dc6265ee530b0e867d8064326b3feca094b63e53d4633
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb254{
    "0x1802fb254",
    "FUN_1802fb254",
    R"F1802fb254S(undefined FUN_1802fb254())F1802fb254S",
    R"B1802fb254(// 0x1802fb254  FUN_1802fb254
// size=55 thunk=false
// signature: undefined FUN_1802fb254()
// status: ok


undefined8 FUN_1802fb254(void)

{
  FUN_180014410("[SAFE] Unknown exception in %s:%d\n","Hooks::BuildEspOverlay",0xfc1);
  return 0;
}


)B1802fb254",
    "302458dddd9c0003a10dc6265ee530b0e867d8064326b3feca094b63e53d4633",
    R"F1802fb254C(FUN_180014410)F1802fb254C",
    R"F1802fb254D()F1802fb254D",
    R"F1802fb254T("Hooks::BuildEspOverlay"
"[SAFE] Unknown exception in %s:%d\\n")F1802fb254T",
    R"F1802fb254F(11: return 0;)F1802fb254F",
    R"F1802fb254U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb254U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb254() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb254", "FUN_1802fb254");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] Unknown exception in %s:%d\n", "Hooks::BuildEspOverlay", 0xfc1);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("Hooks::BuildEspOverlay");
    trace.string_literal("[SAFE] Unknown exception in %s:%d\\n");
    // body sha256: 302458dddd9c0003a10dc6265ee530b0e867d8064326b3feca094b63e53d4633
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] Unknown exception in %s:%d\\n\",\"Hooks::BuildEspOverlay\",0xfc1);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb254;
}

// 0x1802fb290 FUN_1802fb290
// source: re/dump/decompile/0x1802fb290_FUN_1802fb290.c
// size: 29 bytes; thunk: false
// body sha256: 10062e10c48c49fa890b561a1485a6b6a35c710348df5b99057fb358cb854bff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb290{
    "0x1802fb290",
    "FUN_1802fb290",
    R"F1802fb290S(undefined FUN_1802fb290())F1802fb290S",
    R"B1802fb290(// 0x1802fb290  FUN_1802fb290
// size=29 thunk=false
// signature: undefined FUN_1802fb290()
// status: ok


undefined8 FUN_1802fb290(void)

{
  return 0;
}


)B1802fb290",
    "10062e10c48c49fa890b561a1485a6b6a35c710348df5b99057fb358cb854bff",
    R"F1802fb290C()F1802fb290C",
    R"F1802fb290D()F1802fb290D",
    R"F1802fb290T()F1802fb290T",
    R"F1802fb290F(10: return 0;)F1802fb290F",
    R"F1802fb290U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb290U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb290() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb290", "FUN_1802fb290");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 10062e10c48c49fa890b561a1485a6b6a35c710348df5b99057fb358cb854bff
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb290;
}

// 0x1802fb2ae FUN_1802fb2ae
// source: re/dump/decompile/0x1802fb2ae_FUN_1802fb2ae.c
// size: 29 bytes; thunk: false
// body sha256: b81e4864b2e1a1a08a89c4a8a9b23015de810c8d03603d8ea487e739bbe0c8ed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb2ae{
    "0x1802fb2ae",
    "FUN_1802fb2ae",
    R"F1802fb2aeS(undefined FUN_1802fb2ae())F1802fb2aeS",
    R"B1802fb2ae(// 0x1802fb2ae  FUN_1802fb2ae
// size=29 thunk=false
// signature: undefined FUN_1802fb2ae()
// status: ok


undefined8 FUN_1802fb2ae(void)

{
  return 0;
}


)B1802fb2ae",
    "b81e4864b2e1a1a08a89c4a8a9b23015de810c8d03603d8ea487e739bbe0c8ed",
    R"F1802fb2aeC()F1802fb2aeC",
    R"F1802fb2aeD()F1802fb2aeD",
    R"F1802fb2aeT()F1802fb2aeT",
    R"F1802fb2aeF(10: return 0;)F1802fb2aeF",
    R"F1802fb2aeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb2aeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb2ae() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb2ae", "FUN_1802fb2ae");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b81e4864b2e1a1a08a89c4a8a9b23015de810c8d03603d8ea487e739bbe0c8ed
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb2ae;
}

// 0x1802fb2cc FUN_1802fb2cc
// source: re/dump/decompile/0x1802fb2cc_FUN_1802fb2cc.c
// size: 29 bytes; thunk: false
// body sha256: 20cf4f9bcd5240f3d2b73a92af821cc77bff4d261135f75b3a3b5abcf24bf75f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb2cc{
    "0x1802fb2cc",
    "FUN_1802fb2cc",
    R"F1802fb2ccS(undefined FUN_1802fb2cc())F1802fb2ccS",
    R"B1802fb2cc(// 0x1802fb2cc  FUN_1802fb2cc
// size=29 thunk=false
// signature: undefined FUN_1802fb2cc()
// status: ok


undefined8 FUN_1802fb2cc(void)

{
  return 0;
}


)B1802fb2cc",
    "20cf4f9bcd5240f3d2b73a92af821cc77bff4d261135f75b3a3b5abcf24bf75f",
    R"F1802fb2ccC()F1802fb2ccC",
    R"F1802fb2ccD()F1802fb2ccD",
    R"F1802fb2ccT()F1802fb2ccT",
    R"F1802fb2ccF(10: return 0;)F1802fb2ccF",
    R"F1802fb2ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb2ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb2cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb2cc", "FUN_1802fb2cc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 20cf4f9bcd5240f3d2b73a92af821cc77bff4d261135f75b3a3b5abcf24bf75f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb2cc;
}

// 0x1802fb2ea FUN_1802fb2ea
// source: re/dump/decompile/0x1802fb2ea_FUN_1802fb2ea.c
// size: 29 bytes; thunk: false
// body sha256: dab1fbe0e1f8a8428f4a04a41b2b5198f1653c2e321fc3e4c1442bd35080f725
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb2ea{
    "0x1802fb2ea",
    "FUN_1802fb2ea",
    R"F1802fb2eaS(undefined FUN_1802fb2ea())F1802fb2eaS",
    R"B1802fb2ea(// 0x1802fb2ea  FUN_1802fb2ea
// size=29 thunk=false
// signature: undefined FUN_1802fb2ea()
// status: ok


undefined8 FUN_1802fb2ea(void)

{
  return 0;
}


)B1802fb2ea",
    "dab1fbe0e1f8a8428f4a04a41b2b5198f1653c2e321fc3e4c1442bd35080f725",
    R"F1802fb2eaC()F1802fb2eaC",
    R"F1802fb2eaD()F1802fb2eaD",
    R"F1802fb2eaT()F1802fb2eaT",
    R"F1802fb2eaF(10: return 0;)F1802fb2eaF",
    R"F1802fb2eaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb2eaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb2ea() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb2ea", "FUN_1802fb2ea");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: dab1fbe0e1f8a8428f4a04a41b2b5198f1653c2e321fc3e4c1442bd35080f725
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb2ea;
}

// 0x1802fb308 FUN_1802fb308
// source: re/dump/decompile/0x1802fb308_FUN_1802fb308.c
// size: 29 bytes; thunk: false
// body sha256: fd046d6b08d6dd0b5b3b77a611e02fddc7d55e8d96d21d67364978b714418bdc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb308{
    "0x1802fb308",
    "FUN_1802fb308",
    R"F1802fb308S(undefined FUN_1802fb308())F1802fb308S",
    R"B1802fb308(// 0x1802fb308  FUN_1802fb308
// size=29 thunk=false
// signature: undefined FUN_1802fb308()
// status: ok


undefined8 FUN_1802fb308(void)

{
  return 0;
}


)B1802fb308",
    "fd046d6b08d6dd0b5b3b77a611e02fddc7d55e8d96d21d67364978b714418bdc",
    R"F1802fb308C()F1802fb308C",
    R"F1802fb308D()F1802fb308D",
    R"F1802fb308T()F1802fb308T",
    R"F1802fb308F(10: return 0;)F1802fb308F",
    R"F1802fb308U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb308U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb308() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb308", "FUN_1802fb308");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fd046d6b08d6dd0b5b3b77a611e02fddc7d55e8d96d21d67364978b714418bdc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb308;
}

// 0x1802fb326 FUN_1802fb326
// source: re/dump/decompile/0x1802fb326_FUN_1802fb326.c
// size: 29 bytes; thunk: false
// body sha256: b107d031b6244a9fe34fdb22a5473e2e2be7007b960b2337c3b35a17a0ab0e8c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb326{
    "0x1802fb326",
    "FUN_1802fb326",
    R"F1802fb326S(undefined FUN_1802fb326())F1802fb326S",
    R"B1802fb326(// 0x1802fb326  FUN_1802fb326
// size=29 thunk=false
// signature: undefined FUN_1802fb326()
// status: ok


undefined8 FUN_1802fb326(void)

{
  return 0;
}


)B1802fb326",
    "b107d031b6244a9fe34fdb22a5473e2e2be7007b960b2337c3b35a17a0ab0e8c",
    R"F1802fb326C()F1802fb326C",
    R"F1802fb326D()F1802fb326D",
    R"F1802fb326T()F1802fb326T",
    R"F1802fb326F(10: return 0;)F1802fb326F",
    R"F1802fb326U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb326U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb326() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb326", "FUN_1802fb326");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b107d031b6244a9fe34fdb22a5473e2e2be7007b960b2337c3b35a17a0ab0e8c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb326;
}

// 0x1802fb360 FUN_1802fb360
// source: re/dump/decompile/0x1802fb360_FUN_1802fb360.c
// size: 29 bytes; thunk: false
// body sha256: 9bd0484b3591e8c816eeddbf7c46156570ef74f27254852e0d784ef027fb88d1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb360{
    "0x1802fb360",
    "FUN_1802fb360",
    R"F1802fb360S(undefined FUN_1802fb360())F1802fb360S",
    R"B1802fb360(// 0x1802fb360  FUN_1802fb360
// size=29 thunk=false
// signature: undefined FUN_1802fb360()
// status: ok


undefined8 FUN_1802fb360(void)

{
  return 0;
}


)B1802fb360",
    "9bd0484b3591e8c816eeddbf7c46156570ef74f27254852e0d784ef027fb88d1",
    R"F1802fb360C()F1802fb360C",
    R"F1802fb360D()F1802fb360D",
    R"F1802fb360T()F1802fb360T",
    R"F1802fb360F(10: return 0;)F1802fb360F",
    R"F1802fb360U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb360U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb360() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb360", "FUN_1802fb360");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9bd0484b3591e8c816eeddbf7c46156570ef74f27254852e0d784ef027fb88d1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb360;
}

// 0x1802fb37e FUN_1802fb37e
// source: re/dump/decompile/0x1802fb37e_FUN_1802fb37e.c
// size: 29 bytes; thunk: false
// body sha256: f9f2d831b40ed5f3954396325c6e527c1764683762e155e727eb1abf874968a3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb37e{
    "0x1802fb37e",
    "FUN_1802fb37e",
    R"F1802fb37eS(undefined FUN_1802fb37e())F1802fb37eS",
    R"B1802fb37e(// 0x1802fb37e  FUN_1802fb37e
// size=29 thunk=false
// signature: undefined FUN_1802fb37e()
// status: ok


undefined8 FUN_1802fb37e(void)

{
  return 0;
}


)B1802fb37e",
    "f9f2d831b40ed5f3954396325c6e527c1764683762e155e727eb1abf874968a3",
    R"F1802fb37eC()F1802fb37eC",
    R"F1802fb37eD()F1802fb37eD",
    R"F1802fb37eT()F1802fb37eT",
    R"F1802fb37eF(10: return 0;)F1802fb37eF",
    R"F1802fb37eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb37eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb37e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb37e", "FUN_1802fb37e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f9f2d831b40ed5f3954396325c6e527c1764683762e155e727eb1abf874968a3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb37e;
}

// 0x1802fb39c FUN_1802fb39c
// source: re/dump/decompile/0x1802fb39c_FUN_1802fb39c.c
// size: 29 bytes; thunk: false
// body sha256: 6439409635ec86087aef4135bc0901dea325f0a3be9681c78f9bd43ffa64a196
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb39c{
    "0x1802fb39c",
    "FUN_1802fb39c",
    R"F1802fb39cS(undefined FUN_1802fb39c())F1802fb39cS",
    R"B1802fb39c(// 0x1802fb39c  FUN_1802fb39c
// size=29 thunk=false
// signature: undefined FUN_1802fb39c()
// status: ok


undefined8 FUN_1802fb39c(void)

{
  return 0;
}


)B1802fb39c",
    "6439409635ec86087aef4135bc0901dea325f0a3be9681c78f9bd43ffa64a196",
    R"F1802fb39cC()F1802fb39cC",
    R"F1802fb39cD()F1802fb39cD",
    R"F1802fb39cT()F1802fb39cT",
    R"F1802fb39cF(10: return 0;)F1802fb39cF",
    R"F1802fb39cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb39cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb39c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb39c", "FUN_1802fb39c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6439409635ec86087aef4135bc0901dea325f0a3be9681c78f9bd43ffa64a196
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb39c;
}

// 0x1802fb3c6 FUN_1802fb3c6
// source: re/dump/decompile/0x1802fb3c6_FUN_1802fb3c6.c
// size: 29 bytes; thunk: false
// body sha256: 35336d7f1776504eba9805d2b2256e5f438cb6251ce08554c140a2312c11f4aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb3c6{
    "0x1802fb3c6",
    "FUN_1802fb3c6",
    R"F1802fb3c6S(undefined FUN_1802fb3c6())F1802fb3c6S",
    R"B1802fb3c6(// 0x1802fb3c6  FUN_1802fb3c6
// size=29 thunk=false
// signature: undefined FUN_1802fb3c6()
// status: ok


undefined8 FUN_1802fb3c6(void)

{
  return 0;
}


)B1802fb3c6",
    "35336d7f1776504eba9805d2b2256e5f438cb6251ce08554c140a2312c11f4aa",
    R"F1802fb3c6C()F1802fb3c6C",
    R"F1802fb3c6D()F1802fb3c6D",
    R"F1802fb3c6T()F1802fb3c6T",
    R"F1802fb3c6F(10: return 0;)F1802fb3c6F",
    R"F1802fb3c6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb3c6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb3c6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb3c6", "FUN_1802fb3c6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 35336d7f1776504eba9805d2b2256e5f438cb6251ce08554c140a2312c11f4aa
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb3c6;
}

// 0x1802fb3e4 FUN_1802fb3e4
// source: re/dump/decompile/0x1802fb3e4_FUN_1802fb3e4.c
// size: 29 bytes; thunk: false
// body sha256: 770248dbc1e8369a22e6df9f1c8a16c6444710331bbf42e7bea86a030e2977d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb3e4{
    "0x1802fb3e4",
    "FUN_1802fb3e4",
    R"F1802fb3e4S(undefined FUN_1802fb3e4())F1802fb3e4S",
    R"B1802fb3e4(// 0x1802fb3e4  FUN_1802fb3e4
// size=29 thunk=false
// signature: undefined FUN_1802fb3e4()
// status: ok


undefined8 FUN_1802fb3e4(void)

{
  return 0;
}


)B1802fb3e4",
    "770248dbc1e8369a22e6df9f1c8a16c6444710331bbf42e7bea86a030e2977d7",
    R"F1802fb3e4C()F1802fb3e4C",
    R"F1802fb3e4D()F1802fb3e4D",
    R"F1802fb3e4T()F1802fb3e4T",
    R"F1802fb3e4F(10: return 0;)F1802fb3e4F",
    R"F1802fb3e4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb3e4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb3e4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb3e4", "FUN_1802fb3e4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 770248dbc1e8369a22e6df9f1c8a16c6444710331bbf42e7bea86a030e2977d7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb3e4;
}

// 0x1802fb402 FUN_1802fb402
// source: re/dump/decompile/0x1802fb402_FUN_1802fb402.c
// size: 29 bytes; thunk: false
// body sha256: 512a606ad99a250fa6e906a32a4a65845b4cdd7216c84178bcf52ebd4af19cab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb402{
    "0x1802fb402",
    "FUN_1802fb402",
    R"F1802fb402S(undefined FUN_1802fb402())F1802fb402S",
    R"B1802fb402(// 0x1802fb402  FUN_1802fb402
// size=29 thunk=false
// signature: undefined FUN_1802fb402()
// status: ok


undefined8 FUN_1802fb402(void)

{
  return 0;
}


)B1802fb402",
    "512a606ad99a250fa6e906a32a4a65845b4cdd7216c84178bcf52ebd4af19cab",
    R"F1802fb402C()F1802fb402C",
    R"F1802fb402D()F1802fb402D",
    R"F1802fb402T()F1802fb402T",
    R"F1802fb402F(10: return 0;)F1802fb402F",
    R"F1802fb402U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb402U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb402() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb402", "FUN_1802fb402");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 512a606ad99a250fa6e906a32a4a65845b4cdd7216c84178bcf52ebd4af19cab
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb402;
}

// 0x1802fb9c8 FUN_1802fb9c8
// source: re/dump/decompile/0x1802fb9c8_FUN_1802fb9c8.c
// size: 29 bytes; thunk: false
// body sha256: 7218dfeb32ed90961d09b5a687a55bd252ae548cca56a6db0a6508c4b889aaba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb9c8{
    "0x1802fb9c8",
    "FUN_1802fb9c8",
    R"F1802fb9c8S(undefined FUN_1802fb9c8())F1802fb9c8S",
    R"B1802fb9c8(// 0x1802fb9c8  FUN_1802fb9c8
// size=29 thunk=false
// signature: undefined FUN_1802fb9c8()
// status: ok


undefined8 FUN_1802fb9c8(void)

{
  return 0;
}


)B1802fb9c8",
    "7218dfeb32ed90961d09b5a687a55bd252ae548cca56a6db0a6508c4b889aaba",
    R"F1802fb9c8C()F1802fb9c8C",
    R"F1802fb9c8D()F1802fb9c8D",
    R"F1802fb9c8T()F1802fb9c8T",
    R"F1802fb9c8F(10: return 0;)F1802fb9c8F",
    R"F1802fb9c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb9c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb9c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb9c8", "FUN_1802fb9c8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7218dfeb32ed90961d09b5a687a55bd252ae548cca56a6db0a6508c4b889aaba
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb9c8;
}

// 0x1802fb9e6 FUN_1802fb9e6
// source: re/dump/decompile/0x1802fb9e6_FUN_1802fb9e6.c
// size: 29 bytes; thunk: false
// body sha256: 4f326a88b612b253d8185424aaef7756eaf51f2c678eedcd8b467c42064bcbd5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fb9e6{
    "0x1802fb9e6",
    "FUN_1802fb9e6",
    R"F1802fb9e6S(undefined FUN_1802fb9e6())F1802fb9e6S",
    R"B1802fb9e6(// 0x1802fb9e6  FUN_1802fb9e6
// size=29 thunk=false
// signature: undefined FUN_1802fb9e6()
// status: ok


undefined8 FUN_1802fb9e6(void)

{
  return 0;
}


)B1802fb9e6",
    "4f326a88b612b253d8185424aaef7756eaf51f2c678eedcd8b467c42064bcbd5",
    R"F1802fb9e6C()F1802fb9e6C",
    R"F1802fb9e6D()F1802fb9e6D",
    R"F1802fb9e6T()F1802fb9e6T",
    R"F1802fb9e6F(10: return 0;)F1802fb9e6F",
    R"F1802fb9e6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fb9e6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fb9e6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fb9e6", "FUN_1802fb9e6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4f326a88b612b253d8185424aaef7756eaf51f2c678eedcd8b467c42064bcbd5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fb9e6;
}

// 0x1802fba04 FUN_1802fba04
// source: re/dump/decompile/0x1802fba04_FUN_1802fba04.c
// size: 29 bytes; thunk: false
// body sha256: d172c215334dbaef396720cc76a13549513f4743387bd69f493c4fc0e7e70ef1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fba04{
    "0x1802fba04",
    "FUN_1802fba04",
    R"F1802fba04S(undefined FUN_1802fba04())F1802fba04S",
    R"B1802fba04(// 0x1802fba04  FUN_1802fba04
// size=29 thunk=false
// signature: undefined FUN_1802fba04()
// status: ok


undefined8 FUN_1802fba04(void)

{
  return 0;
}


)B1802fba04",
    "d172c215334dbaef396720cc76a13549513f4743387bd69f493c4fc0e7e70ef1",
    R"F1802fba04C()F1802fba04C",
    R"F1802fba04D()F1802fba04D",
    R"F1802fba04T()F1802fba04T",
    R"F1802fba04F(10: return 0;)F1802fba04F",
    R"F1802fba04U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fba04U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fba04() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fba04", "FUN_1802fba04");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d172c215334dbaef396720cc76a13549513f4743387bd69f493c4fc0e7e70ef1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fba04;
}

// 0x1802fba22 FUN_1802fba22
// source: re/dump/decompile/0x1802fba22_FUN_1802fba22.c
// size: 29 bytes; thunk: false
// body sha256: ec48c7ad15bdb7295c88562d4d8c64bb2eba8881da465955098f9082ebaebbe9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fba22{
    "0x1802fba22",
    "FUN_1802fba22",
    R"F1802fba22S(undefined FUN_1802fba22())F1802fba22S",
    R"B1802fba22(// 0x1802fba22  FUN_1802fba22
// size=29 thunk=false
// signature: undefined FUN_1802fba22()
// status: ok


undefined8 FUN_1802fba22(void)

{
  return 0;
}


)B1802fba22",
    "ec48c7ad15bdb7295c88562d4d8c64bb2eba8881da465955098f9082ebaebbe9",
    R"F1802fba22C()F1802fba22C",
    R"F1802fba22D()F1802fba22D",
    R"F1802fba22T()F1802fba22T",
    R"F1802fba22F(10: return 0;)F1802fba22F",
    R"F1802fba22U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fba22U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fba22() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fba22", "FUN_1802fba22");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ec48c7ad15bdb7295c88562d4d8c64bb2eba8881da465955098f9082ebaebbe9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fba22;
}

// 0x1802fba40 FUN_1802fba40
// source: re/dump/decompile/0x1802fba40_FUN_1802fba40.c
// size: 29 bytes; thunk: false
// body sha256: 4d440614cd0aa8a2f561b2d21867b1cb9116bf8b083c4347775adff34f7f33f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fba40{
    "0x1802fba40",
    "FUN_1802fba40",
    R"F1802fba40S(undefined FUN_1802fba40())F1802fba40S",
    R"B1802fba40(// 0x1802fba40  FUN_1802fba40
// size=29 thunk=false
// signature: undefined FUN_1802fba40()
// status: ok


undefined8 FUN_1802fba40(void)

{
  return 0;
}


)B1802fba40",
    "4d440614cd0aa8a2f561b2d21867b1cb9116bf8b083c4347775adff34f7f33f3",
    R"F1802fba40C()F1802fba40C",
    R"F1802fba40D()F1802fba40D",
    R"F1802fba40T()F1802fba40T",
    R"F1802fba40F(10: return 0;)F1802fba40F",
    R"F1802fba40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fba40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fba40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fba40", "FUN_1802fba40");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4d440614cd0aa8a2f561b2d21867b1cb9116bf8b083c4347775adff34f7f33f3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fba40;
}

// 0x1802fba5e FUN_1802fba5e
// source: re/dump/decompile/0x1802fba5e_FUN_1802fba5e.c
// size: 29 bytes; thunk: false
// body sha256: 245605e951197bdf079fca5fd3114f759a92772e1247c144e600f629d176db59
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fba5e{
    "0x1802fba5e",
    "FUN_1802fba5e",
    R"F1802fba5eS(undefined FUN_1802fba5e())F1802fba5eS",
    R"B1802fba5e(// 0x1802fba5e  FUN_1802fba5e
// size=29 thunk=false
// signature: undefined FUN_1802fba5e()
// status: ok


undefined8 FUN_1802fba5e(void)

{
  return 0;
}


)B1802fba5e",
    "245605e951197bdf079fca5fd3114f759a92772e1247c144e600f629d176db59",
    R"F1802fba5eC()F1802fba5eC",
    R"F1802fba5eD()F1802fba5eD",
    R"F1802fba5eT()F1802fba5eT",
    R"F1802fba5eF(10: return 0;)F1802fba5eF",
    R"F1802fba5eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fba5eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fba5e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fba5e", "FUN_1802fba5e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 245605e951197bdf079fca5fd3114f759a92772e1247c144e600f629d176db59
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fba5e;
}

// 0x1802fba7c FUN_1802fba7c
// source: re/dump/decompile/0x1802fba7c_FUN_1802fba7c.c
// size: 29 bytes; thunk: false
// body sha256: ae542a7c9175efbb26ea19a918a51d5ce434ed0dd3a3e627bc37f7c03a7f6c47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fba7c{
    "0x1802fba7c",
    "FUN_1802fba7c",
    R"F1802fba7cS(undefined FUN_1802fba7c())F1802fba7cS",
    R"B1802fba7c(// 0x1802fba7c  FUN_1802fba7c
// size=29 thunk=false
// signature: undefined FUN_1802fba7c()
// status: ok


undefined8 FUN_1802fba7c(void)

{
  return 0;
}


)B1802fba7c",
    "ae542a7c9175efbb26ea19a918a51d5ce434ed0dd3a3e627bc37f7c03a7f6c47",
    R"F1802fba7cC()F1802fba7cC",
    R"F1802fba7cD()F1802fba7cD",
    R"F1802fba7cT()F1802fba7cT",
    R"F1802fba7cF(10: return 0;)F1802fba7cF",
    R"F1802fba7cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fba7cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fba7c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fba7c", "FUN_1802fba7c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ae542a7c9175efbb26ea19a918a51d5ce434ed0dd3a3e627bc37f7c03a7f6c47
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fba7c;
}

// 0x1802fba9a FUN_1802fba9a
// source: re/dump/decompile/0x1802fba9a_FUN_1802fba9a.c
// size: 29 bytes; thunk: false
// body sha256: 7541639a3e03a41bf633fb49c644967cd26a6cebb1826f11fa47ecf76ab92059
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fba9a{
    "0x1802fba9a",
    "FUN_1802fba9a",
    R"F1802fba9aS(undefined FUN_1802fba9a())F1802fba9aS",
    R"B1802fba9a(// 0x1802fba9a  FUN_1802fba9a
// size=29 thunk=false
// signature: undefined FUN_1802fba9a()
// status: ok


undefined8 FUN_1802fba9a(void)

{
  return 0;
}


)B1802fba9a",
    "7541639a3e03a41bf633fb49c644967cd26a6cebb1826f11fa47ecf76ab92059",
    R"F1802fba9aC()F1802fba9aC",
    R"F1802fba9aD()F1802fba9aD",
    R"F1802fba9aT()F1802fba9aT",
    R"F1802fba9aF(10: return 0;)F1802fba9aF",
    R"F1802fba9aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fba9aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fba9a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fba9a", "FUN_1802fba9a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7541639a3e03a41bf633fb49c644967cd26a6cebb1826f11fa47ecf76ab92059
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fba9a;
}

// 0x1802fbab8 FUN_1802fbab8
// source: re/dump/decompile/0x1802fbab8_FUN_1802fbab8.c
// size: 29 bytes; thunk: false
// body sha256: c3819751d28b365a46d2dd9dcea91440af953243acbdcc5f0a505851f8ac8e6f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbab8{
    "0x1802fbab8",
    "FUN_1802fbab8",
    R"F1802fbab8S(undefined FUN_1802fbab8())F1802fbab8S",
    R"B1802fbab8(// 0x1802fbab8  FUN_1802fbab8
// size=29 thunk=false
// signature: undefined FUN_1802fbab8()
// status: ok


undefined8 FUN_1802fbab8(void)

{
  return 0;
}


)B1802fbab8",
    "c3819751d28b365a46d2dd9dcea91440af953243acbdcc5f0a505851f8ac8e6f",
    R"F1802fbab8C()F1802fbab8C",
    R"F1802fbab8D()F1802fbab8D",
    R"F1802fbab8T()F1802fbab8T",
    R"F1802fbab8F(10: return 0;)F1802fbab8F",
    R"F1802fbab8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbab8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbab8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbab8", "FUN_1802fbab8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c3819751d28b365a46d2dd9dcea91440af953243acbdcc5f0a505851f8ac8e6f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fbab8;
}

// 0x1802fbad6 FUN_1802fbad6
// source: re/dump/decompile/0x1802fbad6_FUN_1802fbad6.c
// size: 29 bytes; thunk: false
// body sha256: 641f9741643eff7f6c20e25f51b48826698693ac4a729ed316f479bad933c5d4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbad6{
    "0x1802fbad6",
    "FUN_1802fbad6",
    R"F1802fbad6S(undefined FUN_1802fbad6())F1802fbad6S",
    R"B1802fbad6(// 0x1802fbad6  FUN_1802fbad6
// size=29 thunk=false
// signature: undefined FUN_1802fbad6()
// status: ok


undefined8 FUN_1802fbad6(void)

{
  return 0;
}


)B1802fbad6",
    "641f9741643eff7f6c20e25f51b48826698693ac4a729ed316f479bad933c5d4",
    R"F1802fbad6C()F1802fbad6C",
    R"F1802fbad6D()F1802fbad6D",
    R"F1802fbad6T()F1802fbad6T",
    R"F1802fbad6F(10: return 0;)F1802fbad6F",
    R"F1802fbad6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbad6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbad6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbad6", "FUN_1802fbad6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 641f9741643eff7f6c20e25f51b48826698693ac4a729ed316f479bad933c5d4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802fbad6;
}

// 0x1802fbb00 FUN_1802fbb00
// source: re/dump/decompile/0x1802fbb00_FUN_1802fbb00.c
// size: 62 bytes; thunk: false
// body sha256: a57ccb675dc2f689af304503d13441ddfc3d479a3fe52e93cdff022f222085e0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbb00{
    "0x1802fbb00",
    "FUN_1802fbb00",
    R"F1802fbb00S(undefined FUN_1802fbb00())F1802fbb00S",
    R"B1802fbb00(// 0x1802fbb00  FUN_1802fbb00
// size=62 thunk=false
// signature: undefined FUN_1802fbb00()
// status: ok


undefined8 FUN_1802fbb00(undefined8 param_1,longlong param_2)

{
  FUN_180014410("[SAFE] SEH 0x%x in %s:%d\n",*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x18),
                "RunInit",0x2b);
  return 0;
}


)B1802fbb00",
    "a57ccb675dc2f689af304503d13441ddfc3d479a3fe52e93cdff022f222085e0",
    R"F1802fbb00C(FUN_180014410)F1802fbb00C",
    R"F1802fbb00D()F1802fbb00D",
    R"F1802fbb00T("RunInit"
"[SAFE] SEH 0x%x in %s:%d\\n")F1802fbb00T",
    R"F1802fbb00F(12: return 0;)F1802fbb00F",
    R"F1802fbb00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbb00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbb00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbb00", "FUN_1802fbb00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("RunInit");
    trace.string_literal("[SAFE] SEH 0x%x in %s:%d\\n");
    // body sha256: a57ccb675dc2f689af304503d13441ddfc3d479a3fe52e93cdff022f222085e0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] SEH 0x%x in %s:%d\\n\",*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x18),");
            trace.statement("\"RunInit\",0x2b);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fbb00;
}

// 0x1802fbb3f FUN_1802fbb3f
// source: re/dump/decompile/0x1802fbb3f_FUN_1802fbb3f.c
// size: 68 bytes; thunk: false
// body sha256: 3c2a02b81415c917c49a66294939f8cf760d7aedee93263460aad4a3972f1746
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbb3f{
    "0x1802fbb3f",
    "FUN_1802fbb3f",
    R"F1802fbb3fS(undefined FUN_1802fbb3f())F1802fbb3fS",
    R"B1802fbb3f(// 0x1802fbb3f  FUN_1802fbb3f
// size=68 thunk=false
// signature: undefined FUN_1802fbb3f()
// status: ok


undefined8 FUN_1802fbb3f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x28) + 8))();
  FUN_180014410("[SAFE] %s in %s:%d\n",uVar1,"RunInit",0x2b);
  return 0;
}


)B1802fbb3f",
    "3c2a02b81415c917c49a66294939f8cf760d7aedee93263460aad4a3972f1746",
    R"F1802fbb3fC(FUN_180014410)F1802fbb3fC",
    R"F1802fbb3fD()F1802fbb3fD",
    R"F1802fbb3fT("RunInit"
"[SAFE] %s in %s:%d\\n")F1802fbb3fT",
    R"F1802fbb3fF(14: return 0;)F1802fbb3fF",
    R"F1802fbb3fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x28) + 8))();.)F1802fbb3fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbb3f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbb3f", "FUN_1802fbb3f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t uVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 12: uVar1 = (**(code **)(**(longlong **)(param_2 + 0x28) + 8))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] %s in %s:%d\n", uVar1, "RunInit", 0x2b);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("RunInit");
    trace.string_literal("[SAFE] %s in %s:%d\\n");
    // body sha256: 3c2a02b81415c917c49a66294939f8cf760d7aedee93263460aad4a3972f1746
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("uVar1 = (**(code **)(**(longlong **)(param_2 + 0x28) + 8))();");
            trace.statement("FUN_180014410(\"[SAFE] %s in %s:%d\\n\",uVar1,\"RunInit\",0x2b);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fbb3f;
}

// 0x1802fbb84 FUN_1802fbb84
// source: re/dump/decompile/0x1802fbb84_FUN_1802fbb84.c
// size: 55 bytes; thunk: false
// body sha256: 95ce1abe5e089226f2dae6a6b6cf2cdc7b93fa6d8b1757a3d698746adc7981ee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbb84{
    "0x1802fbb84",
    "FUN_1802fbb84",
    R"F1802fbb84S(undefined FUN_1802fbb84())F1802fbb84S",
    R"B1802fbb84(// 0x1802fbb84  FUN_1802fbb84
// size=55 thunk=false
// signature: undefined FUN_1802fbb84()
// status: ok


undefined8 FUN_1802fbb84(void)

{
  FUN_180014410("[SAFE] Unknown exception in %s:%d\n","RunInit",0x2b);
  return 0;
}


)B1802fbb84",
    "95ce1abe5e089226f2dae6a6b6cf2cdc7b93fa6d8b1757a3d698746adc7981ee",
    R"F1802fbb84C(FUN_180014410)F1802fbb84C",
    R"F1802fbb84D()F1802fbb84D",
    R"F1802fbb84T("RunInit"
"[SAFE] Unknown exception in %s:%d\\n")F1802fbb84T",
    R"F1802fbb84F(11: return 0;)F1802fbb84F",
    R"F1802fbb84U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbb84U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbb84() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbb84", "FUN_1802fbb84");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180014410", "[SAFE] Unknown exception in %s:%d\n", "RunInit", 0x2b);
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("RunInit");
    trace.string_literal("[SAFE] Unknown exception in %s:%d\\n");
    // body sha256: 95ce1abe5e089226f2dae6a6b6cf2cdc7b93fa6d8b1757a3d698746adc7981ee
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180014410(\"[SAFE] Unknown exception in %s:%d\\n\",\"RunInit\",0x2b);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fbb84;
}

// 0x1802fbbec FUN_1802fbbec
// source: re/dump/decompile/0x1802fbbec_FUN_1802fbbec.c
// size: 38 bytes; thunk: false
// body sha256: f17311a9a1adb9e20d9078302747efca2ca3a7e2fafc6e45a484c14d4d01d070
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbbec{
    "0x1802fbbec",
    "FUN_1802fbbec",
    R"F1802fbbecS(undefined FUN_1802fbbec())F1802fbbecS",
    R"B1802fbbec(// 0x1802fbbec  FUN_1802fbbec
// size=38 thunk=false
// signature: undefined FUN_1802fbbec()
// status: ok


void FUN_1802fbbec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802fbbec",
    "f17311a9a1adb9e20d9078302747efca2ca3a7e2fafc6e45a484c14d4d01d070",
    R"F1802fbbecC(FUN_180209d90)F1802fbbecC",
    R"F1802fbbecD()F1802fbbecD",
    R"F1802fbbecT()F1802fbbecT",
    R"F1802fbbecF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fbbecF",
    R"F1802fbbecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbbecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbbec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbbec", "FUN_1802fbbec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209d90", load_at<std::uint64_t>(param_2 + 0x28, 0));
    trace.call_target("FUN_180209d90", reinterpret_cast<const void*>(&image::FUN_180209d90));
    // body sha256: f17311a9a1adb9e20d9078302747efca2ca3a7e2fafc6e45a484c14d4d01d070
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209d90(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fbbec;
}

// 0x1802fbc38 FUN_1802fbc38
// source: re/dump/decompile/0x1802fbc38_FUN_1802fbc38.c
// size: 61 bytes; thunk: false
// body sha256: fb8f456ad9bc7fb06312de0ddea0bc0ae01d86b6523f1e75a06d3da1d8b7ed3a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbc38{
    "0x1802fbc38",
    "FUN_1802fbc38",
    R"F1802fbc38S(undefined FUN_1802fbc38())F1802fbc38S",
    R"B1802fbc38(// 0x1802fbc38  FUN_1802fbc38
// size=61 thunk=false
// signature: undefined FUN_1802fbc38()
// status: ok


undefined8 FUN_1802fbc38(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4) +
             (longlong)*(longlong **)(param_2 + 0x80)),4,true);
  return 0;
}


)B1802fbc38",
    "fb8f456ad9bc7fb06312de0ddea0bc0ae01d86b6523f1e75a06d3da1d8b7ed3a",
    R"F1802fbc38C()F1802fbc38C",
    R"F1802fbc38D()F1802fbc38D",
    R"F1802fbc38T()F1802fbc38T",
    R"F1802fbc38F(14: return 0;)F1802fbc38F",
    R"F1802fbc38U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbc38U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbc38() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbc38", "FUN_1802fbc38");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fb8f456ad9bc7fb06312de0ddea0bc0ae01d86b6523f1e75a06d3da1d8b7ed3a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("std::basic_ios<char,std::char_traits<char>_>::setstate");
            trace.statement("((basic_ios<char,std::char_traits<char>_> *)");
            trace.statement("((longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4) +");
            trace.statement("(longlong)*(longlong **)(param_2 + 0x80)),4,true);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802fbc38;
}

// 0x1802fbc90 FUN_1802fbc90
// source: re/dump/decompile/0x1802fbc90_FUN_1802fbc90.c
// size: 38 bytes; thunk: false
// body sha256: 20020ed0eda2de46cb0933ffa1206001828481d471a7e9558300c51141bfc7d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbc90{
    "0x1802fbc90",
    "FUN_1802fbc90",
    R"F1802fbc90S(undefined FUN_1802fbc90())F1802fbc90S",
    R"B1802fbc90(// 0x1802fbc90  FUN_1802fbc90
// size=38 thunk=false
// signature: undefined FUN_1802fbc90()
// status: ok


void FUN_1802fbc90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802fbc90",
    "20020ed0eda2de46cb0933ffa1206001828481d471a7e9558300c51141bfc7d7",
    R"F1802fbc90C()F1802fbc90C",
    R"F1802fbc90D()F1802fbc90D",
    R"F1802fbc90T()F1802fbc90T",
    R"F1802fbc90F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fbc90F",
    R"F1802fbc90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbc90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbc90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbc90", "FUN_1802fbc90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x60, 0));
    // body sha256: 20020ed0eda2de46cb0933ffa1206001828481d471a7e9558300c51141bfc7d7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fbc90;
}

// 0x1802fbcc0 FUN_1802fbcc0
// source: re/dump/decompile/0x1802fbcc0_FUN_1802fbcc0.c
// size: 38 bytes; thunk: false
// body sha256: 79ee180be6b8ad7af72fd0902ab228a6af39dffa6f8d7a018e6b86b71eddc589
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbcc0{
    "0x1802fbcc0",
    "FUN_1802fbcc0",
    R"F1802fbcc0S(undefined FUN_1802fbcc0())F1802fbcc0S",
    R"B1802fbcc0(// 0x1802fbcc0  FUN_1802fbcc0
// size=38 thunk=false
// signature: undefined FUN_1802fbcc0()
// status: ok


void FUN_1802fbcc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802fbcc0",
    "79ee180be6b8ad7af72fd0902ab228a6af39dffa6f8d7a018e6b86b71eddc589",
    R"F1802fbcc0C()F1802fbcc0C",
    R"F1802fbcc0D()F1802fbcc0D",
    R"F1802fbcc0T()F1802fbcc0T",
    R"F1802fbcc0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802fbcc0F",
    R"F1802fbcc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbcc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbcc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbcc0", "FUN_1802fbcc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x60, 0));
    // body sha256: 79ee180be6b8ad7af72fd0902ab228a6af39dffa6f8d7a018e6b86b71eddc589
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x40, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fbcc0;
}

// 0x1802fbd00 FUN_1802fbd00
// source: re/dump/decompile/0x1802fbd00_FUN_1802fbd00.c
// size: 42 bytes; thunk: false
// body sha256: 5488672e4a7230239d6f58ead56f3e7423408f6f94e93c2e54dd75d02f88fe2e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbd00{
    "0x1802fbd00",
    "FUN_1802fbd00",
    R"F1802fbd00S(undefined FUN_1802fbd00())F1802fbd00S",
    R"B1802fbd00(// 0x1802fbd00  FUN_1802fbd00
// size=42 thunk=false
// signature: undefined FUN_1802fbd00()
// status: ok


void FUN_1802fbd00(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_(*(void **)(param_2 + 0x28),0x48,4,FUN_180021090);
  return;
}


)B1802fbd00",
    "5488672e4a7230239d6f58ead56f3e7423408f6f94e93c2e54dd75d02f88fe2e",
    R"F1802fbd00C(FUN_180021090)F1802fbd00C",
    R"F1802fbd00D()F1802fbd00D",
    R"F1802fbd00T()F1802fbd00T",
    R"F1802fbd00F(11: return;)F1802fbd00F",
    R"F1802fbd00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbd00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbd00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbd00", "FUN_1802fbd00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_eh_vector_destructor_iterator_", *(void **)(param_2 + 0x28), 0x48, 4, &image::FUN_180021090);
    trace.call_target("FUN_180021090", reinterpret_cast<const void*>(&image::FUN_180021090));
    // body sha256: 5488672e4a7230239d6f58ead56f3e7423408f6f94e93c2e54dd75d02f88fe2e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("_eh_vector_destructor_iterator_(*(void **)(param_2 + 0x28),0x48,4,FUN_180021090);");
            trace.statement("return;");
        }
    return kFunction_0x1802fbd00;
}

// 0x1802fbe00 FUN_1802fbe00
// source: re/dump/decompile/0x1802fbe00_FUN_1802fbe00.c
// size: 38 bytes; thunk: false
// body sha256: 71b30b81455add1863d61eaf07a58f423933446dc61ccf8dafc3f38ace5de253
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbe00{
    "0x1802fbe00",
    "FUN_1802fbe00",
    R"F1802fbe00S(undefined FUN_1802fbe00())F1802fbe00S",
    R"B1802fbe00(// 0x1802fbe00  FUN_1802fbe00
// size=38 thunk=false
// signature: undefined FUN_1802fbe00()
// status: ok


void FUN_1802fbe00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


)B1802fbe00",
    "71b30b81455add1863d61eaf07a58f423933446dc61ccf8dafc3f38ace5de253",
    R"F1802fbe00C()F1802fbe00C",
    R"F1802fbe00D()F1802fbe00D",
    R"F1802fbe00T()F1802fbe00T",
    R"F1802fbe00F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802fbe00F",
    R"F1802fbe00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbe00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbe00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbe00", "FUN_1802fbe00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", load_at<std::uint64_t>(param_2 + 0x60, 0));
    // body sha256: 71b30b81455add1863d61eaf07a58f423933446dc61ccf8dafc3f38ace5de253
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x30, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x60));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fbe00;
}

// 0x1802fbe64 FUN_1802fbe64
// source: re/dump/decompile/0x1802fbe64_FUN_1802fbe64.c
// size: 38 bytes; thunk: false
// body sha256: ea1a53546dcd00c24b2fd5d043d955e59a007ce4a17eba3a0b26a773509f99af
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbe64{
    "0x1802fbe64",
    "FUN_1802fbe64",
    R"F1802fbe64S(undefined FUN_1802fbe64())F1802fbe64S",
    R"B1802fbe64(// 0x1802fbe64  FUN_1802fbe64
// size=38 thunk=false
// signature: undefined FUN_1802fbe64()
// status: ok


void FUN_1802fbe64(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    FUN_18020c610(param_2 + 0x30);
  }
  return;
}


)B1802fbe64",
    "ea1a53546dcd00c24b2fd5d043d955e59a007ce4a17eba3a0b26a773509f99af",
    R"F1802fbe64C(FUN_18020c610)F1802fbe64C",
    R"F1802fbe64D()F1802fbe64D",
    R"F1802fbe64T()F1802fbe64T",
    R"F1802fbe64F(10: if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
14: return;)F1802fbe64F",
    R"F1802fbe64U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbe64U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbe64() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbe64", "FUN_1802fbe64");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020c610", param_2 + 0x30);
    trace.call_target("FUN_18020c610", reinterpret_cast<const void*>(&image::FUN_18020c610));
    // body sha256: ea1a53546dcd00c24b2fd5d043d955e59a007ce4a17eba3a0b26a773509f99af
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x28) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x28, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;");
                trace.statement("FUN_18020c610(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fbe64;
}

// 0x1802fbe8a FUN_1802fbe8a
// source: re/dump/decompile/0x1802fbe8a_FUN_1802fbe8a.c
// size: 29 bytes; thunk: false
// body sha256: 45f1ba5014319b4a9a545def6207f56e13a90ae054e1437858504f3518b6126c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbe8a{
    "0x1802fbe8a",
    "FUN_1802fbe8a",
    R"F1802fbe8aS(undefined FUN_1802fbe8a())F1802fbe8aS",
    R"B1802fbe8a(// 0x1802fbe8a  FUN_1802fbe8a
// size=29 thunk=false
// signature: undefined FUN_1802fbe8a()
// status: ok


void FUN_1802fbe8a(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}


)B1802fbe8a",
    "45f1ba5014319b4a9a545def6207f56e13a90ae054e1437858504f3518b6126c",
    R"F1802fbe8aC()F1802fbe8aC",
    R"F1802fbe8aD()F1802fbe8aD",
    R"F1802fbe8aT()F1802fbe8aT",
    R"F1802fbe8aF(11: return;)F1802fbe8aF",
    R"F1802fbe8aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbe8aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbe8a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbe8a", "FUN_1802fbe8a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", *(void **)(param_2 + 0x20));
    // body sha256: 45f1ba5014319b4a9a545def6207f56e13a90ae054e1437858504f3518b6126c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("free(*(void **)(param_2 + 0x20));");
            trace.statement("return;");
        }
    return kFunction_0x1802fbe8a;
}

// 0x1802fbee0 FUN_1802fbee0
// source: re/dump/decompile/0x1802fbee0_FUN_1802fbee0.c
// size: 46 bytes; thunk: false
// body sha256: e3cb1f74f8154111945445799768678b2ed5584da8f29e4698b2a0cff954ed84
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbee0{
    "0x1802fbee0",
    "FUN_1802fbee0",
    R"F1802fbee0S(undefined FUN_1802fbee0())F1802fbee0S",
    R"B1802fbee0(// 0x1802fbee0  FUN_1802fbee0
// size=46 thunk=false
// signature: undefined FUN_1802fbee0()
// status: ok


void FUN_1802fbee0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xb0));
  }
  return;
}


)B1802fbee0",
    "e3cb1f74f8154111945445799768678b2ed5584da8f29e4698b2a0cff954ed84",
    R"F1802fbee0C()F1802fbee0C",
    R"F1802fbee0D()F1802fbee0D",
    R"F1802fbee0T()F1802fbee0T",
    R"F1802fbee0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
15: return;)F1802fbee0F",
    R"F1802fbee0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbee0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbee0", "FUN_1802fbee0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e3cb1f74f8154111945445799768678b2ed5584da8f29e4698b2a0cff954ed84
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xb0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fbee0;
}

// 0x1802fbf50 FUN_1802fbf50
// source: re/dump/decompile/0x1802fbf50_FUN_1802fbf50.c
// size: 46 bytes; thunk: false
// body sha256: 7560086b836a61ef656997ded19cd57f284a670f740bb08c37b0d445b6210f0c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fbf50{
    "0x1802fbf50",
    "FUN_1802fbf50",
    R"F1802fbf50S(undefined FUN_1802fbf50())F1802fbf50S",
    R"B1802fbf50(// 0x1802fbf50  FUN_1802fbf50
// size=46 thunk=false
// signature: undefined FUN_1802fbf50()
// status: ok


void FUN_1802fbf50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xa8));
  }
  return;
}


)B1802fbf50",
    "7560086b836a61ef656997ded19cd57f284a670f740bb08c37b0d445b6210f0c",
    R"F1802fbf50C()F1802fbf50C",
    R"F1802fbf50D()F1802fbf50D",
    R"F1802fbf50T()F1802fbf50T",
    R"F1802fbf50F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
15: return;)F1802fbf50F",
    R"F1802fbf50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fbf50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fbf50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fbf50", "FUN_1802fbf50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7560086b836a61ef656997ded19cd57f284a670f740bb08c37b0d445b6210f0c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xa8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fbf50;
}

// 0x1802fc000 FUN_1802fc000
// source: re/dump/decompile/0x1802fc000_FUN_1802fc000.c
// size: 38 bytes; thunk: false
// body sha256: 65e6189760acae17aee3bdaeffa1ab3a4a8c0e873f8043cf60405798e9af6375
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802fc000{
    "0x1802fc000",
    "FUN_1802fc000",
    R"F1802fc000S(undefined FUN_1802fc000())F1802fc000S",
    R"B1802fc000(// 0x1802fc000  FUN_1802fc000
// size=38 thunk=false
// signature: undefined FUN_1802fc000()
// status: ok


void FUN_1802fc000(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802fc000",
    "65e6189760acae17aee3bdaeffa1ab3a4a8c0e873f8043cf60405798e9af6375",
    R"F1802fc000C()F1802fc000C",
    R"F1802fc000D()F1802fc000D",
    R"F1802fc000T()F1802fc000T",
    R"F1802fc000F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802fc000F",
    R"F1802fc000U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802fc000U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802fc000() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802fc000", "FUN_1802fc000");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", load_at<std::uint64_t>(param_2 + 0x58, 0));
    // body sha256: 65e6189760acae17aee3bdaeffa1ab3a4a8c0e873f8043cf60405798e9af6375
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((load_at<std::uint32_t>(param_2 + 0x20, 0) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802fc000;
}

}  // namespace sf::reconstructed
