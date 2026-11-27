// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802e948e FUN_1802e948e
// source: re/dump/decompile/0x1802e948e_FUN_1802e948e.c
// size: 46 bytes; thunk: false
// body sha256: e622c2cec835037036d98886cc1b1bf4a01b37be514fb78c6ee60eb1fd1eba75
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e948e{
    "0x1802e948e",
    "FUN_1802e948e",
    R"F1802e948eS(undefined FUN_1802e948e())F1802e948eS",
    R"B1802e948e(// 0x1802e948e  FUN_1802e948e
// size=46 thunk=false
// signature: undefined FUN_1802e948e()
// status: ok


void FUN_1802e948e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x198);
  }
  return;
}


)B1802e948e",
    "e622c2cec835037036d98886cc1b1bf4a01b37be514fb78c6ee60eb1fd1eba75",
    R"F1802e948eC()F1802e948eC",
    R"F1802e948eD()F1802e948eD",
    R"F1802e948eT()F1802e948eT",
    R"F1802e948eF(10: if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0) {
14: return;)F1802e948eF",
    R"F1802e948eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e948eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e948e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e948e", "FUN_1802e948e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x198);
    // body sha256: e622c2cec835037036d98886cc1b1bf4a01b37be514fb78c6ee60eb1fd1eba75
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e948e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xefffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x198);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e948e;
}

// 0x1802e94bc FUN_1802e94bc
// source: re/dump/decompile/0x1802e94bc_FUN_1802e94bc.c
// size: 46 bytes; thunk: false
// body sha256: c1d3bcab8c1702cce6930358709622c9b368d53b63f32c01beecacf06cda57cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e94bc{
    "0x1802e94bc",
    "FUN_1802e94bc",
    R"F1802e94bcS(undefined FUN_1802e94bc())F1802e94bcS",
    R"B1802e94bc(// 0x1802e94bc  FUN_1802e94bc
// size=46 thunk=false
// signature: undefined FUN_1802e94bc()
// status: ok


void FUN_1802e94bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x498);
  }
  return;
}


)B1802e94bc",
    "c1d3bcab8c1702cce6930358709622c9b368d53b63f32c01beecacf06cda57cd",
    R"F1802e94bcC()F1802e94bcC",
    R"F1802e94bcD()F1802e94bcD",
    R"F1802e94bcT()F1802e94bcT",
    R"F1802e94bcF(10: if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0) {
14: return;)F1802e94bcF",
    R"F1802e94bcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e94bcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e94bc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e94bc", "FUN_1802e94bc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x498);
    // body sha256: c1d3bcab8c1702cce6930358709622c9b368d53b63f32c01beecacf06cda57cd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e94bc(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x20000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xdfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x498);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e94bc;
}

// 0x1802e94ea FUN_1802e94ea
// source: re/dump/decompile/0x1802e94ea_FUN_1802e94ea.c
// size: 46 bytes; thunk: false
// body sha256: 2b169aed3f7d2221c0c2033455b0e8a175443c5c72b03ce866cfddf359f81873
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e94ea{
    "0x1802e94ea",
    "FUN_1802e94ea",
    R"F1802e94eaS(undefined FUN_1802e94ea())F1802e94eaS",
    R"B1802e94ea(// 0x1802e94ea  FUN_1802e94ea
// size=46 thunk=false
// signature: undefined FUN_1802e94ea()
// status: ok


void FUN_1802e94ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xbfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b8);
  }
  return;
}


)B1802e94ea",
    "2b169aed3f7d2221c0c2033455b0e8a175443c5c72b03ce866cfddf359f81873",
    R"F1802e94eaC()F1802e94eaC",
    R"F1802e94eaD()F1802e94eaD",
    R"F1802e94eaT()F1802e94eaT",
    R"F1802e94eaF(10: if ((*(uint *)(param_2 + 0x44) & 0x40000000) != 0) {
14: return;)F1802e94eaF",
    R"F1802e94eaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e94eaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e94ea() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e94ea", "FUN_1802e94ea");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1b8);
    // body sha256: 2b169aed3f7d2221c0c2033455b0e8a175443c5c72b03ce866cfddf359f81873
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e94ea(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x40000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x40000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xbfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e94ea;
}

// 0x1802e9518 FUN_1802e9518
// source: re/dump/decompile/0x1802e9518_FUN_1802e9518.c
// size: 46 bytes; thunk: false
// body sha256: fc6c405fa3215c1e8280c8c6d7eebfa37a951e22888c3f802710d74a5ffbc05d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9518{
    "0x1802e9518",
    "FUN_1802e9518",
    R"F1802e9518S(undefined FUN_1802e9518())F1802e9518S",
    R"B1802e9518(// 0x1802e9518  FUN_1802e9518
// size=46 thunk=false
// signature: undefined FUN_1802e9518()
// status: ok


void FUN_1802e9518(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b8);
  }
  return;
}


)B1802e9518",
    "fc6c405fa3215c1e8280c8c6d7eebfa37a951e22888c3f802710d74a5ffbc05d",
    R"F1802e9518C()F1802e9518C",
    R"F1802e9518D()F1802e9518D",
    R"F1802e9518T()F1802e9518T",
    R"F1802e9518F(10: if ((*(uint *)(param_2 + 0x44) & 0x80000000) != 0) {
14: return;)F1802e9518F",
    R"F1802e9518U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9518U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9518() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9518", "FUN_1802e9518");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1b8);
    // body sha256: fc6c405fa3215c1e8280c8c6d7eebfa37a951e22888c3f802710d74a5ffbc05d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9518(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0x7fffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9518;
}

// 0x1802e9546 FUN_1802e9546
// source: re/dump/decompile/0x1802e9546_FUN_1802e9546.c
// size: 41 bytes; thunk: false
// body sha256: 16a7f02f26e8310e29d27845dbe27e32a0bb960ac899fb61adc69e3a04196211
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9546{
    "0x1802e9546",
    "FUN_1802e9546",
    R"F1802e9546S(undefined FUN_1802e9546())F1802e9546S",
    R"B1802e9546(// 0x1802e9546  FUN_1802e9546
// size=41 thunk=false
// signature: undefined FUN_1802e9546()
// status: ok


void FUN_1802e9546(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4b8);
  }
  return;
}


)B1802e9546",
    "16a7f02f26e8310e29d27845dbe27e32a0bb960ac899fb61adc69e3a04196211",
    R"F1802e9546C()F1802e9546C",
    R"F1802e9546D()F1802e9546D",
    R"F1802e9546T()F1802e9546T",
    R"F1802e9546F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802e9546F",
    R"F1802e9546U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9546U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9546() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9546", "FUN_1802e9546");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x4b8);
    // body sha256: 16a7f02f26e8310e29d27845dbe27e32a0bb960ac899fb61adc69e3a04196211
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9546(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4b8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9546;
}

// 0x1802e956f FUN_1802e956f
// source: re/dump/decompile/0x1802e956f_FUN_1802e956f.c
// size: 41 bytes; thunk: false
// body sha256: ee71744255f00300846cff163a8550b5cc8e93f04f3f0d704990082c7760bbf0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e956f{
    "0x1802e956f",
    "FUN_1802e956f",
    R"F1802e956fS(undefined FUN_1802e956f())F1802e956fS",
    R"B1802e956f(// 0x1802e956f  FUN_1802e956f
// size=41 thunk=false
// signature: undefined FUN_1802e956f()
// status: ok


void FUN_1802e956f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d8);
  }
  return;
}


)B1802e956f",
    "ee71744255f00300846cff163a8550b5cc8e93f04f3f0d704990082c7760bbf0",
    R"F1802e956fC()F1802e956fC",
    R"F1802e956fD()F1802e956fD",
    R"F1802e956fT()F1802e956fT",
    R"F1802e956fF(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802e956fF",
    R"F1802e956fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e956fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e956f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e956f", "FUN_1802e956f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1d8);
    // body sha256: ee71744255f00300846cff163a8550b5cc8e93f04f3f0d704990082c7760bbf0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e956f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e956f;
}

// 0x1802e9598 FUN_1802e9598
// source: re/dump/decompile/0x1802e9598_FUN_1802e9598.c
// size: 41 bytes; thunk: false
// body sha256: 879a543603edb4c9fc7a42a77b7a6317cf343d6a9a85c96c6620025dc6df31d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9598{
    "0x1802e9598",
    "FUN_1802e9598",
    R"F1802e9598S(undefined FUN_1802e9598())F1802e9598S",
    R"B1802e9598(// 0x1802e9598  FUN_1802e9598
// size=41 thunk=false
// signature: undefined FUN_1802e9598()
// status: ok


void FUN_1802e9598(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d8);
  }
  return;
}


)B1802e9598",
    "879a543603edb4c9fc7a42a77b7a6317cf343d6a9a85c96c6620025dc6df31d5",
    R"F1802e9598C()F1802e9598C",
    R"F1802e9598D()F1802e9598D",
    R"F1802e9598T()F1802e9598T",
    R"F1802e9598F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802e9598F",
    R"F1802e9598U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9598U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9598() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9598", "FUN_1802e9598");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1d8);
    // body sha256: 879a543603edb4c9fc7a42a77b7a6317cf343d6a9a85c96c6620025dc6df31d5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9598(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1d8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9598;
}

// 0x1802e95c1 FUN_1802e95c1
// source: re/dump/decompile/0x1802e95c1_FUN_1802e95c1.c
// size: 41 bytes; thunk: false
// body sha256: d174f526a44a0165c5c9eb8ec4116439a8ec1e2f6c3793867d5856b386404143
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e95c1{
    "0x1802e95c1",
    "FUN_1802e95c1",
    R"F1802e95c1S(undefined FUN_1802e95c1())F1802e95c1S",
    R"B1802e95c1(// 0x1802e95c1  FUN_1802e95c1
// size=41 thunk=false
// signature: undefined FUN_1802e95c1()
// status: ok


void FUN_1802e95c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4d8);
  }
  return;
}


)B1802e95c1",
    "d174f526a44a0165c5c9eb8ec4116439a8ec1e2f6c3793867d5856b386404143",
    R"F1802e95c1C()F1802e95c1C",
    R"F1802e95c1D()F1802e95c1D",
    R"F1802e95c1T()F1802e95c1T",
    R"F1802e95c1F(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802e95c1F",
    R"F1802e95c1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e95c1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e95c1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e95c1", "FUN_1802e95c1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x4d8);
    // body sha256: d174f526a44a0165c5c9eb8ec4116439a8ec1e2f6c3793867d5856b386404143
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e95c1(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4d8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e95c1;
}

// 0x1802e95ea FUN_1802e95ea
// source: re/dump/decompile/0x1802e95ea_FUN_1802e95ea.c
// size: 41 bytes; thunk: false
// body sha256: 4a898aa25fbbb3ff0f5331ec1ad9b082b4b4c4173a94512750066b04c5645e5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e95ea{
    "0x1802e95ea",
    "FUN_1802e95ea",
    R"F1802e95eaS(undefined FUN_1802e95ea())F1802e95eaS",
    R"B1802e95ea(// 0x1802e95ea  FUN_1802e95ea
// size=41 thunk=false
// signature: undefined FUN_1802e95ea()
// status: ok


void FUN_1802e95ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f8);
  }
  return;
}


)B1802e95ea",
    "4a898aa25fbbb3ff0f5331ec1ad9b082b4b4c4173a94512750066b04c5645e5c",
    R"F1802e95eaC()F1802e95eaC",
    R"F1802e95eaD()F1802e95eaD",
    R"F1802e95eaT()F1802e95eaT",
    R"F1802e95eaF(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802e95eaF",
    R"F1802e95eaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e95eaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e95ea() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e95ea", "FUN_1802e95ea");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1f8);
    // body sha256: 4a898aa25fbbb3ff0f5331ec1ad9b082b4b4c4173a94512750066b04c5645e5c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e95ea(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e95ea;
}

// 0x1802e9613 FUN_1802e9613
// source: re/dump/decompile/0x1802e9613_FUN_1802e9613.c
// size: 41 bytes; thunk: false
// body sha256: 56a1b96dac57c30faa0783064f12f5a2e214f7a66036d4f71f92527a5cba8a7b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9613{
    "0x1802e9613",
    "FUN_1802e9613",
    R"F1802e9613S(undefined FUN_1802e9613())F1802e9613S",
    R"B1802e9613(// 0x1802e9613  FUN_1802e9613
// size=41 thunk=false
// signature: undefined FUN_1802e9613()
// status: ok


void FUN_1802e9613(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f8);
  }
  return;
}


)B1802e9613",
    "56a1b96dac57c30faa0783064f12f5a2e214f7a66036d4f71f92527a5cba8a7b",
    R"F1802e9613C()F1802e9613C",
    R"F1802e9613D()F1802e9613D",
    R"F1802e9613T()F1802e9613T",
    R"F1802e9613F(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802e9613F",
    R"F1802e9613U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9613U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9613() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9613", "FUN_1802e9613");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1f8);
    // body sha256: 56a1b96dac57c30faa0783064f12f5a2e214f7a66036d4f71f92527a5cba8a7b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9613(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1f8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9613;
}

// 0x1802e963c FUN_1802e963c
// source: re/dump/decompile/0x1802e963c_FUN_1802e963c.c
// size: 41 bytes; thunk: false
// body sha256: 45687c7e96092d65220422ff6c8d2bab27c68d2256808590265e03e4abbdc922
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e963c{
    "0x1802e963c",
    "FUN_1802e963c",
    R"F1802e963cS(undefined FUN_1802e963c())F1802e963cS",
    R"B1802e963c(// 0x1802e963c  FUN_1802e963c
// size=41 thunk=false
// signature: undefined FUN_1802e963c()
// status: ok


void FUN_1802e963c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4f8);
  }
  return;
}


)B1802e963c",
    "45687c7e96092d65220422ff6c8d2bab27c68d2256808590265e03e4abbdc922",
    R"F1802e963cC()F1802e963cC",
    R"F1802e963cD()F1802e963cD",
    R"F1802e963cT()F1802e963cT",
    R"F1802e963cF(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802e963cF",
    R"F1802e963cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e963cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e963c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e963c", "FUN_1802e963c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x4f8);
    // body sha256: 45687c7e96092d65220422ff6c8d2bab27c68d2256808590265e03e4abbdc922
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e963c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4f8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e963c;
}

// 0x1802e9665 FUN_1802e9665
// source: re/dump/decompile/0x1802e9665_FUN_1802e9665.c
// size: 46 bytes; thunk: false
// body sha256: 927ac0437b687451ce660467be4d707a3c34ad6de8a9f7428588c97d85ef7b63
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9665{
    "0x1802e9665",
    "FUN_1802e9665",
    R"F1802e9665S(undefined FUN_1802e9665())F1802e9665S",
    R"B1802e9665(// 0x1802e9665  FUN_1802e9665
// size=46 thunk=false
// signature: undefined FUN_1802e9665()
// status: ok


void FUN_1802e9665(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x218);
  }
  return;
}


)B1802e9665",
    "927ac0437b687451ce660467be4d707a3c34ad6de8a9f7428588c97d85ef7b63",
    R"F1802e9665C()F1802e9665C",
    R"F1802e9665D()F1802e9665D",
    R"F1802e9665T()F1802e9665T",
    R"F1802e9665F(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802e9665F",
    R"F1802e9665U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9665U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9665() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9665", "FUN_1802e9665");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x218);
    // body sha256: 927ac0437b687451ce660467be4d707a3c34ad6de8a9f7428588c97d85ef7b63
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9665(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x218);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9665;
}

// 0x1802e9693 FUN_1802e9693
// source: re/dump/decompile/0x1802e9693_FUN_1802e9693.c
// size: 46 bytes; thunk: false
// body sha256: a7a9de570d1bc58c98d0d4a5e30bd72f5d59102b39c6d1b3120910aa66d76f4a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9693{
    "0x1802e9693",
    "FUN_1802e9693",
    R"F1802e9693S(undefined FUN_1802e9693())F1802e9693S",
    R"B1802e9693(// 0x1802e9693  FUN_1802e9693
// size=46 thunk=false
// signature: undefined FUN_1802e9693()
// status: ok


void FUN_1802e9693(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x218);
  }
  return;
}


)B1802e9693",
    "a7a9de570d1bc58c98d0d4a5e30bd72f5d59102b39c6d1b3120910aa66d76f4a",
    R"F1802e9693C()F1802e9693C",
    R"F1802e9693D()F1802e9693D",
    R"F1802e9693T()F1802e9693T",
    R"F1802e9693F(10: if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
14: return;)F1802e9693F",
    R"F1802e9693U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9693U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9693() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9693", "FUN_1802e9693");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x218);
    // body sha256: a7a9de570d1bc58c98d0d4a5e30bd72f5d59102b39c6d1b3120910aa66d76f4a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9693(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x218);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9693;
}

// 0x1802e96c1 FUN_1802e96c1
// source: re/dump/decompile/0x1802e96c1_FUN_1802e96c1.c
// size: 46 bytes; thunk: false
// body sha256: dae8dc074a74275faece10d56202b6de613608097e07e23a7f1f99cd8d87d0d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e96c1{
    "0x1802e96c1",
    "FUN_1802e96c1",
    R"F1802e96c1S(undefined FUN_1802e96c1())F1802e96c1S",
    R"B1802e96c1(// 0x1802e96c1  FUN_1802e96c1
// size=46 thunk=false
// signature: undefined FUN_1802e96c1()
// status: ok


void FUN_1802e96c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x518);
  }
  return;
}


)B1802e96c1",
    "dae8dc074a74275faece10d56202b6de613608097e07e23a7f1f99cd8d87d0d0",
    R"F1802e96c1C()F1802e96c1C",
    R"F1802e96c1D()F1802e96c1D",
    R"F1802e96c1T()F1802e96c1T",
    R"F1802e96c1F(10: if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
14: return;)F1802e96c1F",
    R"F1802e96c1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e96c1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e96c1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e96c1", "FUN_1802e96c1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x518);
    // body sha256: dae8dc074a74275faece10d56202b6de613608097e07e23a7f1f99cd8d87d0d0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e96c1(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x518);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e96c1;
}

// 0x1802e96ef FUN_1802e96ef
// source: re/dump/decompile/0x1802e96ef_FUN_1802e96ef.c
// size: 46 bytes; thunk: false
// body sha256: c971d1ea3f2c323b2a8e041009e54f8b91d8466fe1bcdf30bff554d7b45b65ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e96ef{
    "0x1802e96ef",
    "FUN_1802e96ef",
    R"F1802e96efS(undefined FUN_1802e96ef())F1802e96efS",
    R"B1802e96ef(// 0x1802e96ef  FUN_1802e96ef
// size=46 thunk=false
// signature: undefined FUN_1802e96ef()
// status: ok


void FUN_1802e96ef(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x238);
  }
  return;
}


)B1802e96ef",
    "c971d1ea3f2c323b2a8e041009e54f8b91d8466fe1bcdf30bff554d7b45b65ac",
    R"F1802e96efC()F1802e96efC",
    R"F1802e96efD()F1802e96efD",
    R"F1802e96efT()F1802e96efT",
    R"F1802e96efF(10: if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
14: return;)F1802e96efF",
    R"F1802e96efU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e96efU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e96ef() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e96ef", "FUN_1802e96ef");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x238);
    // body sha256: c971d1ea3f2c323b2a8e041009e54f8b91d8466fe1bcdf30bff554d7b45b65ac
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e96ef(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x238);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e96ef;
}

// 0x1802e971d FUN_1802e971d
// source: re/dump/decompile/0x1802e971d_FUN_1802e971d.c
// size: 46 bytes; thunk: false
// body sha256: 30cb8491751042d7a196bf0bdfd8b6bd4bc9547cb6d15aa72a004abd2b7aab7c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e971d{
    "0x1802e971d",
    "FUN_1802e971d",
    R"F1802e971dS(undefined FUN_1802e971d())F1802e971dS",
    R"B1802e971d(// 0x1802e971d  FUN_1802e971d
// size=46 thunk=false
// signature: undefined FUN_1802e971d()
// status: ok


void FUN_1802e971d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x238);
  }
  return;
}


)B1802e971d",
    "30cb8491751042d7a196bf0bdfd8b6bd4bc9547cb6d15aa72a004abd2b7aab7c",
    R"F1802e971dC()F1802e971dC",
    R"F1802e971dD()F1802e971dD",
    R"F1802e971dT()F1802e971dT",
    R"F1802e971dF(10: if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
14: return;)F1802e971dF",
    R"F1802e971dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e971dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e971d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e971d", "FUN_1802e971d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x238);
    // body sha256: 30cb8491751042d7a196bf0bdfd8b6bd4bc9547cb6d15aa72a004abd2b7aab7c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e971d(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x238);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e971d;
}

// 0x1802e974b FUN_1802e974b
// source: re/dump/decompile/0x1802e974b_FUN_1802e974b.c
// size: 46 bytes; thunk: false
// body sha256: cc3093132201da3ba7a4898ba36e44d692473d4b42f1c0ec56b61d3eacd790e0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e974b{
    "0x1802e974b",
    "FUN_1802e974b",
    R"F1802e974bS(undefined FUN_1802e974b())F1802e974bS",
    R"B1802e974b(// 0x1802e974b  FUN_1802e974b
// size=46 thunk=false
// signature: undefined FUN_1802e974b()
// status: ok


