// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802f4fd1 FUN_1802f4fd1
// source: re/dump/decompile/0x1802f4fd1_FUN_1802f4fd1.c
// size: 41 bytes; thunk: false
// body sha256: 35fcca4220d797621ab09d93021e3e663e39a90fc8a0cc49c4d2e1375c5994fd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f4fd1{
    "0x1802f4fd1",
    "FUN_1802f4fd1",
    R"F1802f4fd1S(undefined FUN_1802f4fd1())F1802f4fd1S",
    R"B1802f4fd1(// 0x1802f4fd1  FUN_1802f4fd1
// size=41 thunk=false
// signature: undefined FUN_1802f4fd1()
// status: ok


void FUN_1802f4fd1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x10) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


)B1802f4fd1",
    "35fcca4220d797621ab09d93021e3e663e39a90fc8a0cc49c4d2e1375c5994fd",
    R"F1802f4fd1C()F1802f4fd1C",
    R"F1802f4fd1D()F1802f4fd1D",
    R"F1802f4fd1T()F1802f4fd1T",
    R"F1802f4fd1F(10: if ((*(uint *)(param_2 + 0x24) & 0x10) != 0) {
14: return;)F1802f4fd1F",
    R"F1802f4fd1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f4fd1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f4fd1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f4fd1", "FUN_1802f4fd1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x188);
    // body sha256: 35fcca4220d797621ab09d93021e3e663e39a90fc8a0cc49c4d2e1375c5994fd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x24) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f4fd1;
}

// 0x1802f501e FUN_1802f501e
// source: re/dump/decompile/0x1802f501e_FUN_1802f501e.c
// size: 46 bytes; thunk: false
// body sha256: d77245e3efb56d9594a79725322242f899a9b082489d78ac8227b4fac7ccea44
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f501e{
    "0x1802f501e",
    "FUN_1802f501e",
    R"F1802f501eS(undefined FUN_1802f501e())F1802f501eS",
    R"B1802f501e(// 0x1802f501e  FUN_1802f501e
// size=46 thunk=false
// signature: undefined FUN_1802f501e()
// status: ok


void FUN_1802f501e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x80) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


)B1802f501e",
    "d77245e3efb56d9594a79725322242f899a9b082489d78ac8227b4fac7ccea44",
    R"F1802f501eC()F1802f501eC",
    R"F1802f501eD()F1802f501eD",
    R"F1802f501eT()F1802f501eT",
    R"F1802f501eF(10: if ((*(uint *)(param_2 + 0x24) & 0x80) != 0) {
14: return;)F1802f501eF",
    R"F1802f501eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f501eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f501e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f501e", "FUN_1802f501e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x188);
    // body sha256: d77245e3efb56d9594a79725322242f899a9b082489d78ac8227b4fac7ccea44
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x24) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f501e;
}

// 0x1802f504c FUN_1802f504c
// source: re/dump/decompile/0x1802f504c_FUN_1802f504c.c
// size: 46 bytes; thunk: false
// body sha256: 1f93ec32e525a77deb5de9ddac5da1958d95b7b2c37b5be879d50200a78a4934
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f504c{
    "0x1802f504c",
    "FUN_1802f504c",
    R"F1802f504cS(undefined FUN_1802f504c())F1802f504cS",
    R"B1802f504c(// 0x1802f504c  FUN_1802f504c
// size=46 thunk=false
// signature: undefined FUN_1802f504c()
// status: ok


void FUN_1802f504c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x100) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


)B1802f504c",
    "1f93ec32e525a77deb5de9ddac5da1958d95b7b2c37b5be879d50200a78a4934",
    R"F1802f504cC()F1802f504cC",
    R"F1802f504cD()F1802f504cD",
    R"F1802f504cT()F1802f504cT",
    R"F1802f504cF(10: if ((*(uint *)(param_2 + 0x24) & 0x100) != 0) {
14: return;)F1802f504cF",
    R"F1802f504cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f504cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f504c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f504c", "FUN_1802f504c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1a8);
    // body sha256: 1f93ec32e525a77deb5de9ddac5da1958d95b7b2c37b5be879d50200a78a4934
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x24) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f504c;
}

// 0x1802f509e FUN_1802f509e
// source: re/dump/decompile/0x1802f509e_FUN_1802f509e.c
// size: 46 bytes; thunk: false
// body sha256: 49aa562efb8650e8fcf76b32fbd7420674998fa027e53adf47a625f8080f7893
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f509e{
    "0x1802f509e",
    "FUN_1802f509e",
    R"F1802f509eS(undefined FUN_1802f509e())F1802f509eS",
    R"B1802f509e(// 0x1802f509e  FUN_1802f509e
// size=46 thunk=false
// signature: undefined FUN_1802f509e()
// status: ok


void FUN_1802f509e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x800) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


)B1802f509e",
    "49aa562efb8650e8fcf76b32fbd7420674998fa027e53adf47a625f8080f7893",
    R"F1802f509eC()F1802f509eC",
    R"F1802f509eD()F1802f509eD",
    R"F1802f509eT()F1802f509eT",
    R"F1802f509eF(10: if ((*(uint *)(param_2 + 0x24) & 0x800) != 0) {
14: return;)F1802f509eF",
    R"F1802f509eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f509eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f509e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f509e", "FUN_1802f509e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1a8);
    // body sha256: 49aa562efb8650e8fcf76b32fbd7420674998fa027e53adf47a625f8080f7893
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x24) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f509e;
}

// 0x1802f50cc FUN_1802f50cc
// source: re/dump/decompile/0x1802f50cc_FUN_1802f50cc.c
// size: 43 bytes; thunk: false
// body sha256: 274cc48895b47af26c58b51445ca7f8b4ef88ae000bd780941b1e4e1859be52b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f50cc{
    "0x1802f50cc",
    "FUN_1802f50cc",
    R"F1802f50ccS(undefined FUN_1802f50cc())F1802f50ccS",
    R"B1802f50cc(// 0x1802f50cc  FUN_1802f50cc
// size=43 thunk=false
// signature: undefined FUN_1802f50cc()
// status: ok


void FUN_1802f50cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f50cc",
    "274cc48895b47af26c58b51445ca7f8b4ef88ae000bd780941b1e4e1859be52b",
    R"F1802f50ccC()F1802f50ccC",
    R"F1802f50ccD()F1802f50ccD",
    R"F1802f50ccT()F1802f50ccT",
    R"F1802f50ccF(10: if ((*(uint *)(param_2 + 0x24) & 0x1000) != 0) {
14: return;)F1802f50ccF",
    R"F1802f50ccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f50ccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f50cc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f50cc", "FUN_1802f50cc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x28);
    // body sha256: 274cc48895b47af26c58b51445ca7f8b4ef88ae000bd780941b1e4e1859be52b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x24) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x24) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f50cc;
}

// 0x1802f5268 FUN_1802f5268
// source: re/dump/decompile/0x1802f5268_FUN_1802f5268.c
// size: 41 bytes; thunk: false
// body sha256: 6904572d0f34fac8b798f2f1f5e7f15deace68871aae5d5a61f9dd254b37359d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5268{
    "0x1802f5268",
    "FUN_1802f5268",
    R"F1802f5268S(undefined FUN_1802f5268())F1802f5268S",
    R"B1802f5268(// 0x1802f5268  FUN_1802f5268
// size=41 thunk=false
// signature: undefined FUN_1802f5268()
// status: ok


void FUN_1802f5268(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802f5268",
    "6904572d0f34fac8b798f2f1f5e7f15deace68871aae5d5a61f9dd254b37359d",
    R"F1802f5268C()F1802f5268C",
    R"F1802f5268D()F1802f5268D",
    R"F1802f5268T()F1802f5268T",
    R"F1802f5268F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f5268F",
    R"F1802f5268U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5268U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5268() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5268", "FUN_1802f5268");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x120);
    // body sha256: 6904572d0f34fac8b798f2f1f5e7f15deace68871aae5d5a61f9dd254b37359d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5268;
}

// 0x1802f52b5 FUN_1802f52b5
// source: re/dump/decompile/0x1802f52b5_FUN_1802f52b5.c
// size: 41 bytes; thunk: false
// body sha256: d4b5ef78c45797a91904c91743cb764d05b246bcad84f4a36b38a6d5c694878d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f52b5{
    "0x1802f52b5",
    "FUN_1802f52b5",
    R"F1802f52b5S(undefined FUN_1802f52b5())F1802f52b5S",
    R"B1802f52b5(// 0x1802f52b5  FUN_1802f52b5
// size=41 thunk=false
// signature: undefined FUN_1802f52b5()
// status: ok


void FUN_1802f52b5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802f52b5",
    "d4b5ef78c45797a91904c91743cb764d05b246bcad84f4a36b38a6d5c694878d",
    R"F1802f52b5C()F1802f52b5C",
    R"F1802f52b5D()F1802f52b5D",
    R"F1802f52b5T()F1802f52b5T",
    R"F1802f52b5F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f52b5F",
    R"F1802f52b5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f52b5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f52b5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f52b5", "FUN_1802f52b5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x120);
    // body sha256: d4b5ef78c45797a91904c91743cb764d05b246bcad84f4a36b38a6d5c694878d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f52b5;
}

// 0x1802f52f6 FUN_1802f52f6
// source: re/dump/decompile/0x1802f52f6_FUN_1802f52f6.c
// size: 46 bytes; thunk: false
// body sha256: bcc852a9b8494dc1b2c9f1a9e3663c7907fd0dce343766bd39c0ef958cd9abfa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f52f6{
    "0x1802f52f6",
    "FUN_1802f52f6",
    R"F1802f52f6S(undefined FUN_1802f52f6())F1802f52f6S",
    R"B1802f52f6(// 0x1802f52f6  FUN_1802f52f6
// size=46 thunk=false
// signature: undefined FUN_1802f52f6()
// status: ok


void FUN_1802f52f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1802f52f6",
    "bcc852a9b8494dc1b2c9f1a9e3663c7907fd0dce343766bd39c0ef958cd9abfa",
    R"F1802f52f6C()F1802f52f6C",
    R"F1802f52f6D()F1802f52f6D",
    R"F1802f52f6T()F1802f52f6T",
    R"F1802f52f6F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802f52f6F",
    R"F1802f52f6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f52f6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f52f6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f52f6", "FUN_1802f52f6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x140);
    // body sha256: bcc852a9b8494dc1b2c9f1a9e3663c7907fd0dce343766bd39c0ef958cd9abfa
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f52f6;
}

// 0x1802f5348 FUN_1802f5348
// source: re/dump/decompile/0x1802f5348_FUN_1802f5348.c
// size: 46 bytes; thunk: false
// body sha256: fe2914ed16f13f7e18f4818fe8f377ff21e89280211c52da1888856d7fcd601f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5348{
    "0x1802f5348",
    "FUN_1802f5348",
    R"F1802f5348S(undefined FUN_1802f5348())F1802f5348S",
    R"B1802f5348(// 0x1802f5348  FUN_1802f5348
// size=46 thunk=false
// signature: undefined FUN_1802f5348()
// status: ok


void FUN_1802f5348(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1802f5348",
    "fe2914ed16f13f7e18f4818fe8f377ff21e89280211c52da1888856d7fcd601f",
    R"F1802f5348C()F1802f5348C",
    R"F1802f5348D()F1802f5348D",
    R"F1802f5348T()F1802f5348T",
    R"F1802f5348F(10: if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
14: return;)F1802f5348F",
    R"F1802f5348U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5348U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5348() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5348", "FUN_1802f5348");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x140);
    // body sha256: fe2914ed16f13f7e18f4818fe8f377ff21e89280211c52da1888856d7fcd601f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5348;
}

// 0x1802f5376 FUN_1802f5376
// source: re/dump/decompile/0x1802f5376_FUN_1802f5376.c
// size: 46 bytes; thunk: false
// body sha256: 8d45987b56d8bc1c8cd7be922373b941f1498dc30ad45f315c05d954705a9f47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5376{
    "0x1802f5376",
    "FUN_1802f5376",
    R"F1802f5376S(undefined FUN_1802f5376())F1802f5376S",
    R"B1802f5376(// 0x1802f5376  FUN_1802f5376
// size=46 thunk=false
// signature: undefined FUN_1802f5376()
// status: ok


void FUN_1802f5376(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


)B1802f5376",
    "8d45987b56d8bc1c8cd7be922373b941f1498dc30ad45f315c05d954705a9f47",
    R"F1802f5376C()F1802f5376C",
    R"F1802f5376D()F1802f5376D",
    R"F1802f5376T()F1802f5376T",
    R"F1802f5376F(10: if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
14: return;)F1802f5376F",
    R"F1802f5376U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5376U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5376() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5376", "FUN_1802f5376");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x160);
    // body sha256: 8d45987b56d8bc1c8cd7be922373b941f1498dc30ad45f315c05d954705a9f47
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5376;
}

// 0x1802f53c8 FUN_1802f53c8
// source: re/dump/decompile/0x1802f53c8_FUN_1802f53c8.c
// size: 46 bytes; thunk: false
// body sha256: 926eccdebdb8badd128e3ef0f68aab6983da30c50b62136f734441671830a597
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f53c8{
    "0x1802f53c8",
    "FUN_1802f53c8",
    R"F1802f53c8S(undefined FUN_1802f53c8())F1802f53c8S",
    R"B1802f53c8(// 0x1802f53c8  FUN_1802f53c8
// size=46 thunk=false
// signature: undefined FUN_1802f53c8()
// status: ok


void FUN_1802f53c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


)B1802f53c8",
    "926eccdebdb8badd128e3ef0f68aab6983da30c50b62136f734441671830a597",
    R"F1802f53c8C()F1802f53c8C",
    R"F1802f53c8D()F1802f53c8D",
    R"F1802f53c8T()F1802f53c8T",
    R"F1802f53c8F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
14: return;)F1802f53c8F",
    R"F1802f53c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f53c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f53c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f53c8", "FUN_1802f53c8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x160);
    // body sha256: 926eccdebdb8badd128e3ef0f68aab6983da30c50b62136f734441671830a597
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f53c8;
}

// 0x1802f53f6 FUN_1802f53f6
// source: re/dump/decompile/0x1802f53f6_FUN_1802f53f6.c
// size: 46 bytes; thunk: false
// body sha256: 4c7d811f5ad036f3272de6fec34b9cf95c69fd34285ce5c0a29294b6fd69548c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f53f6{
    "0x1802f53f6",
    "FUN_1802f53f6",
    R"F1802f53f6S(undefined FUN_1802f53f6())F1802f53f6S",
    R"B1802f53f6(// 0x1802f53f6  FUN_1802f53f6
// size=46 thunk=false
// signature: undefined FUN_1802f53f6()
// status: ok


void FUN_1802f53f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);
  }
  return;
}


)B1802f53f6",
    "4c7d811f5ad036f3272de6fec34b9cf95c69fd34285ce5c0a29294b6fd69548c",
    R"F1802f53f6C()F1802f53f6C",
    R"F1802f53f6D()F1802f53f6D",
    R"F1802f53f6T()F1802f53f6T",
    R"F1802f53f6F(10: if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
14: return;)F1802f53f6F",
    R"F1802f53f6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f53f6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f53f6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f53f6", "FUN_1802f53f6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x180);
    // body sha256: 4c7d811f5ad036f3272de6fec34b9cf95c69fd34285ce5c0a29294b6fd69548c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f53f6;
}

// 0x1802f5448 FUN_1802f5448
// source: re/dump/decompile/0x1802f5448_FUN_1802f5448.c
// size: 46 bytes; thunk: false
// body sha256: 02e57c2740e857b30676dd9cb15a8dfa0ca56cf0ac7f496528011624a8642bf5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5448{
    "0x1802f5448",
    "FUN_1802f5448",
    R"F1802f5448S(undefined FUN_1802f5448())F1802f5448S",
    R"B1802f5448(// 0x1802f5448  FUN_1802f5448
// size=46 thunk=false
// signature: undefined FUN_1802f5448()
// status: ok


void FUN_1802f5448(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);
  }
  return;
}


)B1802f5448",
    "02e57c2740e857b30676dd9cb15a8dfa0ca56cf0ac7f496528011624a8642bf5",
    R"F1802f5448C()F1802f5448C",
    R"F1802f5448D()F1802f5448D",
    R"F1802f5448T()F1802f5448T",
    R"F1802f5448F(10: if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
14: return;)F1802f5448F",
    R"F1802f5448U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5448U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5448() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5448", "FUN_1802f5448");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x180);
    // body sha256: 02e57c2740e857b30676dd9cb15a8dfa0ca56cf0ac7f496528011624a8642bf5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5448;
}

// 0x1802f5476 FUN_1802f5476
// source: re/dump/decompile/0x1802f5476_FUN_1802f5476.c
// size: 46 bytes; thunk: false
// body sha256: 3b29eeece865c31f3022de94dfa1f1faa1549cf8e31ba9a2049d0a55e29e86df
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5476{
    "0x1802f5476",
    "FUN_1802f5476",
    R"F1802f5476S(undefined FUN_1802f5476())F1802f5476S",
    R"B1802f5476(// 0x1802f5476  FUN_1802f5476
// size=46 thunk=false
// signature: undefined FUN_1802f5476()
// status: ok


void FUN_1802f5476(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


)B1802f5476",
    "3b29eeece865c31f3022de94dfa1f1faa1549cf8e31ba9a2049d0a55e29e86df",
    R"F1802f5476C()F1802f5476C",
    R"F1802f5476D()F1802f5476D",
    R"F1802f5476T()F1802f5476T",
    R"F1802f5476F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
14: return;)F1802f5476F",
    R"F1802f5476U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5476U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5476() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5476", "FUN_1802f5476");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1a0);
    // body sha256: 3b29eeece865c31f3022de94dfa1f1faa1549cf8e31ba9a2049d0a55e29e86df
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5476;
}

// 0x1802f54c8 FUN_1802f54c8
// source: re/dump/decompile/0x1802f54c8_FUN_1802f54c8.c
// size: 46 bytes; thunk: false
// body sha256: ee1568d98ac41f044f9fcc277fde2950ffab7bc1171c687e8d6540da55116ed8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f54c8{
    "0x1802f54c8",
    "FUN_1802f54c8",
    R"F1802f54c8S(undefined FUN_1802f54c8())F1802f54c8S",
    R"B1802f54c8(// 0x1802f54c8  FUN_1802f54c8
// size=46 thunk=false
// signature: undefined FUN_1802f54c8()
// status: ok


void FUN_1802f54c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


)B1802f54c8",
    "ee1568d98ac41f044f9fcc277fde2950ffab7bc1171c687e8d6540da55116ed8",
    R"F1802f54c8C()F1802f54c8C",
    R"F1802f54c8D()F1802f54c8D",
    R"F1802f54c8T()F1802f54c8T",
    R"F1802f54c8F(10: if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
14: return;)F1802f54c8F",
    R"F1802f54c8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f54c8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f54c8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f54c8", "FUN_1802f54c8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1a0);
    // body sha256: ee1568d98ac41f044f9fcc277fde2950ffab7bc1171c687e8d6540da55116ed8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x8000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f54c8;
}

// 0x1802f54f6 FUN_1802f54f6
// source: re/dump/decompile/0x1802f54f6_FUN_1802f54f6.c
// size: 46 bytes; thunk: false
// body sha256: 99211b437e97b5459a4ea04fd872ed20570d86fbfe0b59fa61c0ec72fc4b1054
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f54f6{
    "0x1802f54f6",
    "FUN_1802f54f6",
    R"F1802f54f6S(undefined FUN_1802f54f6())F1802f54f6S",
    R"B1802f54f6(// 0x1802f54f6  FUN_1802f54f6
// size=46 thunk=false
// signature: undefined FUN_1802f54f6()
// status: ok


void FUN_1802f54f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);
  }
  return;
}


)B1802f54f6",
    "99211b437e97b5459a4ea04fd872ed20570d86fbfe0b59fa61c0ec72fc4b1054",
    R"F1802f54f6C()F1802f54f6C",
    R"F1802f54f6D()F1802f54f6D",
    R"F1802f54f6T()F1802f54f6T",
    R"F1802f54f6F(10: if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
14: return;)F1802f54f6F",
    R"F1802f54f6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f54f6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f54f6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f54f6", "FUN_1802f54f6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1c0);
    // body sha256: 99211b437e97b5459a4ea04fd872ed20570d86fbfe0b59fa61c0ec72fc4b1054
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f54f6;
}

// 0x1802f5548 FUN_1802f5548
// source: re/dump/decompile/0x1802f5548_FUN_1802f5548.c
// size: 46 bytes; thunk: false
// body sha256: f7e70a6fd0ddc9c03011bd0850de3856914797140cc290147db7681d9e5eddb0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5548{
    "0x1802f5548",
    "FUN_1802f5548",
    R"F1802f5548S(undefined FUN_1802f5548())F1802f5548S",
    R"B1802f5548(// 0x1802f5548  FUN_1802f5548
// size=46 thunk=false
// signature: undefined FUN_1802f5548()
// status: ok


