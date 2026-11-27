// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x18030a2d0 FUN_18030a2d0
// source: re/dump/decompile/0x18030a2d0_FUN_18030a2d0.c
// size: 12 bytes; thunk: false
// body sha256: 24e081a08b072ab6054422f88e68848954337e2b8c47987b99618e4e06710046
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a2d0{
    "0x18030a2d0",
    "FUN_18030a2d0",
    R"F18030a2d0S(undefined FUN_18030a2d0())F18030a2d0S",
    R"B18030a2d0(// 0x18030a2d0  FUN_18030a2d0
// size=12 thunk=false
// signature: undefined FUN_18030a2d0()
// status: ok


void FUN_18030a2d0(void)

{
  FUN_18020e450(&DAT_1803e9e20);
  return;
}


)B18030a2d0",
    "24e081a08b072ab6054422f88e68848954337e2b8c47987b99618e4e06710046",
    R"F18030a2d0C(FUN_18020e450)F18030a2d0C",
    R"F18030a2d0D(DAT_1803e9e20)F18030a2d0D",
    R"F18030a2d0T()F18030a2d0T",
    R"F18030a2d0F(11: return;)F18030a2d0F",
    R"F18030a2d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9e20.)F18030a2d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a2d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a2d0", "FUN_18030a2d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9e20.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e9e20);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9e20", static_cast<const void*>(&image::DAT_1803e9e20));
    // body sha256: 24e081a08b072ab6054422f88e68848954337e2b8c47987b99618e4e06710046
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803e9e20);");
            trace.statement("return;");
        }
    return kFunction_0x18030a2d0;
}

// 0x18030a2e0 FUN_18030a2e0
// source: re/dump/decompile/0x18030a2e0_FUN_18030a2e0.c
// size: 12 bytes; thunk: false
// body sha256: c9eff024511b340cc91dd29d2d8273b25efd3ba182029baa7e0751c74e591b47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a2e0{
    "0x18030a2e0",
    "FUN_18030a2e0",
    R"F18030a2e0S(undefined FUN_18030a2e0())F18030a2e0S",
    R"B18030a2e0(// 0x18030a2e0  FUN_18030a2e0
// size=12 thunk=false
// signature: undefined FUN_18030a2e0()
// status: ok


void FUN_18030a2e0(void)

{
  FUN_18020e450(&DAT_1803eb340);
  return;
}


)B18030a2e0",
    "c9eff024511b340cc91dd29d2d8273b25efd3ba182029baa7e0751c74e591b47",
    R"F18030a2e0C(FUN_18020e450)F18030a2e0C",
    R"F18030a2e0D(DAT_1803eb340)F18030a2e0D",
    R"F18030a2e0T()F18030a2e0T",
    R"F18030a2e0F(11: return;)F18030a2e0F",
    R"F18030a2e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb340.)F18030a2e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a2e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a2e0", "FUN_18030a2e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb340.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803eb340);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803eb340", static_cast<const void*>(&image::DAT_1803eb340));
    // body sha256: c9eff024511b340cc91dd29d2d8273b25efd3ba182029baa7e0751c74e591b47
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803eb340);");
            trace.statement("return;");
        }
    return kFunction_0x18030a2e0;
}

// 0x18030a2f0 FUN_18030a2f0
// source: re/dump/decompile/0x18030a2f0_FUN_18030a2f0.c
// size: 12 bytes; thunk: false
// body sha256: e97d612da35aa868517a5764c2e45bb2c3c57c751d53ddb253be51e1b37dfde4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a2f0{
    "0x18030a2f0",
    "FUN_18030a2f0",
    R"F18030a2f0S(undefined FUN_18030a2f0())F18030a2f0S",
    R"B18030a2f0(// 0x18030a2f0  FUN_18030a2f0
// size=12 thunk=false
// signature: undefined FUN_18030a2f0()
// status: ok


void FUN_18030a2f0(void)

{
  FUN_18020e450(&DAT_1803e9e60);
  return;
}


)B18030a2f0",
    "e97d612da35aa868517a5764c2e45bb2c3c57c751d53ddb253be51e1b37dfde4",
    R"F18030a2f0C(FUN_18020e450)F18030a2f0C",
    R"F18030a2f0D(DAT_1803e9e60)F18030a2f0D",
    R"F18030a2f0T()F18030a2f0T",
    R"F18030a2f0F(11: return;)F18030a2f0F",
    R"F18030a2f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9e60.)F18030a2f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a2f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a2f0", "FUN_18030a2f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9e60.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e9e60);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9e60", static_cast<const void*>(&image::DAT_1803e9e60));
    // body sha256: e97d612da35aa868517a5764c2e45bb2c3c57c751d53ddb253be51e1b37dfde4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803e9e60);");
            trace.statement("return;");
        }
    return kFunction_0x18030a2f0;
}

// 0x18030a300 FUN_18030a300
// source: re/dump/decompile/0x18030a300_FUN_18030a300.c
// size: 25 bytes; thunk: false
// body sha256: 00bb950d8a86807d24e6354f6e51dd992a9c0461b83d9ad385ff9c508279abe7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a300{
    "0x18030a300",
    "FUN_18030a300",
    R"F18030a300S(undefined FUN_18030a300())F18030a300S",
    R"B18030a300(// 0x18030a300  FUN_18030a300
// size=25 thunk=false
// signature: undefined FUN_18030a300()
// status: ok


void FUN_18030a300(void)

{
  if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}


)B18030a300",
    "00bb950d8a86807d24e6354f6e51dd992a9c0461b83d9ad385ff9c508279abe7",
    R"F18030a300C()F18030a300C",
    R"F18030a300D(DAT_18056de98)F18030a300D",
    R"F18030a300T()F18030a300T",
    R"F18030a300F(10: if (DAT_18056de98 != 0) {
14: return;)F18030a300F",
    R"F18030a300U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056de98.)F18030a300U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a300() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a300", "FUN_18030a300");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056de98.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("terminate");
    trace.data_ref("DAT_18056de98", static_cast<const void*>(&image::DAT_18056de98));
    // body sha256: 00bb950d8a86807d24e6354f6e51dd992a9c0461b83d9ad385ff9c508279abe7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if (DAT_18056de98 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_18056de98 != 0); })) {
                trace.statement("terminate();");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a300;
}

// 0x18030a320 FUN_18030a320
// source: re/dump/decompile/0x18030a320_FUN_18030a320.c
// size: 25 bytes; thunk: false
// body sha256: 1b22bd0e93e17dae52d2872b080acc27e0b5166e8731e885ec1530e4b06894d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a320{
    "0x18030a320",
    "FUN_18030a320",
    R"F18030a320S(undefined FUN_18030a320())F18030a320S",
    R"B18030a320(// 0x18030a320  FUN_18030a320
// size=25 thunk=false
// signature: undefined FUN_18030a320()
// status: ok


void FUN_18030a320(void)

{
  if (DAT_1805c3920 != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}


)B18030a320",
    "1b22bd0e93e17dae52d2872b080acc27e0b5166e8731e885ec1530e4b06894d7",
    R"F18030a320C()F18030a320C",
    R"F18030a320D(DAT_1805c3920)F18030a320D",
    R"F18030a320T()F18030a320T",
    R"F18030a320F(10: if (DAT_1805c3920 != 0) {
14: return;)F18030a320F",
    R"F18030a320U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c3920.)F18030a320U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a320() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a320", "FUN_18030a320");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c3920.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("terminate");
    trace.data_ref("DAT_1805c3920", static_cast<const void*>(&image::DAT_1805c3920));
    // body sha256: 1b22bd0e93e17dae52d2872b080acc27e0b5166e8731e885ec1530e4b06894d7
    // Structured control-flow trace derived from the decompiled body:
        {
            if (trace.checked_condition("if (DAT_1805c3920 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1805c3920 != 0); })) {
                trace.statement("terminate();");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a320;
}

// 0x18030a340 FUN_18030a340
// source: re/dump/decompile/0x18030a340_FUN_18030a340.c
// size: 189 bytes; thunk: false
// body sha256: dcfff9dacf094d7b0b0704c79f59c3c587880d649d93bc0fc8dd44da01eb320e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a340{
    "0x18030a340",
    "FUN_18030a340",
    R"F18030a340S(undefined FUN_18030a340())F18030a340S",
    R"B18030a340(// 0x18030a340  FUN_18030a340
// size=189 thunk=false
// signature: undefined FUN_18030a340()
// status: ok


void FUN_18030a340(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  pvVar3 = DAT_1803e9e50;
  pvVar2 = DAT_1803e9e48;
  if (DAT_1803e9e48 != (void *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x38)) {
      FUN_18020e450(pvVar2);
    }
    pvVar2 = DAT_1803e9e48;
    puVar4 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803e9e58 - (longlong)DAT_1803e9e48 >> 3) * 8)) {
      pvVar2 = *(void **)((longlong)DAT_1803e9e48 + -8);
      pvVar3 = (void *)((longlong)DAT_1803e9e48 + (-8 - (longlong)pvVar2));
      puVar4 = auStack_28;
      if ((void *)0x1f < pvVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pvVar2 = pvVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x18030a3dc;
    free(pvVar2);
    DAT_1803e9e48 = (void *)0x0;
    DAT_1803e9e50 = (void *)0x0;
    DAT_1803e9e58 = 0;
  }
  return;
}


)B18030a340",
    "dcfff9dacf094d7b0b0704c79f59c3c587880d649d93bc0fc8dd44da01eb320e",
    R"F18030a340C(FUN_18020e450)F18030a340C",
    R"F18030a340D(DAT_1803e9e48
DAT_1803e9e50
DAT_1803e9e58)F18030a340D",
    R"F18030a340T()F18030a340T",
    R"F18030a340F(19: if (DAT_1803e9e48 != (void *)0x0) {
20: for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x38)) {
25: if (0xfff < (ulonglong)((DAT_1803e9e58 - (longlong)DAT_1803e9e48 >> 3) * 8)) {
29: if ((void *)0x1f < pvVar3) {
42: return;)F18030a340F",
    R"F18030a340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9e58.
TODO: resolve the indirect call in body 30: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 31: (*pcVar1)(5);.)F18030a340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a340", "FUN_18030a340");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * pvVar2{};
    [[maybe_unused]] void * pvVar3{};
    [[maybe_unused]] std::uint8_t * puVar4{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[24]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9e48.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9e50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9e58.
    // TODO: resolve the indirect call in body 30: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 31: (*pcVar1)(5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (0xfff < (ulonglong)((DAT_1803e9e58 - (longlong)DAT_1803e9e48 >> 3) * 8)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_18020e450", pvVar2);
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", pvVar2);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9e48", static_cast<const void*>(&image::DAT_1803e9e48));
    trace.data_ref("DAT_1803e9e50", static_cast<const void*>(&image::DAT_1803e9e50));
    trace.data_ref("DAT_1803e9e58", static_cast<const void*>(&image::DAT_1803e9e58));
    // body sha256: dcfff9dacf094d7b0b0704c79f59c3c587880d649d93bc0fc8dd44da01eb320e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *pvVar2;");
            trace.statement("void *pvVar3;");
            trace.statement("undefined1 *puVar4;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [24];");
            trace.statement("pvVar3 = DAT_1803e9e50;");
            trace.statement("pvVar2 = DAT_1803e9e48;");
            if (trace.checked_condition("if (DAT_1803e9e48 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803e9e48, 0) != (void *)0x0); })) {
                for (auto loop = trace.checked_loop("for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x38))", [&]() -> bool { return static_cast<bool>(pvVar2 = (void *)(reinterpret_cast<std::int64_t>(pvVar2) + 0x38)); }); loop.next(); ) {
                    trace.statement("FUN_18020e450(pvVar2);");
                }
                trace.statement("pvVar2 = DAT_1803e9e48;");
                trace.statement("puVar4 = auStack_28;");
                if (trace.condition("if (0xfff < (ulonglong)((DAT_1803e9e58 - (longlong)DAT_1803e9e48 >> 3) * 8))")) {
                    trace.statement("pvVar2 = *(void **)((longlong)DAT_1803e9e48 + -8);");
                    trace.statement("pvVar3 = (void *)((longlong)DAT_1803e9e48 + (-8 - (longlong)pvVar2));");
                    trace.statement("puVar4 = auStack_28;");
                    if (trace.checked_condition("if ((void *)0x1f < pvVar3)", [&]() -> bool { return static_cast<bool>((void *)0x1f < pvVar3); })) {
                        trace.statement("pcVar1 = (code *)swi(0x29);");
                        trace.statement("(*pcVar1)(5);");
                        trace.statement("pvVar2 = pvVar3;");
                        trace.statement("puVar4 = auStack_20;");
                    }
                }
                trace.statement("*(undefined8 *)(puVar4 + -8) = 0x18030a3dc;");
                trace.statement("free(pvVar2);");
                trace.statement("DAT_1803e9e48 = (void *)0x0;");
                trace.statement("DAT_1803e9e50 = (void *)0x0;");
                trace.statement("DAT_1803e9e58 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a340;
}

// 0x18030a400 FUN_18030a400
// source: re/dump/decompile/0x18030a400_FUN_18030a400.c
// size: 12 bytes; thunk: false
// body sha256: 4546342d052f123b531bb1ba946b19c9c290e3c88102dccc683e11e4a0c31fa3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a400{
    "0x18030a400",
    "FUN_18030a400",
    R"F18030a400S(undefined FUN_18030a400())F18030a400S",
    R"B18030a400(// 0x18030a400  FUN_18030a400
// size=12 thunk=false
// signature: undefined FUN_18030a400()
// status: ok


void FUN_18030a400(void)

{
  FUN_18020ad50(&DAT_1803eb7b8);
  return;
}


)B18030a400",
    "4546342d052f123b531bb1ba946b19c9c290e3c88102dccc683e11e4a0c31fa3",
    R"F18030a400C(FUN_18020ad50)F18030a400C",
    R"F18030a400D(DAT_1803eb7b8)F18030a400D",
    R"F18030a400T()F18030a400T",
    R"F18030a400F(11: return;)F18030a400F",
    R"F18030a400U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7b8.)F18030a400U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a400() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a400", "FUN_18030a400");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7b8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020ad50", &image::DAT_1803eb7b8);
    trace.call_target("FUN_18020ad50", reinterpret_cast<const void*>(&image::FUN_18020ad50));
    trace.data_ref("DAT_1803eb7b8", static_cast<const void*>(&image::DAT_1803eb7b8));
    // body sha256: 4546342d052f123b531bb1ba946b19c9c290e3c88102dccc683e11e4a0c31fa3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020ad50(&DAT_1803eb7b8);");
            trace.statement("return;");
        }
    return kFunction_0x18030a400;
}

// 0x18030a410 FUN_18030a410
// source: re/dump/decompile/0x18030a410_FUN_18030a410.c
// size: 12 bytes; thunk: false
// body sha256: 254bbf92a03469045310c3f93d7a751b24f10982cbaa41d2fb31a47faa8b4c11
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a410{
    "0x18030a410",
    "FUN_18030a410",
    R"F18030a410S(undefined FUN_18030a410())F18030a410S",
    R"B18030a410(// 0x18030a410  FUN_18030a410
// size=12 thunk=false
// signature: undefined FUN_18030a410()
// status: ok


void FUN_18030a410(void)

{
  FUN_18020d5c0(&DAT_1803e9f60);
  return;
}


)B18030a410",
    "254bbf92a03469045310c3f93d7a751b24f10982cbaa41d2fb31a47faa8b4c11",
    R"F18030a410C(FUN_18020d5c0)F18030a410C",
    R"F18030a410D(DAT_1803e9f60)F18030a410D",
    R"F18030a410T()F18030a410T",
    R"F18030a410F(11: return;)F18030a410F",
    R"F18030a410U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9f60.)F18030a410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a410() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a410", "FUN_18030a410");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9f60.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020d5c0", &image::DAT_1803e9f60);
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.data_ref("DAT_1803e9f60", static_cast<const void*>(&image::DAT_1803e9f60));
    // body sha256: 254bbf92a03469045310c3f93d7a751b24f10982cbaa41d2fb31a47faa8b4c11
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020d5c0(&DAT_1803e9f60);");
            trace.statement("return;");
        }
    return kFunction_0x18030a410;
}

// 0x18030a420 FUN_18030a420
// source: re/dump/decompile/0x18030a420_FUN_18030a420.c
// size: 48 bytes; thunk: false
// body sha256: ceafb69dcc96ae7635308a4051f97b8c5a0be91ff85d3394ecb5a227bf515936
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a420{
    "0x18030a420",
    "FUN_18030a420",
    R"F18030a420S(undefined FUN_18030a420())F18030a420S",
    R"B18030a420(// 0x18030a420  FUN_18030a420
// size=48 thunk=false
// signature: undefined FUN_18030a420()
// status: ok


void FUN_18030a420(void)

{
  void *_Memory;
  
  FUN_18021d430(&DAT_18056dea0);
  _Memory = DAT_18056dea0;
  DAT_18056dea0 = (void *)0x0;
  free(_Memory);
  return;
}


)B18030a420",
    "ceafb69dcc96ae7635308a4051f97b8c5a0be91ff85d3394ecb5a227bf515936",
    R"F18030a420C(FUN_18021d430)F18030a420C",
    R"F18030a420D(DAT_18056dea0)F18030a420D",
    R"F18030a420T()F18030a420T",
    R"F18030a420F(16: return;)F18030a420F",
    R"F18030a420U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056dea0.)F18030a420U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a420() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a420", "FUN_18030a420");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void * _Memory{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056dea0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021d430", &image::DAT_18056dea0);
    trace.call_arguments("free", _Memory);
    trace.call_target("FUN_18021d430", reinterpret_cast<const void*>(&image::FUN_18021d430));
    trace.data_ref("DAT_18056dea0", static_cast<const void*>(&image::DAT_18056dea0));
    // body sha256: ceafb69dcc96ae7635308a4051f97b8c5a0be91ff85d3394ecb5a227bf515936
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("void *_Memory;");
            trace.statement("FUN_18021d430(&DAT_18056dea0);");
            trace.statement("_Memory = DAT_18056dea0;");
            trace.statement("DAT_18056dea0 = (void *)0x0;");
            trace.statement("free(_Memory);");
            trace.statement("return;");
        }
    return kFunction_0x18030a420;
}

// 0x18030a450 FUN_18030a450
// source: re/dump/decompile/0x18030a450_FUN_18030a450.c
// size: 12 bytes; thunk: false
// body sha256: eabf13b417409a97352cd063e79533f312ed639a0ab9fe904e8e3db2e3797d01
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a450{
    "0x18030a450",
    "FUN_18030a450",
    R"F18030a450S(undefined FUN_18030a450())F18030a450S",
    R"B18030a450(// 0x18030a450  FUN_18030a450
// size=12 thunk=false
// signature: undefined FUN_18030a450()
// status: ok


void FUN_18030a450(void)

{
  FUN_18020d5c0(&DAT_1803e9d08);
  return;
}


)B18030a450",
    "eabf13b417409a97352cd063e79533f312ed639a0ab9fe904e8e3db2e3797d01",
    R"F18030a450C(FUN_18020d5c0)F18030a450C",
    R"F18030a450D(DAT_1803e9d08)F18030a450D",
    R"F18030a450T()F18030a450T",
    R"F18030a450F(11: return;)F18030a450F",
    R"F18030a450U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9d08.)F18030a450U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a450() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a450", "FUN_18030a450");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9d08.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020d5c0", &image::DAT_1803e9d08);
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.data_ref("DAT_1803e9d08", static_cast<const void*>(&image::DAT_1803e9d08));
    // body sha256: eabf13b417409a97352cd063e79533f312ed639a0ab9fe904e8e3db2e3797d01
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020d5c0(&DAT_1803e9d08);");
            trace.statement("return;");
        }
    return kFunction_0x18030a450;
}

// 0x18030a460 FUN_18030a460
// source: re/dump/decompile/0x18030a460_FUN_18030a460.c
// size: 12 bytes; thunk: false
// body sha256: 78ca017be4d7ee1786f9bdf6e7910d580a2c23c909289764192387d287e4a57b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a460{
    "0x18030a460",
    "FUN_18030a460",
    R"F18030a460S(undefined FUN_18030a460())F18030a460S",
    R"B18030a460(// 0x18030a460  FUN_18030a460
// size=12 thunk=false
// signature: undefined FUN_18030a460()
// status: ok


void FUN_18030a460(void)

{
  FUN_18020e450(&DAT_1803e9f08);
  return;
}


)B18030a460",
    "78ca017be4d7ee1786f9bdf6e7910d580a2c23c909289764192387d287e4a57b",
    R"F18030a460C(FUN_18020e450)F18030a460C",
    R"F18030a460D(DAT_1803e9f08)F18030a460D",
    R"F18030a460T()F18030a460T",
    R"F18030a460F(11: return;)F18030a460F",
    R"F18030a460U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9f08.)F18030a460U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a460() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a460", "FUN_18030a460");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9f08.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e9f08);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9f08", static_cast<const void*>(&image::DAT_1803e9f08));
    // body sha256: 78ca017be4d7ee1786f9bdf6e7910d580a2c23c909289764192387d287e4a57b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803e9f08);");
            trace.statement("return;");
        }
    return kFunction_0x18030a460;
}

// 0x18030a470 FUN_18030a470
// source: re/dump/decompile/0x18030a470_FUN_18030a470.c
// size: 12 bytes; thunk: false
// body sha256: 74fd0c1ab7743b5fbecea72a5e1147be348520ffa17e9ea08afcd4b20b109f7d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a470{
    "0x18030a470",
    "FUN_18030a470",
    R"F18030a470S(undefined FUN_18030a470())F18030a470S",
    R"B18030a470(// 0x18030a470  FUN_18030a470
// size=12 thunk=false
// signature: undefined FUN_18030a470()
// status: ok


void FUN_18030a470(void)

{
  FUN_18020e450(s_Ready_1803e9eb8);
  return;
}


)B18030a470",
    "74fd0c1ab7743b5fbecea72a5e1147be348520ffa17e9ea08afcd4b20b109f7d",
    R"F18030a470C(FUN_18020e450)F18030a470C",
    R"F18030a470D()F18030a470D",
    R"F18030a470T()F18030a470T",
    R"F18030a470F(11: return;)F18030a470F",
    R"F18030a470U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030a470U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a470() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a470", "FUN_18030a470");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for FUN_18020e450: s_Ready_1803e9eb8 [reason: ambiguous operand type]
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    // body sha256: 74fd0c1ab7743b5fbecea72a5e1147be348520ffa17e9ea08afcd4b20b109f7d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(s_Ready_1803e9eb8);");
            trace.statement("return;");
        }
    return kFunction_0x18030a470;
}

// 0x18030a480 FUN_18030a480
// source: re/dump/decompile/0x18030a480_FUN_18030a480.c
// size: 12 bytes; thunk: false
// body sha256: b6f72617f0f4bb6500e13f40743be1acbca9fa2ab1789738e908d58e9af7b54e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a480{
    "0x18030a480",
    "FUN_18030a480",
    R"F18030a480S(undefined FUN_18030a480())F18030a480S",
    R"B18030a480(// 0x18030a480  FUN_18030a480
// size=12 thunk=false
// signature: undefined FUN_18030a480()
// status: ok


void FUN_18030a480(void)

{
  FUN_18020e450(&DAT_1803e9f28);
  return;
}


)B18030a480",
    "b6f72617f0f4bb6500e13f40743be1acbca9fa2ab1789738e908d58e9af7b54e",
    R"F18030a480C(FUN_18020e450)F18030a480C",
    R"F18030a480D(DAT_1803e9f28)F18030a480D",
    R"F18030a480T()F18030a480T",
    R"F18030a480F(11: return;)F18030a480F",
    R"F18030a480U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9f28.)F18030a480U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a480() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a480", "FUN_18030a480");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9f28.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e9f28);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9f28", static_cast<const void*>(&image::DAT_1803e9f28));
    // body sha256: b6f72617f0f4bb6500e13f40743be1acbca9fa2ab1789738e908d58e9af7b54e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803e9f28);");
            trace.statement("return;");
        }
    return kFunction_0x18030a480;
}

// 0x18030a490 FUN_18030a490
// source: re/dump/decompile/0x18030a490_FUN_18030a490.c
// size: 12 bytes; thunk: false
// body sha256: 23a2efd2b71b575c0aa3d14239d9d4b16844cad4ee8ea300179c359476995f81
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a490{
    "0x18030a490",
    "FUN_18030a490",
    R"F18030a490S(undefined FUN_18030a490())F18030a490S",
    R"B18030a490(// 0x18030a490  FUN_18030a490
// size=12 thunk=false
// signature: undefined FUN_18030a490()
// status: ok


void FUN_18030a490(void)

{
  FUN_18020ac70(&DAT_1803e9ed8);
  return;
}


)B18030a490",
    "23a2efd2b71b575c0aa3d14239d9d4b16844cad4ee8ea300179c359476995f81",
    R"F18030a490C(FUN_18020ac70)F18030a490C",
    R"F18030a490D(DAT_1803e9ed8)F18030a490D",
    R"F18030a490T()F18030a490T",
    R"F18030a490F(11: return;)F18030a490F",
    R"F18030a490U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9ed8.)F18030a490U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a490() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a490", "FUN_18030a490");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9ed8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020ac70", &image::DAT_1803e9ed8);
    trace.call_target("FUN_18020ac70", reinterpret_cast<const void*>(&image::FUN_18020ac70));
    trace.data_ref("DAT_1803e9ed8", static_cast<const void*>(&image::DAT_1803e9ed8));
    // body sha256: 23a2efd2b71b575c0aa3d14239d9d4b16844cad4ee8ea300179c359476995f81
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020ac70(&DAT_1803e9ed8);");
            trace.statement("return;");
        }
    return kFunction_0x18030a490;
}