void FUN_1802e974b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x538);
  }
  return;
}


)B1802e974b",
    "cc3093132201da3ba7a4898ba36e44d692473d4b42f1c0ec56b61d3eacd790e0",
    R"F1802e974bC()F1802e974bC",
    R"F1802e974bD()F1802e974bD",
    R"F1802e974bT()F1802e974bT",
    R"F1802e974bF(10: if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
14: return;)F1802e974bF",
    R"F1802e974bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e974bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e974b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e974b", "FUN_1802e974b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x538);
    // body sha256: cc3093132201da3ba7a4898ba36e44d692473d4b42f1c0ec56b61d3eacd790e0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e974b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x538);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e974b;
}

// 0x1802e9779 FUN_1802e9779
// source: re/dump/decompile/0x1802e9779_FUN_1802e9779.c
// size: 46 bytes; thunk: false
// body sha256: 235170d675212d4bd24b6c8a490c46106b51a42eadf33d7dbc757af46f037150
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9779{
    "0x1802e9779",
    "FUN_1802e9779",
    R"F1802e9779S(undefined FUN_1802e9779())F1802e9779S",
    R"B1802e9779(// 0x1802e9779  FUN_1802e9779
// size=46 thunk=false
// signature: undefined FUN_1802e9779()
// status: ok


void FUN_1802e9779(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 600);
  }
  return;
}


)B1802e9779",
    "235170d675212d4bd24b6c8a490c46106b51a42eadf33d7dbc757af46f037150",
    R"F1802e9779C()F1802e9779C",
    R"F1802e9779D()F1802e9779D",
    R"F1802e9779T()F1802e9779T",
    R"F1802e9779F(10: if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
14: return;)F1802e9779F",
    R"F1802e9779U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9779U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9779() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9779", "FUN_1802e9779");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 600);
    // body sha256: 235170d675212d4bd24b6c8a490c46106b51a42eadf33d7dbc757af46f037150
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9779(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 600);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9779;
}

// 0x1802e97a7 FUN_1802e97a7
// source: re/dump/decompile/0x1802e97a7_FUN_1802e97a7.c
// size: 46 bytes; thunk: false
// body sha256: 3183ac5dda88f2512501d6526c10d79c0b48ad5bb2ad851e02c932aa6d33f2b0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e97a7{
    "0x1802e97a7",
    "FUN_1802e97a7",
    R"F1802e97a7S(undefined FUN_1802e97a7())F1802e97a7S",
    R"B1802e97a7(// 0x1802e97a7  FUN_1802e97a7
// size=46 thunk=false
// signature: undefined FUN_1802e97a7()
// status: ok


void FUN_1802e97a7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 600);
  }
  return;
}


)B1802e97a7",
    "3183ac5dda88f2512501d6526c10d79c0b48ad5bb2ad851e02c932aa6d33f2b0",
    R"F1802e97a7C()F1802e97a7C",
    R"F1802e97a7D()F1802e97a7D",
    R"F1802e97a7T()F1802e97a7T",
    R"F1802e97a7F(10: if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
14: return;)F1802e97a7F",
    R"F1802e97a7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e97a7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e97a7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e97a7", "FUN_1802e97a7");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 600);
    // body sha256: 3183ac5dda88f2512501d6526c10d79c0b48ad5bb2ad851e02c932aa6d33f2b0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e97a7(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 600);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e97a7;
}

// 0x1802e97d5 FUN_1802e97d5
// source: re/dump/decompile/0x1802e97d5_FUN_1802e97d5.c
// size: 46 bytes; thunk: false
// body sha256: e7fc8c8693ef698e8e8388ad065c4a54ba6076a199512d639a8801ccd8ab4903
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e97d5{
    "0x1802e97d5",
    "FUN_1802e97d5",
    R"F1802e97d5S(undefined FUN_1802e97d5())F1802e97d5S",
    R"B1802e97d5(// 0x1802e97d5  FUN_1802e97d5
// size=46 thunk=false
// signature: undefined FUN_1802e97d5()
// status: ok


void FUN_1802e97d5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x558);
  }
  return;
}


)B1802e97d5",
    "e7fc8c8693ef698e8e8388ad065c4a54ba6076a199512d639a8801ccd8ab4903",
    R"F1802e97d5C()F1802e97d5C",
    R"F1802e97d5D()F1802e97d5D",
    R"F1802e97d5T()F1802e97d5T",
    R"F1802e97d5F(10: if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
14: return;)F1802e97d5F",
    R"F1802e97d5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e97d5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e97d5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e97d5", "FUN_1802e97d5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x558);
    // body sha256: e7fc8c8693ef698e8e8388ad065c4a54ba6076a199512d639a8801ccd8ab4903
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e97d5(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x558);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e97d5;
}

// 0x1802e9803 FUN_1802e9803
// source: re/dump/decompile/0x1802e9803_FUN_1802e9803.c
// size: 46 bytes; thunk: false
// body sha256: 5930a782e95ba86c81a75ab20b4e297e2edde7ee99465acd78e4fe0704f8e58c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9803{
    "0x1802e9803",
    "FUN_1802e9803",
    R"F1802e9803S(undefined FUN_1802e9803())F1802e9803S",
    R"B1802e9803(// 0x1802e9803  FUN_1802e9803
// size=46 thunk=false
// signature: undefined FUN_1802e9803()
// status: ok


void FUN_1802e9803(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x278);
  }
  return;
}


)B1802e9803",
    "5930a782e95ba86c81a75ab20b4e297e2edde7ee99465acd78e4fe0704f8e58c",
    R"F1802e9803C()F1802e9803C",
    R"F1802e9803D()F1802e9803D",
    R"F1802e9803T()F1802e9803T",
    R"F1802e9803F(10: if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
14: return;)F1802e9803F",
    R"F1802e9803U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9803U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9803() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9803", "FUN_1802e9803");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x278);
    // body sha256: 5930a782e95ba86c81a75ab20b4e297e2edde7ee99465acd78e4fe0704f8e58c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9803(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x278);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9803;
}

// 0x1802e9831 FUN_1802e9831
// source: re/dump/decompile/0x1802e9831_FUN_1802e9831.c
// size: 46 bytes; thunk: false
// body sha256: 6e050b63c38e7685087fcabc61e2a81d6b534004f2740eb90fe155109bf2ca39
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9831{
    "0x1802e9831",
    "FUN_1802e9831",
    R"F1802e9831S(undefined FUN_1802e9831())F1802e9831S",
    R"B1802e9831(// 0x1802e9831  FUN_1802e9831
// size=46 thunk=false
// signature: undefined FUN_1802e9831()
// status: ok


void FUN_1802e9831(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x278);
  }
  return;
}


)B1802e9831",
    "6e050b63c38e7685087fcabc61e2a81d6b534004f2740eb90fe155109bf2ca39",
    R"F1802e9831C()F1802e9831C",
    R"F1802e9831D()F1802e9831D",
    R"F1802e9831T()F1802e9831T",
    R"F1802e9831F(10: if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
14: return;)F1802e9831F",
    R"F1802e9831U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9831U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9831() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9831", "FUN_1802e9831");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x278);
    // body sha256: 6e050b63c38e7685087fcabc61e2a81d6b534004f2740eb90fe155109bf2ca39
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9831(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x278);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9831;
}

// 0x1802e985f FUN_1802e985f
// source: re/dump/decompile/0x1802e985f_FUN_1802e985f.c
// size: 46 bytes; thunk: false
// body sha256: 9f5a60333bb8cad59f6ce348e2778b05a3bbf265546bc43044576021acaaaf38
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e985f{
    "0x1802e985f",
    "FUN_1802e985f",
    R"F1802e985fS(undefined FUN_1802e985f())F1802e985fS",
    R"B1802e985f(// 0x1802e985f  FUN_1802e985f
// size=46 thunk=false
// signature: undefined FUN_1802e985f()
// status: ok


void FUN_1802e985f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x578);
  }
  return;
}


)B1802e985f",
    "9f5a60333bb8cad59f6ce348e2778b05a3bbf265546bc43044576021acaaaf38",
    R"F1802e985fC()F1802e985fC",
    R"F1802e985fD()F1802e985fD",
    R"F1802e985fT()F1802e985fT",
    R"F1802e985fF(10: if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
14: return;)F1802e985fF",
    R"F1802e985fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e985fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e985f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e985f", "FUN_1802e985f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x578);
    // body sha256: 9f5a60333bb8cad59f6ce348e2778b05a3bbf265546bc43044576021acaaaf38
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e985f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x578);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e985f;
}

// 0x1802e988d FUN_1802e988d
// source: re/dump/decompile/0x1802e988d_FUN_1802e988d.c
// size: 46 bytes; thunk: false
// body sha256: 9ab038c0ae769cf9e4113d3c6c052af7f944520a0d65800f6605c6a472178019
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e988d{
    "0x1802e988d",
    "FUN_1802e988d",
    R"F1802e988dS(undefined FUN_1802e988d())F1802e988dS",
    R"B1802e988d(// 0x1802e988d  FUN_1802e988d
// size=46 thunk=false
// signature: undefined FUN_1802e988d()
// status: ok


void FUN_1802e988d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x298);
  }
  return;
}


)B1802e988d",
    "9ab038c0ae769cf9e4113d3c6c052af7f944520a0d65800f6605c6a472178019",
    R"F1802e988dC()F1802e988dC",
    R"F1802e988dD()F1802e988dD",
    R"F1802e988dT()F1802e988dT",
    R"F1802e988dF(10: if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
14: return;)F1802e988dF",
    R"F1802e988dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e988dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e988d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e988d", "FUN_1802e988d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x298);
    // body sha256: 9ab038c0ae769cf9e4113d3c6c052af7f944520a0d65800f6605c6a472178019
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e988d(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x298);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e988d;
}

// 0x1802e98bb FUN_1802e98bb
// source: re/dump/decompile/0x1802e98bb_FUN_1802e98bb.c
// size: 46 bytes; thunk: false
// body sha256: b6228bfb19de14188f073682969ce62a505ed06056fa6f94acd5345f073f0f58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e98bb{
    "0x1802e98bb",
    "FUN_1802e98bb",
    R"F1802e98bbS(undefined FUN_1802e98bb())F1802e98bbS",
    R"B1802e98bb(// 0x1802e98bb  FUN_1802e98bb
// size=46 thunk=false
// signature: undefined FUN_1802e98bb()
// status: ok


void FUN_1802e98bb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x298);
  }
  return;
}


)B1802e98bb",
    "b6228bfb19de14188f073682969ce62a505ed06056fa6f94acd5345f073f0f58",
    R"F1802e98bbC()F1802e98bbC",
    R"F1802e98bbD()F1802e98bbD",
    R"F1802e98bbT()F1802e98bbT",
    R"F1802e98bbF(10: if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
14: return;)F1802e98bbF",
    R"F1802e98bbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e98bbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e98bb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e98bb", "FUN_1802e98bb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x298);
    // body sha256: b6228bfb19de14188f073682969ce62a505ed06056fa6f94acd5345f073f0f58
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e98bb(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x298);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e98bb;
}

// 0x1802e98e9 FUN_1802e98e9
// source: re/dump/decompile/0x1802e98e9_FUN_1802e98e9.c
// size: 46 bytes; thunk: false
// body sha256: 346ed840f08269f4cfa22ad58ec4900069f1de0691b9c1954a2459272e5c2c54
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e98e9{
    "0x1802e98e9",
    "FUN_1802e98e9",
    R"F1802e98e9S(undefined FUN_1802e98e9())F1802e98e9S",
    R"B1802e98e9(// 0x1802e98e9  FUN_1802e98e9
// size=46 thunk=false
// signature: undefined FUN_1802e98e9()
// status: ok


void FUN_1802e98e9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x598);
  }
  return;
}


)B1802e98e9",
    "346ed840f08269f4cfa22ad58ec4900069f1de0691b9c1954a2459272e5c2c54",
    R"F1802e98e9C()F1802e98e9C",
    R"F1802e98e9D()F1802e98e9D",
    R"F1802e98e9T()F1802e98e9T",
    R"F1802e98e9F(10: if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
14: return;)F1802e98e9F",
    R"F1802e98e9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e98e9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e98e9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e98e9", "FUN_1802e98e9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x598);
    // body sha256: 346ed840f08269f4cfa22ad58ec4900069f1de0691b9c1954a2459272e5c2c54
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e98e9(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x200000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x598);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e98e9;
}

// 0x1802e9917 FUN_1802e9917
// source: re/dump/decompile/0x1802e9917_FUN_1802e9917.c
// size: 46 bytes; thunk: false
// body sha256: 31650853e7e8c27dcf9bd97c35eb2ef5ff7db9534bd078fe512a42d0512538c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9917{
    "0x1802e9917",
    "FUN_1802e9917",
    R"F1802e9917S(undefined FUN_1802e9917())F1802e9917S",
    R"B1802e9917(// 0x1802e9917  FUN_1802e9917
// size=46 thunk=false
// signature: undefined FUN_1802e9917()
// status: ok


void FUN_1802e9917(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b8);
  }
  return;
}


)B1802e9917",
    "31650853e7e8c27dcf9bd97c35eb2ef5ff7db9534bd078fe512a42d0512538c6",
    R"F1802e9917C()F1802e9917C",
    R"F1802e9917D()F1802e9917D",
    R"F1802e9917T()F1802e9917T",
    R"F1802e9917F(10: if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
14: return;)F1802e9917F",
    R"F1802e9917U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9917U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9917() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9917", "FUN_1802e9917");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2b8);
    // body sha256: 31650853e7e8c27dcf9bd97c35eb2ef5ff7db9534bd078fe512a42d0512538c6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9917(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x400000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9917;
}

// 0x1802e9945 FUN_1802e9945
// source: re/dump/decompile/0x1802e9945_FUN_1802e9945.c
// size: 46 bytes; thunk: false
// body sha256: 549247658e0dc6d7584d2a9595dca56ef3783983118ee285aac41f1b969273dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9945{
    "0x1802e9945",
    "FUN_1802e9945",
    R"F1802e9945S(undefined FUN_1802e9945())F1802e9945S",
    R"B1802e9945(// 0x1802e9945  FUN_1802e9945
// size=46 thunk=false
// signature: undefined FUN_1802e9945()
// status: ok


void FUN_1802e9945(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b8);
  }
  return;
}


)B1802e9945",
    "549247658e0dc6d7584d2a9595dca56ef3783983118ee285aac41f1b969273dd",
    R"F1802e9945C()F1802e9945C",
    R"F1802e9945D()F1802e9945D",
    R"F1802e9945T()F1802e9945T",
    R"F1802e9945F(10: if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
14: return;)F1802e9945F",
    R"F1802e9945U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9945U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9945() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9945", "FUN_1802e9945");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2b8);
    // body sha256: 549247658e0dc6d7584d2a9595dca56ef3783983118ee285aac41f1b969273dd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9945(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9945;
}

// 0x1802e9973 FUN_1802e9973
// source: re/dump/decompile/0x1802e9973_FUN_1802e9973.c
// size: 46 bytes; thunk: false
// body sha256: 538ce1e5a56c355451d48464cb92a39c20feac703f2b19d1be4d3d661649ae3f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9973{
    "0x1802e9973",
    "FUN_1802e9973",
    R"F1802e9973S(undefined FUN_1802e9973())F1802e9973S",
    R"B1802e9973(// 0x1802e9973  FUN_1802e9973
// size=46 thunk=false
// signature: undefined FUN_1802e9973()
// status: ok


void FUN_1802e9973(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5b8);
  }
  return;
}


)B1802e9973",
    "538ce1e5a56c355451d48464cb92a39c20feac703f2b19d1be4d3d661649ae3f",
    R"F1802e9973C()F1802e9973C",
    R"F1802e9973D()F1802e9973D",
    R"F1802e9973T()F1802e9973T",
    R"F1802e9973F(10: if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
14: return;)F1802e9973F",
    R"F1802e9973U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9973U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9973() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9973", "FUN_1802e9973");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x5b8);
    // body sha256: 538ce1e5a56c355451d48464cb92a39c20feac703f2b19d1be4d3d661649ae3f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9973(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5b8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9973;
}

// 0x1802e99a1 FUN_1802e99a1
// source: re/dump/decompile/0x1802e99a1_FUN_1802e99a1.c
// size: 46 bytes; thunk: false
// body sha256: 76ff9048e202346cd9a5d38d458f4042eb3c4fd40624f817ddb3b63721185bd4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e99a1{
    "0x1802e99a1",
    "FUN_1802e99a1",
    R"F1802e99a1S(undefined FUN_1802e99a1())F1802e99a1S",
    R"B1802e99a1(// 0x1802e99a1  FUN_1802e99a1
// size=46 thunk=false
// signature: undefined FUN_1802e99a1()
// status: ok


void FUN_1802e99a1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d8);
  }
  return;
}


)B1802e99a1",
    "76ff9048e202346cd9a5d38d458f4042eb3c4fd40624f817ddb3b63721185bd4",
    R"F1802e99a1C()F1802e99a1C",
    R"F1802e99a1D()F1802e99a1D",
    R"F1802e99a1T()F1802e99a1T",
    R"F1802e99a1F(10: if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
14: return;)F1802e99a1F",
    R"F1802e99a1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e99a1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e99a1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e99a1", "FUN_1802e99a1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2d8);
    // body sha256: 76ff9048e202346cd9a5d38d458f4042eb3c4fd40624f817ddb3b63721185bd4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e99a1(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x2000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e99a1;
}

// 0x1802e99cf FUN_1802e99cf
// source: re/dump/decompile/0x1802e99cf_FUN_1802e99cf.c
// size: 46 bytes; thunk: false
// body sha256: b04ec2e020225cceff851530cbc2e374814043883cec571e834bf53a179055a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e99cf{
    "0x1802e99cf",
    "FUN_1802e99cf",
    R"F1802e99cfS(undefined FUN_1802e99cf())F1802e99cfS",
    R"B1802e99cf(// 0x1802e99cf  FUN_1802e99cf
// size=46 thunk=false
// signature: undefined FUN_1802e99cf()
// status: ok


void FUN_1802e99cf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d8);
  }
  return;
}


)B1802e99cf",
    "b04ec2e020225cceff851530cbc2e374814043883cec571e834bf53a179055a5",
    R"F1802e99cfC()F1802e99cfC",
    R"F1802e99cfD()F1802e99cfD",
    R"F1802e99cfT()F1802e99cfT",
    R"F1802e99cfF(10: if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
14: return;)F1802e99cfF",
    R"F1802e99cfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e99cfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e99cf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e99cf", "FUN_1802e99cf");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2d8);
    // body sha256: b04ec2e020225cceff851530cbc2e374814043883cec571e834bf53a179055a5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e99cf(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x4000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e99cf;
}

// 0x1802e99fd FUN_1802e99fd
// source: re/dump/decompile/0x1802e99fd_FUN_1802e99fd.c
// size: 46 bytes; thunk: false
// body sha256: 0fee2e0bd9c97894cf40573f1396daf5d773b6980010669512dd2f857f0ec50f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e99fd{
    "0x1802e99fd",
    "FUN_1802e99fd",
    R"F1802e99fdS(undefined FUN_1802e99fd())F1802e99fdS",
    R"B1802e99fd(// 0x1802e99fd  FUN_1802e99fd
// size=46 thunk=false
// signature: undefined FUN_1802e99fd()
// status: ok


void FUN_1802e99fd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5d8);
  }
  return;
}


)B1802e99fd",
    "0fee2e0bd9c97894cf40573f1396daf5d773b6980010669512dd2f857f0ec50f",
    R"F1802e99fdC()F1802e99fdC",
    R"F1802e99fdD()F1802e99fdD",
    R"F1802e99fdT()F1802e99fdT",
    R"F1802e99fdF(10: if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0) {
14: return;)F1802e99fdF",
    R"F1802e99fdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e99fdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e99fd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e99fd", "FUN_1802e99fd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x5d8);
    // body sha256: 0fee2e0bd9c97894cf40573f1396daf5d773b6980010669512dd2f857f0ec50f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e99fd(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x8000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xf7ffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5d8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e99fd;
}

// 0x1802e9a2b FUN_1802e9a2b
// source: re/dump/decompile/0x1802e9a2b_FUN_1802e9a2b.c
// size: 46 bytes; thunk: false
// body sha256: 58bb2a1a391aeb97c39e88b81ea96341440159ac437a8b6099d79811c11144b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9a2b{
    "0x1802e9a2b",
    "FUN_1802e9a2b",
    R"F1802e9a2bS(undefined FUN_1802e9a2b())F1802e9a2bS",
    R"B1802e9a2b(// 0x1802e9a2b  FUN_1802e9a2b
// size=46 thunk=false
// signature: undefined FUN_1802e9a2b()
// status: ok


void FUN_1802e9a2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xefffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f8);
  }
  return;
}


)B1802e9a2b",
    "58bb2a1a391aeb97c39e88b81ea96341440159ac437a8b6099d79811c11144b6",
    R"F1802e9a2bC()F1802e9a2bC",
    R"F1802e9a2bD()F1802e9a2bD",
    R"F1802e9a2bT()F1802e9a2bT",
    R"F1802e9a2bF(10: if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0) {
