// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1802f7068 FUN_1802f7068
// source: re/dump/decompile/0x1802f7068_FUN_1802f7068.c
// size: 46 bytes; thunk: false
// body sha256: 902a1b704567cd2d9497fe3d0ccc208d54a9ab52a03420a6955ec2f84ff9a5e2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7068{
    "0x1802f7068",
    "FUN_1802f7068",
    R"F1802f7068S(undefined FUN_1802f7068())F1802f7068S",
    R"B1802f7068(// 0x1802f7068  FUN_1802f7068
// size=46 thunk=false
// signature: undefined FUN_1802f7068()
// status: ok


void FUN_1802f7068(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x368);
  }
  return;
}


)B1802f7068",
    "902a1b704567cd2d9497fe3d0ccc208d54a9ab52a03420a6955ec2f84ff9a5e2",
    R"F1802f7068C()F1802f7068C",
    R"F1802f7068D()F1802f7068D",
    R"F1802f7068T()F1802f7068T",
    R"F1802f7068F(10: if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
14: return;)F1802f7068F",
    R"F1802f7068U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7068U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7068() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7068", "FUN_1802f7068");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 902a1b704567cd2d9497fe3d0ccc208d54a9ab52a03420a6955ec2f84ff9a5e2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7068(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x368);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7068;
}

// 0x1802f7096 FUN_1802f7096
// source: re/dump/decompile/0x1802f7096_FUN_1802f7096.c
// size: 46 bytes; thunk: false
// body sha256: e1428d2b7ea309f317433800ed503504c88b555831f9b535390200450438d6f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7096{
    "0x1802f7096",
    "FUN_1802f7096",
    R"F1802f7096S(undefined FUN_1802f7096())F1802f7096S",
    R"B1802f7096(// 0x1802f7096  FUN_1802f7096
// size=46 thunk=false
// signature: undefined FUN_1802f7096()
// status: ok


void FUN_1802f7096(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x388);
  }
  return;
}


)B1802f7096",
    "e1428d2b7ea309f317433800ed503504c88b555831f9b535390200450438d6f3",
    R"F1802f7096C()F1802f7096C",
    R"F1802f7096D()F1802f7096D",
    R"F1802f7096T()F1802f7096T",
    R"F1802f7096F(10: if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
14: return;)F1802f7096F",
    R"F1802f7096U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7096U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7096() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7096", "FUN_1802f7096");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e1428d2b7ea309f317433800ed503504c88b555831f9b535390200450438d6f3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7096(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x388);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7096;
}

// 0x1802f70d0 FUN_1802f70d0
// source: re/dump/decompile/0x1802f70d0_FUN_1802f70d0.c
// size: 22 bytes; thunk: false
// body sha256: 63f451c43fef38f0d50a3615fff899d35584464f281513ceba6b379d4a38aa48
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f70d0{
    "0x1802f70d0",
    "FUN_1802f70d0",
    R"F1802f70d0S(undefined FUN_1802f70d0())F1802f70d0S",
    R"B1802f70d0(// 0x1802f70d0  FUN_1802f70d0
// size=22 thunk=false
// signature: undefined FUN_1802f70d0()
// status: ok


void FUN_1802f70d0(void)

{
  DAT_18056ff84 = DAT_18056ff84 & 0xfffffffe;
  return;
}


)B1802f70d0",
    "63f451c43fef38f0d50a3615fff899d35584464f281513ceba6b379d4a38aa48",
    R"F1802f70d0C()F1802f70d0C",
    R"F1802f70d0D(DAT_18056ff84)F1802f70d0D",
    R"F1802f70d0T()F1802f70d0T",
    R"F1802f70d0F(11: return;)F1802f70d0F",
    R"F1802f70d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18056ff84.)F1802f70d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f70d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f70d0", "FUN_1802f70d0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18056ff84.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18056ff84", static_cast<const void*>(&image::DAT_18056ff84));
    // body sha256: 63f451c43fef38f0d50a3615fff899d35584464f281513ceba6b379d4a38aa48
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f70d0(void)");
        {
            trace.statement("DAT_18056ff84 = DAT_18056ff84 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f70d0;
}

// 0x1802f70e6 FUN_1802f70e6
// source: re/dump/decompile/0x1802f70e6_FUN_1802f70e6.c
// size: 29 bytes; thunk: false
// body sha256: 4b64256935ca1d7b6f7567012fe9989dec333b3502b540d9fdc52798e99a3270
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f70e6{
    "0x1802f70e6",
    "FUN_1802f70e6",
    R"F1802f70e6S(undefined FUN_1802f70e6())F1802f70e6S",
    R"B1802f70e6(// 0x1802f70e6  FUN_1802f70e6
// size=29 thunk=false
// signature: undefined FUN_1802f70e6()
// status: ok


undefined8 FUN_1802f70e6(void)

{
  return 0;
}


)B1802f70e6",
    "4b64256935ca1d7b6f7567012fe9989dec333b3502b540d9fdc52798e99a3270",
    R"F1802f70e6C()F1802f70e6C",
    R"F1802f70e6D()F1802f70e6D",
    R"F1802f70e6T()F1802f70e6T",
    R"F1802f70e6F(10: return 0;)F1802f70e6F",
    R"F1802f70e6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f70e6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f70e6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f70e6", "FUN_1802f70e6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4b64256935ca1d7b6f7567012fe9989dec333b3502b540d9fdc52798e99a3270
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f70e6(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f70e6;
}

// 0x1802f7104 FUN_1802f7104
// source: re/dump/decompile/0x1802f7104_FUN_1802f7104.c
// size: 29 bytes; thunk: false
// body sha256: 3e29a9df46ccb431272cd894a827b309073fba9806307ceca7054109446bdab0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7104{
    "0x1802f7104",
    "FUN_1802f7104",
    R"F1802f7104S(undefined FUN_1802f7104())F1802f7104S",
    R"B1802f7104(// 0x1802f7104  FUN_1802f7104
// size=29 thunk=false
// signature: undefined FUN_1802f7104()
// status: ok


undefined8 FUN_1802f7104(void)

{
  return 0;
}


)B1802f7104",
    "3e29a9df46ccb431272cd894a827b309073fba9806307ceca7054109446bdab0",
    R"F1802f7104C()F1802f7104C",
    R"F1802f7104D()F1802f7104D",
    R"F1802f7104T()F1802f7104T",
    R"F1802f7104F(10: return 0;)F1802f7104F",
    R"F1802f7104U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7104U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7104() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7104", "FUN_1802f7104");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3e29a9df46ccb431272cd894a827b309073fba9806307ceca7054109446bdab0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7104(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7104;
}

// 0x1802f7130 FUN_1802f7130
// source: re/dump/decompile/0x1802f7130_FUN_1802f7130.c
// size: 22 bytes; thunk: false
// body sha256: 541ab3e21eaf613db9630ab52698449a6eb003fb8a47bb4ce2c213feea0b6b7f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7130{
    "0x1802f7130",
    "FUN_1802f7130",
    R"F1802f7130S(undefined FUN_1802f7130())F1802f7130S",
    R"B1802f7130(// 0x1802f7130  FUN_1802f7130
// size=22 thunk=false
// signature: undefined FUN_1802f7130()
// status: ok


void FUN_1802f7130(void)

{
  DAT_18042623c = DAT_18042623c & 0xfffffffe;
  return;
}


)B1802f7130",
    "541ab3e21eaf613db9630ab52698449a6eb003fb8a47bb4ce2c213feea0b6b7f",
    R"F1802f7130C()F1802f7130C",
    R"F1802f7130D(DAT_18042623c)F1802f7130D",
    R"F1802f7130T()F1802f7130T",
    R"F1802f7130F(11: return;)F1802f7130F",
    R"F1802f7130U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042623c.)F1802f7130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7130() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7130", "FUN_1802f7130");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042623c.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18042623c", static_cast<const void*>(&image::DAT_18042623c));
    // body sha256: 541ab3e21eaf613db9630ab52698449a6eb003fb8a47bb4ce2c213feea0b6b7f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7130(void)");
        {
            trace.statement("DAT_18042623c = DAT_18042623c & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f7130;
}

// 0x1802f7146 FUN_1802f7146
// source: re/dump/decompile/0x1802f7146_FUN_1802f7146.c
// size: 37 bytes; thunk: false
// body sha256: d887c18bd7a9d3ae1e95b4663ad1ef490a5a79f0d5aad3efab093703874689c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7146{
    "0x1802f7146",
    "FUN_1802f7146",
    R"F1802f7146S(undefined FUN_1802f7146())F1802f7146S",
    R"B1802f7146(// 0x1802f7146  FUN_1802f7146
// size=37 thunk=false
// signature: undefined FUN_1802f7146()
// status: ok


undefined8 FUN_1802f7146(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x70) + 0x10) = 0;
  return 0;
}


)B1802f7146",
    "d887c18bd7a9d3ae1e95b4663ad1ef490a5a79f0d5aad3efab093703874689c0",
    R"F1802f7146C()F1802f7146C",
    R"F1802f7146D()F1802f7146D",
    R"F1802f7146T()F1802f7146T",
    R"F1802f7146F(11: return 0;)F1802f7146F",
    R"F1802f7146U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7146U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7146() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7146", "FUN_1802f7146");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d887c18bd7a9d3ae1e95b4663ad1ef490a5a79f0d5aad3efab093703874689c0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7146(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined1 *)(*(longlong *)(param_2 + 0x70) + 0x10) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7146;
}

// 0x1802f71ac FUN_1802f71ac
// source: re/dump/decompile/0x1802f71ac_FUN_1802f71ac.c
// size: 29 bytes; thunk: false
// body sha256: 2c88095f48eda1c19e9bbea1c50d88c2445c845d832622477c765a16afddfaf7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f71ac{
    "0x1802f71ac",
    "FUN_1802f71ac",
    R"F1802f71acS(undefined FUN_1802f71ac())F1802f71acS",
    R"B1802f71ac(// 0x1802f71ac  FUN_1802f71ac
// size=29 thunk=false
// signature: undefined FUN_1802f71ac()
// status: ok


undefined8 FUN_1802f71ac(void)

{
  return 0;
}


)B1802f71ac",
    "2c88095f48eda1c19e9bbea1c50d88c2445c845d832622477c765a16afddfaf7",
    R"F1802f71acC()F1802f71acC",
    R"F1802f71acD()F1802f71acD",
    R"F1802f71acT()F1802f71acT",
    R"F1802f71acF(10: return 0;)F1802f71acF",
    R"F1802f71acU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f71acU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f71ac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f71ac", "FUN_1802f71ac");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 2c88095f48eda1c19e9bbea1c50d88c2445c845d832622477c765a16afddfaf7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f71ac(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f71ac;
}

// 0x1802f71d0 FUN_1802f71d0
// source: re/dump/decompile/0x1802f71d0_FUN_1802f71d0.c
// size: 22 bytes; thunk: false
// body sha256: c0d4bfc6b69595754812a446620234cb29924fb37b6a476bc054191e9b5c8cc9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f71d0{
    "0x1802f71d0",
    "FUN_1802f71d0",
    R"F1802f71d0S(undefined FUN_1802f71d0())F1802f71d0S",
    R"B1802f71d0(// 0x1802f71d0  FUN_1802f71d0
// size=22 thunk=false
// signature: undefined FUN_1802f71d0()
// status: ok


void FUN_1802f71d0(void)

{
  DAT_180427664 = DAT_180427664 & 0xfffffffe;
  return;
}


)B1802f71d0",
    "c0d4bfc6b69595754812a446620234cb29924fb37b6a476bc054191e9b5c8cc9",
    R"F1802f71d0C()F1802f71d0C",
    R"F1802f71d0D(DAT_180427664)F1802f71d0D",
    R"F1802f71d0T()F1802f71d0T",
    R"F1802f71d0F(11: return;)F1802f71d0F",
    R"F1802f71d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427664.)F1802f71d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f71d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f71d0", "FUN_1802f71d0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427664.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180427664", static_cast<const void*>(&image::DAT_180427664));
    // body sha256: c0d4bfc6b69595754812a446620234cb29924fb37b6a476bc054191e9b5c8cc9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f71d0(void)");
        {
            trace.statement("DAT_180427664 = DAT_180427664 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f71d0;
}

// 0x1802f71e6 FUN_1802f71e6
// source: re/dump/decompile/0x1802f71e6_FUN_1802f71e6.c
// size: 82 bytes; thunk: false
// body sha256: a1fc48a7e28fb7efd17addb626caa6b1462e5355fa9ab0b0d0734f2ec4bf9bfe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f71e6{
    "0x1802f71e6",
    "FUN_1802f71e6",
    R"F1802f71e6S(undefined FUN_1802f71e6())F1802f71e6S",
    R"B1802f71e6(// 0x1802f71e6  FUN_1802f71e6
// size=82 thunk=false
// signature: undefined FUN_1802f71e6()
// status: ok


undefined8 FUN_1802f71e6(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_2 + 0x32) = *(undefined1 *)(param_2 + 0x5c);
  return 0;
}


)B1802f71e6",
    "a1fc48a7e28fb7efd17addb626caa6b1462e5355fa9ab0b0d0734f2ec4bf9bfe",
    R"F1802f71e6C()F1802f71e6C",
    R"F1802f71e6D()F1802f71e6D",
    R"F1802f71e6T()F1802f71e6T",
    R"F1802f71e6F(16: return 0;)F1802f71e6F",
    R"F1802f71e6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f71e6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f71e6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f71e6", "FUN_1802f71e6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a1fc48a7e28fb7efd17addb626caa6b1462e5355fa9ab0b0d0734f2ec4bf9bfe
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f71e6(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x48);");
            trace.statement("*(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x4c);");
            trace.statement("*(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x50);");
            trace.statement("*(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x54);");
            trace.statement("*(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x58);");
            trace.statement("*(undefined1 *)(param_2 + 0x32) = *(undefined1 *)(param_2 + 0x5c);");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f71e6;
}

// 0x1802f7300 FUN_1802f7300
// source: re/dump/decompile/0x1802f7300_FUN_1802f7300.c
// size: 22 bytes; thunk: false
// body sha256: d76c96ba2278874109660b67aa36e63d12ad2d82e92f995f4ecc37c198c03b92
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7300{
    "0x1802f7300",
    "FUN_1802f7300",
    R"F1802f7300S(undefined FUN_1802f7300())F1802f7300S",
    R"B1802f7300(// 0x1802f7300  FUN_1802f7300
// size=22 thunk=false
// signature: undefined FUN_1802f7300()
// status: ok


void FUN_1802f7300(void)

{
  DAT_1805b8880 = DAT_1805b8880 & 0xfffffffe;
  return;
}


)B1802f7300",
    "d76c96ba2278874109660b67aa36e63d12ad2d82e92f995f4ecc37c198c03b92",
    R"F1802f7300C()F1802f7300C",
    R"F1802f7300D(DAT_1805b8880)F1802f7300D",
    R"F1802f7300T()F1802f7300T",
    R"F1802f7300F(11: return;)F1802f7300F",
    R"F1802f7300U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805b8880.)F1802f7300U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7300() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7300", "FUN_1802f7300");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805b8880.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805b8880", static_cast<const void*>(&image::DAT_1805b8880));
    // body sha256: d76c96ba2278874109660b67aa36e63d12ad2d82e92f995f4ecc37c198c03b92
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7300(void)");
        {
            trace.statement("DAT_1805b8880 = DAT_1805b8880 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f7300;
}

// 0x1802f7330 FUN_1802f7330
// source: re/dump/decompile/0x1802f7330_FUN_1802f7330.c
// size: 42 bytes; thunk: false
// body sha256: 893ed606a771b7ba4d90126cead6f2955c1144dea5eb894d0650c143f8266e33
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7330{
    "0x1802f7330",
    "FUN_1802f7330",
    R"F1802f7330S(undefined FUN_1802f7330())F1802f7330S",
    R"B1802f7330(// 0x1802f7330  FUN_1802f7330
// size=42 thunk=false
// signature: undefined FUN_1802f7330()
// status: ok


undefined8 FUN_1802f7330(void)

{
  FUN_180014410("[ESP] listener unregister threw\n");
  return 0;
}


)B1802f7330",
    "893ed606a771b7ba4d90126cead6f2955c1144dea5eb894d0650c143f8266e33",
    R"F1802f7330C(FUN_180014410)F1802f7330C",
    R"F1802f7330D()F1802f7330D",
    R"F1802f7330T("[ESP] listener unregister threw\\n")F1802f7330T",
    R"F1802f7330F(11: return 0;)F1802f7330F",
    R"F1802f7330U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7330U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7330() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7330", "FUN_1802f7330");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[ESP] listener unregister threw\\n");
    // body sha256: 893ed606a771b7ba4d90126cead6f2955c1144dea5eb894d0650c143f8266e33
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7330(void)");
        {
            trace.statement("FUN_180014410(\"[ESP] listener unregister threw\\n\");");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7330;
}

// 0x1802f7380 FUN_1802f7380
// source: re/dump/decompile/0x1802f7380_FUN_1802f7380.c
// size: 29 bytes; thunk: false
// body sha256: 4b3fe0a2664cb8577830566f2c745855fbe925d150887313d78c92492da1e073
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7380{
    "0x1802f7380",
    "FUN_1802f7380",
    R"F1802f7380S(undefined FUN_1802f7380())F1802f7380S",
    R"B1802f7380(// 0x1802f7380  FUN_1802f7380
// size=29 thunk=false
// signature: undefined FUN_1802f7380()
// status: ok


undefined8 FUN_1802f7380(void)

{
  return 0;
}


)B1802f7380",
    "4b3fe0a2664cb8577830566f2c745855fbe925d150887313d78c92492da1e073",
    R"F1802f7380C()F1802f7380C",
    R"F1802f7380D()F1802f7380D",
    R"F1802f7380T()F1802f7380T",
    R"F1802f7380F(10: return 0;)F1802f7380F",
    R"F1802f7380U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7380U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7380() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7380", "FUN_1802f7380");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4b3fe0a2664cb8577830566f2c745855fbe925d150887313d78c92492da1e073
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7380(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7380;
}

// 0x1802f739e FUN_1802f739e
// source: re/dump/decompile/0x1802f739e_FUN_1802f739e.c
// size: 29 bytes; thunk: false
// body sha256: 55f26c8e1dfc725bfd96deddb62dcd28bbef8ce916a481fc2e7c23c6c5b1ad67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f739e{
    "0x1802f739e",
    "FUN_1802f739e",
    R"F1802f739eS(undefined FUN_1802f739e())F1802f739eS",
    R"B1802f739e(// 0x1802f739e  FUN_1802f739e
// size=29 thunk=false
// signature: undefined FUN_1802f739e()
// status: ok


undefined8 FUN_1802f739e(void)

{
  return 0;
}


)B1802f739e",
    "55f26c8e1dfc725bfd96deddb62dcd28bbef8ce916a481fc2e7c23c6c5b1ad67",
    R"F1802f739eC()F1802f739eC",
    R"F1802f739eD()F1802f739eD",
    R"F1802f739eT()F1802f739eT",
    R"F1802f739eF(10: return 0;)F1802f739eF",
    R"F1802f739eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f739eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f739e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f739e", "FUN_1802f739e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 55f26c8e1dfc725bfd96deddb62dcd28bbef8ce916a481fc2e7c23c6c5b1ad67
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f739e(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f739e;
}

// 0x1802f73d8 FUN_1802f73d8
// source: re/dump/decompile/0x1802f73d8_FUN_1802f73d8.c
// size: 42 bytes; thunk: false
// body sha256: f5419d5aa1c45a0bc677c65dc88f5680e8c5448974bc9376d9d2e00d7232471f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f73d8{
    "0x1802f73d8",
    "FUN_1802f73d8",
    R"F1802f73d8S(undefined FUN_1802f73d8())F1802f73d8S",
    R"B1802f73d8(// 0x1802f73d8  FUN_1802f73d8
// size=42 thunk=false
// signature: undefined FUN_1802f73d8()
// status: ok


undefined8 FUN_1802f73d8(void)

{
  FUN_180014410(
               "[ESP] Entity delete listener registration threw - preserving ghosts conservatively\n"
               );
  return 0;
}


)B1802f73d8",
    "f5419d5aa1c45a0bc677c65dc88f5680e8c5448974bc9376d9d2e00d7232471f",
    R"F1802f73d8C(FUN_180014410)F1802f73d8C",
    R"F1802f73d8D()F1802f73d8D",
    R"F1802f73d8T("[ESP] Entity delete listener registration threw - preserving ghosts conservatively\\n")F1802f73d8T",
    R"F1802f73d8F(13: return 0;)F1802f73d8F",
    R"F1802f73d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f73d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f73d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f73d8", "FUN_1802f73d8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.string_literal("[ESP] Entity delete listener registration threw - preserving ghosts conservatively\\n");
    // body sha256: f5419d5aa1c45a0bc677c65dc88f5680e8c5448974bc9376d9d2e00d7232471f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f73d8(void)");
        {
            trace.statement("FUN_180014410(");
            trace.statement("\"[ESP] Entity delete listener registration threw - preserving ghosts conservatively\\n\"");
            trace.statement(");");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f73d8;
}