// 0x18030a4a0 FUN_18030a4a0
// source: re/dump/decompile/0x18030a4a0_FUN_18030a4a0.c
// size: 12 bytes; thunk: false
// body sha256: 0e598e16675e85f55151c323d1414a1cae1d5dc047468ef556a492e2c759e64e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a4a0{
    "0x18030a4a0",
    "FUN_18030a4a0",
    R"F18030a4a0S(undefined FUN_18030a4a0())F18030a4a0S",
    R"B18030a4a0(// 0x18030a4a0  FUN_18030a4a0
// size=12 thunk=false
// signature: undefined FUN_18030a4a0()
// status: ok


void FUN_18030a4a0(void)

{
  FUN_18020d5c0(&DAT_1803e9ef0);
  return;
}


)B18030a4a0",
    "0e598e16675e85f55151c323d1414a1cae1d5dc047468ef556a492e2c759e64e",
    R"F18030a4a0C(FUN_18020d5c0)F18030a4a0C",
    R"F18030a4a0D(DAT_1803e9ef0)F18030a4a0D",
    R"F18030a4a0T()F18030a4a0T",
    R"F18030a4a0F(11: return;)F18030a4a0F",
    R"F18030a4a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9ef0.)F18030a4a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a4a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a4a0", "FUN_18030a4a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9ef0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020d5c0", &image::DAT_1803e9ef0);
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.data_ref("DAT_1803e9ef0", static_cast<const void*>(&image::DAT_1803e9ef0));
    // body sha256: 0e598e16675e85f55151c323d1414a1cae1d5dc047468ef556a492e2c759e64e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020d5c0(&DAT_1803e9ef0);");
            trace.statement("return;");
        }
    return kFunction_0x18030a4a0;
}

// 0x18030a4b0 FUN_18030a4b0
// source: re/dump/decompile/0x18030a4b0_FUN_18030a4b0.c
// size: 12 bytes; thunk: false
// body sha256: 2d8edfdbc2cd5ed466c7d92d5e4d027307e0716659a11d0fac5db946891e3f03
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a4b0{
    "0x18030a4b0",
    "FUN_18030a4b0",
    R"F18030a4b0S(undefined FUN_18030a4b0())F18030a4b0S",
    R"B18030a4b0(// 0x18030a4b0  FUN_18030a4b0
// size=12 thunk=false
// signature: undefined FUN_18030a4b0()
// status: ok


void FUN_18030a4b0(void)

{
  FUN_18020e450(s_models_player_1803ea2d8);
  return;
}


)B18030a4b0",
    "2d8edfdbc2cd5ed466c7d92d5e4d027307e0716659a11d0fac5db946891e3f03",
    R"F18030a4b0C(FUN_18020e450)F18030a4b0C",
    R"F18030a4b0D()F18030a4b0D",
    R"F18030a4b0T()F18030a4b0T",
    R"F18030a4b0F(11: return;)F18030a4b0F",
    R"F18030a4b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030a4b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a4b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a4b0", "FUN_18030a4b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for FUN_18020e450: s_models_player_1803ea2d8 [reason: ambiguous operand type]
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    // body sha256: 2d8edfdbc2cd5ed466c7d92d5e4d027307e0716659a11d0fac5db946891e3f03
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(s_models_player_1803ea2d8);");
            trace.statement("return;");
        }
    return kFunction_0x18030a4b0;
}

// 0x18030a4c0 FUN_18030a4c0
// source: re/dump/decompile/0x18030a4c0_FUN_18030a4c0.c
// size: 12 bytes; thunk: false
// body sha256: 7072e4225ed281f09d30f7589197ca8adb2c214a6dcd3c5e21b3e79566a316ca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a4c0{
    "0x18030a4c0",
    "FUN_18030a4c0",
    R"F18030a4c0S(undefined FUN_18030a4c0())F18030a4c0S",
    R"B18030a4c0(// 0x18030a4c0  FUN_18030a4c0
// size=12 thunk=false
// signature: undefined FUN_18030a4c0()
// status: ok


void FUN_18030a4c0(void)

{
  FUN_18020d5c0(&DAT_1803ea200);
  return;
}


)B18030a4c0",
    "7072e4225ed281f09d30f7589197ca8adb2c214a6dcd3c5e21b3e79566a316ca",
    R"F18030a4c0C(FUN_18020d5c0)F18030a4c0C",
    R"F18030a4c0D(DAT_1803ea200)F18030a4c0D",
    R"F18030a4c0T()F18030a4c0T",
    R"F18030a4c0F(11: return;)F18030a4c0F",
    R"F18030a4c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea200.)F18030a4c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a4c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a4c0", "FUN_18030a4c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea200.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020d5c0", &image::DAT_1803ea200);
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.data_ref("DAT_1803ea200", static_cast<const void*>(&image::DAT_1803ea200));
    // body sha256: 7072e4225ed281f09d30f7589197ca8adb2c214a6dcd3c5e21b3e79566a316ca
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020d5c0(&DAT_1803ea200);");
            trace.statement("return;");
        }
    return kFunction_0x18030a4c0;
}

// 0x18030a4d0 FUN_18030a4d0
// source: re/dump/decompile/0x18030a4d0_FUN_18030a4d0.c
// size: 12 bytes; thunk: false
// body sha256: d58b06466c7e700efcd498c30c99190a9b4f4941e88280359a5fe8c787100505
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a4d0{
    "0x18030a4d0",
    "FUN_18030a4d0",
    R"F18030a4d0S(undefined FUN_18030a4d0())F18030a4d0S",
    R"B18030a4d0(// 0x18030a4d0  FUN_18030a4d0
// size=12 thunk=false
// signature: undefined FUN_18030a4d0()
// status: ok


void FUN_18030a4d0(void)

{
  FUN_18021c730(&DAT_1803edc20);
  return;
}


)B18030a4d0",
    "d58b06466c7e700efcd498c30c99190a9b4f4941e88280359a5fe8c787100505",
    R"F18030a4d0C(FUN_18021c730)F18030a4d0C",
    R"F18030a4d0D(DAT_1803edc20)F18030a4d0D",
    R"F18030a4d0T()F18030a4d0T",
    R"F18030a4d0F(11: return;)F18030a4d0F",
    R"F18030a4d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edc20.)F18030a4d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a4d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a4d0", "FUN_18030a4d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edc20.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021c730", &image::DAT_1803edc20);
    trace.call_target("FUN_18021c730", reinterpret_cast<const void*>(&image::FUN_18021c730));
    trace.data_ref("DAT_1803edc20", static_cast<const void*>(&image::DAT_1803edc20));
    // body sha256: d58b06466c7e700efcd498c30c99190a9b4f4941e88280359a5fe8c787100505
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18021c730(&DAT_1803edc20);");
            trace.statement("return;");
        }
    return kFunction_0x18030a4d0;
}

// 0x18030a4e0 FUN_18030a4e0
// source: re/dump/decompile/0x18030a4e0_FUN_18030a4e0.c
// size: 12 bytes; thunk: false
// body sha256: 09f06cff425079e4b20f2051ed9e42a477fe25f8e8898015c87b794dc4612eff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a4e0{
    "0x18030a4e0",
    "FUN_18030a4e0",
    R"F18030a4e0S(undefined FUN_18030a4e0())F18030a4e0S",
    R"B18030a4e0(// 0x18030a4e0  FUN_18030a4e0
// size=12 thunk=false
// signature: undefined FUN_18030a4e0()
// status: ok


void FUN_18030a4e0(void)

{
  FUN_18020e450(&DAT_1803ea218);
  return;
}


)B18030a4e0",
    "09f06cff425079e4b20f2051ed9e42a477fe25f8e8898015c87b794dc4612eff",
    R"F18030a4e0C(FUN_18020e450)F18030a4e0C",
    R"F18030a4e0D(DAT_1803ea218)F18030a4e0D",
    R"F18030a4e0T()F18030a4e0T",
    R"F18030a4e0F(11: return;)F18030a4e0F",
    R"F18030a4e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea218.)F18030a4e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a4e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a4e0", "FUN_18030a4e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea218.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803ea218);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803ea218", static_cast<const void*>(&image::DAT_1803ea218));
    // body sha256: 09f06cff425079e4b20f2051ed9e42a477fe25f8e8898015c87b794dc4612eff
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803ea218);");
            trace.statement("return;");
        }
    return kFunction_0x18030a4e0;
}

// 0x18030a4f0 FUN_18030a4f0
// source: re/dump/decompile/0x18030a4f0_FUN_18030a4f0.c
// size: 12 bytes; thunk: false
// body sha256: 1bd2a36b31df8b5558ba387fdfafa52730f0e52009c238d4ebf18d8a2a34beb3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a4f0{
    "0x18030a4f0",
    "FUN_18030a4f0",
    R"F18030a4f0S(undefined FUN_18030a4f0())F18030a4f0S",
    R"B18030a4f0(// 0x18030a4f0  FUN_18030a4f0
// size=12 thunk=false
// signature: undefined FUN_18030a4f0()
// status: ok


void FUN_18030a4f0(void)

{
  FUN_18021e290(&DAT_1803e6ff0);
  return;
}


)B18030a4f0",
    "1bd2a36b31df8b5558ba387fdfafa52730f0e52009c238d4ebf18d8a2a34beb3",
    R"F18030a4f0C(FUN_18021e290)F18030a4f0C",
    R"F18030a4f0D(DAT_1803e6ff0)F18030a4f0D",
    R"F18030a4f0T()F18030a4f0T",
    R"F18030a4f0F(11: return;)F18030a4f0F",
    R"F18030a4f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e6ff0.)F18030a4f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a4f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a4f0", "FUN_18030a4f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e6ff0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021e290", &image::DAT_1803e6ff0);
    trace.call_target("FUN_18021e290", reinterpret_cast<const void*>(&image::FUN_18021e290));
    trace.data_ref("DAT_1803e6ff0", static_cast<const void*>(&image::DAT_1803e6ff0));
    // body sha256: 1bd2a36b31df8b5558ba387fdfafa52730f0e52009c238d4ebf18d8a2a34beb3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18021e290(&DAT_1803e6ff0);");
            trace.statement("return;");
        }
    return kFunction_0x18030a4f0;
}

// 0x18030a500 FUN_18030a500
// source: re/dump/decompile/0x18030a500_FUN_18030a500.c
// size: 197 bytes; thunk: false
// body sha256: 98ba4293a013b50ae43de301c6255f1b489839a07c2052eef267e965a1cc359a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a500{
    "0x18030a500",
    "FUN_18030a500",
    R"F18030a500S(undefined FUN_18030a500())F18030a500S",
    R"B18030a500(// 0x18030a500  FUN_18030a500
// size=197 thunk=false
// signature: undefined FUN_18030a500()
// status: ok


void FUN_18030a500(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  pvVar3 = DAT_1803e9df8;
  pvVar2 = DAT_1803e9df0;
  if (DAT_1803e9df0 != (void *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x28)) {
      FUN_18020e450(pvVar2);
    }
    pvVar2 = DAT_1803e9df0;
    puVar4 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803e9e00 - (longlong)DAT_1803e9df0 >> 3) * 8)) {
      pvVar2 = *(void **)((longlong)DAT_1803e9df0 + -8);
      pvVar3 = (void *)((longlong)DAT_1803e9df0 + (-8 - (longlong)pvVar2));
      puVar4 = auStack_28;
      if ((void *)0x1f < pvVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pvVar2 = pvVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x18030a5a4;
    free(pvVar2);
    DAT_1803e9df0 = (void *)0x0;
    DAT_1803e9df8 = (void *)0x0;
    DAT_1803e9e00 = 0;
  }
  return;
}


)B18030a500",
    "98ba4293a013b50ae43de301c6255f1b489839a07c2052eef267e965a1cc359a",
    R"F18030a500C(FUN_18020e450)F18030a500C",
    R"F18030a500D(DAT_1803e9df0
DAT_1803e9df8
DAT_1803e9e00)F18030a500D",
    R"F18030a500T()F18030a500T",
    R"F18030a500F(19: if (DAT_1803e9df0 != (void *)0x0) {
20: for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x28)) {
25: if (0xfff < (ulonglong)((DAT_1803e9e00 - (longlong)DAT_1803e9df0 >> 3) * 8)) {
29: if ((void *)0x1f < pvVar3) {
42: return;)F18030a500F",
    R"F18030a500U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9df0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9df8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9e00.
TODO: resolve the indirect call in body 30: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 31: (*pcVar1)(5);.)F18030a500U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a500() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a500", "FUN_18030a500");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * pvVar2{};
    [[maybe_unused]] void * pvVar3{};
    [[maybe_unused]] std::uint8_t * puVar4{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[24]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9df0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9df8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9e00.
    // TODO: resolve the indirect call in body 30: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 31: (*pcVar1)(5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (0xfff < (ulonglong)((DAT_1803e9e00 - (longlong)DAT_1803e9df0 >> 3) * 8)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_18020e450", pvVar2);
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", pvVar2);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9df0", static_cast<const void*>(&image::DAT_1803e9df0));
    trace.data_ref("DAT_1803e9df8", static_cast<const void*>(&image::DAT_1803e9df8));
    trace.data_ref("DAT_1803e9e00", static_cast<const void*>(&image::DAT_1803e9e00));
    // body sha256: 98ba4293a013b50ae43de301c6255f1b489839a07c2052eef267e965a1cc359a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *pvVar2;");
            trace.statement("void *pvVar3;");
            trace.statement("undefined1 *puVar4;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [24];");
            trace.statement("pvVar3 = DAT_1803e9df8;");
            trace.statement("pvVar2 = DAT_1803e9df0;");
            if (trace.checked_condition("if (DAT_1803e9df0 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803e9df0, 0) != (void *)0x0); })) {
                for (auto loop = trace.checked_loop("for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x28))", [&]() -> bool { return static_cast<bool>(pvVar2 = (void *)(reinterpret_cast<std::int64_t>(pvVar2) + 0x28)); }); loop.next(); ) {
                    trace.statement("FUN_18020e450(pvVar2);");
                }
                trace.statement("pvVar2 = DAT_1803e9df0;");
                trace.statement("puVar4 = auStack_28;");
                if (trace.condition("if (0xfff < (ulonglong)((DAT_1803e9e00 - (longlong)DAT_1803e9df0 >> 3) * 8))")) {
                    trace.statement("pvVar2 = *(void **)((longlong)DAT_1803e9df0 + -8);");
                    trace.statement("pvVar3 = (void *)((longlong)DAT_1803e9df0 + (-8 - (longlong)pvVar2));");
                    trace.statement("puVar4 = auStack_28;");
                    if (trace.checked_condition("if ((void *)0x1f < pvVar3)", [&]() -> bool { return static_cast<bool>((void *)0x1f < pvVar3); })) {
                        trace.statement("pcVar1 = (code *)swi(0x29);");
                        trace.statement("(*pcVar1)(5);");
                        trace.statement("pvVar2 = pvVar3;");
                        trace.statement("puVar4 = auStack_20;");
                    }
                }
                trace.statement("*(undefined8 *)(puVar4 + -8) = 0x18030a5a4;");
                trace.statement("free(pvVar2);");
                trace.statement("DAT_1803e9df0 = (void *)0x0;");
                trace.statement("DAT_1803e9df8 = (void *)0x0;");
                trace.statement("DAT_1803e9e00 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a500;
}

// 0x18030a5d0 FUN_18030a5d0
// source: re/dump/decompile/0x18030a5d0_FUN_18030a5d0.c
// size: 33 bytes; thunk: false
// body sha256: 02a50548ec42f4e058e2b1f5049add3a578ec97cba4698251578b0202aa54699
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a5d0{
    "0x18030a5d0",
    "FUN_18030a5d0",
    R"F18030a5d0S(undefined FUN_18030a5d0())F18030a5d0S",
    R"B18030a5d0(// 0x18030a5d0  FUN_18030a5d0
// size=33 thunk=false
// signature: undefined FUN_18030a5d0()
// status: ok


void FUN_18030a5d0(void)

{
  FUN_180209700(&DAT_1803fad18);
  FUN_18020a440(&DAT_1803fad08);
  return;
}


)B18030a5d0",
    "02a50548ec42f4e058e2b1f5049add3a578ec97cba4698251578b0202aa54699",
    R"F18030a5d0C(FUN_180209700
FUN_18020a440)F18030a5d0C",
    R"F18030a5d0D(DAT_1803fad08
DAT_1803fad18)F18030a5d0D",
    R"F18030a5d0T()F18030a5d0T",
    R"F18030a5d0F(12: return;)F18030a5d0F",
    R"F18030a5d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fad08.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fad18.)F18030a5d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a5d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a5d0", "FUN_18030a5d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fad08.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fad18.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1803fad18);
    trace.call_arguments("FUN_18020a440", &image::DAT_1803fad08);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_18020a440", reinterpret_cast<const void*>(&image::FUN_18020a440));
    trace.data_ref("DAT_1803fad08", static_cast<const void*>(&image::DAT_1803fad08));
    trace.data_ref("DAT_1803fad18", static_cast<const void*>(&image::DAT_1803fad18));
    // body sha256: 02a50548ec42f4e058e2b1f5049add3a578ec97cba4698251578b0202aa54699
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1803fad18);");
            trace.statement("FUN_18020a440(&DAT_1803fad08);");
            trace.statement("return;");
        }
    return kFunction_0x18030a5d0;
}

// 0x18030a600 FUN_18030a600
// source: re/dump/decompile/0x18030a600_FUN_18030a600.c
// size: 50 bytes; thunk: false
// body sha256: 2e4be15e145e4cde1ff2734c0d2ed3db989dc65dcdb7d8e5653c8117473debbd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a600{
    "0x18030a600",
    "FUN_18030a600",
    R"F18030a600S(undefined FUN_18030a600())F18030a600S",
    R"B18030a600(// 0x18030a600  FUN_18030a600
// size=50 thunk=false
// signature: undefined FUN_18030a600()
// status: ok


void FUN_18030a600(void)

{
  FUN_180209700(&DAT_1803fad58);
  FUN_18022a280();
  free(DAT_1803fad48);
  return;
}


)B18030a600",
    "2e4be15e145e4cde1ff2734c0d2ed3db989dc65dcdb7d8e5653c8117473debbd",
    R"F18030a600C(FUN_180209700
FUN_18022a280)F18030a600C",
    R"F18030a600D(DAT_1803fad48
DAT_1803fad58)F18030a600D",
    R"F18030a600T()F18030a600T",
    R"F18030a600F(13: return;)F18030a600F",
    R"F18030a600U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fad48.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fad58.)F18030a600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a600() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a600", "FUN_18030a600");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fad48.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fad58.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1803fad58);
    trace.call_arguments("FUN_18022a280");
    trace.call_arguments("free", image::DAT_1803fad48);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_18022a280", reinterpret_cast<const void*>(&image::FUN_18022a280));
    trace.data_ref("DAT_1803fad48", static_cast<const void*>(&image::DAT_1803fad48));
    trace.data_ref("DAT_1803fad58", static_cast<const void*>(&image::DAT_1803fad58));
    // body sha256: 2e4be15e145e4cde1ff2734c0d2ed3db989dc65dcdb7d8e5653c8117473debbd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1803fad58);");
            trace.statement("FUN_18022a280();");
            trace.statement("free(DAT_1803fad48);");
            trace.statement("return;");
        }
    return kFunction_0x18030a600;
}

// 0x18030a640 FUN_18030a640
// source: re/dump/decompile/0x18030a640_FUN_18030a640.c
// size: 12 bytes; thunk: false
// body sha256: 12aaec560fbb4c130df01fc0fe45b9bdfb91ad8cef09519485e4215ce84f96d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a640{
    "0x18030a640",
    "FUN_18030a640",
    R"F18030a640S(undefined FUN_18030a640())F18030a640S",
    R"B18030a640(// 0x18030a640  FUN_18030a640
// size=12 thunk=false
// signature: undefined FUN_18030a640()
// status: ok


void FUN_18030a640(void)

{
  FUN_18020a5a0(&DAT_1803fcc80);
  return;
}


)B18030a640",
    "12aaec560fbb4c130df01fc0fe45b9bdfb91ad8cef09519485e4215ce84f96d3",
    R"F18030a640C(FUN_18020a5a0)F18030a640C",
    R"F18030a640D(DAT_1803fcc80)F18030a640D",
    R"F18030a640T()F18030a640T",
    R"F18030a640F(11: return;)F18030a640F",
    R"F18030a640U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc80.)F18030a640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a640() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a640", "FUN_18030a640");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc80.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020a5a0", &image::DAT_1803fcc80);
    trace.call_target("FUN_18020a5a0", reinterpret_cast<const void*>(&image::FUN_18020a5a0));
    trace.data_ref("DAT_1803fcc80", static_cast<const void*>(&image::DAT_1803fcc80));
    // body sha256: 12aaec560fbb4c130df01fc0fe45b9bdfb91ad8cef09519485e4215ce84f96d3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020a5a0(&DAT_1803fcc80);");
            trace.statement("return;");
        }
    return kFunction_0x18030a640;
}

// 0x18030a650 FUN_18030a650
// source: re/dump/decompile/0x18030a650_FUN_18030a650.c
// size: 133 bytes; thunk: false
// body sha256: bdd842edc5c92678d8c5da7a5887f26bb810950b62052904ef724bffd22f92aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a650{
    "0x18030a650",
    "FUN_18030a650",
    R"F18030a650S(undefined FUN_18030a650())F18030a650S",
    R"B18030a650(// 0x18030a650  FUN_18030a650
// size=133 thunk=false
// signature: undefined FUN_18030a650()
// status: ok


void FUN_18030a650(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803fcc20 != (void *)0x0) {
    _Memory = DAT_1803fcc20;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803fcc30 - (longlong)DAT_1803fcc20 >> 2) * 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803fcc20 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803fcc20 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a6ba;
    free(_Memory);
    DAT_1803fcc30 = 0;
    DAT_1803fcc20 = (void *)0x0;
    uRam00000001803fcc28 = 0;
  }
  return;
}


)B18030a650",
    "bdd842edc5c92678d8c5da7a5887f26bb810950b62052904ef724bffd22f92aa",
    R"F18030a650C()F18030a650C",
    R"F18030a650D(DAT_1803fcc20
DAT_1803fcc30)F18030a650D",
    R"F18030a650T()F18030a650T",
    R"F18030a650F(16: if (DAT_1803fcc20 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803fcc30 - (longlong)DAT_1803fcc20 >> 2) * 4)) &&
33: return;)F18030a650F",
    R"F18030a650U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc20.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc30.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030a650U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a650() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a650", "FUN_18030a650");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc20.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc30.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803fcc30 - (longlong)DAT_1803fcc20 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803fcc20 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcc20 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803fcc20", static_cast<const void*>(&image::DAT_1803fcc20));
    trace.data_ref("DAT_1803fcc30", static_cast<const void*>(&image::DAT_1803fcc30));
    // body sha256: bdd842edc5c92678d8c5da7a5887f26bb810950b62052904ef724bffd22f92aa
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803fcc20 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803fcc20, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803fcc20;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803fcc30 - (longlong)DAT_1803fcc20 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803fcc20 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcc20 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030a6ba;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803fcc30 = 0;");
                trace.statement("DAT_1803fcc20 = (void *)0x0;");
                trace.statement("uRam00000001803fcc28 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a650;
}

// 0x18030a6e0 FUN_18030a6e0
// source: re/dump/decompile/0x18030a6e0_FUN_18030a6e0.c
// size: 104 bytes; thunk: false
// body sha256: 387ce047c73cc4afee78e9ed135951147d84ef0ba0922790054afd5a066c93ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a6e0{
    "0x18030a6e0",
    "FUN_18030a6e0",
    R"F18030a6e0S(undefined FUN_18030a6e0())F18030a6e0S",
    R"B18030a6e0(// 0x18030a6e0  FUN_18030a6e0
// size=104 thunk=false
// signature: undefined FUN_18030a6e0()
// status: ok


void FUN_18030a6e0(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803eb360 != (void *)0x0) {
    _Memory = DAT_1803eb360;
    puVar2 = auStack_28;
    if ((0xfff < (DAT_1803eb370 - (longlong)DAT_1803eb360 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)DAT_1803eb360 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803eb360 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a72d;
    free(_Memory);
    DAT_1803eb370 = 0;
    DAT_1803eb360 = (void *)0x0;
    DAT_1803eb368 = 0;
  }
  return;
}


)B18030a6e0",
    "387ce047c73cc4afee78e9ed135951147d84ef0ba0922790054afd5a066c93ab",
    R"F18030a6e0C()F18030a6e0C",
    R"F18030a6e0D(DAT_1803eb360
DAT_1803eb368
DAT_1803eb370)F18030a6e0D",
    R"F18030a6e0T()F18030a6e0T",
    R"F18030a6e0F(16: if (DAT_1803eb360 != (void *)0x0) {
19: if ((0xfff < (DAT_1803eb370 - (longlong)DAT_1803eb360 & 0xffffffffffffffe0U)) &&
32: return;)F18030a6e0F",
    R"F18030a6e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb360.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb368.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb370.