void FUN_1802f5548(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);
  }
  return;
}


)B1802f5548",
    "f7e70a6fd0ddc9c03011bd0850de3856914797140cc290147db7681d9e5eddb0",
    R"F1802f5548C()F1802f5548C",
    R"F1802f5548D()F1802f5548D",
    R"F1802f5548T()F1802f5548T",
    R"F1802f5548F(10: if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
14: return;)F1802f5548F",
    R"F1802f5548U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5548U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5548() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5548", "FUN_1802f5548");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1c0);
    // body sha256: f7e70a6fd0ddc9c03011bd0850de3856914797140cc290147db7681d9e5eddb0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5548;
}

// 0x1802f5576 FUN_1802f5576
// source: re/dump/decompile/0x1802f5576_FUN_1802f5576.c
// size: 41 bytes; thunk: false
// body sha256: 5b7e4a528ce50a589310de7926dd6ebed3a27b929bcb9c1a6ca80b3fbaae67d4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5576{
    "0x1802f5576",
    "FUN_1802f5576",
    R"F1802f5576S(undefined FUN_1802f5576())F1802f5576S",
    R"B1802f5576(// 0x1802f5576  FUN_1802f5576
// size=41 thunk=false
// signature: undefined FUN_1802f5576()
// status: ok


void FUN_1802f5576(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 1) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);
  }
  return;
}


)B1802f5576",
    "5b7e4a528ce50a589310de7926dd6ebed3a27b929bcb9c1a6ca80b3fbaae67d4",
    R"F1802f5576C()F1802f5576C",
    R"F1802f5576D()F1802f5576D",
    R"F1802f5576T()F1802f5576T",
    R"F1802f5576F(10: if ((*(uint *)(param_2 + 0x2c) & 1) != 0) {
14: return;)F1802f5576F",
    R"F1802f5576U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5576U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5576() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5576", "FUN_1802f5576");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1e0);
    // body sha256: 5b7e4a528ce50a589310de7926dd6ebed3a27b929bcb9c1a6ca80b3fbaae67d4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x2c) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x2c) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5576;
}

// 0x1802f55c3 FUN_1802f55c3
// source: re/dump/decompile/0x1802f55c3_FUN_1802f55c3.c
// size: 41 bytes; thunk: false
// body sha256: c79f88d23f5b9e346a25c96dacb93fd0ee235d38d17b37517641449cb650e5a1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f55c3{
    "0x1802f55c3",
    "FUN_1802f55c3",
    R"F1802f55c3S(undefined FUN_1802f55c3())F1802f55c3S",
    R"B1802f55c3(// 0x1802f55c3  FUN_1802f55c3
// size=41 thunk=false
// signature: undefined FUN_1802f55c3()
// status: ok


void FUN_1802f55c3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 8) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);
  }
  return;
}


)B1802f55c3",
    "c79f88d23f5b9e346a25c96dacb93fd0ee235d38d17b37517641449cb650e5a1",
    R"F1802f55c3C()F1802f55c3C",
    R"F1802f55c3D()F1802f55c3D",
    R"F1802f55c3T()F1802f55c3T",
    R"F1802f55c3F(10: if ((*(uint *)(param_2 + 0x2c) & 8) != 0) {
14: return;)F1802f55c3F",
    R"F1802f55c3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f55c3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f55c3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f55c3", "FUN_1802f55c3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1e0);
    // body sha256: c79f88d23f5b9e346a25c96dacb93fd0ee235d38d17b37517641449cb650e5a1
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x2c) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x2c) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f55c3;
}

// 0x1802f55ec FUN_1802f55ec
// source: re/dump/decompile/0x1802f55ec_FUN_1802f55ec.c
// size: 41 bytes; thunk: false
// body sha256: 7818dc1b8536047d2d7f3b59955b9ec429ff6903e45fcf756b2c78c28b65964e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f55ec{
    "0x1802f55ec",
    "FUN_1802f55ec",
    R"F1802f55ecS(undefined FUN_1802f55ec())F1802f55ecS",
    R"B1802f55ec(// 0x1802f55ec  FUN_1802f55ec
// size=41 thunk=false
// signature: undefined FUN_1802f55ec()
// status: ok


void FUN_1802f55ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802f55ec",
    "7818dc1b8536047d2d7f3b59955b9ec429ff6903e45fcf756b2c78c28b65964e",
    R"F1802f55ecC()F1802f55ecC",
    R"F1802f55ecD()F1802f55ecD",
    R"F1802f55ecT()F1802f55ecT",
    R"F1802f55ecF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f55ecF",
    R"F1802f55ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f55ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f55ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f55ec", "FUN_1802f55ec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xc0);
    // body sha256: 7818dc1b8536047d2d7f3b59955b9ec429ff6903e45fcf756b2c78c28b65964e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f55ec;
}

// 0x1802f5639 FUN_1802f5639
// source: re/dump/decompile/0x1802f5639_FUN_1802f5639.c
// size: 46 bytes; thunk: false
// body sha256: a330de019288b96ca18a738a44cf8b9c380b9e2e4c86940f4a4aaad2d3ac7aef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5639{
    "0x1802f5639",
    "FUN_1802f5639",
    R"F1802f5639S(undefined FUN_1802f5639())F1802f5639S",
    R"B1802f5639(// 0x1802f5639  FUN_1802f5639
// size=46 thunk=false
// signature: undefined FUN_1802f5639()
// status: ok


void FUN_1802f5639(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802f5639",
    "a330de019288b96ca18a738a44cf8b9c380b9e2e4c86940f4a4aaad2d3ac7aef",
    R"F1802f5639C()F1802f5639C",
    R"F1802f5639D()F1802f5639D",
    R"F1802f5639T()F1802f5639T",
    R"F1802f5639F(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802f5639F",
    R"F1802f5639U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5639U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5639() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5639", "FUN_1802f5639");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xc0);
    // body sha256: a330de019288b96ca18a738a44cf8b9c380b9e2e4c86940f4a4aaad2d3ac7aef
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5639;
}

// 0x1802f5667 FUN_1802f5667
// source: re/dump/decompile/0x1802f5667_FUN_1802f5667.c
// size: 46 bytes; thunk: false
// body sha256: 05ed372b91b79fdc868ebb4d1f3a18ed134b9c95cb5842cd7fb24ca2a8796cd6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5667{
    "0x1802f5667",
    "FUN_1802f5667",
    R"F1802f5667S(undefined FUN_1802f5667())F1802f5667S",
    R"B1802f5667(// 0x1802f5667  FUN_1802f5667
// size=46 thunk=false
// signature: undefined FUN_1802f5667()
// status: ok


void FUN_1802f5667(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f5667",
    "05ed372b91b79fdc868ebb4d1f3a18ed134b9c95cb5842cd7fb24ca2a8796cd6",
    R"F1802f5667C()F1802f5667C",
    R"F1802f5667D()F1802f5667D",
    R"F1802f5667T()F1802f5667T",
    R"F1802f5667F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802f5667F",
    R"F1802f5667U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5667U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5667() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5667", "FUN_1802f5667");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe0);
    // body sha256: 05ed372b91b79fdc868ebb4d1f3a18ed134b9c95cb5842cd7fb24ca2a8796cd6
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5667;
}

// 0x1802f56b9 FUN_1802f56b9
// source: re/dump/decompile/0x1802f56b9_FUN_1802f56b9.c
// size: 46 bytes; thunk: false
// body sha256: 7db9131466317a680392796364e97529c8f0301a9fe3fd5b50e8c4a5bb1ff709
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f56b9{
    "0x1802f56b9",
    "FUN_1802f56b9",
    R"F1802f56b9S(undefined FUN_1802f56b9())F1802f56b9S",
    R"B1802f56b9(// 0x1802f56b9  FUN_1802f56b9
// size=46 thunk=false
// signature: undefined FUN_1802f56b9()
// status: ok


void FUN_1802f56b9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f56b9",
    "7db9131466317a680392796364e97529c8f0301a9fe3fd5b50e8c4a5bb1ff709",
    R"F1802f56b9C()F1802f56b9C",
    R"F1802f56b9D()F1802f56b9D",
    R"F1802f56b9T()F1802f56b9T",
    R"F1802f56b9F(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802f56b9F",
    R"F1802f56b9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f56b9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f56b9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f56b9", "FUN_1802f56b9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe0);
    // body sha256: 7db9131466317a680392796364e97529c8f0301a9fe3fd5b50e8c4a5bb1ff709
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f56b9;
}

// 0x1802f5867 FUN_1802f5867
// source: re/dump/decompile/0x1802f5867_FUN_1802f5867.c
// size: 41 bytes; thunk: false
// body sha256: 75ecdd0e7fc1ad8aa320f89d41bf5644096c0d1f6fc8f2334c4785dd71ec2ada
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5867{
    "0x1802f5867",
    "FUN_1802f5867",
    R"F1802f5867S(undefined FUN_1802f5867())F1802f5867S",
    R"B1802f5867(// 0x1802f5867  FUN_1802f5867
// size=41 thunk=false
// signature: undefined FUN_1802f5867()
// status: ok


void FUN_1802f5867(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 0x20) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f5867",
    "75ecdd0e7fc1ad8aa320f89d41bf5644096c0d1f6fc8f2334c4785dd71ec2ada",
    R"F1802f5867C()F1802f5867C",
    R"F1802f5867D()F1802f5867D",
    R"F1802f5867T()F1802f5867T",
    R"F1802f5867F(10: if ((*(uint *)(param_2 + 0x2c) & 0x20) != 0) {
14: return;)F1802f5867F",
    R"F1802f5867U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5867U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5867() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5867", "FUN_1802f5867");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x100);
    // body sha256: 75ecdd0e7fc1ad8aa320f89d41bf5644096c0d1f6fc8f2334c4785dd71ec2ada
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x2c) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x2c) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5867;
}

// 0x1802f58b4 FUN_1802f58b4
// source: re/dump/decompile/0x1802f58b4_FUN_1802f58b4.c
// size: 46 bytes; thunk: false
// body sha256: 5bcda262c31f04bbb8e0e0ff3015e40caf5530ada93a8a05cd371bb927d4db24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f58b4{
    "0x1802f58b4",
    "FUN_1802f58b4",
    R"F1802f58b4S(undefined FUN_1802f58b4())F1802f58b4S",
    R"B1802f58b4(// 0x1802f58b4  FUN_1802f58b4
// size=46 thunk=false
// signature: undefined FUN_1802f58b4()
// status: ok


void FUN_1802f58b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 0x100) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f58b4",
    "5bcda262c31f04bbb8e0e0ff3015e40caf5530ada93a8a05cd371bb927d4db24",
    R"F1802f58b4C()F1802f58b4C",
    R"F1802f58b4D()F1802f58b4D",
    R"F1802f58b4T()F1802f58b4T",
    R"F1802f58b4F(10: if ((*(uint *)(param_2 + 0x2c) & 0x100) != 0) {
14: return;)F1802f58b4F",
    R"F1802f58b4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f58b4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f58b4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f58b4", "FUN_1802f58b4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x100);
    // body sha256: 5bcda262c31f04bbb8e0e0ff3015e40caf5530ada93a8a05cd371bb927d4db24
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x2c) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x2c) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f58b4;
}

// 0x1802f5a6c FUN_1802f5a6c
// source: re/dump/decompile/0x1802f5a6c_FUN_1802f5a6c.c
// size: 38 bytes; thunk: false
// body sha256: 888e94892a6fa5ed8b556a64ab0cba57d6d77cb2530f1c08c7710787d8f2e80c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5a6c{
    "0x1802f5a6c",
    "FUN_1802f5a6c",
    R"F1802f5a6cS(undefined FUN_1802f5a6c())F1802f5a6cS",
    R"B1802f5a6c(// 0x1802f5a6c  FUN_1802f5a6c
// size=38 thunk=false
// signature: undefined FUN_1802f5a6c()
// status: ok


void FUN_1802f5a6c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180025840(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


)B1802f5a6c",
    "888e94892a6fa5ed8b556a64ab0cba57d6d77cb2530f1c08c7710787d8f2e80c",
    R"F1802f5a6cC(FUN_180025840)F1802f5a6cC",
    R"F1802f5a6cD()F1802f5a6cD",
    R"F1802f5a6cT()F1802f5a6cT",
    R"F1802f5a6cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f5a6cF",
    R"F1802f5a6cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5a6cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5a6c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5a6c", "FUN_1802f5a6c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180025840", *(undefined8 *)(param_2 + 0x70));
    trace.call_target("FUN_180025840", reinterpret_cast<const void*>(&image::FUN_180025840));
    // body sha256: 888e94892a6fa5ed8b556a64ab0cba57d6d77cb2530f1c08c7710787d8f2e80c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180025840(*(undefined8 *)(param_2 + 0x70));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5a6c;
}

// 0x1802f5a92 FUN_1802f5a92
// source: re/dump/decompile/0x1802f5a92_FUN_1802f5a92.c
// size: 49 bytes; thunk: false
// body sha256: 0ac415d377caf5f5d17986c00f441bd185573908d333c2af1b94c0d63d96afcf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5a92{
    "0x1802f5a92",
    "FUN_1802f5a92",
    R"F1802f5a92S(undefined FUN_1802f5a92())F1802f5a92S",
    R"B1802f5a92(// 0x1802f5a92  FUN_1802f5a92
// size=49 thunk=false
// signature: undefined FUN_1802f5a92()
// status: ok


void FUN_1802f5a92(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x130));
  }
  return;
}


)B1802f5a92",
    "0ac415d377caf5f5d17986c00f441bd185573908d333c2af1b94c0d63d96afcf",
    R"F1802f5a92C()F1802f5a92C",
    R"F1802f5a92D()F1802f5a92D",
    R"F1802f5a92T()F1802f5a92T",
    R"F1802f5a92F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
15: return;)F1802f5a92F",
    R"F1802f5a92U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5a92U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5a92() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5a92", "FUN_1802f5a92");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0ac415d377caf5f5d17986c00f441bd185573908d333c2af1b94c0d63d96afcf
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x130));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5a92;
}

// 0x1802f5b0b FUN_1802f5b0b
// source: re/dump/decompile/0x1802f5b0b_FUN_1802f5b0b.c
// size: 38 bytes; thunk: false
// body sha256: c33d932a594a5dc2c0ab69363ded5435c85c7653da199ef390c8e57333e348b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5b0b{
    "0x1802f5b0b",
    "FUN_1802f5b0b",
    R"F1802f5b0bS(undefined FUN_1802f5b0b())F1802f5b0bS",
    R"B1802f5b0b(// 0x1802f5b0b  FUN_1802f5b0b
// size=38 thunk=false
// signature: undefined FUN_1802f5b0b()
// status: ok


void FUN_1802f5b0b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B1802f5b0b",
    "c33d932a594a5dc2c0ab69363ded5435c85c7653da199ef390c8e57333e348b9",
    R"F1802f5b0bC()F1802f5b0bC",
    R"F1802f5b0bD()F1802f5b0bD",
    R"F1802f5b0bT()F1802f5b0bT",
    R"F1802f5b0bF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f5b0bF",
    R"F1802f5b0bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5b0bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5b0b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5b0b", "FUN_1802f5b0b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x50);
    // body sha256: c33d932a594a5dc2c0ab69363ded5435c85c7653da199ef390c8e57333e348b9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5b0b;
}

// 0x1802f5b31 FUN_1802f5b31
// source: re/dump/decompile/0x1802f5b31_FUN_1802f5b31.c
// size: 38 bytes; thunk: false
// body sha256: 77605decbbf5b3ac552e8edfb2ca3bf3211397957cb6b3eb5aa61910d49c2922
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5b31{
    "0x1802f5b31",
    "FUN_1802f5b31",
    R"F1802f5b31S(undefined FUN_1802f5b31())F1802f5b31S",
    R"B1802f5b31(// 0x1802f5b31  FUN_1802f5b31
// size=38 thunk=false
// signature: undefined FUN_1802f5b31()
// status: ok


void FUN_1802f5b31(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802f5b31",
    "77605decbbf5b3ac552e8edfb2ca3bf3211397957cb6b3eb5aa61910d49c2922",
    R"F1802f5b31C()F1802f5b31C",
    R"F1802f5b31D()F1802f5b31D",
    R"F1802f5b31T()F1802f5b31T",
    R"F1802f5b31F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f5b31F",
    R"F1802f5b31U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5b31U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5b31() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5b31", "FUN_1802f5b31");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: 77605decbbf5b3ac552e8edfb2ca3bf3211397957cb6b3eb5aa61910d49c2922
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5b31;
}

// 0x1802f5b90 FUN_1802f5b90
// source: re/dump/decompile/0x1802f5b90_FUN_1802f5b90.c
// size: 49 bytes; thunk: false
// body sha256: 72076474a9b55e1c2f28b2936f76e5119f131845cb9ce3847bf4e455f4f4e768
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5b90{
    "0x1802f5b90",
    "FUN_1802f5b90",
    R"F1802f5b90S(undefined FUN_1802f5b90())F1802f5b90S",
    R"B1802f5b90(// 0x1802f5b90  FUN_1802f5b90
// size=49 thunk=false
// signature: undefined FUN_1802f5b90()
// status: ok


void FUN_1802f5b90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x118));
  }
  return;
}


)B1802f5b90",
    "72076474a9b55e1c2f28b2936f76e5119f131845cb9ce3847bf4e455f4f4e768",
    R"F1802f5b90C()F1802f5b90C",
    R"F1802f5b90D()F1802f5b90D",
    R"F1802f5b90T()F1802f5b90T",
    R"F1802f5b90F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
15: return;)F1802f5b90F",
    R"F1802f5b90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5b90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5b90", "FUN_1802f5b90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 72076474a9b55e1c2f28b2936f76e5119f131845cb9ce3847bf4e455f4f4e768
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>");
                trace.statement("((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x118));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5b90;
}

// 0x1802f5c09 FUN_1802f5c09
// source: re/dump/decompile/0x1802f5c09_FUN_1802f5c09.c
// size: 38 bytes; thunk: false
// body sha256: e8b972fb642a3fad5006517bb366badf98d65e91d3dbc989daedb084fd0feb69
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5c09{
    "0x1802f5c09",
    "FUN_1802f5c09",
    R"F1802f5c09S(undefined FUN_1802f5c09())F1802f5c09S",
    R"B1802f5c09(// 0x1802f5c09  FUN_1802f5c09
// size=38 thunk=false
// signature: undefined FUN_1802f5c09()
// status: ok


void FUN_1802f5c09(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802f5c09",
    "e8b972fb642a3fad5006517bb366badf98d65e91d3dbc989daedb084fd0feb69",
    R"F1802f5c09C()F1802f5c09C",
    R"F1802f5c09D()F1802f5c09D",
    R"F1802f5c09T()F1802f5c09T",
    R"F1802f5c09F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f5c09F",
    R"F1802f5c09U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5c09U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5c09() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5c09", "FUN_1802f5c09");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: e8b972fb642a3fad5006517bb366badf98d65e91d3dbc989daedb084fd0feb69
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5c09;
}

// 0x1802f5c2f FUN_1802f5c2f
// source: re/dump/decompile/0x1802f5c2f_FUN_1802f5c2f.c
// size: 38 bytes; thunk: false
// body sha256: aa1871e85c074086652dc35561173176b0d1f1f39ce46b54a7cb1c5dadbbd10d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5c2f{
    "0x1802f5c2f",
    "FUN_1802f5c2f",
    R"F1802f5c2fS(undefined FUN_1802f5c2f())F1802f5c2fS",
    R"B1802f5c2f(// 0x1802f5c2f  FUN_1802f5c2f
// size=38 thunk=false
// signature: undefined FUN_1802f5c2f()
// status: ok


void FUN_1802f5c2f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);
  }
  return;
}


)B1802f5c2f",
    "aa1871e85c074086652dc35561173176b0d1f1f39ce46b54a7cb1c5dadbbd10d",
    R"F1802f5c2fC()F1802f5c2fC",
    R"F1802f5c2fD()F1802f5c2fD",
    R"F1802f5c2fT()F1802f5c2fT",
    R"F1802f5c2fF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f5c2fF",
    R"F1802f5c2fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5c2fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5c2f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5c2f", "FUN_1802f5c2f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x30);
    // body sha256: aa1871e85c074086652dc35561173176b0d1f1f39ce46b54a7cb1c5dadbbd10d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x30);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5c2f;
}

// 0x1802f5d40 FUN_1802f5d40
// source: re/dump/decompile/0x1802f5d40_FUN_1802f5d40.c
// size: 22 bytes; thunk: false
// body sha256: 2fa3ea4bdcb43b26f48ba280b43a3f240c82390dd0c07950b3eb974d035124f5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5d40{
    "0x1802f5d40",
    "FUN_1802f5d40",
    R"F1802f5d40S(undefined FUN_1802f5d40())F1802f5d40S",
    R"B1802f5d40(// 0x1802f5d40  FUN_1802f5d40
// size=22 thunk=false
// signature: undefined FUN_1802f5d40()
// status: ok