14: return;)F1802e9a2bF",
    R"F1802e9a2bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9a2bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9a2b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9a2b", "FUN_1802e9a2b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2f8);
    // body sha256: 58bb2a1a391aeb97c39e88b81ea96341440159ac437a8b6099d79811c11144b6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9a2b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xefffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9a2b;
}

// 0x1802e9a59 FUN_1802e9a59
// source: re/dump/decompile/0x1802e9a59_FUN_1802e9a59.c
// size: 46 bytes; thunk: false
// body sha256: b020281c76d4d92122c898e241aed308a7f40b680704e6157ce862ab9e6a961f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9a59{
    "0x1802e9a59",
    "FUN_1802e9a59",
    R"F1802e9a59S(undefined FUN_1802e9a59())F1802e9a59S",
    R"B1802e9a59(// 0x1802e9a59  FUN_1802e9a59
// size=46 thunk=false
// signature: undefined FUN_1802e9a59()
// status: ok


void FUN_1802e9a59(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f8);
  }
  return;
}


)B1802e9a59",
    "b020281c76d4d92122c898e241aed308a7f40b680704e6157ce862ab9e6a961f",
    R"F1802e9a59C()F1802e9a59C",
    R"F1802e9a59D()F1802e9a59D",
    R"F1802e9a59T()F1802e9a59T",
    R"F1802e9a59F(10: if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
14: return;)F1802e9a59F",
    R"F1802e9a59U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9a59U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9a59() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9a59", "FUN_1802e9a59");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2f8);
    // body sha256: b020281c76d4d92122c898e241aed308a7f40b680704e6157ce862ab9e6a961f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9a59(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9a59;
}

// 0x1802e9a87 FUN_1802e9a87
// source: re/dump/decompile/0x1802e9a87_FUN_1802e9a87.c
// size: 46 bytes; thunk: false
// body sha256: 0259fa323aefe5d176dd814b141727b54cc52803cd458e2a77d4f023edca383a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9a87{
    "0x1802e9a87",
    "FUN_1802e9a87",
    R"F1802e9a87S(undefined FUN_1802e9a87())F1802e9a87S",
    R"B1802e9a87(// 0x1802e9a87  FUN_1802e9a87
// size=46 thunk=false
// signature: undefined FUN_1802e9a87()
// status: ok


void FUN_1802e9a87(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xbfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5f8);
  }
  return;
}


)B1802e9a87",
    "0259fa323aefe5d176dd814b141727b54cc52803cd458e2a77d4f023edca383a",
    R"F1802e9a87C()F1802e9a87C",
    R"F1802e9a87D()F1802e9a87D",
    R"F1802e9a87T()F1802e9a87T",
    R"F1802e9a87F(10: if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0) {
14: return;)F1802e9a87F",
    R"F1802e9a87U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9a87U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9a87() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9a87", "FUN_1802e9a87");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x5f8);
    // body sha256: 0259fa323aefe5d176dd814b141727b54cc52803cd458e2a77d4f023edca383a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9a87(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xbfffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5f8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9a87;
}

// 0x1802e9ab5 FUN_1802e9ab5
// source: re/dump/decompile/0x1802e9ab5_FUN_1802e9ab5.c
// size: 46 bytes; thunk: false
// body sha256: 28aca643acec48629f821a731e690c5625637795257e6dc18daa3516b3f636ce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9ab5{
    "0x1802e9ab5",
    "FUN_1802e9ab5",
    R"F1802e9ab5S(undefined FUN_1802e9ab5())F1802e9ab5S",
    R"B1802e9ab5(// 0x1802e9ab5  FUN_1802e9ab5
// size=46 thunk=false
// signature: undefined FUN_1802e9ab5()
// status: ok


void FUN_1802e9ab5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x318);
  }
  return;
}


)B1802e9ab5",
    "28aca643acec48629f821a731e690c5625637795257e6dc18daa3516b3f636ce",
    R"F1802e9ab5C()F1802e9ab5C",
    R"F1802e9ab5D()F1802e9ab5D",
    R"F1802e9ab5T()F1802e9ab5T",
    R"F1802e9ab5F(10: if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0) {
14: return;)F1802e9ab5F",
    R"F1802e9ab5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9ab5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9ab5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9ab5", "FUN_1802e9ab5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x318);
    // body sha256: 28aca643acec48629f821a731e690c5625637795257e6dc18daa3516b3f636ce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9ab5(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0x7fffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x318);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9ab5;
}

// 0x1802e9ae3 FUN_1802e9ae3
// source: re/dump/decompile/0x1802e9ae3_FUN_1802e9ae3.c
// size: 41 bytes; thunk: false
// body sha256: 4559ced18694ae66414ae643ce0dd2344e76463b5600ee841356610ed232f062
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9ae3{
    "0x1802e9ae3",
    "FUN_1802e9ae3",
    R"F1802e9ae3S(undefined FUN_1802e9ae3())F1802e9ae3S",
    R"B1802e9ae3(// 0x1802e9ae3  FUN_1802e9ae3
// size=41 thunk=false
// signature: undefined FUN_1802e9ae3()
// status: ok


void FUN_1802e9ae3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x318);
  }
  return;
}


)B1802e9ae3",
    "4559ced18694ae66414ae643ce0dd2344e76463b5600ee841356610ed232f062",
    R"F1802e9ae3C()F1802e9ae3C",
    R"F1802e9ae3D()F1802e9ae3D",
    R"F1802e9ae3T()F1802e9ae3T",
    R"F1802e9ae3F(10: if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
14: return;)F1802e9ae3F",
    R"F1802e9ae3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9ae3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9ae3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9ae3", "FUN_1802e9ae3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x318);
    // body sha256: 4559ced18694ae66414ae643ce0dd2344e76463b5600ee841356610ed232f062
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9ae3(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x318);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9ae3;
}

// 0x1802e9b0c FUN_1802e9b0c
// source: re/dump/decompile/0x1802e9b0c_FUN_1802e9b0c.c
// size: 41 bytes; thunk: false
// body sha256: 90496a39c5b52d809b4422df5786945fe0d3b36ef7e7f3d11c468260b7f2d17e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9b0c{
    "0x1802e9b0c",
    "FUN_1802e9b0c",
    R"F1802e9b0cS(undefined FUN_1802e9b0c())F1802e9b0cS",
    R"B1802e9b0c(// 0x1802e9b0c  FUN_1802e9b0c
// size=41 thunk=false
// signature: undefined FUN_1802e9b0c()
// status: ok


void FUN_1802e9b0c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x618);
  }
  return;
}


)B1802e9b0c",
    "90496a39c5b52d809b4422df5786945fe0d3b36ef7e7f3d11c468260b7f2d17e",
    R"F1802e9b0cC()F1802e9b0cC",
    R"F1802e9b0cD()F1802e9b0cD",
    R"F1802e9b0cT()F1802e9b0cT",
    R"F1802e9b0cF(10: if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
14: return;)F1802e9b0cF",
    R"F1802e9b0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9b0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9b0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9b0c", "FUN_1802e9b0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x618);
    // body sha256: 90496a39c5b52d809b4422df5786945fe0d3b36ef7e7f3d11c468260b7f2d17e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9b0c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x618);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9b0c;
}

// 0x1802e9b35 FUN_1802e9b35
// source: re/dump/decompile/0x1802e9b35_FUN_1802e9b35.c
// size: 41 bytes; thunk: false
// body sha256: c19cf6e26fe0579e5d61c81cb61e2356fc9966098d9c7f5dfd685ab5f3883db6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9b35{
    "0x1802e9b35",
    "FUN_1802e9b35",
    R"F1802e9b35S(undefined FUN_1802e9b35())F1802e9b35S",
    R"B1802e9b35(// 0x1802e9b35  FUN_1802e9b35
// size=41 thunk=false
// signature: undefined FUN_1802e9b35()
// status: ok


void FUN_1802e9b35(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 4) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x338);
  }
  return;
}


)B1802e9b35",
    "c19cf6e26fe0579e5d61c81cb61e2356fc9966098d9c7f5dfd685ab5f3883db6",
    R"F1802e9b35C()F1802e9b35C",
    R"F1802e9b35D()F1802e9b35D",
    R"F1802e9b35T()F1802e9b35T",
    R"F1802e9b35F(10: if ((*(uint *)(param_2 + 0x48) & 4) != 0) {
14: return;)F1802e9b35F",
    R"F1802e9b35U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9b35U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9b35() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9b35", "FUN_1802e9b35");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x338);
    // body sha256: c19cf6e26fe0579e5d61c81cb61e2356fc9966098d9c7f5dfd685ab5f3883db6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9b35(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x338);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9b35;
}

// 0x1802e9b5e FUN_1802e9b5e
// source: re/dump/decompile/0x1802e9b5e_FUN_1802e9b5e.c
// size: 41 bytes; thunk: false
// body sha256: 65fbac2bccfc7b8dab120c68e6c6765c8d07b0703fab665ab1696404c896602e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9b5e{
    "0x1802e9b5e",
    "FUN_1802e9b5e",
    R"F1802e9b5eS(undefined FUN_1802e9b5e())F1802e9b5eS",
    R"B1802e9b5e(// 0x1802e9b5e  FUN_1802e9b5e
// size=41 thunk=false
// signature: undefined FUN_1802e9b5e()
// status: ok


void FUN_1802e9b5e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 8) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x338);
  }
  return;
}


)B1802e9b5e",
    "65fbac2bccfc7b8dab120c68e6c6765c8d07b0703fab665ab1696404c896602e",
    R"F1802e9b5eC()F1802e9b5eC",
    R"F1802e9b5eD()F1802e9b5eD",
    R"F1802e9b5eT()F1802e9b5eT",
    R"F1802e9b5eF(10: if ((*(uint *)(param_2 + 0x48) & 8) != 0) {
14: return;)F1802e9b5eF",
    R"F1802e9b5eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9b5eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9b5e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9b5e", "FUN_1802e9b5e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x338);
    // body sha256: 65fbac2bccfc7b8dab120c68e6c6765c8d07b0703fab665ab1696404c896602e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9b5e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x338);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9b5e;
}

// 0x1802e9b87 FUN_1802e9b87
// source: re/dump/decompile/0x1802e9b87_FUN_1802e9b87.c
// size: 41 bytes; thunk: false
// body sha256: 5716eb6550bcc286d7d432ea2ef2448200b75a8514a3ccd1b6c97a80b5d748cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9b87{
    "0x1802e9b87",
    "FUN_1802e9b87",
    R"F1802e9b87S(undefined FUN_1802e9b87())F1802e9b87S",
    R"B1802e9b87(// 0x1802e9b87  FUN_1802e9b87
// size=41 thunk=false
// signature: undefined FUN_1802e9b87()
// status: ok


void FUN_1802e9b87(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x10) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x638);
  }
  return;
}


)B1802e9b87",
    "5716eb6550bcc286d7d432ea2ef2448200b75a8514a3ccd1b6c97a80b5d748cf",
    R"F1802e9b87C()F1802e9b87C",
    R"F1802e9b87D()F1802e9b87D",
    R"F1802e9b87T()F1802e9b87T",
    R"F1802e9b87F(10: if ((*(uint *)(param_2 + 0x48) & 0x10) != 0) {
14: return;)F1802e9b87F",
    R"F1802e9b87U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9b87U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9b87() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9b87", "FUN_1802e9b87");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x638);
    // body sha256: 5716eb6550bcc286d7d432ea2ef2448200b75a8514a3ccd1b6c97a80b5d748cf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9b87(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x638);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9b87;
}

// 0x1802e9bb0 FUN_1802e9bb0
// source: re/dump/decompile/0x1802e9bb0_FUN_1802e9bb0.c
// size: 38 bytes; thunk: false
// body sha256: bb196b32b867de16ae4bce6d23995e2d7683c6ffb0b8f4f94f7f4efaf0f457b4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9bb0{
    "0x1802e9bb0",
    "FUN_1802e9bb0",
    R"F1802e9bb0S(undefined FUN_1802e9bb0())F1802e9bb0S",
    R"B1802e9bb0(// 0x1802e9bb0  FUN_1802e9bb0
// size=38 thunk=false
// signature: undefined FUN_1802e9bb0()
// status: ok


void FUN_1802e9bb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x20) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);
  }
  return;
}


)B1802e9bb0",
    "bb196b32b867de16ae4bce6d23995e2d7683c6ffb0b8f4f94f7f4efaf0f457b4",
    R"F1802e9bb0C()F1802e9bb0C",
    R"F1802e9bb0D()F1802e9bb0D",
    R"F1802e9bb0T()F1802e9bb0T",
    R"F1802e9bb0F(10: if ((*(uint *)(param_2 + 0x48) & 0x20) != 0) {
14: return;)F1802e9bb0F",
    R"F1802e9bb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9bb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9bb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9bb0", "FUN_1802e9bb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x58);
    // body sha256: bb196b32b867de16ae4bce6d23995e2d7683c6ffb0b8f4f94f7f4efaf0f457b4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9bb0(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9bb0;
}

// 0x1802e9bd6 FUN_1802e9bd6
// source: re/dump/decompile/0x1802e9bd6_FUN_1802e9bd6.c
// size: 38 bytes; thunk: false
// body sha256: d2da8f5188cd0dce37f3bb07ca764a1cff0e788f77c99d95cd3c9f1e13866b2b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9bd6{
    "0x1802e9bd6",
    "FUN_1802e9bd6",
    R"F1802e9bd6S(undefined FUN_1802e9bd6())F1802e9bd6S",
    R"B1802e9bd6(// 0x1802e9bd6  FUN_1802e9bd6
// size=38 thunk=false
// signature: undefined FUN_1802e9bd6()
// status: ok


void FUN_1802e9bd6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x40) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);
  }
  return;
}


)B1802e9bd6",
    "d2da8f5188cd0dce37f3bb07ca764a1cff0e788f77c99d95cd3c9f1e13866b2b",
    R"F1802e9bd6C()F1802e9bd6C",
    R"F1802e9bd6D()F1802e9bd6D",
    R"F1802e9bd6T()F1802e9bd6T",
    R"F1802e9bd6F(10: if ((*(uint *)(param_2 + 0x48) & 0x40) != 0) {
14: return;)F1802e9bd6F",
    R"F1802e9bd6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9bd6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9bd6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9bd6", "FUN_1802e9bd6");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x58);
    // body sha256: d2da8f5188cd0dce37f3bb07ca764a1cff0e788f77c99d95cd3c9f1e13866b2b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9bd6(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x48) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x48) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9bd6;
}

// 0x1802e9bfc FUN_1802e9bfc
// source: re/dump/decompile/0x1802e9bfc_FUN_1802e9bfc.c
// size: 41 bytes; thunk: false
// body sha256: c863cf5ce053609c4d902bb34d64f2f440ecb8c161ac45a37192a78891edc349
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9bfc{
    "0x1802e9bfc",
    "FUN_1802e9bfc",
    R"F1802e9bfcS(undefined FUN_1802e9bfc())F1802e9bfcS",
    R"B1802e9bfc(// 0x1802e9bfc  FUN_1802e9bfc
// size=41 thunk=false
// signature: undefined FUN_1802e9bfc()
// status: ok


void FUN_1802e9bfc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x658);
  }
  return;
}


)B1802e9bfc",
    "c863cf5ce053609c4d902bb34d64f2f440ecb8c161ac45a37192a78891edc349",
    R"F1802e9bfcC()F1802e9bfcC",
    R"F1802e9bfcD()F1802e9bfcD",
    R"F1802e9bfcT()F1802e9bfcT",
    R"F1802e9bfcF(10: if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
14: return;)F1802e9bfcF",
    R"F1802e9bfcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9bfcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9bfc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9bfc", "FUN_1802e9bfc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x658);
    // body sha256: c863cf5ce053609c4d902bb34d64f2f440ecb8c161ac45a37192a78891edc349
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9bfc(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x658);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9bfc;
}

// 0x1802e9c25 FUN_1802e9c25
// source: re/dump/decompile/0x1802e9c25_FUN_1802e9c25.c
// size: 38 bytes; thunk: false
// body sha256: 00edebe961519bab3931211e490657b695993ed731df45a0b3885dd71d7b4d9a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9c25{
    "0x1802e9c25",
    "FUN_1802e9c25",
    R"F1802e9c25S(undefined FUN_1802e9c25())F1802e9c25S",
    R"B1802e9c25(// 0x1802e9c25  FUN_1802e9c25
// size=38 thunk=false
// signature: undefined FUN_1802e9c25()
// status: ok


void FUN_1802e9c25(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B1802e9c25",
    "00edebe961519bab3931211e490657b695993ed731df45a0b3885dd71d7b4d9a",
    R"F1802e9c25C()F1802e9c25C",
    R"F1802e9c25D()F1802e9c25D",
    R"F1802e9c25T()F1802e9c25T",
    R"F1802e9c25F(10: if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
14: return;)F1802e9c25F",
    R"F1802e9c25U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9c25U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9c25() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9c25", "FUN_1802e9c25");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x78);
    // body sha256: 00edebe961519bab3931211e490657b695993ed731df45a0b3885dd71d7b4d9a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9c25(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9c25;
}

// 0x1802e9c4b FUN_1802e9c4b
// source: re/dump/decompile/0x1802e9c4b_FUN_1802e9c4b.c
// size: 38 bytes; thunk: false
// body sha256: baadfe54ab765a739fe9ee0bef3458447b38fb347cdef770bec3e723265768ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9c4b{
    "0x1802e9c4b",
    "FUN_1802e9c4b",
    R"F1802e9c4bS(undefined FUN_1802e9c4b())F1802e9c4bS",
    R"B1802e9c4b(// 0x1802e9c4b  FUN_1802e9c4b
// size=38 thunk=false
// signature: undefined FUN_1802e9c4b()
// status: ok


void FUN_1802e9c4b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B1802e9c4b",
    "baadfe54ab765a739fe9ee0bef3458447b38fb347cdef770bec3e723265768ec",
    R"F1802e9c4bC()F1802e9c4bC",
    R"F1802e9c4bD()F1802e9c4bD",
    R"F1802e9c4bT()F1802e9c4bT",
    R"F1802e9c4bF(10: if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
14: return;)F1802e9c4bF",
    R"F1802e9c4bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9c4bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9c4b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9c4b", "FUN_1802e9c4b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x78);
    // body sha256: baadfe54ab765a739fe9ee0bef3458447b38fb347cdef770bec3e723265768ec
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9c4b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x44) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x44) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9c4b;
}

// 0x1802e9ca4 FUN_1802e9ca4
// source: re/dump/decompile/0x1802e9ca4_FUN_1802e9ca4.c
// size: 41 bytes; thunk: false
// body sha256: ec3bdd860b52c3068b4a54edce4803904fdc2fc8f5a96eccbd328152f39782ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9ca4{
    "0x1802e9ca4",
    "FUN_1802e9ca4",
    R"F1802e9ca4S(undefined FUN_1802e9ca4())F1802e9ca4S",
    R"B1802e9ca4(// 0x1802e9ca4  FUN_1802e9ca4
// size=41 thunk=false
// signature: undefined FUN_1802e9ca4()
// status: ok


void FUN_1802e9ca4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802e9ca4",
    "ec3bdd860b52c3068b4a54edce4803904fdc2fc8f5a96eccbd328152f39782ec",
    R"F1802e9ca4C()F1802e9ca4C",
    R"F1802e9ca4D()F1802e9ca4D",
    R"F1802e9ca4T()F1802e9ca4T",
    R"F1802e9ca4F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802e9ca4F",
    R"F1802e9ca4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9ca4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9ca4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9ca4", "FUN_1802e9ca4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x88);
    // body sha256: ec3bdd860b52c3068b4a54edce4803904fdc2fc8f5a96eccbd328152f39782ec
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9ca4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9ca4;
}

// 0x1802e9ce5 FUN_1802e9ce5
// source: re/dump/decompile/0x1802e9ce5_FUN_1802e9ce5.c
// size: 41 bytes; thunk: false
// body sha256: 359a95a6c6c2b6dbe827b8bcf06279c1225275248bae15bc7fa519626c5c60f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9ce5{
    "0x1802e9ce5",
    "FUN_1802e9ce5",
    R"F1802e9ce5S(undefined FUN_1802e9ce5())F1802e9ce5S",
    R"B1802e9ce5(// 0x1802e9ce5  FUN_1802e9ce5
// size=41 thunk=false
// signature: undefined FUN_1802e9ce5()
// status: ok


void FUN_1802e9ce5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x368);
  }
  return;
}


)B1802e9ce5",
    "359a95a6c6c2b6dbe827b8bcf06279c1225275248bae15bc7fa519626c5c60f7",
    R"F1802e9ce5C()F1802e9ce5C",
    R"F1802e9ce5D()F1802e9ce5D",
    R"F1802e9ce5T()F1802e9ce5T",
    R"F1802e9ce5F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802e9ce5F",
    R"F1802e9ce5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9ce5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9ce5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9ce5", "FUN_1802e9ce5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x368);
    // body sha256: 359a95a6c6c2b6dbe827b8bcf06279c1225275248bae15bc7fa519626c5c60f7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9ce5(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x368);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9ce5;
}