TODO: resolve the indirect call in body 22: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 23: _Memory = (void *)(*pcVar1)(5);.)F18030a6e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a6e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a6e0", "FUN_18030a6e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb360.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb368.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb370.
    // TODO: resolve the indirect call in body 22: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 23: _Memory = (void *)(*pcVar1)(5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (DAT_1803eb370 - (longlong)DAT_1803eb360 & 0xffffffffffffffe0U)) && (_Memory = *(void **)((longlong)DAT_1803eb360 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803eb360 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803eb360", static_cast<const void*>(&image::DAT_1803eb360));
    trace.data_ref("DAT_1803eb368", static_cast<const void*>(&image::DAT_1803eb368));
    trace.data_ref("DAT_1803eb370", static_cast<const void*>(&image::DAT_1803eb370));
    // body sha256: 387ce047c73cc4afee78e9ed135951147d84ef0ba0922790054afd5a066c93ab
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803eb360 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803eb360, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803eb360;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (DAT_1803eb370 - (longlong)DAT_1803eb360 & 0xffffffffffffffe0U)) && (_Memory = *(void **)((longlong)DAT_1803eb360 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803eb360 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("_Memory = (void *)(*pcVar1)(5);");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030a72d;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803eb370 = 0;");
                trace.statement("DAT_1803eb360 = (void *)0x0;");
                trace.statement("DAT_1803eb368 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a6e0;
}

// 0x18030a750 FUN_18030a750
// source: re/dump/decompile/0x18030a750_FUN_18030a750.c
// size: 12 bytes; thunk: false
// body sha256: c7c05eebd4ccfbb329ef92b59c9f2f9e7c5b94f4aa063647f847f6cd918aed00
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a750{
    "0x18030a750",
    "FUN_18030a750",
    R"F18030a750S(undefined FUN_18030a750())F18030a750S",
    R"B18030a750(// 0x18030a750  FUN_18030a750
// size=12 thunk=false
// signature: undefined FUN_18030a750()
// status: ok


void FUN_18030a750(void)

{
  FUN_18021e060(&DAT_1803e9a68);
  return;
}


)B18030a750",
    "c7c05eebd4ccfbb329ef92b59c9f2f9e7c5b94f4aa063647f847f6cd918aed00",
    R"F18030a750C(FUN_18021e060)F18030a750C",
    R"F18030a750D(DAT_1803e9a68)F18030a750D",
    R"F18030a750T()F18030a750T",
    R"F18030a750F(11: return;)F18030a750F",
    R"F18030a750U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a68.)F18030a750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a750() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a750", "FUN_18030a750");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a68.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18021e060", &image::DAT_1803e9a68);
    trace.call_target("FUN_18021e060", reinterpret_cast<const void*>(&image::FUN_18021e060));
    trace.data_ref("DAT_1803e9a68", static_cast<const void*>(&image::DAT_1803e9a68));
    // body sha256: c7c05eebd4ccfbb329ef92b59c9f2f9e7c5b94f4aa063647f847f6cd918aed00
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18021e060(&DAT_1803e9a68);");
            trace.statement("return;");
        }
    return kFunction_0x18030a750;
}

// 0x18030a760 FUN_18030a760
// source: re/dump/decompile/0x18030a760_FUN_18030a760.c
// size: 133 bytes; thunk: false
// body sha256: 146a0d15ba4167742d396ba13db762f1d333bb1de426553545ec7063d802c34e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a760{
    "0x18030a760",
    "FUN_18030a760",
    R"F18030a760S(undefined FUN_18030a760())F18030a760S",
    R"B18030a760(// 0x18030a760  FUN_18030a760
// size=133 thunk=false
// signature: undefined FUN_18030a760()
// status: ok


void FUN_18030a760(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803e9a80 != (void *)0x0) {
    _Memory = DAT_1803e9a80;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803e9a90 - (longlong)DAT_1803e9a80 >> 2) * 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803e9a80 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803e9a80 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a7ca;
    free(_Memory);
    DAT_1803e9a90 = 0;
    DAT_1803e9a80 = (void *)0x0;
    DAT_1803e9a88 = 0;
  }
  return;
}


)B18030a760",
    "146a0d15ba4167742d396ba13db762f1d333bb1de426553545ec7063d802c34e",
    R"F18030a760C()F18030a760C",
    R"F18030a760D(DAT_1803e9a80
DAT_1803e9a88
DAT_1803e9a90)F18030a760D",
    R"F18030a760T()F18030a760T",
    R"F18030a760F(16: if (DAT_1803e9a80 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803e9a90 - (longlong)DAT_1803e9a80 >> 2) * 4)) &&
33: return;)F18030a760F",
    R"F18030a760U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a80.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a88.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a90.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030a760U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a760() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a760", "FUN_18030a760");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a80.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a88.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a90.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803e9a90 - (longlong)DAT_1803e9a80 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803e9a80 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803e9a80 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803e9a80", static_cast<const void*>(&image::DAT_1803e9a80));
    trace.data_ref("DAT_1803e9a88", static_cast<const void*>(&image::DAT_1803e9a88));
    trace.data_ref("DAT_1803e9a90", static_cast<const void*>(&image::DAT_1803e9a90));
    // body sha256: 146a0d15ba4167742d396ba13db762f1d333bb1de426553545ec7063d802c34e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803e9a80 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803e9a80, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803e9a80;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803e9a90 - (longlong)DAT_1803e9a80 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803e9a80 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803e9a80 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030a7ca;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803e9a90 = 0;");
                trace.statement("DAT_1803e9a80 = (void *)0x0;");
                trace.statement("DAT_1803e9a88 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a760;
}

// 0x18030a7f0 FUN_18030a7f0
// source: re/dump/decompile/0x18030a7f0_FUN_18030a7f0.c
// size: 12 bytes; thunk: false
// body sha256: 0e5423995366aaf1c934ff5a8831e64d222e599d6a9aab99dc4f85cf8af424dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a7f0{
    "0x18030a7f0",
    "FUN_18030a7f0",
    R"F18030a7f0S(undefined FUN_18030a7f0())F18030a7f0S",
    R"B18030a7f0(// 0x18030a7f0  FUN_18030a7f0
// size=12 thunk=false
// signature: undefined FUN_18030a7f0()
// status: ok


void FUN_18030a7f0(void)

{
  FUN_18020d5c0(&DAT_1803ea2c0);
  return;
}


)B18030a7f0",
    "0e5423995366aaf1c934ff5a8831e64d222e599d6a9aab99dc4f85cf8af424dc",
    R"F18030a7f0C(FUN_18020d5c0)F18030a7f0C",
    R"F18030a7f0D(DAT_1803ea2c0)F18030a7f0D",
    R"F18030a7f0T()F18030a7f0T",
    R"F18030a7f0F(11: return;)F18030a7f0F",
    R"F18030a7f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea2c0.)F18030a7f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a7f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a7f0", "FUN_18030a7f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea2c0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020d5c0", &image::DAT_1803ea2c0);
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.data_ref("DAT_1803ea2c0", static_cast<const void*>(&image::DAT_1803ea2c0));
    // body sha256: 0e5423995366aaf1c934ff5a8831e64d222e599d6a9aab99dc4f85cf8af424dc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020d5c0(&DAT_1803ea2c0);");
            trace.statement("return;");
        }
    return kFunction_0x18030a7f0;
}

// 0x18030a800 FUN_18030a800
// source: re/dump/decompile/0x18030a800_FUN_18030a800.c
// size: 125 bytes; thunk: false
// body sha256: d61df91c5b81ff4164c90e3513da59a0efa7809d37c3499c0bf7e98434e41fdf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a800{
    "0x18030a800",
    "FUN_18030a800",
    R"F18030a800S(undefined FUN_18030a800())F18030a800S",
    R"B18030a800(// 0x18030a800  FUN_18030a800
// size=125 thunk=false
// signature: undefined FUN_18030a800()
// status: ok


void FUN_18030a800(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803eb808 != (void *)0x0) {
    _Memory = DAT_1803eb808;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803eb818 - (longlong)DAT_1803eb808 >> 2) * 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803eb808 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803eb808 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a862;
    free(_Memory);
    DAT_1803eb818 = 0;
    DAT_1803eb808 = (void *)0x0;
    DAT_1803eb810 = 0;
  }
  return;
}


)B18030a800",
    "d61df91c5b81ff4164c90e3513da59a0efa7809d37c3499c0bf7e98434e41fdf",
    R"F18030a800C()F18030a800C",
    R"F18030a800D(DAT_1803eb808
DAT_1803eb810
DAT_1803eb818)F18030a800D",
    R"F18030a800T()F18030a800T",
    R"F18030a800F(16: if (DAT_1803eb808 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803eb818 - (longlong)DAT_1803eb808 >> 2) * 4)) &&
33: return;)F18030a800F",
    R"F18030a800U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb808.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb810.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb818.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030a800U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a800() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a800", "FUN_18030a800");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb808.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb810.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb818.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803eb818 - (longlong)DAT_1803eb808 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803eb808 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803eb808 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803eb808", static_cast<const void*>(&image::DAT_1803eb808));
    trace.data_ref("DAT_1803eb810", static_cast<const void*>(&image::DAT_1803eb810));
    trace.data_ref("DAT_1803eb818", static_cast<const void*>(&image::DAT_1803eb818));
    // body sha256: d61df91c5b81ff4164c90e3513da59a0efa7809d37c3499c0bf7e98434e41fdf
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803eb808 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803eb808, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803eb808;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803eb818 - (longlong)DAT_1803eb808 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803eb808 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803eb808 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030a862;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803eb818 = 0;");
                trace.statement("DAT_1803eb808 = (void *)0x0;");
                trace.statement("DAT_1803eb810 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a800;
}

// 0x18030a880 FUN_18030a880
// source: re/dump/decompile/0x18030a880_FUN_18030a880.c
// size: 128 bytes; thunk: false
// body sha256: 61e71a1b486cb3021c6c6b83a79ee9578bbadd20ccc908c018118b20b3dae172
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a880{
    "0x18030a880",
    "FUN_18030a880",
    R"F18030a880S(undefined FUN_18030a880())F18030a880S",
    R"B18030a880(// 0x18030a880  FUN_18030a880
// size=128 thunk=false
// signature: undefined FUN_18030a880()
// status: ok


void FUN_18030a880(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803e9a50 != (void *)0x0) {
    _Memory = DAT_1803e9a50;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803e9a60 - (longlong)DAT_1803e9a50 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803e9a50 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803e9a50 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a8e5;
    free(_Memory);
    DAT_1803e9a60 = 0;
    DAT_1803e9a50 = (void *)0x0;
    DAT_1803e9a58 = 0;
  }
  return;
}


)B18030a880",
    "61e71a1b486cb3021c6c6b83a79ee9578bbadd20ccc908c018118b20b3dae172",
    R"F18030a880C()F18030a880C",
    R"F18030a880D(DAT_1803e9a50
DAT_1803e9a58
DAT_1803e9a60)F18030a880D",
    R"F18030a880T()F18030a880T",
    R"F18030a880F(16: if (DAT_1803e9a50 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803e9a60 - (longlong)DAT_1803e9a50 >> 3) * 8)) &&
33: return;)F18030a880F",
    R"F18030a880U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a58.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a60.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030a880U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a880() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a880", "FUN_18030a880");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a58.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a60.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803e9a60 - (longlong)DAT_1803e9a50 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803e9a50 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803e9a50 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803e9a50", static_cast<const void*>(&image::DAT_1803e9a50));
    trace.data_ref("DAT_1803e9a58", static_cast<const void*>(&image::DAT_1803e9a58));
    trace.data_ref("DAT_1803e9a60", static_cast<const void*>(&image::DAT_1803e9a60));
    // body sha256: 61e71a1b486cb3021c6c6b83a79ee9578bbadd20ccc908c018118b20b3dae172
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803e9a50 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803e9a50, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803e9a50;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803e9a60 - (longlong)DAT_1803e9a50 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803e9a50 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803e9a50 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030a8e5;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803e9a60 = 0;");
                trace.statement("DAT_1803e9a50 = (void *)0x0;");
                trace.statement("DAT_1803e9a58 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a880;
}

// 0x18030a900 FUN_18030a900
// source: re/dump/decompile/0x18030a900_FUN_18030a900.c
// size: 125 bytes; thunk: false
// body sha256: abd89528f3abb556b9e4d2026f347b986c21a19e9ed2ba6d3861d8ed0f16b356
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a900{
    "0x18030a900",
    "FUN_18030a900",
    R"F18030a900S(undefined FUN_18030a900())F18030a900S",
    R"B18030a900(// 0x18030a900  FUN_18030a900
// size=125 thunk=false
// signature: undefined FUN_18030a900()
// status: ok


void FUN_18030a900(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803edd30 != (void *)0x0) {
    _Memory = DAT_1803edd30;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803edd40 - (longlong)DAT_1803edd30 >> 2) * 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803edd30 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803edd30 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a962;
    free(_Memory);
    DAT_1803edd40 = 0;
    DAT_1803edd30 = (void *)0x0;
    DAT_1803edd38 = 0;
  }
  return;
}


)B18030a900",
    "abd89528f3abb556b9e4d2026f347b986c21a19e9ed2ba6d3861d8ed0f16b356",
    R"F18030a900C()F18030a900C",
    R"F18030a900D(DAT_1803edd30
DAT_1803edd38
DAT_1803edd40)F18030a900D",
    R"F18030a900T()F18030a900T",
    R"F18030a900F(16: if (DAT_1803edd30 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803edd40 - (longlong)DAT_1803edd30 >> 2) * 4)) &&
33: return;)F18030a900F",
    R"F18030a900U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edd30.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edd38.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edd40.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030a900U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a900() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a900", "FUN_18030a900");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edd30.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edd38.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edd40.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803edd40 - (longlong)DAT_1803edd30 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803edd30 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803edd30 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803edd30", static_cast<const void*>(&image::DAT_1803edd30));
    trace.data_ref("DAT_1803edd38", static_cast<const void*>(&image::DAT_1803edd38));
    trace.data_ref("DAT_1803edd40", static_cast<const void*>(&image::DAT_1803edd40));
    // body sha256: abd89528f3abb556b9e4d2026f347b986c21a19e9ed2ba6d3861d8ed0f16b356
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803edd30 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803edd30, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803edd30;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803edd40 - (longlong)DAT_1803edd30 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_1803edd30 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803edd30 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030a962;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803edd40 = 0;");
                trace.statement("DAT_1803edd30 = (void *)0x0;");
                trace.statement("DAT_1803edd38 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a900;
}

// 0x18030a980 FUN_18030a980
// source: re/dump/decompile/0x18030a980_FUN_18030a980.c
// size: 129 bytes; thunk: false
// body sha256: 587f7d7e3bf5716301d7d8c3cb37f85bf9769ef8d090e892d5376bd58352548f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030a980{
    "0x18030a980",
    "FUN_18030a980",
    R"F18030a980S(undefined FUN_18030a980())F18030a980S",
    R"B18030a980(// 0x18030a980  FUN_18030a980
// size=129 thunk=false
// signature: undefined FUN_18030a980()
// status: ok


void FUN_18030a980(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803e9a98 != (void *)0x0) {
    _Memory = DAT_1803e9a98;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803e9aa8 - (longlong)DAT_1803e9a98 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803e9a98 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803e9a98 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a9e6;
    free(_Memory);
    DAT_1803e9aa8 = 0;
    DAT_1803e9a98 = (void *)0x0;
    DAT_1803e9aa0 = 0;
  }
  return;
}


)B18030a980",
    "587f7d7e3bf5716301d7d8c3cb37f85bf9769ef8d090e892d5376bd58352548f",
    R"F18030a980C()F18030a980C",
    R"F18030a980D(DAT_1803e9a98
DAT_1803e9aa0
DAT_1803e9aa8)F18030a980D",
    R"F18030a980T()F18030a980T",
    R"F18030a980F(16: if (DAT_1803e9a98 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803e9aa8 - (longlong)DAT_1803e9a98 >> 4) << 4)) &&
33: return;)F18030a980F",
    R"F18030a980U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a98.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9aa0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9aa8.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030a980U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030a980() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030a980", "FUN_18030a980");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a98.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9aa0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9aa8.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803e9aa8 - (longlong)DAT_1803e9a98 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_1803e9a98 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803e9a98 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803e9a98", static_cast<const void*>(&image::DAT_1803e9a98));
    trace.data_ref("DAT_1803e9aa0", static_cast<const void*>(&image::DAT_1803e9aa0));
    trace.data_ref("DAT_1803e9aa8", static_cast<const void*>(&image::DAT_1803e9aa8));
    // body sha256: 587f7d7e3bf5716301d7d8c3cb37f85bf9769ef8d090e892d5376bd58352548f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803e9a98 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803e9a98, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803e9a98;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803e9aa8 - (longlong)DAT_1803e9a98 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_1803e9a98 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803e9a98 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030a9e6;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803e9aa8 = 0;");
                trace.statement("DAT_1803e9a98 = (void *)0x0;");
                trace.statement("DAT_1803e9aa0 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030a980;
}

// 0x18030aa10 FUN_18030aa10
// source: re/dump/decompile/0x18030aa10_FUN_18030aa10.c
// size: 104 bytes; thunk: false
// body sha256: 00dd1ef4d83fbfb7f9377a8f6c9f3c08c78037bae7c44de49fbd40d36013c680
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030aa10{
    "0x18030aa10",
    "FUN_18030aa10",
    R"F18030aa10S(undefined FUN_18030aa10())F18030aa10S",
    R"B18030aa10(// 0x18030aa10  FUN_18030aa10
// size=104 thunk=false
// signature: undefined FUN_18030aa10()
// status: ok


void FUN_18030aa10(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803ea278 != (void *)0x0) {
    _Memory = DAT_1803ea278;
    puVar2 = auStack_28;
    if ((0xfff < (DAT_1803ea288 - (longlong)DAT_1803ea278 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)DAT_1803ea278 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803ea278 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030aa5d;
    free(_Memory);
    DAT_1803ea288 = 0;
    DAT_1803ea278 = (void *)0x0;
    DAT_1803ea280 = 0;
  }
  return;
}


)B18030aa10",
    "00dd1ef4d83fbfb7f9377a8f6c9f3c08c78037bae7c44de49fbd40d36013c680",
    R"F18030aa10C()F18030aa10C",
    R"F18030aa10D(DAT_1803ea278
DAT_1803ea280
DAT_1803ea288)F18030aa10D",
    R"F18030aa10T()F18030aa10T",
    R"F18030aa10F(16: if (DAT_1803ea278 != (void *)0x0) {
19: if ((0xfff < (DAT_1803ea288 - (longlong)DAT_1803ea278 & 0xfffffffffffffff0U)) &&
32: return;)F18030aa10F",
    R"F18030aa10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea278.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea280.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ea288.
TODO: resolve the indirect call in body 22: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 23: _Memory = (void *)(*pcVar1)(5);.)F18030aa10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030aa10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030aa10", "FUN_18030aa10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea278.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea280.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ea288.
    // TODO: resolve the indirect call in body 22: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 23: _Memory = (void *)(*pcVar1)(5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (DAT_1803ea288 - (longlong)DAT_1803ea278 & 0xfffffffffffffff0U)) && (_Memory = *(void **)((longlong)DAT_1803ea278 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803ea278 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803ea278", static_cast<const void*>(&image::DAT_1803ea278));
    trace.data_ref("DAT_1803ea280", static_cast<const void*>(&image::DAT_1803ea280));
    trace.data_ref("DAT_1803ea288", static_cast<const void*>(&image::DAT_1803ea288));
    // body sha256: 00dd1ef4d83fbfb7f9377a8f6c9f3c08c78037bae7c44de49fbd40d36013c680
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803ea278 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803ea278, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803ea278;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (DAT_1803ea288 - (longlong)DAT_1803ea278 & 0xfffffffffffffff0U)) && (_Memory = *(void **)((longlong)DAT_1803ea278 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803ea278 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("_Memory = (void *)(*pcVar1)(5);");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030aa5d;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803ea288 = 0;");
                trace.statement("DAT_1803ea278 = (void *)0x0;");
                trace.statement("DAT_1803ea280 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030aa10;
}

// 0x18030aa80 FUN_18030aa80
// source: re/dump/decompile/0x18030aa80_FUN_18030aa80.c
// size: 129 bytes; thunk: false
// body sha256: 1c9101095bd554dda8445ee7ffa55971ad84a7fd866ec120a82c286906029e71
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030aa80{
    "0x18030aa80",
    "FUN_18030aa80",
    R"F18030aa80S(undefined FUN_18030aa80())F18030aa80S",
    R"B18030aa80(// 0x18030aa80  FUN_18030aa80
// size=129 thunk=false
// signature: undefined FUN_18030aa80()
// status: ok


void FUN_18030aa80(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1804253a8 != (void *)0x0) {
    _Memory = DAT_1804253a8;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1804253b8 - (longlong)DAT_1804253a8 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_1804253a8 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1804253a8 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030aae6;
    free(_Memory);
    DAT_1804253b8 = 0;
    DAT_1804253a8 = (void *)0x0;
    DAT_1804253b0 = 0;
  }
  return;
}


)B18030aa80",
    "1c9101095bd554dda8445ee7ffa55971ad84a7fd866ec120a82c286906029e71",
    R"F18030aa80C()F18030aa80C",
    R"F18030aa80D(DAT_1804253a8
DAT_1804253b0
DAT_1804253b8)F18030aa80D",
    R"F18030aa80T()F18030aa80T",
    R"F18030aa80F(16: if (DAT_1804253a8 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1804253b8 - (longlong)DAT_1804253a8 >> 4) << 4)) &&
33: return;)F18030aa80F",
    R"F18030aa80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804253a8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804253b0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804253b8.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030aa80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030aa80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030aa80", "FUN_18030aa80");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804253a8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804253b0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804253b8.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1804253b8 - (longlong)DAT_1804253a8 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_1804253a8 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1804253a8 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1804253a8", static_cast<const void*>(&image::DAT_1804253a8));
    trace.data_ref("DAT_1804253b0", static_cast<const void*>(&image::DAT_1804253b0));
    trace.data_ref("DAT_1804253b8", static_cast<const void*>(&image::DAT_1804253b8));
    // body sha256: 1c9101095bd554dda8445ee7ffa55971ad84a7fd866ec120a82c286906029e71
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1804253a8 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1804253a8, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1804253a8;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1804253b8 - (longlong)DAT_1804253a8 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_1804253a8 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1804253a8 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030aae6;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1804253b8 = 0;");
                trace.statement("DAT_1804253a8 = (void *)0x0;");
                trace.statement("DAT_1804253b0 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030aa80;
}

// 0x18030ab10 FUN_18030ab10
// source: re/dump/decompile/0x18030ab10_FUN_18030ab10.c
// size: 12 bytes; thunk: false
// body sha256: eda960b632f9c8dfbe183540bfac8b70e9a7062a29fbbf9bf4de8c2db9758893
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ab10{
    "0x18030ab10",
    "FUN_18030ab10",
    R"F18030ab10S(undefined FUN_18030ab10())F18030ab10S",
    R"B18030ab10(// 0x18030ab10  FUN_18030ab10
// size=12 thunk=false
// signature: undefined FUN_18030ab10()
// status: ok


void FUN_18030ab10(void)

{
  FUN_180209700(&DAT_1803e9ab0);
  return;
}


)B18030ab10",
    "eda960b632f9c8dfbe183540bfac8b70e9a7062a29fbbf9bf4de8c2db9758893",
    R"F18030ab10C(FUN_180209700)F18030ab10C",
    R"F18030ab10D(DAT_1803e9ab0)F18030ab10D",
    R"F18030ab10T()F18030ab10T",
    R"F18030ab10F(11: return;)F18030ab10F",
    R"F18030ab10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9ab0.)F18030ab10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ab10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ab10", "FUN_18030ab10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9ab0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1803e9ab0);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.data_ref("DAT_1803e9ab0", static_cast<const void*>(&image::DAT_1803e9ab0));
    // body sha256: eda960b632f9c8dfbe183540bfac8b70e9a7062a29fbbf9bf4de8c2db9758893
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1803e9ab0);");
            trace.statement("return;");
        }
    return kFunction_0x18030ab10;
}

// 0x18030ab20 FUN_18030ab20
// source: re/dump/decompile/0x18030ab20_FUN_18030ab20.c
// size: 33 bytes; thunk: false
// body sha256: d783e4931a41dd37be7c5666595fddb808556b2e6e9170c9b8a3b0d6698aafcc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ab20{
    "0x18030ab20",
    "FUN_18030ab20",
    R"F18030ab20S(undefined FUN_18030ab20())F18030ab20S",
    R"B18030ab20(// 0x18030ab20  FUN_18030ab20
// size=33 thunk=false
// signature: undefined FUN_18030ab20()
// status: ok


void FUN_18030ab20(void)

{
  FUN_180209700(&DAT_1803e9a38);
  FUN_18020e450(&DAT_1803e99f0);
  return;
}


)B18030ab20",
    "d783e4931a41dd37be7c5666595fddb808556b2e6e9170c9b8a3b0d6698aafcc",
    R"F18030ab20C(FUN_180209700
FUN_18020e450)F18030ab20C",
    R"F18030ab20D(DAT_1803e99f0
DAT_1803e9a38)F18030ab20D",
    R"F18030ab20T()F18030ab20T",
    R"F18030ab20F(12: return;)F18030ab20F",
    R"F18030ab20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e99f0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9a38.)F18030ab20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ab20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ab20", "FUN_18030ab20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e99f0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9a38.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1803e9a38);
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e99f0);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e99f0", static_cast<const void*>(&image::DAT_1803e99f0));
    trace.data_ref("DAT_1803e9a38", static_cast<const void*>(&image::DAT_1803e9a38));
    // body sha256: d783e4931a41dd37be7c5666595fddb808556b2e6e9170c9b8a3b0d6698aafcc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1803e9a38);");
            trace.statement("FUN_18020e450(&DAT_1803e99f0);");
            trace.statement("return;");
        }
    return kFunction_0x18030ab20;
}

// 0x18030ab50 FUN_18030ab50
// source: re/dump/decompile/0x18030ab50_FUN_18030ab50.c
// size: 12 bytes; thunk: false
// body sha256: f9d35b3a340add32f9183faa02637a8a59c416d498880bf938adebc837288a3d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ab50{
    "0x18030ab50",
    "FUN_18030ab50",
    R"F18030ab50S(undefined FUN_18030ab50())F18030ab50S",
    R"B18030ab50(// 0x18030ab50  FUN_18030ab50
// size=12 thunk=false
// signature: undefined FUN_18030ab50()
// status: ok


void FUN_18030ab50(void)