void FUN_1802f5d40(void)

{
  DAT_180426244 = DAT_180426244 & 0xfffffffe;
  return;
}


)B1802f5d40",
    "2fa3ea4bdcb43b26f48ba280b43a3f240c82390dd0c07950b3eb974d035124f5",
    R"F1802f5d40C()F1802f5d40C",
    R"F1802f5d40D(DAT_180426244)F1802f5d40D",
    R"F1802f5d40T()F1802f5d40T",
    R"F1802f5d40F(11: return;)F1802f5d40F",
    R"F1802f5d40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180426244.)F1802f5d40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5d40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5d40", "FUN_1802f5d40");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180426244.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180426244", static_cast<const void*>(&image::DAT_180426244));
    // body sha256: 2fa3ea4bdcb43b26f48ba280b43a3f240c82390dd0c07950b3eb974d035124f5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180426244 = DAT_180426244 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f5d40;
}

// 0x1802f5dac FUN_1802f5dac
// source: re/dump/decompile/0x1802f5dac_FUN_1802f5dac.c
// size: 38 bytes; thunk: false
// body sha256: c556acecde20e7c1ffeede4f52dabd3db86db99272e3bff1c66ea79ad24106c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5dac{
    "0x1802f5dac",
    "FUN_1802f5dac",
    R"F1802f5dacS(undefined FUN_1802f5dac())F1802f5dacS",
    R"B1802f5dac(// 0x1802f5dac  FUN_1802f5dac
// size=38 thunk=false
// signature: undefined FUN_1802f5dac()
// status: ok


void FUN_1802f5dac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);
  }
  return;
}


)B1802f5dac",
    "c556acecde20e7c1ffeede4f52dabd3db86db99272e3bff1c66ea79ad24106c4",
    R"F1802f5dacC()F1802f5dacC",
    R"F1802f5dacD()F1802f5dacD",
    R"F1802f5dacT()F1802f5dacT",
    R"F1802f5dacF(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f5dacF",
    R"F1802f5dacU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5dacU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5dac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5dac", "FUN_1802f5dac");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x58);
    // body sha256: c556acecde20e7c1ffeede4f52dabd3db86db99272e3bff1c66ea79ad24106c4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5dac;
}

// 0x1802f5de0 FUN_1802f5de0
// source: re/dump/decompile/0x1802f5de0_FUN_1802f5de0.c
// size: 38 bytes; thunk: false
// body sha256: 0c7d39910675b618577982fac8f5ad6534a013128c0e1d99bdb69c2b9028fde2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5de0{
    "0x1802f5de0",
    "FUN_1802f5de0",
    R"F1802f5de0S(undefined FUN_1802f5de0())F1802f5de0S",
    R"B1802f5de0(// 0x1802f5de0  FUN_1802f5de0
// size=38 thunk=false
// signature: undefined FUN_1802f5de0()
// status: ok


void FUN_1802f5de0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209990(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


)B1802f5de0",
    "0c7d39910675b618577982fac8f5ad6534a013128c0e1d99bdb69c2b9028fde2",
    R"F1802f5de0C(FUN_180209990)F1802f5de0C",
    R"F1802f5de0D()F1802f5de0D",
    R"F1802f5de0T()F1802f5de0T",
    R"F1802f5de0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f5de0F",
    R"F1802f5de0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5de0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5de0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5de0", "FUN_1802f5de0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209990", *(undefined8 *)(param_2 + 0x28));
    trace.call_target("FUN_180209990", reinterpret_cast<const void*>(&image::FUN_180209990));
    // body sha256: 0c7d39910675b618577982fac8f5ad6534a013128c0e1d99bdb69c2b9028fde2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_180209990(*(undefined8 *)(param_2 + 0x28));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5de0;
}

// 0x1802f5e55 FUN_1802f5e55
// source: re/dump/decompile/0x1802f5e55_FUN_1802f5e55.c
// size: 41 bytes; thunk: false
// body sha256: 7377d5fa9ea749fe2bf35831258012eb4e2fc86897bcd00a90322b930761703c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5e55{
    "0x1802f5e55",
    "FUN_1802f5e55",
    R"F1802f5e55S(undefined FUN_1802f5e55())F1802f5e55S",
    R"B1802f5e55(// 0x1802f5e55  FUN_1802f5e55
// size=41 thunk=false
// signature: undefined FUN_1802f5e55()
// status: ok


void FUN_1802f5e55(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


)B1802f5e55",
    "7377d5fa9ea749fe2bf35831258012eb4e2fc86897bcd00a90322b930761703c",
    R"F1802f5e55C()F1802f5e55C",
    R"F1802f5e55D()F1802f5e55D",
    R"F1802f5e55T()F1802f5e55T",
    R"F1802f5e55F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f5e55F",
    R"F1802f5e55U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5e55U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5e55() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5e55", "FUN_1802f5e55");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe8);
    // body sha256: 7377d5fa9ea749fe2bf35831258012eb4e2fc86897bcd00a90322b930761703c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5e55;
}

// 0x1802f5e7e FUN_1802f5e7e
// source: re/dump/decompile/0x1802f5e7e_FUN_1802f5e7e.c
// size: 41 bytes; thunk: false
// body sha256: 926c63c03cad87b74817be408c82ea7cff28e0a608427f0fb6ec60b88dff65cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5e7e{
    "0x1802f5e7e",
    "FUN_1802f5e7e",
    R"F1802f5e7eS(undefined FUN_1802f5e7e())F1802f5e7eS",
    R"B1802f5e7e(// 0x1802f5e7e  FUN_1802f5e7e
// size=41 thunk=false
// signature: undefined FUN_1802f5e7e()
// status: ok


void FUN_1802f5e7e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


)B1802f5e7e",
    "926c63c03cad87b74817be408c82ea7cff28e0a608427f0fb6ec60b88dff65cd",
    R"F1802f5e7eC()F1802f5e7eC",
    R"F1802f5e7eD()F1802f5e7eD",
    R"F1802f5e7eT()F1802f5e7eT",
    R"F1802f5e7eF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f5e7eF",
    R"F1802f5e7eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5e7eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5e7e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5e7e", "FUN_1802f5e7e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa0);
    // body sha256: 926c63c03cad87b74817be408c82ea7cff28e0a608427f0fb6ec60b88dff65cd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f5e7e;
}

// 0x1802f5eea FUN_1802f5eea
// source: re/dump/decompile/0x1802f5eea_FUN_1802f5eea.c
// size: 29 bytes; thunk: false
// body sha256: 33d231f17a1f5ec65bb7fd16e910da22f0443dbab908a5b9cd3e945fd5c40886
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5eea{
    "0x1802f5eea",
    "FUN_1802f5eea",
    R"F1802f5eeaS(undefined FUN_1802f5eea())F1802f5eeaS",
    R"B1802f5eea(// 0x1802f5eea  FUN_1802f5eea
// size=29 thunk=false
// signature: undefined FUN_1802f5eea()
// status: ok


undefined8 FUN_1802f5eea(void)

{
  return 0;
}


)B1802f5eea",
    "33d231f17a1f5ec65bb7fd16e910da22f0443dbab908a5b9cd3e945fd5c40886",
    R"F1802f5eeaC()F1802f5eeaC",
    R"F1802f5eeaD()F1802f5eeaD",
    R"F1802f5eeaT()F1802f5eeaT",
    R"F1802f5eeaF(10: return 0;)F1802f5eeaF",
    R"F1802f5eeaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5eeaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5eea() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5eea", "FUN_1802f5eea");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 33d231f17a1f5ec65bb7fd16e910da22f0443dbab908a5b9cd3e945fd5c40886
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f5eea;
}

// 0x1802f5f08 FUN_1802f5f08
// source: re/dump/decompile/0x1802f5f08_FUN_1802f5f08.c
// size: 29 bytes; thunk: false
// body sha256: 872e7a52c3c17c5f858a7c4d1dc198528f1723639be9c49f77a1749c4f350b14
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5f08{
    "0x1802f5f08",
    "FUN_1802f5f08",
    R"F1802f5f08S(undefined FUN_1802f5f08())F1802f5f08S",
    R"B1802f5f08(// 0x1802f5f08  FUN_1802f5f08
// size=29 thunk=false
// signature: undefined FUN_1802f5f08()
// status: ok


undefined8 FUN_1802f5f08(void)

{
  return 0;
}


)B1802f5f08",
    "872e7a52c3c17c5f858a7c4d1dc198528f1723639be9c49f77a1749c4f350b14",
    R"F1802f5f08C()F1802f5f08C",
    R"F1802f5f08D()F1802f5f08D",
    R"F1802f5f08T()F1802f5f08T",
    R"F1802f5f08F(10: return 0;)F1802f5f08F",
    R"F1802f5f08U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5f08U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5f08() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5f08", "FUN_1802f5f08");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 872e7a52c3c17c5f858a7c4d1dc198528f1723639be9c49f77a1749c4f350b14
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f5f08;
}

// 0x1802f5f26 FUN_1802f5f26
// source: re/dump/decompile/0x1802f5f26_FUN_1802f5f26.c
// size: 22 bytes; thunk: false
// body sha256: 8f66355270d46db8631f3fdf03733d162ff2b333e75b53e51dbc3bbba7b6ec5a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5f26{
    "0x1802f5f26",
    "FUN_1802f5f26",
    R"F1802f5f26S(undefined FUN_1802f5f26())F1802f5f26S",
    R"B1802f5f26(// 0x1802f5f26  FUN_1802f5f26
// size=22 thunk=false
// signature: undefined FUN_1802f5f26()
// status: ok


void FUN_1802f5f26(void)

{
  DAT_180427800 = DAT_180427800 & 0xfffffffe;
  return;
}


)B1802f5f26",
    "8f66355270d46db8631f3fdf03733d162ff2b333e75b53e51dbc3bbba7b6ec5a",
    R"F1802f5f26C()F1802f5f26C",
    R"F1802f5f26D(DAT_180427800)F1802f5f26D",
    R"F1802f5f26T()F1802f5f26T",
    R"F1802f5f26F(11: return;)F1802f5f26F",
    R"F1802f5f26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427800.)F1802f5f26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5f26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5f26", "FUN_1802f5f26");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427800.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180427800", static_cast<const void*>(&image::DAT_180427800));
    // body sha256: 8f66355270d46db8631f3fdf03733d162ff2b333e75b53e51dbc3bbba7b6ec5a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("DAT_180427800 = DAT_180427800 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f5f26;
}

// 0x1802f5f78 FUN_1802f5f78
// source: re/dump/decompile/0x1802f5f78_FUN_1802f5f78.c
// size: 29 bytes; thunk: false
// body sha256: 50a01fcd8b103685a5edc491ae2879dcb32499f670ef0b120a740848d8495678
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5f78{
    "0x1802f5f78",
    "FUN_1802f5f78",
    R"F1802f5f78S(undefined FUN_1802f5f78())F1802f5f78S",
    R"B1802f5f78(// 0x1802f5f78  FUN_1802f5f78
// size=29 thunk=false
// signature: undefined FUN_1802f5f78()
// status: ok


undefined8 FUN_1802f5f78(void)

{
  return 0;
}


)B1802f5f78",
    "50a01fcd8b103685a5edc491ae2879dcb32499f670ef0b120a740848d8495678",
    R"F1802f5f78C()F1802f5f78C",
    R"F1802f5f78D()F1802f5f78D",
    R"F1802f5f78T()F1802f5f78T",
    R"F1802f5f78F(10: return 0;)F1802f5f78F",
    R"F1802f5f78U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5f78U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5f78() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5f78", "FUN_1802f5f78");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 50a01fcd8b103685a5edc491ae2879dcb32499f670ef0b120a740848d8495678
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f5f78;
}

// 0x1802f5f96 FUN_1802f5f96
// source: re/dump/decompile/0x1802f5f96_FUN_1802f5f96.c
// size: 29 bytes; thunk: false
// body sha256: be6882c7e9f962950e500e66d368290d075bd7fa3aa9922ff066af3678bfa667
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f5f96{
    "0x1802f5f96",
    "FUN_1802f5f96",
    R"F1802f5f96S(undefined FUN_1802f5f96())F1802f5f96S",
    R"B1802f5f96(// 0x1802f5f96  FUN_1802f5f96
// size=29 thunk=false
// signature: undefined FUN_1802f5f96()
// status: ok


undefined8 FUN_1802f5f96(void)

{
  return 0;
}


)B1802f5f96",
    "be6882c7e9f962950e500e66d368290d075bd7fa3aa9922ff066af3678bfa667",
    R"F1802f5f96C()F1802f5f96C",
    R"F1802f5f96D()F1802f5f96D",
    R"F1802f5f96T()F1802f5f96T",
    R"F1802f5f96F(10: return 0;)F1802f5f96F",
    R"F1802f5f96U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f5f96U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f5f96() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f5f96", "FUN_1802f5f96");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: be6882c7e9f962950e500e66d368290d075bd7fa3aa9922ff066af3678bfa667
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f5f96;
}

// 0x1802f6070 FUN_1802f6070
// source: re/dump/decompile/0x1802f6070_FUN_1802f6070.c
// size: 44 bytes; thunk: false
// body sha256: b09991d39b36ae9a830426a443a76ce5bb26c38001be3232af873800ce43a61d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6070{
    "0x1802f6070",
    "FUN_1802f6070",
    R"F1802f6070S(undefined FUN_1802f6070())F1802f6070S",
    R"B1802f6070(// 0x1802f6070  FUN_1802f6070
// size=44 thunk=false
// signature: undefined FUN_1802f6070()
// status: ok


undefined8 FUN_1802f6070(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 8) = 0;
  return 0;
}


)B1802f6070",
    "b09991d39b36ae9a830426a443a76ce5bb26c38001be3232af873800ce43a61d",
    R"F1802f6070C()F1802f6070C",
    R"F1802f6070D()F1802f6070D",
    R"F1802f6070T()F1802f6070T",
    R"F1802f6070F(11: return 0;)F1802f6070F",
    R"F1802f6070U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6070() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6070", "FUN_1802f6070");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b09991d39b36ae9a830426a443a76ce5bb26c38001be3232af873800ce43a61d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 8) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f6070;
}

// 0x1802f60a0 FUN_1802f60a0
// source: re/dump/decompile/0x1802f60a0_FUN_1802f60a0.c
// size: 63 bytes; thunk: false
// body sha256: af581bd675eae3f1cd49562504fb035b865ff4a7489aeffea049fa62717487c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f60a0{
    "0x1802f60a0",
    "FUN_1802f60a0",
    R"F1802f60a0S(undefined FUN_1802f60a0())F1802f60a0S",
    R"B1802f60a0(// 0x1802f60a0  FUN_1802f60a0
// size=63 thunk=false
// signature: undefined FUN_1802f60a0()
// status: ok


undefined8 FUN_1802f60a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xa8) + 0x48))();
  *(undefined8 *)(param_2 + 0xf0) = *puVar1;
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(puVar1 + 1);
  return 0;
}


)B1802f60a0",
    "af581bd675eae3f1cd49562504fb035b865ff4a7489aeffea049fa62717487c8",
    R"F1802f60a0C()F1802f60a0C",
    R"F1802f60a0D()F1802f60a0D",
    R"F1802f60a0T()F1802f60a0T",
    R"F1802f60a0F(15: return 0;)F1802f60a0F",
    R"F1802f60a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 12: puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xa8) + 0x48))();.)F1802f60a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f60a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f60a0", "FUN_1802f60a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t * puVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 12: puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xa8) + 0x48))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: af581bd675eae3f1cd49562504fb035b865ff4a7489aeffea049fa62717487c8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xa8) + 0x48))();");
            trace.statement("*(undefined8 *)(param_2 + 0xf0) = *puVar1;");
            trace.statement("*(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(puVar1 + 1);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f60a0;
}

// 0x1802f60e0 FUN_1802f60e0
// source: re/dump/decompile/0x1802f60e0_FUN_1802f60e0.c
// size: 29 bytes; thunk: false
// body sha256: 369a50314b7711463ab66d5b25063f7a3b034d398995674fdd23230aee0d6e55
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f60e0{
    "0x1802f60e0",
    "FUN_1802f60e0",
    R"F1802f60e0S(undefined FUN_1802f60e0())F1802f60e0S",
    R"B1802f60e0(// 0x1802f60e0  FUN_1802f60e0
// size=29 thunk=false
// signature: undefined FUN_1802f60e0()
// status: ok


undefined8 FUN_1802f60e0(void)

{
  return 0;
}


)B1802f60e0",
    "369a50314b7711463ab66d5b25063f7a3b034d398995674fdd23230aee0d6e55",
    R"F1802f60e0C()F1802f60e0C",
    R"F1802f60e0D()F1802f60e0D",
    R"F1802f60e0T()F1802f60e0T",
    R"F1802f60e0F(10: return 0;)F1802f60e0F",
    R"F1802f60e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f60e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f60e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f60e0", "FUN_1802f60e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 369a50314b7711463ab66d5b25063f7a3b034d398995674fdd23230aee0d6e55
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f60e0;
}

// 0x1802f60fe FUN_1802f60fe
// source: re/dump/decompile/0x1802f60fe_FUN_1802f60fe.c
// size: 29 bytes; thunk: false
// body sha256: 2141a9c7f1475542ee3d4e837c583e41c7c5de269f304c25cf6f369d3ac96829
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f60fe{
    "0x1802f60fe",
    "FUN_1802f60fe",
    R"F1802f60feS(undefined FUN_1802f60fe())F1802f60feS",
    R"B1802f60fe(// 0x1802f60fe  FUN_1802f60fe
// size=29 thunk=false
// signature: undefined FUN_1802f60fe()
// status: ok


undefined8 FUN_1802f60fe(void)

{
  return 0;
}


)B1802f60fe",
    "2141a9c7f1475542ee3d4e837c583e41c7c5de269f304c25cf6f369d3ac96829",
    R"F1802f60feC()F1802f60feC",
    R"F1802f60feD()F1802f60feD",
    R"F1802f60feT()F1802f60feT",
    R"F1802f60feF(10: return 0;)F1802f60feF",
    R"F1802f60feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f60feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f60fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f60fe", "FUN_1802f60fe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2141a9c7f1475542ee3d4e837c583e41c7c5de269f304c25cf6f369d3ac96829
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f60fe;
}

// 0x1802f611c FUN_1802f611c
// source: re/dump/decompile/0x1802f611c_FUN_1802f611c.c
// size: 29 bytes; thunk: false
// body sha256: c6c2930aa6c8780b1254bfc180553711fe5281060ccd7aef90dd0911cc6ad410
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f611c{
    "0x1802f611c",
    "FUN_1802f611c",
    R"F1802f611cS(undefined FUN_1802f611c())F1802f611cS",
    R"B1802f611c(// 0x1802f611c  FUN_1802f611c
// size=29 thunk=false
// signature: undefined FUN_1802f611c()
// status: ok


undefined8 FUN_1802f611c(void)

{
  return 0;
}


)B1802f611c",
    "c6c2930aa6c8780b1254bfc180553711fe5281060ccd7aef90dd0911cc6ad410",
    R"F1802f611cC()F1802f611cC",
    R"F1802f611cD()F1802f611cD",
    R"F1802f611cT()F1802f611cT",
    R"F1802f611cF(10: return 0;)F1802f611cF",
    R"F1802f611cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f611cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f611c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f611c", "FUN_1802f611c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c6c2930aa6c8780b1254bfc180553711fe5281060ccd7aef90dd0911cc6ad410
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f611c;
}

// 0x1802f614c FUN_1802f614c
// source: re/dump/decompile/0x1802f614c_FUN_1802f614c.c
// size: 46 bytes; thunk: false
// body sha256: fc74db0a57b13e9882bc961fa021fe368615bc05fbda1906b20626c9f33cc874
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f614c{
    "0x1802f614c",
    "FUN_1802f614c",
    R"F1802f614cS(undefined FUN_1802f614c())F1802f614cS",
    R"B1802f614c(// 0x1802f614c  FUN_1802f614c
// size=46 thunk=false
// signature: undefined FUN_1802f614c()
// status: ok


void FUN_1802f614c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


)B1802f614c",
    "fc74db0a57b13e9882bc961fa021fe368615bc05fbda1906b20626c9f33cc874",
    R"F1802f614cC()F1802f614cC",
    R"F1802f614cD()F1802f614cD",
    R"F1802f614cT()F1802f614cT",
    R"F1802f614cF(10: if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
14: return;)F1802f614cF",
    R"F1802f614cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f614cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f614c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f614c", "FUN_1802f614c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x90);
    // body sha256: fc74db0a57b13e9882bc961fa021fe368615bc05fbda1906b20626c9f33cc874
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f614c;
}