// 0x1802e9d32 FUN_1802e9d32
// source: re/dump/decompile/0x1802e9d32_FUN_1802e9d32.c
// size: 41 bytes; thunk: false
// body sha256: ccde3f6d786f82c5281ec3a3fec6a262e1b67d3fbb2c58a0651fa794faf796f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9d32{
    "0x1802e9d32",
    "FUN_1802e9d32",
    R"F1802e9d32S(undefined FUN_1802e9d32())F1802e9d32S",
    R"B1802e9d32(// 0x1802e9d32  FUN_1802e9d32
// size=41 thunk=false
// signature: undefined FUN_1802e9d32()
// status: ok


void FUN_1802e9d32(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


)B1802e9d32",
    "ccde3f6d786f82c5281ec3a3fec6a262e1b67d3fbb2c58a0651fa794faf796f3",
    R"F1802e9d32C()F1802e9d32C",
    R"F1802e9d32D()F1802e9d32D",
    R"F1802e9d32T()F1802e9d32T",
    R"F1802e9d32F(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802e9d32F",
    R"F1802e9d32U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9d32U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9d32() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9d32", "FUN_1802e9d32");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 200);
    // body sha256: ccde3f6d786f82c5281ec3a3fec6a262e1b67d3fbb2c58a0651fa794faf796f3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9d32(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9d32;
}

// 0x1802e9d5b FUN_1802e9d5b
// source: re/dump/decompile/0x1802e9d5b_FUN_1802e9d5b.c
// size: 41 bytes; thunk: false
// body sha256: f90745d76bde06396d32b8b4cdfff337b0ce63a6f442cec4d18159e51b2dc775
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9d5b{
    "0x1802e9d5b",
    "FUN_1802e9d5b",
    R"F1802e9d5bS(undefined FUN_1802e9d5b())F1802e9d5bS",
    R"B1802e9d5b(// 0x1802e9d5b  FUN_1802e9d5b
// size=41 thunk=false
// signature: undefined FUN_1802e9d5b()
// status: ok


void FUN_1802e9d5b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);
  }
  return;
}


)B1802e9d5b",
    "f90745d76bde06396d32b8b4cdfff337b0ce63a6f442cec4d18159e51b2dc775",
    R"F1802e9d5bC()F1802e9d5bC",
    R"F1802e9d5bD()F1802e9d5bD",
    R"F1802e9d5bT()F1802e9d5bT",
    R"F1802e9d5bF(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802e9d5bF",
    R"F1802e9d5bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9d5bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9d5b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9d5b", "FUN_1802e9d5b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2c8);
    // body sha256: f90745d76bde06396d32b8b4cdfff337b0ce63a6f442cec4d18159e51b2dc775
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9d5b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9d5b;
}

// 0x1802e9d84 FUN_1802e9d84
// source: re/dump/decompile/0x1802e9d84_FUN_1802e9d84.c
// size: 41 bytes; thunk: false
// body sha256: c9330a21aaae3c57d62b45d2cd3c1105441a6fd9ab53faf244ca7e97f016766e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9d84{
    "0x1802e9d84",
    "FUN_1802e9d84",
    R"F1802e9d84S(undefined FUN_1802e9d84())F1802e9d84S",
    R"B1802e9d84(// 0x1802e9d84  FUN_1802e9d84
// size=41 thunk=false
// signature: undefined FUN_1802e9d84()
// status: ok


void FUN_1802e9d84(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e8);
  }
  return;
}


)B1802e9d84",
    "c9330a21aaae3c57d62b45d2cd3c1105441a6fd9ab53faf244ca7e97f016766e",
    R"F1802e9d84C()F1802e9d84C",
    R"F1802e9d84D()F1802e9d84D",
    R"F1802e9d84T()F1802e9d84T",
    R"F1802e9d84F(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802e9d84F",
    R"F1802e9d84U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9d84U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9d84() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9d84", "FUN_1802e9d84");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2e8);
    // body sha256: c9330a21aaae3c57d62b45d2cd3c1105441a6fd9ab53faf244ca7e97f016766e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9d84(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9d84;
}

// 0x1802e9dad FUN_1802e9dad
// source: re/dump/decompile/0x1802e9dad_FUN_1802e9dad.c
// size: 46 bytes; thunk: false
// body sha256: 3dc0bd25cc1e1af01c1be6da3b0d82f63b8e5188045bde78358e92c17e956f55
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9dad{
    "0x1802e9dad",
    "FUN_1802e9dad",
    R"F1802e9dadS(undefined FUN_1802e9dad())F1802e9dadS",
    R"B1802e9dad(// 0x1802e9dad  FUN_1802e9dad
// size=46 thunk=false
// signature: undefined FUN_1802e9dad()
// status: ok


void FUN_1802e9dad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);
  }
  return;
}


)B1802e9dad",
    "3dc0bd25cc1e1af01c1be6da3b0d82f63b8e5188045bde78358e92c17e956f55",
    R"F1802e9dadC()F1802e9dadC",
    R"F1802e9dadD()F1802e9dadD",
    R"F1802e9dadT()F1802e9dadT",
    R"F1802e9dadF(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802e9dadF",
    R"F1802e9dadU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9dadU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9dad() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9dad", "FUN_1802e9dad");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x308);
    // body sha256: 3dc0bd25cc1e1af01c1be6da3b0d82f63b8e5188045bde78358e92c17e956f55
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9dad(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9dad;
}

// 0x1802e9ddb FUN_1802e9ddb
// source: re/dump/decompile/0x1802e9ddb_FUN_1802e9ddb.c
// size: 46 bytes; thunk: false
// body sha256: c69d3c22d2c5c48dc792778c3971235343eebdb9f4b6be7cd05fb5d1f7188335
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9ddb{
    "0x1802e9ddb",
    "FUN_1802e9ddb",
    R"F1802e9ddbS(undefined FUN_1802e9ddb())F1802e9ddbS",
    R"B1802e9ddb(// 0x1802e9ddb  FUN_1802e9ddb
// size=46 thunk=false
// signature: undefined FUN_1802e9ddb()
// status: ok


void FUN_1802e9ddb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x328);
  }
  return;
}


)B1802e9ddb",
    "c69d3c22d2c5c48dc792778c3971235343eebdb9f4b6be7cd05fb5d1f7188335",
    R"F1802e9ddbC()F1802e9ddbC",
    R"F1802e9ddbD()F1802e9ddbD",
    R"F1802e9ddbT()F1802e9ddbT",
    R"F1802e9ddbF(10: if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
14: return;)F1802e9ddbF",
    R"F1802e9ddbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9ddbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9ddb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9ddb", "FUN_1802e9ddb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x328);
    // body sha256: c69d3c22d2c5c48dc792778c3971235343eebdb9f4b6be7cd05fb5d1f7188335
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9ddb(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x328);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9ddb;
}

// 0x1802e9e09 FUN_1802e9e09
// source: re/dump/decompile/0x1802e9e09_FUN_1802e9e09.c
// size: 46 bytes; thunk: false
// body sha256: 9881cb73ef9cd332518f3ba8a40633c4869547e625aa741f9d125910a8fbebcb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9e09{
    "0x1802e9e09",
    "FUN_1802e9e09",
    R"F1802e9e09S(undefined FUN_1802e9e09())F1802e9e09S",
    R"B1802e9e09(// 0x1802e9e09  FUN_1802e9e09
// size=46 thunk=false
// signature: undefined FUN_1802e9e09()
// status: ok


void FUN_1802e9e09(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);
  }
  return;
}


)B1802e9e09",
    "9881cb73ef9cd332518f3ba8a40633c4869547e625aa741f9d125910a8fbebcb",
    R"F1802e9e09C()F1802e9e09C",
    R"F1802e9e09D()F1802e9e09D",
    R"F1802e9e09T()F1802e9e09T",
    R"F1802e9e09F(10: if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
14: return;)F1802e9e09F",
    R"F1802e9e09U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9e09U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9e09() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9e09", "FUN_1802e9e09");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x348);
    // body sha256: 9881cb73ef9cd332518f3ba8a40633c4869547e625aa741f9d125910a8fbebcb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9e09(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9e09;
}

// 0x1802e9e37 FUN_1802e9e37
// source: re/dump/decompile/0x1802e9e37_FUN_1802e9e37.c
// size: 46 bytes; thunk: false
// body sha256: 1b67c38fc3022ad9a0cbc94b612dd84d9ff3dbd9684b8c5709a67588477c0423
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9e37{
    "0x1802e9e37",
    "FUN_1802e9e37",
    R"F1802e9e37S(undefined FUN_1802e9e37())F1802e9e37S",
    R"B1802e9e37(// 0x1802e9e37  FUN_1802e9e37
// size=46 thunk=false
// signature: undefined FUN_1802e9e37()
// status: ok


void FUN_1802e9e37(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


)B1802e9e37",
    "1b67c38fc3022ad9a0cbc94b612dd84d9ff3dbd9684b8c5709a67588477c0423",
    R"F1802e9e37C()F1802e9e37C",
    R"F1802e9e37D()F1802e9e37D",
    R"F1802e9e37T()F1802e9e37T",
    R"F1802e9e37F(10: if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
14: return;)F1802e9e37F",
    R"F1802e9e37U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9e37U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9e37() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9e37", "FUN_1802e9e37");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xa8);
    // body sha256: 1b67c38fc3022ad9a0cbc94b612dd84d9ff3dbd9684b8c5709a67588477c0423
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9e37(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffbff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9e37;
}

// 0x1802e9e65 FUN_1802e9e65
// source: re/dump/decompile/0x1802e9e65_FUN_1802e9e65.c
// size: 46 bytes; thunk: false
// body sha256: 5ba7461bdeceeaaeb5b42874397d2780842217e66eedb516f403237a7ea582b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9e65{
    "0x1802e9e65",
    "FUN_1802e9e65",
    R"F1802e9e65S(undefined FUN_1802e9e65())F1802e9e65S",
    R"B1802e9e65(// 0x1802e9e65  FUN_1802e9e65
// size=46 thunk=false
// signature: undefined FUN_1802e9e65()
// status: ok


void FUN_1802e9e65(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


)B1802e9e65",
    "5ba7461bdeceeaaeb5b42874397d2780842217e66eedb516f403237a7ea582b6",
    R"F1802e9e65C()F1802e9e65C",
    R"F1802e9e65D()F1802e9e65D",
    R"F1802e9e65T()F1802e9e65T",
    R"F1802e9e65F(10: if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
14: return;)F1802e9e65F",
    R"F1802e9e65U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9e65U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9e65() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9e65", "FUN_1802e9e65");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0xe8);
    // body sha256: 5ba7461bdeceeaaeb5b42874397d2780842217e66eedb516f403237a7ea582b6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9e65(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9e65;
}

// 0x1802e9e93 FUN_1802e9e93
// source: re/dump/decompile/0x1802e9e93_FUN_1802e9e93.c
// size: 46 bytes; thunk: false
// body sha256: cbdeaef89d5a737dca65422b6872fa743ba7b6c672eccf0212319ee38f5d540f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9e93{
    "0x1802e9e93",
    "FUN_1802e9e93",
    R"F1802e9e93S(undefined FUN_1802e9e93())F1802e9e93S",
    R"B1802e9e93(// 0x1802e9e93  FUN_1802e9e93
// size=46 thunk=false
// signature: undefined FUN_1802e9e93()
// status: ok


void FUN_1802e9e93(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


)B1802e9e93",
    "cbdeaef89d5a737dca65422b6872fa743ba7b6c672eccf0212319ee38f5d540f",
    R"F1802e9e93C()F1802e9e93C",
    R"F1802e9e93D()F1802e9e93D",
    R"F1802e9e93T()F1802e9e93T",
    R"F1802e9e93F(10: if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
14: return;)F1802e9e93F",
    R"F1802e9e93U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9e93U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9e93() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9e93", "FUN_1802e9e93");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x108);
    // body sha256: cbdeaef89d5a737dca65422b6872fa743ba7b6c672eccf0212319ee38f5d540f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9e93(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9e93;
}

// 0x1802e9ec1 FUN_1802e9ec1
// source: re/dump/decompile/0x1802e9ec1_FUN_1802e9ec1.c
// size: 46 bytes; thunk: false
// body sha256: ca09e22abbfd6515b7cf1e038a962f8a81d0ce1f4ef3d1362e5212e1593b30f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9ec1{
    "0x1802e9ec1",
    "FUN_1802e9ec1",
    R"F1802e9ec1S(undefined FUN_1802e9ec1())F1802e9ec1S",
    R"B1802e9ec1(// 0x1802e9ec1  FUN_1802e9ec1
// size=46 thunk=false
// signature: undefined FUN_1802e9ec1()
// status: ok


void FUN_1802e9ec1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


)B1802e9ec1",
    "ca09e22abbfd6515b7cf1e038a962f8a81d0ce1f4ef3d1362e5212e1593b30f6",
    R"F1802e9ec1C()F1802e9ec1C",
    R"F1802e9ec1D()F1802e9ec1D",
    R"F1802e9ec1T()F1802e9ec1T",
    R"F1802e9ec1F(10: if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0) {
14: return;)F1802e9ec1F",
    R"F1802e9ec1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9ec1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9ec1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9ec1", "FUN_1802e9ec1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x128);
    // body sha256: ca09e22abbfd6515b7cf1e038a962f8a81d0ce1f4ef3d1362e5212e1593b30f6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9ec1(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffdfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9ec1;
}

// 0x1802e9eef FUN_1802e9eef
// source: re/dump/decompile/0x1802e9eef_FUN_1802e9eef.c
// size: 46 bytes; thunk: false
// body sha256: 6b5d5ce7ce5df0c74d2f4e6cce10451795ec42fb0243d03e6bfb759cb6d4d2a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9eef{
    "0x1802e9eef",
    "FUN_1802e9eef",
    R"F1802e9eefS(undefined FUN_1802e9eef())F1802e9eefS",
    R"B1802e9eef(// 0x1802e9eef  FUN_1802e9eef
// size=46 thunk=false
// signature: undefined FUN_1802e9eef()
// status: ok


void FUN_1802e9eef(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);
  }
  return;
}


)B1802e9eef",
    "6b5d5ce7ce5df0c74d2f4e6cce10451795ec42fb0243d03e6bfb759cb6d4d2a5",
    R"F1802e9eefC()F1802e9eefC",
    R"F1802e9eefD()F1802e9eefD",
    R"F1802e9eefT()F1802e9eefT",
    R"F1802e9eefF(10: if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
14: return;)F1802e9eefF",
    R"F1802e9eefU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9eefU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9eef() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9eef", "FUN_1802e9eef");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x148);
    // body sha256: 6b5d5ce7ce5df0c74d2f4e6cce10451795ec42fb0243d03e6bfb759cb6d4d2a5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9eef(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9eef;
}

// 0x1802e9f1d FUN_1802e9f1d
// source: re/dump/decompile/0x1802e9f1d_FUN_1802e9f1d.c
// size: 46 bytes; thunk: false
// body sha256: b9bf32cc31bb8e10e9cbcf44cf94e32925757b73198d777e6042ab3d4bd09807
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9f1d{
    "0x1802e9f1d",
    "FUN_1802e9f1d",
    R"F1802e9f1dS(undefined FUN_1802e9f1d())F1802e9f1dS",
    R"B1802e9f1d(// 0x1802e9f1d  FUN_1802e9f1d
// size=46 thunk=false
// signature: undefined FUN_1802e9f1d()
// status: ok


void FUN_1802e9f1d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


)B1802e9f1d",
    "b9bf32cc31bb8e10e9cbcf44cf94e32925757b73198d777e6042ab3d4bd09807",
    R"F1802e9f1dC()F1802e9f1dC",
    R"F1802e9f1dD()F1802e9f1dD",
    R"F1802e9f1dT()F1802e9f1dT",
    R"F1802e9f1dF(10: if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
14: return;)F1802e9f1dF",
    R"F1802e9f1dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9f1dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9f1d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9f1d", "FUN_1802e9f1d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x168);
    // body sha256: b9bf32cc31bb8e10e9cbcf44cf94e32925757b73198d777e6042ab3d4bd09807
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9f1d(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x8000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9f1d;
}

// 0x1802e9f4b FUN_1802e9f4b
// source: re/dump/decompile/0x1802e9f4b_FUN_1802e9f4b.c
// size: 46 bytes; thunk: false
// body sha256: 63dbeee5e815326b8b8f418257f40da633524250025554097f976a82f7948819
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9f4b{
    "0x1802e9f4b",
    "FUN_1802e9f4b",
    R"F1802e9f4bS(undefined FUN_1802e9f4b())F1802e9f4bS",
    R"B1802e9f4b(// 0x1802e9f4b  FUN_1802e9f4b
// size=46 thunk=false
// signature: undefined FUN_1802e9f4b()
// status: ok


void FUN_1802e9f4b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


)B1802e9f4b",
    "63dbeee5e815326b8b8f418257f40da633524250025554097f976a82f7948819",
    R"F1802e9f4bC()F1802e9f4bC",
    R"F1802e9f4bD()F1802e9f4bD",
    R"F1802e9f4bT()F1802e9f4bT",
    R"F1802e9f4bF(10: if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
14: return;)F1802e9f4bF",
    R"F1802e9f4bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9f4bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9f4b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9f4b", "FUN_1802e9f4b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x188);
    // body sha256: 63dbeee5e815326b8b8f418257f40da633524250025554097f976a82f7948819
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9f4b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9f4b;
}

// 0x1802e9f79 FUN_1802e9f79
// source: re/dump/decompile/0x1802e9f79_FUN_1802e9f79.c
// size: 46 bytes; thunk: false
// body sha256: efbbff8819632ae89d9b7a86e476c99b7763f7f8a4b0cbd466b9258d97cb2e99
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9f79{
    "0x1802e9f79",
    "FUN_1802e9f79",
    R"F1802e9f79S(undefined FUN_1802e9f79())F1802e9f79S",
    R"B1802e9f79(// 0x1802e9f79  FUN_1802e9f79
// size=46 thunk=false
// signature: undefined FUN_1802e9f79()
// status: ok


void FUN_1802e9f79(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


)B1802e9f79",
    "efbbff8819632ae89d9b7a86e476c99b7763f7f8a4b0cbd466b9258d97cb2e99",
    R"F1802e9f79C()F1802e9f79C",
    R"F1802e9f79D()F1802e9f79D",
    R"F1802e9f79T()F1802e9f79T",
    R"F1802e9f79F(10: if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
14: return;)F1802e9f79F",
    R"F1802e9f79U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9f79U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9f79() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9f79", "FUN_1802e9f79");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1a8);
    // body sha256: efbbff8819632ae89d9b7a86e476c99b7763f7f8a4b0cbd466b9258d97cb2e99
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9f79(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9f79;
}

// 0x1802e9fa7 FUN_1802e9fa7
// source: re/dump/decompile/0x1802e9fa7_FUN_1802e9fa7.c
// size: 46 bytes; thunk: false
// body sha256: 57c4ab35cc31ff25c9d6eb308c6173f6bfbcc7e9399f6f98c0a2d726cd4886f2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9fa7{
    "0x1802e9fa7",
    "FUN_1802e9fa7",
    R"F1802e9fa7S(undefined FUN_1802e9fa7())F1802e9fa7S",
    R"B1802e9fa7(// 0x1802e9fa7  FUN_1802e9fa7
// size=46 thunk=false
// signature: undefined FUN_1802e9fa7()
// status: ok


void FUN_1802e9fa7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


)B1802e9fa7",
    "57c4ab35cc31ff25c9d6eb308c6173f6bfbcc7e9399f6f98c0a2d726cd4886f2",
    R"F1802e9fa7C()F1802e9fa7C",
    R"F1802e9fa7D()F1802e9fa7D",
    R"F1802e9fa7T()F1802e9fa7T",
    R"F1802e9fa7F(10: if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
14: return;)F1802e9fa7F",
    R"F1802e9fa7U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9fa7U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9fa7() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9fa7", "FUN_1802e9fa7");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1c8);
    // body sha256: 57c4ab35cc31ff25c9d6eb308c6173f6bfbcc7e9399f6f98c0a2d726cd4886f2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9fa7(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x40000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9fa7;
}

// 0x1802e9fd5 FUN_1802e9fd5
// source: re/dump/decompile/0x1802e9fd5_FUN_1802e9fd5.c
// size: 46 bytes; thunk: false
// body sha256: 975abc67947680e014d6f82dab7d1e2f6c10cf8d6984aaa944162812655d3f67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802e9fd5{
    "0x1802e9fd5",
    "FUN_1802e9fd5",
    R"F1802e9fd5S(undefined FUN_1802e9fd5())F1802e9fd5S",
    R"B1802e9fd5(// 0x1802e9fd5  FUN_1802e9fd5
// size=46 thunk=false
// signature: undefined FUN_1802e9fd5()
// status: ok


void FUN_1802e9fd5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);
  }
  return;
}


)B1802e9fd5",
    "975abc67947680e014d6f82dab7d1e2f6c10cf8d6984aaa944162812655d3f67",
    R"F1802e9fd5C()F1802e9fd5C",
    R"F1802e9fd5D()F1802e9fd5D",
    R"F1802e9fd5T()F1802e9fd5T",
    R"F1802e9fd5F(10: if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0) {
14: return;)F1802e9fd5F",
    R"F1802e9fd5U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802e9fd5U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802e9fd5() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802e9fd5", "FUN_1802e9fd5");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x1e8);
    // body sha256: 975abc67947680e014d6f82dab7d1e2f6c10cf8d6984aaa944162812655d3f67
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802e9fd5(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x80000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x80000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfff7ffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802e9fd5;
}