{
  FUN_18020e450(&DAT_1803eb390);
  return;
}


)B18030ab50",
    "f9d35b3a340add32f9183faa02637a8a59c416d498880bf938adebc837288a3d",
    R"F18030ab50C(FUN_18020e450)F18030ab50C",
    R"F18030ab50D(DAT_1803eb390)F18030ab50D",
    R"F18030ab50T()F18030ab50T",
    R"F18030ab50F(11: return;)F18030ab50F",
    R"F18030ab50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb390.)F18030ab50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ab50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ab50", "FUN_18030ab50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb390.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803eb390);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803eb390", static_cast<const void*>(&image::DAT_1803eb390));
    // body sha256: f9d35b3a340add32f9183faa02637a8a59c416d498880bf938adebc837288a3d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803eb390);");
            trace.statement("return;");
        }
    return kFunction_0x18030ab50;
}

// 0x18030ab60 FUN_18030ab60
// source: re/dump/decompile/0x18030ab60_FUN_18030ab60.c
// size: 125 bytes; thunk: false
// body sha256: a302b91544059525c94faa63c277846ccf0cb643ea3224c28d01a409abb4ac63
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ab60{
    "0x18030ab60",
    "FUN_18030ab60",
    R"F18030ab60S(undefined FUN_18030ab60())F18030ab60S",
    R"B18030ab60(// 0x18030ab60  FUN_18030ab60
// size=125 thunk=false
// signature: undefined FUN_18030ab60()
// status: ok


void FUN_18030ab60(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180425a10 != (void *)0x0) {
    _Memory = DAT_180425a10;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_180425a20 - (longlong)DAT_180425a10 >> 2) * 4)) &&
       (_Memory = *(void **)((longlong)DAT_180425a10 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_180425a10 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030abc2;
    free(_Memory);
    DAT_180425a20 = 0;
    DAT_180425a10 = (void *)0x0;
    DAT_180425a18 = 0;
  }
  return;
}


)B18030ab60",
    "a302b91544059525c94faa63c277846ccf0cb643ea3224c28d01a409abb4ac63",
    R"F18030ab60C()F18030ab60C",
    R"F18030ab60D(DAT_180425a10
DAT_180425a18
DAT_180425a20)F18030ab60D",
    R"F18030ab60T()F18030ab60T",
    R"F18030ab60F(16: if (DAT_180425a10 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_180425a20 - (longlong)DAT_180425a10 >> 2) * 4)) &&
33: return;)F18030ab60F",
    R"F18030ab60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425a10.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425a18.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425a20.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030ab60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ab60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ab60", "FUN_18030ab60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425a10.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425a18.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425a20.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_180425a20 - (longlong)DAT_180425a10 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_180425a10 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_180425a10 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_180425a10", static_cast<const void*>(&image::DAT_180425a10));
    trace.data_ref("DAT_180425a18", static_cast<const void*>(&image::DAT_180425a18));
    trace.data_ref("DAT_180425a20", static_cast<const void*>(&image::DAT_180425a20));
    // body sha256: a302b91544059525c94faa63c277846ccf0cb643ea3224c28d01a409abb4ac63
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_180425a10 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_180425a10, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_180425a10;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_180425a20 - (longlong)DAT_180425a10 >> 2) * 4)) && (_Memory = *(void **)((longlong)DAT_180425a10 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_180425a10 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030abc2;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_180425a20 = 0;");
                trace.statement("DAT_180425a10 = (void *)0x0;");
                trace.statement("DAT_180425a18 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030ab60;
}

// 0x18030abf0 FUN_18030abf0
// source: re/dump/decompile/0x18030abf0_FUN_18030abf0.c
// size: 175 bytes; thunk: false
// body sha256: 04113af7e6c3973c5306d67f63f623a772ce75f2fe44888db71c26c97b40a616
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030abf0{
    "0x18030abf0",
    "FUN_18030abf0",
    R"F18030abf0S(undefined FUN_18030abf0())F18030abf0S",
    R"B18030abf0(// 0x18030abf0  FUN_18030abf0
// size=175 thunk=false
// signature: undefined FUN_18030abf0()
// status: ok


void FUN_18030abf0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar4 = DAT_1803fb108;
  plVar3 = DAT_1803fb100;
  if (DAT_1803fb100 != (longlong *)0x0) {
    for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    plVar3 = DAT_1803fb100;
    puVar5 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803fb110 - (longlong)DAT_1803fb100 >> 3) * 8)) {
      plVar3 = (longlong *)DAT_1803fb100[-1];
      plVar4 = (longlong *)((longlong)DAT_1803fb100 + (-8 - (longlong)plVar3));
      puVar5 = auStack_28;
      if ((longlong *)0x1f < plVar4) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        plVar3 = plVar4;
        puVar5 = auStack_20;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x18030ac83;
    free(plVar3);
    DAT_1803fb110 = 0;
    DAT_1803fb100 = (longlong *)0x0;
    DAT_1803fb108 = (longlong *)0x0;
  }
  return;
}


)B18030abf0",
    "04113af7e6c3973c5306d67f63f623a772ce75f2fe44888db71c26c97b40a616",
    R"F18030abf0C()F18030abf0C",
    R"F18030abf0D(DAT_1803fb100
DAT_1803fb108
DAT_1803fb110)F18030abf0D",
    R"F18030abf0T()F18030abf0T",
    R"F18030abf0F(20: if (DAT_1803fb100 != (longlong *)0x0) {
21: for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
23: if (puVar1 != (undefined8 *)0x0) {
29: if (0xfff < (ulonglong)((DAT_1803fb110 - (longlong)DAT_1803fb100 >> 3) * 8)) {
33: if ((longlong *)0x1f < plVar4) {
46: return;)F18030abf0F",
    R"F18030abf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fb100.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fb108.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fb110.
TODO: resolve the indirect call in body 24: (**(code **)*puVar1)(puVar1,1);.
TODO: resolve the indirect call in body 34: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 35: (*pcVar2)(5);.)F18030abf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030abf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030abf0", "FUN_18030abf0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * puVar1{};
    [[maybe_unused]] void* * pcVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    [[maybe_unused]] std::uint8_t * puVar5{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[24]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fb100.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fb108.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fb110.
    // TODO: resolve the indirect call in body 24: (**(code **)*puVar1)(puVar1,1);.
    // TODO: resolve the indirect call in body 34: pcVar2 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 35: (*pcVar2)(5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (0xfff < (ulonglong)((DAT_1803fb110 - (longlong)DAT_1803fb100 >> 3) * 8)) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", plVar3);
    trace.data_ref("DAT_1803fb100", static_cast<const void*>(&image::DAT_1803fb100));
    trace.data_ref("DAT_1803fb108", static_cast<const void*>(&image::DAT_1803fb108));
    trace.data_ref("DAT_1803fb110", static_cast<const void*>(&image::DAT_1803fb110));
    // body sha256: 04113af7e6c3973c5306d67f63f623a772ce75f2fe44888db71c26c97b40a616
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined1 *puVar5;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [24];");
            trace.statement("plVar4 = DAT_1803fb108;");
            trace.statement("plVar3 = DAT_1803fb100;");
            if (trace.checked_condition("if (DAT_1803fb100 != (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803fb100, 0) != (std::int64_t *)0x0); })) {
                for (auto loop = trace.checked_loop("for (; plVar3 != plVar4; plVar3 = plVar3 + 1)", [&]() -> bool { return static_cast<bool>(plVar3 = plVar3 + 1); }); loop.next(); ) {
                    trace.statement("puVar1 = (undefined8 *)*plVar3;");
                    if (trace.checked_condition("if (puVar1 != (undefined8 *)0x0)", [&]() -> bool { return static_cast<bool>(puVar1 != (std::uint64_t *)0x0); })) {
                        trace.statement("(**(code **)*puVar1)(puVar1,1);");
                    }
                }
                trace.statement("plVar3 = DAT_1803fb100;");
                trace.statement("puVar5 = auStack_28;");
                if (trace.condition("if (0xfff < (ulonglong)((DAT_1803fb110 - (longlong)DAT_1803fb100 >> 3) * 8))")) {
                    trace.statement("plVar3 = (longlong *)DAT_1803fb100[-1];");
                    trace.statement("plVar4 = (longlong *)((longlong)DAT_1803fb100 + (-8 - (longlong)plVar3));");
                    trace.statement("puVar5 = auStack_28;");
                    if (trace.checked_condition("if ((longlong *)0x1f < plVar4)", [&]() -> bool { return static_cast<bool>((std::int64_t *)0x1f < plVar4); })) {
                        trace.statement("pcVar2 = (code *)swi(0x29);");
                        trace.statement("(*pcVar2)(5);");
                        trace.statement("plVar3 = plVar4;");
                        trace.statement("puVar5 = auStack_20;");
                    }
                }
                trace.statement("*(undefined8 *)(puVar5 + -8) = 0x18030ac83;");
                trace.statement("free(plVar3);");
                trace.statement("DAT_1803fb110 = 0;");
                trace.statement("DAT_1803fb100 = (longlong *)0x0;");
                trace.statement("DAT_1803fb108 = (longlong *)0x0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030abf0;
}

// 0x18030aca0 FUN_18030aca0
// source: re/dump/decompile/0x18030aca0_FUN_18030aca0.c
// size: 33 bytes; thunk: false
// body sha256: fffeaf5a39ec830f5de8d3fce05f9af3a46dfea2fc158f543823c0ef7051ddee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030aca0{
    "0x18030aca0",
    "FUN_18030aca0",
    R"F18030aca0S(undefined FUN_18030aca0())F18030aca0S",
    R"B18030aca0(// 0x18030aca0  FUN_18030aca0
// size=33 thunk=false
// signature: undefined FUN_18030aca0()
// status: ok


void FUN_18030aca0(void)

{
  FUN_180209700(&DAT_1803fa878);
  FUN_180209930(&DAT_1803fa868);
  return;
}


)B18030aca0",
    "fffeaf5a39ec830f5de8d3fce05f9af3a46dfea2fc158f543823c0ef7051ddee",
    R"F18030aca0C(FUN_180209700
FUN_180209930)F18030aca0C",
    R"F18030aca0D(DAT_1803fa868
DAT_1803fa878)F18030aca0D",
    R"F18030aca0T()F18030aca0T",
    R"F18030aca0F(12: return;)F18030aca0F",
    R"F18030aca0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa868.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa878.)F18030aca0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030aca0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030aca0", "FUN_18030aca0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa868.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa878.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1803fa878);
    trace.call_arguments("FUN_180209930", &image::DAT_1803fa868);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209930", reinterpret_cast<const void*>(&image::FUN_180209930));
    trace.data_ref("DAT_1803fa868", static_cast<const void*>(&image::DAT_1803fa868));
    trace.data_ref("DAT_1803fa878", static_cast<const void*>(&image::DAT_1803fa878));
    // body sha256: fffeaf5a39ec830f5de8d3fce05f9af3a46dfea2fc158f543823c0ef7051ddee
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1803fa878);");
            trace.statement("FUN_180209930(&DAT_1803fa868);");
            trace.statement("return;");
        }
    return kFunction_0x18030aca0;
}

// 0x18030acd0 FUN_18030acd0
// source: re/dump/decompile/0x18030acd0_FUN_18030acd0.c
// size: 12 bytes; thunk: false
// body sha256: e8a336f705f78c5c21ed18684794a7ecd297fb1eb4956eb6a9790c83a4febaad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030acd0{
    "0x18030acd0",
    "FUN_18030acd0",
    R"F18030acd0S(undefined FUN_18030acd0())F18030acd0S",
    R"B18030acd0(// 0x18030acd0  FUN_18030acd0
// size=12 thunk=false
// signature: undefined FUN_18030acd0()
// status: ok


void FUN_18030acd0(void)

{
  FUN_18020d5c0(&DAT_1803fb118);
  return;
}


)B18030acd0",
    "e8a336f705f78c5c21ed18684794a7ecd297fb1eb4956eb6a9790c83a4febaad",
    R"F18030acd0C(FUN_18020d5c0)F18030acd0C",
    R"F18030acd0D(DAT_1803fb118)F18030acd0D",
    R"F18030acd0T()F18030acd0T",
    R"F18030acd0F(11: return;)F18030acd0F",
    R"F18030acd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fb118.)F18030acd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030acd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030acd0", "FUN_18030acd0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fb118.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020d5c0", &image::DAT_1803fb118);
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.data_ref("DAT_1803fb118", static_cast<const void*>(&image::DAT_1803fb118));
    // body sha256: e8a336f705f78c5c21ed18684794a7ecd297fb1eb4956eb6a9790c83a4febaad
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020d5c0(&DAT_1803fb118);");
            trace.statement("return;");
        }
    return kFunction_0x18030acd0;
}

// 0x18030ace0 FUN_18030ace0
// source: re/dump/decompile/0x18030ace0_FUN_18030ace0.c
// size: 33 bytes; thunk: false
// body sha256: 650daef86803b5a671a92db87a74b07f8cfb2625b731bc192c7f39791dca8773
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ace0{
    "0x18030ace0",
    "FUN_18030ace0",
    R"F18030ace0S(undefined FUN_18030ace0())F18030ace0S",
    R"B18030ace0(// 0x18030ace0  FUN_18030ace0
// size=33 thunk=false
// signature: undefined FUN_18030ace0()
// status: ok


void FUN_18030ace0(void)

{
  FUN_180209700(&DAT_1803fa838);
  FUN_180209770(&DAT_1803fa828);
  return;
}


)B18030ace0",
    "650daef86803b5a671a92db87a74b07f8cfb2625b731bc192c7f39791dca8773",
    R"F18030ace0C(FUN_180209700
FUN_180209770)F18030ace0C",
    R"F18030ace0D(DAT_1803fa828
DAT_1803fa838)F18030ace0D",
    R"F18030ace0T()F18030ace0T",
    R"F18030ace0F(12: return;)F18030ace0F",
    R"F18030ace0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa828.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa838.)F18030ace0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ace0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ace0", "FUN_18030ace0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa828.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa838.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1803fa838);
    trace.call_arguments("FUN_180209770", &image::DAT_1803fa828);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1803fa828", static_cast<const void*>(&image::DAT_1803fa828));
    trace.data_ref("DAT_1803fa838", static_cast<const void*>(&image::DAT_1803fa838));
    // body sha256: 650daef86803b5a671a92db87a74b07f8cfb2625b731bc192c7f39791dca8773
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1803fa838);");
            trace.statement("FUN_180209770(&DAT_1803fa828);");
            trace.statement("return;");
        }
    return kFunction_0x18030ace0;
}

// 0x18030ad10 FUN_18030ad10
// source: re/dump/decompile/0x18030ad10_FUN_18030ad10.c
// size: 125 bytes; thunk: false
// body sha256: dc11736d8f0da2cb2472b0f4a43ad569708b974259df35490dc04f9f7e752ee9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ad10{
    "0x18030ad10",
    "FUN_18030ad10",
    R"F18030ad10S(undefined FUN_18030ad10())F18030ad10S",
    R"B18030ad10(// 0x18030ad10  FUN_18030ad10
// size=125 thunk=false
// signature: undefined FUN_18030ad10()
// status: ok


void FUN_18030ad10(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803edce0 != (void *)0x0) {
    _Memory = DAT_1803edce0;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803edcf0 - (longlong)DAT_1803edce0 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803edce0 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803edce0 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030ad72;
    free(_Memory);
    DAT_1803edcf0 = 0;
    DAT_1803edce0 = (void *)0x0;
    DAT_1803edce8 = 0;
  }
  return;
}


)B18030ad10",
    "dc11736d8f0da2cb2472b0f4a43ad569708b974259df35490dc04f9f7e752ee9",
    R"F18030ad10C()F18030ad10C",
    R"F18030ad10D(DAT_1803edce0
DAT_1803edce8
DAT_1803edcf0)F18030ad10D",
    R"F18030ad10T()F18030ad10T",
    R"F18030ad10F(16: if (DAT_1803edce0 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803edcf0 - (longlong)DAT_1803edce0 >> 3) * 8)) &&
33: return;)F18030ad10F",
    R"F18030ad10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edce0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edce8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803edcf0.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030ad10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ad10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ad10", "FUN_18030ad10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edce0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edce8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803edcf0.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803edcf0 - (longlong)DAT_1803edce0 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803edce0 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803edce0 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803edce0", static_cast<const void*>(&image::DAT_1803edce0));
    trace.data_ref("DAT_1803edce8", static_cast<const void*>(&image::DAT_1803edce8));
    trace.data_ref("DAT_1803edcf0", static_cast<const void*>(&image::DAT_1803edcf0));
    // body sha256: dc11736d8f0da2cb2472b0f4a43ad569708b974259df35490dc04f9f7e752ee9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803edce0 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803edce0, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803edce0;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803edcf0 - (longlong)DAT_1803edce0 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803edce0 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803edce0 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030ad72;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803edcf0 = 0;");
                trace.statement("DAT_1803edce0 = (void *)0x0;");
                trace.statement("DAT_1803edce8 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030ad10;
}

// 0x18030ad90 FUN_18030ad90
// source: re/dump/decompile/0x18030ad90_FUN_18030ad90.c
// size: 12 bytes; thunk: false
// body sha256: 4ca444eee184254a0a4feb05abb23504d17b9ea768c2f894cfb02a451a6e6c55
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ad90{
    "0x18030ad90",
    "FUN_18030ad90",
    R"F18030ad90S(undefined FUN_18030ad90())F18030ad90S",
    R"B18030ad90(// 0x18030ad90  FUN_18030ad90
// size=12 thunk=false
// signature: undefined FUN_18030ad90()
// status: ok


void FUN_18030ad90(void)

{
  FUN_180209a80(&DAT_1804581f0);
  return;
}


)B18030ad90",
    "4ca444eee184254a0a4feb05abb23504d17b9ea768c2f894cfb02a451a6e6c55",
    R"F18030ad90C(FUN_180209a80)F18030ad90C",
    R"F18030ad90D(DAT_1804581f0)F18030ad90D",
    R"F18030ad90T()F18030ad90T",
    R"F18030ad90F(11: return;)F18030ad90F",
    R"F18030ad90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804581f0.)F18030ad90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ad90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ad90", "FUN_18030ad90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804581f0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209a80", &image::DAT_1804581f0);
    trace.call_target("FUN_180209a80", reinterpret_cast<const void*>(&image::FUN_180209a80));
    trace.data_ref("DAT_1804581f0", static_cast<const void*>(&image::DAT_1804581f0));
    // body sha256: 4ca444eee184254a0a4feb05abb23504d17b9ea768c2f894cfb02a451a6e6c55
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209a80(&DAT_1804581f0);");
            trace.statement("return;");
        }
    return kFunction_0x18030ad90;
}

// 0x18030ada0 FUN_18030ada0
// source: re/dump/decompile/0x18030ada0_FUN_18030ada0.c
// size: 12 bytes; thunk: false
// body sha256: 7a4fb7cba5974b2be4ca409535844f25f8f8b3a1900890ca1826545fd3ae2906
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ada0{
    "0x18030ada0",
    "FUN_18030ada0",
    R"F18030ada0S(undefined FUN_18030ada0())F18030ada0S",
    R"B18030ada0(// 0x18030ada0  FUN_18030ada0
// size=12 thunk=false
// signature: undefined FUN_18030ada0()
// status: ok


void FUN_18030ada0(void)

{
  FUN_1802095f0(&DAT_180458200);
  return;
}


)B18030ada0",
    "7a4fb7cba5974b2be4ca409535844f25f8f8b3a1900890ca1826545fd3ae2906",
    R"F18030ada0C(FUN_1802095f0)F18030ada0C",
    R"F18030ada0D(DAT_180458200)F18030ada0D",
    R"F18030ada0T()F18030ada0T",
    R"F18030ada0F(11: return;)F18030ada0F",
    R"F18030ada0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180458200.)F18030ada0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ada0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ada0", "FUN_18030ada0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180458200.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0", &image::DAT_180458200);
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    trace.data_ref("DAT_180458200", static_cast<const void*>(&image::DAT_180458200));
    // body sha256: 7a4fb7cba5974b2be4ca409535844f25f8f8b3a1900890ca1826545fd3ae2906
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0(&DAT_180458200);");
            trace.statement("return;");
        }
    return kFunction_0x18030ada0;
}

// 0x18030adb0 FUN_18030adb0
// source: re/dump/decompile/0x18030adb0_FUN_18030adb0.c
// size: 12 bytes; thunk: false
// body sha256: 2a2712c211dd0662f76b3201f5c1d521d1a462937583818ed796cb50796787e6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030adb0{
    "0x18030adb0",
    "FUN_18030adb0",
    R"F18030adb0S(undefined FUN_18030adb0())F18030adb0S",
    R"B18030adb0(// 0x18030adb0  FUN_18030adb0
// size=12 thunk=false
// signature: undefined FUN_18030adb0()
// status: ok


void FUN_18030adb0(void)

{
  FUN_180209a20(&DAT_180570810);
  return;
}


)B18030adb0",
    "2a2712c211dd0662f76b3201f5c1d521d1a462937583818ed796cb50796787e6",
    R"F18030adb0C(FUN_180209a20)F18030adb0C",
    R"F18030adb0D(DAT_180570810)F18030adb0D",
    R"F18030adb0T()F18030adb0T",
    R"F18030adb0F(11: return;)F18030adb0F",
    R"F18030adb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180570810.)F18030adb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030adb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030adb0", "FUN_18030adb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180570810.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209a20", &image::DAT_180570810);
    trace.call_target("FUN_180209a20", reinterpret_cast<const void*>(&image::FUN_180209a20));
    trace.data_ref("DAT_180570810", static_cast<const void*>(&image::DAT_180570810));
    // body sha256: 2a2712c211dd0662f76b3201f5c1d521d1a462937583818ed796cb50796787e6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209a20(&DAT_180570810);");
            trace.statement("return;");
        }
    return kFunction_0x18030adb0;
}

// 0x18030adc0 FUN_18030adc0
// source: re/dump/decompile/0x18030adc0_FUN_18030adc0.c
// size: 33 bytes; thunk: false
// body sha256: a36fbcc4c75bd3e24e98ea860317935f98664445ea129404df85141b05c2e9c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030adc0{
    "0x18030adc0",
    "FUN_18030adc0",
    R"F18030adc0S(undefined FUN_18030adc0())F18030adc0S",
    R"B18030adc0(// 0x18030adc0  FUN_18030adc0
// size=33 thunk=false
// signature: undefined FUN_18030adc0()
// status: ok


void FUN_18030adc0(void)

{
  FUN_180209700(&DAT_1804ecaf8);
  FUN_180209930(&DAT_1804ecae8);
  return;
}


)B18030adc0",
    "a36fbcc4c75bd3e24e98ea860317935f98664445ea129404df85141b05c2e9c7",
    R"F18030adc0C(FUN_180209700
FUN_180209930)F18030adc0C",
    R"F18030adc0D(DAT_1804ecae8
DAT_1804ecaf8)F18030adc0D",
    R"F18030adc0T()F18030adc0T",
    R"F18030adc0F(12: return;)F18030adc0F",
    R"F18030adc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804ecae8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804ecaf8.)F18030adc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030adc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030adc0", "FUN_18030adc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804ecae8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804ecaf8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1804ecaf8);
    trace.call_arguments("FUN_180209930", &image::DAT_1804ecae8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209930", reinterpret_cast<const void*>(&image::FUN_180209930));
    trace.data_ref("DAT_1804ecae8", static_cast<const void*>(&image::DAT_1804ecae8));
    trace.data_ref("DAT_1804ecaf8", static_cast<const void*>(&image::DAT_1804ecaf8));
    // body sha256: a36fbcc4c75bd3e24e98ea860317935f98664445ea129404df85141b05c2e9c7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1804ecaf8);");
            trace.statement("FUN_180209930(&DAT_1804ecae8);");
            trace.statement("return;");
        }
    return kFunction_0x18030adc0;
}

// 0x18030adf0 FUN_18030adf0
// source: re/dump/decompile/0x18030adf0_FUN_18030adf0.c
// size: 33 bytes; thunk: false
// body sha256: 58ba813bf080dc20012253b9ac933876fd77eef46df8b1e8c0a12982088bb338
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030adf0{
    "0x18030adf0",
    "FUN_18030adf0",
    R"F18030adf0S(undefined FUN_18030adf0())F18030adf0S",
    R"B18030adf0(// 0x18030adf0  FUN_18030adf0
// size=33 thunk=false
// signature: undefined FUN_18030adf0()
// status: ok


void FUN_18030adf0(void)

{
  FUN_180209700(&DAT_180458ab8);
  FUN_180209930(&DAT_180458aa8);
  return;
}


)B18030adf0",
    "58ba813bf080dc20012253b9ac933876fd77eef46df8b1e8c0a12982088bb338",
    R"F18030adf0C(FUN_180209700
FUN_180209930)F18030adf0C",
    R"F18030adf0D(DAT_180458aa8
DAT_180458ab8)F18030adf0D",
    R"F18030adf0T()F18030adf0T",
    R"F18030adf0F(12: return;)F18030adf0F",
    R"F18030adf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180458aa8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180458ab8.)F18030adf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030adf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030adf0", "FUN_18030adf0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180458aa8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180458ab8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_180458ab8);
    trace.call_arguments("FUN_180209930", &image::DAT_180458aa8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209930", reinterpret_cast<const void*>(&image::FUN_180209930));
    trace.data_ref("DAT_180458aa8", static_cast<const void*>(&image::DAT_180458aa8));
    trace.data_ref("DAT_180458ab8", static_cast<const void*>(&image::DAT_180458ab8));
    // body sha256: 58ba813bf080dc20012253b9ac933876fd77eef46df8b1e8c0a12982088bb338
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_180458ab8);");
            trace.statement("FUN_180209930(&DAT_180458aa8);");
            trace.statement("return;");
        }
    return kFunction_0x18030adf0;
}