// 0x1802f617a FUN_1802f617a
// source: re/dump/decompile/0x1802f617a_FUN_1802f617a.c
// size: 46 bytes; thunk: false
// body sha256: 5595a69e22f4f1facf35b922ffe293cac403ac4694cc82631a4864dc886a6330
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f617a{
    "0x1802f617a",
    "FUN_1802f617a",
    R"F1802f617aS(undefined FUN_1802f617a())F1802f617aS",
    R"B1802f617a(// 0x1802f617a  FUN_1802f617a
// size=46 thunk=false
// signature: undefined FUN_1802f617a()
// status: ok


void FUN_1802f617a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


)B1802f617a",
    "5595a69e22f4f1facf35b922ffe293cac403ac4694cc82631a4864dc886a6330",
    R"F1802f617aC()F1802f617aC",
    R"F1802f617aD()F1802f617aD",
    R"F1802f617aT()F1802f617aT",
    R"F1802f617aF(10: if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
14: return;)F1802f617aF",
    R"F1802f617aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f617aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f617a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f617a", "FUN_1802f617a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x90);
    // body sha256: 5595a69e22f4f1facf35b922ffe293cac403ac4694cc82631a4864dc886a6330
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f617a;
}

// 0x1802f61b4 FUN_1802f61b4
// source: re/dump/decompile/0x1802f61b4_FUN_1802f61b4.c
// size: 46 bytes; thunk: false
// body sha256: c6b3e3e7778474fff22ba91edd822dda2087f5c19f371d1b42b7ca38e8b745f0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f61b4{
    "0x1802f61b4",
    "FUN_1802f61b4",
    R"F1802f61b4S(undefined FUN_1802f61b4())F1802f61b4S",
    R"B1802f61b4(// 0x1802f61b4  FUN_1802f61b4
// size=46 thunk=false
// signature: undefined FUN_1802f61b4()
// status: ok


void FUN_1802f61b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


)B1802f61b4",
    "c6b3e3e7778474fff22ba91edd822dda2087f5c19f371d1b42b7ca38e8b745f0",
    R"F1802f61b4C()F1802f61b4C",
    R"F1802f61b4D()F1802f61b4D",
    R"F1802f61b4T()F1802f61b4T",
    R"F1802f61b4F(10: if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
14: return;)F1802f61b4F",
    R"F1802f61b4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f61b4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f61b4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f61b4", "FUN_1802f61b4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xb0);
    // body sha256: c6b3e3e7778474fff22ba91edd822dda2087f5c19f371d1b42b7ca38e8b745f0
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f61b4;
}

// 0x1802f61e2 FUN_1802f61e2
// source: re/dump/decompile/0x1802f61e2_FUN_1802f61e2.c
// size: 46 bytes; thunk: false
// body sha256: 1295e6a5ca1abdfbbae04dbddc297d153c63c61af0188f1083b48e3af987c3d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f61e2{
    "0x1802f61e2",
    "FUN_1802f61e2",
    R"F1802f61e2S(undefined FUN_1802f61e2())F1802f61e2S",
    R"B1802f61e2(// 0x1802f61e2  FUN_1802f61e2
// size=46 thunk=false
// signature: undefined FUN_1802f61e2()
// status: ok


void FUN_1802f61e2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


)B1802f61e2",
    "1295e6a5ca1abdfbbae04dbddc297d153c63c61af0188f1083b48e3af987c3d2",
    R"F1802f61e2C()F1802f61e2C",
    R"F1802f61e2D()F1802f61e2D",
    R"F1802f61e2T()F1802f61e2T",
    R"F1802f61e2F(10: if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
14: return;)F1802f61e2F",
    R"F1802f61e2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f61e2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f61e2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f61e2", "FUN_1802f61e2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xb0);
    // body sha256: 1295e6a5ca1abdfbbae04dbddc297d153c63c61af0188f1083b48e3af987c3d2
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f61e2;
}

// 0x1802f621c FUN_1802f621c
// source: re/dump/decompile/0x1802f621c_FUN_1802f621c.c
// size: 46 bytes; thunk: false
// body sha256: 981e6892a17487e77b1c9ab279a57d75537b1e6d52a45573bf6f4f5a0abc84af
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f621c{
    "0x1802f621c",
    "FUN_1802f621c",
    R"F1802f621cS(undefined FUN_1802f621c())F1802f621cS",
    R"B1802f621c(// 0x1802f621c  FUN_1802f621c
// size=46 thunk=false
// signature: undefined FUN_1802f621c()
// status: ok


void FUN_1802f621c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


)B1802f621c",
    "981e6892a17487e77b1c9ab279a57d75537b1e6d52a45573bf6f4f5a0abc84af",
    R"F1802f621cC()F1802f621cC",
    R"F1802f621cD()F1802f621cD",
    R"F1802f621cT()F1802f621cT",
    R"F1802f621cF(10: if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
14: return;)F1802f621cF",
    R"F1802f621cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f621cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f621c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f621c", "FUN_1802f621c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xd0);
    // body sha256: 981e6892a17487e77b1c9ab279a57d75537b1e6d52a45573bf6f4f5a0abc84af
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f621c;
}

// 0x1802f624a FUN_1802f624a
// source: re/dump/decompile/0x1802f624a_FUN_1802f624a.c
// size: 46 bytes; thunk: false
// body sha256: 9d6f3b39594d9f37c1efec4d37248a715964d5b0969e6833c772922f3e87d645
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f624a{
    "0x1802f624a",
    "FUN_1802f624a",
    R"F1802f624aS(undefined FUN_1802f624a())F1802f624aS",
    R"B1802f624a(// 0x1802f624a  FUN_1802f624a
// size=46 thunk=false
// signature: undefined FUN_1802f624a()
// status: ok


void FUN_1802f624a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


)B1802f624a",
    "9d6f3b39594d9f37c1efec4d37248a715964d5b0969e6833c772922f3e87d645",
    R"F1802f624aC()F1802f624aC",
    R"F1802f624aD()F1802f624aD",
    R"F1802f624aT()F1802f624aT",
    R"F1802f624aF(10: if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
14: return;)F1802f624aF",
    R"F1802f624aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f624aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f624a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f624a", "FUN_1802f624a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xd0);
    // body sha256: 9d6f3b39594d9f37c1efec4d37248a715964d5b0969e6833c772922f3e87d645
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x200000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f624a;
}

// 0x1802f6284 FUN_1802f6284
// source: re/dump/decompile/0x1802f6284_FUN_1802f6284.c
// size: 46 bytes; thunk: false
// body sha256: 54a77e8d62c4df7ac80167d999eb6ceedec8daa2deadac502f383ebdc563e29a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6284{
    "0x1802f6284",
    "FUN_1802f6284",
    R"F1802f6284S(undefined FUN_1802f6284())F1802f6284S",
    R"B1802f6284(// 0x1802f6284  FUN_1802f6284
// size=46 thunk=false
// signature: undefined FUN_1802f6284()
// status: ok


void FUN_1802f6284(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf0);
  }
  return;
}


)B1802f6284",
    "54a77e8d62c4df7ac80167d999eb6ceedec8daa2deadac502f383ebdc563e29a",
    R"F1802f6284C()F1802f6284C",
    R"F1802f6284D()F1802f6284D",
    R"F1802f6284T()F1802f6284T",
    R"F1802f6284F(10: if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
14: return;)F1802f6284F",
    R"F1802f6284U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6284U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6284() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6284", "FUN_1802f6284");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xf0);
    // body sha256: 54a77e8d62c4df7ac80167d999eb6ceedec8daa2deadac502f383ebdc563e29a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x400000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6284;
}

// 0x1802f62b2 FUN_1802f62b2
// source: re/dump/decompile/0x1802f62b2_FUN_1802f62b2.c
// size: 46 bytes; thunk: false
// body sha256: 067af2506bfa7656ff0b0b55ad0aeb10ba402ead3d1268274e804c00b3299865
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f62b2{
    "0x1802f62b2",
    "FUN_1802f62b2",
    R"F1802f62b2S(undefined FUN_1802f62b2())F1802f62b2S",
    R"B1802f62b2(// 0x1802f62b2  FUN_1802f62b2
// size=46 thunk=false
// signature: undefined FUN_1802f62b2()
// status: ok


void FUN_1802f62b2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf0);
  }
  return;
}


)B1802f62b2",
    "067af2506bfa7656ff0b0b55ad0aeb10ba402ead3d1268274e804c00b3299865",
    R"F1802f62b2C()F1802f62b2C",
    R"F1802f62b2D()F1802f62b2D",
    R"F1802f62b2T()F1802f62b2T",
    R"F1802f62b2F(10: if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
14: return;)F1802f62b2F",
    R"F1802f62b2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f62b2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f62b2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f62b2", "FUN_1802f62b2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xf0);
    // body sha256: 067af2506bfa7656ff0b0b55ad0aeb10ba402ead3d1268274e804c00b3299865
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f62b2;
}

// 0x1802f62ec FUN_1802f62ec
// source: re/dump/decompile/0x1802f62ec_FUN_1802f62ec.c
// size: 46 bytes; thunk: false
// body sha256: f781c2ad32a1b75440b0dc5bf5c95f20c4764733770c010d2c0b6a9b3ff5b151
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f62ec{
    "0x1802f62ec",
    "FUN_1802f62ec",
    R"F1802f62ecS(undefined FUN_1802f62ec())F1802f62ecS",
    R"B1802f62ec(// 0x1802f62ec  FUN_1802f62ec
// size=46 thunk=false
// signature: undefined FUN_1802f62ec()
// status: ok


void FUN_1802f62ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x110);
  }
  return;
}


)B1802f62ec",
    "f781c2ad32a1b75440b0dc5bf5c95f20c4764733770c010d2c0b6a9b3ff5b151",
    R"F1802f62ecC()F1802f62ecC",
    R"F1802f62ecD()F1802f62ecD",
    R"F1802f62ecT()F1802f62ecT",
    R"F1802f62ecF(10: if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
14: return;)F1802f62ecF",
    R"F1802f62ecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f62ecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f62ec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f62ec", "FUN_1802f62ec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x110);
    // body sha256: f781c2ad32a1b75440b0dc5bf5c95f20c4764733770c010d2c0b6a9b3ff5b151
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x110);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f62ec;
}

// 0x1802f631a FUN_1802f631a
// source: re/dump/decompile/0x1802f631a_FUN_1802f631a.c
// size: 46 bytes; thunk: false
// body sha256: 1ac3bf5e80145e381a1e06f1b4087bf53ef46f2efb43deeba4b5fba5c8a7b9c1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f631a{
    "0x1802f631a",
    "FUN_1802f631a",
    R"F1802f631aS(undefined FUN_1802f631a())F1802f631aS",
    R"B1802f631a(// 0x1802f631a  FUN_1802f631a
// size=46 thunk=false
// signature: undefined FUN_1802f631a()
// status: ok


void FUN_1802f631a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x110);
  }
  return;
}


)B1802f631a",
    "1ac3bf5e80145e381a1e06f1b4087bf53ef46f2efb43deeba4b5fba5c8a7b9c1",
    R"F1802f631aC()F1802f631aC",
    R"F1802f631aD()F1802f631aD",
    R"F1802f631aT()F1802f631aT",
    R"F1802f631aF(10: if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
14: return;)F1802f631aF",
    R"F1802f631aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f631aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f631a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f631a", "FUN_1802f631a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x110);
    // body sha256: 1ac3bf5e80145e381a1e06f1b4087bf53ef46f2efb43deeba4b5fba5c8a7b9c1
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x2000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x110);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f631a;
}

// 0x1802f6354 FUN_1802f6354
// source: re/dump/decompile/0x1802f6354_FUN_1802f6354.c
// size: 46 bytes; thunk: false
// body sha256: d436dea027732b535f6441632d9747eaba5e25115d1ed8f865f594e52fa29783
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6354{
    "0x1802f6354",
    "FUN_1802f6354",
    R"F1802f6354S(undefined FUN_1802f6354())F1802f6354S",
    R"B1802f6354(// 0x1802f6354  FUN_1802f6354
// size=46 thunk=false
// signature: undefined FUN_1802f6354()
// status: ok


void FUN_1802f6354(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x130);
  }
  return;
}


)B1802f6354",
    "d436dea027732b535f6441632d9747eaba5e25115d1ed8f865f594e52fa29783",
    R"F1802f6354C()F1802f6354C",
    R"F1802f6354D()F1802f6354D",
    R"F1802f6354T()F1802f6354T",
    R"F1802f6354F(10: if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
14: return;)F1802f6354F",
    R"F1802f6354U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6354U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6354() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6354", "FUN_1802f6354");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x130);
    // body sha256: d436dea027732b535f6441632d9747eaba5e25115d1ed8f865f594e52fa29783
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x4000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x130);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6354;
}

// 0x1802f6382 FUN_1802f6382
// source: re/dump/decompile/0x1802f6382_FUN_1802f6382.c
// size: 46 bytes; thunk: false
// body sha256: d09d6cb8688a8383e2f9b07d6daf6fe108e4c5624315ced6e0c4bb3a3dd9f890
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6382{
    "0x1802f6382",
    "FUN_1802f6382",
    R"F1802f6382S(undefined FUN_1802f6382())F1802f6382S",
    R"B1802f6382(// 0x1802f6382  FUN_1802f6382
// size=46 thunk=false
// signature: undefined FUN_1802f6382()
// status: ok


void FUN_1802f6382(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x130);
  }
  return;
}


)B1802f6382",
    "d09d6cb8688a8383e2f9b07d6daf6fe108e4c5624315ced6e0c4bb3a3dd9f890",
    R"F1802f6382C()F1802f6382C",
    R"F1802f6382D()F1802f6382D",
    R"F1802f6382T()F1802f6382T",
    R"F1802f6382F(10: if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0) {
14: return;)F1802f6382F",
    R"F1802f6382U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6382U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6382() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6382", "FUN_1802f6382");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x130);
    // body sha256: d09d6cb8688a8383e2f9b07d6daf6fe108e4c5624315ced6e0c4bb3a3dd9f890
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x8000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xf7ffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x130);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6382;
}

// 0x1802f63bc FUN_1802f63bc
// source: re/dump/decompile/0x1802f63bc_FUN_1802f63bc.c
// size: 46 bytes; thunk: false
// body sha256: b70674219403c6fb62031d11dec49f11ca0a53323e709064d24b804ac86ae393
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f63bc{
    "0x1802f63bc",
    "FUN_1802f63bc",
    R"F1802f63bcS(undefined FUN_1802f63bc())F1802f63bcS",
    R"B1802f63bc(// 0x1802f63bc  FUN_1802f63bc
// size=46 thunk=false
// signature: undefined FUN_1802f63bc()
// status: ok


void FUN_1802f63bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x150);
  }
  return;
}


)B1802f63bc",
    "b70674219403c6fb62031d11dec49f11ca0a53323e709064d24b804ac86ae393",
    R"F1802f63bcC()F1802f63bcC",
    R"F1802f63bcD()F1802f63bcD",
    R"F1802f63bcT()F1802f63bcT",
    R"F1802f63bcF(10: if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0) {
14: return;)F1802f63bcF",
    R"F1802f63bcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f63bcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f63bc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f63bc", "FUN_1802f63bc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x150);
    // body sha256: b70674219403c6fb62031d11dec49f11ca0a53323e709064d24b804ac86ae393
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xefffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x150);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f63bc;
}

// 0x1802f63ea FUN_1802f63ea
// source: re/dump/decompile/0x1802f63ea_FUN_1802f63ea.c
// size: 46 bytes; thunk: false
// body sha256: 47b193342dcf57539d22b1aceffb778540944a169acce58ce788294a13ed5aee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f63ea{
    "0x1802f63ea",
    "FUN_1802f63ea",
    R"F1802f63eaS(undefined FUN_1802f63ea())F1802f63eaS",
    R"B1802f63ea(// 0x1802f63ea  FUN_1802f63ea
// size=46 thunk=false
// signature: undefined FUN_1802f63ea()
// status: ok


void FUN_1802f63ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x150);
  }
  return;
}


)B1802f63ea",
    "47b193342dcf57539d22b1aceffb778540944a169acce58ce788294a13ed5aee",
    R"F1802f63eaC()F1802f63eaC",
    R"F1802f63eaD()F1802f63eaD",
    R"F1802f63eaT()F1802f63eaT",
    R"F1802f63eaF(10: if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
14: return;)F1802f63eaF",
    R"F1802f63eaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f63eaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f63ea() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f63ea", "FUN_1802f63ea");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x150);
    // body sha256: 47b193342dcf57539d22b1aceffb778540944a169acce58ce788294a13ed5aee
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x150);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f63ea;
}

// 0x1802f6424 FUN_1802f6424
// source: re/dump/decompile/0x1802f6424_FUN_1802f6424.c
// size: 46 bytes; thunk: false
// body sha256: 94eb3b27de48bbe0eddea8aa34034395fb0b979857eeb5701c801a44ab30f466
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6424{
    "0x1802f6424",
    "FUN_1802f6424",
    R"F1802f6424S(undefined FUN_1802f6424())F1802f6424S",
    R"B1802f6424(// 0x1802f6424  FUN_1802f6424
// size=46 thunk=false
// signature: undefined FUN_1802f6424()
// status: ok


void FUN_1802f6424(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xbfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);
  }
  return;
}


)B1802f6424",
    "94eb3b27de48bbe0eddea8aa34034395fb0b979857eeb5701c801a44ab30f466",
    R"F1802f6424C()F1802f6424C",
    R"F1802f6424D()F1802f6424D",
    R"F1802f6424T()F1802f6424T",
    R"F1802f6424F(10: if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0) {
14: return;)F1802f6424F",
    R"F1802f6424U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6424U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6424() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6424", "FUN_1802f6424");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x170);
    // body sha256: 94eb3b27de48bbe0eddea8aa34034395fb0b979857eeb5701c801a44ab30f466
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xbfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6424;
}

// 0x1802f6452 FUN_1802f6452
// source: re/dump/decompile/0x1802f6452_FUN_1802f6452.c
// size: 46 bytes; thunk: false
// body sha256: 70a21dcd97d50b859a8fde83444d00a4a770d95d5ff4796b59d605bdcdf17efc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6452{
    "0x1802f6452",
    "FUN_1802f6452",
    R"F1802f6452S(undefined FUN_1802f6452())F1802f6452S",
    R"B1802f6452(// 0x1802f6452  FUN_1802f6452
// size=46 thunk=false
// signature: undefined FUN_1802f6452()
// status: ok


void FUN_1802f6452(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);
  }
  return;
}


)B1802f6452",
    "70a21dcd97d50b859a8fde83444d00a4a770d95d5ff4796b59d605bdcdf17efc",
    R"F1802f6452C()F1802f6452C",
    R"F1802f6452D()F1802f6452D",
    R"F1802f6452T()F1802f6452T",
    R"F1802f6452F(10: if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0) {
14: return;)F1802f6452F",
    R"F1802f6452U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6452U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6452() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6452", "FUN_1802f6452");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x170);
    // body sha256: 70a21dcd97d50b859a8fde83444d00a4a770d95d5ff4796b59d605bdcdf17efc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0x7fffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6452;
}

// 0x1802f648c FUN_1802f648c
// source: re/dump/decompile/0x1802f648c_FUN_1802f648c.c
// size: 41 bytes; thunk: false
// body sha256: c34c971070c1d8ae563648a055346f89d98725815c1440dc7df4b8ddd6f6034c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f648c{
    "0x1802f648c",
    "FUN_1802f648c",
    R"F1802f648cS(undefined FUN_1802f648c())F1802f648cS",
    R"B1802f648c(// 0x1802f648c  FUN_1802f648c
// size=41 thunk=false
// signature: undefined FUN_1802f648c()
// status: ok


void FUN_1802f648c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 400);
  }
  return;
}


)B1802f648c",
    "c34c971070c1d8ae563648a055346f89d98725815c1440dc7df4b8ddd6f6034c",
    R"F1802f648cC()F1802f648cC",
    R"F1802f648cD()F1802f648cD",
    R"F1802f648cT()F1802f648cT",
    R"F1802f648cF(10: if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
14: return;)F1802f648cF",
    R"F1802f648cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f648cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f648c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f648c", "FUN_1802f648c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 400);
    // body sha256: c34c971070c1d8ae563648a055346f89d98725815c1440dc7df4b8ddd6f6034c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 400);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f648c;
}

// 0x1802f64b5 FUN_1802f64b5
// source: re/dump/decompile/0x1802f64b5_FUN_1802f64b5.c
// size: 41 bytes; thunk: false
// body sha256: a59bad32e0e2ced7cb4e0f0e99b7b3710479e3206d0dd6da0505579894ad7b3e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f64b5{
    "0x1802f64b5",
    "FUN_1802f64b5",
    R"F1802f64b5S(undefined FUN_1802f64b5())F1802f64b5S",
    R"B1802f64b5(// 0x1802f64b5  FUN_1802f64b5
// size=41 thunk=false
// signature: undefined FUN_1802f64b5()
// status: ok


void FUN_1802f64b5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 400);
  }
  return;
}


)B1802f64b5",
    "a59bad32e0e2ced7cb4e0f0e99b7b3710479e3206d0dd6da0505579894ad7b3e",
    R"F1802f64b5C()F1802f64b5C",
    R"F1802f64b5D()F1802f64b5D",
    R"F1802f64b5T()F1802f64b5T",
    R"F1802f64b5F(10: if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