// 0x1802f7410 FUN_1802f7410
// source: re/dump/decompile/0x1802f7410_FUN_1802f7410.c
// size: 22 bytes; thunk: false
// body sha256: 8fee1da9772980ba7e0a2b1c065813112194a2cefbcbb34c94150da1e7eeed83
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7410{
    "0x1802f7410",
    "FUN_1802f7410",
    R"F1802f7410S(undefined FUN_1802f7410())F1802f7410S",
    R"B1802f7410(// 0x1802f7410  FUN_1802f7410
// size=22 thunk=false
// signature: undefined FUN_1802f7410()
// status: ok


void FUN_1802f7410(void)

{
  DAT_1805c7b04 = DAT_1805c7b04 & 0xfffffffe;
  return;
}


)B1802f7410",
    "8fee1da9772980ba7e0a2b1c065813112194a2cefbcbb34c94150da1e7eeed83",
    R"F1802f7410C()F1802f7410C",
    R"F1802f7410D(DAT_1805c7b04)F1802f7410D",
    R"F1802f7410T()F1802f7410T",
    R"F1802f7410F(11: return;)F1802f7410F",
    R"F1802f7410U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7b04.)F1802f7410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7410() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7410", "FUN_1802f7410");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7b04.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7b04", static_cast<const void*>(&image::DAT_1805c7b04));
    // body sha256: 8fee1da9772980ba7e0a2b1c065813112194a2cefbcbb34c94150da1e7eeed83
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7410(void)");
        {
            trace.statement("DAT_1805c7b04 = DAT_1805c7b04 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f7410;
}

// 0x1802f743e FUN_1802f743e
// source: re/dump/decompile/0x1802f743e_FUN_1802f743e.c
// size: 33 bytes; thunk: false
// body sha256: fd3e10b5ccf63d4f34f7161366e834e4996444de65ac027b6a3c147488c54060
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f743e{
    "0x1802f743e",
    "FUN_1802f743e",
    R"F1802f743eS(undefined FUN_1802f743e())F1802f743eS",
    R"B1802f743e(// 0x1802f743e  FUN_1802f743e
// size=33 thunk=false
// signature: undefined FUN_1802f743e()
// status: ok


undefined8 FUN_1802f743e(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x20) = 0;
  return 0;
}


)B1802f743e",
    "fd3e10b5ccf63d4f34f7161366e834e4996444de65ac027b6a3c147488c54060",
    R"F1802f743eC()F1802f743eC",
    R"F1802f743eD()F1802f743eD",
    R"F1802f743eT()F1802f743eT",
    R"F1802f743eF(11: return 0;)F1802f743eF",
    R"F1802f743eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f743eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f743e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f743e", "FUN_1802f743e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fd3e10b5ccf63d4f34f7161366e834e4996444de65ac027b6a3c147488c54060
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f743e(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined1 *)(param_2 + 0x20) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f743e;
}

// 0x1802f7480 FUN_1802f7480
// source: re/dump/decompile/0x1802f7480_FUN_1802f7480.c
// size: 22 bytes; thunk: false
// body sha256: 42586b010ea98f7ec73c246b80ea56b4f84bf51b09f77f1925fce10f922eb219
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7480{
    "0x1802f7480",
    "FUN_1802f7480",
    R"F1802f7480S(undefined FUN_1802f7480())F1802f7480S",
    R"B1802f7480(// 0x1802f7480  FUN_1802f7480
// size=22 thunk=false
// signature: undefined FUN_1802f7480()
// status: ok


void FUN_1802f7480(void)

{
  DAT_1805707bc = DAT_1805707bc & 0xfffffffe;
  return;
}


)B1802f7480",
    "42586b010ea98f7ec73c246b80ea56b4f84bf51b09f77f1925fce10f922eb219",
    R"F1802f7480C()F1802f7480C",
    R"F1802f7480D(DAT_1805707bc)F1802f7480D",
    R"F1802f7480T()F1802f7480T",
    R"F1802f7480F(11: return;)F1802f7480F",
    R"F1802f7480U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805707bc.)F1802f7480U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7480() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7480", "FUN_1802f7480");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805707bc.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805707bc", static_cast<const void*>(&image::DAT_1805707bc));
    // body sha256: 42586b010ea98f7ec73c246b80ea56b4f84bf51b09f77f1925fce10f922eb219
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7480(void)");
        {
            trace.statement("DAT_1805707bc = DAT_1805707bc & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f7480;
}

// 0x1802f74a2 FUN_1802f74a2
// source: re/dump/decompile/0x1802f74a2_FUN_1802f74a2.c
// size: 29 bytes; thunk: false
// body sha256: 58b73588b52ca954a424880c20e4c52ad728165d17762c398111c58171e37290
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f74a2{
    "0x1802f74a2",
    "FUN_1802f74a2",
    R"F1802f74a2S(undefined FUN_1802f74a2())F1802f74a2S",
    R"B1802f74a2(// 0x1802f74a2  FUN_1802f74a2
// size=29 thunk=false
// signature: undefined FUN_1802f74a2()
// status: ok


undefined8 FUN_1802f74a2(void)

{
  return 0;
}


)B1802f74a2",
    "58b73588b52ca954a424880c20e4c52ad728165d17762c398111c58171e37290",
    R"F1802f74a2C()F1802f74a2C",
    R"F1802f74a2D()F1802f74a2D",
    R"F1802f74a2T()F1802f74a2T",
    R"F1802f74a2F(10: return 0;)F1802f74a2F",
    R"F1802f74a2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f74a2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f74a2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f74a2", "FUN_1802f74a2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 58b73588b52ca954a424880c20e4c52ad728165d17762c398111c58171e37290
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f74a2(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f74a2;
}

// 0x1802f74c0 FUN_1802f74c0
// source: re/dump/decompile/0x1802f74c0_FUN_1802f74c0.c
// size: 29 bytes; thunk: false
// body sha256: c8331f4d7609fc76ad9d060e3eeb93ed87768eb2f1e5badaaefe1ac79ae1c833
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f74c0{
    "0x1802f74c0",
    "FUN_1802f74c0",
    R"F1802f74c0S(undefined FUN_1802f74c0())F1802f74c0S",
    R"B1802f74c0(// 0x1802f74c0  FUN_1802f74c0
// size=29 thunk=false
// signature: undefined FUN_1802f74c0()
// status: ok


undefined8 FUN_1802f74c0(void)

{
  return 0;
}


)B1802f74c0",
    "c8331f4d7609fc76ad9d060e3eeb93ed87768eb2f1e5badaaefe1ac79ae1c833",
    R"F1802f74c0C()F1802f74c0C",
    R"F1802f74c0D()F1802f74c0D",
    R"F1802f74c0T()F1802f74c0T",
    R"F1802f74c0F(10: return 0;)F1802f74c0F",
    R"F1802f74c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f74c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f74c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f74c0", "FUN_1802f74c0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c8331f4d7609fc76ad9d060e3eeb93ed87768eb2f1e5badaaefe1ac79ae1c833
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f74c0(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f74c0;
}

// 0x1802f751c FUN_1802f751c
// source: re/dump/decompile/0x1802f751c_FUN_1802f751c.c
// size: 29 bytes; thunk: false
// body sha256: 5f31dd7eaf1e7dbbe35d33498efe1ac37c6a3a8094943382e1a375dceb5666a2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f751c{
    "0x1802f751c",
    "FUN_1802f751c",
    R"F1802f751cS(undefined FUN_1802f751c())F1802f751cS",
    R"B1802f751c(// 0x1802f751c  FUN_1802f751c
// size=29 thunk=false
// signature: undefined FUN_1802f751c()
// status: ok


undefined8 FUN_1802f751c(void)

{
  return 0;
}


)B1802f751c",
    "5f31dd7eaf1e7dbbe35d33498efe1ac37c6a3a8094943382e1a375dceb5666a2",
    R"F1802f751cC()F1802f751cC",
    R"F1802f751cD()F1802f751cD",
    R"F1802f751cT()F1802f751cT",
    R"F1802f751cF(10: return 0;)F1802f751cF",
    R"F1802f751cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f751cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f751c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f751c", "FUN_1802f751c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5f31dd7eaf1e7dbbe35d33498efe1ac37c6a3a8094943382e1a375dceb5666a2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f751c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f751c;
}

// 0x1802f7540 FUN_1802f7540
// source: re/dump/decompile/0x1802f7540_FUN_1802f7540.c
// size: 29 bytes; thunk: false
// body sha256: 967c1f07bd59983f7408012a19c35c52ec389cb19c23d4f1b11535e4dcb65736
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7540{
    "0x1802f7540",
    "FUN_1802f7540",
    R"F1802f7540S(undefined FUN_1802f7540())F1802f7540S",
    R"B1802f7540(// 0x1802f7540  FUN_1802f7540
// size=29 thunk=false
// signature: undefined FUN_1802f7540()
// status: ok


undefined8 FUN_1802f7540(void)

{
  return 0;
}


)B1802f7540",
    "967c1f07bd59983f7408012a19c35c52ec389cb19c23d4f1b11535e4dcb65736",
    R"F1802f7540C()F1802f7540C",
    R"F1802f7540D()F1802f7540D",
    R"F1802f7540T()F1802f7540T",
    R"F1802f7540F(10: return 0;)F1802f7540F",
    R"F1802f7540U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7540() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7540", "FUN_1802f7540");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 967c1f07bd59983f7408012a19c35c52ec389cb19c23d4f1b11535e4dcb65736
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7540(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7540;
}

// 0x1802f755e FUN_1802f755e
// source: re/dump/decompile/0x1802f755e_FUN_1802f755e.c
// size: 22 bytes; thunk: false
// body sha256: ef1df27617371d31da107c0f055d7108b199fdc7e5b3f9edbf9f6b4c728b0abd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f755e{
    "0x1802f755e",
    "FUN_1802f755e",
    R"F1802f755eS(undefined FUN_1802f755e())F1802f755eS",
    R"B1802f755e(// 0x1802f755e  FUN_1802f755e
// size=22 thunk=false
// signature: undefined FUN_1802f755e()
// status: ok


void FUN_1802f755e(void)

{
  DAT_1805c7b94 = DAT_1805c7b94 & 0xfffffffe;
  return;
}


)B1802f755e",
    "ef1df27617371d31da107c0f055d7108b199fdc7e5b3f9edbf9f6b4c728b0abd",
    R"F1802f755eC()F1802f755eC",
    R"F1802f755eD(DAT_1805c7b94)F1802f755eD",
    R"F1802f755eT()F1802f755eT",
    R"F1802f755eF(11: return;)F1802f755eF",
    R"F1802f755eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7b94.)F1802f755eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f755e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f755e", "FUN_1802f755e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7b94.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7b94", static_cast<const void*>(&image::DAT_1805c7b94));
    // body sha256: ef1df27617371d31da107c0f055d7108b199fdc7e5b3f9edbf9f6b4c728b0abd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f755e(void)");
        {
            trace.statement("DAT_1805c7b94 = DAT_1805c7b94 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f755e;
}

// 0x1802f7574 FUN_1802f7574
// source: re/dump/decompile/0x1802f7574_FUN_1802f7574.c
// size: 22 bytes; thunk: false
// body sha256: ea578c2ccec3f28aaceadfe3058a3d9c6bf83554de9da799ffd26369b6f27770
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7574{
    "0x1802f7574",
    "FUN_1802f7574",
    R"F1802f7574S(undefined FUN_1802f7574())F1802f7574S",
    R"B1802f7574(// 0x1802f7574  FUN_1802f7574
// size=22 thunk=false
// signature: undefined FUN_1802f7574()
// status: ok


void FUN_1802f7574(void)

{
  DAT_1805c7b94 = DAT_1805c7b94 & 0xfffffffd;
  return;
}


)B1802f7574",
    "ea578c2ccec3f28aaceadfe3058a3d9c6bf83554de9da799ffd26369b6f27770",
    R"F1802f7574C()F1802f7574C",
    R"F1802f7574D(DAT_1805c7b94)F1802f7574D",
    R"F1802f7574T()F1802f7574T",
    R"F1802f7574F(11: return;)F1802f7574F",
    R"F1802f7574U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7b94.)F1802f7574U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7574() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7574", "FUN_1802f7574");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7b94.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7b94", static_cast<const void*>(&image::DAT_1805c7b94));
    // body sha256: ea578c2ccec3f28aaceadfe3058a3d9c6bf83554de9da799ffd26369b6f27770
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7574(void)");
        {
            trace.statement("DAT_1805c7b94 = DAT_1805c7b94 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802f7574;
}

// 0x1802f75b6 FUN_1802f75b6
// source: re/dump/decompile/0x1802f75b6_FUN_1802f75b6.c
// size: 29 bytes; thunk: false
// body sha256: d852c6e1bf8650266df37967a08a5fa08c1b8c5f1809dd6557c81bbf81cd4da8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f75b6{
    "0x1802f75b6",
    "FUN_1802f75b6",
    R"F1802f75b6S(undefined FUN_1802f75b6())F1802f75b6S",
    R"B1802f75b6(// 0x1802f75b6  FUN_1802f75b6
// size=29 thunk=false
// signature: undefined FUN_1802f75b6()
// status: ok


undefined8 FUN_1802f75b6(void)

{
  return 0;
}


)B1802f75b6",
    "d852c6e1bf8650266df37967a08a5fa08c1b8c5f1809dd6557c81bbf81cd4da8",
    R"F1802f75b6C()F1802f75b6C",
    R"F1802f75b6D()F1802f75b6D",
    R"F1802f75b6T()F1802f75b6T",
    R"F1802f75b6F(10: return 0;)F1802f75b6F",
    R"F1802f75b6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f75b6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f75b6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f75b6", "FUN_1802f75b6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d852c6e1bf8650266df37967a08a5fa08c1b8c5f1809dd6557c81bbf81cd4da8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f75b6(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f75b6;
}

// 0x1802f75d4 FUN_1802f75d4
// source: re/dump/decompile/0x1802f75d4_FUN_1802f75d4.c
// size: 33 bytes; thunk: false
// body sha256: 4e955ccb9fc771f20168f87c62f99281076524238edb2f30c8de548a07143471
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f75d4{
    "0x1802f75d4",
    "FUN_1802f75d4",
    R"F1802f75d4S(undefined FUN_1802f75d4())F1802f75d4S",
    R"B1802f75d4(// 0x1802f75d4  FUN_1802f75d4
// size=33 thunk=false
// signature: undefined FUN_1802f75d4()
// status: ok


undefined8 FUN_1802f75d4(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x40) = 1;
  return 0;
}


)B1802f75d4",
    "4e955ccb9fc771f20168f87c62f99281076524238edb2f30c8de548a07143471",
    R"F1802f75d4C()F1802f75d4C",
    R"F1802f75d4D()F1802f75d4D",
    R"F1802f75d4T()F1802f75d4T",
    R"F1802f75d4F(11: return 0;)F1802f75d4F",
    R"F1802f75d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f75d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f75d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f75d4", "FUN_1802f75d4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4e955ccb9fc771f20168f87c62f99281076524238edb2f30c8de548a07143471
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f75d4(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined1 *)(param_2 + 0x40) = 1;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f75d4;
}

// 0x1802f7602 FUN_1802f7602
// source: re/dump/decompile/0x1802f7602_FUN_1802f7602.c
// size: 29 bytes; thunk: false
// body sha256: de26b538eb4119222f25c55610fd1b8938060119f894a3ef6051bc386f2277b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7602{
    "0x1802f7602",
    "FUN_1802f7602",
    R"F1802f7602S(undefined FUN_1802f7602())F1802f7602S",
    R"B1802f7602(// 0x1802f7602  FUN_1802f7602
// size=29 thunk=false
// signature: undefined FUN_1802f7602()
// status: ok


undefined8 FUN_1802f7602(void)

{
  return 0;
}


)B1802f7602",
    "de26b538eb4119222f25c55610fd1b8938060119f894a3ef6051bc386f2277b6",
    R"F1802f7602C()F1802f7602C",
    R"F1802f7602D()F1802f7602D",
    R"F1802f7602T()F1802f7602T",
    R"F1802f7602F(10: return 0;)F1802f7602F",
    R"F1802f7602U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7602U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7602() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7602", "FUN_1802f7602");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: de26b538eb4119222f25c55610fd1b8938060119f894a3ef6051bc386f2277b6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7602(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7602;
}

// 0x1802f7620 FUN_1802f7620
// source: re/dump/decompile/0x1802f7620_FUN_1802f7620.c
// size: 29 bytes; thunk: false
// body sha256: 7059f1579c53eec8f8196c0e3356d53c6f689161cfa3ebdac5c5a0aad34ffada
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7620{
    "0x1802f7620",
    "FUN_1802f7620",
    R"F1802f7620S(undefined FUN_1802f7620())F1802f7620S",
    R"B1802f7620(// 0x1802f7620  FUN_1802f7620
// size=29 thunk=false
// signature: undefined FUN_1802f7620()
// status: ok


undefined8 FUN_1802f7620(void)

{
  return 0;
}


)B1802f7620",
    "7059f1579c53eec8f8196c0e3356d53c6f689161cfa3ebdac5c5a0aad34ffada",
    R"F1802f7620C()F1802f7620C",
    R"F1802f7620D()F1802f7620D",
    R"F1802f7620T()F1802f7620T",
    R"F1802f7620F(10: return 0;)F1802f7620F",
    R"F1802f7620U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7620() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7620", "FUN_1802f7620");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7059f1579c53eec8f8196c0e3356d53c6f689161cfa3ebdac5c5a0aad34ffada
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7620(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7620;
}

// 0x1802f763e FUN_1802f763e
// source: re/dump/decompile/0x1802f763e_FUN_1802f763e.c
// size: 29 bytes; thunk: false
// body sha256: 1fb589d89b875824aa9f7eab6cba2f5a9382277e4ae3b5dc398f3f8693fd9b58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f763e{
    "0x1802f763e",
    "FUN_1802f763e",
    R"F1802f763eS(undefined FUN_1802f763e())F1802f763eS",
    R"B1802f763e(// 0x1802f763e  FUN_1802f763e
// size=29 thunk=false
// signature: undefined FUN_1802f763e()
// status: ok


undefined8 FUN_1802f763e(void)

{
  return 0;
}


)B1802f763e",
    "1fb589d89b875824aa9f7eab6cba2f5a9382277e4ae3b5dc398f3f8693fd9b58",
    R"F1802f763eC()F1802f763eC",
    R"F1802f763eD()F1802f763eD",
    R"F1802f763eT()F1802f763eT",
    R"F1802f763eF(10: return 0;)F1802f763eF",
    R"F1802f763eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f763eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f763e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f763e", "FUN_1802f763e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1fb589d89b875824aa9f7eab6cba2f5a9382277e4ae3b5dc398f3f8693fd9b58
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f763e(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f763e;
}

// 0x1802f765c FUN_1802f765c
// source: re/dump/decompile/0x1802f765c_FUN_1802f765c.c
// size: 29 bytes; thunk: false
// body sha256: 6ca1f549df6dd34188b3d3e1dfdd520b6a1d0fc22dcab4228ec1412ba7b32f9b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f765c{
    "0x1802f765c",
    "FUN_1802f765c",
    R"F1802f765cS(undefined FUN_1802f765c())F1802f765cS",
    R"B1802f765c(// 0x1802f765c  FUN_1802f765c
// size=29 thunk=false
// signature: undefined FUN_1802f765c()
// status: ok


undefined8 FUN_1802f765c(void)

{
  return 0;
}


)B1802f765c",
    "6ca1f549df6dd34188b3d3e1dfdd520b6a1d0fc22dcab4228ec1412ba7b32f9b",
    R"F1802f765cC()F1802f765cC",
    R"F1802f765cD()F1802f765cD",
    R"F1802f765cT()F1802f765cT",
    R"F1802f765cF(10: return 0;)F1802f765cF",
    R"F1802f765cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f765cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f765c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f765c", "FUN_1802f765c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6ca1f549df6dd34188b3d3e1dfdd520b6a1d0fc22dcab4228ec1412ba7b32f9b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f765c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f765c;
}

// 0x1802f767a FUN_1802f767a
// source: re/dump/decompile/0x1802f767a_FUN_1802f767a.c
// size: 29 bytes; thunk: false
// body sha256: b5670a4a38b042d45eed60df6109d06b83c785c22f2fe93eac9994757a05db83
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f767a{
    "0x1802f767a",
    "FUN_1802f767a",
    R"F1802f767aS(undefined FUN_1802f767a())F1802f767aS",
    R"B1802f767a(// 0x1802f767a  FUN_1802f767a
// size=29 thunk=false
// signature: undefined FUN_1802f767a()
// status: ok


undefined8 FUN_1802f767a(void)

{
  return 0;
}


)B1802f767a",
    "b5670a4a38b042d45eed60df6109d06b83c785c22f2fe93eac9994757a05db83",
    R"F1802f767aC()F1802f767aC",
    R"F1802f767aD()F1802f767aD",
    R"F1802f767aT()F1802f767aT",
    R"F1802f767aF(10: return 0;)F1802f767aF",
    R"F1802f767aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f767aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f767a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f767a", "FUN_1802f767a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b5670a4a38b042d45eed60df6109d06b83c785c22f2fe93eac9994757a05db83
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f767a(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f767a;
}

// 0x1802f7698 FUN_1802f7698
// source: re/dump/decompile/0x1802f7698_FUN_1802f7698.c
// size: 29 bytes; thunk: false
// body sha256: a6abcf4b4883f75a81884f17f1040c5b7cddfcf31774457016a2ca69ebc91ed3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7698{
    "0x1802f7698",
    "FUN_1802f7698",
    R"F1802f7698S(undefined FUN_1802f7698())F1802f7698S",
    R"B1802f7698(// 0x1802f7698  FUN_1802f7698
// size=29 thunk=false
// signature: undefined FUN_1802f7698()
// status: ok


undefined8 FUN_1802f7698(void)