// 0x1802ea003 FUN_1802ea003
// source: re/dump/decompile/0x1802ea003_FUN_1802ea003.c
// size: 46 bytes; thunk: false
// body sha256: 61a36df278678091d859715ed76c8099dffbd6a6e11505101932328fb3fcb626
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea003{
    "0x1802ea003",
    "FUN_1802ea003",
    R"F1802ea003S(undefined FUN_1802ea003())F1802ea003S",
    R"B1802ea003(// 0x1802ea003  FUN_1802ea003
// size=46 thunk=false
// signature: undefined FUN_1802ea003()
// status: ok


void FUN_1802ea003(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);
  }
  return;
}


)B1802ea003",
    "61a36df278678091d859715ed76c8099dffbd6a6e11505101932328fb3fcb626",
    R"F1802ea003C()F1802ea003C",
    R"F1802ea003D()F1802ea003D",
    R"F1802ea003T()F1802ea003T",
    R"F1802ea003F(10: if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0) {
14: return;)F1802ea003F",
    R"F1802ea003U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea003U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea003() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea003", "FUN_1802ea003");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x208);
    // body sha256: 61a36df278678091d859715ed76c8099dffbd6a6e11505101932328fb3fcb626
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea003(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x100000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x100000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffefffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea003;
}

// 0x1802ea031 FUN_1802ea031
// source: re/dump/decompile/0x1802ea031_FUN_1802ea031.c
// size: 46 bytes; thunk: false
// body sha256: 732d6386c3246b510ec3529311fe3c56793083f7607915b378076b8ebba41a25
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea031{
    "0x1802ea031",
    "FUN_1802ea031",
    R"F1802ea031S(undefined FUN_1802ea031())F1802ea031S",
    R"B1802ea031(// 0x1802ea031  FUN_1802ea031
// size=46 thunk=false
// signature: undefined FUN_1802ea031()
// status: ok


void FUN_1802ea031(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


)B1802ea031",
    "732d6386c3246b510ec3529311fe3c56793083f7607915b378076b8ebba41a25",
    R"F1802ea031C()F1802ea031C",
    R"F1802ea031D()F1802ea031D",
    R"F1802ea031T()F1802ea031T",
    R"F1802ea031F(10: if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
14: return;)F1802ea031F",
    R"F1802ea031U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea031U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea031() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea031", "FUN_1802ea031");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x228);
    // body sha256: 732d6386c3246b510ec3529311fe3c56793083f7607915b378076b8ebba41a25
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea031(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x200000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea031;
}

// 0x1802ea05f FUN_1802ea05f
// source: re/dump/decompile/0x1802ea05f_FUN_1802ea05f.c
// size: 46 bytes; thunk: false
// body sha256: 102575474bc5e01556645b1c57c7b7c7bce36f58011c7c2d428740fdab808e0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea05f{
    "0x1802ea05f",
    "FUN_1802ea05f",
    R"F1802ea05fS(undefined FUN_1802ea05f())F1802ea05fS",
    R"B1802ea05f(// 0x1802ea05f  FUN_1802ea05f
// size=46 thunk=false
// signature: undefined FUN_1802ea05f()
// status: ok


void FUN_1802ea05f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a8);
  }
  return;
}


)B1802ea05f",
    "102575474bc5e01556645b1c57c7b7c7bce36f58011c7c2d428740fdab808e0d",
    R"F1802ea05fC()F1802ea05fC",
    R"F1802ea05fD()F1802ea05fD",
    R"F1802ea05fT()F1802ea05fT",
    R"F1802ea05fF(10: if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
14: return;)F1802ea05fF",
    R"F1802ea05fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea05fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea05f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea05f", "FUN_1802ea05f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x2a8);
    // body sha256: 102575474bc5e01556645b1c57c7b7c7bce36f58011c7c2d428740fdab808e0d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea05f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x400000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea05f;
}

// 0x1802ea08d FUN_1802ea08d
// source: re/dump/decompile/0x1802ea08d_FUN_1802ea08d.c
// size: 46 bytes; thunk: false
// body sha256: c29667848b73f34bb4220023c4daf93dda55e511e5820e17b5cc2d90184afdbb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea08d{
    "0x1802ea08d",
    "FUN_1802ea08d",
    R"F1802ea08dS(undefined FUN_1802ea08d())F1802ea08dS",
    R"B1802ea08d(// 0x1802ea08d  FUN_1802ea08d
// size=46 thunk=false
// signature: undefined FUN_1802ea08d()
// status: ok


void FUN_1802ea08d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);
  }
  return;
}


)B1802ea08d",
    "c29667848b73f34bb4220023c4daf93dda55e511e5820e17b5cc2d90184afdbb",
    R"F1802ea08dC()F1802ea08dC",
    R"F1802ea08dD()F1802ea08dD",
    R"F1802ea08dT()F1802ea08dT",
    R"F1802ea08dF(10: if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
14: return;)F1802ea08dF",
    R"F1802ea08dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea08dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea08d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea08d", "FUN_1802ea08d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x248);
    // body sha256: c29667848b73f34bb4220023c4daf93dda55e511e5820e17b5cc2d90184afdbb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea08d(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x800000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea08d;
}

// 0x1802ea0bb FUN_1802ea0bb
// source: re/dump/decompile/0x1802ea0bb_FUN_1802ea0bb.c
// size: 46 bytes; thunk: false
// body sha256: 9d9a1c09c08ad54fdfcc7679b3217241cf59ce4bb418ad4b23868ddbae3a3b13
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea0bb{
    "0x1802ea0bb",
    "FUN_1802ea0bb",
    R"F1802ea0bbS(undefined FUN_1802ea0bb())F1802ea0bbS",
    R"B1802ea0bb(// 0x1802ea0bb  FUN_1802ea0bb
// size=46 thunk=false
// signature: undefined FUN_1802ea0bb()
// status: ok


void FUN_1802ea0bb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


)B1802ea0bb",
    "9d9a1c09c08ad54fdfcc7679b3217241cf59ce4bb418ad4b23868ddbae3a3b13",
    R"F1802ea0bbC()F1802ea0bbC",
    R"F1802ea0bbD()F1802ea0bbD",
    R"F1802ea0bbT()F1802ea0bbT",
    R"F1802ea0bbF(10: if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
14: return;)F1802ea0bbF",
    R"F1802ea0bbU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea0bbU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea0bb() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea0bb", "FUN_1802ea0bb");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x268);
    // body sha256: 9d9a1c09c08ad54fdfcc7679b3217241cf59ce4bb418ad4b23868ddbae3a3b13
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea0bb(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x1000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea0bb;
}

// 0x1802ea0e9 FUN_1802ea0e9
// source: re/dump/decompile/0x1802ea0e9_FUN_1802ea0e9.c
// size: 46 bytes; thunk: false
// body sha256: cb1149cbd07324e9bf902f5e85e8a1a70effe59bab10d8a23f0e7f790725b8b3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea0e9{
    "0x1802ea0e9",
    "FUN_1802ea0e9",
    R"F1802ea0e9S(undefined FUN_1802ea0e9())F1802ea0e9S",
    R"B1802ea0e9(// 0x1802ea0e9  FUN_1802ea0e9
// size=46 thunk=false
// signature: undefined FUN_1802ea0e9()
// status: ok


void FUN_1802ea0e9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x388);
  }
  return;
}


)B1802ea0e9",
    "cb1149cbd07324e9bf902f5e85e8a1a70effe59bab10d8a23f0e7f790725b8b3",
    R"F1802ea0e9C()F1802ea0e9C",
    R"F1802ea0e9D()F1802ea0e9D",
    R"F1802ea0e9T()F1802ea0e9T",
    R"F1802ea0e9F(10: if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
14: return;)F1802ea0e9F",
    R"F1802ea0e9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea0e9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea0e9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea0e9", "FUN_1802ea0e9");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09", param_2 + 0x388);
    // body sha256: cb1149cbd07324e9bf902f5e85e8a1a70effe59bab10d8a23f0e7f790725b8b3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea0e9(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x40) & 0x2000000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x388);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea0e9;
}

// 0x1802ea1fc FUN_1802ea1fc
// source: re/dump/decompile/0x1802ea1fc_FUN_1802ea1fc.c
// size: 29 bytes; thunk: false
// body sha256: d0145c91e8f8c55bd3ee3f0a77d72fd639a5d9f5e2ecf6e4126f7a6d0870c54c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea1fc{
    "0x1802ea1fc",
    "FUN_1802ea1fc",
    R"F1802ea1fcS(undefined FUN_1802ea1fc())F1802ea1fcS",
    R"B1802ea1fc(// 0x1802ea1fc  FUN_1802ea1fc
// size=29 thunk=false
// signature: undefined FUN_1802ea1fc()
// status: ok


undefined8 FUN_1802ea1fc(void)

{
  return 0;
}


)B1802ea1fc",
    "d0145c91e8f8c55bd3ee3f0a77d72fd639a5d9f5e2ecf6e4126f7a6d0870c54c",
    R"F1802ea1fcC()F1802ea1fcC",
    R"F1802ea1fcD()F1802ea1fcD",
    R"F1802ea1fcT()F1802ea1fcT",
    R"F1802ea1fcF(10: return 0;)F1802ea1fcF",
    R"F1802ea1fcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea1fcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea1fc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea1fc", "FUN_1802ea1fc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d0145c91e8f8c55bd3ee3f0a77d72fd639a5d9f5e2ecf6e4126f7a6d0870c54c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ea1fc(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ea1fc;
}

// 0x1802ea220 FUN_1802ea220
// source: re/dump/decompile/0x1802ea220_FUN_1802ea220.c
// size: 29 bytes; thunk: false
// body sha256: ff0e994c3636ac914e9dd1036b84a60034683e388d14357b51fa1e299d8317c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea220{
    "0x1802ea220",
    "FUN_1802ea220",
    R"F1802ea220S(undefined FUN_1802ea220())F1802ea220S",
    R"B1802ea220(// 0x1802ea220  FUN_1802ea220
// size=29 thunk=false
// signature: undefined FUN_1802ea220()
// status: ok


undefined8 FUN_1802ea220(void)

{
  return 0;
}


)B1802ea220",
    "ff0e994c3636ac914e9dd1036b84a60034683e388d14357b51fa1e299d8317c6",
    R"F1802ea220C()F1802ea220C",
    R"F1802ea220D()F1802ea220D",
    R"F1802ea220T()F1802ea220T",
    R"F1802ea220F(10: return 0;)F1802ea220F",
    R"F1802ea220U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea220U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea220() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea220", "FUN_1802ea220");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ff0e994c3636ac914e9dd1036b84a60034683e388d14357b51fa1e299d8317c6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ea220(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ea220;
}

// 0x1802ea23e FUN_1802ea23e
// source: re/dump/decompile/0x1802ea23e_FUN_1802ea23e.c
// size: 29 bytes; thunk: false
// body sha256: a97f25f14465ffa7b3c4c2cf877a884c11ab509a7a43864a0894d210eb55c0b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea23e{
    "0x1802ea23e",
    "FUN_1802ea23e",
    R"F1802ea23eS(undefined FUN_1802ea23e())F1802ea23eS",
    R"B1802ea23e(// 0x1802ea23e  FUN_1802ea23e
// size=29 thunk=false
// signature: undefined FUN_1802ea23e()
// status: ok


undefined8 FUN_1802ea23e(void)

{
  return 0;
}


)B1802ea23e",
    "a97f25f14465ffa7b3c4c2cf877a884c11ab509a7a43864a0894d210eb55c0b7",
    R"F1802ea23eC()F1802ea23eC",
    R"F1802ea23eD()F1802ea23eD",
    R"F1802ea23eT()F1802ea23eT",
    R"F1802ea23eF(10: return 0;)F1802ea23eF",
    R"F1802ea23eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea23eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea23e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea23e", "FUN_1802ea23e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a97f25f14465ffa7b3c4c2cf877a884c11ab509a7a43864a0894d210eb55c0b7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ea23e(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ea23e;
}

// 0x1802ea25c FUN_1802ea25c
// source: re/dump/decompile/0x1802ea25c_FUN_1802ea25c.c
// size: 29 bytes; thunk: false
// body sha256: a1e6c4292d1939effa15ca0d3aea11c4ef8017087136ecbc3cd963f37755f839
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea25c{
    "0x1802ea25c",
    "FUN_1802ea25c",
    R"F1802ea25cS(undefined FUN_1802ea25c())F1802ea25cS",
    R"B1802ea25c(// 0x1802ea25c  FUN_1802ea25c
// size=29 thunk=false
// signature: undefined FUN_1802ea25c()
// status: ok


undefined8 FUN_1802ea25c(void)

{
  return 0;
}


)B1802ea25c",
    "a1e6c4292d1939effa15ca0d3aea11c4ef8017087136ecbc3cd963f37755f839",
    R"F1802ea25cC()F1802ea25cC",
    R"F1802ea25cD()F1802ea25cD",
    R"F1802ea25cT()F1802ea25cT",
    R"F1802ea25cF(10: return 0;)F1802ea25cF",
    R"F1802ea25cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea25cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea25c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea25c", "FUN_1802ea25c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a1e6c4292d1939effa15ca0d3aea11c4ef8017087136ecbc3cd963f37755f839
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ea25c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ea25c;
}

// 0x1802ea27a FUN_1802ea27a
// source: re/dump/decompile/0x1802ea27a_FUN_1802ea27a.c
// size: 29 bytes; thunk: false
// body sha256: 7f0874418d2becc982e70a35006c67120d8e4dbd0a55475fb4561280aabc5c51
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea27a{
    "0x1802ea27a",
    "FUN_1802ea27a",
    R"F1802ea27aS(undefined FUN_1802ea27a())F1802ea27aS",
    R"B1802ea27a(// 0x1802ea27a  FUN_1802ea27a
// size=29 thunk=false
// signature: undefined FUN_1802ea27a()
// status: ok


undefined8 FUN_1802ea27a(void)

{
  return 0;
}


)B1802ea27a",
    "7f0874418d2becc982e70a35006c67120d8e4dbd0a55475fb4561280aabc5c51",
    R"F1802ea27aC()F1802ea27aC",
    R"F1802ea27aD()F1802ea27aD",
    R"F1802ea27aT()F1802ea27aT",
    R"F1802ea27aF(10: return 0;)F1802ea27aF",
    R"F1802ea27aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea27aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea27a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea27a", "FUN_1802ea27a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7f0874418d2becc982e70a35006c67120d8e4dbd0a55475fb4561280aabc5c51
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ea27a(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ea27a;
}

// 0x1802ea298 FUN_1802ea298
// source: re/dump/decompile/0x1802ea298_FUN_1802ea298.c
// size: 29 bytes; thunk: false
// body sha256: 3a89b8c514972076db700887d9ba4d02f1c7ee58a547e0440925fa122d79e258
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea298{
    "0x1802ea298",
    "FUN_1802ea298",
    R"F1802ea298S(undefined FUN_1802ea298())F1802ea298S",
    R"B1802ea298(// 0x1802ea298  FUN_1802ea298
// size=29 thunk=false
// signature: undefined FUN_1802ea298()
// status: ok


undefined8 FUN_1802ea298(void)

{
  return 0;
}


)B1802ea298",
    "3a89b8c514972076db700887d9ba4d02f1c7ee58a547e0440925fa122d79e258",
    R"F1802ea298C()F1802ea298C",
    R"F1802ea298D()F1802ea298D",
    R"F1802ea298T()F1802ea298T",
    R"F1802ea298F(10: return 0;)F1802ea298F",
    R"F1802ea298U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea298U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea298() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea298", "FUN_1802ea298");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3a89b8c514972076db700887d9ba4d02f1c7ee58a547e0440925fa122d79e258
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802ea298(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802ea298;
}

// 0x1802ea2c0 FUN_1802ea2c0
// source: re/dump/decompile/0x1802ea2c0_FUN_1802ea2c0.c
// size: 36 bytes; thunk: false
// body sha256: d857448502cf23673577161129258a835162b8093954c11353b3247a69c26d9d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea2c0{
    "0x1802ea2c0",
    "FUN_1802ea2c0",
    R"F1802ea2c0S(undefined FUN_1802ea2c0())F1802ea2c0S",
    R"B1802ea2c0(// 0x1802ea2c0  FUN_1802ea2c0
// size=36 thunk=false
// signature: undefined FUN_1802ea2c0()
// status: ok


void FUN_1802ea2c0(undefined8 param_1,longlong param_2)

{
  (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x20));
  return;
}


)B1802ea2c0",
    "d857448502cf23673577161129258a835162b8093954c11353b3247a69c26d9d",
    R"F1802ea2c0C()F1802ea2c0C",
    R"F1802ea2c0D(DAT_1803fa640)F1802ea2c0D",
    R"F1802ea2c0T()F1802ea2c0T",
    R"F1802ea2c0F(11: return;)F1802ea2c0F",
    R"F1802ea2c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 10: (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x20));.)F1802ea2c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea2c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea2c0", "FUN_1802ea2c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa640.
    // TODO: resolve the indirect call in body 10: (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x20));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803fa640", static_cast<const void*>(&image::DAT_1803fa640));
    // body sha256: d857448502cf23673577161129258a835162b8093954c11353b3247a69c26d9d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea2c0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("(**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x20));");
            trace.statement("return;");
        }
    return kFunction_0x1802ea2c0;
}

// 0x1802ea2f0 FUN_1802ea2f0
// source: re/dump/decompile/0x1802ea2f0_FUN_1802ea2f0.c
// size: 36 bytes; thunk: false
// body sha256: 7cd68c831876a66829a765b65bd8cd749745085f5050bee56bdc9d7a54694c6d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea2f0{
    "0x1802ea2f0",
    "FUN_1802ea2f0",
    R"F1802ea2f0S(undefined FUN_1802ea2f0())F1802ea2f0S",
    R"B1802ea2f0(// 0x1802ea2f0  FUN_1802ea2f0
// size=36 thunk=false
// signature: undefined FUN_1802ea2f0()
// status: ok


void FUN_1802ea2f0(undefined8 param_1,longlong param_2)

{
  (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x30));
  return;
}


)B1802ea2f0",
    "7cd68c831876a66829a765b65bd8cd749745085f5050bee56bdc9d7a54694c6d",
    R"F1802ea2f0C()F1802ea2f0C",
    R"F1802ea2f0D(DAT_1803fa640)F1802ea2f0D",
    R"F1802ea2f0T()F1802ea2f0T",
    R"F1802ea2f0F(11: return;)F1802ea2f0F",
    R"F1802ea2f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 10: (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x30));.)F1802ea2f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea2f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea2f0", "FUN_1802ea2f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa640.
    // TODO: resolve the indirect call in body 10: (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x30));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803fa640", static_cast<const void*>(&image::DAT_1803fa640));
    // body sha256: 7cd68c831876a66829a765b65bd8cd749745085f5050bee56bdc9d7a54694c6d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea2f0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("(**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,*(undefined8 *)(param_2 + 0x30));");
            trace.statement("return;");
        }
    return kFunction_0x1802ea2f0;
}

// 0x1802ea320 FUN_1802ea320
// source: re/dump/decompile/0x1802ea320_FUN_1802ea320.c
// size: 22 bytes; thunk: false
// body sha256: 5b792e8b2ef6d6d8fc5e13359c4e27a60b95c1eb4223e89fb5f601edd94d10aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea320{
    "0x1802ea320",
    "FUN_1802ea320",
    R"F1802ea320S(undefined FUN_1802ea320())F1802ea320S",
    R"B1802ea320(// 0x1802ea320  FUN_1802ea320
// size=22 thunk=false
// signature: undefined FUN_1802ea320()
// status: ok


void FUN_1802ea320(void)