14: return;)F1802f64b5F",
    R"F1802f64b5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f64b5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f64b5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f64b5", "FUN_1802f64b5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 400);
    // body sha256: a59bad32e0e2ced7cb4e0f0e99b7b3710479e3206d0dd6da0505579894ad7b3e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 400);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f64b5;
}

// 0x1802f64ea FUN_1802f64ea
// source: re/dump/decompile/0x1802f64ea_FUN_1802f64ea.c
// size: 46 bytes; thunk: false
// body sha256: 62deaad6027af86951afeb82a7a2e22eb15ed79fae8f9cc0b3c10fca86638e10
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f64ea{
    "0x1802f64ea",
    "FUN_1802f64ea",
    R"F1802f64eaS(undefined FUN_1802f64ea())F1802f64eaS",
    R"B1802f64ea(// 0x1802f64ea  FUN_1802f64ea
// size=46 thunk=false
// signature: undefined FUN_1802f64ea()
// status: ok


void FUN_1802f64ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x470);
  }
  return;
}


)B1802f64ea",
    "62deaad6027af86951afeb82a7a2e22eb15ed79fae8f9cc0b3c10fca86638e10",
    R"F1802f64eaC()F1802f64eaC",
    R"F1802f64eaD()F1802f64eaD",
    R"F1802f64eaT()F1802f64eaT",
    R"F1802f64eaF(10: if ((*(uint *)(param_2 + 0x44) & 0x40000) != 0) {
14: return;)F1802f64eaF",
    R"F1802f64eaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f64eaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f64ea() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f64ea", "FUN_1802f64ea");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x470);
    // body sha256: 62deaad6027af86951afeb82a7a2e22eb15ed79fae8f9cc0b3c10fca86638e10
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x40000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x40000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffbffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x470);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f64ea;
}

// 0x1802f6518 FUN_1802f6518
// source: re/dump/decompile/0x1802f6518_FUN_1802f6518.c
// size: 46 bytes; thunk: false
// body sha256: ecf9c87700210ce43de1805eb63e604c329f58b702e5e86f105d2d133508f886
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6518{
    "0x1802f6518",
    "FUN_1802f6518",
    R"F1802f6518S(undefined FUN_1802f6518())F1802f6518S",
    R"B1802f6518(// 0x1802f6518  FUN_1802f6518
// size=46 thunk=false
// signature: undefined FUN_1802f6518()
// status: ok


void FUN_1802f6518(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x6d0);
  }
  return;
}


)B1802f6518",
    "ecf9c87700210ce43de1805eb63e604c329f58b702e5e86f105d2d133508f886",
    R"F1802f6518C()F1802f6518C",
    R"F1802f6518D()F1802f6518D",
    R"F1802f6518T()F1802f6518T",
    R"F1802f6518F(10: if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0) {
14: return;)F1802f6518F",
    R"F1802f6518U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6518U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6518() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6518", "FUN_1802f6518");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x6d0);
    // body sha256: ecf9c87700210ce43de1805eb63e604c329f58b702e5e86f105d2d133508f886
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x6d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6518;
}

// 0x1802f6546 FUN_1802f6546
// source: re/dump/decompile/0x1802f6546_FUN_1802f6546.c
// size: 46 bytes; thunk: false
// body sha256: b8d81fbeafedf6c6246d869d64b5df855e1b240a8fe96d588f7c82fd7350c59a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6546{
    "0x1802f6546",
    "FUN_1802f6546",
    R"F1802f6546S(undefined FUN_1802f6546())F1802f6546S",
    R"B1802f6546(// 0x1802f6546  FUN_1802f6546
// size=46 thunk=false
// signature: undefined FUN_1802f6546()
// status: ok


void FUN_1802f6546(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x490);
  }
  return;
}


)B1802f6546",
    "b8d81fbeafedf6c6246d869d64b5df855e1b240a8fe96d588f7c82fd7350c59a",
    R"F1802f6546C()F1802f6546C",
    R"F1802f6546D()F1802f6546D",
    R"F1802f6546T()F1802f6546T",
    R"F1802f6546F(10: if ((*(uint *)(param_2 + 0x44) & 0x100000) != 0) {
14: return;)F1802f6546F",
    R"F1802f6546U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6546U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6546() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6546", "FUN_1802f6546");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x490);
    // body sha256: b8d81fbeafedf6c6246d869d64b5df855e1b240a8fe96d588f7c82fd7350c59a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x490);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6546;
}

// 0x1802f6574 FUN_1802f6574
// source: re/dump/decompile/0x1802f6574_FUN_1802f6574.c
// size: 46 bytes; thunk: false
// body sha256: 68c1f4c69fe1297d6f97c82d7530063e9a4c659109cd394a63ba7d04b0ea9347
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6574{
    "0x1802f6574",
    "FUN_1802f6574",
    R"F1802f6574S(undefined FUN_1802f6574())F1802f6574S",
    R"B1802f6574(// 0x1802f6574  FUN_1802f6574
// size=46 thunk=false
// signature: undefined FUN_1802f6574()
// status: ok


void FUN_1802f6574(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b0);
  }
  return;
}


)B1802f6574",
    "68c1f4c69fe1297d6f97c82d7530063e9a4c659109cd394a63ba7d04b0ea9347",
    R"F1802f6574C()F1802f6574C",
    R"F1802f6574D()F1802f6574D",
    R"F1802f6574T()F1802f6574T",
    R"F1802f6574F(10: if ((*(uint *)(param_2 + 0x44) & 0x200000) != 0) {
14: return;)F1802f6574F",
    R"F1802f6574U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6574U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6574() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6574", "FUN_1802f6574");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1b0);
    // body sha256: 68c1f4c69fe1297d6f97c82d7530063e9a4c659109cd394a63ba7d04b0ea9347
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x200000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x200000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffdfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6574;
}

// 0x1802f65a2 FUN_1802f65a2
// source: re/dump/decompile/0x1802f65a2_FUN_1802f65a2.c
// size: 46 bytes; thunk: false
// body sha256: f7c7cf9ae90ebf663a0d6f843005ad1d82421a40dd73a0c2bb176db6851867a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f65a2{
    "0x1802f65a2",
    "FUN_1802f65a2",
    R"F1802f65a2S(undefined FUN_1802f65a2())F1802f65a2S",
    R"B1802f65a2(// 0x1802f65a2  FUN_1802f65a2
// size=46 thunk=false
// signature: undefined FUN_1802f65a2()
// status: ok


void FUN_1802f65a2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b0);
  }
  return;
}


)B1802f65a2",
    "f7c7cf9ae90ebf663a0d6f843005ad1d82421a40dd73a0c2bb176db6851867a5",
    R"F1802f65a2C()F1802f65a2C",
    R"F1802f65a2D()F1802f65a2D",
    R"F1802f65a2T()F1802f65a2T",
    R"F1802f65a2F(10: if ((*(uint *)(param_2 + 0x44) & 0x400000) != 0) {
14: return;)F1802f65a2F",
    R"F1802f65a2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f65a2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f65a2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f65a2", "FUN_1802f65a2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1b0);
    // body sha256: f7c7cf9ae90ebf663a0d6f843005ad1d82421a40dd73a0c2bb176db6851867a5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x400000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x400000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffbfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f65a2;
}

// 0x1802f65d0 FUN_1802f65d0
// source: re/dump/decompile/0x1802f65d0_FUN_1802f65d0.c
// size: 46 bytes; thunk: false
// body sha256: 867c7f54beaf445196bcfcf0ac2eeb22c441275005f024d2b71f5dd7df2861a4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f65d0{
    "0x1802f65d0",
    "FUN_1802f65d0",
    R"F1802f65d0S(undefined FUN_1802f65d0())F1802f65d0S",
    R"B1802f65d0(// 0x1802f65d0  FUN_1802f65d0
// size=46 thunk=false
// signature: undefined FUN_1802f65d0()
// status: ok


void FUN_1802f65d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4b0);
  }
  return;
}


)B1802f65d0",
    "867c7f54beaf445196bcfcf0ac2eeb22c441275005f024d2b71f5dd7df2861a4",
    R"F1802f65d0C()F1802f65d0C",
    R"F1802f65d0D()F1802f65d0D",
    R"F1802f65d0T()F1802f65d0T",
    R"F1802f65d0F(10: if ((*(uint *)(param_2 + 0x44) & 0x800000) != 0) {
14: return;)F1802f65d0F",
    R"F1802f65d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f65d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f65d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f65d0", "FUN_1802f65d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x4b0);
    // body sha256: 867c7f54beaf445196bcfcf0ac2eeb22c441275005f024d2b71f5dd7df2861a4
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xff7fffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f65d0;
}

// 0x1802f65fe FUN_1802f65fe
// source: re/dump/decompile/0x1802f65fe_FUN_1802f65fe.c
// size: 46 bytes; thunk: false
// body sha256: 7dcbad9f29ad6f185b45d5e0bab72e9c73beb334faa13342a83119ae671e2f26
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f65fe{
    "0x1802f65fe",
    "FUN_1802f65fe",
    R"F1802f65feS(undefined FUN_1802f65fe())F1802f65feS",
    R"B1802f65fe(// 0x1802f65fe  FUN_1802f65fe
// size=46 thunk=false
// signature: undefined FUN_1802f65fe()
// status: ok


void FUN_1802f65fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d0);
  }
  return;
}


)B1802f65fe",
    "7dcbad9f29ad6f185b45d5e0bab72e9c73beb334faa13342a83119ae671e2f26",
    R"F1802f65feC()F1802f65feC",
    R"F1802f65feD()F1802f65feD",
    R"F1802f65feT()F1802f65feT",
    R"F1802f65feF(10: if ((*(uint *)(param_2 + 0x44) & 0x1000000) != 0) {
14: return;)F1802f65feF",
    R"F1802f65feU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f65feU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f65fe() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f65fe", "FUN_1802f65fe");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1d0);
    // body sha256: 7dcbad9f29ad6f185b45d5e0bab72e9c73beb334faa13342a83119ae671e2f26
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfeffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f65fe;
}

// 0x1802f662c FUN_1802f662c
// source: re/dump/decompile/0x1802f662c_FUN_1802f662c.c
// size: 46 bytes; thunk: false
// body sha256: e6a701da370173548ac8c2cf61209dd3e33a7d9cc62a7a74465dd16f7ce84756
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f662c{
    "0x1802f662c",
    "FUN_1802f662c",
    R"F1802f662cS(undefined FUN_1802f662c())F1802f662cS",
    R"B1802f662c(// 0x1802f662c  FUN_1802f662c
// size=46 thunk=false
// signature: undefined FUN_1802f662c()
// status: ok


void FUN_1802f662c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d0);
  }
  return;
}


)B1802f662c",
    "e6a701da370173548ac8c2cf61209dd3e33a7d9cc62a7a74465dd16f7ce84756",
    R"F1802f662cC()F1802f662cC",
    R"F1802f662cD()F1802f662cD",
    R"F1802f662cT()F1802f662cT",
    R"F1802f662cF(10: if ((*(uint *)(param_2 + 0x44) & 0x2000000) != 0) {
14: return;)F1802f662cF",
    R"F1802f662cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f662cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f662c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f662c", "FUN_1802f662c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1d0);
    // body sha256: e6a701da370173548ac8c2cf61209dd3e33a7d9cc62a7a74465dd16f7ce84756
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x2000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x2000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfdffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f662c;
}

// 0x1802f665a FUN_1802f665a
// source: re/dump/decompile/0x1802f665a_FUN_1802f665a.c
// size: 46 bytes; thunk: false
// body sha256: 1d34dcd7db17bb27bdcd4852add553344cfcac9e25122105470ccd365b2e8a2c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f665a{
    "0x1802f665a",
    "FUN_1802f665a",
    R"F1802f665aS(undefined FUN_1802f665a())F1802f665aS",
    R"B1802f665a(// 0x1802f665a  FUN_1802f665a
// size=46 thunk=false
// signature: undefined FUN_1802f665a()
// status: ok


void FUN_1802f665a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4d0);
  }
  return;
}


)B1802f665a",
    "1d34dcd7db17bb27bdcd4852add553344cfcac9e25122105470ccd365b2e8a2c",
    R"F1802f665aC()F1802f665aC",
    R"F1802f665aD()F1802f665aD",
    R"F1802f665aT()F1802f665aT",
    R"F1802f665aF(10: if ((*(uint *)(param_2 + 0x44) & 0x4000000) != 0) {
14: return;)F1802f665aF",
    R"F1802f665aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f665aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f665a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f665a", "FUN_1802f665a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x4d0);
    // body sha256: 1d34dcd7db17bb27bdcd4852add553344cfcac9e25122105470ccd365b2e8a2c
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x4000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x4000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfbffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f665a;
}

// 0x1802f6688 FUN_1802f6688
// source: re/dump/decompile/0x1802f6688_FUN_1802f6688.c
// size: 46 bytes; thunk: false
// body sha256: 5a4930f5f0119091d6f01048ec90c5842360526b500255964d1ce41021d94e02
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6688{
    "0x1802f6688",
    "FUN_1802f6688",
    R"F1802f6688S(undefined FUN_1802f6688())F1802f6688S",
    R"B1802f6688(// 0x1802f6688  FUN_1802f6688
// size=46 thunk=false
// signature: undefined FUN_1802f6688()
// status: ok


void FUN_1802f6688(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f0);
  }
  return;
}


)B1802f6688",
    "5a4930f5f0119091d6f01048ec90c5842360526b500255964d1ce41021d94e02",
    R"F1802f6688C()F1802f6688C",
    R"F1802f6688D()F1802f6688D",
    R"F1802f6688T()F1802f6688T",
    R"F1802f6688F(10: if ((*(uint *)(param_2 + 0x44) & 0x8000000) != 0) {
14: return;)F1802f6688F",
    R"F1802f6688U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6688U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6688() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6688", "FUN_1802f6688");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1f0);
    // body sha256: 5a4930f5f0119091d6f01048ec90c5842360526b500255964d1ce41021d94e02
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x8000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x8000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xf7ffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6688;
}

// 0x1802f66b6 FUN_1802f66b6
// source: re/dump/decompile/0x1802f66b6_FUN_1802f66b6.c
// size: 46 bytes; thunk: false
// body sha256: 9aae7c5a0882700bc886c6aef88808ae0ef5b3311b6b04db64ac2488161205bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f66b6{
    "0x1802f66b6",
    "FUN_1802f66b6",
    R"F1802f66b6S(undefined FUN_1802f66b6())F1802f66b6S",
    R"B1802f66b6(// 0x1802f66b6  FUN_1802f66b6
// size=46 thunk=false
// signature: undefined FUN_1802f66b6()
// status: ok


void FUN_1802f66b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f0);
  }
  return;
}


)B1802f66b6",
    "9aae7c5a0882700bc886c6aef88808ae0ef5b3311b6b04db64ac2488161205bd",
    R"F1802f66b6C()F1802f66b6C",
    R"F1802f66b6D()F1802f66b6D",
    R"F1802f66b6T()F1802f66b6T",
    R"F1802f66b6F(10: if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0) {
14: return;)F1802f66b6F",
    R"F1802f66b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f66b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f66b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f66b6", "FUN_1802f66b6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1f0);
    // body sha256: 9aae7c5a0882700bc886c6aef88808ae0ef5b3311b6b04db64ac2488161205bd
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xefffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f66b6;
}

// 0x1802f66e4 FUN_1802f66e4
// source: re/dump/decompile/0x1802f66e4_FUN_1802f66e4.c
// size: 46 bytes; thunk: false
// body sha256: 470424b5418f2e5d81d38e36d0dcd6ba0215367b02067aeaa1703aee90b0580a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f66e4{
    "0x1802f66e4",
    "FUN_1802f66e4",
    R"F1802f66e4S(undefined FUN_1802f66e4())F1802f66e4S",
    R"B1802f66e4(// 0x1802f66e4  FUN_1802f66e4
// size=46 thunk=false
// signature: undefined FUN_1802f66e4()
// status: ok


void FUN_1802f66e4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4f0);
  }
  return;
}


)B1802f66e4",
    "470424b5418f2e5d81d38e36d0dcd6ba0215367b02067aeaa1703aee90b0580a",
    R"F1802f66e4C()F1802f66e4C",
    R"F1802f66e4D()F1802f66e4D",
    R"F1802f66e4T()F1802f66e4T",
    R"F1802f66e4F(10: if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0) {
14: return;)F1802f66e4F",
    R"F1802f66e4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f66e4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f66e4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f66e4", "FUN_1802f66e4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x4f0);
    // body sha256: 470424b5418f2e5d81d38e36d0dcd6ba0215367b02067aeaa1703aee90b0580a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x20000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xdfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f66e4;
}

// 0x1802f6712 FUN_1802f6712
// source: re/dump/decompile/0x1802f6712_FUN_1802f6712.c
// size: 46 bytes; thunk: false
// body sha256: 9ac042f3051b31ff15dbae59c804a44042b5fabde170101fd65576bd718d6116
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6712{
    "0x1802f6712",
    "FUN_1802f6712",
    R"F1802f6712S(undefined FUN_1802f6712())F1802f6712S",
    R"B1802f6712(// 0x1802f6712  FUN_1802f6712
// size=46 thunk=false
// signature: undefined FUN_1802f6712()
// status: ok


void FUN_1802f6712(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xbfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x210);
  }
  return;
}


)B1802f6712",
    "9ac042f3051b31ff15dbae59c804a44042b5fabde170101fd65576bd718d6116",
    R"F1802f6712C()F1802f6712C",
    R"F1802f6712D()F1802f6712D",
    R"F1802f6712T()F1802f6712T",
    R"F1802f6712F(10: if ((*(uint *)(param_2 + 0x44) & 0x40000000) != 0) {
14: return;)F1802f6712F",
    R"F1802f6712U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6712U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6712() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6712", "FUN_1802f6712");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x210);
    // body sha256: 9ac042f3051b31ff15dbae59c804a44042b5fabde170101fd65576bd718d6116
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x40000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x40000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xbfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x210);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6712;
}

// 0x1802f6740 FUN_1802f6740
// source: re/dump/decompile/0x1802f6740_FUN_1802f6740.c
// size: 46 bytes; thunk: false
// body sha256: 1b0a7c4786a570bcd0acea182d1798b0331f519030027ee4adfe6b0bc3c0e928
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6740{
    "0x1802f6740",
    "FUN_1802f6740",
    R"F1802f6740S(undefined FUN_1802f6740())F1802f6740S",
    R"B1802f6740(// 0x1802f6740  FUN_1802f6740
// size=46 thunk=false
// signature: undefined FUN_1802f6740()
// status: ok


void FUN_1802f6740(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x210);
  }
  return;
}


)B1802f6740",
    "1b0a7c4786a570bcd0acea182d1798b0331f519030027ee4adfe6b0bc3c0e928",
    R"F1802f6740C()F1802f6740C",
    R"F1802f6740D()F1802f6740D",
    R"F1802f6740T()F1802f6740T",
    R"F1802f6740F(10: if ((*(uint *)(param_2 + 0x44) & 0x80000000) != 0) {
14: return;)F1802f6740F",
    R"F1802f6740U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6740U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6740() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6740", "FUN_1802f6740");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x210);
    // body sha256: 1b0a7c4786a570bcd0acea182d1798b0331f519030027ee4adfe6b0bc3c0e928
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0x7fffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x210);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6740;
}

// 0x1802f676e FUN_1802f676e
// source: re/dump/decompile/0x1802f676e_FUN_1802f676e.c
// size: 41 bytes; thunk: false
// body sha256: 4710cb96d15e2e16b8ed3ea0bf9d0441d5a0e5cd0fc68f0899b6628c197546e5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f676e{
    "0x1802f676e",
    "FUN_1802f676e",
    R"F1802f676eS(undefined FUN_1802f676e())F1802f676eS",
    R"B1802f676e(// 0x1802f676e  FUN_1802f676e
// size=41 thunk=false
// signature: undefined FUN_1802f676e()
// status: ok


void FUN_1802f676e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x510);
  }
  return;
}


)B1802f676e",
    "4710cb96d15e2e16b8ed3ea0bf9d0441d5a0e5cd0fc68f0899b6628c197546e5",
    R"F1802f676eC()F1802f676eC",
    R"F1802f676eD()F1802f676eD",
    R"F1802f676eT()F1802f676eT",
    R"F1802f676eF(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f676eF",
    R"F1802f676eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f676eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f676e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f676e", "FUN_1802f676e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x510);
    // body sha256: 4710cb96d15e2e16b8ed3ea0bf9d0441d5a0e5cd0fc68f0899b6628c197546e5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x510);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f676e;
}