{
  return 0;
}


)B1802f7698",
    "a6abcf4b4883f75a81884f17f1040c5b7cddfcf31774457016a2ca69ebc91ed3",
    R"F1802f7698C()F1802f7698C",
    R"F1802f7698D()F1802f7698D",
    R"F1802f7698T()F1802f7698T",
    R"F1802f7698F(10: return 0;)F1802f7698F",
    R"F1802f7698U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7698U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7698() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7698", "FUN_1802f7698");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a6abcf4b4883f75a81884f17f1040c5b7cddfcf31774457016a2ca69ebc91ed3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7698(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7698;
}

// 0x1802f76f0 FUN_1802f76f0
// source: re/dump/decompile/0x1802f76f0_FUN_1802f76f0.c
// size: 29 bytes; thunk: false
// body sha256: a65e187fa09388b24563945d2490fba4c3b901cfac546199409b9f94e1a3d9d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f76f0{
    "0x1802f76f0",
    "FUN_1802f76f0",
    R"F1802f76f0S(undefined FUN_1802f76f0())F1802f76f0S",
    R"B1802f76f0(// 0x1802f76f0  FUN_1802f76f0
// size=29 thunk=false
// signature: undefined FUN_1802f76f0()
// status: ok


undefined8 FUN_1802f76f0(void)

{
  return 0;
}


)B1802f76f0",
    "a65e187fa09388b24563945d2490fba4c3b901cfac546199409b9f94e1a3d9d2",
    R"F1802f76f0C()F1802f76f0C",
    R"F1802f76f0D()F1802f76f0D",
    R"F1802f76f0T()F1802f76f0T",
    R"F1802f76f0F(10: return 0;)F1802f76f0F",
    R"F1802f76f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f76f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f76f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f76f0", "FUN_1802f76f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a65e187fa09388b24563945d2490fba4c3b901cfac546199409b9f94e1a3d9d2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f76f0(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f76f0;
}

// 0x1802f770e FUN_1802f770e
// source: re/dump/decompile/0x1802f770e_FUN_1802f770e.c
// size: 29 bytes; thunk: false
// body sha256: 246f511c8032d30aaafdb94fe44f0d7571562dfff2094540ad9d4fa610fa2abb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f770e{
    "0x1802f770e",
    "FUN_1802f770e",
    R"F1802f770eS(undefined FUN_1802f770e())F1802f770eS",
    R"B1802f770e(// 0x1802f770e  FUN_1802f770e
// size=29 thunk=false
// signature: undefined FUN_1802f770e()
// status: ok


undefined8 FUN_1802f770e(void)

{
  return 0;
}


)B1802f770e",
    "246f511c8032d30aaafdb94fe44f0d7571562dfff2094540ad9d4fa610fa2abb",
    R"F1802f770eC()F1802f770eC",
    R"F1802f770eD()F1802f770eD",
    R"F1802f770eT()F1802f770eT",
    R"F1802f770eF(10: return 0;)F1802f770eF",
    R"F1802f770eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f770eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f770e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f770e", "FUN_1802f770e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 246f511c8032d30aaafdb94fe44f0d7571562dfff2094540ad9d4fa610fa2abb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f770e(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f770e;
}

// 0x1802f772c FUN_1802f772c
// source: re/dump/decompile/0x1802f772c_FUN_1802f772c.c
// size: 29 bytes; thunk: false
// body sha256: 925aa43127f4bc4ff4f6212f441f579fe1aa52b5e57de1fd9b8ac370db39ac26
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f772c{
    "0x1802f772c",
    "FUN_1802f772c",
    R"F1802f772cS(undefined FUN_1802f772c())F1802f772cS",
    R"B1802f772c(// 0x1802f772c  FUN_1802f772c
// size=29 thunk=false
// signature: undefined FUN_1802f772c()
// status: ok


undefined8 FUN_1802f772c(void)

{
  return 0;
}


)B1802f772c",
    "925aa43127f4bc4ff4f6212f441f579fe1aa52b5e57de1fd9b8ac370db39ac26",
    R"F1802f772cC()F1802f772cC",
    R"F1802f772cD()F1802f772cD",
    R"F1802f772cT()F1802f772cT",
    R"F1802f772cF(10: return 0;)F1802f772cF",
    R"F1802f772cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f772cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f772c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f772c", "FUN_1802f772c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 925aa43127f4bc4ff4f6212f441f579fe1aa52b5e57de1fd9b8ac370db39ac26
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f772c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f772c;
}

// 0x1802f774a FUN_1802f774a
// source: re/dump/decompile/0x1802f774a_FUN_1802f774a.c
// size: 36 bytes; thunk: false
// body sha256: d76349697fd4cb0b33c45268e85219c218a7c2b372c8138cf5fe1c518f59ed5b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f774a{
    "0x1802f774a",
    "FUN_1802f774a",
    R"F1802f774aS(undefined FUN_1802f774a())F1802f774aS",
    R"B1802f774a(// 0x1802f774a  FUN_1802f774a
// size=36 thunk=false
// signature: undefined FUN_1802f774a()
// status: ok


undefined8 FUN_1802f774a(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x28) = 0;
  return 0;
}


)B1802f774a",
    "d76349697fd4cb0b33c45268e85219c218a7c2b372c8138cf5fe1c518f59ed5b",
    R"F1802f774aC()F1802f774aC",
    R"F1802f774aD()F1802f774aD",
    R"F1802f774aT()F1802f774aT",
    R"F1802f774aF(11: return 0;)F1802f774aF",
    R"F1802f774aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f774aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f774a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f774a", "FUN_1802f774a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d76349697fd4cb0b33c45268e85219c218a7c2b372c8138cf5fe1c518f59ed5b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f774a(undefined8 param_1,longlong param_2)");
        {
            trace.statement("*(undefined4 *)(param_2 + 0x28) = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f774a;
}

// 0x1802f777c FUN_1802f777c
// source: re/dump/decompile/0x1802f777c_FUN_1802f777c.c
// size: 29 bytes; thunk: false
// body sha256: 7898a74165034e9d4f8dd4013d690ae9066e3cb922c5446c502c26e76167d3eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f777c{
    "0x1802f777c",
    "FUN_1802f777c",
    R"F1802f777cS(undefined FUN_1802f777c())F1802f777cS",
    R"B1802f777c(// 0x1802f777c  FUN_1802f777c
// size=29 thunk=false
// signature: undefined FUN_1802f777c()
// status: ok


undefined8 FUN_1802f777c(void)

{
  return 0;
}


)B1802f777c",
    "7898a74165034e9d4f8dd4013d690ae9066e3cb922c5446c502c26e76167d3eb",
    R"F1802f777cC()F1802f777cC",
    R"F1802f777cD()F1802f777cD",
    R"F1802f777cT()F1802f777cT",
    R"F1802f777cF(10: return 0;)F1802f777cF",
    R"F1802f777cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f777cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f777c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f777c", "FUN_1802f777c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7898a74165034e9d4f8dd4013d690ae9066e3cb922c5446c502c26e76167d3eb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f777c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f777c;
}

// 0x1802f77a6 FUN_1802f77a6
// source: re/dump/decompile/0x1802f77a6_FUN_1802f77a6.c
// size: 38 bytes; thunk: false
// body sha256: 1c180aac4cd88dcf3cebb7de2ba2f2acfc39e9cdc8f0eab059afb3764cb02ec8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f77a6{
    "0x1802f77a6",
    "FUN_1802f77a6",
    R"F1802f77a6S(undefined FUN_1802f77a6())F1802f77a6S",
    R"B1802f77a6(// 0x1802f77a6  FUN_1802f77a6
// size=38 thunk=false
// signature: undefined FUN_1802f77a6()
// status: ok


void FUN_1802f77a6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802f77a6",
    "1c180aac4cd88dcf3cebb7de2ba2f2acfc39e9cdc8f0eab059afb3764cb02ec8",
    R"F1802f77a6C()F1802f77a6C",
    R"F1802f77a6D()F1802f77a6D",
    R"F1802f77a6T()F1802f77a6T",
    R"F1802f77a6F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f77a6F",
    R"F1802f77a6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f77a6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f77a6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f77a6", "FUN_1802f77a6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1c180aac4cd88dcf3cebb7de2ba2f2acfc39e9cdc8f0eab059afb3764cb02ec8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f77a6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f77a6;
}

// 0x1802f77d8 FUN_1802f77d8
// source: re/dump/decompile/0x1802f77d8_FUN_1802f77d8.c
// size: 38 bytes; thunk: false
// body sha256: c110d27d120c7a54ea7e82ce6ddfe049cda96be0eb94d441f563a16c9959d454
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f77d8{
    "0x1802f77d8",
    "FUN_1802f77d8",
    R"F1802f77d8S(undefined FUN_1802f77d8())F1802f77d8S",
    R"B1802f77d8(// 0x1802f77d8  FUN_1802f77d8
// size=38 thunk=false
// signature: undefined FUN_1802f77d8()
// status: ok


void FUN_1802f77d8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


)B1802f77d8",
    "c110d27d120c7a54ea7e82ce6ddfe049cda96be0eb94d441f563a16c9959d454",
    R"F1802f77d8C()F1802f77d8C",
    R"F1802f77d8D()F1802f77d8D",
    R"F1802f77d8T()F1802f77d8T",
    R"F1802f77d8F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f77d8F",
    R"F1802f77d8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f77d8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f77d8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f77d8", "FUN_1802f77d8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c110d27d120c7a54ea7e82ce6ddfe049cda96be0eb94d441f563a16c9959d454
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f77d8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f77d8;
}

// 0x1802f78a0 FUN_1802f78a0
// source: re/dump/decompile/0x1802f78a0_FUN_1802f78a0.c
// size: 29 bytes; thunk: false
// body sha256: 96832a2ace065ba15752ed9057a0e1bb1b9747726bbea51b439704c215afec53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f78a0{
    "0x1802f78a0",
    "FUN_1802f78a0",
    R"F1802f78a0S(undefined FUN_1802f78a0())F1802f78a0S",
    R"B1802f78a0(// 0x1802f78a0  FUN_1802f78a0
// size=29 thunk=false
// signature: undefined FUN_1802f78a0()
// status: ok


undefined8 FUN_1802f78a0(void)

{
  return 0;
}


)B1802f78a0",
    "96832a2ace065ba15752ed9057a0e1bb1b9747726bbea51b439704c215afec53",
    R"F1802f78a0C()F1802f78a0C",
    R"F1802f78a0D()F1802f78a0D",
    R"F1802f78a0T()F1802f78a0T",
    R"F1802f78a0F(10: return 0;)F1802f78a0F",
    R"F1802f78a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f78a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f78a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f78a0", "FUN_1802f78a0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 96832a2ace065ba15752ed9057a0e1bb1b9747726bbea51b439704c215afec53
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f78a0(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f78a0;
}

// 0x1802f78be FUN_1802f78be
// source: re/dump/decompile/0x1802f78be_FUN_1802f78be.c
// size: 29 bytes; thunk: false
// body sha256: 8c1cd186f9b94b23fcb1c9e210ca8936fc66f5c58928e1ec20d2e81e86533dff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f78be{
    "0x1802f78be",
    "FUN_1802f78be",
    R"F1802f78beS(undefined FUN_1802f78be())F1802f78beS",
    R"B1802f78be(// 0x1802f78be  FUN_1802f78be
// size=29 thunk=false
// signature: undefined FUN_1802f78be()
// status: ok


undefined8 FUN_1802f78be(void)

{
  return 0;
}


)B1802f78be",
    "8c1cd186f9b94b23fcb1c9e210ca8936fc66f5c58928e1ec20d2e81e86533dff",
    R"F1802f78beC()F1802f78beC",
    R"F1802f78beD()F1802f78beD",
    R"F1802f78beT()F1802f78beT",
    R"F1802f78beF(10: return 0;)F1802f78beF",
    R"F1802f78beU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f78beU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f78be() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f78be", "FUN_1802f78be");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8c1cd186f9b94b23fcb1c9e210ca8936fc66f5c58928e1ec20d2e81e86533dff
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f78be(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f78be;
}

// 0x1802f78dc FUN_1802f78dc
// source: re/dump/decompile/0x1802f78dc_FUN_1802f78dc.c
// size: 29 bytes; thunk: false
// body sha256: 603db65f63e519efbee641c75bff5f389079415b25dcca9b2d6b16d4b61fa5bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f78dc{
    "0x1802f78dc",
    "FUN_1802f78dc",
    R"F1802f78dcS(undefined FUN_1802f78dc())F1802f78dcS",
    R"B1802f78dc(// 0x1802f78dc  FUN_1802f78dc
// size=29 thunk=false
// signature: undefined FUN_1802f78dc()
// status: ok


undefined8 FUN_1802f78dc(void)

{
  return 0;
}


)B1802f78dc",
    "603db65f63e519efbee641c75bff5f389079415b25dcca9b2d6b16d4b61fa5bd",
    R"F1802f78dcC()F1802f78dcC",
    R"F1802f78dcD()F1802f78dcD",
    R"F1802f78dcT()F1802f78dcT",
    R"F1802f78dcF(10: return 0;)F1802f78dcF",
    R"F1802f78dcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f78dcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f78dc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f78dc", "FUN_1802f78dc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 603db65f63e519efbee641c75bff5f389079415b25dcca9b2d6b16d4b61fa5bd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f78dc(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f78dc;
}

// 0x1802f78fa FUN_1802f78fa
// source: re/dump/decompile/0x1802f78fa_FUN_1802f78fa.c
// size: 29 bytes; thunk: false
// body sha256: 28c7f7ced0b04b66eed2b2372aeb27a10ab38699bbb375ece9fba28f7716c695
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f78fa{
    "0x1802f78fa",
    "FUN_1802f78fa",
    R"F1802f78faS(undefined FUN_1802f78fa())F1802f78faS",
    R"B1802f78fa(// 0x1802f78fa  FUN_1802f78fa
// size=29 thunk=false
// signature: undefined FUN_1802f78fa()
// status: ok


undefined8 FUN_1802f78fa(void)

{
  return 0;
}


)B1802f78fa",
    "28c7f7ced0b04b66eed2b2372aeb27a10ab38699bbb375ece9fba28f7716c695",
    R"F1802f78faC()F1802f78faC",
    R"F1802f78faD()F1802f78faD",
    R"F1802f78faT()F1802f78faT",
    R"F1802f78faF(10: return 0;)F1802f78faF",
    R"F1802f78faU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f78faU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f78fa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f78fa", "FUN_1802f78fa");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 28c7f7ced0b04b66eed2b2372aeb27a10ab38699bbb375ece9fba28f7716c695
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f78fa(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f78fa;
}

// 0x1802f7918 FUN_1802f7918
// source: re/dump/decompile/0x1802f7918_FUN_1802f7918.c
// size: 29 bytes; thunk: false
// body sha256: f2dccd6e9ffc88a730fc8b06e1a09fb2b498b5a5b3e46df55bfdfeb8a4dd294a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7918{
    "0x1802f7918",
    "FUN_1802f7918",
    R"F1802f7918S(undefined FUN_1802f7918())F1802f7918S",
    R"B1802f7918(// 0x1802f7918  FUN_1802f7918
// size=29 thunk=false
// signature: undefined FUN_1802f7918()
// status: ok


undefined8 FUN_1802f7918(void)

{
  return 0;
}


)B1802f7918",
    "f2dccd6e9ffc88a730fc8b06e1a09fb2b498b5a5b3e46df55bfdfeb8a4dd294a",
    R"F1802f7918C()F1802f7918C",
    R"F1802f7918D()F1802f7918D",
    R"F1802f7918T()F1802f7918T",
    R"F1802f7918F(10: return 0;)F1802f7918F",
    R"F1802f7918U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7918U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7918() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7918", "FUN_1802f7918");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f2dccd6e9ffc88a730fc8b06e1a09fb2b498b5a5b3e46df55bfdfeb8a4dd294a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7918(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7918;
}

// 0x1802f7936 FUN_1802f7936
// source: re/dump/decompile/0x1802f7936_FUN_1802f7936.c
// size: 29 bytes; thunk: false
// body sha256: 6a1fe198f7584f964b61e496775e51423eff7835c566cef77633aad37f862aee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7936{
    "0x1802f7936",
    "FUN_1802f7936",
    R"F1802f7936S(undefined FUN_1802f7936())F1802f7936S",
    R"B1802f7936(// 0x1802f7936  FUN_1802f7936
// size=29 thunk=false
// signature: undefined FUN_1802f7936()
// status: ok


undefined8 FUN_1802f7936(void)

{
  return 0;
}


)B1802f7936",
    "6a1fe198f7584f964b61e496775e51423eff7835c566cef77633aad37f862aee",
    R"F1802f7936C()F1802f7936C",
    R"F1802f7936D()F1802f7936D",
    R"F1802f7936T()F1802f7936T",
    R"F1802f7936F(10: return 0;)F1802f7936F",
    R"F1802f7936U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7936U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7936() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7936", "FUN_1802f7936");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6a1fe198f7584f964b61e496775e51423eff7835c566cef77633aad37f862aee
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7936(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7936;
}

// 0x1802f7954 FUN_1802f7954
// source: re/dump/decompile/0x1802f7954_FUN_1802f7954.c
// size: 29 bytes; thunk: false
// body sha256: 82ba16c3c3494e13315c37afedb951ea217e9ef6fdb31a2121b26450502e17f0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7954{
    "0x1802f7954",
    "FUN_1802f7954",
    R"F1802f7954S(undefined FUN_1802f7954())F1802f7954S",
    R"B1802f7954(// 0x1802f7954  FUN_1802f7954
// size=29 thunk=false
// signature: undefined FUN_1802f7954()
// status: ok


undefined8 FUN_1802f7954(void)

{
  return 0;
}


)B1802f7954",
    "82ba16c3c3494e13315c37afedb951ea217e9ef6fdb31a2121b26450502e17f0",
    R"F1802f7954C()F1802f7954C",
    R"F1802f7954D()F1802f7954D",
    R"F1802f7954T()F1802f7954T",
    R"F1802f7954F(10: return 0;)F1802f7954F",
    R"F1802f7954U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7954U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7954() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7954", "FUN_1802f7954");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 82ba16c3c3494e13315c37afedb951ea217e9ef6fdb31a2121b26450502e17f0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7954(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7954;
}

// 0x1802f79e0 FUN_1802f79e0
// source: re/dump/decompile/0x1802f79e0_FUN_1802f79e0.c
// size: 54 bytes; thunk: false
// body sha256: da0878abca549352ef47c3de9ec2e725d1b8915dc27e340736fbd13f99b8731d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f79e0{
    "0x1802f79e0",
    "FUN_1802f79e0",
    R"F1802f79e0S(undefined FUN_1802f79e0())F1802f79e0S",
    R"B1802f79e0(// 0x1802f79e0  FUN_1802f79e0
// size=54 thunk=false
// signature: undefined FUN_1802f79e0()
// status: ok


undefined8 FUN_1802f79e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  puVar1[2] = 0;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  return 0;
}


)B1802f79e0",
    "da0878abca549352ef47c3de9ec2e725d1b8915dc27e340736fbd13f99b8731d",
    R"F1802f79e0C()F1802f79e0C",
    R"F1802f79e0D()F1802f79e0D",
    R"F1802f79e0T()F1802f79e0T",
    R"F1802f79e0F(14: if (0xf < (ulonglong)puVar1[3]) {
18: return 0;)F1802f79e0F",
    R"F1802f79e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f79e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f79e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f79e0", "FUN_1802f79e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: da0878abca549352ef47c3de9ec2e725d1b8915dc27e340736fbd13f99b8731d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f79e0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("puVar1 = *(undefined8 **)(param_2 + 0x40);");
            trace.statement("puVar1[2] = 0;");
            if (trace.condition("if (0xf < (ulonglong)puVar1[3])")) {
                trace.statement("puVar1 = (undefined8 *)*puVar1;");
            }
            trace.statement("*(undefined1 *)puVar1 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f79e0;
}

// 0x1802f7a20 FUN_1802f7a20
// source: re/dump/decompile/0x1802f7a20_FUN_1802f7a20.c
// size: 54 bytes; thunk: false
// body sha256: 14c2e84c0ca0ab7809325f15ca67ab9e5da788d1e3297e13d46f49361f49aac2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7a20{
    "0x1802f7a20",
    "FUN_1802f7a20",
    R"F1802f7a20S(undefined FUN_1802f7a20())F1802f7a20S",
    R"B1802f7a20(// 0x1802f7a20  FUN_1802f7a20
// size=54 thunk=false
// signature: undefined FUN_1802f7a20()
// status: ok


undefined8 FUN_1802f7a20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x60);
  puVar1[2] = 0;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  return 0;
}


)B1802f7a20",
    "14c2e84c0ca0ab7809325f15ca67ab9e5da788d1e3297e13d46f49361f49aac2",
    R"F1802f7a20C()F1802f7a20C",
    R"F1802f7a20D()F1802f7a20D",
    R"F1802f7a20T()F1802f7a20T",
    R"F1802f7a20F(14: if (0xf < (ulonglong)puVar1[3]) {
18: return 0;)F1802f7a20F",
    R"F1802f7a20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7a20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7a20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7a20", "FUN_1802f7a20");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 14c2e84c0ca0ab7809325f15ca67ab9e5da788d1e3297e13d46f49361f49aac2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7a20(undefined8 param_1,longlong param_2)");
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("puVar1 = *(undefined8 **)(param_2 + 0x60);");
            trace.statement("puVar1[2] = 0;");
            if (trace.condition("if (0xf < (ulonglong)puVar1[3])")) {
                trace.statement("puVar1 = (undefined8 *)*puVar1;");
            }
            trace.statement("*(undefined1 *)puVar1 = 0;");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7a20;
}