// 0x18030ae20 FUN_18030ae20
// source: re/dump/decompile/0x18030ae20_FUN_18030ae20.c
// size: 33 bytes; thunk: false
// body sha256: 7e2252f6d12ccb82f45dff9398f8773c517d1f5ac12c7e9d2dc7c2f3092fe44b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ae20{
    "0x18030ae20",
    "FUN_18030ae20",
    R"F18030ae20S(undefined FUN_18030ae20())F18030ae20S",
    R"B18030ae20(// 0x18030ae20  FUN_18030ae20
// size=33 thunk=false
// signature: undefined FUN_18030ae20()
// status: ok


void FUN_18030ae20(void)

{
  FUN_18020e450(&DAT_1803e9878);
  FUN_18020e450(&DAT_1803e9858);
  return;
}


)B18030ae20",
    "7e2252f6d12ccb82f45dff9398f8773c517d1f5ac12c7e9d2dc7c2f3092fe44b",
    R"F18030ae20C(FUN_18020e450)F18030ae20C",
    R"F18030ae20D(DAT_1803e9858
DAT_1803e9878)F18030ae20D",
    R"F18030ae20T()F18030ae20T",
    R"F18030ae20F(12: return;)F18030ae20F",
    R"F18030ae20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9858.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9878.)F18030ae20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ae20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ae20", "FUN_18030ae20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9858.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9878.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e9878);
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e9858);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9858", static_cast<const void*>(&image::DAT_1803e9858));
    trace.data_ref("DAT_1803e9878", static_cast<const void*>(&image::DAT_1803e9878));
    // body sha256: 7e2252f6d12ccb82f45dff9398f8773c517d1f5ac12c7e9d2dc7c2f3092fe44b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803e9878);");
            trace.statement("FUN_18020e450(&DAT_1803e9858);");
            trace.statement("return;");
        }
    return kFunction_0x18030ae20;
}

// 0x18030ae50 FUN_18030ae50
// source: re/dump/decompile/0x18030ae50_FUN_18030ae50.c
// size: 129 bytes; thunk: false
// body sha256: 55f989299a2c545640a381dcc5c0864bd9dd1298a5f79a27b77183ce65073a79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ae50{
    "0x18030ae50",
    "FUN_18030ae50",
    R"F18030ae50S(undefined FUN_18030ae50())F18030ae50S",
    R"B18030ae50(// 0x18030ae50  FUN_18030ae50
// size=129 thunk=false
// signature: undefined FUN_18030ae50()
// status: ok


void FUN_18030ae50(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180423b00 != (void *)0x0) {
    _Memory = DAT_180423b00;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_180423b10 - (longlong)DAT_180423b00 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_180423b00 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_180423b00 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030aeb6;
    free(_Memory);
    DAT_180423b10 = 0;
    DAT_180423b00 = (void *)0x0;
    DAT_180423b08 = 0;
  }
  return;
}


)B18030ae50",
    "55f989299a2c545640a381dcc5c0864bd9dd1298a5f79a27b77183ce65073a79",
    R"F18030ae50C()F18030ae50C",
    R"F18030ae50D(DAT_180423b00
DAT_180423b08
DAT_180423b10)F18030ae50D",
    R"F18030ae50T()F18030ae50T",
    R"F18030ae50F(16: if (DAT_180423b00 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_180423b10 - (longlong)DAT_180423b00 >> 4) << 4)) &&
33: return;)F18030ae50F",
    R"F18030ae50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423b00.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423b08.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423b10.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030ae50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ae50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ae50", "FUN_18030ae50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423b00.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423b08.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423b10.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_180423b10 - (longlong)DAT_180423b00 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_180423b00 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_180423b00 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_180423b00", static_cast<const void*>(&image::DAT_180423b00));
    trace.data_ref("DAT_180423b08", static_cast<const void*>(&image::DAT_180423b08));
    trace.data_ref("DAT_180423b10", static_cast<const void*>(&image::DAT_180423b10));
    // body sha256: 55f989299a2c545640a381dcc5c0864bd9dd1298a5f79a27b77183ce65073a79
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_180423b00 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_180423b00, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_180423b00;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_180423b10 - (longlong)DAT_180423b00 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_180423b00 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_180423b00 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030aeb6;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_180423b10 = 0;");
                trace.statement("DAT_180423b00 = (void *)0x0;");
                trace.statement("DAT_180423b08 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030ae50;
}

// 0x18030aee0 FUN_18030aee0
// source: re/dump/decompile/0x18030aee0_FUN_18030aee0.c
// size: 33 bytes; thunk: false
// body sha256: f1214fc729b36ae4038175cd33b1da7b367f94010b8c94c4e634b317a6747b58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030aee0{
    "0x18030aee0",
    "FUN_18030aee0",
    R"F18030aee0S(undefined FUN_18030aee0())F18030aee0S",
    R"B18030aee0(// 0x18030aee0  FUN_18030aee0
// size=33 thunk=false
// signature: undefined FUN_18030aee0()
// status: ok


void FUN_18030aee0(void)

{
  FUN_180209700(&DAT_1805b8858);
  FUN_180209770(&DAT_1805b8848);
  return;
}


)B18030aee0",
    "f1214fc729b36ae4038175cd33b1da7b367f94010b8c94c4e634b317a6747b58",
    R"F18030aee0C(FUN_180209700
FUN_180209770)F18030aee0C",
    R"F18030aee0D(DAT_1805b8848
DAT_1805b8858)F18030aee0D",
    R"F18030aee0T()F18030aee0T",
    R"F18030aee0F(12: return;)F18030aee0F",
    R"F18030aee0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805b8848.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805b8858.)F18030aee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030aee0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030aee0", "FUN_18030aee0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805b8848.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805b8858.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805b8858);
    trace.call_arguments("FUN_180209770", &image::DAT_1805b8848);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805b8848", static_cast<const void*>(&image::DAT_1805b8848));
    trace.data_ref("DAT_1805b8858", static_cast<const void*>(&image::DAT_1805b8858));
    // body sha256: f1214fc729b36ae4038175cd33b1da7b367f94010b8c94c4e634b317a6747b58
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805b8858);");
            trace.statement("FUN_180209770(&DAT_1805b8848);");
            trace.statement("return;");
        }
    return kFunction_0x18030aee0;
}

// 0x18030af10 FUN_18030af10
// source: re/dump/decompile/0x18030af10_FUN_18030af10.c
// size: 115 bytes; thunk: false
// body sha256: b35f01b3d7094db786d02341ccdcab9c462ed1b2c8e2a3a720fc2da0a7d8a4e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030af10{
    "0x18030af10",
    "FUN_18030af10",
    R"F18030af10S(undefined FUN_18030af10())F18030af10S",
    R"B18030af10(// 0x18030af10  FUN_18030af10
// size=115 thunk=false
// signature: undefined FUN_18030af10()
// status: ok


void FUN_18030af10(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803fcf88 != (void *)0x0) {
    _Memory = DAT_1803fcf88;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803fcf98 - (longlong)DAT_1803fcf88 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803fcf88 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803fcf88 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030af68;
    free(_Memory);
    DAT_1803fcf98 = 0;
    DAT_1803fcf88 = (void *)0x0;
    DAT_1803fcf90 = 0;
  }
  return;
}


)B18030af10",
    "b35f01b3d7094db786d02341ccdcab9c462ed1b2c8e2a3a720fc2da0a7d8a4e4",
    R"F18030af10C()F18030af10C",
    R"F18030af10D(DAT_1803fcf88
DAT_1803fcf90
DAT_1803fcf98)F18030af10D",
    R"F18030af10T()F18030af10T",
    R"F18030af10F(16: if (DAT_1803fcf88 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803fcf98 - (longlong)DAT_1803fcf88 >> 3) * 8)) &&
33: return;)F18030af10F",
    R"F18030af10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcf88.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcf90.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcf98.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030af10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030af10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030af10", "FUN_18030af10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcf88.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcf90.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcf98.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803fcf98 - (longlong)DAT_1803fcf88 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803fcf88 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcf88 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803fcf88", static_cast<const void*>(&image::DAT_1803fcf88));
    trace.data_ref("DAT_1803fcf90", static_cast<const void*>(&image::DAT_1803fcf90));
    trace.data_ref("DAT_1803fcf98", static_cast<const void*>(&image::DAT_1803fcf98));
    // body sha256: b35f01b3d7094db786d02341ccdcab9c462ed1b2c8e2a3a720fc2da0a7d8a4e4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803fcf88 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803fcf88, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803fcf88;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803fcf98 - (longlong)DAT_1803fcf88 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803fcf88 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcf88 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030af68;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803fcf98 = 0;");
                trace.statement("DAT_1803fcf88 = (void *)0x0;");
                trace.statement("DAT_1803fcf90 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030af10;
}

// 0x18030af90 FUN_18030af90
// source: re/dump/decompile/0x18030af90_FUN_18030af90.c
// size: 290 bytes; thunk: false
// body sha256: d65f8fb7465b37459cab7d11c34f4ccde60842385d8432f018769a0b22ed0993
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030af90{
    "0x18030af90",
    "FUN_18030af90",
    R"F18030af90S(undefined FUN_18030af90())F18030af90S",
    R"B18030af90(// 0x18030af90  FUN_18030af90
// size=290 thunk=false
// signature: undefined FUN_18030af90()
// status: ok


void FUN_18030af90(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  
  if (DAT_18056df30 != 0) {
    do {
      lVar4 = *(longlong *)
               ((longlong)DAT_18056df18 +
               (DAT_18056df30 + DAT_18056df28 + -1 & DAT_18056df20 - 1U) * 8);
      FUN_18020e450(lVar4 + 0x20);
      FUN_18020e450(lVar4);
      DAT_18056df30 = DAT_18056df30 + -1;
    } while (DAT_18056df30 != 0);
    DAT_18056df28 = 0;
    DAT_18056df30 = 0;
  }
  pvVar2 = DAT_18056df18;
  lVar4 = DAT_18056df20;
  if (DAT_18056df18 != (void *)0x0) {
    while (0 < lVar4) {
      lVar4 = lVar4 + -1;
      pvVar3 = *(void **)((longlong)pvVar2 + lVar4 * 8);
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
        pvVar2 = DAT_18056df18;
      }
    }
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(DAT_18056df20 * 8)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    free(pvVar3);
    DAT_18056df18 = (void *)0x0;
    DAT_18056df20 = 0;
  }
  pvVar2 = DAT_18056df10;
  DAT_18056df10 = (void *)0x0;
  free(pvVar2);
  return;
}


)B18030af90",
    "d65f8fb7465b37459cab7d11c34f4ccde60842385d8432f018769a0b22ed0993",
    R"F18030af90C(FUN_18020e450)F18030af90C",
    R"F18030af90D(DAT_18056df10
DAT_18056df18
DAT_18056df20
DAT_18056df28
DAT_18056df30)F18030af90D",
    R"F18030af90T()F18030af90T",
    R"F18030af90F(15: if (DAT_18056df30 != 0) {
16: do {
29: if (DAT_18056df18 != (void *)0x0) {
30: while (0 < lVar4) {
33: if (pvVar3 != (void *)0x0) {
39: if ((0xfff < (ulonglong)(DAT_18056df20 * 8)) &&
46: return;
55: return;)F18030af90F",
    R"F18030af90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056df10.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056df18.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056df20.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056df28.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056df30.
TODO: resolve the indirect call in body 42: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 43: (*pcVar1)(5);.
TODO: resolve the indirect call in body 44: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 45: (*pcVar1)();.)F18030af90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030af90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030af90", "FUN_18030af90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * pvVar2{};
    [[maybe_unused]] void * pvVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056df10.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056df18.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056df20.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056df28.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056df30.
    // TODO: resolve the indirect call in body 42: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 43: (*pcVar1)(5);.
    // TODO: resolve the indirect call in body 44: pcVar1 = (code *)swi(3);.
    // TODO: resolve the indirect call in body 45: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)(DAT_18056df20 * 8)) && (pvVar3 = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_18020e450", lVar4 + 0x20);
    trace.call_arguments("FUN_18020e450", lVar4);
    trace.call_arguments("free", pvVar3);
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("swi", 3);
    trace.call_arguments("free", pvVar3);
    trace.call_arguments("free", pvVar2);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_18056df10", static_cast<const void*>(&image::DAT_18056df10));
    trace.data_ref("DAT_18056df18", static_cast<const void*>(&image::DAT_18056df18));
    trace.data_ref("DAT_18056df20", static_cast<const void*>(&image::DAT_18056df20));
    trace.data_ref("DAT_18056df28", static_cast<const void*>(&image::DAT_18056df28));
    trace.data_ref("DAT_18056df30", static_cast<const void*>(&image::DAT_18056df30));
    // body sha256: d65f8fb7465b37459cab7d11c34f4ccde60842385d8432f018769a0b22ed0993
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *pvVar2;");
            trace.statement("void *pvVar3;");
            trace.statement("longlong lVar4;");
            if (trace.checked_condition("if (DAT_18056df30 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_18056df30 != 0); })) {
                do {
                    trace.statement("lVar4 = *(longlong *)");
                    trace.statement("((longlong)DAT_18056df18 +");
                    trace.statement("(DAT_18056df30 + DAT_18056df28 + -1 & DAT_18056df20 - 1U) * 8);");
                    trace.statement("FUN_18020e450(lVar4 + 0x20);");
                    trace.statement("FUN_18020e450(lVar4);");
                    trace.statement("DAT_18056df30 = DAT_18056df30 + -1;");
                } while (trace.loop_condition("while (DAT_18056df30 != 0);"));
                trace.statement("DAT_18056df28 = 0;");
                trace.statement("DAT_18056df30 = 0;");
            }
            trace.statement("pvVar2 = DAT_18056df18;");
            trace.statement("lVar4 = DAT_18056df20;");
            if (trace.checked_condition("if (DAT_18056df18 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_18056df18, 0) != (void *)0x0); })) {
                while (trace.checked_loop_condition("while (0 < lVar4)", [&]() -> bool { return static_cast<bool>(0 < lVar4); })) {
                    trace.statement("lVar4 = lVar4 + -1;");
                    trace.statement("pvVar3 = *(void **)((longlong)pvVar2 + lVar4 * 8);");
                    if (trace.checked_condition("if (pvVar3 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(pvVar3 != (void *)0x0); })) {
                        trace.statement("free(pvVar3);");
                        trace.statement("pvVar2 = DAT_18056df18;");
                    }
                }
                trace.statement("pvVar3 = pvVar2;");
                if (trace.condition("if ((0xfff < (ulonglong)(DAT_18056df20 * 8)) && (pvVar3 = *(void **)((longlong)pvVar2 + -8), 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))))")) {
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)(5);");
                    trace.statement("pcVar1 = (code *)swi(3);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("return;");
                }
                trace.statement("free(pvVar3);");
                trace.statement("DAT_18056df18 = (void *)0x0;");
                trace.statement("DAT_18056df20 = 0;");
            }
            trace.statement("pvVar2 = DAT_18056df10;");
            trace.statement("DAT_18056df10 = (void *)0x0;");
            trace.statement("free(pvVar2);");
            trace.statement("return;");
        }
    return kFunction_0x18030af90;
}

// 0x18030b0c0 FUN_18030b0c0
// source: re/dump/decompile/0x18030b0c0_FUN_18030b0c0.c
// size: 33 bytes; thunk: false
// body sha256: e5cb1a2b6a24aca349b1749bde112177803c27e775cc47a39cbe62bfcac20221
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b0c0{
    "0x18030b0c0",
    "FUN_18030b0c0",
    R"F18030b0c0S(undefined FUN_18030b0c0())F18030b0c0S",
    R"B18030b0c0(// 0x18030b0c0  FUN_18030b0c0
// size=33 thunk=false
// signature: undefined FUN_18030b0c0()
// status: ok


void FUN_18030b0c0(void)

{
  FUN_180209700(&DAT_18056dee8);
  FUN_180209770(&DAT_18056ded8);
  return;
}


)B18030b0c0",
    "e5cb1a2b6a24aca349b1749bde112177803c27e775cc47a39cbe62bfcac20221",
    R"F18030b0c0C(FUN_180209700
FUN_180209770)F18030b0c0C",
    R"F18030b0c0D(DAT_18056ded8
DAT_18056dee8)F18030b0c0D",
    R"F18030b0c0T()F18030b0c0T",
    R"F18030b0c0F(12: return;)F18030b0c0F",
    R"F18030b0c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056ded8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056dee8.)F18030b0c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b0c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b0c0", "FUN_18030b0c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056ded8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056dee8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_18056dee8);
    trace.call_arguments("FUN_180209770", &image::DAT_18056ded8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_18056ded8", static_cast<const void*>(&image::DAT_18056ded8));
    trace.data_ref("DAT_18056dee8", static_cast<const void*>(&image::DAT_18056dee8));
    // body sha256: e5cb1a2b6a24aca349b1749bde112177803c27e775cc47a39cbe62bfcac20221
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_18056dee8);");
            trace.statement("FUN_180209770(&DAT_18056ded8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b0c0;
}

// 0x18030b0f0 FUN_18030b0f0
// source: re/dump/decompile/0x18030b0f0_FUN_18030b0f0.c
// size: 12 bytes; thunk: false
// body sha256: 011d3d5dc0c60b604e432806f03f83fa31bc76a6a2515eb39802ddd7e5e5fbd6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b0f0{
    "0x18030b0f0",
    "FUN_18030b0f0",
    R"F18030b0f0S(undefined FUN_18030b0f0())F18030b0f0S",
    R"B18030b0f0(// 0x18030b0f0  FUN_18030b0f0
// size=12 thunk=false
// signature: undefined FUN_18030b0f0()
// status: ok


void FUN_18030b0f0(void)

{
  FUN_18020e450(s_unknown_server_1803e9fb8);
  return;
}


)B18030b0f0",
    "011d3d5dc0c60b604e432806f03f83fa31bc76a6a2515eb39802ddd7e5e5fbd6",
    R"F18030b0f0C(FUN_18020e450)F18030b0f0C",
    R"F18030b0f0D()F18030b0f0D",
    R"F18030b0f0T()F18030b0f0T",
    R"F18030b0f0F(11: return;)F18030b0f0F",
    R"F18030b0f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b0f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b0f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b0f0", "FUN_18030b0f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for FUN_18020e450: s_unknown_server_1803e9fb8 [reason: ambiguous operand type]
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    // body sha256: 011d3d5dc0c60b604e432806f03f83fa31bc76a6a2515eb39802ddd7e5e5fbd6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(s_unknown_server_1803e9fb8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b0f0;
}

// 0x18030b100 FUN_18030b100
// source: re/dump/decompile/0x18030b100_FUN_18030b100.c
// size: 12 bytes; thunk: false
// body sha256: 86dd638a0a5efb010db83ecdc5d750968ead2d70e974f20d6e3c6c54670dc85a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b100{
    "0x18030b100",
    "FUN_18030b100",
    R"F18030b100S(undefined FUN_18030b100())F18030b100S",
    R"B18030b100(// 0x18030b100  FUN_18030b100
// size=12 thunk=false
// signature: undefined FUN_18030b100()
// status: ok


void FUN_18030b100(void)

{
  FUN_18020e450(&DAT_1803eb320);
  return;
}


)B18030b100",
    "86dd638a0a5efb010db83ecdc5d750968ead2d70e974f20d6e3c6c54670dc85a",
    R"F18030b100C(FUN_18020e450)F18030b100C",
    R"F18030b100D(DAT_1803eb320)F18030b100D",
    R"F18030b100T()F18030b100T",
    R"F18030b100F(11: return;)F18030b100F",
    R"F18030b100U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb320.)F18030b100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b100() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b100", "FUN_18030b100");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb320.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803eb320);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803eb320", static_cast<const void*>(&image::DAT_1803eb320));
    // body sha256: 86dd638a0a5efb010db83ecdc5d750968ead2d70e974f20d6e3c6c54670dc85a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803eb320);");
            trace.statement("return;");
        }
    return kFunction_0x18030b100;
}

// 0x18030b110 FUN_18030b110
// source: re/dump/decompile/0x18030b110_FUN_18030b110.c
// size: 12 bytes; thunk: false
// body sha256: 00e9a4345507b3c758ff00a5f4649db32bfa38ee88916764b3a9fceda714875e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b110{
    "0x18030b110",
    "FUN_18030b110",
    R"F18030b110S(undefined FUN_18030b110())F18030b110S",
    R"B18030b110(// 0x18030b110  FUN_18030b110
// size=12 thunk=false
// signature: undefined FUN_18030b110()
// status: ok


void FUN_18030b110(void)

{
  FUN_18020e450(&DAT_1803dc8d0);
  return;
}


)B18030b110",
    "00e9a4345507b3c758ff00a5f4649db32bfa38ee88916764b3a9fceda714875e",
    R"F18030b110C(FUN_18020e450)F18030b110C",
    R"F18030b110D(DAT_1803dc8d0)F18030b110D",
    R"F18030b110T()F18030b110T",
    R"F18030b110F(11: return;)F18030b110F",
    R"F18030b110U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803dc8d0.)F18030b110U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b110() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b110", "FUN_18030b110");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803dc8d0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803dc8d0);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803dc8d0", static_cast<const void*>(&image::DAT_1803dc8d0));
    // body sha256: 00e9a4345507b3c758ff00a5f4649db32bfa38ee88916764b3a9fceda714875e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803dc8d0);");
            trace.statement("return;");
        }
    return kFunction_0x18030b110;
}

// 0x18030b120 FUN_18030b120
// source: re/dump/decompile/0x18030b120_FUN_18030b120.c
// size: 12 bytes; thunk: false
// body sha256: 4b3b08eedff39a22a627cdfd612ab8ae2400c681bec33dd335358b50744ca642
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b120{
    "0x18030b120",
    "FUN_18030b120",
    R"F18030b120S(undefined FUN_18030b120())F18030b120S",
    R"B18030b120(// 0x18030b120  FUN_18030b120
// size=12 thunk=false
// signature: undefined FUN_18030b120()
// status: ok


void FUN_18030b120(void)

{
  FUN_18020e450(&DAT_1803dc8f0);
  return;
}


)B18030b120",
    "4b3b08eedff39a22a627cdfd612ab8ae2400c681bec33dd335358b50744ca642",
    R"F18030b120C(FUN_18020e450)F18030b120C",
    R"F18030b120D(DAT_1803dc8f0)F18030b120D",
    R"F18030b120T()F18030b120T",
    R"F18030b120F(11: return;)F18030b120F",
    R"F18030b120U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803dc8f0.)F18030b120U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b120() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b120", "FUN_18030b120");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803dc8f0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803dc8f0);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803dc8f0", static_cast<const void*>(&image::DAT_1803dc8f0));
    // body sha256: 4b3b08eedff39a22a627cdfd612ab8ae2400c681bec33dd335358b50744ca642
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803dc8f0);");
            trace.statement("return;");
        }
    return kFunction_0x18030b120;
}

// 0x18030b130 FUN_18030b130
// source: re/dump/decompile/0x18030b130_FUN_18030b130.c
// size: 12 bytes; thunk: false
// body sha256: e7ff01f6c5eb50ee586fca22751b93681aebb4899c7e351d79fdcdb889a5b151
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b130{
    "0x18030b130",
    "FUN_18030b130",
    R"F18030b130S(undefined FUN_18030b130())F18030b130S",
    R"B18030b130(// 0x18030b130  FUN_18030b130
// size=12 thunk=false
// signature: undefined FUN_18030b130()
// status: ok


void FUN_18030b130(void)

{
  FUN_18020e450(&DAT_1803de0f0);
  return;
}


)B18030b130",
    "e7ff01f6c5eb50ee586fca22751b93681aebb4899c7e351d79fdcdb889a5b151",
    R"F18030b130C(FUN_18020e450)F18030b130C",
    R"F18030b130D(DAT_1803de0f0)F18030b130D",
    R"F18030b130T()F18030b130T",
    R"F18030b130F(11: return;)F18030b130F",
    R"F18030b130U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803de0f0.)F18030b130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b130() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b130", "FUN_18030b130");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803de0f0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803de0f0);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803de0f0", static_cast<const void*>(&image::DAT_1803de0f0));
    // body sha256: e7ff01f6c5eb50ee586fca22751b93681aebb4899c7e351d79fdcdb889a5b151
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803de0f0);");
            trace.statement("return;");
        }
    return kFunction_0x18030b130;
}

// 0x18030b140 FUN_18030b140
// source: re/dump/decompile/0x18030b140_FUN_18030b140.c
// size: 148 bytes; thunk: false
// body sha256: ae8be275fb5064c45baf16e7bc531b2aa6b5a1fa9a9c35d3efa278e3f62cceea
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b140{
    "0x18030b140",
    "FUN_18030b140",
    R"F18030b140S(undefined FUN_18030b140())F18030b140S",
    R"B18030b140(// 0x18030b140  FUN_18030b140
// size=148 thunk=false
// signature: undefined FUN_18030b140()
// status: ok


void FUN_18030b140(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803fcc08 != (void *)0x0) {
    FUN_180214c90(DAT_1803fcc08,DAT_1803fcc10);
    _Memory = DAT_1803fcc08;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803fcc18 - (longlong)DAT_1803fcc08 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803fcc08 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803fcc08 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030b1b9;
    free(_Memory);
    DAT_1803fcc18 = 0;
    DAT_1803fcc08 = (void *)0x0;
    DAT_1803fcc10 = 0;
  }
  return;
}


)B18030b140",
    "ae8be275fb5064c45baf16e7bc531b2aa6b5a1fa9a9c35d3efa278e3f62cceea",
    R"F18030b140C(FUN_180214c90)F18030b140C",
    R"F18030b140D(DAT_1803fcc08
DAT_1803fcc10
DAT_1803fcc18)F18030b140D",
    R"F18030b140T()F18030b140T",
    R"F18030b140F(16: if (DAT_1803fcc08 != (void *)0x0) {