// 0x1802f6797 FUN_1802f6797
// source: re/dump/decompile/0x1802f6797_FUN_1802f6797.c
// size: 41 bytes; thunk: false
// body sha256: 03098190f9c611d53c3b08768bcd0d2d4a89c8b90bcc5fbebba9404ea34deb9f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6797{
    "0x1802f6797",
    "FUN_1802f6797",
    R"F1802f6797S(undefined FUN_1802f6797())F1802f6797S",
    R"B1802f6797(// 0x1802f6797  FUN_1802f6797
// size=41 thunk=false
// signature: undefined FUN_1802f6797()
// status: ok


void FUN_1802f6797(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x230);
  }
  return;
}


)B1802f6797",
    "03098190f9c611d53c3b08768bcd0d2d4a89c8b90bcc5fbebba9404ea34deb9f",
    R"F1802f6797C()F1802f6797C",
    R"F1802f6797D()F1802f6797D",
    R"F1802f6797T()F1802f6797T",
    R"F1802f6797F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f6797F",
    R"F1802f6797U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6797U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6797() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6797", "FUN_1802f6797");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x230);
    // body sha256: 03098190f9c611d53c3b08768bcd0d2d4a89c8b90bcc5fbebba9404ea34deb9f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x230);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6797;
}

// 0x1802f67c0 FUN_1802f67c0
// source: re/dump/decompile/0x1802f67c0_FUN_1802f67c0.c
// size: 41 bytes; thunk: false
// body sha256: 0978478e6f669c54ae05258f268f72608b8f1ea962ccc5f6b3157239d9eb61c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f67c0{
    "0x1802f67c0",
    "FUN_1802f67c0",
    R"F1802f67c0S(undefined FUN_1802f67c0())F1802f67c0S",
    R"B1802f67c0(// 0x1802f67c0  FUN_1802f67c0
// size=41 thunk=false
// signature: undefined FUN_1802f67c0()
// status: ok


void FUN_1802f67c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x230);
  }
  return;
}


)B1802f67c0",
    "0978478e6f669c54ae05258f268f72608b8f1ea962ccc5f6b3157239d9eb61c8",
    R"F1802f67c0C()F1802f67c0C",
    R"F1802f67c0D()F1802f67c0D",
    R"F1802f67c0T()F1802f67c0T",
    R"F1802f67c0F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802f67c0F",
    R"F1802f67c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f67c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f67c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f67c0", "FUN_1802f67c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x230);
    // body sha256: 0978478e6f669c54ae05258f268f72608b8f1ea962ccc5f6b3157239d9eb61c8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x230);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f67c0;
}

// 0x1802f67e9 FUN_1802f67e9
// source: re/dump/decompile/0x1802f67e9_FUN_1802f67e9.c
// size: 41 bytes; thunk: false
// body sha256: 6d699d3ea506b070684253bd52d1668dbba908a97485a164f517b8f5d1a0a435
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f67e9{
    "0x1802f67e9",
    "FUN_1802f67e9",
    R"F1802f67e9S(undefined FUN_1802f67e9())F1802f67e9S",
    R"B1802f67e9(// 0x1802f67e9  FUN_1802f67e9
// size=41 thunk=false
// signature: undefined FUN_1802f67e9()
// status: ok


void FUN_1802f67e9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x530);
  }
  return;
}


)B1802f67e9",
    "6d699d3ea506b070684253bd52d1668dbba908a97485a164f517b8f5d1a0a435",
    R"F1802f67e9C()F1802f67e9C",
    R"F1802f67e9D()F1802f67e9D",
    R"F1802f67e9T()F1802f67e9T",
    R"F1802f67e9F(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802f67e9F",
    R"F1802f67e9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f67e9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f67e9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f67e9", "FUN_1802f67e9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x530);
    // body sha256: 6d699d3ea506b070684253bd52d1668dbba908a97485a164f517b8f5d1a0a435
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x530);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f67e9;
}

// 0x1802f6812 FUN_1802f6812
// source: re/dump/decompile/0x1802f6812_FUN_1802f6812.c
// size: 41 bytes; thunk: false
// body sha256: f2a95349b69d3bf498c09c4545cf14a601168190ff487811295b67ae88814749
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6812{
    "0x1802f6812",
    "FUN_1802f6812",
    R"F1802f6812S(undefined FUN_1802f6812())F1802f6812S",
    R"B1802f6812(// 0x1802f6812  FUN_1802f6812
// size=41 thunk=false
// signature: undefined FUN_1802f6812()
// status: ok


void FUN_1802f6812(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x250);
  }
  return;
}


)B1802f6812",
    "f2a95349b69d3bf498c09c4545cf14a601168190ff487811295b67ae88814749",
    R"F1802f6812C()F1802f6812C",
    R"F1802f6812D()F1802f6812D",
    R"F1802f6812T()F1802f6812T",
    R"F1802f6812F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802f6812F",
    R"F1802f6812U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6812U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6812() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6812", "FUN_1802f6812");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x250);
    // body sha256: f2a95349b69d3bf498c09c4545cf14a601168190ff487811295b67ae88814749
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x250);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6812;
}

// 0x1802f683b FUN_1802f683b
// source: re/dump/decompile/0x1802f683b_FUN_1802f683b.c
// size: 41 bytes; thunk: false
// body sha256: 43c76764473c105eb699de0e436802058f960f036503091bb743e724a964e340
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f683b{
    "0x1802f683b",
    "FUN_1802f683b",
    R"F1802f683bS(undefined FUN_1802f683b())F1802f683bS",
    R"B1802f683b(// 0x1802f683b  FUN_1802f683b
// size=41 thunk=false
// signature: undefined FUN_1802f683b()
// status: ok


void FUN_1802f683b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x250);
  }
  return;
}


)B1802f683b",
    "43c76764473c105eb699de0e436802058f960f036503091bb743e724a964e340",
    R"F1802f683bC()F1802f683bC",
    R"F1802f683bD()F1802f683bD",
    R"F1802f683bT()F1802f683bT",
    R"F1802f683bF(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802f683bF",
    R"F1802f683bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f683bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f683b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f683b", "FUN_1802f683b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x250);
    // body sha256: 43c76764473c105eb699de0e436802058f960f036503091bb743e724a964e340
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x250);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f683b;
}

// 0x1802f6864 FUN_1802f6864
// source: re/dump/decompile/0x1802f6864_FUN_1802f6864.c
// size: 46 bytes; thunk: false
// body sha256: 222c4937438bdd7fd8040edb941f959e3738b34d1d4595b959e21fbf2688b23a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6864{
    "0x1802f6864",
    "FUN_1802f6864",
    R"F1802f6864S(undefined FUN_1802f6864())F1802f6864S",
    R"B1802f6864(// 0x1802f6864  FUN_1802f6864
// size=46 thunk=false
// signature: undefined FUN_1802f6864()
// status: ok


void FUN_1802f6864(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x550);
  }
  return;
}


)B1802f6864",
    "222c4937438bdd7fd8040edb941f959e3738b34d1d4595b959e21fbf2688b23a",
    R"F1802f6864C()F1802f6864C",
    R"F1802f6864D()F1802f6864D",
    R"F1802f6864T()F1802f6864T",
    R"F1802f6864F(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802f6864F",
    R"F1802f6864U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6864U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6864() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6864", "FUN_1802f6864");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x550);
    // body sha256: 222c4937438bdd7fd8040edb941f959e3738b34d1d4595b959e21fbf2688b23a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x550);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6864;
}

// 0x1802f6892 FUN_1802f6892
// source: re/dump/decompile/0x1802f6892_FUN_1802f6892.c
// size: 46 bytes; thunk: false
// body sha256: 1522a54569b3efa42f9aaa130556a7bf673cc39b94a4bfc3a5f69a8fec565dfa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6892{
    "0x1802f6892",
    "FUN_1802f6892",
    R"F1802f6892S(undefined FUN_1802f6892())F1802f6892S",
    R"B1802f6892(// 0x1802f6892  FUN_1802f6892
// size=46 thunk=false
// signature: undefined FUN_1802f6892()
// status: ok


void FUN_1802f6892(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);
  }
  return;
}


)B1802f6892",
    "1522a54569b3efa42f9aaa130556a7bf673cc39b94a4bfc3a5f69a8fec565dfa",
    R"F1802f6892C()F1802f6892C",
    R"F1802f6892D()F1802f6892D",
    R"F1802f6892T()F1802f6892T",
    R"F1802f6892F(10: if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
14: return;)F1802f6892F",
    R"F1802f6892U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6892U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6892() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6892", "FUN_1802f6892");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x270);
    // body sha256: 1522a54569b3efa42f9aaa130556a7bf673cc39b94a4bfc3a5f69a8fec565dfa
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6892;
}

// 0x1802f68c0 FUN_1802f68c0
// source: re/dump/decompile/0x1802f68c0_FUN_1802f68c0.c
// size: 46 bytes; thunk: false
// body sha256: b5f613e5c78c1b51c1c96490e6cd4d9ec7d84e46dd9665124216bbde1d0b6a53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f68c0{
    "0x1802f68c0",
    "FUN_1802f68c0",
    R"F1802f68c0S(undefined FUN_1802f68c0())F1802f68c0S",
    R"B1802f68c0(// 0x1802f68c0  FUN_1802f68c0
// size=46 thunk=false
// signature: undefined FUN_1802f68c0()
// status: ok


void FUN_1802f68c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);
  }
  return;
}


)B1802f68c0",
    "b5f613e5c78c1b51c1c96490e6cd4d9ec7d84e46dd9665124216bbde1d0b6a53",
    R"F1802f68c0C()F1802f68c0C",
    R"F1802f68c0D()F1802f68c0D",
    R"F1802f68c0T()F1802f68c0T",
    R"F1802f68c0F(10: if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
14: return;)F1802f68c0F",
    R"F1802f68c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f68c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f68c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f68c0", "FUN_1802f68c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x270);
    // body sha256: b5f613e5c78c1b51c1c96490e6cd4d9ec7d84e46dd9665124216bbde1d0b6a53
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x270);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f68c0;
}

// 0x1802f68ee FUN_1802f68ee
// source: re/dump/decompile/0x1802f68ee_FUN_1802f68ee.c
// size: 46 bytes; thunk: false
// body sha256: 8a88d130f4e034b0f2b1babe8f93f94b62926af124e863b2f3fc86e0417812ea
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f68ee{
    "0x1802f68ee",
    "FUN_1802f68ee",
    R"F1802f68eeS(undefined FUN_1802f68ee())F1802f68eeS",
    R"B1802f68ee(// 0x1802f68ee  FUN_1802f68ee
// size=46 thunk=false
// signature: undefined FUN_1802f68ee()
// status: ok


void FUN_1802f68ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x570);
  }
  return;
}


)B1802f68ee",
    "8a88d130f4e034b0f2b1babe8f93f94b62926af124e863b2f3fc86e0417812ea",
    R"F1802f68eeC()F1802f68eeC",
    R"F1802f68eeD()F1802f68eeD",
    R"F1802f68eeT()F1802f68eeT",
    R"F1802f68eeF(10: if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
14: return;)F1802f68eeF",
    R"F1802f68eeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f68eeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f68ee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f68ee", "FUN_1802f68ee");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x570);
    // body sha256: 8a88d130f4e034b0f2b1babe8f93f94b62926af124e863b2f3fc86e0417812ea
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x570);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f68ee;
}

// 0x1802f691c FUN_1802f691c
// source: re/dump/decompile/0x1802f691c_FUN_1802f691c.c
// size: 46 bytes; thunk: false
// body sha256: 75a63bb7dda8dce21d21e58a35b94429451a9b903639fdcd9810997a543f9d78
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f691c{
    "0x1802f691c",
    "FUN_1802f691c",
    R"F1802f691cS(undefined FUN_1802f691c())F1802f691cS",
    R"B1802f691c(// 0x1802f691c  FUN_1802f691c
// size=46 thunk=false
// signature: undefined FUN_1802f691c()
// status: ok


void FUN_1802f691c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x290);
  }
  return;
}


)B1802f691c",
    "75a63bb7dda8dce21d21e58a35b94429451a9b903639fdcd9810997a543f9d78",
    R"F1802f691cC()F1802f691cC",
    R"F1802f691cD()F1802f691cD",
    R"F1802f691cT()F1802f691cT",
    R"F1802f691cF(10: if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
14: return;)F1802f691cF",
    R"F1802f691cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f691cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f691c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f691c", "FUN_1802f691c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x290);
    // body sha256: 75a63bb7dda8dce21d21e58a35b94429451a9b903639fdcd9810997a543f9d78
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x290);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f691c;
}

// 0x1802f694a FUN_1802f694a
// source: re/dump/decompile/0x1802f694a_FUN_1802f694a.c
// size: 46 bytes; thunk: false
// body sha256: b8b63b75eac83dbc49ab8c1812708cf343f5f9868a2950758f2caf18ae8fe49b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f694a{
    "0x1802f694a",
    "FUN_1802f694a",
    R"F1802f694aS(undefined FUN_1802f694a())F1802f694aS",
    R"B1802f694a(// 0x1802f694a  FUN_1802f694a
// size=46 thunk=false
// signature: undefined FUN_1802f694a()
// status: ok


void FUN_1802f694a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x290);
  }
  return;
}


)B1802f694a",
    "b8b63b75eac83dbc49ab8c1812708cf343f5f9868a2950758f2caf18ae8fe49b",
    R"F1802f694aC()F1802f694aC",
    R"F1802f694aD()F1802f694aD",
    R"F1802f694aT()F1802f694aT",
    R"F1802f694aF(10: if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
14: return;)F1802f694aF",
    R"F1802f694aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f694aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f694a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f694a", "FUN_1802f694a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x290);
    // body sha256: b8b63b75eac83dbc49ab8c1812708cf343f5f9868a2950758f2caf18ae8fe49b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x290);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f694a;
}

// 0x1802f6978 FUN_1802f6978
// source: re/dump/decompile/0x1802f6978_FUN_1802f6978.c
// size: 46 bytes; thunk: false
// body sha256: 8fe913d6b21bb5215dd2a75cb1b02de4abe09caa550d0ae8fb6905ffe21c8919
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6978{
    "0x1802f6978",
    "FUN_1802f6978",
    R"F1802f6978S(undefined FUN_1802f6978())F1802f6978S",
    R"B1802f6978(// 0x1802f6978  FUN_1802f6978
// size=46 thunk=false
// signature: undefined FUN_1802f6978()
// status: ok


void FUN_1802f6978(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x590);
  }
  return;
}


)B1802f6978",
    "8fe913d6b21bb5215dd2a75cb1b02de4abe09caa550d0ae8fb6905ffe21c8919",
    R"F1802f6978C()F1802f6978C",
    R"F1802f6978D()F1802f6978D",
    R"F1802f6978T()F1802f6978T",
    R"F1802f6978F(10: if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
14: return;)F1802f6978F",
    R"F1802f6978U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6978U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6978() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6978", "FUN_1802f6978");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x590);
    // body sha256: 8fe913d6b21bb5215dd2a75cb1b02de4abe09caa550d0ae8fb6905ffe21c8919
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x590);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6978;
}

// 0x1802f69a6 FUN_1802f69a6
// source: re/dump/decompile/0x1802f69a6_FUN_1802f69a6.c
// size: 46 bytes; thunk: false
// body sha256: 0bb8e4347e50e4bbf55610735188e147f4aa4771ab0eb9ac0c8dd6d9ed993f3b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f69a6{
    "0x1802f69a6",
    "FUN_1802f69a6",
    R"F1802f69a6S(undefined FUN_1802f69a6())F1802f69a6S",
    R"B1802f69a6(// 0x1802f69a6  FUN_1802f69a6
// size=46 thunk=false
// signature: undefined FUN_1802f69a6()
// status: ok


void FUN_1802f69a6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b0);
  }
  return;
}


)B1802f69a6",
    "0bb8e4347e50e4bbf55610735188e147f4aa4771ab0eb9ac0c8dd6d9ed993f3b",
    R"F1802f69a6C()F1802f69a6C",
    R"F1802f69a6D()F1802f69a6D",
    R"F1802f69a6T()F1802f69a6T",
    R"F1802f69a6F(10: if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
14: return;)F1802f69a6F",
    R"F1802f69a6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f69a6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f69a6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f69a6", "FUN_1802f69a6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2b0);
    // body sha256: 0bb8e4347e50e4bbf55610735188e147f4aa4771ab0eb9ac0c8dd6d9ed993f3b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f69a6;
}

// 0x1802f69d4 FUN_1802f69d4
// source: re/dump/decompile/0x1802f69d4_FUN_1802f69d4.c
// size: 46 bytes; thunk: false
// body sha256: 7a612a7cd40bce20213f12c1d2ee20120038ead70f4f7d138263bcf0a743189d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f69d4{
    "0x1802f69d4",
    "FUN_1802f69d4",
    R"F1802f69d4S(undefined FUN_1802f69d4())F1802f69d4S",
    R"B1802f69d4(// 0x1802f69d4  FUN_1802f69d4
// size=46 thunk=false
// signature: undefined FUN_1802f69d4()
// status: ok


void FUN_1802f69d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b0);
  }
  return;
}


)B1802f69d4",
    "7a612a7cd40bce20213f12c1d2ee20120038ead70f4f7d138263bcf0a743189d",
    R"F1802f69d4C()F1802f69d4C",
    R"F1802f69d4D()F1802f69d4D",
    R"F1802f69d4T()F1802f69d4T",
    R"F1802f69d4F(10: if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
14: return;)F1802f69d4F",
    R"F1802f69d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f69d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f69d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f69d4", "FUN_1802f69d4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2b0);
    // body sha256: 7a612a7cd40bce20213f12c1d2ee20120038ead70f4f7d138263bcf0a743189d
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f69d4;
}

// 0x1802f6a02 FUN_1802f6a02
// source: re/dump/decompile/0x1802f6a02_FUN_1802f6a02.c
// size: 41 bytes; thunk: false
// body sha256: abca41027b45bc16dcb793f133360a2c12e59bb1e44f8e0e2b649eb352d00ce9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6a02{
    "0x1802f6a02",
    "FUN_1802f6a02",
    R"F1802f6a02S(undefined FUN_1802f6a02())F1802f6a02S",
    R"B1802f6a02(// 0x1802f6a02  FUN_1802f6a02
// size=41 thunk=false
// signature: undefined FUN_1802f6a02()
// status: ok


void FUN_1802f6a02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5b0);
  }
  return;
}


)B1802f6a02",
    "abca41027b45bc16dcb793f133360a2c12e59bb1e44f8e0e2b649eb352d00ce9",
    R"F1802f6a02C()F1802f6a02C",
    R"F1802f6a02D()F1802f6a02D",
    R"F1802f6a02T()F1802f6a02T",
    R"F1802f6a02F(10: if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
14: return;)F1802f6a02F",
    R"F1802f6a02U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6a02U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6a02() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6a02", "FUN_1802f6a02");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x5b0);
    // body sha256: abca41027b45bc16dcb793f133360a2c12e59bb1e44f8e0e2b649eb352d00ce9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6a02;
}

// 0x1802f6a2b FUN_1802f6a2b
// source: re/dump/decompile/0x1802f6a2b_FUN_1802f6a2b.c
// size: 41 bytes; thunk: false
// body sha256: ff2d8b0188d72e8aaad7d3d848abdba6a5aefdb1e06669900dd85c730a2f5c60
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6a2b{
    "0x1802f6a2b",
    "FUN_1802f6a2b",
    R"F1802f6a2bS(undefined FUN_1802f6a2b())F1802f6a2bS",
    R"B1802f6a2b(// 0x1802f6a2b  FUN_1802f6a2b
// size=41 thunk=false
// signature: undefined FUN_1802f6a2b()
// status: ok


void FUN_1802f6a2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);
  }
  return;
}


)B1802f6a2b",
    "ff2d8b0188d72e8aaad7d3d848abdba6a5aefdb1e06669900dd85c730a2f5c60",
    R"F1802f6a2bC()F1802f6a2bC",
    R"F1802f6a2bD()F1802f6a2bD",
    R"F1802f6a2bT()F1802f6a2bT",
    R"F1802f6a2bF(10: if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
14: return;)F1802f6a2bF",
    R"F1802f6a2bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6a2bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6a2b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6a2b", "FUN_1802f6a2b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2d0);
    // body sha256: ff2d8b0188d72e8aaad7d3d848abdba6a5aefdb1e06669900dd85c730a2f5c60
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6a2b;
}

// 0x1802f6a54 FUN_1802f6a54
// source: re/dump/decompile/0x1802f6a54_FUN_1802f6a54.c
// size: 41 bytes; thunk: false
// body sha256: 68c9dd82b45371e70a8bb3241779c046adbc60728dcd723e9f039e148d7dcce8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6a54{
    "0x1802f6a54",
    "FUN_1802f6a54",
    R"F1802f6a54S(undefined FUN_1802f6a54())F1802f6a54S",
    R"B1802f6a54(// 0x1802f6a54  FUN_1802f6a54
// size=41 thunk=false
// signature: undefined FUN_1802f6a54()
// status: ok