// 0x1802f7a78 FUN_1802f7a78
// source: re/dump/decompile/0x1802f7a78_FUN_1802f7a78.c
// size: 41 bytes; thunk: false
// body sha256: 9101e6ce879621932b20528971647c48afab4efc5cb5dc4e52073bdab295d499
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7a78{
    "0x1802f7a78",
    "FUN_1802f7a78",
    R"F1802f7a78S(undefined FUN_1802f7a78())F1802f7a78S",
    R"B1802f7a78(// 0x1802f7a78  FUN_1802f7a78
// size=41 thunk=false
// signature: undefined FUN_1802f7a78()
// status: ok


void FUN_1802f7a78(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f7a78",
    "9101e6ce879621932b20528971647c48afab4efc5cb5dc4e52073bdab295d499",
    R"F1802f7a78C()F1802f7a78C",
    R"F1802f7a78D()F1802f7a78D",
    R"F1802f7a78T()F1802f7a78T",
    R"F1802f7a78F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f7a78F",
    R"F1802f7a78U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7a78U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7a78() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7a78", "FUN_1802f7a78");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9101e6ce879621932b20528971647c48afab4efc5cb5dc4e52073bdab295d499
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7a78(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7a78;
}

// 0x1802f7aa1 FUN_1802f7aa1
// source: re/dump/decompile/0x1802f7aa1_FUN_1802f7aa1.c
// size: 41 bytes; thunk: false
// body sha256: fa15f9bd19592015de098c27dd98dcbc22e5093618268abedbe7355f577228f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7aa1{
    "0x1802f7aa1",
    "FUN_1802f7aa1",
    R"F1802f7aa1S(undefined FUN_1802f7aa1())F1802f7aa1S",
    R"B1802f7aa1(// 0x1802f7aa1  FUN_1802f7aa1
// size=41 thunk=false
// signature: undefined FUN_1802f7aa1()
// status: ok


void FUN_1802f7aa1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


)B1802f7aa1",
    "fa15f9bd19592015de098c27dd98dcbc22e5093618268abedbe7355f577228f3",
    R"F1802f7aa1C()F1802f7aa1C",
    R"F1802f7aa1D()F1802f7aa1D",
    R"F1802f7aa1T()F1802f7aa1T",
    R"F1802f7aa1F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f7aa1F",
    R"F1802f7aa1U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7aa1U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7aa1() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7aa1", "FUN_1802f7aa1");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: fa15f9bd19592015de098c27dd98dcbc22e5093618268abedbe7355f577228f3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7aa1(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7aa1;
}

// 0x1802f7ad0 FUN_1802f7ad0
// source: re/dump/decompile/0x1802f7ad0_FUN_1802f7ad0.c
// size: 41 bytes; thunk: false
// body sha256: 5be2d8ee8014c2b91f6b881af9c5f1fe0990b2d7f855341de685d49af92771ca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7ad0{
    "0x1802f7ad0",
    "FUN_1802f7ad0",
    R"F1802f7ad0S(undefined FUN_1802f7ad0())F1802f7ad0S",
    R"B1802f7ad0(// 0x1802f7ad0  FUN_1802f7ad0
// size=41 thunk=false
// signature: undefined FUN_1802f7ad0()
// status: ok


void FUN_1802f7ad0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x88));
  }
  return;
}


)B1802f7ad0",
    "5be2d8ee8014c2b91f6b881af9c5f1fe0990b2d7f855341de685d49af92771ca",
    R"F1802f7ad0C()F1802f7ad0C",
    R"F1802f7ad0D()F1802f7ad0D",
    R"F1802f7ad0T()F1802f7ad0T",
    R"F1802f7ad0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f7ad0F",
    R"F1802f7ad0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7ad0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7ad0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7ad0", "FUN_1802f7ad0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5be2d8ee8014c2b91f6b881af9c5f1fe0990b2d7f855341de685d49af92771ca
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7ad0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x88));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7ad0;
}

// 0x1802f7b11 FUN_1802f7b11
// source: re/dump/decompile/0x1802f7b11_FUN_1802f7b11.c
// size: 38 bytes; thunk: false
// body sha256: 3e133555177e6d04fc83515dc76818645c394556a68926d455172eb7f541e33a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7b11{
    "0x1802f7b11",
    "FUN_1802f7b11",
    R"F1802f7b11S(undefined FUN_1802f7b11())F1802f7b11S",
    R"B1802f7b11(// 0x1802f7b11  FUN_1802f7b11
// size=38 thunk=false
// signature: undefined FUN_1802f7b11()
// status: ok


void FUN_1802f7b11(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f7b11",
    "3e133555177e6d04fc83515dc76818645c394556a68926d455172eb7f541e33a",
    R"F1802f7b11C()F1802f7b11C",
    R"F1802f7b11D()F1802f7b11D",
    R"F1802f7b11T()F1802f7b11T",
    R"F1802f7b11F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f7b11F",
    R"F1802f7b11U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7b11U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7b11() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7b11", "FUN_1802f7b11");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 3e133555177e6d04fc83515dc76818645c394556a68926d455172eb7f541e33a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7b11(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7b11;
}

// 0x1802f7b37 FUN_1802f7b37
// source: re/dump/decompile/0x1802f7b37_FUN_1802f7b37.c
// size: 38 bytes; thunk: false
// body sha256: dd0cecbea811e3dd47ada5a915d5480fb78c4128bc21e0759e5e1a34503fe496
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7b37{
    "0x1802f7b37",
    "FUN_1802f7b37",
    R"F1802f7b37S(undefined FUN_1802f7b37())F1802f7b37S",
    R"B1802f7b37(// 0x1802f7b37  FUN_1802f7b37
// size=38 thunk=false
// signature: undefined FUN_1802f7b37()
// status: ok


void FUN_1802f7b37(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f7b37",
    "dd0cecbea811e3dd47ada5a915d5480fb78c4128bc21e0759e5e1a34503fe496",
    R"F1802f7b37C()F1802f7b37C",
    R"F1802f7b37D()F1802f7b37D",
    R"F1802f7b37T()F1802f7b37T",
    R"F1802f7b37F(10: if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
14: return;)F1802f7b37F",
    R"F1802f7b37U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7b37U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7b37() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7b37", "FUN_1802f7b37");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: dd0cecbea811e3dd47ada5a915d5480fb78c4128bc21e0759e5e1a34503fe496
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7b37(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7b37;
}

// 0x1802f7b5d FUN_1802f7b5d
// source: re/dump/decompile/0x1802f7b5d_FUN_1802f7b5d.c
// size: 38 bytes; thunk: false
// body sha256: 4fcab2423124a24c58290ed0a4ed62a0782ac1e638db69a81bfe9ceadcbd03c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7b5d{
    "0x1802f7b5d",
    "FUN_1802f7b5d",
    R"F1802f7b5dS(undefined FUN_1802f7b5d())F1802f7b5dS",
    R"B1802f7b5d(// 0x1802f7b5d  FUN_1802f7b5d
// size=38 thunk=false
// signature: undefined FUN_1802f7b5d()
// status: ok


void FUN_1802f7b5d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


)B1802f7b5d",
    "4fcab2423124a24c58290ed0a4ed62a0782ac1e638db69a81bfe9ceadcbd03c6",
    R"F1802f7b5dC()F1802f7b5dC",
    R"F1802f7b5dD()F1802f7b5dD",
    R"F1802f7b5dT()F1802f7b5dT",
    R"F1802f7b5dF(10: if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
14: return;)F1802f7b5dF",
    R"F1802f7b5dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7b5dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7b5d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7b5d", "FUN_1802f7b5d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4fcab2423124a24c58290ed0a4ed62a0782ac1e638db69a81bfe9ceadcbd03c6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7b5d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7b5d;
}

// 0x1802f7b83 FUN_1802f7b83
// source: re/dump/decompile/0x1802f7b83_FUN_1802f7b83.c
// size: 41 bytes; thunk: false
// body sha256: f4bb4cc6966847a366565f48cccb976cea557ad0ce8259424222e32867c2f8a2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7b83{
    "0x1802f7b83",
    "FUN_1802f7b83",
    R"F1802f7b83S(undefined FUN_1802f7b83())F1802f7b83S",
    R"B1802f7b83(// 0x1802f7b83  FUN_1802f7b83
// size=41 thunk=false
// signature: undefined FUN_1802f7b83()
// status: ok


void FUN_1802f7b83(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


)B1802f7b83",
    "f4bb4cc6966847a366565f48cccb976cea557ad0ce8259424222e32867c2f8a2",
    R"F1802f7b83C()F1802f7b83C",
    R"F1802f7b83D()F1802f7b83D",
    R"F1802f7b83T()F1802f7b83T",
    R"F1802f7b83F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f7b83F",
    R"F1802f7b83U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7b83U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7b83() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7b83", "FUN_1802f7b83");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f4bb4cc6966847a366565f48cccb976cea557ad0ce8259424222e32867c2f8a2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7b83(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7b83;
}

// 0x1802f7bac FUN_1802f7bac
// source: re/dump/decompile/0x1802f7bac_FUN_1802f7bac.c
// size: 41 bytes; thunk: false
// body sha256: c8c1494093247bb065fc714780694a4c6be0de21ba092a3996381a3e05dd4e9b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7bac{
    "0x1802f7bac",
    "FUN_1802f7bac",
    R"F1802f7bacS(undefined FUN_1802f7bac())F1802f7bacS",
    R"B1802f7bac(// 0x1802f7bac  FUN_1802f7bac
// size=41 thunk=false
// signature: undefined FUN_1802f7bac()
// status: ok


void FUN_1802f7bac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


)B1802f7bac",
    "c8c1494093247bb065fc714780694a4c6be0de21ba092a3996381a3e05dd4e9b",
    R"F1802f7bacC()F1802f7bacC",
    R"F1802f7bacD()F1802f7bacD",
    R"F1802f7bacT()F1802f7bacT",
    R"F1802f7bacF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f7bacF",
    R"F1802f7bacU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7bacU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7bac() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7bac", "FUN_1802f7bac");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c8c1494093247bb065fc714780694a4c6be0de21ba092a3996381a3e05dd4e9b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7bac(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7bac;
}

// 0x1802f7c4c FUN_1802f7c4c
// source: re/dump/decompile/0x1802f7c4c_FUN_1802f7c4c.c
// size: 38 bytes; thunk: false
// body sha256: a7386209a8ffba70b6f7192e8cd3895bfa9205ffae0c0c35a7cb63d4d4e0c2d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7c4c{
    "0x1802f7c4c",
    "FUN_1802f7c4c",
    R"F1802f7c4cS(undefined FUN_1802f7c4c())F1802f7c4cS",
    R"B1802f7c4c(// 0x1802f7c4c  FUN_1802f7c4c
// size=38 thunk=false
// signature: undefined FUN_1802f7c4c()
// status: ok


void FUN_1802f7c4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802f7c4c",
    "a7386209a8ffba70b6f7192e8cd3895bfa9205ffae0c0c35a7cb63d4d4e0c2d3",
    R"F1802f7c4cC()F1802f7c4cC",
    R"F1802f7c4cD()F1802f7c4cD",
    R"F1802f7c4cT()F1802f7c4cT",
    R"F1802f7c4cF(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f7c4cF",
    R"F1802f7c4cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7c4cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7c4c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7c4c", "FUN_1802f7c4c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a7386209a8ffba70b6f7192e8cd3895bfa9205ffae0c0c35a7cb63d4d4e0c2d3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7c4c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7c4c;
}

// 0x1802f7cd4 FUN_1802f7cd4
// source: re/dump/decompile/0x1802f7cd4_FUN_1802f7cd4.c
// size: 29 bytes; thunk: false
// body sha256: e6a1a67a6a7102b9456a24ebd0a96a82e5062b74abad33de22917e87b5eb9ea0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7cd4{
    "0x1802f7cd4",
    "FUN_1802f7cd4",
    R"F1802f7cd4S(undefined FUN_1802f7cd4())F1802f7cd4S",
    R"B1802f7cd4(// 0x1802f7cd4  FUN_1802f7cd4
// size=29 thunk=false
// signature: undefined FUN_1802f7cd4()
// status: ok


undefined8 FUN_1802f7cd4(void)

{
  return 0;
}


)B1802f7cd4",
    "e6a1a67a6a7102b9456a24ebd0a96a82e5062b74abad33de22917e87b5eb9ea0",
    R"F1802f7cd4C()F1802f7cd4C",
    R"F1802f7cd4D()F1802f7cd4D",
    R"F1802f7cd4T()F1802f7cd4T",
    R"F1802f7cd4F(10: return 0;)F1802f7cd4F",
    R"F1802f7cd4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7cd4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7cd4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7cd4", "FUN_1802f7cd4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e6a1a67a6a7102b9456a24ebd0a96a82e5062b74abad33de22917e87b5eb9ea0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7cd4(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7cd4;
}

// 0x1802f7d0c FUN_1802f7d0c
// source: re/dump/decompile/0x1802f7d0c_FUN_1802f7d0c.c
// size: 29 bytes; thunk: false
// body sha256: 7cda63ae7fe5f4e11b78ca5cde954daa70106300bc4342d65c2479f53fffc80c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7d0c{
    "0x1802f7d0c",
    "FUN_1802f7d0c",
    R"F1802f7d0cS(undefined FUN_1802f7d0c())F1802f7d0cS",
    R"B1802f7d0c(// 0x1802f7d0c  FUN_1802f7d0c
// size=29 thunk=false
// signature: undefined FUN_1802f7d0c()
// status: ok


undefined8 FUN_1802f7d0c(void)

{
  return 0;
}


)B1802f7d0c",
    "7cda63ae7fe5f4e11b78ca5cde954daa70106300bc4342d65c2479f53fffc80c",
    R"F1802f7d0cC()F1802f7d0cC",
    R"F1802f7d0cD()F1802f7d0cD",
    R"F1802f7d0cT()F1802f7d0cT",
    R"F1802f7d0cF(10: return 0;)F1802f7d0cF",
    R"F1802f7d0cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7d0cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7d0c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7d0c", "FUN_1802f7d0c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 7cda63ae7fe5f4e11b78ca5cde954daa70106300bc4342d65c2479f53fffc80c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7d0c(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7d0c;
}

// 0x1802f7d48 FUN_1802f7d48
// source: re/dump/decompile/0x1802f7d48_FUN_1802f7d48.c
// size: 38 bytes; thunk: false
// body sha256: 956cf83d8085b6e7c2c7e2cff0e8f64fed8ae0aafab118285dc2af46c2fc1672
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7d48{
    "0x1802f7d48",
    "FUN_1802f7d48",
    R"F1802f7d48S(undefined FUN_1802f7d48())F1802f7d48S",
    R"B1802f7d48(// 0x1802f7d48  FUN_1802f7d48
// size=38 thunk=false
// signature: undefined FUN_1802f7d48()
// status: ok


void FUN_1802f7d48(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(param_2 + 0x58);
  }
  return;
}


)B1802f7d48",
    "956cf83d8085b6e7c2c7e2cff0e8f64fed8ae0aafab118285dc2af46c2fc1672",
    R"F1802f7d48C()F1802f7d48C",
    R"F1802f7d48D()F1802f7d48D",
    R"F1802f7d48T()F1802f7d48T",
    R"F1802f7d48F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f7d48F",
    R"F1802f7d48U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7d48U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7d48() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7d48", "FUN_1802f7d48");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 956cf83d8085b6e7c2c7e2cff0e8f64fed8ae0aafab118285dc2af46c2fc1672
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7d48(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x58);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7d48;
}

// 0x1802f7d6e FUN_1802f7d6e
// source: re/dump/decompile/0x1802f7d6e_FUN_1802f7d6e.c
// size: 41 bytes; thunk: false
// body sha256: a5a4a4168b58fbca438747fef94b8208766bf90de1f5ded1f7b7b658e5f7d30b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7d6e{
    "0x1802f7d6e",
    "FUN_1802f7d6e",
    R"F1802f7d6eS(undefined FUN_1802f7d6e())F1802f7d6eS",
    R"B1802f7d6e(// 0x1802f7d6e  FUN_1802f7d6e
// size=41 thunk=false
// signature: undefined FUN_1802f7d6e()
// status: ok


void FUN_1802f7d6e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 0x80);
  }
  return;
}


)B1802f7d6e",
    "a5a4a4168b58fbca438747fef94b8208766bf90de1f5ded1f7b7b658e5f7d30b",
    R"F1802f7d6eC()F1802f7d6eC",
    R"F1802f7d6eD()F1802f7d6eD",
    R"F1802f7d6eT()F1802f7d6eT",
    R"F1802f7d6eF(10: if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
14: return;)F1802f7d6eF",
    R"F1802f7d6eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7d6eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7d6e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7d6e", "FUN_1802f7d6e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a5a4a4168b58fbca438747fef94b8208766bf90de1f5ded1f7b7b658e5f7d30b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7d6e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7d6e;
}

// 0x1802f7da3 FUN_1802f7da3
// source: re/dump/decompile/0x1802f7da3_FUN_1802f7da3.c
// size: 41 bytes; thunk: false
// body sha256: 1ac869f9ab6a3508dcf380a9848b32bb21a1e4dfa36ada6d9dd29621b9909551
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7da3{
    "0x1802f7da3",
    "FUN_1802f7da3",
    R"F1802f7da3S(undefined FUN_1802f7da3())F1802f7da3S",
    R"B1802f7da3(// 0x1802f7da3  FUN_1802f7da3
// size=41 thunk=false
// signature: undefined FUN_1802f7da3()
// status: ok


void FUN_1802f7da3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(param_2 + 0xa0);
  }
  return;
}


)B1802f7da3",
    "1ac869f9ab6a3508dcf380a9848b32bb21a1e4dfa36ada6d9dd29621b9909551",
    R"F1802f7da3C()F1802f7da3C",
    R"F1802f7da3D()F1802f7da3D",
    R"F1802f7da3T()F1802f7da3T",
    R"F1802f7da3F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802f7da3F",
    R"F1802f7da3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7da3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7da3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7da3", "FUN_1802f7da3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1ac869f9ab6a3508dcf380a9848b32bb21a1e4dfa36ada6d9dd29621b9909551
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7da3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0xa0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7da3;
}

// 0x1802f7dd8 FUN_1802f7dd8
// source: re/dump/decompile/0x1802f7dd8_FUN_1802f7dd8.c
// size: 38 bytes; thunk: false
// body sha256: 1c8dcb6159bfe532446003e9e1e7e53261c6e309a7d708f260eb9cce2c362759
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7dd8{
    "0x1802f7dd8",
    "FUN_1802f7dd8",
    R"F1802f7dd8S(undefined FUN_1802f7dd8())F1802f7dd8S",
    R"B1802f7dd8(// 0x1802f7dd8  FUN_1802f7dd8
// size=38 thunk=false
// signature: undefined FUN_1802f7dd8()
// status: ok


void FUN_1802f7dd8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18021e290(param_2 + 0x38);
  }
  return;
}


)B1802f7dd8",
    "1c8dcb6159bfe532446003e9e1e7e53261c6e309a7d708f260eb9cce2c362759",
    R"F1802f7dd8C()F1802f7dd8C",
    R"F1802f7dd8D()F1802f7dd8D",
    R"F1802f7dd8T()F1802f7dd8T",
    R"F1802f7dd8F(10: if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
14: return;)F1802f7dd8F",
    R"F1802f7dd8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7dd8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7dd8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7dd8", "FUN_1802f7dd8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 1c8dcb6159bfe532446003e9e1e7e53261c6e309a7d708f260eb9cce2c362759
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7dd8(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x38);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7dd8;
}

// 0x1802f7e22 FUN_1802f7e22
// source: re/dump/decompile/0x1802f7e22_FUN_1802f7e22.c
// size: 38 bytes; thunk: false
// body sha256: e59d1b226402c722d64a5285d512e949027e1760a7964336c25e9194afd98b55
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7e22{
    "0x1802f7e22",
    "FUN_1802f7e22",
    R"F1802f7e22S(undefined FUN_1802f7e22())F1802f7e22S",
    R"B1802f7e22(// 0x1802f7e22  FUN_1802f7e22
// size=38 thunk=false
// signature: undefined FUN_1802f7e22()
// status: ok


void FUN_1802f7e22(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802f7e22",
    "e59d1b226402c722d64a5285d512e949027e1760a7964336c25e9194afd98b55",
    R"F1802f7e22C()F1802f7e22C",
    R"F1802f7e22D()F1802f7e22D",
    R"F1802f7e22T()F1802f7e22T",
    R"F1802f7e22F(10: if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
14: return;)F1802f7e22F",
    R"F1802f7e22U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7e22U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7e22() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7e22", "FUN_1802f7e22");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e59d1b226402c722d64a5285d512e949027e1760a7964336c25e9194afd98b55
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7e22(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7e22;
}

// 0x1802f7e48 FUN_1802f7e48
// source: re/dump/decompile/0x1802f7e48_FUN_1802f7e48.c
// size: 38 bytes; thunk: false
// body sha256: 306e2aa45435ec0ce810404d5d31efee47d94f3873eb9889c39a5f7e8dcd0e90
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7e48{
    "0x1802f7e48",
    "FUN_1802f7e48",
    R"F1802f7e48S(undefined FUN_1802f7e48())F1802f7e48S",
    R"B1802f7e48(// 0x1802f7e48  FUN_1802f7e48
// size=38 thunk=false
// signature: undefined FUN_1802f7e48()
// status: ok


void FUN_1802f7e48(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


)B1802f7e48",
    "306e2aa45435ec0ce810404d5d31efee47d94f3873eb9889c39a5f7e8dcd0e90",
    R"F1802f7e48C()F1802f7e48C",
    R"F1802f7e48D()F1802f7e48D",
    R"F1802f7e48T()F1802f7e48T",
    R"F1802f7e48F(10: if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
14: return;)F1802f7e48F",
    R"F1802f7e48U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7e48U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7e48() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7e48", "FUN_1802f7e48");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 306e2aa45435ec0ce810404d5d31efee47d94f3873eb9889c39a5f7e8dcd0e90
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f7e48(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f7e48;
}