20: if ((0xfff < (ulonglong)((DAT_1803fcc18 - (longlong)DAT_1803fcc08 >> 4) << 4)) &&
34: return;)F18030b140F",
    R"F18030b140U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc08.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc10.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc18.
TODO: resolve the indirect call in body 24: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 25: (*pcVar1)();.)F18030b140U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b140() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b140", "FUN_18030b140");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc08.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc10.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc18.
    // TODO: resolve the indirect call in body 24: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 25: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803fcc18 - (longlong)DAT_1803fcc08 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_1803fcc08 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcc08 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180214c90", image::DAT_1803fcc08, image::DAT_1803fcc10);
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.call_target("FUN_180214c90", reinterpret_cast<const void*>(&image::FUN_180214c90));
    trace.data_ref("DAT_1803fcc08", static_cast<const void*>(&image::DAT_1803fcc08));
    trace.data_ref("DAT_1803fcc10", static_cast<const void*>(&image::DAT_1803fcc10));
    trace.data_ref("DAT_1803fcc18", static_cast<const void*>(&image::DAT_1803fcc18));
    // body sha256: ae8be275fb5064c45baf16e7bc531b2aa6b5a1fa9a9c35d3efa278e3f62cceea
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803fcc08 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803fcc08, 0) != (void *)0x0); })) {
                trace.statement("FUN_180214c90(DAT_1803fcc08,DAT_1803fcc10);");
                trace.statement("_Memory = DAT_1803fcc08;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803fcc18 - (longlong)DAT_1803fcc08 >> 4) << 4)) && (_Memory = *(void **)((longlong)DAT_1803fcc08 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcc08 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030b1b9;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803fcc18 = 0;");
                trace.statement("DAT_1803fcc08 = (void *)0x0;");
                trace.statement("DAT_1803fcc10 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030b140;
}

// 0x18030b1e0 FUN_18030b1e0
// source: re/dump/decompile/0x18030b1e0_FUN_18030b1e0.c
// size: 115 bytes; thunk: false
// body sha256: 97a0c716a238be16957314353016bbbc77377edfcd615b9472ad8e24da5011c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b1e0{
    "0x18030b1e0",
    "FUN_18030b1e0",
    R"F18030b1e0S(undefined FUN_18030b1e0())F18030b1e0S",
    R"B18030b1e0(// 0x18030b1e0  FUN_18030b1e0
// size=115 thunk=false
// signature: undefined FUN_18030b1e0()
// status: ok


void FUN_18030b1e0(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803fcbf0 != (void *)0x0) {
    _Memory = DAT_1803fcbf0;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803fcc00 - (longlong)DAT_1803fcbf0 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803fcbf0 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803fcbf0 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030b238;
    free(_Memory);
    DAT_1803fcc00 = 0;
    DAT_1803fcbf0 = (void *)0x0;
    DAT_1803fcbf8 = 0;
  }
  return;
}


)B18030b1e0",
    "97a0c716a238be16957314353016bbbc77377edfcd615b9472ad8e24da5011c0",
    R"F18030b1e0C()F18030b1e0C",
    R"F18030b1e0D(DAT_1803fcbf0
DAT_1803fcbf8
DAT_1803fcc00)F18030b1e0D",
    R"F18030b1e0T()F18030b1e0T",
    R"F18030b1e0F(16: if (DAT_1803fcbf0 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803fcc00 - (longlong)DAT_1803fcbf0 >> 3) * 8)) &&
33: return;)F18030b1e0F",
    R"F18030b1e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcbf0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcbf8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc00.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030b1e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b1e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b1e0", "FUN_18030b1e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcbf0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcbf8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc00.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803fcc00 - (longlong)DAT_1803fcbf0 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803fcbf0 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcbf0 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803fcbf0", static_cast<const void*>(&image::DAT_1803fcbf0));
    trace.data_ref("DAT_1803fcbf8", static_cast<const void*>(&image::DAT_1803fcbf8));
    trace.data_ref("DAT_1803fcc00", static_cast<const void*>(&image::DAT_1803fcc00));
    // body sha256: 97a0c716a238be16957314353016bbbc77377edfcd615b9472ad8e24da5011c0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803fcbf0 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803fcbf0, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803fcbf0;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803fcc00 - (longlong)DAT_1803fcbf0 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803fcbf0 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fcbf0 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030b238;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803fcc00 = 0;");
                trace.statement("DAT_1803fcbf0 = (void *)0x0;");
                trace.statement("DAT_1803fcbf8 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030b1e0;
}

// 0x18030b260 FUN_18030b260
// source: re/dump/decompile/0x18030b260_FUN_18030b260.c
// size: 12 bytes; thunk: false
// body sha256: a8e301e258b30e23747ac515fb5171414c43329928637bf13f6d721e200251b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b260{
    "0x18030b260",
    "FUN_18030b260",
    R"F18030b260S(undefined FUN_18030b260())F18030b260S",
    R"B18030b260(// 0x18030b260  FUN_18030b260
// size=12 thunk=false
// signature: undefined FUN_18030b260()
// status: ok


void FUN_18030b260(void)

{
  FUN_18020d5c0(&DAT_1803fcc98);
  return;
}


)B18030b260",
    "a8e301e258b30e23747ac515fb5171414c43329928637bf13f6d721e200251b7",
    R"F18030b260C(FUN_18020d5c0)F18030b260C",
    R"F18030b260D(DAT_1803fcc98)F18030b260D",
    R"F18030b260T()F18030b260T",
    R"F18030b260F(11: return;)F18030b260F",
    R"F18030b260U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcc98.)F18030b260U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b260() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b260", "FUN_18030b260");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcc98.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020d5c0", &image::DAT_1803fcc98);
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.data_ref("DAT_1803fcc98", static_cast<const void*>(&image::DAT_1803fcc98));
    // body sha256: a8e301e258b30e23747ac515fb5171414c43329928637bf13f6d721e200251b7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020d5c0(&DAT_1803fcc98);");
            trace.statement("return;");
        }
    return kFunction_0x18030b260;
}

// 0x18030b280 FUN_18030b280
// source: re/dump/decompile/0x18030b280_FUN_18030b280.c
// size: 115 bytes; thunk: false
// body sha256: 69f94c7a7faa3f72c95e665cadc741fdc087e3b68bd722d31d81f4f92e177879
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b280{
    "0x18030b280",
    "FUN_18030b280",
    R"F18030b280S(undefined FUN_18030b280())F18030b280S",
    R"B18030b280(// 0x18030b280  FUN_18030b280
// size=115 thunk=false
// signature: undefined FUN_18030b280()
// status: ok


void FUN_18030b280(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803fe520 != (void *)0x0) {
    _Memory = DAT_1803fe520;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803fe530 - (longlong)DAT_1803fe520 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803fe520 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803fe520 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030b2d8;
    free(_Memory);
    DAT_1803fe530 = 0;
    DAT_1803fe520 = (void *)0x0;
    DAT_1803fe528 = 0;
  }
  return;
}


)B18030b280",
    "69f94c7a7faa3f72c95e665cadc741fdc087e3b68bd722d31d81f4f92e177879",
    R"F18030b280C()F18030b280C",
    R"F18030b280D(DAT_1803fe520
DAT_1803fe528
DAT_1803fe530)F18030b280D",
    R"F18030b280T()F18030b280T",
    R"F18030b280F(16: if (DAT_1803fe520 != (void *)0x0) {
19: if ((0xfff < (ulonglong)((DAT_1803fe530 - (longlong)DAT_1803fe520 >> 3) * 8)) &&
33: return;)F18030b280F",
    R"F18030b280U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fe520.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fe528.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fe530.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F18030b280U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b280() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b280", "FUN_18030b280");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fe520.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fe528.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fe530.
    // TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)((DAT_1803fe530 - (longlong)DAT_1803fe520 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803fe520 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fe520 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_1803fe520", static_cast<const void*>(&image::DAT_1803fe520));
    trace.data_ref("DAT_1803fe528", static_cast<const void*>(&image::DAT_1803fe528));
    trace.data_ref("DAT_1803fe530", static_cast<const void*>(&image::DAT_1803fe530));
    // body sha256: 69f94c7a7faa3f72c95e665cadc741fdc087e3b68bd722d31d81f4f92e177879
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_1803fe520 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_1803fe520, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_1803fe520;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)((DAT_1803fe530 - (longlong)DAT_1803fe520 >> 3) * 8)) && (_Memory = *(void **)((longlong)DAT_1803fe520 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_1803fe520 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (void *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030b2d8;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_1803fe530 = 0;");
                trace.statement("DAT_1803fe520 = (void *)0x0;");
                trace.statement("DAT_1803fe528 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030b280;
}

// 0x18030b300 FUN_18030b300
// source: re/dump/decompile/0x18030b300_FUN_18030b300.c
// size: 12 bytes; thunk: false
// body sha256: 9b320be55d9a7d68a4aedee7d95de83f39802f3b77d7f18979ce17e825d22927
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b300{
    "0x18030b300",
    "FUN_18030b300",
    R"F18030b300S(undefined FUN_18030b300())F18030b300S",
    R"B18030b300(// 0x18030b300  FUN_18030b300
// size=12 thunk=false
// signature: undefined FUN_18030b300()
// status: ok


void FUN_18030b300(void)

{
  FUN_18020e450(&DAT_1803e9580);
  return;
}


)B18030b300",
    "9b320be55d9a7d68a4aedee7d95de83f39802f3b77d7f18979ce17e825d22927",
    R"F18030b300C(FUN_18020e450)F18030b300C",
    R"F18030b300D(DAT_1803e9580)F18030b300D",
    R"F18030b300T()F18030b300T",
    R"F18030b300F(11: return;)F18030b300F",
    R"F18030b300U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9580.)F18030b300U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b300() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b300", "FUN_18030b300");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9580.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020e450", &image::DAT_1803e9580);
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803e9580", static_cast<const void*>(&image::DAT_1803e9580));
    // body sha256: 9b320be55d9a7d68a4aedee7d95de83f39802f3b77d7f18979ce17e825d22927
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020e450(&DAT_1803e9580);");
            trace.statement("return;");
        }
    return kFunction_0x18030b300;
}

// 0x18030b360 FUN_18030b360
// source: re/dump/decompile/0x18030b360_FUN_18030b360.c
// size: 12 bytes; thunk: false
// body sha256: e49baf9e9e9852ad3c5ff1af6ee671ad0b485334307e507916667a19211397d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b360{
    "0x18030b360",
    "FUN_18030b360",
    R"F18030b360S(undefined FUN_18030b360())F18030b360S",
    R"B18030b360(// 0x18030b360  FUN_18030b360
// size=12 thunk=false
// signature: undefined FUN_18030b360()
// status: ok


void FUN_18030b360(void)

{
  FUN_18020c930(&DAT_18042a8d8);
  return;
}


)B18030b360",
    "e49baf9e9e9852ad3c5ff1af6ee671ad0b485334307e507916667a19211397d3",
    R"F18030b360C(FUN_18020c930)F18030b360C",
    R"F18030b360D(DAT_18042a8d8)F18030b360D",
    R"F18030b360T()F18030b360T",
    R"F18030b360F(11: return;)F18030b360F",
    R"F18030b360U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042a8d8.)F18030b360U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b360() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b360", "FUN_18030b360");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042a8d8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020c930", &image::DAT_18042a8d8);
    trace.call_target("FUN_18020c930", reinterpret_cast<const void*>(&image::FUN_18020c930));
    trace.data_ref("DAT_18042a8d8", static_cast<const void*>(&image::DAT_18042a8d8));
    // body sha256: e49baf9e9e9852ad3c5ff1af6ee671ad0b485334307e507916667a19211397d3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020c930(&DAT_18042a8d8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b360;
}

// 0x18030b3e0 FUN_18030b3e0
// source: re/dump/decompile/0x18030b3e0_FUN_18030b3e0.c
// size: 100 bytes; thunk: false
// body sha256: 83ed8bc27fe0f7e38e2c7ef67e874f57f335144374f8492da86f7ef20e345b98
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b3e0{
    "0x18030b3e0",
    "FUN_18030b3e0",
    R"F18030b3e0S(undefined FUN_18030b3e0())F18030b3e0S",
    R"B18030b3e0(// 0x18030b3e0  FUN_18030b3e0
// size=100 thunk=false
// signature: undefined FUN_18030b3e0()
// status: ok


void FUN_18030b3e0(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180423b50 != (void *)0x0) {
    _Memory = DAT_180423b50;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)(DAT_180423b60 - (longlong)DAT_180423b50)) &&
       (_Memory = *(void **)((longlong)DAT_180423b50 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_180423b50 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030b429;
    free(_Memory);
    DAT_180423b60 = 0;
    DAT_180423b50 = (void *)0x0;
    DAT_180423b58 = 0;
  }
  return;
}


)B18030b3e0",
    "83ed8bc27fe0f7e38e2c7ef67e874f57f335144374f8492da86f7ef20e345b98",
    R"F18030b3e0C()F18030b3e0C",
    R"F18030b3e0D(DAT_180423b50
DAT_180423b58
DAT_180423b60)F18030b3e0D",
    R"F18030b3e0T()F18030b3e0T",
    R"F18030b3e0F(16: if (DAT_180423b50 != (void *)0x0) {
19: if ((0xfff < (ulonglong)(DAT_180423b60 - (longlong)DAT_180423b50)) &&
32: return;)F18030b3e0F",
    R"F18030b3e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423b50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423b58.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180423b60.
TODO: resolve the indirect call in body 22: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 23: _Memory = (void *)(*pcVar1)(5);.)F18030b3e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b3e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b3e0", "FUN_18030b3e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] void * _Memory{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t auStack_28[8]{};
    [[maybe_unused]] std::uint8_t auStack_20[32]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423b50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423b58.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180423b60.
    // TODO: resolve the indirect call in body 22: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 23: _Memory = (void *)(*pcVar1)(5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((0xfff < (ulonglong)(DAT_180423b60 - (longlong)DAT_180423b50)) && (_Memory = *(void **)((longlong)DAT_180423b50 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_180423b50 + (-8 - (longlong)_Memory)))) [reason: unresolved global storage/width]
    trace.call_arguments("swi", 0x29);
    trace.call_arguments("free", _Memory);
    trace.data_ref("DAT_180423b50", static_cast<const void*>(&image::DAT_180423b50));
    trace.data_ref("DAT_180423b58", static_cast<const void*>(&image::DAT_180423b58));
    trace.data_ref("DAT_180423b60", static_cast<const void*>(&image::DAT_180423b60));
    // body sha256: 83ed8bc27fe0f7e38e2c7ef67e874f57f335144374f8492da86f7ef20e345b98
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("void *_Memory;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 auStack_28 [8];");
            trace.statement("undefined1 auStack_20 [32];");
            if (trace.checked_condition("if (DAT_180423b50 != (void *)0x0)", [&]() -> bool { return static_cast<bool>(load_at<void*>(&image::DAT_180423b50, 0) != (void *)0x0); })) {
                trace.statement("_Memory = DAT_180423b50;");
                trace.statement("puVar2 = auStack_28;");
                if (trace.condition("if ((0xfff < (ulonglong)(DAT_180423b60 - (longlong)DAT_180423b50)) && (_Memory = *(void **)((longlong)DAT_180423b50 + -8), puVar2 = auStack_28, 0x1f < (ulonglong)((longlong)DAT_180423b50 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("_Memory = (void *)(*pcVar1)(5);");
                    trace.statement("puVar2 = auStack_20;");
                }
                trace.statement("*(undefined8 *)(puVar2 + -8) = 0x18030b429;");
                trace.statement("free(_Memory);");
                trace.statement("DAT_180423b60 = 0;");
                trace.statement("DAT_180423b50 = (void *)0x0;");
                trace.statement("DAT_180423b58 = 0;");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030b3e0;
}

// 0x18030b490 FUN_18030b490
// source: re/dump/decompile/0x18030b490_FUN_18030b490.c
// size: 12 bytes; thunk: false
// body sha256: ee82873805238eb019d95bf12cc00f3556a78c69bfa3e241902bb2b09e159ebc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b490{
    "0x18030b490",
    "FUN_18030b490",
    R"F18030b490S(undefined FUN_18030b490())F18030b490S",
    R"B18030b490(// 0x18030b490  FUN_18030b490
// size=12 thunk=false
// signature: undefined FUN_18030b490()
// status: ok


void FUN_18030b490(void)

{
  FUN_18020c930(&DAT_180427788);
  return;
}


)B18030b490",
    "ee82873805238eb019d95bf12cc00f3556a78c69bfa3e241902bb2b09e159ebc",
    R"F18030b490C(FUN_18020c930)F18030b490C",
    R"F18030b490D(DAT_180427788)F18030b490D",
    R"F18030b490T()F18030b490T",
    R"F18030b490F(11: return;)F18030b490F",
    R"F18030b490U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427788.)F18030b490U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b490() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b490", "FUN_18030b490");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427788.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_18020c930", &image::DAT_180427788);
    trace.call_target("FUN_18020c930", reinterpret_cast<const void*>(&image::FUN_18020c930));
    trace.data_ref("DAT_180427788", static_cast<const void*>(&image::DAT_180427788));
    // body sha256: ee82873805238eb019d95bf12cc00f3556a78c69bfa3e241902bb2b09e159ebc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_18020c930(&DAT_180427788);");
            trace.statement("return;");
        }
    return kFunction_0x18030b490;
}

// 0x18030b4a0 FUN_18030b4a0
// source: re/dump/decompile/0x18030b4a0_FUN_18030b4a0.c
// size: 17 bytes; thunk: false
// body sha256: de3b49153501fb8f0bf23afd1c7c539a73c6fbad6c2c51b2bd85b6e198acf326
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b4a0{
    "0x18030b4a0",
    "FUN_18030b4a0",
    R"F18030b4a0S(undefined FUN_18030b4a0())F18030b4a0S",
    R"B18030b4a0(// 0x18030b4a0  FUN_18030b4a0
// size=17 thunk=false
// signature: undefined FUN_18030b4a0()
// status: ok


void FUN_18030b4a0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b4a0",
    "de3b49153501fb8f0bf23afd1c7c539a73c6fbad6c2c51b2bd85b6e198acf326",
    R"F18030b4a0C(FUN_1802095f0)F18030b4a0C",
    R"F18030b4a0D()F18030b4a0D",
    R"F18030b4a0T()F18030b4a0T",
    R"F18030b4a0F(11: return;)F18030b4a0F",
    R"F18030b4a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b4a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b4a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b4a0", "FUN_18030b4a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: de3b49153501fb8f0bf23afd1c7c539a73c6fbad6c2c51b2bd85b6e198acf326
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b4a0;
}

// 0x18030b4c0 FUN_18030b4c0
// source: re/dump/decompile/0x18030b4c0_FUN_18030b4c0.c
// size: 17 bytes; thunk: false
// body sha256: 381b6446293ae3dfd35592efb8cc0f4981d2aa32787e0d264eba3635eb0f6845
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b4c0{
    "0x18030b4c0",
    "FUN_18030b4c0",
    R"F18030b4c0S(undefined FUN_18030b4c0())F18030b4c0S",
    R"B18030b4c0(// 0x18030b4c0  FUN_18030b4c0
// size=17 thunk=false
// signature: undefined FUN_18030b4c0()
// status: ok


void FUN_18030b4c0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b4c0",
    "381b6446293ae3dfd35592efb8cc0f4981d2aa32787e0d264eba3635eb0f6845",
    R"F18030b4c0C(FUN_1802095f0)F18030b4c0C",
    R"F18030b4c0D()F18030b4c0D",
    R"F18030b4c0T()F18030b4c0T",
    R"F18030b4c0F(11: return;)F18030b4c0F",
    R"F18030b4c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b4c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b4c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b4c0", "FUN_18030b4c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 381b6446293ae3dfd35592efb8cc0f4981d2aa32787e0d264eba3635eb0f6845
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b4c0;
}

// 0x18030b4e0 FUN_18030b4e0
// source: re/dump/decompile/0x18030b4e0_FUN_18030b4e0.c
// size: 17 bytes; thunk: false
// body sha256: 4f6226666838a4dfeb0be766152ecdc7b22db3d4a81303a8292cefc0c0e0f229
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b4e0{
    "0x18030b4e0",
    "FUN_18030b4e0",
    R"F18030b4e0S(undefined FUN_18030b4e0())F18030b4e0S",
    R"B18030b4e0(// 0x18030b4e0  FUN_18030b4e0
// size=17 thunk=false
// signature: undefined FUN_18030b4e0()
// status: ok


void FUN_18030b4e0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b4e0",
    "4f6226666838a4dfeb0be766152ecdc7b22db3d4a81303a8292cefc0c0e0f229",
    R"F18030b4e0C(FUN_1802095f0)F18030b4e0C",
    R"F18030b4e0D()F18030b4e0D",
    R"F18030b4e0T()F18030b4e0T",
    R"F18030b4e0F(11: return;)F18030b4e0F",
    R"F18030b4e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b4e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b4e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b4e0", "FUN_18030b4e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 4f6226666838a4dfeb0be766152ecdc7b22db3d4a81303a8292cefc0c0e0f229
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b4e0;
}

// 0x18030b500 FUN_18030b500
// source: re/dump/decompile/0x18030b500_FUN_18030b500.c
// size: 17 bytes; thunk: false
// body sha256: bf8966cfd8f632098dd5d1df92fa80871325edd56bc82c684bfc5bbb7512534d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b500{
    "0x18030b500",
    "FUN_18030b500",
    R"F18030b500S(undefined FUN_18030b500())F18030b500S",
    R"B18030b500(// 0x18030b500  FUN_18030b500
// size=17 thunk=false
// signature: undefined FUN_18030b500()
// status: ok


void FUN_18030b500(void)

{
  FUN_1802095f0();
  return;
}


)B18030b500",
    "bf8966cfd8f632098dd5d1df92fa80871325edd56bc82c684bfc5bbb7512534d",
    R"F18030b500C(FUN_1802095f0)F18030b500C",
    R"F18030b500D()F18030b500D",
    R"F18030b500T()F18030b500T",
    R"F18030b500F(11: return;)F18030b500F",
    R"F18030b500U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b500U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b500() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b500", "FUN_18030b500");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: bf8966cfd8f632098dd5d1df92fa80871325edd56bc82c684bfc5bbb7512534d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b500;
}

// 0x18030b520 FUN_18030b520
// source: re/dump/decompile/0x18030b520_FUN_18030b520.c
// size: 17 bytes; thunk: false
// body sha256: c274bac33f2ffd42a7035a9bc449bc9c6c868fbc47819ebbb4cd2f4635aafad2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b520{
    "0x18030b520",
    "FUN_18030b520",
    R"F18030b520S(undefined FUN_18030b520())F18030b520S",
    R"B18030b520(// 0x18030b520  FUN_18030b520
// size=17 thunk=false
// signature: undefined FUN_18030b520()
// status: ok


void FUN_18030b520(void)

{
  FUN_1802095f0();
  return;
}


)B18030b520",
    "c274bac33f2ffd42a7035a9bc449bc9c6c868fbc47819ebbb4cd2f4635aafad2",
    R"F18030b520C(FUN_1802095f0)F18030b520C",
    R"F18030b520D()F18030b520D",
    R"F18030b520T()F18030b520T",
    R"F18030b520F(11: return;)F18030b520F",
    R"F18030b520U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b520U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b520() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b520", "FUN_18030b520");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: c274bac33f2ffd42a7035a9bc449bc9c6c868fbc47819ebbb4cd2f4635aafad2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b520;
}

// 0x18030b540 FUN_18030b540
// source: re/dump/decompile/0x18030b540_FUN_18030b540.c
// size: 17 bytes; thunk: false
// body sha256: 2ff543cd102f712a1a35e5cfb892e45200736d892e6d6a5bfdb100a8b8b90fe8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b540{
    "0x18030b540",
    "FUN_18030b540",
    R"F18030b540S(undefined FUN_18030b540())F18030b540S",
    R"B18030b540(// 0x18030b540  FUN_18030b540
// size=17 thunk=false
// signature: undefined FUN_18030b540()
// status: ok


void FUN_18030b540(void)

{
  FUN_1802095f0();
  return;
}


)B18030b540",
    "2ff543cd102f712a1a35e5cfb892e45200736d892e6d6a5bfdb100a8b8b90fe8",
    R"F18030b540C(FUN_1802095f0)F18030b540C",
    R"F18030b540D()F18030b540D",
    R"F18030b540T()F18030b540T",
    R"F18030b540F(11: return;)F18030b540F",
    R"F18030b540U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b540() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b540", "FUN_18030b540");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 2ff543cd102f712a1a35e5cfb892e45200736d892e6d6a5bfdb100a8b8b90fe8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b540;
}

// 0x18030b560 FUN_18030b560
// source: re/dump/decompile/0x18030b560_FUN_18030b560.c
// size: 17 bytes; thunk: false
// body sha256: 7cd36e62481128f29aac45496e993483a8035656bd78f13e554ac152f0755ad7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b560{
    "0x18030b560",
    "FUN_18030b560",
    R"F18030b560S(undefined FUN_18030b560())F18030b560S",
    R"B18030b560(// 0x18030b560  FUN_18030b560
// size=17 thunk=false
// signature: undefined FUN_18030b560()
// status: ok


void FUN_18030b560(void)

{
  FUN_1802095f0();
  return;
}


)B18030b560",
    "7cd36e62481128f29aac45496e993483a8035656bd78f13e554ac152f0755ad7",
    R"F18030b560C(FUN_1802095f0)F18030b560C",
    R"F18030b560D()F18030b560D",
    R"F18030b560T()F18030b560T",
    R"F18030b560F(11: return;)F18030b560F",
    R"F18030b560U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b560() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b560", "FUN_18030b560");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 7cd36e62481128f29aac45496e993483a8035656bd78f13e554ac152f0755ad7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b560;
}