void FUN_1802f6a54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);
  }
  return;
}


)B1802f6a54",
    "68c9dd82b45371e70a8bb3241779c046adbc60728dcd723e9f039e148d7dcce8",
    R"F1802f6a54C()F1802f6a54C",
    R"F1802f6a54D()F1802f6a54D",
    R"F1802f6a54T()F1802f6a54T",
    R"F1802f6a54F(10: if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
14: return;)F1802f6a54F",
    R"F1802f6a54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6a54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6a54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6a54", "FUN_1802f6a54");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2d0);
    // body sha256: 68c9dd82b45371e70a8bb3241779c046adbc60728dcd723e9f039e148d7dcce8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6a54;
}

// 0x1802f6a7d FUN_1802f6a7d
// source: re/dump/decompile/0x1802f6a7d_FUN_1802f6a7d.c
// size: 41 bytes; thunk: false
// body sha256: 0b689121d805eaed6b354ac3893e50fdb3a8c2c58d4c7a987d0bda4c0f300180
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6a7d{
    "0x1802f6a7d",
    "FUN_1802f6a7d",
    R"F1802f6a7dS(undefined FUN_1802f6a7d())F1802f6a7dS",
    R"B1802f6a7d(// 0x1802f6a7d  FUN_1802f6a7d
// size=41 thunk=false
// signature: undefined FUN_1802f6a7d()
// status: ok


void FUN_1802f6a7d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5d0);
  }
  return;
}


)B1802f6a7d",
    "0b689121d805eaed6b354ac3893e50fdb3a8c2c58d4c7a987d0bda4c0f300180",
    R"F1802f6a7dC()F1802f6a7dC",
    R"F1802f6a7dD()F1802f6a7dD",
    R"F1802f6a7dT()F1802f6a7dT",
    R"F1802f6a7dF(10: if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
14: return;)F1802f6a7dF",
    R"F1802f6a7dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6a7dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6a7d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6a7d", "FUN_1802f6a7d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x5d0);
    // body sha256: 0b689121d805eaed6b354ac3893e50fdb3a8c2c58d4c7a987d0bda4c0f300180
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5d0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6a7d;
}

// 0x1802f6aa6 FUN_1802f6aa6
// source: re/dump/decompile/0x1802f6aa6_FUN_1802f6aa6.c
// size: 41 bytes; thunk: false
// body sha256: 4dac4422fc1b55e5bc3425e70fcf3db8cdc896bbd2203caceea55a2828de52a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6aa6{
    "0x1802f6aa6",
    "FUN_1802f6aa6",
    R"F1802f6aa6S(undefined FUN_1802f6aa6())F1802f6aa6S",
    R"B1802f6aa6(// 0x1802f6aa6  FUN_1802f6aa6
// size=41 thunk=false
// signature: undefined FUN_1802f6aa6()
// status: ok


void FUN_1802f6aa6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);
  }
  return;
}


)B1802f6aa6",
    "4dac4422fc1b55e5bc3425e70fcf3db8cdc896bbd2203caceea55a2828de52a5",
    R"F1802f6aa6C()F1802f6aa6C",
    R"F1802f6aa6D()F1802f6aa6D",
    R"F1802f6aa6T()F1802f6aa6T",
    R"F1802f6aa6F(10: if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
14: return;)F1802f6aa6F",
    R"F1802f6aa6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6aa6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6aa6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6aa6", "FUN_1802f6aa6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2f0);
    // body sha256: 4dac4422fc1b55e5bc3425e70fcf3db8cdc896bbd2203caceea55a2828de52a5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6aa6;
}

// 0x1802f6acf FUN_1802f6acf
// source: re/dump/decompile/0x1802f6acf_FUN_1802f6acf.c
// size: 41 bytes; thunk: false
// body sha256: aabc08f6b9e53a30bf447097774189a296ab8b38e20dbb4e59daff7692641e51
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6acf{
    "0x1802f6acf",
    "FUN_1802f6acf",
    R"F1802f6acfS(undefined FUN_1802f6acf())F1802f6acfS",
    R"B1802f6acf(// 0x1802f6acf  FUN_1802f6acf
// size=41 thunk=false
// signature: undefined FUN_1802f6acf()
// status: ok


void FUN_1802f6acf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);
  }
  return;
}


)B1802f6acf",
    "aabc08f6b9e53a30bf447097774189a296ab8b38e20dbb4e59daff7692641e51",
    R"F1802f6acfC()F1802f6acfC",
    R"F1802f6acfD()F1802f6acfD",
    R"F1802f6acfT()F1802f6acfT",
    R"F1802f6acfF(10: if ((*(uint *)(param_2 + 0x44) & 0x20) != 0) {
14: return;)F1802f6acfF",
    R"F1802f6acfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6acfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6acf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6acf", "FUN_1802f6acf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2f0);
    // body sha256: aabc08f6b9e53a30bf447097774189a296ab8b38e20dbb4e59daff7692641e51
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6acf;
}

// 0x1802f6af8 FUN_1802f6af8
// source: re/dump/decompile/0x1802f6af8_FUN_1802f6af8.c
// size: 41 bytes; thunk: false
// body sha256: fca49140e214539c6ff6cdb7ca4fe82c89a31c2f889f861620f74ac73fb27458
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6af8{
    "0x1802f6af8",
    "FUN_1802f6af8",
    R"F1802f6af8S(undefined FUN_1802f6af8())F1802f6af8S",
    R"B1802f6af8(// 0x1802f6af8  FUN_1802f6af8
// size=41 thunk=false
// signature: undefined FUN_1802f6af8()
// status: ok


void FUN_1802f6af8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5f0);
  }
  return;
}


)B1802f6af8",
    "fca49140e214539c6ff6cdb7ca4fe82c89a31c2f889f861620f74ac73fb27458",
    R"F1802f6af8C()F1802f6af8C",
    R"F1802f6af8D()F1802f6af8D",
    R"F1802f6af8T()F1802f6af8T",
    R"F1802f6af8F(10: if ((*(uint *)(param_2 + 0x44) & 0x40) != 0) {
14: return;)F1802f6af8F",
    R"F1802f6af8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6af8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6af8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6af8", "FUN_1802f6af8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x5f0);
    // body sha256: fca49140e214539c6ff6cdb7ca4fe82c89a31c2f889f861620f74ac73fb27458
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5f0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6af8;
}

// 0x1802f6b21 FUN_1802f6b21
// source: re/dump/decompile/0x1802f6b21_FUN_1802f6b21.c
// size: 46 bytes; thunk: false
// body sha256: 6baf99432f7d9e19284f1b4526cb0525f0d6d85d2b4da03f4387e5f59138d690
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6b21{
    "0x1802f6b21",
    "FUN_1802f6b21",
    R"F1802f6b21S(undefined FUN_1802f6b21())F1802f6b21S",
    R"B1802f6b21(// 0x1802f6b21  FUN_1802f6b21
// size=46 thunk=false
// signature: undefined FUN_1802f6b21()
// status: ok


void FUN_1802f6b21(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x310);
  }
  return;
}


)B1802f6b21",
    "6baf99432f7d9e19284f1b4526cb0525f0d6d85d2b4da03f4387e5f59138d690",
    R"F1802f6b21C()F1802f6b21C",
    R"F1802f6b21D()F1802f6b21D",
    R"F1802f6b21T()F1802f6b21T",
    R"F1802f6b21F(10: if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
14: return;)F1802f6b21F",
    R"F1802f6b21U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6b21U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6b21() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6b21", "FUN_1802f6b21");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x310);
    // body sha256: 6baf99432f7d9e19284f1b4526cb0525f0d6d85d2b4da03f4387e5f59138d690
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x310);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6b21;
}

// 0x1802f6b4f FUN_1802f6b4f
// source: re/dump/decompile/0x1802f6b4f_FUN_1802f6b4f.c
// size: 46 bytes; thunk: false
// body sha256: ddbab27bd1766ebf826266d3e6e2c90ca22314b06ec3974dc94c4a1a510418ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6b4f{
    "0x1802f6b4f",
    "FUN_1802f6b4f",
    R"F1802f6b4fS(undefined FUN_1802f6b4f())F1802f6b4fS",
    R"B1802f6b4f(// 0x1802f6b4f  FUN_1802f6b4f
// size=46 thunk=false
// signature: undefined FUN_1802f6b4f()
// status: ok


void FUN_1802f6b4f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x310);
  }
  return;
}


)B1802f6b4f",
    "ddbab27bd1766ebf826266d3e6e2c90ca22314b06ec3974dc94c4a1a510418ec",
    R"F1802f6b4fC()F1802f6b4fC",
    R"F1802f6b4fD()F1802f6b4fD",
    R"F1802f6b4fT()F1802f6b4fT",
    R"F1802f6b4fF(10: if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
14: return;)F1802f6b4fF",
    R"F1802f6b4fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6b4fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6b4f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6b4f", "FUN_1802f6b4f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x310);
    // body sha256: ddbab27bd1766ebf826266d3e6e2c90ca22314b06ec3974dc94c4a1a510418ec
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x310);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6b4f;
}

// 0x1802f6b7d FUN_1802f6b7d
// source: re/dump/decompile/0x1802f6b7d_FUN_1802f6b7d.c
// size: 46 bytes; thunk: false
// body sha256: 877ad5224e23bfbcdaa12ddea66cdd5e3e2b33fa575c99e54cc752e0ad3f1a2e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6b7d{
    "0x1802f6b7d",
    "FUN_1802f6b7d",
    R"F1802f6b7dS(undefined FUN_1802f6b7d())F1802f6b7dS",
    R"B1802f6b7d(// 0x1802f6b7d  FUN_1802f6b7d
// size=46 thunk=false
// signature: undefined FUN_1802f6b7d()
// status: ok


void FUN_1802f6b7d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x200) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x610);
  }
  return;
}


)B1802f6b7d",
    "877ad5224e23bfbcdaa12ddea66cdd5e3e2b33fa575c99e54cc752e0ad3f1a2e",
    R"F1802f6b7dC()F1802f6b7dC",
    R"F1802f6b7dD()F1802f6b7dD",
    R"F1802f6b7dT()F1802f6b7dT",
    R"F1802f6b7dF(10: if ((*(uint *)(param_2 + 0x44) & 0x200) != 0) {
14: return;)F1802f6b7dF",
    R"F1802f6b7dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6b7dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6b7d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6b7d", "FUN_1802f6b7d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x610);
    // body sha256: 877ad5224e23bfbcdaa12ddea66cdd5e3e2b33fa575c99e54cc752e0ad3f1a2e
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x610);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6b7d;
}

// 0x1802f6bab FUN_1802f6bab
// source: re/dump/decompile/0x1802f6bab_FUN_1802f6bab.c
// size: 46 bytes; thunk: false
// body sha256: b809b38a5800b82e8abad5629249424396edcdc5cdb03c571abbb042a7a1fa2b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6bab{
    "0x1802f6bab",
    "FUN_1802f6bab",
    R"F1802f6babS(undefined FUN_1802f6bab())F1802f6babS",
    R"B1802f6bab(// 0x1802f6bab  FUN_1802f6bab
// size=46 thunk=false
// signature: undefined FUN_1802f6bab()
// status: ok


void FUN_1802f6bab(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x400) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x330);
  }
  return;
}


)B1802f6bab",
    "b809b38a5800b82e8abad5629249424396edcdc5cdb03c571abbb042a7a1fa2b",
    R"F1802f6babC()F1802f6babC",
    R"F1802f6babD()F1802f6babD",
    R"F1802f6babT()F1802f6babT",
    R"F1802f6babF(10: if ((*(uint *)(param_2 + 0x44) & 0x400) != 0) {
14: return;)F1802f6babF",
    R"F1802f6babU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6babU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6bab() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6bab", "FUN_1802f6bab");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x330);
    // body sha256: b809b38a5800b82e8abad5629249424396edcdc5cdb03c571abbb042a7a1fa2b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x330);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6bab;
}

// 0x1802f6bd9 FUN_1802f6bd9
// source: re/dump/decompile/0x1802f6bd9_FUN_1802f6bd9.c
// size: 46 bytes; thunk: false
// body sha256: bed9f398cab1db5333a84815740ec59f703a8d0e43480b7a1f3294e0eb27d5db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6bd9{
    "0x1802f6bd9",
    "FUN_1802f6bd9",
    R"F1802f6bd9S(undefined FUN_1802f6bd9())F1802f6bd9S",
    R"B1802f6bd9(// 0x1802f6bd9  FUN_1802f6bd9
// size=46 thunk=false
// signature: undefined FUN_1802f6bd9()
// status: ok


void FUN_1802f6bd9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x800) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x330);
  }
  return;
}


)B1802f6bd9",
    "bed9f398cab1db5333a84815740ec59f703a8d0e43480b7a1f3294e0eb27d5db",
    R"F1802f6bd9C()F1802f6bd9C",
    R"F1802f6bd9D()F1802f6bd9D",
    R"F1802f6bd9T()F1802f6bd9T",
    R"F1802f6bd9F(10: if ((*(uint *)(param_2 + 0x44) & 0x800) != 0) {
14: return;)F1802f6bd9F",
    R"F1802f6bd9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6bd9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6bd9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6bd9", "FUN_1802f6bd9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x330);
    // body sha256: bed9f398cab1db5333a84815740ec59f703a8d0e43480b7a1f3294e0eb27d5db
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x330);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6bd9;
}

// 0x1802f6c07 FUN_1802f6c07
// source: re/dump/decompile/0x1802f6c07_FUN_1802f6c07.c
// size: 41 bytes; thunk: false
// body sha256: c5da62843c0232e94a9e5640c2fbeb7c9a55281c3556f65dcbdbada126c81512
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6c07{
    "0x1802f6c07",
    "FUN_1802f6c07",
    R"F1802f6c07S(undefined FUN_1802f6c07())F1802f6c07S",
    R"B1802f6c07(// 0x1802f6c07  FUN_1802f6c07
// size=41 thunk=false
// signature: undefined FUN_1802f6c07()
// status: ok


void FUN_1802f6c07(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x670);
  }
  return;
}


)B1802f6c07",
    "c5da62843c0232e94a9e5640c2fbeb7c9a55281c3556f65dcbdbada126c81512",
    R"F1802f6c07C()F1802f6c07C",
    R"F1802f6c07D()F1802f6c07D",
    R"F1802f6c07T()F1802f6c07T",
    R"F1802f6c07F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f6c07F",
    R"F1802f6c07U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6c07U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6c07() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6c07", "FUN_1802f6c07");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x670);
    // body sha256: c5da62843c0232e94a9e5640c2fbeb7c9a55281c3556f65dcbdbada126c81512
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x670);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6c07;
}

// 0x1802f6c3c FUN_1802f6c3c
// source: re/dump/decompile/0x1802f6c3c_FUN_1802f6c3c.c
// size: 46 bytes; thunk: false
// body sha256: 8bc437e80e8b7c14fea2a02e75c2bf6e0dcef009afd1cb49331db248a3a3341f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6c3c{
    "0x1802f6c3c",
    "FUN_1802f6c3c",
    R"F1802f6c3cS(undefined FUN_1802f6c3c())F1802f6c3cS",
    R"B1802f6c3c(// 0x1802f6c3c  FUN_1802f6c3c
// size=46 thunk=false
// signature: undefined FUN_1802f6c3c()
// status: ok


void FUN_1802f6c3c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x630);
  }
  return;
}


)B1802f6c3c",
    "8bc437e80e8b7c14fea2a02e75c2bf6e0dcef009afd1cb49331db248a3a3341f",
    R"F1802f6c3cC()F1802f6c3cC",
    R"F1802f6c3cD()F1802f6c3cD",
    R"F1802f6c3cT()F1802f6c3cT",
    R"F1802f6c3cF(10: if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0) {
14: return;)F1802f6c3cF",
    R"F1802f6c3cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6c3cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6c3c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6c3c", "FUN_1802f6c3c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x630);
    // body sha256: 8bc437e80e8b7c14fea2a02e75c2bf6e0dcef009afd1cb49331db248a3a3341f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x630);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6c3c;
}

// 0x1802f6c6a FUN_1802f6c6a
// source: re/dump/decompile/0x1802f6c6a_FUN_1802f6c6a.c
// size: 43 bytes; thunk: false
// body sha256: a9bbd4789d2cc5789726fd6c207f3f59f8824841db46d8606ee0f4ae31cb642f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6c6a{
    "0x1802f6c6a",
    "FUN_1802f6c6a",
    R"F1802f6c6aS(undefined FUN_1802f6c6a())F1802f6c6aS",
    R"B1802f6c6a(// 0x1802f6c6a  FUN_1802f6c6a
// size=43 thunk=false
// signature: undefined FUN_1802f6c6a()
// status: ok


void FUN_1802f6c6a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B1802f6c6a",
    "a9bbd4789d2cc5789726fd6c207f3f59f8824841db46d8606ee0f4ae31cb642f",
    R"F1802f6c6aC()F1802f6c6aC",
    R"F1802f6c6aD()F1802f6c6aD",
    R"F1802f6c6aT()F1802f6c6aT",
    R"F1802f6c6aF(10: if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0) {
14: return;)F1802f6c6aF",
    R"F1802f6c6aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6c6aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6c6a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6c6a", "FUN_1802f6c6a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x50);
    // body sha256: a9bbd4789d2cc5789726fd6c207f3f59f8824841db46d8606ee0f4ae31cb642f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6c6a;
}

// 0x1802f6c95 FUN_1802f6c95
// source: re/dump/decompile/0x1802f6c95_FUN_1802f6c95.c
// size: 43 bytes; thunk: false
// body sha256: e02eda683847b7b67e8228ae45b938f51615c8d29bf4429af803d42be8ecf406
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6c95{
    "0x1802f6c95",
    "FUN_1802f6c95",
    R"F1802f6c95S(undefined FUN_1802f6c95())F1802f6c95S",
    R"B1802f6c95(// 0x1802f6c95  FUN_1802f6c95
// size=43 thunk=false
// signature: undefined FUN_1802f6c95()
// status: ok


void FUN_1802f6c95(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B1802f6c95",
    "e02eda683847b7b67e8228ae45b938f51615c8d29bf4429af803d42be8ecf406",
    R"F1802f6c95C()F1802f6c95C",
    R"F1802f6c95D()F1802f6c95D",
    R"F1802f6c95T()F1802f6c95T",
    R"F1802f6c95F(10: if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
14: return;)F1802f6c95F",
    R"F1802f6c95U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6c95U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6c95() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6c95", "FUN_1802f6c95");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x50);
    // body sha256: e02eda683847b7b67e8228ae45b938f51615c8d29bf4429af803d42be8ecf406
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6c95;
}

// 0x1802f6cc0 FUN_1802f6cc0
// source: re/dump/decompile/0x1802f6cc0_FUN_1802f6cc0.c
// size: 46 bytes; thunk: false
// body sha256: 099c1355b471a4dcb12356081e5521a492679a061b9d27b8eeee76655b69c88a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6cc0{
    "0x1802f6cc0",
    "FUN_1802f6cc0",
    R"F1802f6cc0S(undefined FUN_1802f6cc0())F1802f6cc0S",
    R"B1802f6cc0(// 0x1802f6cc0  FUN_1802f6cc0
// size=46 thunk=false
// signature: undefined FUN_1802f6cc0()
// status: ok


void FUN_1802f6cc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x650);
  }
  return;
}


)B1802f6cc0",
    "099c1355b471a4dcb12356081e5521a492679a061b9d27b8eeee76655b69c88a",
    R"F1802f6cc0C()F1802f6cc0C",
    R"F1802f6cc0D()F1802f6cc0D",
    R"F1802f6cc0T()F1802f6cc0T",
    R"F1802f6cc0F(10: if ((*(uint *)(param_2 + 0x44) & 0x8000) != 0) {
14: return;)F1802f6cc0F",
    R"F1802f6cc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6cc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6cc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6cc0", "FUN_1802f6cc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x650);
    // body sha256: 099c1355b471a4dcb12356081e5521a492679a061b9d27b8eeee76655b69c88a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x650);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6cc0;
}

// 0x1802f6cee FUN_1802f6cee
// source: re/dump/decompile/0x1802f6cee_FUN_1802f6cee.c
// size: 43 bytes; thunk: false
// body sha256: 9021828cc52b4796ee8a886510be5b7dbb809554953fa449f53539c7b64d6b0b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6cee{
    "0x1802f6cee",
    "FUN_1802f6cee",
    R"F1802f6ceeS(undefined FUN_1802f6cee())F1802f6ceeS",
    R"B1802f6cee(// 0x1802f6cee  FUN_1802f6cee
// size=43 thunk=false
// signature: undefined FUN_1802f6cee()
// status: ok


void FUN_1802f6cee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802f6cee",
    "9021828cc52b4796ee8a886510be5b7dbb809554953fa449f53539c7b64d6b0b",
    R"F1802f6ceeC()F1802f6ceeC",
    R"F1802f6ceeD()F1802f6ceeD",
    R"F1802f6ceeT()F1802f6ceeT",
    R"F1802f6ceeF(10: if ((*(uint *)(param_2 + 0x44) & 0x10000) != 0) {