// 0x1802f7ee6 FUN_1802f7ee6
// source: re/dump/decompile/0x1802f7ee6_FUN_1802f7ee6.c
// size: 29 bytes; thunk: false
// body sha256: 6538b380e9862b7b2149af739dae28798f47a5e213c31b7c3520502df8813fb6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7ee6{
    "0x1802f7ee6",
    "FUN_1802f7ee6",
    R"F1802f7ee6S(undefined FUN_1802f7ee6())F1802f7ee6S",
    R"B1802f7ee6(// 0x1802f7ee6  FUN_1802f7ee6
// size=29 thunk=false
// signature: undefined FUN_1802f7ee6()
// status: ok


undefined8 FUN_1802f7ee6(void)

{
  return 0;
}


)B1802f7ee6",
    "6538b380e9862b7b2149af739dae28798f47a5e213c31b7c3520502df8813fb6",
    R"F1802f7ee6C()F1802f7ee6C",
    R"F1802f7ee6D()F1802f7ee6D",
    R"F1802f7ee6T()F1802f7ee6T",
    R"F1802f7ee6F(10: return 0;)F1802f7ee6F",
    R"F1802f7ee6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7ee6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7ee6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7ee6", "FUN_1802f7ee6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6538b380e9862b7b2149af739dae28798f47a5e213c31b7c3520502df8813fb6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7ee6(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7ee6;
}

// 0x1802f7fc4 FUN_1802f7fc4
// source: re/dump/decompile/0x1802f7fc4_FUN_1802f7fc4.c
// size: 29 bytes; thunk: false
// body sha256: f89fe0fb8b3dfb518f923acc19b75b3cfe2dc22f09bc44c33922a7413228d0cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f7fc4{
    "0x1802f7fc4",
    "FUN_1802f7fc4",
    R"F1802f7fc4S(undefined FUN_1802f7fc4())F1802f7fc4S",
    R"B1802f7fc4(// 0x1802f7fc4  FUN_1802f7fc4
// size=29 thunk=false
// signature: undefined FUN_1802f7fc4()
// status: ok


undefined8 FUN_1802f7fc4(void)

{
  return 0;
}


)B1802f7fc4",
    "f89fe0fb8b3dfb518f923acc19b75b3cfe2dc22f09bc44c33922a7413228d0cf",
    R"F1802f7fc4C()F1802f7fc4C",
    R"F1802f7fc4D()F1802f7fc4D",
    R"F1802f7fc4T()F1802f7fc4T",
    R"F1802f7fc4F(10: return 0;)F1802f7fc4F",
    R"F1802f7fc4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f7fc4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f7fc4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f7fc4", "FUN_1802f7fc4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f89fe0fb8b3dfb518f923acc19b75b3cfe2dc22f09bc44c33922a7413228d0cf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f7fc4(void)");
        {
            trace.statement("return 0;");
        }
    return kFunction_0x1802f7fc4;
}

// 0x1802f8080 FUN_1802f8080
// source: re/dump/decompile/0x1802f8080_FUN_1802f8080.c
// size: 38 bytes; thunk: false
// body sha256: 42c9ffb7957f80ee2002e9199ba5cb311b2b0fe071104884e9865f7a89485b2a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8080{
    "0x1802f8080",
    "FUN_1802f8080",
    R"F1802f8080S(undefined FUN_1802f8080())F1802f8080S",
    R"B1802f8080(// 0x1802f8080  FUN_1802f8080
// size=38 thunk=false
// signature: undefined FUN_1802f8080()
// status: ok


void FUN_1802f8080(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x70);
  }
  return;
}


)B1802f8080",
    "42c9ffb7957f80ee2002e9199ba5cb311b2b0fe071104884e9865f7a89485b2a",
    R"F1802f8080C(FUN_18021b0b0)F1802f8080C",
    R"F1802f8080D()F1802f8080D",
    R"F1802f8080T()F1802f8080T",
    R"F1802f8080F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f8080F",
    R"F1802f8080U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8080U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8080() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8080", "FUN_1802f8080");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18021b0b0", reinterpret_cast<const void*>(&image::FUN_18021b0b0));
    // body sha256: 42c9ffb7957f80ee2002e9199ba5cb311b2b0fe071104884e9865f7a89485b2a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8080(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("FUN_18021b0b0(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8080;
}

// 0x1802f8154 FUN_1802f8154
// source: re/dump/decompile/0x1802f8154_FUN_1802f8154.c
// size: 38 bytes; thunk: false
// body sha256: 9e53164677a1a2f13503f2b4ce4ad740a23338596a0563ccb5c88e8e0128db79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8154{
    "0x1802f8154",
    "FUN_1802f8154",
    R"F1802f8154S(undefined FUN_1802f8154())F1802f8154S",
    R"B1802f8154(// 0x1802f8154  FUN_1802f8154
// size=38 thunk=false
// signature: undefined FUN_1802f8154()
// status: ok


void FUN_1802f8154(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f8154",
    "9e53164677a1a2f13503f2b4ce4ad740a23338596a0563ccb5c88e8e0128db79",
    R"F1802f8154C()F1802f8154C",
    R"F1802f8154D()F1802f8154D",
    R"F1802f8154T()F1802f8154T",
    R"F1802f8154F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f8154F",
    R"F1802f8154U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8154U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8154() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8154", "FUN_1802f8154");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9e53164677a1a2f13503f2b4ce4ad740a23338596a0563ccb5c88e8e0128db79
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8154(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8154;
}

// 0x1802f8192 FUN_1802f8192
// source: re/dump/decompile/0x1802f8192_FUN_1802f8192.c
// size: 38 bytes; thunk: false
// body sha256: 891cc1c0622f530ec91c8201eb03af58502cd227bc3c26a4e05fb637fe18d105
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8192{
    "0x1802f8192",
    "FUN_1802f8192",
    R"F1802f8192S(undefined FUN_1802f8192())F1802f8192S",
    R"B1802f8192(// 0x1802f8192  FUN_1802f8192
// size=38 thunk=false
// signature: undefined FUN_1802f8192()
// status: ok


void FUN_1802f8192(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f8192",
    "891cc1c0622f530ec91c8201eb03af58502cd227bc3c26a4e05fb637fe18d105",
    R"F1802f8192C()F1802f8192C",
    R"F1802f8192D()F1802f8192D",
    R"F1802f8192T()F1802f8192T",
    R"F1802f8192F(10: if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
14: return;)F1802f8192F",
    R"F1802f8192U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8192U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8192() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8192", "FUN_1802f8192");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 891cc1c0622f530ec91c8201eb03af58502cd227bc3c26a4e05fb637fe18d105
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8192(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8192;
}

// 0x1802f81b8 FUN_1802f81b8
// source: re/dump/decompile/0x1802f81b8_FUN_1802f81b8.c
// size: 36 bytes; thunk: false
// body sha256: 14946b490f26802e221ea17b6c5aa6d0143460f4a8f3bb3e3449251746b9e130
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f81b8{
    "0x1802f81b8",
    "FUN_1802f81b8",
    R"F1802f81b8S(undefined FUN_1802f81b8())F1802f81b8S",
    R"B1802f81b8(// 0x1802f81b8  FUN_1802f81b8
// size=36 thunk=false
// signature: undefined FUN_1802f81b8()
// status: ok


undefined8 FUN_1802f81b8(void)

{
  LOCK();
  DAT_180409700 = DAT_180409700 + 1;
  UNLOCK();
  return 0;
}


)B1802f81b8",
    "14946b490f26802e221ea17b6c5aa6d0143460f4a8f3bb3e3449251746b9e130",
    R"F1802f81b8C()F1802f81b8C",
    R"F1802f81b8D(DAT_180409700)F1802f81b8D",
    R"F1802f81b8T()F1802f81b8T",
    R"F1802f81b8F(13: return 0;)F1802f81b8F",
    R"F1802f81b8U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180409700.)F1802f81b8U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f81b8() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f81b8", "FUN_1802f81b8");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180409700.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180409700", static_cast<const void*>(&image::DAT_180409700));
    // body sha256: 14946b490f26802e221ea17b6c5aa6d0143460f4a8f3bb3e3449251746b9e130
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1802f81b8(void)");
        {
            trace.statement("LOCK();");
            trace.statement("DAT_180409700 = DAT_180409700 + 1;");
            trace.statement("UNLOCK();");
            trace.statement("return 0;");
        }
    return kFunction_0x1802f81b8;
}

// 0x1802f81e0 FUN_1802f81e0
// source: re/dump/decompile/0x1802f81e0_FUN_1802f81e0.c
// size: 41 bytes; thunk: false
// body sha256: ffaae01287458b19b5dda517f68dde8a2db65273ed005c54c0051b918f52bb3d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f81e0{
    "0x1802f81e0",
    "FUN_1802f81e0",
    R"F1802f81e0S(undefined FUN_1802f81e0())F1802f81e0S",
    R"B1802f81e0(// 0x1802f81e0  FUN_1802f81e0
// size=41 thunk=false
// signature: undefined FUN_1802f81e0()
// status: ok


void FUN_1802f81e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0x80);
  }
  return;
}


)B1802f81e0",
    "ffaae01287458b19b5dda517f68dde8a2db65273ed005c54c0051b918f52bb3d",
    R"F1802f81e0C(FUN_1800668e0)F1802f81e0C",
    R"F1802f81e0D()F1802f81e0D",
    R"F1802f81e0T()F1802f81e0T",
    R"F1802f81e0F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f81e0F",
    R"F1802f81e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f81e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f81e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f81e0", "FUN_1802f81e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: ffaae01287458b19b5dda517f68dde8a2db65273ed005c54c0051b918f52bb3d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f81e0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f81e0;
}

// 0x1802f8215 FUN_1802f8215
// source: re/dump/decompile/0x1802f8215_FUN_1802f8215.c
// size: 41 bytes; thunk: false
// body sha256: 87cdfd985d1fe9550349c91c570e969114f4c96e21c9e9b97915f29c74cc615a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8215{
    "0x1802f8215",
    "FUN_1802f8215",
    R"F1802f8215S(undefined FUN_1802f8215())F1802f8215S",
    R"B1802f8215(// 0x1802f8215  FUN_1802f8215
// size=41 thunk=false
// signature: undefined FUN_1802f8215()
// status: ok


void FUN_1802f8215(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));
  }
  return;
}


)B1802f8215",
    "87cdfd985d1fe9550349c91c570e969114f4c96e21c9e9b97915f29c74cc615a",
    R"F1802f8215C()F1802f8215C",
    R"F1802f8215D()F1802f8215D",
    R"F1802f8215T()F1802f8215T",
    R"F1802f8215F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f8215F",
    R"F1802f8215U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8215U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8215() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8215", "FUN_1802f8215");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 87cdfd985d1fe9550349c91c570e969114f4c96e21c9e9b97915f29c74cc615a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8215(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8215;
}

// 0x1802f823e FUN_1802f823e
// source: re/dump/decompile/0x1802f823e_FUN_1802f823e.c
// size: 41 bytes; thunk: false
// body sha256: 41822c667c23ca834fddd17c2b3fba1b6dcfe54ff252fa97fbaa32adee786eff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f823e{
    "0x1802f823e",
    "FUN_1802f823e",
    R"F1802f823eS(undefined FUN_1802f823e())F1802f823eS",
    R"B1802f823e(// 0x1802f823e  FUN_1802f823e
// size=41 thunk=false
// signature: undefined FUN_1802f823e()
// status: ok


void FUN_1802f823e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));
  }
  return;
}


)B1802f823e",
    "41822c667c23ca834fddd17c2b3fba1b6dcfe54ff252fa97fbaa32adee786eff",
    R"F1802f823eC()F1802f823eC",
    R"F1802f823eD()F1802f823eD",
    R"F1802f823eT()F1802f823eT",
    R"F1802f823eF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f823eF",
    R"F1802f823eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f823eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f823e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f823e", "FUN_1802f823e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 41822c667c23ca834fddd17c2b3fba1b6dcfe54ff252fa97fbaa32adee786eff
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f823e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f823e;
}

// 0x1802f83e4 FUN_1802f83e4
// source: re/dump/decompile/0x1802f83e4_FUN_1802f83e4.c
// size: 43 bytes; thunk: false
// body sha256: 8c961a05015dd5ede73c551549a9e831b156da3d83ba074e28463d9f9faaf53b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f83e4{
    "0x1802f83e4",
    "FUN_1802f83e4",
    R"F1802f83e4S(undefined FUN_1802f83e4())F1802f83e4S",
    R"B1802f83e4(// 0x1802f83e4  FUN_1802f83e4
// size=43 thunk=false
// signature: undefined FUN_1802f83e4()
// status: ok


void FUN_1802f83e4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x200) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


)B1802f83e4",
    "8c961a05015dd5ede73c551549a9e831b156da3d83ba074e28463d9f9faaf53b",
    R"F1802f83e4C()F1802f83e4C",
    R"F1802f83e4D()F1802f83e4D",
    R"F1802f83e4T()F1802f83e4T",
    R"F1802f83e4F(10: if ((*(uint *)(param_2 + 0x60) & 0x200) != 0) {
14: return;)F1802f83e4F",
    R"F1802f83e4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f83e4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f83e4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f83e4", "FUN_1802f83e4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8c961a05015dd5ede73c551549a9e831b156da3d83ba074e28463d9f9faaf53b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f83e4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f83e4;
}

// 0x1802f8457 FUN_1802f8457
// source: re/dump/decompile/0x1802f8457_FUN_1802f8457.c
// size: 46 bytes; thunk: false
// body sha256: 293443bf0f7c393750352aa2205f9ac8dabdfbd8403acd1a62d50ff5027cf1e6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8457{
    "0x1802f8457",
    "FUN_1802f8457",
    R"F1802f8457S(undefined FUN_1802f8457())F1802f8457S",
    R"B1802f8457(// 0x1802f8457  FUN_1802f8457
// size=46 thunk=false
// signature: undefined FUN_1802f8457()
// status: ok


void FUN_1802f8457(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x100) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a0);
  }
  return;
}


)B1802f8457",
    "293443bf0f7c393750352aa2205f9ac8dabdfbd8403acd1a62d50ff5027cf1e6",
    R"F1802f8457C()F1802f8457C",
    R"F1802f8457D()F1802f8457D",
    R"F1802f8457T()F1802f8457T",
    R"F1802f8457F(10: if ((*(uint *)(param_2 + 0x60) & 0x100) != 0) {
14: return;)F1802f8457F",
    R"F1802f8457U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8457U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8457() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8457", "FUN_1802f8457");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 293443bf0f7c393750352aa2205f9ac8dabdfbd8403acd1a62d50ff5027cf1e6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8457(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8457;
}

// 0x1802f8485 FUN_1802f8485
// source: re/dump/decompile/0x1802f8485_FUN_1802f8485.c
// size: 46 bytes; thunk: false
// body sha256: 0804a3751534925deb5bd3929b4e72dcaadf3fd5200e84ffd6f6b7dab8142b22
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8485{
    "0x1802f8485",
    "FUN_1802f8485",
    R"F1802f8485S(undefined FUN_1802f8485())F1802f8485S",
    R"B1802f8485(// 0x1802f8485  FUN_1802f8485
// size=46 thunk=false
// signature: undefined FUN_1802f8485()
// status: ok


void FUN_1802f8485(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x80) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


)B1802f8485",
    "0804a3751534925deb5bd3929b4e72dcaadf3fd5200e84ffd6f6b7dab8142b22",
    R"F1802f8485C()F1802f8485C",
    R"F1802f8485D()F1802f8485D",
    R"F1802f8485T()F1802f8485T",
    R"F1802f8485F(10: if ((*(uint *)(param_2 + 0x60) & 0x80) != 0) {
14: return;)F1802f8485F",
    R"F1802f8485U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8485U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8485() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8485", "FUN_1802f8485");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 0804a3751534925deb5bd3929b4e72dcaadf3fd5200e84ffd6f6b7dab8142b22
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8485(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8485;
}

// 0x1802f84b3 FUN_1802f84b3
// source: re/dump/decompile/0x1802f84b3_FUN_1802f84b3.c
// size: 41 bytes; thunk: false
// body sha256: b9fd97444ee138fdb6440ff130f47fa40ddd0a383140a9d64547d3c510372d7a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f84b3{
    "0x1802f84b3",
    "FUN_1802f84b3",
    R"F1802f84b3S(undefined FUN_1802f84b3())F1802f84b3S",
    R"B1802f84b3(// 0x1802f84b3  FUN_1802f84b3
// size=41 thunk=false
// signature: undefined FUN_1802f84b3()
// status: ok


void FUN_1802f84b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x40) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);
  }
  return;
}


)B1802f84b3",
    "b9fd97444ee138fdb6440ff130f47fa40ddd0a383140a9d64547d3c510372d7a",
    R"F1802f84b3C()F1802f84b3C",
    R"F1802f84b3D()F1802f84b3D",
    R"F1802f84b3T()F1802f84b3T",
    R"F1802f84b3F(10: if ((*(uint *)(param_2 + 0x60) & 0x40) != 0) {
14: return;)F1802f84b3F",
    R"F1802f84b3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f84b3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f84b3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f84b3", "FUN_1802f84b3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b9fd97444ee138fdb6440ff130f47fa40ddd0a383140a9d64547d3c510372d7a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f84b3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x248);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f84b3;
}

// 0x1802f8524 FUN_1802f8524
// source: re/dump/decompile/0x1802f8524_FUN_1802f8524.c
// size: 41 bytes; thunk: false
// body sha256: 5147b21173e73b56a2be1bd09d8e4dc7ac903e43e88014ead57c6e1beb4eaa46
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8524{
    "0x1802f8524",
    "FUN_1802f8524",
    R"F1802f8524S(undefined FUN_1802f8524())F1802f8524S",
    R"B1802f8524(// 0x1802f8524  FUN_1802f8524
// size=41 thunk=false
// signature: undefined FUN_1802f8524()
// status: ok


void FUN_1802f8524(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


)B1802f8524",
    "5147b21173e73b56a2be1bd09d8e4dc7ac903e43e88014ead57c6e1beb4eaa46",
    R"F1802f8524C()F1802f8524C",
    R"F1802f8524D()F1802f8524D",
    R"F1802f8524T()F1802f8524T",
    R"F1802f8524F(10: if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
14: return;)F1802f8524F",
    R"F1802f8524U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8524U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8524() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8524", "FUN_1802f8524");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 5147b21173e73b56a2be1bd09d8e4dc7ac903e43e88014ead57c6e1beb4eaa46
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8524(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8524;
}

// 0x1802f854d FUN_1802f854d
// source: re/dump/decompile/0x1802f854d_FUN_1802f854d.c
// size: 41 bytes; thunk: false
// body sha256: b90c74e2703e2b01ffb0bdb06410760ae9127946d0f212e2624e4ff1c6e189fe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f854d{
    "0x1802f854d",
    "FUN_1802f854d",
    R"F1802f854dS(undefined FUN_1802f854d())F1802f854dS",
    R"B1802f854d(// 0x1802f854d  FUN_1802f854d
// size=41 thunk=false
// signature: undefined FUN_1802f854d()
// status: ok


void FUN_1802f854d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e0);
  }
  return;
}


)B1802f854d",
    "b90c74e2703e2b01ffb0bdb06410760ae9127946d0f212e2624e4ff1c6e189fe",
    R"F1802f854dC()F1802f854dC",
    R"F1802f854dD()F1802f854dD",
    R"F1802f854dT()F1802f854dT",
    R"F1802f854dF(10: if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
14: return;)F1802f854dF",
    R"F1802f854dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f854dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f854d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f854d", "FUN_1802f854d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b90c74e2703e2b01ffb0bdb06410760ae9127946d0f212e2624e4ff1c6e189fe
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f854d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f854d;
}

// 0x1802f8582 FUN_1802f8582
// source: re/dump/decompile/0x1802f8582_FUN_1802f8582.c
// size: 41 bytes; thunk: false
// body sha256: 8cfda0786334c801ff0e7c3c9b1e66efc9bd165cd9370232c57e7d402c9eb1a1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8582{
    "0x1802f8582",
    "FUN_1802f8582",
    R"F1802f8582S(undefined FUN_1802f8582())F1802f8582S",
    R"B1802f8582(// 0x1802f8582  FUN_1802f8582
// size=41 thunk=false
// signature: undefined FUN_1802f8582()
// status: ok


void FUN_1802f8582(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);
  }
  return;
}


)B1802f8582",
    "8cfda0786334c801ff0e7c3c9b1e66efc9bd165cd9370232c57e7d402c9eb1a1",
    R"F1802f8582C()F1802f8582C",
    R"F1802f8582D()F1802f8582D",
    R"F1802f8582T()F1802f8582T",
    R"F1802f8582F(10: if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
14: return;)F1802f8582F",
    R"F1802f8582U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8582U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8582() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8582", "FUN_1802f8582");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8cfda0786334c801ff0e7c3c9b1e66efc9bd165cd9370232c57e7d402c9eb1a1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8582(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8582;
}