{
  DAT_18042cd64 = DAT_18042cd64 & 0xfffffffe;
  return;
}


)B1802ea320",
    "5b792e8b2ef6d6d8fc5e13359c4e27a60b95c1eb4223e89fb5f601edd94d10aa",
    R"F1802ea320C()F1802ea320C",
    R"F1802ea320D(DAT_18042cd64)F1802ea320D",
    R"F1802ea320T()F1802ea320T",
    R"F1802ea320F(11: return;)F1802ea320F",
    R"F1802ea320U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042cd64.)F1802ea320U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea320() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea320", "FUN_1802ea320");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042cd64.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042cd64", static_cast<const void*>(&image::DAT_18042cd64));
    // body sha256: 5b792e8b2ef6d6d8fc5e13359c4e27a60b95c1eb4223e89fb5f601edd94d10aa
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea320(void)");
        {
            trace.statement("DAT_18042cd64 = DAT_18042cd64 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802ea320;
}

// 0x1802ea342 FUN_1802ea342
// source: re/dump/decompile/0x1802ea342_FUN_1802ea342.c
// size: 38 bytes; thunk: false
// body sha256: 2370d1b38e1a74ac72456827a4c35f0d8a46235fe0e47eaea5be4f78dc7b9dcd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea342{
    "0x1802ea342",
    "FUN_1802ea342",
    R"F1802ea342S(undefined FUN_1802ea342())F1802ea342S",
    R"B1802ea342(// 0x1802ea342  FUN_1802ea342
// size=38 thunk=false
// signature: undefined FUN_1802ea342()
// status: ok


void FUN_1802ea342(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802ea342",
    "2370d1b38e1a74ac72456827a4c35f0d8a46235fe0e47eaea5be4f78dc7b9dcd",
    R"F1802ea342C(FUN_1800668e0)F1802ea342C",
    R"F1802ea342D()F1802ea342D",
    R"F1802ea342T()F1802ea342T",
    R"F1802ea342F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ea342F",
    R"F1802ea342U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea342U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea342() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea342", "FUN_1802ea342");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", *(undefined8 *)(param_2 + 0x58));
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 2370d1b38e1a74ac72456827a4c35f0d8a46235fe0e47eaea5be4f78dc7b9dcd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea342(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea342;
}

// 0x1802ea368 FUN_1802ea368
// source: re/dump/decompile/0x1802ea368_FUN_1802ea368.c
// size: 38 bytes; thunk: false
// body sha256: 28bc5901339e7d6f7b716530be3f515f69f437ef34b73bf653265aed121adf67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea368{
    "0x1802ea368",
    "FUN_1802ea368",
    R"F1802ea368S(undefined FUN_1802ea368())F1802ea368S",
    R"B1802ea368(// 0x1802ea368  FUN_1802ea368
// size=38 thunk=false
// signature: undefined FUN_1802ea368()
// status: ok


void FUN_1802ea368(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802ea368",
    "28bc5901339e7d6f7b716530be3f515f69f437ef34b73bf653265aed121adf67",
    R"F1802ea368C()F1802ea368C",
    R"F1802ea368D()F1802ea368D",
    R"F1802ea368T()F1802ea368T",
    R"F1802ea368F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802ea368F",
    R"F1802ea368U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea368U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea368() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea368", "FUN_1802ea368");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 28bc5901339e7d6f7b716530be3f515f69f437ef34b73bf653265aed121adf67
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea368(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea368;
}

// 0x1802ea38e FUN_1802ea38e
// source: re/dump/decompile/0x1802ea38e_FUN_1802ea38e.c
// size: 38 bytes; thunk: false
// body sha256: d6cf2f4d997f6ac8630b0e2a5847a5b57486f8886521bad230d00f775eb5ab67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea38e{
    "0x1802ea38e",
    "FUN_1802ea38e",
    R"F1802ea38eS(undefined FUN_1802ea38e())F1802ea38eS",
    R"B1802ea38e(// 0x1802ea38e  FUN_1802ea38e
// size=38 thunk=false
// signature: undefined FUN_1802ea38e()
// status: ok


void FUN_1802ea38e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802ea38e",
    "d6cf2f4d997f6ac8630b0e2a5847a5b57486f8886521bad230d00f775eb5ab67",
    R"F1802ea38eC()F1802ea38eC",
    R"F1802ea38eD()F1802ea38eD",
    R"F1802ea38eT()F1802ea38eT",
    R"F1802ea38eF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802ea38eF",
    R"F1802ea38eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea38eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea38e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea38e", "FUN_1802ea38e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: d6cf2f4d997f6ac8630b0e2a5847a5b57486f8886521bad230d00f775eb5ab67
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea38e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea38e;
}

// 0x1802ea3fc FUN_1802ea3fc
// source: re/dump/decompile/0x1802ea3fc_FUN_1802ea3fc.c
// size: 38 bytes; thunk: false
// body sha256: 4d9b9c1d914048eb687890ff6ec986aed10cb042a77ea338f93bc1ee2d3fd5e0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea3fc{
    "0x1802ea3fc",
    "FUN_1802ea3fc",
    R"F1802ea3fcS(undefined FUN_1802ea3fc())F1802ea3fcS",
    R"B1802ea3fc(// 0x1802ea3fc  FUN_1802ea3fc
// size=38 thunk=false
// signature: undefined FUN_1802ea3fc()
// status: ok


void FUN_1802ea3fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ea3fc",
    "4d9b9c1d914048eb687890ff6ec986aed10cb042a77ea338f93bc1ee2d3fd5e0",
    R"F1802ea3fcC()F1802ea3fcC",
    R"F1802ea3fcD()F1802ea3fcD",
    R"F1802ea3fcT()F1802ea3fcT",
    R"F1802ea3fcF(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ea3fcF",
    R"F1802ea3fcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea3fcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea3fc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea3fc", "FUN_1802ea3fc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 4d9b9c1d914048eb687890ff6ec986aed10cb042a77ea338f93bc1ee2d3fd5e0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea3fc(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea3fc;
}

// 0x1802ea422 FUN_1802ea422
// source: re/dump/decompile/0x1802ea422_FUN_1802ea422.c
// size: 38 bytes; thunk: false
// body sha256: b9fccda5bc7e00fe44878c023d895eee2ff3c14f74a61350eb162651bb3e03f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea422{
    "0x1802ea422",
    "FUN_1802ea422",
    R"F1802ea422S(undefined FUN_1802ea422())F1802ea422S",
    R"B1802ea422(// 0x1802ea422  FUN_1802ea422
// size=38 thunk=false
// signature: undefined FUN_1802ea422()
// status: ok


void FUN_1802ea422(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ea422",
    "b9fccda5bc7e00fe44878c023d895eee2ff3c14f74a61350eb162651bb3e03f7",
    R"F1802ea422C()F1802ea422C",
    R"F1802ea422D()F1802ea422D",
    R"F1802ea422T()F1802ea422T",
    R"F1802ea422F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802ea422F",
    R"F1802ea422U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea422U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea422() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea422", "FUN_1802ea422");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: b9fccda5bc7e00fe44878c023d895eee2ff3c14f74a61350eb162651bb3e03f7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea422(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea422;
}

// 0x1802ea4a4 FUN_1802ea4a4
// source: re/dump/decompile/0x1802ea4a4_FUN_1802ea4a4.c
// size: 46 bytes; thunk: false
// body sha256: f553171da76b5dccbd45fb9703c35090e32611db9bcf34a0e780c916c6cd95f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea4a4{
    "0x1802ea4a4",
    "FUN_1802ea4a4",
    R"F1802ea4a4S(undefined FUN_1802ea4a4())F1802ea4a4S",
    R"B1802ea4a4(// 0x1802ea4a4  FUN_1802ea4a4
// size=46 thunk=false
// signature: undefined FUN_1802ea4a4()
// status: ok


void FUN_1802ea4a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802ea4a4",
    "f553171da76b5dccbd45fb9703c35090e32611db9bcf34a0e780c916c6cd95f8",
    R"F1802ea4a4C()F1802ea4a4C",
    R"F1802ea4a4D()F1802ea4a4D",
    R"F1802ea4a4T()F1802ea4a4T",
    R"F1802ea4a4F(10: if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
14: return;)F1802ea4a4F",
    R"F1802ea4a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea4a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea4a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea4a4", "FUN_1802ea4a4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x98));
    // body sha256: f553171da76b5dccbd45fb9703c35090e32611db9bcf34a0e780c916c6cd95f8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea4a4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea4a4;
}

// 0x1802ea4d2 FUN_1802ea4d2
// source: re/dump/decompile/0x1802ea4d2_FUN_1802ea4d2.c
// size: 46 bytes; thunk: false
// body sha256: 299ea84214710e48b3d4529fcafd781827df05785deb6539f57d609bcf7c7196
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea4d2{
    "0x1802ea4d2",
    "FUN_1802ea4d2",
    R"F1802ea4d2S(undefined FUN_1802ea4d2())F1802ea4d2S",
    R"B1802ea4d2(// 0x1802ea4d2  FUN_1802ea4d2
// size=46 thunk=false
// signature: undefined FUN_1802ea4d2()
// status: ok


void FUN_1802ea4d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


)B1802ea4d2",
    "299ea84214710e48b3d4529fcafd781827df05785deb6539f57d609bcf7c7196",
    R"F1802ea4d2C()F1802ea4d2C",
    R"F1802ea4d2D()F1802ea4d2D",
    R"F1802ea4d2T()F1802ea4d2T",
    R"F1802ea4d2F(10: if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
14: return;)F1802ea4d2F",
    R"F1802ea4d2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea4d2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea4d2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea4d2", "FUN_1802ea4d2");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x98));
    // body sha256: 299ea84214710e48b3d4529fcafd781827df05785deb6539f57d609bcf7c7196
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea4d2(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea4d2;
}

// 0x1802ea500 FUN_1802ea500
// source: re/dump/decompile/0x1802ea500_FUN_1802ea500.c
// size: 38 bytes; thunk: false
// body sha256: 240c48f621e66c0473724467a75380a9598adc83d3f7f91065ad9dcd9e72537d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea500{
    "0x1802ea500",
    "FUN_1802ea500",
    R"F1802ea500S(undefined FUN_1802ea500())F1802ea500S",
    R"B1802ea500(// 0x1802ea500  FUN_1802ea500
// size=38 thunk=false
// signature: undefined FUN_1802ea500()
// status: ok


void FUN_1802ea500(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0x70);
  }
  return;
}


)B1802ea500",
    "240c48f621e66c0473724467a75380a9598adc83d3f7f91065ad9dcd9e72537d",
    R"F1802ea500C(FUN_1800668e0)F1802ea500C",
    R"F1802ea500D()F1802ea500D",
    R"F1802ea500T()F1802ea500T",
    R"F1802ea500F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802ea500F",
    R"F1802ea500U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea500U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea500() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea500", "FUN_1802ea500");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x70);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 240c48f621e66c0473724467a75380a9598adc83d3f7f91065ad9dcd9e72537d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea500(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea500;
}

// 0x1802ea526 FUN_1802ea526
// source: re/dump/decompile/0x1802ea526_FUN_1802ea526.c
// size: 46 bytes; thunk: false
// body sha256: 746a9af10317caa706509512b8a5d47c83f91efce5498b90413bc338622f34e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea526{
    "0x1802ea526",
    "FUN_1802ea526",
    R"F1802ea526S(undefined FUN_1802ea526())F1802ea526S",
    R"B1802ea526(// 0x1802ea526  FUN_1802ea526
// size=46 thunk=false
// signature: undefined FUN_1802ea526()
// status: ok


void FUN_1802ea526(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802ea526",
    "746a9af10317caa706509512b8a5d47c83f91efce5498b90413bc338622f34e7",
    R"F1802ea526C()F1802ea526C",
    R"F1802ea526D()F1802ea526D",
    R"F1802ea526T()F1802ea526T",
    R"F1802ea526F(10: if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
14: return;)F1802ea526F",
    R"F1802ea526U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea526U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea526() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea526", "FUN_1802ea526");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0xa0));
    // body sha256: 746a9af10317caa706509512b8a5d47c83f91efce5498b90413bc338622f34e7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea526(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x200) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x200) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea526;
}

// 0x1802ea554 FUN_1802ea554
// source: re/dump/decompile/0x1802ea554_FUN_1802ea554.c
// size: 46 bytes; thunk: false
// body sha256: 2d4462c02f2dbc42d782aaed55176dd9a835dfca3c92b7e9389487e2aeef8fb0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea554{
    "0x1802ea554",
    "FUN_1802ea554",
    R"F1802ea554S(undefined FUN_1802ea554())F1802ea554S",
    R"B1802ea554(// 0x1802ea554  FUN_1802ea554
// size=46 thunk=false
// signature: undefined FUN_1802ea554()
// status: ok


void FUN_1802ea554(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


)B1802ea554",
    "2d4462c02f2dbc42d782aaed55176dd9a835dfca3c92b7e9389487e2aeef8fb0",
    R"F1802ea554C()F1802ea554C",
    R"F1802ea554D()F1802ea554D",
    R"F1802ea554T()F1802ea554T",
    R"F1802ea554F(10: if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
14: return;)F1802ea554F",
    R"F1802ea554U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea554U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea554() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea554", "FUN_1802ea554");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0xa0));
    // body sha256: 2d4462c02f2dbc42d782aaed55176dd9a835dfca3c92b7e9389487e2aeef8fb0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea554(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea554;
}

// 0x1802ea582 FUN_1802ea582
// source: re/dump/decompile/0x1802ea582_FUN_1802ea582.c
// size: 38 bytes; thunk: false
// body sha256: 78464b1101ea9ae4ba779c59c33c393e62ba3e79196351dda22ffdef5febc5af
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea582{
    "0x1802ea582",
    "FUN_1802ea582",
    R"F1802ea582S(undefined FUN_1802ea582())F1802ea582S",
    R"B1802ea582(// 0x1802ea582  FUN_1802ea582
// size=38 thunk=false
// signature: undefined FUN_1802ea582()
// status: ok


void FUN_1802ea582(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800668e0(param_2 + 0x50);
  }
  return;
}


)B1802ea582",
    "78464b1101ea9ae4ba779c59c33c393e62ba3e79196351dda22ffdef5febc5af",
    R"F1802ea582C(FUN_1800668e0)F1802ea582C",
    R"F1802ea582D()F1802ea582D",
    R"F1802ea582T()F1802ea582T",
    R"F1802ea582F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802ea582F",
    R"F1802ea582U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea582U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea582() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea582", "FUN_1802ea582");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x50);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 78464b1101ea9ae4ba779c59c33c393e62ba3e79196351dda22ffdef5febc5af
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea582(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("FUN_1800668e0(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea582;
}

// 0x1802ea5a8 FUN_1802ea5a8
// source: re/dump/decompile/0x1802ea5a8_FUN_1802ea5a8.c
// size: 41 bytes; thunk: false
// body sha256: 49b866e46001f8865b5b8414a829611b47e3e44b2b5108523ab33d50b22138e2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea5a8{
    "0x1802ea5a8",
    "FUN_1802ea5a8",
    R"F1802ea5a8S(undefined FUN_1802ea5a8())F1802ea5a8S",
    R"B1802ea5a8(// 0x1802ea5a8  FUN_1802ea5a8
// size=41 thunk=false
// signature: undefined FUN_1802ea5a8()
// status: ok


void FUN_1802ea5a8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1800668e0(param_2 + 0xe8);
  }
  return;
}


)B1802ea5a8",
    "49b866e46001f8865b5b8414a829611b47e3e44b2b5108523ab33d50b22138e2",
    R"F1802ea5a8C(FUN_1800668e0)F1802ea5a8C",
    R"F1802ea5a8D()F1802ea5a8D",
    R"F1802ea5a8T()F1802ea5a8T",
    R"F1802ea5a8F(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802ea5a8F",
    R"F1802ea5a8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea5a8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea5a8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea5a8", "FUN_1802ea5a8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0xe8);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 49b866e46001f8865b5b8414a829611b47e3e44b2b5108523ab33d50b22138e2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea5a8(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("FUN_1800668e0(param_2 + 0xe8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea5a8;
}

// 0x1802ea5d1 FUN_1802ea5d1
// source: re/dump/decompile/0x1802ea5d1_FUN_1802ea5d1.c
// size: 41 bytes; thunk: false
// body sha256: 977671df5485c58c71b38beb755e66dfa112909e7611e35c80cb17dd6ed505fd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea5d1{
    "0x1802ea5d1",
    "FUN_1802ea5d1",
    R"F1802ea5d1S(undefined FUN_1802ea5d1())F1802ea5d1S",
    R"B1802ea5d1(// 0x1802ea5d1  FUN_1802ea5d1
// size=41 thunk=false
// signature: undefined FUN_1802ea5d1()
// status: ok


void FUN_1802ea5d1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_1800668e0(param_2 + 200);
  }
  return;
}


)B1802ea5d1",
    "977671df5485c58c71b38beb755e66dfa112909e7611e35c80cb17dd6ed505fd",
    R"F1802ea5d1C(FUN_1800668e0)F1802ea5d1C",
    R"F1802ea5d1D()F1802ea5d1D",
    R"F1802ea5d1T()F1802ea5d1T",
    R"F1802ea5d1F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802ea5d1F",
    R"F1802ea5d1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea5d1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea5d1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea5d1", "FUN_1802ea5d1");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 200);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 977671df5485c58c71b38beb755e66dfa112909e7611e35c80cb17dd6ed505fd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea5d1(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("FUN_1800668e0(param_2 + 200);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea5d1;
}

// 0x1802ea62a FUN_1802ea62a
// source: re/dump/decompile/0x1802ea62a_FUN_1802ea62a.c
// size: 43 bytes; thunk: false
// body sha256: 9179b800b78d8903bf182c15bd73065b7c4b6a0594f863d0c32d06771e5b0bc2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea62a{
    "0x1802ea62a",
    "FUN_1802ea62a",
    R"F1802ea62aS(undefined FUN_1802ea62a())F1802ea62aS",
    R"B1802ea62a(// 0x1802ea62a  FUN_1802ea62a
// size=43 thunk=false
// signature: undefined FUN_1802ea62a()
// status: ok


void FUN_1802ea62a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ea62a",
    "9179b800b78d8903bf182c15bd73065b7c4b6a0594f863d0c32d06771e5b0bc2",
    R"F1802ea62aC()F1802ea62aC",
    R"F1802ea62aD()F1802ea62aD",
    R"F1802ea62aT()F1802ea62aT",
    R"F1802ea62aF(10: if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
14: return;)F1802ea62aF",
    R"F1802ea62aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea62aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea62a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea62a", "FUN_1802ea62a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 9179b800b78d8903bf182c15bd73065b7c4b6a0594f863d0c32d06771e5b0bc2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea62a(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea62a;
}

// 0x1802ea655 FUN_1802ea655
// source: re/dump/decompile/0x1802ea655_FUN_1802ea655.c
// size: 43 bytes; thunk: false
// body sha256: c8507d07c9cf2882ad19a6311f8513a933e8b3415b82b66365dc85bcf8e43ce9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea655{
    "0x1802ea655",
    "FUN_1802ea655",
    R"F1802ea655S(undefined FUN_1802ea655())F1802ea655S",
    R"B1802ea655(// 0x1802ea655  FUN_1802ea655
// size=43 thunk=false
// signature: undefined FUN_1802ea655()
// status: ok


void FUN_1802ea655(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ea655",
    "c8507d07c9cf2882ad19a6311f8513a933e8b3415b82b66365dc85bcf8e43ce9",
    R"F1802ea655C()F1802ea655C",
    R"F1802ea655D()F1802ea655D",
    R"F1802ea655T()F1802ea655T",
    R"F1802ea655F(10: if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
14: return;)F1802ea655F",
    R"F1802ea655U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea655U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea655() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea655", "FUN_1802ea655");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: c8507d07c9cf2882ad19a6311f8513a933e8b3415b82b66365dc85bcf8e43ce9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea655(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x1000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea655;
}

// 0x1802ea68c FUN_1802ea68c
// source: re/dump/decompile/0x1802ea68c_FUN_1802ea68c.c
// size: 41 bytes; thunk: false
// body sha256: 992c29c3373880098a9e8ba37792c0c5e809dde91ca08ac75a7c10373beb743b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea68c{
    "0x1802ea68c",
    "FUN_1802ea68c",
    R"F1802ea68cS(undefined FUN_1802ea68c())F1802ea68cS",
    R"B1802ea68c(// 0x1802ea68c  FUN_1802ea68c
// size=41 thunk=false
// signature: undefined FUN_1802ea68c()
// status: ok


void FUN_1802ea68c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


)B1802ea68c",
    "992c29c3373880098a9e8ba37792c0c5e809dde91ca08ac75a7c10373beb743b",
    R"F1802ea68cC(FUN_1800668e0)F1802ea68cC",
    R"F1802ea68cD()F1802ea68cD",
    R"F1802ea68cT()F1802ea68cT",
    R"F1802ea68cF(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802ea68cF",
    R"F1802ea68cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea68cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea68c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea68c", "FUN_1802ea68c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", *(undefined8 *)(param_2 + 0x90));
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 992c29c3373880098a9e8ba37792c0c5e809dde91ca08ac75a7c10373beb743b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea68c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x90));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea68c;
}

// 0x1802ea6cd FUN_1802ea6cd
// source: re/dump/decompile/0x1802ea6cd_FUN_1802ea6cd.c
// size: 43 bytes; thunk: false
// body sha256: 5ae7345c3e0bc46abcf782a8a9a843c4bbeb55aed3947793485b24317fad5bb4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea6cd{
    "0x1802ea6cd",
    "FUN_1802ea6cd",
    R"F1802ea6cdS(undefined FUN_1802ea6cd())F1802ea6cdS",
    R"B1802ea6cd(// 0x1802ea6cd  FUN_1802ea6cd
// size=43 thunk=false
// signature: undefined FUN_1802ea6cd()
// status: ok


void FUN_1802ea6cd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ea6cd",
    "5ae7345c3e0bc46abcf782a8a9a843c4bbeb55aed3947793485b24317fad5bb4",
    R"F1802ea6cdC()F1802ea6cdC",
    R"F1802ea6cdD()F1802ea6cdD",
    R"F1802ea6cdT()F1802ea6cdT",
    R"F1802ea6cdF(10: if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