14: return;)F1802f6ceeF",
    R"F1802f6ceeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6ceeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6cee() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6cee", "FUN_1802f6cee");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x70);
    // body sha256: 9021828cc52b4796ee8a886510be5b7dbb809554953fa449f53539c7b64d6b0b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6cee;
}

// 0x1802f6d19 FUN_1802f6d19
// source: re/dump/decompile/0x1802f6d19_FUN_1802f6d19.c
// size: 43 bytes; thunk: false
// body sha256: 2c77b1141a237f5f65ac594e71b5666efe9b979f17079b93bf327ef774c8bb7b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6d19{
    "0x1802f6d19",
    "FUN_1802f6d19",
    R"F1802f6d19S(undefined FUN_1802f6d19())F1802f6d19S",
    R"B1802f6d19(// 0x1802f6d19  FUN_1802f6d19
// size=43 thunk=false
// signature: undefined FUN_1802f6d19()
// status: ok


void FUN_1802f6d19(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802f6d19",
    "2c77b1141a237f5f65ac594e71b5666efe9b979f17079b93bf327ef774c8bb7b",
    R"F1802f6d19C()F1802f6d19C",
    R"F1802f6d19D()F1802f6d19D",
    R"F1802f6d19T()F1802f6d19T",
    R"F1802f6d19F(10: if ((*(uint *)(param_2 + 0x44) & 0x20000) != 0) {
14: return;)F1802f6d19F",
    R"F1802f6d19U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6d19U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6d19() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6d19", "FUN_1802f6d19");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x70);
    // body sha256: 2c77b1141a237f5f65ac594e71b5666efe9b979f17079b93bf327ef774c8bb7b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffdffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6d19;
}

// 0x1802f6dc8 FUN_1802f6dc8
// source: re/dump/decompile/0x1802f6dc8_FUN_1802f6dc8.c
// size: 41 bytes; thunk: false
// body sha256: ea093cc5ebd93a166681a93d2eeb3312543f09a7cc40c2ef9dc414875ddac0c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6dc8{
    "0x1802f6dc8",
    "FUN_1802f6dc8",
    R"F1802f6dc8S(undefined FUN_1802f6dc8())F1802f6dc8S",
    R"B1802f6dc8(// 0x1802f6dc8  FUN_1802f6dc8
// size=41 thunk=false
// signature: undefined FUN_1802f6dc8()
// status: ok


void FUN_1802f6dc8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


)B1802f6dc8",
    "ea093cc5ebd93a166681a93d2eeb3312543f09a7cc40c2ef9dc414875ddac0c9",
    R"F1802f6dc8C()F1802f6dc8C",
    R"F1802f6dc8D()F1802f6dc8D",
    R"F1802f6dc8T()F1802f6dc8T",
    R"F1802f6dc8F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f6dc8F",
    R"F1802f6dc8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6dc8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6dc8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6dc8", "FUN_1802f6dc8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1a8);
    // body sha256: ea093cc5ebd93a166681a93d2eeb3312543f09a7cc40c2ef9dc414875ddac0c9
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6dc8;
}

// 0x1802f6dfd FUN_1802f6dfd
// source: re/dump/decompile/0x1802f6dfd_FUN_1802f6dfd.c
// size: 41 bytes; thunk: false
// body sha256: 820b15137ea539113fd21d2f2128ce48e46683e31cf23c5fb3963190144784b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6dfd{
    "0x1802f6dfd",
    "FUN_1802f6dfd",
    R"F1802f6dfdS(undefined FUN_1802f6dfd())F1802f6dfdS",
    R"B1802f6dfd(// 0x1802f6dfd  FUN_1802f6dfd
// size=41 thunk=false
// signature: undefined FUN_1802f6dfd()
// status: ok


void FUN_1802f6dfd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


)B1802f6dfd",
    "820b15137ea539113fd21d2f2128ce48e46683e31cf23c5fb3963190144784b5",
    R"F1802f6dfdC()F1802f6dfdC",
    R"F1802f6dfdD()F1802f6dfdD",
    R"F1802f6dfdT()F1802f6dfdT",
    R"F1802f6dfdF(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f6dfdF",
    R"F1802f6dfdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6dfdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6dfd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6dfd", "FUN_1802f6dfd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1c8);
    // body sha256: 820b15137ea539113fd21d2f2128ce48e46683e31cf23c5fb3963190144784b5
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6dfd;
}

// 0x1802f6e26 FUN_1802f6e26
// source: re/dump/decompile/0x1802f6e26_FUN_1802f6e26.c
// size: 46 bytes; thunk: false
// body sha256: bb9e3c12007f2d646d534577cb15adad501daf5b49a679cbd8159257d47d1f5a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6e26{
    "0x1802f6e26",
    "FUN_1802f6e26",
    R"F1802f6e26S(undefined FUN_1802f6e26())F1802f6e26S",
    R"B1802f6e26(// 0x1802f6e26  FUN_1802f6e26
// size=46 thunk=false
// signature: undefined FUN_1802f6e26()
// status: ok


void FUN_1802f6e26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);
  }
  return;
}


)B1802f6e26",
    "bb9e3c12007f2d646d534577cb15adad501daf5b49a679cbd8159257d47d1f5a",
    R"F1802f6e26C()F1802f6e26C",
    R"F1802f6e26D()F1802f6e26D",
    R"F1802f6e26T()F1802f6e26T",
    R"F1802f6e26F(10: if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
14: return;)F1802f6e26F",
    R"F1802f6e26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6e26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6e26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6e26", "FUN_1802f6e26");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1e8);
    // body sha256: bb9e3c12007f2d646d534577cb15adad501daf5b49a679cbd8159257d47d1f5a
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6e26;
}

// 0x1802f6e54 FUN_1802f6e54
// source: re/dump/decompile/0x1802f6e54_FUN_1802f6e54.c
// size: 46 bytes; thunk: false
// body sha256: e660cc491c2125c7387b92875d5aee8e18f80bda4b94401a7255202fe21dba3f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6e54{
    "0x1802f6e54",
    "FUN_1802f6e54",
    R"F1802f6e54S(undefined FUN_1802f6e54())F1802f6e54S",
    R"B1802f6e54(// 0x1802f6e54  FUN_1802f6e54
// size=46 thunk=false
// signature: undefined FUN_1802f6e54()
// status: ok


void FUN_1802f6e54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);
  }
  return;
}


)B1802f6e54",
    "e660cc491c2125c7387b92875d5aee8e18f80bda4b94401a7255202fe21dba3f",
    R"F1802f6e54C()F1802f6e54C",
    R"F1802f6e54D()F1802f6e54D",
    R"F1802f6e54T()F1802f6e54T",
    R"F1802f6e54F(10: if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
14: return;)F1802f6e54F",
    R"F1802f6e54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6e54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6e54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6e54", "FUN_1802f6e54");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x208);
    // body sha256: e660cc491c2125c7387b92875d5aee8e18f80bda4b94401a7255202fe21dba3f
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6e54;
}

// 0x1802f6e82 FUN_1802f6e82
// source: re/dump/decompile/0x1802f6e82_FUN_1802f6e82.c
// size: 41 bytes; thunk: false
// body sha256: 7d6abd6e32aceeb27dfdc4db0aed1f86bad3247df8b9984bec7146ffe30bb040
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6e82{
    "0x1802f6e82",
    "FUN_1802f6e82",
    R"F1802f6e82S(undefined FUN_1802f6e82())F1802f6e82S",
    R"B1802f6e82(// 0x1802f6e82  FUN_1802f6e82
// size=41 thunk=false
// signature: undefined FUN_1802f6e82()
// status: ok


void FUN_1802f6e82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


)B1802f6e82",
    "7d6abd6e32aceeb27dfdc4db0aed1f86bad3247df8b9984bec7146ffe30bb040",
    R"F1802f6e82C()F1802f6e82C",
    R"F1802f6e82D()F1802f6e82D",
    R"F1802f6e82T()F1802f6e82T",
    R"F1802f6e82F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802f6e82F",
    R"F1802f6e82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6e82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6e82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6e82", "FUN_1802f6e82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x228);
    // body sha256: 7d6abd6e32aceeb27dfdc4db0aed1f86bad3247df8b9984bec7146ffe30bb040
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6e82;
}

// 0x1802f6eab FUN_1802f6eab
// source: re/dump/decompile/0x1802f6eab_FUN_1802f6eab.c
// size: 41 bytes; thunk: false
// body sha256: 0afae6ed1393b4a37213bfe39223db5c2495d32fe0c674facff32a21515c46ad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6eab{
    "0x1802f6eab",
    "FUN_1802f6eab",
    R"F1802f6eabS(undefined FUN_1802f6eab())F1802f6eabS",
    R"B1802f6eab(// 0x1802f6eab  FUN_1802f6eab
// size=41 thunk=false
// signature: undefined FUN_1802f6eab()
// status: ok


void FUN_1802f6eab(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);
  }
  return;
}


)B1802f6eab",
    "0afae6ed1393b4a37213bfe39223db5c2495d32fe0c674facff32a21515c46ad",
    R"F1802f6eabC()F1802f6eabC",
    R"F1802f6eabD()F1802f6eabD",
    R"F1802f6eabT()F1802f6eabT",
    R"F1802f6eabF(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802f6eabF",
    R"F1802f6eabU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6eabU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6eab() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6eab", "FUN_1802f6eab");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x248);
    // body sha256: 0afae6ed1393b4a37213bfe39223db5c2495d32fe0c674facff32a21515c46ad
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6eab;
}

// 0x1802f6ed4 FUN_1802f6ed4
// source: re/dump/decompile/0x1802f6ed4_FUN_1802f6ed4.c
// size: 41 bytes; thunk: false
// body sha256: 7163f96cf315a6393e5283d33de80d6db2545055ffc47b9331119ffe0eb254f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6ed4{
    "0x1802f6ed4",
    "FUN_1802f6ed4",
    R"F1802f6ed4S(undefined FUN_1802f6ed4())F1802f6ed4S",
    R"B1802f6ed4(// 0x1802f6ed4  FUN_1802f6ed4
// size=41 thunk=false
// signature: undefined FUN_1802f6ed4()
// status: ok


void FUN_1802f6ed4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f6ed4",
    "7163f96cf315a6393e5283d33de80d6db2545055ffc47b9331119ffe0eb254f8",
    R"F1802f6ed4C()F1802f6ed4C",
    R"F1802f6ed4D()F1802f6ed4D",
    R"F1802f6ed4T()F1802f6ed4T",
    R"F1802f6ed4F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802f6ed4F",
    R"F1802f6ed4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6ed4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6ed4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6ed4", "FUN_1802f6ed4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: 7163f96cf315a6393e5283d33de80d6db2545055ffc47b9331119ffe0eb254f8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6ed4;
}

// 0x1802f6efd FUN_1802f6efd
// source: re/dump/decompile/0x1802f6efd_FUN_1802f6efd.c
// size: 41 bytes; thunk: false
// body sha256: 2915cd0fd7aabff5e18cadd4b1c4789ac61ff623cbcd29f860eac4c43d5e59d8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6efd{
    "0x1802f6efd",
    "FUN_1802f6efd",
    R"F1802f6efdS(undefined FUN_1802f6efd())F1802f6efdS",
    R"B1802f6efd(// 0x1802f6efd  FUN_1802f6efd
// size=41 thunk=false
// signature: undefined FUN_1802f6efd()
// status: ok


void FUN_1802f6efd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);
  }
  return;
}


)B1802f6efd",
    "2915cd0fd7aabff5e18cadd4b1c4789ac61ff623cbcd29f860eac4c43d5e59d8",
    R"F1802f6efdC()F1802f6efdC",
    R"F1802f6efdD()F1802f6efdD",
    R"F1802f6efdT()F1802f6efdT",
    R"F1802f6efdF(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802f6efdF",
    R"F1802f6efdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6efdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6efd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6efd", "FUN_1802f6efd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x308);
    // body sha256: 2915cd0fd7aabff5e18cadd4b1c4789ac61ff623cbcd29f860eac4c43d5e59d8
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6efd;
}

// 0x1802f6f26 FUN_1802f6f26
// source: re/dump/decompile/0x1802f6f26_FUN_1802f6f26.c
// size: 46 bytes; thunk: false
// body sha256: c93f033e2f7147f233969892605183a94a0e470fd7b352177a0f6b7d4962d2b3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6f26{
    "0x1802f6f26",
    "FUN_1802f6f26",
    R"F1802f6f26S(undefined FUN_1802f6f26())F1802f6f26S",
    R"B1802f6f26(// 0x1802f6f26  FUN_1802f6f26
// size=46 thunk=false
// signature: undefined FUN_1802f6f26()
// status: ok


void FUN_1802f6f26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


)B1802f6f26",
    "c93f033e2f7147f233969892605183a94a0e470fd7b352177a0f6b7d4962d2b3",
    R"F1802f6f26C()F1802f6f26C",
    R"F1802f6f26D()F1802f6f26D",
    R"F1802f6f26T()F1802f6f26T",
    R"F1802f6f26F(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802f6f26F",
    R"F1802f6f26U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6f26U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6f26() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6f26", "FUN_1802f6f26");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x268);
    // body sha256: c93f033e2f7147f233969892605183a94a0e470fd7b352177a0f6b7d4962d2b3
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6f26;
}

// 0x1802f6f54 FUN_1802f6f54
// source: re/dump/decompile/0x1802f6f54_FUN_1802f6f54.c
// size: 46 bytes; thunk: false
// body sha256: 4bb7c578cc2baa68b2e9c9dca068ce0877841b5aa3a37ddcdb7b3925bafe920b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6f54{
    "0x1802f6f54",
    "FUN_1802f6f54",
    R"F1802f6f54S(undefined FUN_1802f6f54())F1802f6f54S",
    R"B1802f6f54(// 0x1802f6f54  FUN_1802f6f54
// size=46 thunk=false
// signature: undefined FUN_1802f6f54()
// status: ok


void FUN_1802f6f54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x288);
  }
  return;
}


)B1802f6f54",
    "4bb7c578cc2baa68b2e9c9dca068ce0877841b5aa3a37ddcdb7b3925bafe920b",
    R"F1802f6f54C()F1802f6f54C",
    R"F1802f6f54D()F1802f6f54D",
    R"F1802f6f54T()F1802f6f54T",
    R"F1802f6f54F(10: if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
14: return;)F1802f6f54F",
    R"F1802f6f54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6f54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6f54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6f54", "FUN_1802f6f54");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x288);
    // body sha256: 4bb7c578cc2baa68b2e9c9dca068ce0877841b5aa3a37ddcdb7b3925bafe920b
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x288);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6f54;
}

// 0x1802f6f82 FUN_1802f6f82
// source: re/dump/decompile/0x1802f6f82_FUN_1802f6f82.c
// size: 46 bytes; thunk: false
// body sha256: 86113057e56e5eae04bc18cb60d0715ed51889874065a7525f01ed0574a2c678
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6f82{
    "0x1802f6f82",
    "FUN_1802f6f82",
    R"F1802f6f82S(undefined FUN_1802f6f82())F1802f6f82S",
    R"B1802f6f82(// 0x1802f6f82  FUN_1802f6f82
// size=46 thunk=false
// signature: undefined FUN_1802f6f82()
// status: ok


void FUN_1802f6f82(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a8);
  }
  return;
}


)B1802f6f82",
    "86113057e56e5eae04bc18cb60d0715ed51889874065a7525f01ed0574a2c678",
    R"F1802f6f82C()F1802f6f82C",
    R"F1802f6f82D()F1802f6f82D",
    R"F1802f6f82T()F1802f6f82T",
    R"F1802f6f82F(10: if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
14: return;)F1802f6f82F",
    R"F1802f6f82U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6f82U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6f82() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6f82", "FUN_1802f6f82");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2a8);
    // body sha256: 86113057e56e5eae04bc18cb60d0715ed51889874065a7525f01ed0574a2c678
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6f82;
}

// 0x1802f6fb0 FUN_1802f6fb0
// source: re/dump/decompile/0x1802f6fb0_FUN_1802f6fb0.c
// size: 46 bytes; thunk: false
// body sha256: be34902dfdc5bf1e4627c7619217def66402f564a79f99eb98cade07c4062bcc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6fb0{
    "0x1802f6fb0",
    "FUN_1802f6fb0",
    R"F1802f6fb0S(undefined FUN_1802f6fb0())F1802f6fb0S",
    R"B1802f6fb0(// 0x1802f6fb0  FUN_1802f6fb0
// size=46 thunk=false
// signature: undefined FUN_1802f6fb0()
// status: ok


void FUN_1802f6fb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);
  }
  return;
}


)B1802f6fb0",
    "be34902dfdc5bf1e4627c7619217def66402f564a79f99eb98cade07c4062bcc",
    R"F1802f6fb0C()F1802f6fb0C",
    R"F1802f6fb0D()F1802f6fb0D",
    R"F1802f6fb0T()F1802f6fb0T",
    R"F1802f6fb0F(10: if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
14: return;)F1802f6fb0F",
    R"F1802f6fb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6fb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6fb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6fb0", "FUN_1802f6fb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2c8);
    // body sha256: be34902dfdc5bf1e4627c7619217def66402f564a79f99eb98cade07c4062bcc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6fb0;
}

// 0x1802f6fde FUN_1802f6fde
// source: re/dump/decompile/0x1802f6fde_FUN_1802f6fde.c
// size: 46 bytes; thunk: false
// body sha256: 57df6026f037fc602c2e3a8f415fc2dee924e19487869b34a2af1937a3ef77fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f6fde{
    "0x1802f6fde",
    "FUN_1802f6fde",
    R"F1802f6fdeS(undefined FUN_1802f6fde())F1802f6fdeS",
    R"B1802f6fde(// 0x1802f6fde  FUN_1802f6fde
// size=46 thunk=false
// signature: undefined FUN_1802f6fde()
// status: ok


void FUN_1802f6fde(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x328);
  }
  return;
}


)B1802f6fde",
    "57df6026f037fc602c2e3a8f415fc2dee924e19487869b34a2af1937a3ef77fc",
    R"F1802f6fdeC()F1802f6fdeC",
    R"F1802f6fdeD()F1802f6fdeD",
    R"F1802f6fdeT()F1802f6fdeT",
    R"F1802f6fdeF(10: if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
14: return;)F1802f6fdeF",
    R"F1802f6fdeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f6fdeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f6fde() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f6fde", "FUN_1802f6fde");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x328);
    // body sha256: 57df6026f037fc602c2e3a8f415fc2dee924e19487869b34a2af1937a3ef77fc
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x328);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f6fde;
}

// 0x1802f700c FUN_1802f700c
// source: re/dump/decompile/0x1802f700c_FUN_1802f700c.c
// size: 46 bytes; thunk: false
// body sha256: 74f2c12831767f83cca4d0092b608a47fbb80d0413726eb24d41640b11b6c2f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f700c{
    "0x1802f700c",
    "FUN_1802f700c",
    R"F1802f700cS(undefined FUN_1802f700c())F1802f700cS",
    R"B1802f700c(// 0x1802f700c  FUN_1802f700c
// size=46 thunk=false
// signature: undefined FUN_1802f700c()
// status: ok


void FUN_1802f700c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e8);
  }
  return;
}


)B1802f700c",
    "74f2c12831767f83cca4d0092b608a47fbb80d0413726eb24d41640b11b6c2f7",
    R"F1802f700cC()F1802f700cC",
    R"F1802f700cD()F1802f700cD",
    R"F1802f700cT()F1802f700cT",
    R"F1802f700cF(10: if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
14: return;)F1802f700cF",
    R"F1802f700cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f700cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f700c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f700c", "FUN_1802f700c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2e8);
    // body sha256: 74f2c12831767f83cca4d0092b608a47fbb80d0413726eb24d41640b11b6c2f7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f700c;
}

// 0x1802f703a FUN_1802f703a
// source: re/dump/decompile/0x1802f703a_FUN_1802f703a.c
// size: 46 bytes; thunk: false
// body sha256: 11559eff5c14fa39714e97865c827010136b902e2ebd2a99c95102acfae95eca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f703a{
    "0x1802f703a",
    "FUN_1802f703a",
    R"F1802f703aS(undefined FUN_1802f703a())F1802f703aS",
    R"B1802f703a(// 0x1802f703a  FUN_1802f703a
// size=46 thunk=false
// signature: undefined FUN_1802f703a()
// status: ok


void FUN_1802f703a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);
  }
  return;
}


)B1802f703a",
    "11559eff5c14fa39714e97865c827010136b902e2ebd2a99c95102acfae95eca",
    R"F1802f703aC()F1802f703aC",
    R"F1802f703aD()F1802f703aD",
    R"F1802f703aT()F1802f703aT",
    R"F1802f703aF(10: if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
14: return;)F1802f703aF",
    R"F1802f703aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f703aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f703a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f703a", "FUN_1802f703a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x348);
    // body sha256: 11559eff5c14fa39714e97865c827010136b902e2ebd2a99c95102acfae95eca
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f703a;
}

}  // namespace sf::reconstructed