// 0x18030b580 FUN_18030b580
// source: re/dump/decompile/0x18030b580_FUN_18030b580.c
// size: 17 bytes; thunk: false
// body sha256: 594fe6b30105b865c6b95c0516a8b7d9cddc95a324263930b4fc4d8109d93997
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b580{
    "0x18030b580",
    "FUN_18030b580",
    R"F18030b580S(undefined FUN_18030b580())F18030b580S",
    R"B18030b580(// 0x18030b580  FUN_18030b580
// size=17 thunk=false
// signature: undefined FUN_18030b580()
// status: ok


void FUN_18030b580(void)

{
  FUN_1802095f0();
  return;
}


)B18030b580",
    "594fe6b30105b865c6b95c0516a8b7d9cddc95a324263930b4fc4d8109d93997",
    R"F18030b580C(FUN_1802095f0)F18030b580C",
    R"F18030b580D()F18030b580D",
    R"F18030b580T()F18030b580T",
    R"F18030b580F(11: return;)F18030b580F",
    R"F18030b580U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b580U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b580() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b580", "FUN_18030b580");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 594fe6b30105b865c6b95c0516a8b7d9cddc95a324263930b4fc4d8109d93997
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b580;
}

// 0x18030b5a0 FUN_18030b5a0
// source: re/dump/decompile/0x18030b5a0_FUN_18030b5a0.c
// size: 17 bytes; thunk: false
// body sha256: d38dabe3ad48ecf7800bc3237475ec194f3f382e07b1a80ea5be7c5960db3a64
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b5a0{
    "0x18030b5a0",
    "FUN_18030b5a0",
    R"F18030b5a0S(undefined FUN_18030b5a0())F18030b5a0S",
    R"B18030b5a0(// 0x18030b5a0  FUN_18030b5a0
// size=17 thunk=false
// signature: undefined FUN_18030b5a0()
// status: ok


void FUN_18030b5a0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b5a0",
    "d38dabe3ad48ecf7800bc3237475ec194f3f382e07b1a80ea5be7c5960db3a64",
    R"F18030b5a0C(FUN_1802095f0)F18030b5a0C",
    R"F18030b5a0D()F18030b5a0D",
    R"F18030b5a0T()F18030b5a0T",
    R"F18030b5a0F(11: return;)F18030b5a0F",
    R"F18030b5a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b5a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b5a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b5a0", "FUN_18030b5a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: d38dabe3ad48ecf7800bc3237475ec194f3f382e07b1a80ea5be7c5960db3a64
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b5a0;
}

// 0x18030b5c0 FUN_18030b5c0
// source: re/dump/decompile/0x18030b5c0_FUN_18030b5c0.c
// size: 17 bytes; thunk: false
// body sha256: f08cf9797bfb5de8f33df046ff73f749f1ee2cb567b3ed10a89b5f038fa9aad9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b5c0{
    "0x18030b5c0",
    "FUN_18030b5c0",
    R"F18030b5c0S(undefined FUN_18030b5c0())F18030b5c0S",
    R"B18030b5c0(// 0x18030b5c0  FUN_18030b5c0
// size=17 thunk=false
// signature: undefined FUN_18030b5c0()
// status: ok


void FUN_18030b5c0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b5c0",
    "f08cf9797bfb5de8f33df046ff73f749f1ee2cb567b3ed10a89b5f038fa9aad9",
    R"F18030b5c0C(FUN_1802095f0)F18030b5c0C",
    R"F18030b5c0D()F18030b5c0D",
    R"F18030b5c0T()F18030b5c0T",
    R"F18030b5c0F(11: return;)F18030b5c0F",
    R"F18030b5c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b5c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b5c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b5c0", "FUN_18030b5c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: f08cf9797bfb5de8f33df046ff73f749f1ee2cb567b3ed10a89b5f038fa9aad9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b5c0;
}

// 0x18030b5e0 FUN_18030b5e0
// source: re/dump/decompile/0x18030b5e0_FUN_18030b5e0.c
// size: 17 bytes; thunk: false
// body sha256: 53e820b817265480fee00f16263a7d1da76d6f8b791907b37bc53c5ee9bbd17d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b5e0{
    "0x18030b5e0",
    "FUN_18030b5e0",
    R"F18030b5e0S(undefined FUN_18030b5e0())F18030b5e0S",
    R"B18030b5e0(// 0x18030b5e0  FUN_18030b5e0
// size=17 thunk=false
// signature: undefined FUN_18030b5e0()
// status: ok


void FUN_18030b5e0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b5e0",
    "53e820b817265480fee00f16263a7d1da76d6f8b791907b37bc53c5ee9bbd17d",
    R"F18030b5e0C(FUN_1802095f0)F18030b5e0C",
    R"F18030b5e0D()F18030b5e0D",
    R"F18030b5e0T()F18030b5e0T",
    R"F18030b5e0F(11: return;)F18030b5e0F",
    R"F18030b5e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b5e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b5e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b5e0", "FUN_18030b5e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 53e820b817265480fee00f16263a7d1da76d6f8b791907b37bc53c5ee9bbd17d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b5e0;
}

// 0x18030b600 FUN_18030b600
// source: re/dump/decompile/0x18030b600_FUN_18030b600.c
// size: 17 bytes; thunk: false
// body sha256: 883215ae0ed81af03c6e272ffa79889f5854603627230e15dd6146d94fe60e03
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b600{
    "0x18030b600",
    "FUN_18030b600",
    R"F18030b600S(undefined FUN_18030b600())F18030b600S",
    R"B18030b600(// 0x18030b600  FUN_18030b600
// size=17 thunk=false
// signature: undefined FUN_18030b600()
// status: ok


void FUN_18030b600(void)

{
  FUN_1802095f0();
  return;
}


)B18030b600",
    "883215ae0ed81af03c6e272ffa79889f5854603627230e15dd6146d94fe60e03",
    R"F18030b600C(FUN_1802095f0)F18030b600C",
    R"F18030b600D()F18030b600D",
    R"F18030b600T()F18030b600T",
    R"F18030b600F(11: return;)F18030b600F",
    R"F18030b600U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b600() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b600", "FUN_18030b600");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 883215ae0ed81af03c6e272ffa79889f5854603627230e15dd6146d94fe60e03
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b600;
}

// 0x18030b620 FUN_18030b620
// source: re/dump/decompile/0x18030b620_FUN_18030b620.c
// size: 17 bytes; thunk: false
// body sha256: 2ee9a488118edb641772c9ea0450068da3a35be14bb7016da91143274b447b32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b620{
    "0x18030b620",
    "FUN_18030b620",
    R"F18030b620S(undefined FUN_18030b620())F18030b620S",
    R"B18030b620(// 0x18030b620  FUN_18030b620
// size=17 thunk=false
// signature: undefined FUN_18030b620()
// status: ok


void FUN_18030b620(void)

{
  FUN_1802095f0();
  return;
}


)B18030b620",
    "2ee9a488118edb641772c9ea0450068da3a35be14bb7016da91143274b447b32",
    R"F18030b620C(FUN_1802095f0)F18030b620C",
    R"F18030b620D()F18030b620D",
    R"F18030b620T()F18030b620T",
    R"F18030b620F(11: return;)F18030b620F",
    R"F18030b620U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b620() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b620", "FUN_18030b620");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 2ee9a488118edb641772c9ea0450068da3a35be14bb7016da91143274b447b32
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b620;
}

// 0x18030b640 FUN_18030b640
// source: re/dump/decompile/0x18030b640_FUN_18030b640.c
// size: 17 bytes; thunk: false
// body sha256: cb205a304828c9e8b058db50e011f68964ac2438b6756c4ec4e6e005ae271db9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b640{
    "0x18030b640",
    "FUN_18030b640",
    R"F18030b640S(undefined FUN_18030b640())F18030b640S",
    R"B18030b640(// 0x18030b640  FUN_18030b640
// size=17 thunk=false
// signature: undefined FUN_18030b640()
// status: ok


void FUN_18030b640(void)

{
  FUN_1802095f0();
  return;
}


)B18030b640",
    "cb205a304828c9e8b058db50e011f68964ac2438b6756c4ec4e6e005ae271db9",
    R"F18030b640C(FUN_1802095f0)F18030b640C",
    R"F18030b640D()F18030b640D",
    R"F18030b640T()F18030b640T",
    R"F18030b640F(11: return;)F18030b640F",
    R"F18030b640U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b640() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b640", "FUN_18030b640");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: cb205a304828c9e8b058db50e011f68964ac2438b6756c4ec4e6e005ae271db9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b640;
}

// 0x18030b660 FUN_18030b660
// source: re/dump/decompile/0x18030b660_FUN_18030b660.c
// size: 17 bytes; thunk: false
// body sha256: 2cb3efdd3d518294e5a4477de10fd420b6b40b9bc65fc3785c0d75781674f67a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b660{
    "0x18030b660",
    "FUN_18030b660",
    R"F18030b660S(undefined FUN_18030b660())F18030b660S",
    R"B18030b660(// 0x18030b660  FUN_18030b660
// size=17 thunk=false
// signature: undefined FUN_18030b660()
// status: ok


void FUN_18030b660(void)

{
  FUN_1802095f0();
  return;
}


)B18030b660",
    "2cb3efdd3d518294e5a4477de10fd420b6b40b9bc65fc3785c0d75781674f67a",
    R"F18030b660C(FUN_1802095f0)F18030b660C",
    R"F18030b660D()F18030b660D",
    R"F18030b660T()F18030b660T",
    R"F18030b660F(11: return;)F18030b660F",
    R"F18030b660U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b660U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b660() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b660", "FUN_18030b660");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 2cb3efdd3d518294e5a4477de10fd420b6b40b9bc65fc3785c0d75781674f67a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b660;
}

// 0x18030b680 FUN_18030b680
// source: re/dump/decompile/0x18030b680_FUN_18030b680.c
// size: 17 bytes; thunk: false
// body sha256: 719fe187dc8ee214bcafd0bb4db62c1be288dfef3c16ecea46338b40fd1c6243
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b680{
    "0x18030b680",
    "FUN_18030b680",
    R"F18030b680S(undefined FUN_18030b680())F18030b680S",
    R"B18030b680(// 0x18030b680  FUN_18030b680
// size=17 thunk=false
// signature: undefined FUN_18030b680()
// status: ok


void FUN_18030b680(void)

{
  FUN_1802095f0();
  return;
}


)B18030b680",
    "719fe187dc8ee214bcafd0bb4db62c1be288dfef3c16ecea46338b40fd1c6243",
    R"F18030b680C(FUN_1802095f0)F18030b680C",
    R"F18030b680D()F18030b680D",
    R"F18030b680T()F18030b680T",
    R"F18030b680F(11: return;)F18030b680F",
    R"F18030b680U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b680U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b680() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b680", "FUN_18030b680");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 719fe187dc8ee214bcafd0bb4db62c1be288dfef3c16ecea46338b40fd1c6243
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b680;
}

// 0x18030b6a0 FUN_18030b6a0
// source: re/dump/decompile/0x18030b6a0_FUN_18030b6a0.c
// size: 12 bytes; thunk: false
// body sha256: a965edae4a054f811c8120b358f0c2a5a4121ad3549da6b4f8b863a88b5c8de2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b6a0{
    "0x18030b6a0",
    "FUN_18030b6a0",
    R"F18030b6a0S(undefined FUN_18030b6a0())F18030b6a0S",
    R"B18030b6a0(// 0x18030b6a0  FUN_18030b6a0
// size=12 thunk=false
// signature: undefined FUN_18030b6a0()
// status: ok


void FUN_18030b6a0(void)

{
  FUN_1802095f0(&DAT_1803faac0);
  return;
}


)B18030b6a0",
    "a965edae4a054f811c8120b358f0c2a5a4121ad3549da6b4f8b863a88b5c8de2",
    R"F18030b6a0C(FUN_1802095f0)F18030b6a0C",
    R"F18030b6a0D(DAT_1803faac0)F18030b6a0D",
    R"F18030b6a0T()F18030b6a0T",
    R"F18030b6a0F(11: return;)F18030b6a0F",
    R"F18030b6a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803faac0.)F18030b6a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b6a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b6a0", "FUN_18030b6a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803faac0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0", &image::DAT_1803faac0);
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    trace.data_ref("DAT_1803faac0", static_cast<const void*>(&image::DAT_1803faac0));
    // body sha256: a965edae4a054f811c8120b358f0c2a5a4121ad3549da6b4f8b863a88b5c8de2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0(&DAT_1803faac0);");
            trace.statement("return;");
        }
    return kFunction_0x18030b6a0;
}

// 0x18030b6b0 FUN_18030b6b0
// source: re/dump/decompile/0x18030b6b0_FUN_18030b6b0.c
// size: 17 bytes; thunk: false
// body sha256: 3dd3dd5502508392ada8dc8345332047467160d69764fbc4d6f6b85d5a6146f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b6b0{
    "0x18030b6b0",
    "FUN_18030b6b0",
    R"F18030b6b0S(undefined FUN_18030b6b0())F18030b6b0S",
    R"B18030b6b0(// 0x18030b6b0  FUN_18030b6b0
// size=17 thunk=false
// signature: undefined FUN_18030b6b0()
// status: ok


void FUN_18030b6b0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b6b0",
    "3dd3dd5502508392ada8dc8345332047467160d69764fbc4d6f6b85d5a6146f8",
    R"F18030b6b0C(FUN_1802095f0)F18030b6b0C",
    R"F18030b6b0D()F18030b6b0D",
    R"F18030b6b0T()F18030b6b0T",
    R"F18030b6b0F(11: return;)F18030b6b0F",
    R"F18030b6b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b6b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b6b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b6b0", "FUN_18030b6b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: 3dd3dd5502508392ada8dc8345332047467160d69764fbc4d6f6b85d5a6146f8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b6b0;
}

// 0x18030b6d0 FUN_18030b6d0
// source: re/dump/decompile/0x18030b6d0_FUN_18030b6d0.c
// size: 17 bytes; thunk: false
// body sha256: b56df0d72ed236904fca2a2f791aeb837b8c7fb8d612730f74d08d0ddca70136
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b6d0{
    "0x18030b6d0",
    "FUN_18030b6d0",
    R"F18030b6d0S(undefined FUN_18030b6d0())F18030b6d0S",
    R"B18030b6d0(// 0x18030b6d0  FUN_18030b6d0
// size=17 thunk=false
// signature: undefined FUN_18030b6d0()
// status: ok


void FUN_18030b6d0(void)

{
  FUN_1802095f0();
  return;
}


)B18030b6d0",
    "b56df0d72ed236904fca2a2f791aeb837b8c7fb8d612730f74d08d0ddca70136",
    R"F18030b6d0C(FUN_1802095f0)F18030b6d0C",
    R"F18030b6d0D()F18030b6d0D",
    R"F18030b6d0T()F18030b6d0T",
    R"F18030b6d0F(11: return;)F18030b6d0F",
    R"F18030b6d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F18030b6d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b6d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b6d0", "FUN_18030b6d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1802095f0");
    trace.call_target("FUN_1802095f0", reinterpret_cast<const void*>(&image::FUN_1802095f0));
    // body sha256: b56df0d72ed236904fca2a2f791aeb837b8c7fb8d612730f74d08d0ddca70136
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_1802095f0();");
            trace.statement("return;");
        }
    return kFunction_0x18030b6d0;
}

// 0x18030b6f0 FUN_18030b6f0
// source: re/dump/decompile/0x18030b6f0_FUN_18030b6f0.c
// size: 78 bytes; thunk: false
// body sha256: 88e26a2a60811ac9d5a24afef5c9b9bc1191521082f32ce885263b3c655b89b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b6f0{
    "0x18030b6f0",
    "FUN_18030b6f0",
    R"F18030b6f0S(undefined FUN_18030b6f0())F18030b6f0S",
    R"B18030b6f0(// 0x18030b6f0  FUN_18030b6f0
// size=78 thunk=false
// signature: undefined FUN_18030b6f0()
// status: ok


void FUN_18030b6f0(void)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = (uint)DAT_1803fae38 & 3;
  puVar2 = DAT_1803fae28;
  if (uVar1 != 1) {
    if (uVar1 != 2) goto LAB_18030b723;
    puVar2 = &DAT_1803fae00;
  }
  (*(code *)*DAT_1803fae30)(puVar2);
LAB_18030b723:
  DAT_1803fae38 = 0;
  FUN_180241430(&DAT_1803fadf0);
  return;
}


)B18030b6f0",
    "88e26a2a60811ac9d5a24afef5c9b9bc1191521082f32ce885263b3c655b89b9",
    R"F18030b6f0C(FUN_180241430)F18030b6f0C",
    R"F18030b6f0D(LAB_18030b723
DAT_1803fadf0
DAT_1803fae00
DAT_1803fae28
DAT_1803fae30
DAT_1803fae38)F18030b6f0D",
    R"F18030b6f0T()F18030b6f0T",
    R"F18030b6f0F(15: if (uVar1 != 1) {
16: if (uVar1 != 2) goto LAB_18030b723;
20: LAB_18030b723:
23: return;)F18030b6f0F",
    R"F18030b6f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_18030b723.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fae00.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fae28.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fae30.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fae38.
TODO: resolve the indirect call in body 19: (*(code *)*DAT_1803fae30)(puVar2);.)F18030b6f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b6f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b6f0", "FUN_18030b6f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint32_t uVar1{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_18030b723.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fadf0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fae00.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fae28.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fae30.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fae38.
    // TODO: resolve the indirect call in body 19: (*(code *)*DAT_1803fae30)(puVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180241430", &image::DAT_1803fadf0);
    trace.call_target("FUN_180241430", reinterpret_cast<const void*>(&image::FUN_180241430));
    trace.data_ref("DAT_1803fadf0", static_cast<const void*>(&image::DAT_1803fadf0));
    trace.data_ref("DAT_1803fae00", static_cast<const void*>(&image::DAT_1803fae00));
    trace.data_ref("DAT_1803fae28", static_cast<const void*>(&image::DAT_1803fae28));
    trace.data_ref("DAT_1803fae30", static_cast<const void*>(&image::DAT_1803fae30));
    trace.data_ref("DAT_1803fae38", static_cast<const void*>(&image::DAT_1803fae38));
    // body sha256: 88e26a2a60811ac9d5a24afef5c9b9bc1191521082f32ce885263b3c655b89b9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("uint uVar1;");
            trace.statement("undefined *puVar2;");
            trace.statement("uVar1 = (uint)DAT_1803fae38 & 3;");
            trace.statement("puVar2 = DAT_1803fae28;");
            if (trace.checked_condition("if (uVar1 != 1)", [&]() -> bool { return static_cast<bool>(uVar1 != 1); })) {
                if (trace.condition("if (uVar1 != 2) goto LAB_18030b723; puVar2 = &DAT_1803fae00; } (*(code *)*DAT_1803fae30)(puVar2); LAB_18030b723: DAT_1803fae38 = 0; FUN_180241430(&DAT_1803fadf0); return; }")) {
                }
            }
        }
    return kFunction_0x18030b6f0;
}

// 0x18030b740 FUN_18030b740
// source: re/dump/decompile/0x18030b740_FUN_18030b740.c
// size: 78 bytes; thunk: false
// body sha256: 43e633f5ed067b2d719fc9a790292bf104beeb0e09ea6f572a3e408a7bdb6e24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b740{
    "0x18030b740",
    "FUN_18030b740",
    R"F18030b740S(undefined FUN_18030b740())F18030b740S",
    R"B18030b740(// 0x18030b740  FUN_18030b740
// size=78 thunk=false
// signature: undefined FUN_18030b740()
// status: ok


void FUN_18030b740(void)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = (uint)DAT_1803fade8 & 3;
  puVar2 = DAT_1803fadd8;
  if (uVar1 != 1) {
    if (uVar1 != 2) goto LAB_18030b773;
    puVar2 = &DAT_1803fadb0;
  }
  (*(code *)*DAT_1803fade0)(puVar2);
LAB_18030b773:
  DAT_1803fade8 = 0;
  FUN_180241430(&DAT_1803fada0);
  return;
}


)B18030b740",
    "43e633f5ed067b2d719fc9a790292bf104beeb0e09ea6f572a3e408a7bdb6e24",
    R"F18030b740C(FUN_180241430)F18030b740C",
    R"F18030b740D(LAB_18030b773
DAT_1803fada0
DAT_1803fadb0
DAT_1803fadd8
DAT_1803fade0
DAT_1803fade8)F18030b740D",
    R"F18030b740T()F18030b740T",
    R"F18030b740F(15: if (uVar1 != 1) {
16: if (uVar1 != 2) goto LAB_18030b773;
20: LAB_18030b773:
23: return;)F18030b740F",
    R"F18030b740U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_18030b773.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fada0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fadb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fadd8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fade0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fade8.
TODO: resolve the indirect call in body 19: (*(code *)*DAT_1803fade0)(puVar2);.)F18030b740U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b740() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b740", "FUN_18030b740");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint32_t uVar1{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_18030b773.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fada0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fadb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fadd8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fade0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fade8.
    // TODO: resolve the indirect call in body 19: (*(code *)*DAT_1803fade0)(puVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180241430", &image::DAT_1803fada0);
    trace.call_target("FUN_180241430", reinterpret_cast<const void*>(&image::FUN_180241430));
    trace.data_ref("DAT_1803fada0", static_cast<const void*>(&image::DAT_1803fada0));
    trace.data_ref("DAT_1803fadb0", static_cast<const void*>(&image::DAT_1803fadb0));
    trace.data_ref("DAT_1803fadd8", static_cast<const void*>(&image::DAT_1803fadd8));
    trace.data_ref("DAT_1803fade0", static_cast<const void*>(&image::DAT_1803fade0));
    trace.data_ref("DAT_1803fade8", static_cast<const void*>(&image::DAT_1803fade8));
    // body sha256: 43e633f5ed067b2d719fc9a790292bf104beeb0e09ea6f572a3e408a7bdb6e24
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("uint uVar1;");
            trace.statement("undefined *puVar2;");
            trace.statement("uVar1 = (uint)DAT_1803fade8 & 3;");
            trace.statement("puVar2 = DAT_1803fadd8;");
            if (trace.checked_condition("if (uVar1 != 1)", [&]() -> bool { return static_cast<bool>(uVar1 != 1); })) {
                if (trace.condition("if (uVar1 != 2) goto LAB_18030b773; puVar2 = &DAT_1803fadb0; } (*(code *)*DAT_1803fade0)(puVar2); LAB_18030b773: DAT_1803fade8 = 0; FUN_180241430(&DAT_1803fada0); return; }")) {
                }
            }
        }
    return kFunction_0x18030b740;
}

// 0x18030b790 FUN_18030b790
// source: re/dump/decompile/0x18030b790_FUN_18030b790.c
// size: 33 bytes; thunk: false
// body sha256: 2f06b5375c1d471a103304cbed24910ebcd5da10da16cfb2b40e574586b746c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b790{
    "0x18030b790",
    "FUN_18030b790",
    R"F18030b790S(undefined FUN_18030b790())F18030b790S",
    R"B18030b790(// 0x18030b790  FUN_18030b790
// size=33 thunk=false
// signature: undefined FUN_18030b790()
// status: ok


void FUN_18030b790(void)

{
  FUN_180209700(&DAT_1805c7e28);
  FUN_180209770(&DAT_1805c7e18);
  return;
}


)B18030b790",
    "2f06b5375c1d471a103304cbed24910ebcd5da10da16cfb2b40e574586b746c0",
    R"F18030b790C(FUN_180209700
FUN_180209770)F18030b790C",
    R"F18030b790D(DAT_1805c7e18
DAT_1805c7e28)F18030b790D",
    R"F18030b790T()F18030b790T",
    R"F18030b790F(12: return;)F18030b790F",
    R"F18030b790U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7e18.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7e28.)F18030b790U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b790() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b790", "FUN_18030b790");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7e18.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7e28.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7e28);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7e18);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7e18", static_cast<const void*>(&image::DAT_1805c7e18));
    trace.data_ref("DAT_1805c7e28", static_cast<const void*>(&image::DAT_1805c7e28));
    // body sha256: 2f06b5375c1d471a103304cbed24910ebcd5da10da16cfb2b40e574586b746c0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7e28);");
            trace.statement("FUN_180209770(&DAT_1805c7e18);");
            trace.statement("return;");
        }
    return kFunction_0x18030b790;
}

// 0x18030b7c0 FUN_18030b7c0
// source: re/dump/decompile/0x18030b7c0_FUN_18030b7c0.c
// size: 33 bytes; thunk: false
// body sha256: b54e84ff846be4682738ea4868bbfb50c69e79ae58c088bbfb31cac6632ccd08
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b7c0{
    "0x18030b7c0",
    "FUN_18030b7c0",
    R"F18030b7c0S(undefined FUN_18030b7c0())F18030b7c0S",
    R"B18030b7c0(// 0x18030b7c0  FUN_18030b7c0
// size=33 thunk=false
// signature: undefined FUN_18030b7c0()
// status: ok


void FUN_18030b7c0(void)

{
  FUN_180209700(&DAT_1805c82c8);
  FUN_180209770(&DAT_1805c82b8);
  return;
}


)B18030b7c0",
    "b54e84ff846be4682738ea4868bbfb50c69e79ae58c088bbfb31cac6632ccd08",
    R"F18030b7c0C(FUN_180209700
FUN_180209770)F18030b7c0C",
    R"F18030b7c0D(DAT_1805c82b8
DAT_1805c82c8)F18030b7c0D",
    R"F18030b7c0T()F18030b7c0T",
    R"F18030b7c0F(12: return;)F18030b7c0F",
    R"F18030b7c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c82b8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c82c8.)F18030b7c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b7c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b7c0", "FUN_18030b7c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c82b8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c82c8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c82c8);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c82b8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c82b8", static_cast<const void*>(&image::DAT_1805c82b8));
    trace.data_ref("DAT_1805c82c8", static_cast<const void*>(&image::DAT_1805c82c8));
    // body sha256: b54e84ff846be4682738ea4868bbfb50c69e79ae58c088bbfb31cac6632ccd08
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c82c8);");
            trace.statement("FUN_180209770(&DAT_1805c82b8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b7c0;
}