14: return;)F1802ea6cdF",
    R"F1802ea6cdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea6cdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea6cd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea6cd", "FUN_1802ea6cd");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 5ae7345c3e0bc46abcf782a8a9a843c4bbeb55aed3947793485b24317fad5bb4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea6cd(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x2000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea6cd;
}

// 0x1802ea6f8 FUN_1802ea6f8
// source: re/dump/decompile/0x1802ea6f8_FUN_1802ea6f8.c
// size: 43 bytes; thunk: false
// body sha256: 4a34e801e44ca98e0fa9cb5cdf50930d4fe86405b2ebeafa6c113183ea8350c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea6f8{
    "0x1802ea6f8",
    "FUN_1802ea6f8",
    R"F1802ea6f8S(undefined FUN_1802ea6f8())F1802ea6f8S",
    R"B1802ea6f8(// 0x1802ea6f8  FUN_1802ea6f8
// size=43 thunk=false
// signature: undefined FUN_1802ea6f8()
// status: ok


void FUN_1802ea6f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


)B1802ea6f8",
    "4a34e801e44ca98e0fa9cb5cdf50930d4fe86405b2ebeafa6c113183ea8350c4",
    R"F1802ea6f8C()F1802ea6f8C",
    R"F1802ea6f8D()F1802ea6f8D",
    R"F1802ea6f8T()F1802ea6f8T",
    R"F1802ea6f8F(10: if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
14: return;)F1802ea6f8F",
    R"F1802ea6f8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea6f8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea6f8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea6f8", "FUN_1802ea6f8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x48));
    // body sha256: 4a34e801e44ca98e0fa9cb5cdf50930d4fe86405b2ebeafa6c113183ea8350c4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea6f8(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x4000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea6f8;
}

// 0x1802ea723 FUN_1802ea723
// source: re/dump/decompile/0x1802ea723_FUN_1802ea723.c
// size: 38 bytes; thunk: false
// body sha256: 6d5ce2df73a79224cd94ed7901ca707b4cfb93ce4836105933898a1a2b1c4f5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea723{
    "0x1802ea723",
    "FUN_1802ea723",
    R"F1802ea723S(undefined FUN_1802ea723())F1802ea723S",
    R"B1802ea723(// 0x1802ea723  FUN_1802ea723
// size=38 thunk=false
// signature: undefined FUN_1802ea723()
// status: ok


void FUN_1802ea723(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_1800668e0(param_2 + 0x28);
  }
  return;
}


)B1802ea723",
    "6d5ce2df73a79224cd94ed7901ca707b4cfb93ce4836105933898a1a2b1c4f5c",
    R"F1802ea723C(FUN_1800668e0)F1802ea723C",
    R"F1802ea723D()F1802ea723D",
    R"F1802ea723T()F1802ea723T",
    R"F1802ea723F(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802ea723F",
    R"F1802ea723U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea723U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea723() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea723", "FUN_1802ea723");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x28);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 6d5ce2df73a79224cd94ed7901ca707b4cfb93ce4836105933898a1a2b1c4f5c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea723(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("FUN_1800668e0(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea723;
}

// 0x1802ea749 FUN_1802ea749
// source: re/dump/decompile/0x1802ea749_FUN_1802ea749.c
// size: 41 bytes; thunk: false
// body sha256: ae9683f574e3513ae433149e147e300eb553912445121b5f2ddb379c157c381c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea749{
    "0x1802ea749",
    "FUN_1802ea749",
    R"F1802ea749S(undefined FUN_1802ea749())F1802ea749S",
    R"B1802ea749(// 0x1802ea749  FUN_1802ea749
// size=41 thunk=false
// signature: undefined FUN_1802ea749()
// status: ok


void FUN_1802ea749(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_1800668e0(param_2 + 0x108);
  }
  return;
}


)B1802ea749",
    "ae9683f574e3513ae433149e147e300eb553912445121b5f2ddb379c157c381c",
    R"F1802ea749C(FUN_1800668e0)F1802ea749C",
    R"F1802ea749D()F1802ea749D",
    R"F1802ea749T()F1802ea749T",
    R"F1802ea749F(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802ea749F",
    R"F1802ea749U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea749U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea749() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea749", "FUN_1802ea749");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x108);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: ae9683f574e3513ae433149e147e300eb553912445121b5f2ddb379c157c381c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea749(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x20) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("FUN_1800668e0(param_2 + 0x108);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea749;
}

// 0x1802ea828 FUN_1802ea828
// source: re/dump/decompile/0x1802ea828_FUN_1802ea828.c
// size: 38 bytes; thunk: false
// body sha256: da28a44c3d12d81edb08dd375e77828574686a52a291bd8bc12ed94744d56725
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea828{
    "0x1802ea828",
    "FUN_1802ea828",
    R"F1802ea828S(undefined FUN_1802ea828())F1802ea828S",
    R"B1802ea828(// 0x1802ea828  FUN_1802ea828
// size=38 thunk=false
// signature: undefined FUN_1802ea828()
// status: ok


void FUN_1802ea828(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802ea828",
    "da28a44c3d12d81edb08dd375e77828574686a52a291bd8bc12ed94744d56725",
    R"F1802ea828C()F1802ea828C",
    R"F1802ea828D()F1802ea828D",
    R"F1802ea828T()F1802ea828T",
    R"F1802ea828F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802ea828F",
    R"F1802ea828U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea828U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea828() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea828", "FUN_1802ea828");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x40));
    // body sha256: da28a44c3d12d81edb08dd375e77828574686a52a291bd8bc12ed94744d56725
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea828(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea828;
}

// 0x1802ea84e FUN_1802ea84e
// source: re/dump/decompile/0x1802ea84e_FUN_1802ea84e.c
// size: 38 bytes; thunk: false
// body sha256: e001fb829fa83d5b41326994167fc5a8f117a77eaa5d487cc8cd9a238fc68568
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea84e{
    "0x1802ea84e",
    "FUN_1802ea84e",
    R"F1802ea84eS(undefined FUN_1802ea84e())F1802ea84eS",
    R"B1802ea84e(// 0x1802ea84e  FUN_1802ea84e
// size=38 thunk=false
// signature: undefined FUN_1802ea84e()
// status: ok


void FUN_1802ea84e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802ea84e",
    "e001fb829fa83d5b41326994167fc5a8f117a77eaa5d487cc8cd9a238fc68568",
    R"F1802ea84eC()F1802ea84eC",
    R"F1802ea84eD()F1802ea84eD",
    R"F1802ea84eT()F1802ea84eT",
    R"F1802ea84eF(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802ea84eF",
    R"F1802ea84eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea84eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea84e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea84e", "FUN_1802ea84e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x40));
    // body sha256: e001fb829fa83d5b41326994167fc5a8f117a77eaa5d487cc8cd9a238fc68568
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea84e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea84e;
}

// 0x1802ea930 FUN_1802ea930
// source: re/dump/decompile/0x1802ea930_FUN_1802ea930.c
// size: 38 bytes; thunk: false
// body sha256: 78e14bed4f7faa0d41d353573463c0d09856373af68428e28b03eb55a2badb5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea930{
    "0x1802ea930",
    "FUN_1802ea930",
    R"F1802ea930S(undefined FUN_1802ea930())F1802ea930S",
    R"B1802ea930(// 0x1802ea930  FUN_1802ea930
// size=38 thunk=false
// signature: undefined FUN_1802ea930()
// status: ok


void FUN_1802ea930(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802ea930",
    "78e14bed4f7faa0d41d353573463c0d09856373af68428e28b03eb55a2badb5c",
    R"F1802ea930C()F1802ea930C",
    R"F1802ea930D()F1802ea930D",
    R"F1802ea930T()F1802ea930T",
    R"F1802ea930F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802ea930F",
    R"F1802ea930U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea930U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea930() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea930", "FUN_1802ea930");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x78));
    // body sha256: 78e14bed4f7faa0d41d353573463c0d09856373af68428e28b03eb55a2badb5c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea930(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea930;
}

// 0x1802ea956 FUN_1802ea956
// source: re/dump/decompile/0x1802ea956_FUN_1802ea956.c
// size: 38 bytes; thunk: false
// body sha256: 12958620c6a92e35e942cad8361e774747f01efa055acbbc8695933fc36c33fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ea956{
    "0x1802ea956",
    "FUN_1802ea956",
    R"F1802ea956S(undefined FUN_1802ea956())F1802ea956S",
    R"B1802ea956(// 0x1802ea956  FUN_1802ea956
// size=38 thunk=false
// signature: undefined FUN_1802ea956()
// status: ok


void FUN_1802ea956(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


)B1802ea956",
    "12958620c6a92e35e942cad8361e774747f01efa055acbbc8695933fc36c33fc",
    R"F1802ea956C()F1802ea956C",
    R"F1802ea956D()F1802ea956D",
    R"F1802ea956T()F1802ea956T",
    R"F1802ea956F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802ea956F",
    R"F1802ea956U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ea956U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ea956() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ea956", "FUN_1802ea956");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x78));
    // body sha256: 12958620c6a92e35e942cad8361e774747f01efa055acbbc8695933fc36c33fc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ea956(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ea956;
}

// 0x1802eaa00 FUN_1802eaa00
// source: re/dump/decompile/0x1802eaa00_FUN_1802eaa00.c
// size: 43 bytes; thunk: false
// body sha256: e7e9fdaa728d028b60f51fe054085216c036bc6fbdc083e43c79fdfbe99676a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eaa00{
    "0x1802eaa00",
    "FUN_1802eaa00",
    R"F1802eaa00S(undefined FUN_1802eaa00())F1802eaa00S",
    R"B1802eaa00(// 0x1802eaa00  FUN_1802eaa00
// size=43 thunk=false
// signature: undefined FUN_1802eaa00()
// status: ok


void FUN_1802eaa00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802eaa00",
    "e7e9fdaa728d028b60f51fe054085216c036bc6fbdc083e43c79fdfbe99676a7",
    R"F1802eaa00C()F1802eaa00C",
    R"F1802eaa00D()F1802eaa00D",
    R"F1802eaa00T()F1802eaa00T",
    R"F1802eaa00F(10: if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
14: return;)F1802eaa00F",
    R"F1802eaa00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eaa00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eaa00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eaa00", "FUN_1802eaa00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: e7e9fdaa728d028b60f51fe054085216c036bc6fbdc083e43c79fdfbe99676a7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eaa00(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x400) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x400) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eaa00;
}

// 0x1802eaa2b FUN_1802eaa2b
// source: re/dump/decompile/0x1802eaa2b_FUN_1802eaa2b.c
// size: 43 bytes; thunk: false
// body sha256: ab70c3ab603f245a0197162f8dba5352e05b8b7f60fb04e6c16d2928e4355087
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eaa2b{
    "0x1802eaa2b",
    "FUN_1802eaa2b",
    R"F1802eaa2bS(undefined FUN_1802eaa2b())F1802eaa2bS",
    R"B1802eaa2b(// 0x1802eaa2b  FUN_1802eaa2b
// size=43 thunk=false
// signature: undefined FUN_1802eaa2b()
// status: ok


void FUN_1802eaa2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802eaa2b",
    "ab70c3ab603f245a0197162f8dba5352e05b8b7f60fb04e6c16d2928e4355087",
    R"F1802eaa2bC()F1802eaa2bC",
    R"F1802eaa2bD()F1802eaa2bD",
    R"F1802eaa2bT()F1802eaa2bT",
    R"F1802eaa2bF(10: if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
14: return;)F1802eaa2bF",
    R"F1802eaa2bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eaa2bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eaa2b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eaa2b", "FUN_1802eaa2b");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: ab70c3ab603f245a0197162f8dba5352e05b8b7f60fb04e6c16d2928e4355087
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eaa2b(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x800) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x800) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eaa2b;
}

// 0x1802eaace FUN_1802eaace
// source: re/dump/decompile/0x1802eaace_FUN_1802eaace.c
// size: 38 bytes; thunk: false
// body sha256: afde8c210633475c7d38a8d15d97e2f5562b350dbedf973c948786473db8f762
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eaace{
    "0x1802eaace",
    "FUN_1802eaace",
    R"F1802eaaceS(undefined FUN_1802eaace())F1802eaaceS",
    R"B1802eaace(// 0x1802eaace  FUN_1802eaace
// size=38 thunk=false
// signature: undefined FUN_1802eaace()
// status: ok


void FUN_1802eaace(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802eaace",
    "afde8c210633475c7d38a8d15d97e2f5562b350dbedf973c948786473db8f762",
    R"F1802eaaceC()F1802eaaceC",
    R"F1802eaaceD()F1802eaaceD",
    R"F1802eaaceT()F1802eaaceT",
    R"F1802eaaceF(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802eaaceF",
    R"F1802eaaceU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eaaceU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eaace() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eaace", "FUN_1802eaace");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: afde8c210633475c7d38a8d15d97e2f5562b350dbedf973c948786473db8f762
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eaace(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eaace;
}

// 0x1802eaaf4 FUN_1802eaaf4
// source: re/dump/decompile/0x1802eaaf4_FUN_1802eaaf4.c
// size: 38 bytes; thunk: false
// body sha256: 777dcc6a1ab8e4ab87a068e5e3fd7bd18c2e370a60c46bfb1c2ff37b2ca38bf0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eaaf4{
    "0x1802eaaf4",
    "FUN_1802eaaf4",
    R"F1802eaaf4S(undefined FUN_1802eaaf4())F1802eaaf4S",
    R"B1802eaaf4(// 0x1802eaaf4  FUN_1802eaaf4
// size=38 thunk=false
// signature: undefined FUN_1802eaaf4()
// status: ok


void FUN_1802eaaf4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802eaaf4",
    "777dcc6a1ab8e4ab87a068e5e3fd7bd18c2e370a60c46bfb1c2ff37b2ca38bf0",
    R"F1802eaaf4C()F1802eaaf4C",
    R"F1802eaaf4D()F1802eaaf4D",
    R"F1802eaaf4T()F1802eaaf4T",
    R"F1802eaaf4F(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802eaaf4F",
    R"F1802eaaf4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eaaf4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eaaf4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eaaf4", "FUN_1802eaaf4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 777dcc6a1ab8e4ab87a068e5e3fd7bd18c2e370a60c46bfb1c2ff37b2ca38bf0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eaaf4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eaaf4;
}

// 0x1802eab9e FUN_1802eab9e
// source: re/dump/decompile/0x1802eab9e_FUN_1802eab9e.c
// size: 38 bytes; thunk: false
// body sha256: 79101206a8a17497a57bba1724ea127920087d277a4a1abf628af0a465fd2889
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eab9e{
    "0x1802eab9e",
    "FUN_1802eab9e",
    R"F1802eab9eS(undefined FUN_1802eab9e())F1802eab9eS",
    R"B1802eab9e(// 0x1802eab9e  FUN_1802eab9e
// size=38 thunk=false
// signature: undefined FUN_1802eab9e()
// status: ok


void FUN_1802eab9e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802eab9e",
    "79101206a8a17497a57bba1724ea127920087d277a4a1abf628af0a465fd2889",
    R"F1802eab9eC()F1802eab9eC",
    R"F1802eab9eD()F1802eab9eD",
    R"F1802eab9eT()F1802eab9eT",
    R"F1802eab9eF(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802eab9eF",
    R"F1802eab9eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eab9eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eab9e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eab9e", "FUN_1802eab9e");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 79101206a8a17497a57bba1724ea127920087d277a4a1abf628af0a465fd2889
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eab9e(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eab9e;
}

// 0x1802eabc4 FUN_1802eabc4
// source: re/dump/decompile/0x1802eabc4_FUN_1802eabc4.c
// size: 43 bytes; thunk: false
// body sha256: 9bef0feecd9b2e921760a06699bafdcdb957b407f890cb68e7d77651769367ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eabc4{
    "0x1802eabc4",
    "FUN_1802eabc4",
    R"F1802eabc4S(undefined FUN_1802eabc4())F1802eabc4S",
    R"B1802eabc4(// 0x1802eabc4  FUN_1802eabc4
// size=43 thunk=false
// signature: undefined FUN_1802eabc4()
// status: ok


void FUN_1802eabc4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


)B1802eabc4",
    "9bef0feecd9b2e921760a06699bafdcdb957b407f890cb68e7d77651769367ac",
    R"F1802eabc4C()F1802eabc4C",
    R"F1802eabc4D()F1802eabc4D",
    R"F1802eabc4T()F1802eabc4T",
    R"F1802eabc4F(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802eabc4F",
    R"F1802eabc4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eabc4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eabc4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eabc4", "FUN_1802eabc4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x50));
    // body sha256: 9bef0feecd9b2e921760a06699bafdcdb957b407f890cb68e7d77651769367ac
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eabc4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eabc4;
}

// 0x1802eacc8 FUN_1802eacc8
// source: re/dump/decompile/0x1802eacc8_FUN_1802eacc8.c
// size: 22 bytes; thunk: false
// body sha256: 347993289bf6ad510664fc6d8e7874d36a3709af65e6a9329dfc0251f0648fde
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eacc8{
    "0x1802eacc8",
    "FUN_1802eacc8",
    R"F1802eacc8S(undefined FUN_1802eacc8())F1802eacc8S",
    R"B1802eacc8(// 0x1802eacc8  FUN_1802eacc8
// size=22 thunk=false
// signature: undefined FUN_1802eacc8()
// status: ok


void FUN_1802eacc8(void)

{
  DAT_18056ff80 = DAT_18056ff80 & 0xfffffffe;
  return;
}


)B1802eacc8",
    "347993289bf6ad510664fc6d8e7874d36a3709af65e6a9329dfc0251f0648fde",
    R"F1802eacc8C()F1802eacc8C",
    R"F1802eacc8D(DAT_18056ff80)F1802eacc8D",
    R"F1802eacc8T()F1802eacc8T",
    R"F1802eacc8F(11: return;)F1802eacc8F",
    R"F1802eacc8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056ff80.)F1802eacc8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eacc8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eacc8", "FUN_1802eacc8");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056ff80.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18056ff80", static_cast<const void*>(&image::DAT_18056ff80));
    // body sha256: 347993289bf6ad510664fc6d8e7874d36a3709af65e6a9329dfc0251f0648fde
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eacc8(void)");
        {
            trace.statement("DAT_18056ff80 = DAT_18056ff80 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802eacc8;
}

// 0x1802eacde FUN_1802eacde
// source: re/dump/decompile/0x1802eacde_FUN_1802eacde.c
// size: 46 bytes; thunk: false
// body sha256: dd5f8ad452892543aa71ea8240ba1f56682f4ff3bd1a97f43c08e0dfb02728f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eacde{
    "0x1802eacde",
    "FUN_1802eacde",
    R"F1802eacdeS(undefined FUN_1802eacde())F1802eacdeS",
    R"B1802eacde(// 0x1802eacde  FUN_1802eacde
// size=46 thunk=false
// signature: undefined FUN_1802eacde()
// status: ok


void FUN_1802eacde(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x168));
  }
  return;
}


)B1802eacde",
    "dd5f8ad452892543aa71ea8240ba1f56682f4ff3bd1a97f43c08e0dfb02728f8",
    R"F1802eacdeC()F1802eacdeC",
    R"F1802eacdeD()F1802eacdeD",
    R"F1802eacdeT()F1802eacdeT",
    R"F1802eacdeF(10: if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
14: return;)F1802eacdeF",
    R"F1802eacdeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eacdeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eacde() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eacde", "FUN_1802eacde");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x168));
    // body sha256: dd5f8ad452892543aa71ea8240ba1f56682f4ff3bd1a97f43c08e0dfb02728f8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eacde(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x80) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x80) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x168));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eacde;
}

// 0x1802ead0c FUN_1802ead0c
// source: re/dump/decompile/0x1802ead0c_FUN_1802ead0c.c
// size: 46 bytes; thunk: false
// body sha256: 4eb42c0db49f15b892903103a9f0a4ce86fc805ea3684db413e138abcf01f65f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ead0c{
    "0x1802ead0c",
    "FUN_1802ead0c",
    R"F1802ead0cS(undefined FUN_1802ead0c())F1802ead0cS",
    R"B1802ead0c(// 0x1802ead0c  FUN_1802ead0c
// size=46 thunk=false
// signature: undefined FUN_1802ead0c()
// status: ok


void FUN_1802ead0c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x168));
  }
  return;
}


)B1802ead0c",
    "4eb42c0db49f15b892903103a9f0a4ce86fc805ea3684db413e138abcf01f65f",
    R"F1802ead0cC()F1802ead0cC",
    R"F1802ead0cD()F1802ead0cD",
    R"F1802ead0cT()F1802ead0cT",
    R"F1802ead0cF(10: if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
14: return;)F1802ead0cF",
    R"F1802ead0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ead0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ead0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ead0c", "FUN_1802ead0c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0x168));
    // body sha256: 4eb42c0db49f15b892903103a9f0a4ce86fc805ea3684db413e138abcf01f65f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ead0c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x100) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x100) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x168));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ead0c;
}