// 0x1802f85ab FUN_1802f85ab
// source: re/dump/decompile/0x1802f85ab_FUN_1802f85ab.c
// size: 41 bytes; thunk: false
// body sha256: f0d79721ce42946fbefc51ae38972cf47fcd4da439d4d025d75ba0b7808a9cc6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f85ab{
    "0x1802f85ab",
    "FUN_1802f85ab",
    R"F1802f85abS(undefined FUN_1802f85ab())F1802f85abS",
    R"B1802f85ab(// 0x1802f85ab  FUN_1802f85ab
// size=41 thunk=false
// signature: undefined FUN_1802f85ab()
// status: ok


void FUN_1802f85ab(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);
  }
  return;
}


)B1802f85ab",
    "f0d79721ce42946fbefc51ae38972cf47fcd4da439d4d025d75ba0b7808a9cc6",
    R"F1802f85abC()F1802f85abC",
    R"F1802f85abD()F1802f85abD",
    R"F1802f85abT()F1802f85abT",
    R"F1802f85abF(10: if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
14: return;)F1802f85abF",
    R"F1802f85abU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f85abU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f85ab() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f85ab", "FUN_1802f85ab");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f0d79721ce42946fbefc51ae38972cf47fcd4da439d4d025d75ba0b7808a9cc6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f85ab(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f85ab;
}

// 0x1802f85e0 FUN_1802f85e0
// source: re/dump/decompile/0x1802f85e0_FUN_1802f85e0.c
// size: 41 bytes; thunk: false
// body sha256: e5001b7ac47127eaf8accb31328ee00d2bc6fc308180c1ab1452ee5250f12124
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f85e0{
    "0x1802f85e0",
    "FUN_1802f85e0",
    R"F1802f85e0S(undefined FUN_1802f85e0())F1802f85e0S",
    R"B1802f85e0(// 0x1802f85e0  FUN_1802f85e0
// size=41 thunk=false
// signature: undefined FUN_1802f85e0()
// status: ok


void FUN_1802f85e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


)B1802f85e0",
    "e5001b7ac47127eaf8accb31328ee00d2bc6fc308180c1ab1452ee5250f12124",
    R"F1802f85e0C()F1802f85e0C",
    R"F1802f85e0D()F1802f85e0D",
    R"F1802f85e0T()F1802f85e0T",
    R"F1802f85e0F(10: if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
14: return;)F1802f85e0F",
    R"F1802f85e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f85e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f85e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f85e0", "FUN_1802f85e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e5001b7ac47127eaf8accb31328ee00d2bc6fc308180c1ab1452ee5250f12124
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f85e0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f85e0;
}

// 0x1802f86a4 FUN_1802f86a4
// source: re/dump/decompile/0x1802f86a4_FUN_1802f86a4.c
// size: 38 bytes; thunk: false
// body sha256: c872eac18c57d9ec6a41c9c739d17d44c379c33db91064dbadd8a932b5ed7294
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f86a4{
    "0x1802f86a4",
    "FUN_1802f86a4",
    R"F1802f86a4S(undefined FUN_1802f86a4())F1802f86a4S",
    R"B1802f86a4(// 0x1802f86a4  FUN_1802f86a4
// size=38 thunk=false
// signature: undefined FUN_1802f86a4()
// status: ok


void FUN_1802f86a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


)B1802f86a4",
    "c872eac18c57d9ec6a41c9c739d17d44c379c33db91064dbadd8a932b5ed7294",
    R"F1802f86a4C()F1802f86a4C",
    R"F1802f86a4D()F1802f86a4D",
    R"F1802f86a4T()F1802f86a4T",
    R"F1802f86a4F(10: if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
14: return;)F1802f86a4F",
    R"F1802f86a4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f86a4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f86a4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f86a4", "FUN_1802f86a4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c872eac18c57d9ec6a41c9c739d17d44c379c33db91064dbadd8a932b5ed7294
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f86a4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x30) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x40));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f86a4;
}

// 0x1802f87d4 FUN_1802f87d4
// source: re/dump/decompile/0x1802f87d4_FUN_1802f87d4.c
// size: 41 bytes; thunk: false
// body sha256: c48ed5b32ddc18495da7933d38597fda4b8f1838eea81a61de78160ff47eb4ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f87d4{
    "0x1802f87d4",
    "FUN_1802f87d4",
    R"F1802f87d4S(undefined FUN_1802f87d4())F1802f87d4S",
    R"B1802f87d4(// 0x1802f87d4  FUN_1802f87d4
// size=41 thunk=false
// signature: undefined FUN_1802f87d4()
// status: ok


void FUN_1802f87d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x100));
  }
  return;
}


)B1802f87d4",
    "c48ed5b32ddc18495da7933d38597fda4b8f1838eea81a61de78160ff47eb4ab",
    R"F1802f87d4C(FUN_1800668e0)F1802f87d4C",
    R"F1802f87d4D()F1802f87d4D",
    R"F1802f87d4T()F1802f87d4T",
    R"F1802f87d4F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f87d4F",
    R"F1802f87d4U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f87d4U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f87d4() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f87d4", "FUN_1802f87d4");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: c48ed5b32ddc18495da7933d38597fda4b8f1838eea81a61de78160ff47eb4ab
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f87d4(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(*(undefined8 *)(param_2 + 0x100));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f87d4;
}

// 0x1802f8820 FUN_1802f8820
// source: re/dump/decompile/0x1802f8820_FUN_1802f8820.c
// size: 41 bytes; thunk: false
// body sha256: d89af0a33c45a311be6341a70914c254b8ab07478e056238c7fd4b4049c6bf87
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8820{
    "0x1802f8820",
    "FUN_1802f8820",
    R"F1802f8820S(undefined FUN_1802f8820())F1802f8820S",
    R"B1802f8820(// 0x1802f8820  FUN_1802f8820
// size=41 thunk=false
// signature: undefined FUN_1802f8820()
// status: ok


void FUN_1802f8820(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f8820",
    "d89af0a33c45a311be6341a70914c254b8ab07478e056238c7fd4b4049c6bf87",
    R"F1802f8820C()F1802f8820C",
    R"F1802f8820D()F1802f8820D",
    R"F1802f8820T()F1802f8820T",
    R"F1802f8820F(10: if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
14: return;)F1802f8820F",
    R"F1802f8820U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8820U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8820() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8820", "FUN_1802f8820");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d89af0a33c45a311be6341a70914c254b8ab07478e056238c7fd4b4049c6bf87
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8820(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8820;
}

// 0x1802f8849 FUN_1802f8849
// source: re/dump/decompile/0x1802f8849_FUN_1802f8849.c
// size: 41 bytes; thunk: false
// body sha256: 725fa0a02735e0560f61258f557313009f83b4241c0f8beee71d7fa163568e48
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8849{
    "0x1802f8849",
    "FUN_1802f8849",
    R"F1802f8849S(undefined FUN_1802f8849())F1802f8849S",
    R"B1802f8849(// 0x1802f8849  FUN_1802f8849
// size=41 thunk=false
// signature: undefined FUN_1802f8849()
// status: ok


void FUN_1802f8849(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


)B1802f8849",
    "725fa0a02735e0560f61258f557313009f83b4241c0f8beee71d7fa163568e48",
    R"F1802f8849C()F1802f8849C",
    R"F1802f8849D()F1802f8849D",
    R"F1802f8849T()F1802f8849T",
    R"F1802f8849F(10: if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
14: return;)F1802f8849F",
    R"F1802f8849U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8849U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8849() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8849", "FUN_1802f8849");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 725fa0a02735e0560f61258f557313009f83b4241c0f8beee71d7fa163568e48
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8849(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8849;
}

// 0x1802f890e FUN_1802f890e
// source: re/dump/decompile/0x1802f890e_FUN_1802f890e.c
// size: 38 bytes; thunk: false
// body sha256: e4e26c49bbd93a81896cdcf07b14d78fe0156d9290792f7c81b96030948586dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f890e{
    "0x1802f890e",
    "FUN_1802f890e",
    R"F1802f890eS(undefined FUN_1802f890e())F1802f890eS",
    R"B1802f890e(// 0x1802f890e  FUN_1802f890e
// size=38 thunk=false
// signature: undefined FUN_1802f890e()
// status: ok


void FUN_1802f890e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802f890e",
    "e4e26c49bbd93a81896cdcf07b14d78fe0156d9290792f7c81b96030948586dd",
    R"F1802f890eC()F1802f890eC",
    R"F1802f890eD()F1802f890eD",
    R"F1802f890eT()F1802f890eT",
    R"F1802f890eF(10: if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
14: return;)F1802f890eF",
    R"F1802f890eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f890eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f890e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f890e", "FUN_1802f890e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e4e26c49bbd93a81896cdcf07b14d78fe0156d9290792f7c81b96030948586dd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f890e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f890e;
}

// 0x1802f8934 FUN_1802f8934
// source: re/dump/decompile/0x1802f8934_FUN_1802f8934.c
// size: 38 bytes; thunk: false
// body sha256: a960e885087d24af3a090d1484aeab276869ea2a6b105279382fe17005e767b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8934{
    "0x1802f8934",
    "FUN_1802f8934",
    R"F1802f8934S(undefined FUN_1802f8934())F1802f8934S",
    R"B1802f8934(// 0x1802f8934  FUN_1802f8934
// size=38 thunk=false
// signature: undefined FUN_1802f8934()
// status: ok


void FUN_1802f8934(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


)B1802f8934",
    "a960e885087d24af3a090d1484aeab276869ea2a6b105279382fe17005e767b6",
    R"F1802f8934C()F1802f8934C",
    R"F1802f8934D()F1802f8934D",
    R"F1802f8934T()F1802f8934T",
    R"F1802f8934F(10: if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
14: return;)F1802f8934F",
    R"F1802f8934U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8934U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8934() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8934", "FUN_1802f8934");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a960e885087d24af3a090d1484aeab276869ea2a6b105279382fe17005e767b6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8934(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;");
                trace.statement("thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8934;
}

// 0x1802f8996 FUN_1802f8996
// source: re/dump/decompile/0x1802f8996_FUN_1802f8996.c
// size: 41 bytes; thunk: false
// body sha256: 4f4849e4bddefdfbd2e38b8cf2e9d6d57af16273cb77562813e3a175ddcab77a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8996{
    "0x1802f8996",
    "FUN_1802f8996",
    R"F1802f8996S(undefined FUN_1802f8996())F1802f8996S",
    R"B1802f8996(// 0x1802f8996  FUN_1802f8996
// size=41 thunk=false
// signature: undefined FUN_1802f8996()
// status: ok


void FUN_1802f8996(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


)B1802f8996",
    "4f4849e4bddefdfbd2e38b8cf2e9d6d57af16273cb77562813e3a175ddcab77a",
    R"F1802f8996C()F1802f8996C",
    R"F1802f8996D()F1802f8996D",
    R"F1802f8996T()F1802f8996T",
    R"F1802f8996F(10: if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
14: return;)F1802f8996F",
    R"F1802f8996U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8996U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8996() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8996", "FUN_1802f8996");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4f4849e4bddefdfbd2e38b8cf2e9d6d57af16273cb77562813e3a175ddcab77a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8996(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x20) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;");
                trace.statement("thunk_FUN_18021e290(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8996;
}

// 0x1802f8c88 FUN_1802f8c88
// source: re/dump/decompile/0x1802f8c88_FUN_1802f8c88.c
// size: 41 bytes; thunk: false
// body sha256: 3a7a9d3478d221d8d08374ea6a7f9445dcfec4e4a3ee091f65e8da16f829197a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8c88{
    "0x1802f8c88",
    "FUN_1802f8c88",
    R"F1802f8c88S(undefined FUN_1802f8c88())F1802f8c88S",
    R"B1802f8c88(// 0x1802f8c88  FUN_1802f8c88
// size=41 thunk=false
// signature: undefined FUN_1802f8c88()
// status: ok


void FUN_1802f8c88(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0x90);
  }
  return;
}


)B1802f8c88",
    "3a7a9d3478d221d8d08374ea6a7f9445dcfec4e4a3ee091f65e8da16f829197a",
    R"F1802f8c88C(FUN_1800668e0)F1802f8c88C",
    R"F1802f8c88D()F1802f8c88D",
    R"F1802f8c88T()F1802f8c88T",
    R"F1802f8c88F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f8c88F",
    R"F1802f8c88U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8c88U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8c88() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8c88", "FUN_1802f8c88");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_1800668e0", reinterpret_cast<const void*>(&image::FUN_1800668e0));
    // body sha256: 3a7a9d3478d221d8d08374ea6a7f9445dcfec4e4a3ee091f65e8da16f829197a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8c88(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("FUN_1800668e0(param_2 + 0x90);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8c88;
}

// 0x1802f8cbd FUN_1802f8cbd
// source: re/dump/decompile/0x1802f8cbd_FUN_1802f8cbd.c
// size: 38 bytes; thunk: false
// body sha256: e59987e2a4b2b336cba0c3bb33fa1673981444c8fee6b7a129d27b485d9868c4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8cbd{
    "0x1802f8cbd",
    "FUN_1802f8cbd",
    R"F1802f8cbdS(undefined FUN_1802f8cbd())F1802f8cbdS",
    R"B1802f8cbd(// 0x1802f8cbd  FUN_1802f8cbd
// size=38 thunk=false
// signature: undefined FUN_1802f8cbd()
// status: ok


void FUN_1802f8cbd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


)B1802f8cbd",
    "e59987e2a4b2b336cba0c3bb33fa1673981444c8fee6b7a129d27b485d9868c4",
    R"F1802f8cbdC()F1802f8cbdC",
    R"F1802f8cbdD()F1802f8cbdD",
    R"F1802f8cbdT()F1802f8cbdT",
    R"F1802f8cbdF(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f8cbdF",
    R"F1802f8cbdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8cbdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8cbd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8cbd", "FUN_1802f8cbd");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: e59987e2a4b2b336cba0c3bb33fa1673981444c8fee6b7a129d27b485d9868c4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8cbd(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8cbd;
}

// 0x1802f8ce3 FUN_1802f8ce3
// source: re/dump/decompile/0x1802f8ce3_FUN_1802f8ce3.c
// size: 38 bytes; thunk: false
// body sha256: 12bbc3fe40ee7825e4b2e99341fb9aeb936c072d25808e55fe7ab364bdb3d7c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8ce3{
    "0x1802f8ce3",
    "FUN_1802f8ce3",
    R"F1802f8ce3S(undefined FUN_1802f8ce3())F1802f8ce3S",
    R"B1802f8ce3(// 0x1802f8ce3  FUN_1802f8ce3
// size=38 thunk=false
// signature: undefined FUN_1802f8ce3()
// status: ok


void FUN_1802f8ce3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


)B1802f8ce3",
    "12bbc3fe40ee7825e4b2e99341fb9aeb936c072d25808e55fe7ab364bdb3d7c8",
    R"F1802f8ce3C()F1802f8ce3C",
    R"F1802f8ce3D()F1802f8ce3D",
    R"F1802f8ce3T()F1802f8ce3T",
    R"F1802f8ce3F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f8ce3F",
    R"F1802f8ce3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8ce3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8ce3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8ce3", "FUN_1802f8ce3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 12bbc3fe40ee7825e4b2e99341fb9aeb936c072d25808e55fe7ab364bdb3d7c8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8ce3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8ce3;
}

// 0x1802f8d10 FUN_1802f8d10
// source: re/dump/decompile/0x1802f8d10_FUN_1802f8d10.c
// size: 38 bytes; thunk: false
// body sha256: fe39a83f59f59da28eb14ce11624f46221798300baae92700c041512abb4ecb7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8d10{
    "0x1802f8d10",
    "FUN_1802f8d10",
    R"F1802f8d10S(undefined FUN_1802f8d10())F1802f8d10S",
    R"B1802f8d10(// 0x1802f8d10  FUN_1802f8d10
// size=38 thunk=false
// signature: undefined FUN_1802f8d10()
// status: ok


void FUN_1802f8d10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
    FUN_18022b4b0(param_2 + 0x78);
  }
  return;
}


)B1802f8d10",
    "fe39a83f59f59da28eb14ce11624f46221798300baae92700c041512abb4ecb7",
    R"F1802f8d10C(FUN_18022b4b0)F1802f8d10C",
    R"F1802f8d10D()F1802f8d10D",
    R"F1802f8d10T()F1802f8d10T",
    R"F1802f8d10F(10: if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
14: return;)F1802f8d10F",
    R"F1802f8d10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8d10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8d10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8d10", "FUN_1802f8d10");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18022b4b0", reinterpret_cast<const void*>(&image::FUN_18022b4b0));
    // body sha256: fe39a83f59f59da28eb14ce11624f46221798300baae92700c041512abb4ecb7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8d10(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x68) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;");
                trace.statement("FUN_18022b4b0(param_2 + 0x78);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8d10;
}

// 0x1802f8d42 FUN_1802f8d42
// source: re/dump/decompile/0x1802f8d42_FUN_1802f8d42.c
// size: 22 bytes; thunk: false
// body sha256: 0726238d8a61ac1dc81bf4e7c677376253bee35f0994a03c455ff8c91856e68a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8d42{
    "0x1802f8d42",
    "FUN_1802f8d42",
    R"F1802f8d42S(undefined FUN_1802f8d42())F1802f8d42S",
    R"B1802f8d42(// 0x1802f8d42  FUN_1802f8d42
// size=22 thunk=false
// signature: undefined FUN_1802f8d42()
// status: ok


void FUN_1802f8d42(void)

{
  DAT_180426248 = DAT_180426248 & 0xfffffffe;
  return;
}


)B1802f8d42",
    "0726238d8a61ac1dc81bf4e7c677376253bee35f0994a03c455ff8c91856e68a",
    R"F1802f8d42C()F1802f8d42C",
    R"F1802f8d42D(DAT_180426248)F1802f8d42D",
    R"F1802f8d42T()F1802f8d42T",
    R"F1802f8d42F(11: return;)F1802f8d42F",
    R"F1802f8d42U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180426248.)F1802f8d42U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8d42() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8d42", "FUN_1802f8d42");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180426248.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180426248", static_cast<const void*>(&image::DAT_180426248));
    // body sha256: 0726238d8a61ac1dc81bf4e7c677376253bee35f0994a03c455ff8c91856e68a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8d42(void)");
        {
            trace.statement("DAT_180426248 = DAT_180426248 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f8d42;
}

// 0x1802f8d60 FUN_1802f8d60
// source: re/dump/decompile/0x1802f8d60_FUN_1802f8d60.c
// size: 22 bytes; thunk: false
// body sha256: 3742481709a7bac84bcddb8b8ac0c87fa37cfe4b962436cbc9a1cffa82f43b85
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8d60{
    "0x1802f8d60",
    "FUN_1802f8d60",
    R"F1802f8d60S(undefined FUN_1802f8d60())F1802f8d60S",
    R"B1802f8d60(// 0x1802f8d60  FUN_1802f8d60
// size=22 thunk=false
// signature: undefined FUN_1802f8d60()
// status: ok


void FUN_1802f8d60(void)

{
  DAT_1805c7b90 = DAT_1805c7b90 & 0xfffffffe;
  return;
}


)B1802f8d60",
    "3742481709a7bac84bcddb8b8ac0c87fa37cfe4b962436cbc9a1cffa82f43b85",
    R"F1802f8d60C()F1802f8d60C",
    R"F1802f8d60D(DAT_1805c7b90)F1802f8d60D",
    R"F1802f8d60T()F1802f8d60T",
    R"F1802f8d60F(11: return;)F1802f8d60F",
    R"F1802f8d60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7b90.)F1802f8d60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8d60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8d60", "FUN_1802f8d60");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7b90.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7b90", static_cast<const void*>(&image::DAT_1805c7b90));
    // body sha256: 3742481709a7bac84bcddb8b8ac0c87fa37cfe4b962436cbc9a1cffa82f43b85
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8d60(void)");
        {
            trace.statement("DAT_1805c7b90 = DAT_1805c7b90 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f8d60;
}

// 0x1802f8d76 FUN_1802f8d76
// source: re/dump/decompile/0x1802f8d76_FUN_1802f8d76.c
// size: 22 bytes; thunk: false
// body sha256: a6e255fa64d32e36ec58d33610a0c01a95de28816b1cad27010a58c3a047edd6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8d76{
    "0x1802f8d76",
    "FUN_1802f8d76",
    R"F1802f8d76S(undefined FUN_1802f8d76())F1802f8d76S",
    R"B1802f8d76(// 0x1802f8d76  FUN_1802f8d76
// size=22 thunk=false
// signature: undefined FUN_1802f8d76()
// status: ok


void FUN_1802f8d76(void)

{
  DAT_1805c7b90 = DAT_1805c7b90 & 0xfffffffd;
  return;
}


)B1802f8d76",
    "a6e255fa64d32e36ec58d33610a0c01a95de28816b1cad27010a58c3a047edd6",
    R"F1802f8d76C()F1802f8d76C",
    R"F1802f8d76D(DAT_1805c7b90)F1802f8d76D",
    R"F1802f8d76T()F1802f8d76T",
    R"F1802f8d76F(11: return;)F1802f8d76F",
    R"F1802f8d76U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7b90.)F1802f8d76U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8d76() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8d76", "FUN_1802f8d76");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7b90.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7b90", static_cast<const void*>(&image::DAT_1805c7b90));
    // body sha256: a6e255fa64d32e36ec58d33610a0c01a95de28816b1cad27010a58c3a047edd6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8d76(void)");
        {
            trace.statement("DAT_1805c7b90 = DAT_1805c7b90 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802f8d76;
}

// 0x1802f8d8c FUN_1802f8d8c
// source: re/dump/decompile/0x1802f8d8c_FUN_1802f8d8c.c
// size: 38 bytes; thunk: false
// body sha256: 629c302403022167a7167fa8559ec8e67466eaf2554fc778e0428d6297fda215
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8d8c{
    "0x1802f8d8c",
    "FUN_1802f8d8c",
    R"F1802f8d8cS(undefined FUN_1802f8d8c())F1802f8d8cS",
    R"B1802f8d8c(// 0x1802f8d8c  FUN_1802f8d8c
// size=38 thunk=false
// signature: undefined FUN_1802f8d8c()
// status: ok


void FUN_1802f8d8c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);
  }
  return;
}


)B1802f8d8c",
    "629c302403022167a7167fa8559ec8e67466eaf2554fc778e0428d6297fda215",
    R"F1802f8d8cC()F1802f8d8cC",
    R"F1802f8d8cD()F1802f8d8cD",
    R"F1802f8d8cT()F1802f8d8cT",
    R"F1802f8d8cF(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f8d8cF",
    R"F1802f8d8cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8d8cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8d8c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8d8c", "FUN_1802f8d8c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 629c302403022167a7167fa8559ec8e67466eaf2554fc778e0428d6297fda215
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8d8c(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x60);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8d8c;
}