// 0x18030b7f0 FUN_18030b7f0
// source: re/dump/decompile/0x18030b7f0_FUN_18030b7f0.c
// size: 33 bytes; thunk: false
// body sha256: 4d2d87b896a57652063916c7635ab3e95a7cfe854d341b5df7a541a9b574c367
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b7f0{
    "0x18030b7f0",
    "FUN_18030b7f0",
    R"F18030b7f0S(undefined FUN_18030b7f0())F18030b7f0S",
    R"B18030b7f0(// 0x18030b7f0  FUN_18030b7f0
// size=33 thunk=false
// signature: undefined FUN_18030b7f0()
// status: ok


void FUN_18030b7f0(void)

{
  FUN_180209700(&DAT_1805c8308);
  FUN_180209770(&DAT_1805c82f8);
  return;
}


)B18030b7f0",
    "4d2d87b896a57652063916c7635ab3e95a7cfe854d341b5df7a541a9b574c367",
    R"F18030b7f0C(FUN_180209700
FUN_180209770)F18030b7f0C",
    R"F18030b7f0D(DAT_1805c82f8
DAT_1805c8308)F18030b7f0D",
    R"F18030b7f0T()F18030b7f0T",
    R"F18030b7f0F(12: return;)F18030b7f0F",
    R"F18030b7f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c82f8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c8308.)F18030b7f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b7f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b7f0", "FUN_18030b7f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c82f8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c8308.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c8308);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c82f8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c82f8", static_cast<const void*>(&image::DAT_1805c82f8));
    trace.data_ref("DAT_1805c8308", static_cast<const void*>(&image::DAT_1805c8308));
    // body sha256: 4d2d87b896a57652063916c7635ab3e95a7cfe854d341b5df7a541a9b574c367
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c8308);");
            trace.statement("FUN_180209770(&DAT_1805c82f8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b7f0;
}

// 0x18030b820 FUN_18030b820
// source: re/dump/decompile/0x18030b820_FUN_18030b820.c
// size: 33 bytes; thunk: false
// body sha256: 0710291e6cba9d1be845091b333a2cdfe5552adb407fb7acd2742d05e4083e36
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b820{
    "0x18030b820",
    "FUN_18030b820",
    R"F18030b820S(undefined FUN_18030b820())F18030b820S",
    R"B18030b820(// 0x18030b820  FUN_18030b820
// size=33 thunk=false
// signature: undefined FUN_18030b820()
// status: ok


void FUN_18030b820(void)

{
  FUN_180209700(&DAT_1805c8348);
  FUN_180209770(&DAT_1805c8338);
  return;
}


)B18030b820",
    "0710291e6cba9d1be845091b333a2cdfe5552adb407fb7acd2742d05e4083e36",
    R"F18030b820C(FUN_180209700
FUN_180209770)F18030b820C",
    R"F18030b820D(DAT_1805c8338
DAT_1805c8348)F18030b820D",
    R"F18030b820T()F18030b820T",
    R"F18030b820F(12: return;)F18030b820F",
    R"F18030b820U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c8338.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c8348.)F18030b820U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b820() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b820", "FUN_18030b820");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c8338.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c8348.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c8348);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c8338);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c8338", static_cast<const void*>(&image::DAT_1805c8338));
    trace.data_ref("DAT_1805c8348", static_cast<const void*>(&image::DAT_1805c8348));
    // body sha256: 0710291e6cba9d1be845091b333a2cdfe5552adb407fb7acd2742d05e4083e36
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c8348);");
            trace.statement("FUN_180209770(&DAT_1805c8338);");
            trace.statement("return;");
        }
    return kFunction_0x18030b820;
}

// 0x18030b850 FUN_18030b850
// source: re/dump/decompile/0x18030b850_FUN_18030b850.c
// size: 33 bytes; thunk: false
// body sha256: af5f636077426bc8f90186506b2a90ff38db847caaa44a4cb1d0a600e36cfc49
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b850{
    "0x18030b850",
    "FUN_18030b850",
    R"F18030b850S(undefined FUN_18030b850())F18030b850S",
    R"B18030b850(// 0x18030b850  FUN_18030b850
// size=33 thunk=false
// signature: undefined FUN_18030b850()
// status: ok


void FUN_18030b850(void)

{
  FUN_180209700(&DAT_1805c7d88);
  FUN_180209770(&DAT_1805c7d78);
  return;
}


)B18030b850",
    "af5f636077426bc8f90186506b2a90ff38db847caaa44a4cb1d0a600e36cfc49",
    R"F18030b850C(FUN_180209700
FUN_180209770)F18030b850C",
    R"F18030b850D(DAT_1805c7d78
DAT_1805c7d88)F18030b850D",
    R"F18030b850T()F18030b850T",
    R"F18030b850F(12: return;)F18030b850F",
    R"F18030b850U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7d78.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7d88.)F18030b850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b850() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b850", "FUN_18030b850");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7d78.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7d88.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7d88);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7d78);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7d78", static_cast<const void*>(&image::DAT_1805c7d78));
    trace.data_ref("DAT_1805c7d88", static_cast<const void*>(&image::DAT_1805c7d88));
    // body sha256: af5f636077426bc8f90186506b2a90ff38db847caaa44a4cb1d0a600e36cfc49
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7d88);");
            trace.statement("FUN_180209770(&DAT_1805c7d78);");
            trace.statement("return;");
        }
    return kFunction_0x18030b850;
}

// 0x18030b880 FUN_18030b880
// source: re/dump/decompile/0x18030b880_FUN_18030b880.c
// size: 33 bytes; thunk: false
// body sha256: 7110effda6f6e9ad6955e85333adfe410d9daaeba69cd17a2e0f67a6253c2176
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b880{
    "0x18030b880",
    "FUN_18030b880",
    R"F18030b880S(undefined FUN_18030b880())F18030b880S",
    R"B18030b880(// 0x18030b880  FUN_18030b880
// size=33 thunk=false
// signature: undefined FUN_18030b880()
// status: ok


void FUN_18030b880(void)

{
  FUN_180209700(&DAT_1805c7d48);
  FUN_180209770(&DAT_1805c7d38);
  return;
}


)B18030b880",
    "7110effda6f6e9ad6955e85333adfe410d9daaeba69cd17a2e0f67a6253c2176",
    R"F18030b880C(FUN_180209700
FUN_180209770)F18030b880C",
    R"F18030b880D(DAT_1805c7d38
DAT_1805c7d48)F18030b880D",
    R"F18030b880T()F18030b880T",
    R"F18030b880F(12: return;)F18030b880F",
    R"F18030b880U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7d38.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7d48.)F18030b880U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b880() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b880", "FUN_18030b880");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7d38.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7d48.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7d48);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7d38);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7d38", static_cast<const void*>(&image::DAT_1805c7d38));
    trace.data_ref("DAT_1805c7d48", static_cast<const void*>(&image::DAT_1805c7d48));
    // body sha256: 7110effda6f6e9ad6955e85333adfe410d9daaeba69cd17a2e0f67a6253c2176
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7d48);");
            trace.statement("FUN_180209770(&DAT_1805c7d38);");
            trace.statement("return;");
        }
    return kFunction_0x18030b880;
}

// 0x18030b8b0 FUN_18030b8b0
// source: re/dump/decompile/0x18030b8b0_FUN_18030b8b0.c
// size: 33 bytes; thunk: false
// body sha256: a3eec83c2c981d92572a650ba94659ed5ef848ff511285bfb948b70adb988087
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b8b0{
    "0x18030b8b0",
    "FUN_18030b8b0",
    R"F18030b8b0S(undefined FUN_18030b8b0())F18030b8b0S",
    R"B18030b8b0(// 0x18030b8b0  FUN_18030b8b0
// size=33 thunk=false
// signature: undefined FUN_18030b8b0()
// status: ok


void FUN_18030b8b0(void)

{
  FUN_180209700(&DAT_1805c7cc8);
  FUN_180209770(&DAT_1805c7cb8);
  return;
}


)B18030b8b0",
    "a3eec83c2c981d92572a650ba94659ed5ef848ff511285bfb948b70adb988087",
    R"F18030b8b0C(FUN_180209700
FUN_180209770)F18030b8b0C",
    R"F18030b8b0D(DAT_1805c7cb8
DAT_1805c7cc8)F18030b8b0D",
    R"F18030b8b0T()F18030b8b0T",
    R"F18030b8b0F(12: return;)F18030b8b0F",
    R"F18030b8b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7cb8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7cc8.)F18030b8b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b8b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b8b0", "FUN_18030b8b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7cb8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7cc8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7cc8);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7cb8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7cb8", static_cast<const void*>(&image::DAT_1805c7cb8));
    trace.data_ref("DAT_1805c7cc8", static_cast<const void*>(&image::DAT_1805c7cc8));
    // body sha256: a3eec83c2c981d92572a650ba94659ed5ef848ff511285bfb948b70adb988087
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7cc8);");
            trace.statement("FUN_180209770(&DAT_1805c7cb8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b8b0;
}

// 0x18030b8e0 FUN_18030b8e0
// source: re/dump/decompile/0x18030b8e0_FUN_18030b8e0.c
// size: 33 bytes; thunk: false
// body sha256: 4b96bdba8e210b6c0d96de0e80ac4de4d110c2903aef42e4caf8efcdaecfc941
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b8e0{
    "0x18030b8e0",
    "FUN_18030b8e0",
    R"F18030b8e0S(undefined FUN_18030b8e0())F18030b8e0S",
    R"B18030b8e0(// 0x18030b8e0  FUN_18030b8e0
// size=33 thunk=false
// signature: undefined FUN_18030b8e0()
// status: ok


void FUN_18030b8e0(void)

{
  FUN_180209700(&DAT_1805c8388);
  FUN_180209770(&DAT_1805c8378);
  return;
}


)B18030b8e0",
    "4b96bdba8e210b6c0d96de0e80ac4de4d110c2903aef42e4caf8efcdaecfc941",
    R"F18030b8e0C(FUN_180209700
FUN_180209770)F18030b8e0C",
    R"F18030b8e0D(DAT_1805c8378
DAT_1805c8388)F18030b8e0D",
    R"F18030b8e0T()F18030b8e0T",
    R"F18030b8e0F(12: return;)F18030b8e0F",
    R"F18030b8e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c8378.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c8388.)F18030b8e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b8e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b8e0", "FUN_18030b8e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c8378.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c8388.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c8388);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c8378);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c8378", static_cast<const void*>(&image::DAT_1805c8378));
    trace.data_ref("DAT_1805c8388", static_cast<const void*>(&image::DAT_1805c8388));
    // body sha256: 4b96bdba8e210b6c0d96de0e80ac4de4d110c2903aef42e4caf8efcdaecfc941
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c8388);");
            trace.statement("FUN_180209770(&DAT_1805c8378);");
            trace.statement("return;");
        }
    return kFunction_0x18030b8e0;
}

// 0x18030b910 FUN_18030b910
// source: re/dump/decompile/0x18030b910_FUN_18030b910.c
// size: 33 bytes; thunk: false
// body sha256: 118939b7295230a62fc69cab08ba08d0cd3d0bc170d5e9f67b93bf9c089ba23a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b910{
    "0x18030b910",
    "FUN_18030b910",
    R"F18030b910S(undefined FUN_18030b910())F18030b910S",
    R"B18030b910(// 0x18030b910  FUN_18030b910
// size=33 thunk=false
// signature: undefined FUN_18030b910()
// status: ok


void FUN_18030b910(void)

{
  FUN_180209700(&DAT_1805c7c88);
  FUN_180209770(&DAT_1805c7c78);
  return;
}


)B18030b910",
    "118939b7295230a62fc69cab08ba08d0cd3d0bc170d5e9f67b93bf9c089ba23a",
    R"F18030b910C(FUN_180209700
FUN_180209770)F18030b910C",
    R"F18030b910D(DAT_1805c7c78
DAT_1805c7c88)F18030b910D",
    R"F18030b910T()F18030b910T",
    R"F18030b910F(12: return;)F18030b910F",
    R"F18030b910U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7c78.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7c88.)F18030b910U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b910() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b910", "FUN_18030b910");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7c78.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7c88.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7c88);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7c78);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7c78", static_cast<const void*>(&image::DAT_1805c7c78));
    trace.data_ref("DAT_1805c7c88", static_cast<const void*>(&image::DAT_1805c7c88));
    // body sha256: 118939b7295230a62fc69cab08ba08d0cd3d0bc170d5e9f67b93bf9c089ba23a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7c88);");
            trace.statement("FUN_180209770(&DAT_1805c7c78);");
            trace.statement("return;");
        }
    return kFunction_0x18030b910;
}

// 0x18030b940 FUN_18030b940
// source: re/dump/decompile/0x18030b940_FUN_18030b940.c
// size: 33 bytes; thunk: false
// body sha256: 3c72d2e8645c57045822ee4cf0692d5b9f8ff9ba694121028e54e30e62386769
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b940{
    "0x18030b940",
    "FUN_18030b940",
    R"F18030b940S(undefined FUN_18030b940())F18030b940S",
    R"B18030b940(// 0x18030b940  FUN_18030b940
// size=33 thunk=false
// signature: undefined FUN_18030b940()
// status: ok


void FUN_18030b940(void)

{
  FUN_180209700(&DAT_1805c7d08);
  FUN_180209770(&DAT_1805c7cf8);
  return;
}


)B18030b940",
    "3c72d2e8645c57045822ee4cf0692d5b9f8ff9ba694121028e54e30e62386769",
    R"F18030b940C(FUN_180209700
FUN_180209770)F18030b940C",
    R"F18030b940D(DAT_1805c7cf8
DAT_1805c7d08)F18030b940D",
    R"F18030b940T()F18030b940T",
    R"F18030b940F(12: return;)F18030b940F",
    R"F18030b940U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7cf8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7d08.)F18030b940U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b940() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b940", "FUN_18030b940");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7cf8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7d08.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7d08);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7cf8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7cf8", static_cast<const void*>(&image::DAT_1805c7cf8));
    trace.data_ref("DAT_1805c7d08", static_cast<const void*>(&image::DAT_1805c7d08));
    // body sha256: 3c72d2e8645c57045822ee4cf0692d5b9f8ff9ba694121028e54e30e62386769
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7d08);");
            trace.statement("FUN_180209770(&DAT_1805c7cf8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b940;
}

// 0x18030b970 FUN_18030b970
// source: re/dump/decompile/0x18030b970_FUN_18030b970.c
// size: 33 bytes; thunk: false
// body sha256: 6b1c9bd1ab9c5e9eb2bd9cd3f46a707f0bbfb7978a1513fc5f37915e9364c8a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b970{
    "0x18030b970",
    "FUN_18030b970",
    R"F18030b970S(undefined FUN_18030b970())F18030b970S",
    R"B18030b970(// 0x18030b970  FUN_18030b970
// size=33 thunk=false
// signature: undefined FUN_18030b970()
// status: ok


void FUN_18030b970(void)

{
  FUN_180209700(&DAT_1805c7e78);
  FUN_180209770(&DAT_1805c7e68);
  return;
}


)B18030b970",
    "6b1c9bd1ab9c5e9eb2bd9cd3f46a707f0bbfb7978a1513fc5f37915e9364c8a5",
    R"F18030b970C(FUN_180209700
FUN_180209770)F18030b970C",
    R"F18030b970D(DAT_1805c7e68
DAT_1805c7e78)F18030b970D",
    R"F18030b970T()F18030b970T",
    R"F18030b970F(12: return;)F18030b970F",
    R"F18030b970U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7e68.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7e78.)F18030b970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b970() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b970", "FUN_18030b970");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7e68.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7e78.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7e78);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7e68);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7e68", static_cast<const void*>(&image::DAT_1805c7e68));
    trace.data_ref("DAT_1805c7e78", static_cast<const void*>(&image::DAT_1805c7e78));
    // body sha256: 6b1c9bd1ab9c5e9eb2bd9cd3f46a707f0bbfb7978a1513fc5f37915e9364c8a5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7e78);");
            trace.statement("FUN_180209770(&DAT_1805c7e68);");
            trace.statement("return;");
        }
    return kFunction_0x18030b970;
}

// 0x18030b9a0 FUN_18030b9a0
// source: re/dump/decompile/0x18030b9a0_FUN_18030b9a0.c
// size: 33 bytes; thunk: false
// body sha256: 47c1b7424b3f2616d43dd68dd0d0ae29c040e58059ace42ce4300fb655b8b5a2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b9a0{
    "0x18030b9a0",
    "FUN_18030b9a0",
    R"F18030b9a0S(undefined FUN_18030b9a0())F18030b9a0S",
    R"B18030b9a0(// 0x18030b9a0  FUN_18030b9a0
// size=33 thunk=false
// signature: undefined FUN_18030b9a0()
// status: ok


void FUN_18030b9a0(void)

{
  FUN_180209700(&DAT_1805c83d8);
  FUN_180209770(&DAT_1805c83c8);
  return;
}


)B18030b9a0",
    "47c1b7424b3f2616d43dd68dd0d0ae29c040e58059ace42ce4300fb655b8b5a2",
    R"F18030b9a0C(FUN_180209700
FUN_180209770)F18030b9a0C",
    R"F18030b9a0D(DAT_1805c83c8
DAT_1805c83d8)F18030b9a0D",
    R"F18030b9a0T()F18030b9a0T",
    R"F18030b9a0F(12: return;)F18030b9a0F",
    R"F18030b9a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c83c8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c83d8.)F18030b9a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b9a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b9a0", "FUN_18030b9a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c83c8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c83d8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c83d8);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c83c8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c83c8", static_cast<const void*>(&image::DAT_1805c83c8));
    trace.data_ref("DAT_1805c83d8", static_cast<const void*>(&image::DAT_1805c83d8));
    // body sha256: 47c1b7424b3f2616d43dd68dd0d0ae29c040e58059ace42ce4300fb655b8b5a2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c83d8);");
            trace.statement("FUN_180209770(&DAT_1805c83c8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b9a0;
}

// 0x18030b9d0 FUN_18030b9d0
// source: re/dump/decompile/0x18030b9d0_FUN_18030b9d0.c
// size: 33 bytes; thunk: false
// body sha256: e7925a9f30d88448cd7a6e5ed2b34f14ca113f79486831d33a48a3999d3c06ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030b9d0{
    "0x18030b9d0",
    "FUN_18030b9d0",
    R"F18030b9d0S(undefined FUN_18030b9d0())F18030b9d0S",
    R"B18030b9d0(// 0x18030b9d0  FUN_18030b9d0
// size=33 thunk=false
// signature: undefined FUN_18030b9d0()
// status: ok


void FUN_18030b9d0(void)

{
  FUN_180209700(&DAT_1805c7dd8);
  FUN_180209770(&DAT_1805c7dc8);
  return;
}


)B18030b9d0",
    "e7925a9f30d88448cd7a6e5ed2b34f14ca113f79486831d33a48a3999d3c06ba",
    R"F18030b9d0C(FUN_180209700
FUN_180209770)F18030b9d0C",
    R"F18030b9d0D(DAT_1805c7dc8
DAT_1805c7dd8)F18030b9d0D",
    R"F18030b9d0T()F18030b9d0T",
    R"F18030b9d0F(12: return;)F18030b9d0F",
    R"F18030b9d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7dc8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7dd8.)F18030b9d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030b9d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030b9d0", "FUN_18030b9d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7dc8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7dd8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1805c7dd8);
    trace.call_arguments("FUN_180209770", &image::DAT_1805c7dc8);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1805c7dc8", static_cast<const void*>(&image::DAT_1805c7dc8));
    trace.data_ref("DAT_1805c7dd8", static_cast<const void*>(&image::DAT_1805c7dd8));
    // body sha256: e7925a9f30d88448cd7a6e5ed2b34f14ca113f79486831d33a48a3999d3c06ba
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1805c7dd8);");
            trace.statement("FUN_180209770(&DAT_1805c7dc8);");
            trace.statement("return;");
        }
    return kFunction_0x18030b9d0;
}

// 0x18030ba10 FUN_18030ba10
// source: re/dump/decompile/0x18030ba10_FUN_18030ba10.c
// size: 33 bytes; thunk: false
// body sha256: 0641b9ea400eb6f183ee2efebf8d2f70729806e6b30ad8486c204349868f6e2b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ba10{
    "0x18030ba10",
    "FUN_18030ba10",
    R"F18030ba10S(undefined FUN_18030ba10())F18030ba10S",
    R"B18030ba10(// 0x18030ba10  FUN_18030ba10
// size=33 thunk=false
// signature: undefined FUN_18030ba10()
// status: ok


void FUN_18030ba10(void)

{
  FUN_180209700(&DAT_1803fae58);
  FUN_180209770(&DAT_1803fae48);
  return;
}


)B18030ba10",
    "0641b9ea400eb6f183ee2efebf8d2f70729806e6b30ad8486c204349868f6e2b",
    R"F18030ba10C(FUN_180209700
FUN_180209770)F18030ba10C",
    R"F18030ba10D(DAT_1803fae48
DAT_1803fae58)F18030ba10D",
    R"F18030ba10T()F18030ba10T",
    R"F18030ba10F(12: return;)F18030ba10F",
    R"F18030ba10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fae48.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fae58.)F18030ba10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ba10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ba10", "FUN_18030ba10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fae48.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fae58.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180209700", &image::DAT_1803fae58);
    trace.call_arguments("FUN_180209770", &image::DAT_1803fae48);
    trace.call_target("FUN_180209700", reinterpret_cast<const void*>(&image::FUN_180209700));
    trace.call_target("FUN_180209770", reinterpret_cast<const void*>(&image::FUN_180209770));
    trace.data_ref("DAT_1803fae48", static_cast<const void*>(&image::DAT_1803fae48));
    trace.data_ref("DAT_1803fae58", static_cast<const void*>(&image::DAT_1803fae58));
    // body sha256: 0641b9ea400eb6f183ee2efebf8d2f70729806e6b30ad8486c204349868f6e2b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("FUN_180209700(&DAT_1803fae58);");
            trace.statement("FUN_180209770(&DAT_1803fae48);");
            trace.statement("return;");
        }
    return kFunction_0x18030ba10;
}

// 0x18030ba34 FUN_18030ba34
// source: re/dump/decompile/0x18030ba34_FUN_18030ba34.c
// size: 87 bytes; thunk: false
// body sha256: 2ef65d77b0c39c90546a91b582582e013e4ecbdf1dfec855436eb58fccc1db16
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18030ba34{
    "0x18030ba34",
    "FUN_18030ba34",
    R"F18030ba34S(undefined FUN_18030ba34())F18030ba34S",
    R"B18030ba34(// 0x18030ba34  FUN_18030ba34
// size=87 thunk=false
// signature: undefined FUN_18030ba34()
// status: ok


void FUN_18030ba34(void)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  while (_Memory = DAT_1803f8f38, DAT_1803f8f38 != (undefined8 *)0x0) {
    DAT_1803f8f38 = (undefined8 *)*DAT_1803f8f38;
    lVar1 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18030cca8)(lVar1,1);
    }
    free(_Memory);
  }
  return;
}


)B18030ba34",
    "2ef65d77b0c39c90546a91b582582e013e4ecbdf1dfec855436eb58fccc1db16",
    R"F18030ba34C()F18030ba34C",
    R"F18030ba34D(PTR__guard_dispatch_icall_18030cca8
DAT_1803f8f38)F18030ba34D",
    R"F18030ba34T()F18030ba34T",
    R"F18030ba34F(13: while (_Memory = DAT_1803f8f38, DAT_1803f8f38 != (undefined8 *)0x0) {
16: if (lVar1 != 0) {
21: return;)F18030ba34F",
    R"F18030ba34U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR__guard_dispatch_icall_18030cca8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f8f38.
TODO: resolve the indirect call in body 15: lVar1 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();.
TODO: resolve the indirect call in body 17: (*(code *)PTR__guard_dispatch_icall_18030cca8)(lVar1,1);.)F18030ba34U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18030ba34() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18030ba34", "FUN_18030ba34");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * _Memory{};
    [[maybe_unused]] std::int64_t lVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR__guard_dispatch_icall_18030cca8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f8f38.
    // TODO: resolve the indirect call in body 15: lVar1 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();.
    // TODO: resolve the indirect call in body 17: (*(code *)PTR__guard_dispatch_icall_18030cca8)(lVar1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("free", _Memory);
    trace.data_ref("PTR__guard_dispatch_icall_18030cca8", static_cast<const void*>(&image::PTR__guard_dispatch_icall_18030cca8));
    trace.data_ref("DAT_1803f8f38", static_cast<const void*>(&image::DAT_1803f8f38));
    // body sha256: 2ef65d77b0c39c90546a91b582582e013e4ecbdf1dfec855436eb58fccc1db16
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 *_Memory;");
            trace.statement("longlong lVar1;");
            while (trace.checked_loop_condition("while (_Memory = DAT_1803f8f38, DAT_1803f8f38 != (undefined8 *)0x0)", [&]() -> bool { return static_cast<bool>(_Memory = load_at<std::uint64_t *>(&image::DAT_1803f8f38, 0), load_at<std::uint64_t *>(&image::DAT_1803f8f38, 0) != (std::uint64_t *)0x0); })) {
                trace.statement("DAT_1803f8f38 = (undefined8 *)*DAT_1803f8f38;");
                trace.statement("lVar1 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();");
                if (trace.checked_condition("if (lVar1 != 0)", [&]() -> bool { return static_cast<bool>(lVar1 != 0); })) {
                    trace.statement("(*(code *)PTR__guard_dispatch_icall_18030cca8)(lVar1,1);");
                }
                trace.statement("free(_Memory);");
            }
            trace.statement("return;");
        }
    return kFunction_0x18030ba34;
}

}  // namespace sf::reconstructed