// 0x1802ead46 FUN_1802ead46
// source: re/dump/decompile/0x1802ead46_FUN_1802ead46.c
// size: 41 bytes; thunk: false
// body sha256: c7998c47ff54e5baf2451ecfa9282ead723048ce8560ae7423b6856f6549b28f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ead46{
    "0x1802ead46",
    "FUN_1802ead46",
    R"F1802ead46S(undefined FUN_1802ead46())F1802ead46S",
    R"B1802ead46(// 0x1802ead46  FUN_1802ead46
// size=41 thunk=false
// signature: undefined FUN_1802ead46()
// status: ok


void FUN_1802ead46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


)B1802ead46",
    "c7998c47ff54e5baf2451ecfa9282ead723048ce8560ae7423b6856f6549b28f",
    R"F1802ead46C()F1802ead46C",
    R"F1802ead46D()F1802ead46D",
    R"F1802ead46T()F1802ead46T",
    R"F1802ead46F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802ead46F",
    R"F1802ead46U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ead46U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ead46() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ead46", "FUN_1802ead46");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0xf8));
    // body sha256: c7998c47ff54e5baf2451ecfa9282ead723048ce8560ae7423b6856f6549b28f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ead46(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ead46;
}

// 0x1802ead6f FUN_1802ead6f
// source: re/dump/decompile/0x1802ead6f_FUN_1802ead6f.c
// size: 41 bytes; thunk: false
// body sha256: 3d7423f41dc0dc7e234425a83c5ecf7c2cf6fc3dab1adfc3069372060a10c312
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802ead6f{
    "0x1802ead6f",
    "FUN_1802ead6f",
    R"F1802ead6fS(undefined FUN_1802ead6f())F1802ead6fS",
    R"B1802ead6f(// 0x1802ead6f  FUN_1802ead6f
// size=41 thunk=false
// signature: undefined FUN_1802ead6f()
// status: ok


void FUN_1802ead6f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


)B1802ead6f",
    "3d7423f41dc0dc7e234425a83c5ecf7c2cf6fc3dab1adfc3069372060a10c312",
    R"F1802ead6fC()F1802ead6fC",
    R"F1802ead6fD()F1802ead6fD",
    R"F1802ead6fT()F1802ead6fT",
    R"F1802ead6fF(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802ead6fF",
    R"F1802ead6fU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802ead6fU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802ead6f() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802ead6f", "FUN_1802ead6f");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0xf8));
    // body sha256: 3d7423f41dc0dc7e234425a83c5ecf7c2cf6fc3dab1adfc3069372060a10c312
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802ead6f(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x40) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802ead6f;
}

// 0x1802eadec FUN_1802eadec
// source: re/dump/decompile/0x1802eadec_FUN_1802eadec.c
// size: 41 bytes; thunk: false
// body sha256: 760936582f817122a65d32b2aefa92445b7bffb4d51902c1473596606fd79aa6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eadec{
    "0x1802eadec",
    "FUN_1802eadec",
    R"F1802eadecS(undefined FUN_1802eadec())F1802eadecS",
    R"B1802eadec(// 0x1802eadec  FUN_1802eadec
// size=41 thunk=false
// signature: undefined FUN_1802eadec()
// status: ok


void FUN_1802eadec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 0x128);
  }
  return;
}


)B1802eadec",
    "760936582f817122a65d32b2aefa92445b7bffb4d51902c1473596606fd79aa6",
    R"F1802eadecC()F1802eadecC",
    R"F1802eadecD()F1802eadecD",
    R"F1802eadecT()F1802eadecT",
    R"F1802eadecF(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802eadecF",
    R"F1802eadecU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eadecU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eadec() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eadec", "FUN_1802eadec");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x128);
    // body sha256: 760936582f817122a65d32b2aefa92445b7bffb4d51902c1473596606fd79aa6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eadec(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x128);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eadec;
}

// 0x1802eae15 FUN_1802eae15
// source: re/dump/decompile/0x1802eae15_FUN_1802eae15.c
// size: 38 bytes; thunk: false
// body sha256: a7bc09ccd6c386a4bfbc70b014a6dcbd151a322fc60911b903df81ce82224054
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eae15{
    "0x1802eae15",
    "FUN_1802eae15",
    R"F1802eae15S(undefined FUN_1802eae15())F1802eae15S",
    R"B1802eae15(// 0x1802eae15  FUN_1802eae15
// size=38 thunk=false
// signature: undefined FUN_1802eae15()
// status: ok


void FUN_1802eae15(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(param_2 + 0x78);
  }
  return;
}


)B1802eae15",
    "a7bc09ccd6c386a4bfbc70b014a6dcbd151a322fc60911b903df81ce82224054",
    R"F1802eae15C()F1802eae15C",
    R"F1802eae15D()F1802eae15D",
    R"F1802eae15T()F1802eae15T",
    R"F1802eae15F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802eae15F",
    R"F1802eae15U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eae15U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eae15() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eae15", "FUN_1802eae15");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x78);
    // body sha256: a7bc09ccd6c386a4bfbc70b014a6dcbd151a322fc60911b903df81ce82224054
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eae15(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eae15;
}

// 0x1802eae53 FUN_1802eae53
// source: re/dump/decompile/0x1802eae53_FUN_1802eae53.c
// size: 41 bytes; thunk: false
// body sha256: dcb6bc5eb3b1dce89babff8ac0e32f49a8c394068eb7467f2c1d1eaf326f6d41
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eae53{
    "0x1802eae53",
    "FUN_1802eae53",
    R"F1802eae53S(undefined FUN_1802eae53())F1802eae53S",
    R"B1802eae53(// 0x1802eae53  FUN_1802eae53
// size=41 thunk=false
// signature: undefined FUN_1802eae53()
// status: ok


void FUN_1802eae53(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


)B1802eae53",
    "dcb6bc5eb3b1dce89babff8ac0e32f49a8c394068eb7467f2c1d1eaf326f6d41",
    R"F1802eae53C()F1802eae53C",
    R"F1802eae53D()F1802eae53D",
    R"F1802eae53T()F1802eae53T",
    R"F1802eae53F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802eae53F",
    R"F1802eae53U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eae53U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eae53() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eae53", "FUN_1802eae53");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0xf8));
    // body sha256: dcb6bc5eb3b1dce89babff8ac0e32f49a8c394068eb7467f2c1d1eaf326f6d41
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eae53(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eae53;
}

// 0x1802eae7c FUN_1802eae7c
// source: re/dump/decompile/0x1802eae7c_FUN_1802eae7c.c
// size: 41 bytes; thunk: false
// body sha256: b964a3a864f569c34b6a68639767f229714655d51e801d14b77b37fe18d87641
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eae7c{
    "0x1802eae7c",
    "FUN_1802eae7c",
    R"F1802eae7cS(undefined FUN_1802eae7c())F1802eae7cS",
    R"B1802eae7c(// 0x1802eae7c  FUN_1802eae7c
// size=41 thunk=false
// signature: undefined FUN_1802eae7c()
// status: ok


void FUN_1802eae7c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


)B1802eae7c",
    "b964a3a864f569c34b6a68639767f229714655d51e801d14b77b37fe18d87641",
    R"F1802eae7cC()F1802eae7cC",
    R"F1802eae7cD()F1802eae7cD",
    R"F1802eae7cT()F1802eae7cT",
    R"F1802eae7cF(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802eae7cF",
    R"F1802eae7cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eae7cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eae7c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eae7c", "FUN_1802eae7c");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", *(undefined8 *)(param_2 + 0xf8));
    // body sha256: b964a3a864f569c34b6a68639767f229714655d51e801d14b77b37fe18d87641
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eae7c(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eae7c;
}

// 0x1802eaf11 FUN_1802eaf11
// source: re/dump/decompile/0x1802eaf11_FUN_1802eaf11.c
// size: 38 bytes; thunk: false
// body sha256: adad4eaf2a6822b1def3995e0cbe8a39d84e632c71d59ac736f35a63c437fb63
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eaf11{
    "0x1802eaf11",
    "FUN_1802eaf11",
    R"F1802eaf11S(undefined FUN_1802eaf11())F1802eaf11S",
    R"B1802eaf11(// 0x1802eaf11  FUN_1802eaf11
// size=38 thunk=false
// signature: undefined FUN_1802eaf11()
// status: ok


void FUN_1802eaf11(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x50);
  }
  return;
}


)B1802eaf11",
    "adad4eaf2a6822b1def3995e0cbe8a39d84e632c71d59ac736f35a63c437fb63",
    R"F1802eaf11C()F1802eaf11C",
    R"F1802eaf11D()F1802eaf11D",
    R"F1802eaf11T()F1802eaf11T",
    R"F1802eaf11F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802eaf11F",
    R"F1802eaf11U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eaf11U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eaf11() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eaf11", "FUN_1802eaf11");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x50);
    // body sha256: adad4eaf2a6822b1def3995e0cbe8a39d84e632c71d59ac736f35a63c437fb63
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eaf11(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eaf11;
}

// 0x1802eafcc FUN_1802eafcc
// source: re/dump/decompile/0x1802eafcc_FUN_1802eafcc.c
// size: 46 bytes; thunk: false
// body sha256: a246961122d35ad59b12a686fa5d3421a52371577fe84670f029a363761f855d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eafcc{
    "0x1802eafcc",
    "FUN_1802eafcc",
    R"F1802eafccS(undefined FUN_1802eafcc())F1802eafccS",
    R"B1802eafcc(// 0x1802eafcc  FUN_1802eafcc
// size=46 thunk=false
// signature: undefined FUN_1802eafcc()
// status: ok


void FUN_1802eafcc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


)B1802eafcc",
    "a246961122d35ad59b12a686fa5d3421a52371577fe84670f029a363761f855d",
    R"F1802eafccC()F1802eafccC",
    R"F1802eafccD()F1802eafccD",
    R"F1802eafccT()F1802eafccT",
    R"F1802eafccF(10: if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
14: return;)F1802eafccF",
    R"F1802eafccU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eafccU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eafcc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eafcc", "FUN_1802eafcc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x90);
    // body sha256: a246961122d35ad59b12a686fa5d3421a52371577fe84670f029a363761f855d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eafcc(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eafcc;
}

// 0x1802eb036 FUN_1802eb036
// source: re/dump/decompile/0x1802eb036_FUN_1802eb036.c
// size: 43 bytes; thunk: false
// body sha256: 610b545b74a43b080c96bd0b8ea270eb07c336ec34f46b61b648ea3a3607a572
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb036{
    "0x1802eb036",
    "FUN_1802eb036",
    R"F1802eb036S(undefined FUN_1802eb036())F1802eb036S",
    R"B1802eb036(// 0x1802eb036  FUN_1802eb036
// size=43 thunk=false
// signature: undefined FUN_1802eb036()
// status: ok


void FUN_1802eb036(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
    thunk_FUN_18021e290(param_2 + 0x70);
  }
  return;
}


)B1802eb036",
    "610b545b74a43b080c96bd0b8ea270eb07c336ec34f46b61b648ea3a3607a572",
    R"F1802eb036C()F1802eb036C",
    R"F1802eb036D()F1802eb036D",
    R"F1802eb036T()F1802eb036T",
    R"F1802eb036F(10: if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
14: return;)F1802eb036F",
    R"F1802eb036U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb036U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb036() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb036", "FUN_1802eb036");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x70);
    // body sha256: 610b545b74a43b080c96bd0b8ea270eb07c336ec34f46b61b648ea3a3607a572
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb036(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x10000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb036;
}

// 0x1802eb06d FUN_1802eb06d
// source: re/dump/decompile/0x1802eb06d_FUN_1802eb06d.c
// size: 46 bytes; thunk: false
// body sha256: a7b8d40b78415c1af5eb19a2e3a6b751f29852de2ea9ae90876e2f8cae33537c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb06d{
    "0x1802eb06d",
    "FUN_1802eb06d",
    R"F1802eb06dS(undefined FUN_1802eb06d())F1802eb06dS",
    R"B1802eb06d(// 0x1802eb06d  FUN_1802eb06d
// size=46 thunk=false
// signature: undefined FUN_1802eb06d()
// status: ok


void FUN_1802eb06d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;
    thunk_FUN_18021e290(param_2 + 0x370);
  }
  return;
}


)B1802eb06d",
    "a7b8d40b78415c1af5eb19a2e3a6b751f29852de2ea9ae90876e2f8cae33537c",
    R"F1802eb06dC()F1802eb06dC",
    R"F1802eb06dD()F1802eb06dD",
    R"F1802eb06dT()F1802eb06dT",
    R"F1802eb06dF(10: if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
14: return;)F1802eb06dF",
    R"F1802eb06dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb06dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb06d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb06d", "FUN_1802eb06d");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x370);
    // body sha256: a7b8d40b78415c1af5eb19a2e3a6b751f29852de2ea9ae90876e2f8cae33537c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb06d(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x40000) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x370);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb06d;
}

// 0x1802eb0b3 FUN_1802eb0b3
// source: re/dump/decompile/0x1802eb0b3_FUN_1802eb0b3.c
// size: 41 bytes; thunk: false
// body sha256: 37b5fbb9fd015adc32e89d03b0f141f3a26bb4d3b4ee4324a7cf802ceed5c113
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb0b3{
    "0x1802eb0b3",
    "FUN_1802eb0b3",
    R"F1802eb0b3S(undefined FUN_1802eb0b3())F1802eb0b3S",
    R"B1802eb0b3(// 0x1802eb0b3  FUN_1802eb0b3
// size=41 thunk=false
// signature: undefined FUN_1802eb0b3()
// status: ok


void FUN_1802eb0b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x1b0);
  }
  return;
}


)B1802eb0b3",
    "37b5fbb9fd015adc32e89d03b0f141f3a26bb4d3b4ee4324a7cf802ceed5c113",
    R"F1802eb0b3C()F1802eb0b3C",
    R"F1802eb0b3D()F1802eb0b3D",
    R"F1802eb0b3T()F1802eb0b3T",
    R"F1802eb0b3F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802eb0b3F",
    R"F1802eb0b3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb0b3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb0b3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb0b3", "FUN_1802eb0b3");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x1b0);
    // body sha256: 37b5fbb9fd015adc32e89d03b0f141f3a26bb4d3b4ee4324a7cf802ceed5c113
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb0b3(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 1) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x1b0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb0b3;
}

// 0x1802eb0dc FUN_1802eb0dc
// source: re/dump/decompile/0x1802eb0dc_FUN_1802eb0dc.c
// size: 41 bytes; thunk: false
// body sha256: f104645236099bf81e5520d5be37b06498db294a4e8d968b9a7d7a41b805ec2b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb0dc{
    "0x1802eb0dc",
    "FUN_1802eb0dc",
    R"F1802eb0dcS(undefined FUN_1802eb0dc())F1802eb0dcS",
    R"B1802eb0dc(// 0x1802eb0dc  FUN_1802eb0dc
// size=41 thunk=false
// signature: undefined FUN_1802eb0dc()
// status: ok


void FUN_1802eb0dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 400);
  }
  return;
}


)B1802eb0dc",
    "f104645236099bf81e5520d5be37b06498db294a4e8d968b9a7d7a41b805ec2b",
    R"F1802eb0dcC()F1802eb0dcC",
    R"F1802eb0dcD()F1802eb0dcD",
    R"F1802eb0dcT()F1802eb0dcT",
    R"F1802eb0dcF(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802eb0dcF",
    R"F1802eb0dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb0dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb0dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb0dc", "FUN_1802eb0dc");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 400);
    // body sha256: f104645236099bf81e5520d5be37b06498db294a4e8d968b9a7d7a41b805ec2b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb0dc(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 2) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(param_2 + 400);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb0dc;
}

// 0x1802eb105 FUN_1802eb105
// source: re/dump/decompile/0x1802eb105_FUN_1802eb105.c
// size: 41 bytes; thunk: false
// body sha256: 692b465b84d84d519ef1a12cb3d6d9de2f514c1afc2db4c2716719672ac9a873
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb105{
    "0x1802eb105",
    "FUN_1802eb105",
    R"F1802eb105S(undefined FUN_1802eb105())F1802eb105S",
    R"B1802eb105(// 0x1802eb105  FUN_1802eb105
// size=41 thunk=false
// signature: undefined FUN_1802eb105()
// status: ok


void FUN_1802eb105(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(param_2 + 0x170);
  }
  return;
}


)B1802eb105",
    "692b465b84d84d519ef1a12cb3d6d9de2f514c1afc2db4c2716719672ac9a873",
    R"F1802eb105C()F1802eb105C",
    R"F1802eb105D()F1802eb105D",
    R"F1802eb105T()F1802eb105T",
    R"F1802eb105F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802eb105F",
    R"F1802eb105U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb105U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb105() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb105", "FUN_1802eb105");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x170);
    // body sha256: 692b465b84d84d519ef1a12cb3d6d9de2f514c1afc2db4c2716719672ac9a873
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb105(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 4) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x170);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb105;
}

// 0x1802eb13a FUN_1802eb13a
// source: re/dump/decompile/0x1802eb13a_FUN_1802eb13a.c
// size: 41 bytes; thunk: false
// body sha256: 64d3d32bba195691cd2a4ea6b1863c23980d1f303c9eb5ad7e033874421620ea
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb13a{
    "0x1802eb13a",
    "FUN_1802eb13a",
    R"F1802eb13aS(undefined FUN_1802eb13a())F1802eb13aS",
    R"B1802eb13a(// 0x1802eb13a  FUN_1802eb13a
// size=41 thunk=false
// signature: undefined FUN_1802eb13a()
// status: ok


void FUN_1802eb13a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    FUN_1800668e0(param_2 + 0xe0);
  }
  return;
}


)B1802eb13a",
    "64d3d32bba195691cd2a4ea6b1863c23980d1f303c9eb5ad7e033874421620ea",
    R"F1802eb13aC(FUN_1800668e0)F1802eb13aC",
    R"F1802eb13aD()F1802eb13aD",
    R"F1802eb13aT()F1802eb13aT",
    R"F1802eb13aF(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802eb13aF",
    R"F1802eb13aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb13aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb13a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb13a", "FUN_1802eb13a");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0xe0);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 64d3d32bba195691cd2a4ea6b1863c23980d1f303c9eb5ad7e033874421620ea
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb13a(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 8) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("FUN_1800668e0(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb13a;
}

// 0x1802eb163 FUN_1802eb163
// source: re/dump/decompile/0x1802eb163_FUN_1802eb163.c
// size: 41 bytes; thunk: false
// body sha256: a72483b0c6f7745ca4f7a622a1d8ed30a61d7d8dae07bc4a904ad720edcb300b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb163{
    "0x1802eb163",
    "FUN_1802eb163",
    R"F1802eb163S(undefined FUN_1802eb163())F1802eb163S",
    R"B1802eb163(// 0x1802eb163  FUN_1802eb163
// size=41 thunk=false
// signature: undefined FUN_1802eb163()
// status: ok


void FUN_1802eb163(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    FUN_1800668e0(param_2 + 0x150);
  }
  return;
}


)B1802eb163",
    "a72483b0c6f7745ca4f7a622a1d8ed30a61d7d8dae07bc4a904ad720edcb300b",
    R"F1802eb163C(FUN_1800668e0)F1802eb163C",
    R"F1802eb163D()F1802eb163D",
    R"F1802eb163T()F1802eb163T",
    R"F1802eb163F(10: if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
14: return;)F1802eb163F",
    R"F1802eb163U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb163U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb163() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb163", "FUN_1802eb163");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800668e0", param_2 + 0x150);
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: a72483b0c6f7745ca4f7a622a1d8ed30a61d7d8dae07bc4a904ad720edcb300b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb163(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x10) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x10) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;");
                trace.statement("FUN_1800668e0(param_2 + 0x150);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb163;
}

// 0x1802eb1a4 FUN_1802eb1a4
// source: re/dump/decompile/0x1802eb1a4_FUN_1802eb1a4.c
// size: 41 bytes; thunk: false
// body sha256: f872af1281e826486ed4f566fcde8c8261c1e7f30f7de5a7494f964329846e6c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802eb1a4{
    "0x1802eb1a4",
    "FUN_1802eb1a4",
    R"F1802eb1a4S(undefined FUN_1802eb1a4())F1802eb1a4S",
    R"B1802eb1a4(// 0x1802eb1a4  FUN_1802eb1a4
// size=41 thunk=false
// signature: undefined FUN_1802eb1a4()
// status: ok


void FUN_1802eb1a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(param_2 + 0x230);
  }
  return;
}


)B1802eb1a4",
    "f872af1281e826486ed4f566fcde8c8261c1e7f30f7de5a7494f964329846e6c",
    R"F1802eb1a4C()F1802eb1a4C",
    R"F1802eb1a4D()F1802eb1a4D",
    R"F1802eb1a4T()F1802eb1a4T",
    R"F1802eb1a4F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802eb1a4F",
    R"F1802eb1a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802eb1a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802eb1a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802eb1a4", "FUN_1802eb1a4");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("thunk_FUN_18021e290", param_2 + 0x230);
    // body sha256: f872af1281e826486ed4f566fcde8c8261c1e7f30f7de5a7494f964329846e6c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802eb1a4(undefined8 param_1,longlong param_2)");
        {
            if (trace.checked_condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)", [&]() -> bool { return static_cast<bool>((*(uint *)(param_2 + 0x30) & 0x20) != 0); })) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x230);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802eb1a4;
}

}  // namespace sf::reconstructed