// 0x1802f8db2 FUN_1802f8db2
// source: re/dump/decompile/0x1802f8db2_FUN_1802f8db2.c
// size: 41 bytes; thunk: false
// body sha256: 6ae186e9b240aec0ea99167b32066b78d27e56d9c4d6c43ba7f5cf6099f011b4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8db2{
    "0x1802f8db2",
    "FUN_1802f8db2",
    R"F1802f8db2S(undefined FUN_1802f8db2())F1802f8db2S",
    R"B1802f8db2(// 0x1802f8db2  FUN_1802f8db2
// size=41 thunk=false
// signature: undefined FUN_1802f8db2()
// status: ok


void FUN_1802f8db2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B1802f8db2",
    "6ae186e9b240aec0ea99167b32066b78d27e56d9c4d6c43ba7f5cf6099f011b4",
    R"F1802f8db2C()F1802f8db2C",
    R"F1802f8db2D()F1802f8db2D",
    R"F1802f8db2T()F1802f8db2T",
    R"F1802f8db2F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f8db2F",
    R"F1802f8db2U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8db2U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8db2() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8db2", "FUN_1802f8db2");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6ae186e9b240aec0ea99167b32066b78d27e56d9c4d6c43ba7f5cf6099f011b4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8db2(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8db2;
}

// 0x1802f8eb0 FUN_1802f8eb0
// source: re/dump/decompile/0x1802f8eb0_FUN_1802f8eb0.c
// size: 41 bytes; thunk: false
// body sha256: b16a24433ed93426a91b70663541209ea4df025a9b8e4fae6b50ceda14f77b17
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8eb0{
    "0x1802f8eb0",
    "FUN_1802f8eb0",
    R"F1802f8eb0S(undefined FUN_1802f8eb0())F1802f8eb0S",
    R"B1802f8eb0(// 0x1802f8eb0  FUN_1802f8eb0
// size=41 thunk=false
// signature: undefined FUN_1802f8eb0()
// status: ok


void FUN_1802f8eb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);
  }
  return;
}


)B1802f8eb0",
    "b16a24433ed93426a91b70663541209ea4df025a9b8e4fae6b50ceda14f77b17",
    R"F1802f8eb0C()F1802f8eb0C",
    R"F1802f8eb0D()F1802f8eb0D",
    R"F1802f8eb0T()F1802f8eb0T",
    R"F1802f8eb0F(10: if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
14: return;)F1802f8eb0F",
    R"F1802f8eb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8eb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8eb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8eb0", "FUN_1802f8eb0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b16a24433ed93426a91b70663541209ea4df025a9b8e4fae6b50ceda14f77b17
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8eb0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8eb0;
}

// 0x1802f8ed9 FUN_1802f8ed9
// source: re/dump/decompile/0x1802f8ed9_FUN_1802f8ed9.c
// size: 41 bytes; thunk: false
// body sha256: f0d8437a64b5e3a5b1a9fafd8c06cdfe3f8458e86e39f592b344034a5176cac5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8ed9{
    "0x1802f8ed9",
    "FUN_1802f8ed9",
    R"F1802f8ed9S(undefined FUN_1802f8ed9())F1802f8ed9S",
    R"B1802f8ed9(// 0x1802f8ed9  FUN_1802f8ed9
// size=41 thunk=false
// signature: undefined FUN_1802f8ed9()
// status: ok


void FUN_1802f8ed9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);
  }
  return;
}


)B1802f8ed9",
    "f0d8437a64b5e3a5b1a9fafd8c06cdfe3f8458e86e39f592b344034a5176cac5",
    R"F1802f8ed9C()F1802f8ed9C",
    R"F1802f8ed9D()F1802f8ed9D",
    R"F1802f8ed9T()F1802f8ed9T",
    R"F1802f8ed9F(10: if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
14: return;)F1802f8ed9F",
    R"F1802f8ed9U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8ed9U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8ed9() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8ed9", "FUN_1802f8ed9");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f0d8437a64b5e3a5b1a9fafd8c06cdfe3f8458e86e39f592b344034a5176cac5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8ed9(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8ed9;
}

// 0x1802f8f02 FUN_1802f8f02
// source: re/dump/decompile/0x1802f8f02_FUN_1802f8f02.c
// size: 41 bytes; thunk: false
// body sha256: b6613ba156190d0f5a4d99b3d1a6f268f4629d5377754f7ac7e1e37b52e6df37
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8f02{
    "0x1802f8f02",
    "FUN_1802f8f02",
    R"F1802f8f02S(undefined FUN_1802f8f02())F1802f8f02S",
    R"B1802f8f02(// 0x1802f8f02  FUN_1802f8f02
// size=41 thunk=false
// signature: undefined FUN_1802f8f02()
// status: ok


void FUN_1802f8f02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


)B1802f8f02",
    "b6613ba156190d0f5a4d99b3d1a6f268f4629d5377754f7ac7e1e37b52e6df37",
    R"F1802f8f02C()F1802f8f02C",
    R"F1802f8f02D()F1802f8f02D",
    R"F1802f8f02T()F1802f8f02T",
    R"F1802f8f02F(10: if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
14: return;)F1802f8f02F",
    R"F1802f8f02U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8f02U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8f02() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8f02", "FUN_1802f8f02");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b6613ba156190d0f5a4d99b3d1a6f268f4629d5377754f7ac7e1e37b52e6df37
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8f02(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 4) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8f02;
}

// 0x1802f8f2b FUN_1802f8f2b
// source: re/dump/decompile/0x1802f8f2b_FUN_1802f8f2b.c
// size: 41 bytes; thunk: false
// body sha256: 046b60c03f4e1e49f1f7c86218178beb88121855c5c733b2c0d6517c34dd57c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8f2b{
    "0x1802f8f2b",
    "FUN_1802f8f2b",
    R"F1802f8f2bS(undefined FUN_1802f8f2b())F1802f8f2bS",
    R"B1802f8f2b(// 0x1802f8f2b  FUN_1802f8f2b
// size=41 thunk=false
// signature: undefined FUN_1802f8f2b()
// status: ok


void FUN_1802f8f2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f8f2b",
    "046b60c03f4e1e49f1f7c86218178beb88121855c5c733b2c0d6517c34dd57c0",
    R"F1802f8f2bC()F1802f8f2bC",
    R"F1802f8f2bD()F1802f8f2bD",
    R"F1802f8f2bT()F1802f8f2bT",
    R"F1802f8f2bF(10: if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
14: return;)F1802f8f2bF",
    R"F1802f8f2bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8f2bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8f2b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8f2b", "FUN_1802f8f2b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 046b60c03f4e1e49f1f7c86218178beb88121855c5c733b2c0d6517c34dd57c0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8f2b(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8f2b;
}

// 0x1802f8f54 FUN_1802f8f54
// source: re/dump/decompile/0x1802f8f54_FUN_1802f8f54.c
// size: 41 bytes; thunk: false
// body sha256: 334dbaa6ce847cd984a37a9bffd46153cce6a602e22205b1bce7c3b74969fccb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8f54{
    "0x1802f8f54",
    "FUN_1802f8f54",
    R"F1802f8f54S(undefined FUN_1802f8f54())F1802f8f54S",
    R"B1802f8f54(// 0x1802f8f54  FUN_1802f8f54
// size=41 thunk=false
// signature: undefined FUN_1802f8f54()
// status: ok


void FUN_1802f8f54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);
  }
  return;
}


)B1802f8f54",
    "334dbaa6ce847cd984a37a9bffd46153cce6a602e22205b1bce7c3b74969fccb",
    R"F1802f8f54C()F1802f8f54C",
    R"F1802f8f54D()F1802f8f54D",
    R"F1802f8f54T()F1802f8f54T",
    R"F1802f8f54F(10: if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
14: return;)F1802f8f54F",
    R"F1802f8f54U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8f54U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8f54() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8f54", "FUN_1802f8f54");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 334dbaa6ce847cd984a37a9bffd46153cce6a602e22205b1bce7c3b74969fccb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8f54(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x10) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8f54;
}

// 0x1802f8f7d FUN_1802f8f7d
// source: re/dump/decompile/0x1802f8f7d_FUN_1802f8f7d.c
// size: 41 bytes; thunk: false
// body sha256: b4e06844ef8997654166e09ff0e0d721b21a9f6b42542a665adfa48996ad3908
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8f7d{
    "0x1802f8f7d",
    "FUN_1802f8f7d",
    R"F1802f8f7dS(undefined FUN_1802f8f7d())F1802f8f7dS",
    R"B1802f8f7d(// 0x1802f8f7d  FUN_1802f8f7d
// size=41 thunk=false
// signature: undefined FUN_1802f8f7d()
// status: ok


void FUN_1802f8f7d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


)B1802f8f7d",
    "b4e06844ef8997654166e09ff0e0d721b21a9f6b42542a665adfa48996ad3908",
    R"F1802f8f7dC()F1802f8f7dC",
    R"F1802f8f7dD()F1802f8f7dD",
    R"F1802f8f7dT()F1802f8f7dT",
    R"F1802f8f7dF(10: if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
14: return;)F1802f8f7dF",
    R"F1802f8f7dU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8f7dU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8f7d() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8f7d", "FUN_1802f8f7d");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: b4e06844ef8997654166e09ff0e0d721b21a9f6b42542a665adfa48996ad3908
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8f7d(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8f7d;
}

// 0x1802f8fa6 FUN_1802f8fa6
// source: re/dump/decompile/0x1802f8fa6_FUN_1802f8fa6.c
// size: 41 bytes; thunk: false
// body sha256: 9ffd228ad239ab5eb400ac7d7f991e3e34681a97afb31edfaaa7ab3f4c9d722e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8fa6{
    "0x1802f8fa6",
    "FUN_1802f8fa6",
    R"F1802f8fa6S(undefined FUN_1802f8fa6())F1802f8fa6S",
    R"B1802f8fa6(// 0x1802f8fa6  FUN_1802f8fa6
// size=41 thunk=false
// signature: undefined FUN_1802f8fa6()
// status: ok


void FUN_1802f8fa6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


)B1802f8fa6",
    "9ffd228ad239ab5eb400ac7d7f991e3e34681a97afb31edfaaa7ab3f4c9d722e",
    R"F1802f8fa6C()F1802f8fa6C",
    R"F1802f8fa6D()F1802f8fa6D",
    R"F1802f8fa6T()F1802f8fa6T",
    R"F1802f8fa6F(10: if ((*(uint *)(param_2 + 0x40) & 0x40) != 0) {
14: return;)F1802f8fa6F",
    R"F1802f8fa6U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8fa6U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8fa6() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8fa6", "FUN_1802f8fa6");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 9ffd228ad239ab5eb400ac7d7f991e3e34681a97afb31edfaaa7ab3f4c9d722e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8fa6(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x40) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffbf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8fa6;
}

// 0x1802f8fcf FUN_1802f8fcf
// source: re/dump/decompile/0x1802f8fcf_FUN_1802f8fcf.c
// size: 46 bytes; thunk: false
// body sha256: a5c9fad216e4ed0e090b71e8c28d213127404547d197b35c9f4ba317238542cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8fcf{
    "0x1802f8fcf",
    "FUN_1802f8fcf",
    R"F1802f8fcfS(undefined FUN_1802f8fcf())F1802f8fcfS",
    R"B1802f8fcf(// 0x1802f8fcf  FUN_1802f8fcf
// size=46 thunk=false
// signature: undefined FUN_1802f8fcf()
// status: ok


void FUN_1802f8fcf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


)B1802f8fcf",
    "a5c9fad216e4ed0e090b71e8c28d213127404547d197b35c9f4ba317238542cf",
    R"F1802f8fcfC()F1802f8fcfC",
    R"F1802f8fcfD()F1802f8fcfD",
    R"F1802f8fcfT()F1802f8fcfT",
    R"F1802f8fcfF(10: if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
14: return;)F1802f8fcfF",
    R"F1802f8fcfU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8fcfU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8fcf() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8fcf", "FUN_1802f8fcf");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a5c9fad216e4ed0e090b71e8c28d213127404547d197b35c9f4ba317238542cf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8fcf(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8fcf;
}

// 0x1802f8ffd FUN_1802f8ffd
// source: re/dump/decompile/0x1802f8ffd_FUN_1802f8ffd.c
// size: 46 bytes; thunk: false
// body sha256: 8f3b2de152836571047f2bc7af6230b0f71118e333cf0049a6ac26a2ca046889
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f8ffd{
    "0x1802f8ffd",
    "FUN_1802f8ffd",
    R"F1802f8ffdS(undefined FUN_1802f8ffd())F1802f8ffdS",
    R"B1802f8ffd(// 0x1802f8ffd  FUN_1802f8ffd
// size=46 thunk=false
// signature: undefined FUN_1802f8ffd()
// status: ok


void FUN_1802f8ffd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);
  }
  return;
}


)B1802f8ffd",
    "8f3b2de152836571047f2bc7af6230b0f71118e333cf0049a6ac26a2ca046889",
    R"F1802f8ffdC()F1802f8ffdC",
    R"F1802f8ffdD()F1802f8ffdD",
    R"F1802f8ffdT()F1802f8ffdT",
    R"F1802f8ffdF(10: if ((*(uint *)(param_2 + 0x40) & 0x100) != 0) {
14: return;)F1802f8ffdF",
    R"F1802f8ffdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f8ffdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f8ffd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f8ffd", "FUN_1802f8ffd");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 8f3b2de152836571047f2bc7af6230b0f71118e333cf0049a6ac26a2ca046889
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f8ffd(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x120);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f8ffd;
}

// 0x1802f9037 FUN_1802f9037
// source: re/dump/decompile/0x1802f9037_FUN_1802f9037.c
// size: 46 bytes; thunk: false
// body sha256: ddf2acd5ba88c7a4f1a34b1af45060a94ccb69129d4d4ed0ce842763323529c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9037{
    "0x1802f9037",
    "FUN_1802f9037",
    R"F1802f9037S(undefined FUN_1802f9037())F1802f9037S",
    R"B1802f9037(// 0x1802f9037  FUN_1802f9037
// size=46 thunk=false
// signature: undefined FUN_1802f9037()
// status: ok


void FUN_1802f9037(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B1802f9037",
    "ddf2acd5ba88c7a4f1a34b1af45060a94ccb69129d4d4ed0ce842763323529c9",
    R"F1802f9037C()F1802f9037C",
    R"F1802f9037D()F1802f9037D",
    R"F1802f9037T()F1802f9037T",
    R"F1802f9037F(10: if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
14: return;)F1802f9037F",
    R"F1802f9037U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9037U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9037() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9037", "FUN_1802f9037");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: ddf2acd5ba88c7a4f1a34b1af45060a94ccb69129d4d4ed0ce842763323529c9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9037(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x40) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9037;
}

// 0x1802f9070 FUN_1802f9070
// source: re/dump/decompile/0x1802f9070_FUN_1802f9070.c
// size: 22 bytes; thunk: false
// body sha256: 23bf935ba67d760919ff02b545595f362e04c871c67668e7cf086c2600538ef1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9070{
    "0x1802f9070",
    "FUN_1802f9070",
    R"F1802f9070S(undefined FUN_1802f9070())F1802f9070S",
    R"B1802f9070(// 0x1802f9070  FUN_1802f9070
// size=22 thunk=false
// signature: undefined FUN_1802f9070()
// status: ok


void FUN_1802f9070(void)

{
  DAT_1804275fc = DAT_1804275fc & 0xfffffffe;
  return;
}


)B1802f9070",
    "23bf935ba67d760919ff02b545595f362e04c871c67668e7cf086c2600538ef1",
    R"F1802f9070C()F1802f9070C",
    R"F1802f9070D(DAT_1804275fc)F1802f9070D",
    R"F1802f9070T()F1802f9070T",
    R"F1802f9070F(11: return;)F1802f9070F",
    R"F1802f9070U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804275fc.)F1802f9070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9070() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9070", "FUN_1802f9070");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804275fc.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1804275fc", static_cast<const void*>(&image::DAT_1804275fc));
    // body sha256: 23bf935ba67d760919ff02b545595f362e04c871c67668e7cf086c2600538ef1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9070(void)");
        {
            trace.statement("DAT_1804275fc = DAT_1804275fc & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9070;
}

// 0x1802f90aa FUN_1802f90aa
// source: re/dump/decompile/0x1802f90aa_FUN_1802f90aa.c
// size: 41 bytes; thunk: false
// body sha256: 513ae512fc07368d74565788e93408bd69f72081f0787446128c041c93990be0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f90aa{
    "0x1802f90aa",
    "FUN_1802f90aa",
    R"F1802f90aaS(undefined FUN_1802f90aa())F1802f90aaS",
    R"B1802f90aa(// 0x1802f90aa  FUN_1802f90aa
// size=41 thunk=false
// signature: undefined FUN_1802f90aa()
// status: ok


void FUN_1802f90aa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 2) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);
  }
  return;
}


)B1802f90aa",
    "513ae512fc07368d74565788e93408bd69f72081f0787446128c041c93990be0",
    R"F1802f90aaC()F1802f90aaC",
    R"F1802f90aaD()F1802f90aaD",
    R"F1802f90aaT()F1802f90aaT",
    R"F1802f90aaF(10: if ((*(uint *)(param_2 + 0x70) & 2) != 0) {
14: return;)F1802f90aaF",
    R"F1802f90aaU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f90aaU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f90aa() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f90aa", "FUN_1802f90aa");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 513ae512fc07368d74565788e93408bd69f72081f0787446128c041c93990be0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f90aa(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x70) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x80);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f90aa;
}

// 0x1802f90d3 FUN_1802f90d3
// source: re/dump/decompile/0x1802f90d3_FUN_1802f90d3.c
// size: 41 bytes; thunk: false
// body sha256: f3a93d0abc711e4e2423149629fdff18be54152d7821b253b1b1b2d68510a08e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f90d3{
    "0x1802f90d3",
    "FUN_1802f90d3",
    R"F1802f90d3S(undefined FUN_1802f90d3())F1802f90d3S",
    R"B1802f90d3(// 0x1802f90d3  FUN_1802f90d3
// size=41 thunk=false
// signature: undefined FUN_1802f90d3()
// status: ok


void FUN_1802f90d3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f90d3",
    "f3a93d0abc711e4e2423149629fdff18be54152d7821b253b1b1b2d68510a08e",
    R"F1802f90d3C()F1802f90d3C",
    R"F1802f90d3D()F1802f90d3D",
    R"F1802f90d3T()F1802f90d3T",
    R"F1802f90d3F(10: if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
14: return;)F1802f90d3F",
    R"F1802f90d3U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f90d3U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f90d3() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f90d3", "FUN_1802f90d3");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f3a93d0abc711e4e2423149629fdff18be54152d7821b253b1b1b2d68510a08e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f90d3(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x70) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f90d3;
}

// 0x1802f9150 FUN_1802f9150
// source: re/dump/decompile/0x1802f9150_FUN_1802f9150.c
// size: 22 bytes; thunk: false
// body sha256: 710394523a12b05a1e64d0fe27845c724ab680b28acebd4b241fa43db2ec1619
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9150{
    "0x1802f9150",
    "FUN_1802f9150",
    R"F1802f9150S(undefined FUN_1802f9150())F1802f9150S",
    R"B1802f9150(// 0x1802f9150  FUN_1802f9150
// size=22 thunk=false
// signature: undefined FUN_1802f9150()
// status: ok


void FUN_1802f9150(void)

{
  DAT_180427634 = DAT_180427634 & 0xfffffffe;
  return;
}


)B1802f9150",
    "710394523a12b05a1e64d0fe27845c724ab680b28acebd4b241fa43db2ec1619",
    R"F1802f9150C()F1802f9150C",
    R"F1802f9150D(DAT_180427634)F1802f9150D",
    R"F1802f9150T()F1802f9150T",
    R"F1802f9150F(11: return;)F1802f9150F",
    R"F1802f9150U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427634.)F1802f9150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9150() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9150", "FUN_1802f9150");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427634.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180427634", static_cast<const void*>(&image::DAT_180427634));
    // body sha256: 710394523a12b05a1e64d0fe27845c724ab680b28acebd4b241fa43db2ec1619
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9150(void)");
        {
            trace.statement("DAT_180427634 = DAT_180427634 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9150;
}

// 0x1802f918a FUN_1802f918a
// source: re/dump/decompile/0x1802f918a_FUN_1802f918a.c
// size: 38 bytes; thunk: false
// body sha256: 4dfd2318ca2054a96d6db15d8c8e57b1699d0bb9f646cce518722b3eebe4e3b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f918a{
    "0x1802f918a",
    "FUN_1802f918a",
    R"F1802f918aS(undefined FUN_1802f918a())F1802f918aS",
    R"B1802f918a(// 0x1802f918a  FUN_1802f918a
// size=38 thunk=false
// signature: undefined FUN_1802f918a()
// status: ok


void FUN_1802f918a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


)B1802f918a",
    "4dfd2318ca2054a96d6db15d8c8e57b1699d0bb9f646cce518722b3eebe4e3b7",
    R"F1802f918aC()F1802f918aC",
    R"F1802f918aD()F1802f918aD",
    R"F1802f918aT()F1802f918aT",
    R"F1802f918aF(10: if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
14: return;)F1802f918aF",
    R"F1802f918aU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f918aU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f918a() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f918a", "FUN_1802f918a");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 4dfd2318ca2054a96d6db15d8c8e57b1699d0bb9f646cce518722b3eebe4e3b7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f918a(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 2) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f918a;
}

// 0x1802f91b0 FUN_1802f91b0
// source: re/dump/decompile/0x1802f91b0_FUN_1802f91b0.c
// size: 41 bytes; thunk: false
// body sha256: 49b0da6c7df7ce4e93be6bbd486b24317821e60837584e81ca3c1a2b061009b8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f91b0{
    "0x1802f91b0",
    "FUN_1802f91b0",
    R"F1802f91b0S(undefined FUN_1802f91b0())F1802f91b0S",
    R"B1802f91b0(// 0x1802f91b0  FUN_1802f91b0
// size=41 thunk=false
// signature: undefined FUN_1802f91b0()
// status: ok


void FUN_1802f91b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);
  }
  return;
}


)B1802f91b0",
    "49b0da6c7df7ce4e93be6bbd486b24317821e60837584e81ca3c1a2b061009b8",
    R"F1802f91b0C()F1802f91b0C",
    R"F1802f91b0D()F1802f91b0D",
    R"F1802f91b0T()F1802f91b0T",
    R"F1802f91b0F(10: if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
14: return;)F1802f91b0F",
    R"F1802f91b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f91b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f91b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f91b0", "FUN_1802f91b0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 49b0da6c7df7ce4e93be6bbd486b24317821e60837584e81ca3c1a2b061009b8
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f91b0(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x60) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xd0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f91b0;
}

// 0x1802f9230 FUN_1802f9230
// source: re/dump/decompile/0x1802f9230_FUN_1802f9230.c
// size: 22 bytes; thunk: false
// body sha256: 24b4e1f9ccc3ce271e1aa8b1532475c47f3ce0e3e88d34b624d27ac0bcef8ead
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9230{
    "0x1802f9230",
    "FUN_1802f9230",
    R"F1802f9230S(undefined FUN_1802f9230())F1802f9230S",
    R"B1802f9230(// 0x1802f9230  FUN_1802f9230
// size=22 thunk=false
// signature: undefined FUN_1802f9230()
// status: ok


void FUN_1802f9230(void)

{
  DAT_1805c7af0 = DAT_1805c7af0 & 0xfffffffe;
  return;
}


)B1802f9230",
    "24b4e1f9ccc3ce271e1aa8b1532475c47f3ce0e3e88d34b624d27ac0bcef8ead",
    R"F1802f9230C()F1802f9230C",
    R"F1802f9230D(DAT_1805c7af0)F1802f9230D",
    R"F1802f9230T()F1802f9230T",
    R"F1802f9230F(11: return;)F1802f9230F",
    R"F1802f9230U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7af0.)F1802f9230U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9230() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9230", "FUN_1802f9230");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7af0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7af0", static_cast<const void*>(&image::DAT_1805c7af0));
    // body sha256: 24b4e1f9ccc3ce271e1aa8b1532475c47f3ce0e3e88d34b624d27ac0bcef8ead
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9230(void)");
        {
            trace.statement("DAT_1805c7af0 = DAT_1805c7af0 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9230;
}

// 0x1802f9246 FUN_1802f9246
// source: re/dump/decompile/0x1802f9246_FUN_1802f9246.c
// size: 22 bytes; thunk: false
// body sha256: 699d85585fa28d00ed8d411d07ac3d870a2e2116a3ca2501488296451476f88b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9246{
    "0x1802f9246",
    "FUN_1802f9246",
    R"F1802f9246S(undefined FUN_1802f9246())F1802f9246S",
    R"B1802f9246(// 0x1802f9246  FUN_1802f9246
// size=22 thunk=false
// signature: undefined FUN_1802f9246()
// status: ok


void FUN_1802f9246(void)

{
  DAT_1805c7af0 = DAT_1805c7af0 & 0xfffffffd;
  return;
}


)B1802f9246",
    "699d85585fa28d00ed8d411d07ac3d870a2e2116a3ca2501488296451476f88b",
    R"F1802f9246C()F1802f9246C",
    R"F1802f9246D(DAT_1805c7af0)F1802f9246D",
    R"F1802f9246T()F1802f9246T",
    R"F1802f9246F(11: return;)F1802f9246F",
    R"F1802f9246U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c7af0.)F1802f9246U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9246() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9246", "FUN_1802f9246");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c7af0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c7af0", static_cast<const void*>(&image::DAT_1805c7af0));
    // body sha256: 699d85585fa28d00ed8d411d07ac3d870a2e2116a3ca2501488296451476f88b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9246(void)");
        {
            trace.statement("DAT_1805c7af0 = DAT_1805c7af0 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9246;
}

// 0x1802f93bc FUN_1802f93bc
// source: re/dump/decompile/0x1802f93bc_FUN_1802f93bc.c
// size: 46 bytes; thunk: false
// body sha256: a4b48dd739d7729f1d0c6709f473f35cc1b7c60ac3f0aaf1ed1675b17a7e4df0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f93bc{
    "0x1802f93bc",
    "FUN_1802f93bc",
    R"F1802f93bcS(undefined FUN_1802f93bc())F1802f93bcS",
    R"B1802f93bc(// 0x1802f93bc  FUN_1802f93bc
// size=46 thunk=false
// signature: undefined FUN_1802f93bc()
// status: ok


void FUN_1802f93bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 0x100) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


)B1802f93bc",
    "a4b48dd739d7729f1d0c6709f473f35cc1b7c60ac3f0aaf1ed1675b17a7e4df0",
    R"F1802f93bcC()F1802f93bcC",
    R"F1802f93bcD()F1802f93bcD",
    R"F1802f93bcT()F1802f93bcT",
    R"F1802f93bcF(10: if ((*(uint *)(param_2 + 100) & 0x100) != 0) {
14: return;)F1802f93bcF",
    R"F1802f93bcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f93bcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f93bc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f93bc", "FUN_1802f93bc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a4b48dd739d7729f1d0c6709f473f35cc1b7c60ac3f0aaf1ed1675b17a7e4df0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f93bc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 100) & 0x100) != 0)")) {
                trace.statement("*(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffeff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f93bc;
}

// 0x1802f94ae FUN_1802f94ae
// source: re/dump/decompile/0x1802f94ae_FUN_1802f94ae.c
// size: 46 bytes; thunk: false
// body sha256: a61160f352e0017e88f5f0cdd89c93a6e8da60ce99e6777a2364f5e9417e56a0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f94ae{
    "0x1802f94ae",
    "FUN_1802f94ae",
    R"F1802f94aeS(undefined FUN_1802f94ae())F1802f94aeS",
    R"B1802f94ae(// 0x1802f94ae  FUN_1802f94ae
// size=46 thunk=false
// signature: undefined FUN_1802f94ae()
// status: ok


void FUN_1802f94ae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 0x200) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


)B1802f94ae",
    "a61160f352e0017e88f5f0cdd89c93a6e8da60ce99e6777a2364f5e9417e56a0",
    R"F1802f94aeC()F1802f94aeC",
    R"F1802f94aeD()F1802f94aeD",
    R"F1802f94aeT()F1802f94aeT",
    R"F1802f94aeF(10: if ((*(uint *)(param_2 + 100) & 0x200) != 0) {
14: return;)F1802f94aeF",
    R"F1802f94aeU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f94aeU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f94ae() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f94ae", "FUN_1802f94ae");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a61160f352e0017e88f5f0cdd89c93a6e8da60ce99e6777a2364f5e9417e56a0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f94ae(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 100) & 0x200) != 0)")) {
                trace.statement("*(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffdff;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f94ae;
}

// 0x1802f9510 FUN_1802f9510
// source: re/dump/decompile/0x1802f9510_FUN_1802f9510.c
// size: 22 bytes; thunk: false
// body sha256: 96bfa3156dca18f4471514d593ad79b8f7c9c322b32ec8d199cf07cf30395b1a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9510{
    "0x1802f9510",
    "FUN_1802f9510",
    R"F1802f9510S(undefined FUN_1802f9510())F1802f9510S",
    R"B1802f9510(// 0x1802f9510  FUN_1802f9510
// size=22 thunk=false
// signature: undefined FUN_1802f9510()
// status: ok


void FUN_1802f9510(void)

{
  DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffffe;
  return;
}


)B1802f9510",
    "96bfa3156dca18f4471514d593ad79b8f7c9c322b32ec8d199cf07cf30395b1a",
    R"F1802f9510C()F1802f9510C",
    R"F1802f9510D(DAT_1805c5a18)F1802f9510D",
    R"F1802f9510T()F1802f9510T",
    R"F1802f9510F(11: return;)F1802f9510F",
    R"F1802f9510U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c5a18.)F1802f9510U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9510() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9510", "FUN_1802f9510");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c5a18.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c5a18", static_cast<const void*>(&image::DAT_1805c5a18));
    // body sha256: 96bfa3156dca18f4471514d593ad79b8f7c9c322b32ec8d199cf07cf30395b1a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9510(void)");
        {
            trace.statement("DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9510;
}

// 0x1802f9526 FUN_1802f9526
// source: re/dump/decompile/0x1802f9526_FUN_1802f9526.c
// size: 22 bytes; thunk: false
// body sha256: 8c193ca7462951abbdee9295c570280acc6ff9c1eea6e59cedf9177349283017
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9526{
    "0x1802f9526",
    "FUN_1802f9526",
    R"F1802f9526S(undefined FUN_1802f9526())F1802f9526S",
    R"B1802f9526(// 0x1802f9526  FUN_1802f9526
// size=22 thunk=false
// signature: undefined FUN_1802f9526()
// status: ok


void FUN_1802f9526(void)

{
  DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffffd;
  return;
}


)B1802f9526",
    "8c193ca7462951abbdee9295c570280acc6ff9c1eea6e59cedf9177349283017",
    R"F1802f9526C()F1802f9526C",
    R"F1802f9526D(DAT_1805c5a18)F1802f9526D",
    R"F1802f9526T()F1802f9526T",
    R"F1802f9526F(11: return;)F1802f9526F",
    R"F1802f9526U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c5a18.)F1802f9526U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9526() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9526", "FUN_1802f9526");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c5a18.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c5a18", static_cast<const void*>(&image::DAT_1805c5a18));
    // body sha256: 8c193ca7462951abbdee9295c570280acc6ff9c1eea6e59cedf9177349283017
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9526(void)");
        {
            trace.statement("DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffffd;");
            trace.statement("return;");
        }
    return kFunction_0x1802f9526;
}

// 0x1802f953c FUN_1802f953c
// source: re/dump/decompile/0x1802f953c_FUN_1802f953c.c
// size: 22 bytes; thunk: false
// body sha256: 621406b494212165cc4e4edcb28ad4d7ffc2f1cace8122d54ee8e0645a2e1217
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f953c{
    "0x1802f953c",
    "FUN_1802f953c",
    R"F1802f953cS(undefined FUN_1802f953c())F1802f953cS",
    R"B1802f953c(// 0x1802f953c  FUN_1802f953c
// size=22 thunk=false
// signature: undefined FUN_1802f953c()
// status: ok


void FUN_1802f953c(void)

{
  DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffffb;
  return;
}


)B1802f953c",
    "621406b494212165cc4e4edcb28ad4d7ffc2f1cace8122d54ee8e0645a2e1217",
    R"F1802f953cC()F1802f953cC",
    R"F1802f953cD(DAT_1805c5a18)F1802f953cD",
    R"F1802f953cT()F1802f953cT",
    R"F1802f953cF(11: return;)F1802f953cF",
    R"F1802f953cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c5a18.)F1802f953cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f953c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f953c", "FUN_1802f953c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c5a18.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c5a18", static_cast<const void*>(&image::DAT_1805c5a18));
    // body sha256: 621406b494212165cc4e4edcb28ad4d7ffc2f1cace8122d54ee8e0645a2e1217
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f953c(void)");
        {
            trace.statement("DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffffb;");
            trace.statement("return;");
        }
    return kFunction_0x1802f953c;
}

// 0x1802f955e FUN_1802f955e
// source: re/dump/decompile/0x1802f955e_FUN_1802f955e.c
// size: 46 bytes; thunk: false
// body sha256: c131c1263281c09bfa686d515c9a9067b3187d26293311764d160b2c55c1722b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f955e{
    "0x1802f955e",
    "FUN_1802f955e",
    R"F1802f955eS(undefined FUN_1802f955e())F1802f955eS",
    R"B1802f955e(// 0x1802f955e  FUN_1802f955e
// size=46 thunk=false
// signature: undefined FUN_1802f955e()
// status: ok


void FUN_1802f955e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x80) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


)B1802f955e",
    "c131c1263281c09bfa686d515c9a9067b3187d26293311764d160b2c55c1722b",
    R"F1802f955eC()F1802f955eC",
    R"F1802f955eD()F1802f955eD",
    R"F1802f955eT()F1802f955eT",
    R"F1802f955eF(10: if ((*(uint *)(param_2 + 0x70) & 0x80) != 0) {
14: return;)F1802f955eF",
    R"F1802f955eU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f955eU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f955e() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f955e", "FUN_1802f955e");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: c131c1263281c09bfa686d515c9a9067b3187d26293311764d160b2c55c1722b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f955e(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x70) & 0x80) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffff7f;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f955e;
}

// 0x1802f9598 FUN_1802f9598
// source: re/dump/decompile/0x1802f9598_FUN_1802f9598.c
// size: 41 bytes; thunk: false
// body sha256: a218d7d55b331e98587970e5deb4661659592899d61c6f92af0815c4f9723328
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f9598{
    "0x1802f9598",
    "FUN_1802f9598",
    R"F1802f9598S(undefined FUN_1802f9598())F1802f9598S",
    R"B1802f9598(// 0x1802f9598  FUN_1802f9598
// size=41 thunk=false
// signature: undefined FUN_1802f9598()
// status: ok


void FUN_1802f9598(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x20) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);
  }
  return;
}


)B1802f9598",
    "a218d7d55b331e98587970e5deb4661659592899d61c6f92af0815c4f9723328",
    R"F1802f9598C()F1802f9598C",
    R"F1802f9598D()F1802f9598D",
    R"F1802f9598T()F1802f9598T",
    R"F1802f9598F(10: if ((*(uint *)(param_2 + 0x70) & 0x20) != 0) {
14: return;)F1802f9598F",
    R"F1802f9598U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f9598U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f9598() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f9598", "FUN_1802f9598");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: a218d7d55b331e98587970e5deb4661659592899d61c6f92af0815c4f9723328
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f9598(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x70) & 0x20) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffffdf;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x170);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f9598;
}

// 0x1802f95cd FUN_1802f95cd
// source: re/dump/decompile/0x1802f95cd_FUN_1802f95cd.c
// size: 22 bytes; thunk: false
// body sha256: cf5a6e28c32fdafcb53b2ece236a77921926407887c28beaa40db7c531e34f2d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f95cd{
    "0x1802f95cd",
    "FUN_1802f95cd",
    R"F1802f95cdS(undefined FUN_1802f95cd())F1802f95cdS",
    R"B1802f95cd(// 0x1802f95cd  FUN_1802f95cd
// size=22 thunk=false
// signature: undefined FUN_1802f95cd()
// status: ok


void FUN_1802f95cd(void)

{
  DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffff7;
  return;
}


)B1802f95cd",
    "cf5a6e28c32fdafcb53b2ece236a77921926407887c28beaa40db7c531e34f2d",
    R"F1802f95cdC()F1802f95cdC",
    R"F1802f95cdD(DAT_1805c5a18)F1802f95cdD",
    R"F1802f95cdT()F1802f95cdT",
    R"F1802f95cdF(11: return;)F1802f95cdF",
    R"F1802f95cdU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c5a18.)F1802f95cdU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f95cd() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f95cd", "FUN_1802f95cd");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c5a18.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1805c5a18", static_cast<const void*>(&image::DAT_1805c5a18));
    // body sha256: cf5a6e28c32fdafcb53b2ece236a77921926407887c28beaa40db7c531e34f2d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f95cd(void)");
        {
            trace.statement("DAT_1805c5a18 = DAT_1805c5a18 & 0xfffffff7;");
            trace.statement("return;");
        }
    return kFunction_0x1802f95cd;
}

// 0x1802f965b FUN_1802f965b
// source: re/dump/decompile/0x1802f965b_FUN_1802f965b.c
// size: 41 bytes; thunk: false
// body sha256: 06a978fa83c037ddebe390213aadc5432d7a3420a7f154c416dc6a62677ba746
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f965b{
    "0x1802f965b",
    "FUN_1802f965b",
    R"F1802f965bS(undefined FUN_1802f965b())F1802f965bS",
    R"B1802f965b(// 0x1802f965b  FUN_1802f965b
// size=41 thunk=false
// signature: undefined FUN_1802f965b()
// status: ok


void FUN_1802f965b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);
  }
  return;
}


)B1802f965b",
    "06a978fa83c037ddebe390213aadc5432d7a3420a7f154c416dc6a62677ba746",
    R"F1802f965bC()F1802f965bC",
    R"F1802f965bD()F1802f965bD",
    R"F1802f965bT()F1802f965bT",
    R"F1802f965bF(10: if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
14: return;)F1802f965bF",
    R"F1802f965bU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f965bU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f965b() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f965b", "FUN_1802f965b");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 06a978fa83c037ddebe390213aadc5432d7a3420a7f154c416dc6a62677ba746
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f965b(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x70) & 1) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;");
                trace.statement("Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x98);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f965b;
}

// 0x1802f96fc FUN_1802f96fc
// source: re/dump/decompile/0x1802f96fc_FUN_1802f96fc.c
// size: 38 bytes; thunk: false
// body sha256: 51d3a26e90b82658aaa7ae6f2e8f40030fee73a43d03fd005b6ddb1b21e408ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f96fc{
    "0x1802f96fc",
    "FUN_1802f96fc",
    R"F1802f96fcS(undefined FUN_1802f96fc())F1802f96fcS",
    R"B1802f96fc(// 0x1802f96fc  FUN_1802f96fc
// size=38 thunk=false
// signature: undefined FUN_1802f96fc()
// status: ok


void FUN_1802f96fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 8) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffff7;
    FUN_18022b4b0(param_2 + 0x50);
  }
  return;
}


)B1802f96fc",
    "51d3a26e90b82658aaa7ae6f2e8f40030fee73a43d03fd005b6ddb1b21e408ec",
    R"F1802f96fcC(FUN_18022b4b0)F1802f96fcC",
    R"F1802f96fcD()F1802f96fcD",
    R"F1802f96fcT()F1802f96fcT",
    R"F1802f96fcF(10: if ((*(uint *)(param_2 + 0x70) & 8) != 0) {
14: return;)F1802f96fcF",
    R"F1802f96fcU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1802f96fcU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f96fc() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f96fc", "FUN_1802f96fc");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18022b4b0", reinterpret_cast<const void*>(&image::FUN_18022b4b0));
    // body sha256: 51d3a26e90b82658aaa7ae6f2e8f40030fee73a43d03fd005b6ddb1b21e408ec
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f96fc(undefined8 param_1,longlong param_2)");
        {
            if (trace.condition("if ((*(uint *)(param_2 + 0x70) & 8) != 0)")) {
                trace.statement("*(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffff7;");
                trace.statement("FUN_18022b4b0(param_2 + 0x50);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1802f96fc;
}

// 0x1802f977c FUN_1802f977c
// source: re/dump/decompile/0x1802f977c_FUN_1802f977c.c
// size: 22 bytes; thunk: false
// body sha256: 372ccf85ec72cad950ed856770db9cba071a057fc42221be2c008a8cc3756d76
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1802f977c{
    "0x1802f977c",
    "FUN_1802f977c",
    R"F1802f977cS(undefined FUN_1802f977c())F1802f977cS",
    R"B1802f977c(// 0x1802f977c  FUN_1802f977c
// size=22 thunk=false
// signature: undefined FUN_1802f977c()
// status: ok


void FUN_1802f977c(void)

{
  DAT_180570800 = DAT_180570800 & 0xfffffffe;
  return;
}


)B1802f977c",
    "372ccf85ec72cad950ed856770db9cba071a057fc42221be2c008a8cc3756d76",
    R"F1802f977cC()F1802f977cC",
    R"F1802f977cD(DAT_180570800)F1802f977cD",
    R"F1802f977cT()F1802f977cT",
    R"F1802f977cF(11: return;)F1802f977cF",
    R"F1802f977cU(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180570800.)F1802f977cU",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1802f977c() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1802f977c", "FUN_1802f977c");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180570800.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_180570800", static_cast<const void*>(&image::DAT_180570800));
    // body sha256: 372ccf85ec72cad950ed856770db9cba071a057fc42221be2c008a8cc3756d76
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1802f977c(void)");
        {
            trace.statement("DAT_180570800 = DAT_180570800 & 0xfffffffe;");
            trace.statement("return;");
        }
    return kFunction_0x1802f977c;
}

}  // namespace sf::reconstructed
