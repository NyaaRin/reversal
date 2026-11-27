// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x18004d6c0 FUN_18004d6c0
// source: re/dump/decompile/0x18004d6c0_FUN_18004d6c0.c
// size: 188 bytes; thunk: false
// body sha256: 21ef05b6d464e6b6d375eb069d62c816efec3f78787ec522ba4e6f00a5164cf4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004d6c0{
    "0x18004d6c0",
    "FUN_18004d6c0",
    R"F18004d6c0S(undefined FUN_18004d6c0())F18004d6c0S",
    R"B18004d6c0(// 0x18004d6c0  FUN_18004d6c0
// size=188 thunk=false
// signature: undefined FUN_18004d6c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18004d6c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);
      puVar5 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar5 = puVar3;
      }
    }
    local_28 = _DAT_180381760;
    uStack_20 = _UNK_180381768;
    uVar4 = FUN_180049dc0(local_18,plVar2,1,&local_28);
    FUN_1802aabb0(uVar4,&DAT_1803431ac,puVar5);
  }
  return 0;
}


)B18004d6c0",
    "21ef05b6d464e6b6d375eb069d62c816efec3f78787ec522ba4e6f00a5164cf4",
    R"F18004d6c0C(FUN_180039770
FUN_180049dc0
FUN_1802aabb0)F18004d6c0C",
    R"F18004d6c0D(DAT_18033e5ea
DAT_1803431ac
DAT_1803ff8ec)F18004d6c0D",
    R"F18004d6c0T()F18004d6c0T",
    R"F18004d6c0F(22: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
24: if (cVar1 == '\0') {
27: else {
30: if (puVar3 != (undefined1 *)0x0) {
39: return 0;)F18004d6c0F",
    R"F18004d6c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431ac.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 23: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);.
TODO: resolve the indirect call in body 28: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);.)F18004d6c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004d6c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004d6c0", "FUN_18004d6c0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431ac.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 23: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);.
    // TODO: resolve the indirect call in body 28: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049dc0", reinterpret_cast<const void*>(&image::FUN_180049dc0));
    trace.call_target("FUN_1802aabb0", reinterpret_cast<const void*>(&image::FUN_1802aabb0));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803431ac", static_cast<const void*>(&image::DAT_1803431ac));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 21ef05b6d464e6b6d375eb069d62c816efec3f78787ec522ba4e6f00a5164cf4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004d6c0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined1 *puVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined1 *puVar5;");
            trace.statement("undefined8 local_28;");
            trace.statement("undefined8 uStack_20;");
            trace.statement("undefined1 local_18 [16];");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("puVar5 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);");
                trace.statement("puVar5 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar3 != (undefined1 *)0x0)")) {
                    trace.statement("puVar5 = puVar3;");
                }
                }
                trace.statement("local_28 = _DAT_180381760;");
                trace.statement("uStack_20 = _UNK_180381768;");
                trace.statement("uVar4 = FUN_180049dc0(local_18,plVar2,1,&local_28);");
                trace.statement("FUN_1802aabb0(uVar4,&DAT_1803431ac,puVar5);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004d6c0;
}

// 0x18004d780 FUN_18004d780
// source: re/dump/decompile/0x18004d780_FUN_18004d780.c
// size: 428 bytes; thunk: false
// body sha256: 22eb01ba0d4500b5f90f64a7598cad0ac42fe690972979b81dd583df6e9d3677
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004d780{
    "0x18004d780",
    "FUN_18004d780",
    R"F18004d780S(undefined FUN_18004d780())F18004d780S",
    R"B18004d780(// 0x18004d780  FUN_18004d780
// size=428 thunk=false
// signature: undefined FUN_18004d780()
// status: ok


undefined8 FUN_18004d780(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  float local_res10;
  float local_res14;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0xec0) != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228) != 0) {
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
      if (cVar2 == '\0') {
        puVar5 = &DAT_18033e5ea;
      }
      else {
        puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
        puVar5 = &DAT_18033e5ea;
        if (puVar4 != (undefined1 *)0x0) {
          puVar5 = puVar4;
        }
      }
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      FUN_18029e350(&local_res10,*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x1238),DAT_180381308,
                    DAT_180381384,puVar5,0,0,0);
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)(int)(local_res10 + DAT_180380ba8));
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_res14);
      return 2;
    }
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}


)B18004d780",
    "22eb01ba0d4500b5f90f64a7598cad0ac42fe690972979b81dd583df6e9d3677",
    R"F18004d780C(FUN_180039770
FUN_18029e350)F18004d780C",
    R"F18004d780D(DAT_18033e5ea
DAT_180380ba8
DAT_180381308
DAT_180381384)F18004d780D",
    R"F18004d780T()F18004d780T",
    R"F18004d780F(19: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
20: return 0;
23: if (*(char *)(lVar1 + 0x10) == '\0') {
26: if (*(longlong *)(lVar1 + 0xec0) != 0) {
27: if (*(char *)(lVar1 + 0x10) == '\0') {
30: if (*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228) != 0) {
32: if (cVar2 == '\0') {
35: else {
38: if (puVar4 != (undefined1 *)0x0) {
42: if (*(char *)(lVar1 + 0x10) == '\0') {
50: return 2;
54: return 1;)F18004d780F",
    R"F18004d780U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380ba8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180381308.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180381384.
TODO: resolve the indirect call in body 31: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 36: puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 48: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)(int)(local_res10 + DAT_180380ba8));.
TODO: resolve the indirect call in body 49: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_res14);.
TODO: resolve the indirect call in body 53: (**(code **)(*plVar3 + 0xe0))(plVar3);.)F18004d780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004d780() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004d780", "FUN_18004d780");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380ba8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180381308.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180381384.
    // TODO: resolve the indirect call in body 31: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 36: puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 48: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)(int)(local_res10 + DAT_180380ba8));.
    // TODO: resolve the indirect call in body 49: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_res14);.
    // TODO: resolve the indirect call in body 53: (**(code **)(*plVar3 + 0xe0))(plVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18029e350", reinterpret_cast<const void*>(&image::FUN_18029e350));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_180380ba8", static_cast<const void*>(&image::DAT_180380ba8));
    trace.data_ref("DAT_180381308", static_cast<const void*>(&image::DAT_180381308));
    trace.data_ref("DAT_180381384", static_cast<const void*>(&image::DAT_180381384));
    // body sha256: 22eb01ba0d4500b5f90f64a7598cad0ac42fe690972979b81dd583df6e9d3677
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004d780(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined1 *puVar4;");
            trace.statement("undefined1 *puVar5;");
            trace.statement("float local_res10;");
            trace.statement("float local_res14;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
            if (trace.condition("if (*(char *)(lVar1 + 0x10) == '\\0')")) {
                trace.statement("__dyn_tls_on_demand_init();");
            }
            if (trace.condition("if (*(longlong *)(lVar1 + 0xec0) != 0)")) {
                if (trace.condition("if (*(char *)(lVar1 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                if (trace.condition("if (*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228) != 0)")) {
                    trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
                    if (trace.condition("if (cVar2 == '\\0')")) {
                        trace.statement("puVar5 = &DAT_18033e5ea;");
                    } else {
                    trace.statement("puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
                    trace.statement("puVar5 = &DAT_18033e5ea;");
                    if (trace.condition("if (puVar4 != (undefined1 *)0x0)")) {
                        trace.statement("puVar5 = puVar4;");
                    }
                    }
                    if (trace.condition("if (*(char *)(lVar1 + 0x10) == '\\0')")) {
                        trace.statement("__dyn_tls_on_demand_init();");
                    }
                    trace.statement("FUN_18029e350(&local_res10,*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x1228),");
                    trace.statement("*(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x1238),DAT_180381308,");
                    trace.statement("DAT_180381384,puVar5,0,0,0);");
                    trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)(int)(local_res10 + DAT_180380ba8));");
                    trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_res14);");
                    trace.statement("return 2;");
                }
            }
            trace.statement("(**(code **)(*plVar3 + 0xe0))(plVar3);");
            trace.statement("return 1;");
        }
    return kFunction_0x18004d780;
}

// 0x18004d930 FUN_18004d930
// source: re/dump/decompile/0x18004d930_FUN_18004d930.c
// size: 162 bytes; thunk: false
// body sha256: e0bbdadcbcef043fe9b3d55e756afa04f24a22b6bba16528994ebd2f5d1e8536
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004d930{
    "0x18004d930",
    "FUN_18004d930",
    R"F18004d930S(undefined FUN_18004d930())F18004d930S",
    R"B18004d930(// 0x18004d930  FUN_18004d930
// size=162 thunk=false
// signature: undefined FUN_18004d930()
// status: ok


undefined8 FUN_18004d930(longlong param_1)

{
  float fVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar2 = *(code **)(*plVar4 + 0xf0);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    fVar1 = *(float *)(lVar3 + 0xcc8);
    (*pcVar2)(plVar4,(double)(fVar1 + fVar1 + *(float *)(lVar3 + 0x1238)));
    return 1;
  }
  return 0;
}


)B18004d930",
    "e0bbdadcbcef043fe9b3d55e756afa04f24a22b6bba16528994ebd2f5d1e8536",
    R"F18004d930C(FUN_180039770)F18004d930C",
    R"F18004d930D(DAT_1803ff8ec)F18004d930D",
    R"F18004d930T()F18004d930T",
    R"F18004d930F(16: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
19: if (*(char *)(lVar3 + 0x10) == '\0') {
25: return 1;
27: return 0;)F18004d930F",
    R"F18004d930U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 17: pcVar2 = *(code **)(*plVar4 + 0xf0);.
TODO: resolve the indirect call in body 24: (*pcVar2)(plVar4,(double)(fVar1 + fVar1 + *(float *)(lVar3 + 0x1238)));.)F18004d930U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004d930() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004d930", "FUN_18004d930");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 17: pcVar2 = *(code **)(*plVar4 + 0xf0);.
    // TODO: resolve the indirect call in body 24: (*pcVar2)(plVar4,(double)(fVar1 + fVar1 + *(float *)(lVar3 + 0x1238)));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: e0bbdadcbcef043fe9b3d55e756afa04f24a22b6bba16528994ebd2f5d1e8536
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004d930(longlong param_1)");
        {
            trace.statement("float fVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("pcVar2 = *(code **)(*plVar4 + 0xf0);");
                trace.statement("lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar3 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                trace.statement("lVar3 = *(longlong *)(lVar3 + 0xec0);");
                trace.statement("fVar1 = *(float *)(lVar3 + 0xcc8);");
                trace.statement("(*pcVar2)(plVar4,(double)(fVar1 + fVar1 + *(float *)(lVar3 + 0x1238)));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004d930;
}

// 0x18004d9e0 FUN_18004d9e0
// source: re/dump/decompile/0x18004d9e0_FUN_18004d9e0.c
// size: 158 bytes; thunk: false
// body sha256: 8bb8b7359599de28410021beca5cc1b65be1a04a15055e4acd29966a2a05f579
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004d9e0{
    "0x18004d9e0",
    "FUN_18004d9e0",
    R"F18004d9e0S(undefined FUN_18004d9e0())F18004d9e0S",
    R"B18004d9e0(// 0x18004d9e0  FUN_18004d9e0
// size=158 thunk=false
// signature: undefined FUN_18004d9e0()
// status: ok


undefined8 FUN_18004d9e0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar3 + 0xf0);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    (*pcVar1)(plVar3,(double)(*(float *)(lVar2 + 0x1238) + *(float *)(lVar2 + 0xcd8)));
    return 1;
  }
  return 0;
}


)B18004d9e0",
    "8bb8b7359599de28410021beca5cc1b65be1a04a15055e4acd29966a2a05f579",
    R"F18004d9e0C(FUN_180039770)F18004d9e0C",
    R"F18004d9e0D(DAT_1803ff8ec)F18004d9e0D",
    R"F18004d9e0T()F18004d9e0T",
    R"F18004d9e0F(15: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
18: if (*(char *)(lVar2 + 0x10) == '\0') {
23: return 1;
25: return 0;)F18004d9e0F",
    R"F18004d9e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf0);.
TODO: resolve the indirect call in body 22: (*pcVar1)(plVar3,(double)(*(float *)(lVar2 + 0x1238) + *(float *)(lVar2 + 0xcd8)));.)F18004d9e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004d9e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004d9e0", "FUN_18004d9e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf0);.
    // TODO: resolve the indirect call in body 22: (*pcVar1)(plVar3,(double)(*(float *)(lVar2 + 0x1238) + *(float *)(lVar2 + 0xcd8)));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 8bb8b7359599de28410021beca5cc1b65be1a04a15055e4acd29966a2a05f579
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004d9e0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf0);");
                trace.statement("lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar2 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                trace.statement("lVar2 = *(longlong *)(lVar2 + 0xec0);");
                trace.statement("(*pcVar1)(plVar3,(double)(*(float *)(lVar2 + 0x1238) + *(float *)(lVar2 + 0xcd8)));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004d9e0;
}

// 0x18004da80 FUN_18004da80
// source: re/dump/decompile/0x18004da80_FUN_18004da80.c
// size: 335 bytes; thunk: false
// body sha256: 9c4b4be2f7dd7cc073873dfb2ce823c70b478f79a26125b293ad855f38da0b42
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004da80{
    "0x18004da80",
    "FUN_18004da80",
    R"F18004da80S(undefined FUN_18004da80())F18004da80S",
    R"B18004da80(// 0x18004da80  FUN_18004da80
// size=335 thunk=false
// signature: undefined FUN_18004da80()
// status: ok


undefined8 FUN_18004da80(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float local_res10;
  float local_res14;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec == '\0') {
      (*pcVar1)(plVar4,0);
      return 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    fVar8 = 0.0;
    if (cVar2 == '\0') {
      fVar9 = 0.0;
    }
    else {
      dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      fVar9 = (float)dVar7;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
    if (cVar2 != '\0') {
      dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
      fVar8 = (float)dVar7;
    }
    local_res10 = fVar8;
    local_res14 = fVar9;
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      pcVar6 = "button";
    }
    else {
      pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      pcVar6 = "button";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
    }
    uVar3 = FUN_1802abf60(pcVar6,&local_res10,0);
    (*pcVar1)(plVar4,uVar3);
    return 1;
  }
  return 0;
}


)B18004da80",
    "9c4b4be2f7dd7cc073873dfb2ce823c70b478f79a26125b293ad855f38da0b42",
    R"F18004da80C(FUN_180039770
FUN_1802abf60)F18004da80C",
    R"F18004da80D(DAT_1803ff8ec)F18004da80D",
    R"F18004da80T("button")F18004da80T",
    R"F18004da80F(23: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
25: if (DAT_1803ff8ec == '\0') {
27: return 1;
31: if (cVar2 == '\0') {
34: else {
39: if (cVar2 != '\0') {
46: if (cVar2 == '\0') {
49: else {
52: if (pcVar5 != (char *)0x0) {
58: return 1;
60: return 0;)F18004da80F",
    R"F18004da80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 26: (*pcVar1)(plVar4,0);.
TODO: resolve the indirect call in body 29: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
TODO: resolve the indirect call in body 35: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 38: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);.
TODO: resolve the indirect call in body 40: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
TODO: resolve the indirect call in body 45: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 50: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 57: (*pcVar1)(plVar4,uVar3);.)F18004da80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004da80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004da80", "FUN_18004da80");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 26: (*pcVar1)(plVar4,0);.
    // TODO: resolve the indirect call in body 29: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
    // TODO: resolve the indirect call in body 35: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
    // TODO: resolve the indirect call in body 38: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);.
    // TODO: resolve the indirect call in body 40: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
    // TODO: resolve the indirect call in body 45: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 50: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 57: (*pcVar1)(plVar4,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802abf60", reinterpret_cast<const void*>(&image::FUN_1802abf60));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("button");
    // body sha256: 9c4b4be2f7dd7cc073873dfb2ce823c70b478f79a26125b293ad855f38da0b42
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004da80(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("char *pcVar5;");
            trace.statement("char *pcVar6;");
            trace.statement("double dVar7;");
            trace.statement("float fVar8;");
            trace.statement("float fVar9;");
            trace.statement("float local_res10;");
            trace.statement("float local_res14;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(*pcVar1)(plVar4,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);");
                trace.statement("fVar8 = 0.0;");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("fVar9 = 0.0;");
                } else {
                trace.statement("dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);");
                trace.statement("fVar9 = (float)dVar7;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);");
                    trace.statement("fVar8 = (float)dVar7;");
                }
                trace.statement("local_res10 = fVar8;");
                trace.statement("local_res14 = fVar9;");
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("pcVar6 = \"button\";");
                } else {
                trace.statement("pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
                trace.statement("pcVar6 = \"button\";");
                if (trace.condition("if (pcVar5 != (char *)0x0)")) {
                    trace.statement("pcVar6 = pcVar5;");
                }
                }
                trace.statement("uVar3 = FUN_1802abf60(pcVar6,&local_res10,0);");
                trace.statement("(*pcVar1)(plVar4,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004da80;
}

// 0x18004dbd0 FUN_18004dbd0
// source: re/dump/decompile/0x18004dbd0_FUN_18004dbd0.c
// size: 188 bytes; thunk: false
// body sha256: 8ec079cd24469f73d56fbb2de80b78958126ee51bb02d8d76080a54a54735f88
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004dbd0{
    "0x18004dbd0",
    "FUN_18004dbd0",
    R"F18004dbd0S(undefined FUN_18004dbd0())F18004dbd0S",
    R"B18004dbd0(// 0x18004dbd0  FUN_18004dbd0
// size=188 thunk=false
// signature: undefined FUN_18004dbd0()
// status: ok


undefined8 FUN_18004dbd0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec == '\0') {
      (*pcVar1)(plVar4,0);
      return 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      pcVar6 = "button";
    }
    else {
      pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      pcVar6 = "button";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
    }
    uVar3 = FUN_1802ac330(pcVar6);
    (*pcVar1)(plVar4,uVar3);
    return 1;
  }
  return 0;
}


)B18004dbd0",
    "8ec079cd24469f73d56fbb2de80b78958126ee51bb02d8d76080a54a54735f88",
    R"F18004dbd0C(FUN_180039770
FUN_1802ac330)F18004dbd0C",
    R"F18004dbd0D(DAT_1803ff8ec)F18004dbd0D",
    R"F18004dbd0T("button")F18004dbd0T",
    R"F18004dbd0F(18: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
20: if (DAT_1803ff8ec == '\0') {
22: return 1;
25: if (cVar2 == '\0') {
28: else {
31: if (pcVar5 != (char *)0x0) {
37: return 1;
39: return 0;)F18004dbd0F",
    R"F18004dbd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 21: (*pcVar1)(plVar4,0);.
TODO: resolve the indirect call in body 24: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 29: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 36: (*pcVar1)(plVar4,uVar3);.)F18004dbd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004dbd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004dbd0", "FUN_18004dbd0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 21: (*pcVar1)(plVar4,0);.
    // TODO: resolve the indirect call in body 24: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 29: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 36: (*pcVar1)(plVar4,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802ac330", reinterpret_cast<const void*>(&image::FUN_1802ac330));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("button");
    // body sha256: 8ec079cd24469f73d56fbb2de80b78958126ee51bb02d8d76080a54a54735f88
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004dbd0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("char *pcVar5;");
            trace.statement("char *pcVar6;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(*pcVar1)(plVar4,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("pcVar6 = \"button\";");
                } else {
                trace.statement("pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
                trace.statement("pcVar6 = \"button\";");
                if (trace.condition("if (pcVar5 != (char *)0x0)")) {
                    trace.statement("pcVar6 = pcVar5;");
                }
                }
                trace.statement("uVar3 = FUN_1802ac330(pcVar6);");
                trace.statement("(*pcVar1)(plVar4,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004dbd0;
}

// 0x18004dc90 FUN_18004dc90
// source: re/dump/decompile/0x18004dc90_FUN_18004dc90.c
// size: 337 bytes; thunk: false
// body sha256: ba48f3947a817348c599314474a077bd3ccb2c43804bebc5674d54a2f8f6e0e5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004dc90{
    "0x18004dc90",
    "FUN_18004dc90",
    R"F18004dc90S(undefined FUN_18004dc90())F18004dc90S",
    R"B18004dc90(// 0x18004dc90  FUN_18004dc90
// size=337 thunk=false
// signature: undefined FUN_18004dc90()
// status: ok


undefined8 FUN_18004dc90(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float local_res10;
  float local_res14;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec != '\0') {
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
      fVar8 = DAT_180380bb0;
      fVar9 = DAT_180380bb0;
      if (cVar2 != '\0') {
        dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
        fVar9 = (float)dVar7;
      }
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
      if (cVar2 != '\0') {
        dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
        fVar8 = (float)dVar7;
      }
      local_res10 = fVar8;
      local_res14 = fVar9;
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
      if (cVar2 == '\0') {
        pcVar6 = "##inv";
      }
      else {
        pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
        pcVar6 = "##inv";
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
        }
      }
      uVar3 = FUN_1802ac3c0(pcVar6,&local_res10);
      (*pcVar1)(plVar4,uVar3);
      return 1;
    }
    (*pcVar1)(plVar4,0);
    return 1;
  }
  return 0;
}


)B18004dc90",
    "ba48f3947a817348c599314474a077bd3ccb2c43804bebc5674d54a2f8f6e0e5",
    R"F18004dc90C(FUN_180039770
FUN_1802ac3c0)F18004dc90C",
    R"F18004dc90D(DAT_180380bb0
DAT_1803ff8ec)F18004dc90D",
    R"F18004dc90T("##inv")F18004dc90T",
    R"F18004dc90F(23: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
25: if (DAT_1803ff8ec != '\0') {
29: if (cVar2 != '\0') {
34: if (cVar2 != '\0') {
41: if (cVar2 == '\0') {
44: else {
47: if (pcVar5 != (char *)0x0) {
53: return 1;
56: return 1;
58: return 0;)F18004dc90F",
    R"F18004dc90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380bb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 26: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
TODO: resolve the indirect call in body 30: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 33: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);.
TODO: resolve the indirect call in body 35: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
TODO: resolve the indirect call in body 40: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 45: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 52: (*pcVar1)(plVar4,uVar3);.
TODO: resolve the indirect call in body 55: (*pcVar1)(plVar4,0);.)F18004dc90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004dc90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004dc90", "FUN_18004dc90");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380bb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 26: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
    // TODO: resolve the indirect call in body 30: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
    // TODO: resolve the indirect call in body 33: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);.
    // TODO: resolve the indirect call in body 35: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
    // TODO: resolve the indirect call in body 40: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 45: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 52: (*pcVar1)(plVar4,uVar3);.
    // TODO: resolve the indirect call in body 55: (*pcVar1)(plVar4,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802ac3c0", reinterpret_cast<const void*>(&image::FUN_1802ac3c0));
    trace.data_ref("DAT_180380bb0", static_cast<const void*>(&image::DAT_180380bb0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("##inv");
    // body sha256: ba48f3947a817348c599314474a077bd3ccb2c43804bebc5674d54a2f8f6e0e5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004dc90(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("char *pcVar5;");
            trace.statement("char *pcVar6;");
            trace.statement("double dVar7;");
            trace.statement("float fVar8;");
            trace.statement("float fVar9;");
            trace.statement("float local_res10;");
            trace.statement("float local_res14;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                if (trace.condition("if (DAT_1803ff8ec != '\\0')")) {
                    trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);");
                    trace.statement("fVar8 = DAT_180380bb0;");
                    trace.statement("fVar9 = DAT_180380bb0;");
                    if (trace.condition("if (cVar2 != '\\0')")) {
                        trace.statement("dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);");
                        trace.statement("fVar9 = (float)dVar7;");
                    }
                    trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);");
                    if (trace.condition("if (cVar2 != '\\0')")) {
                        trace.statement("dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);");
                        trace.statement("fVar8 = (float)dVar7;");
                    }
                    trace.statement("local_res10 = fVar8;");
                    trace.statement("local_res14 = fVar9;");
                    trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
                    if (trace.condition("if (cVar2 == '\\0')")) {
                        trace.statement("pcVar6 = \"##inv\";");
                    } else {
                    trace.statement("pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
                    trace.statement("pcVar6 = \"##inv\";");
                    if (trace.condition("if (pcVar5 != (char *)0x0)")) {
                        trace.statement("pcVar6 = pcVar5;");
                    }
                    }
                    trace.statement("uVar3 = FUN_1802ac3c0(pcVar6,&local_res10);");
                    trace.statement("(*pcVar1)(plVar4,uVar3);");
                    trace.statement("return 1;");
                }
                trace.statement("(*pcVar1)(plVar4,0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004dc90;
}

// 0x18004ddf0 FUN_18004ddf0
// source: re/dump/decompile/0x18004ddf0_FUN_18004ddf0.c
// size: 254 bytes; thunk: false
// body sha256: ba5511b1d2b3618176cb70f87d3cb5f14a8c80bf1fa653afeb9dc5fffb5bc37a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004ddf0{
    "0x18004ddf0",
    "FUN_18004ddf0",
    R"F18004ddf0S(undefined FUN_18004ddf0())F18004ddf0S",
    R"B18004ddf0(// 0x18004ddf0  FUN_18004ddf0
// size=254 thunk=false
// signature: undefined FUN_18004ddf0()
// status: ok


undefined8 FUN_18004ddf0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec == '\0') {
      (*pcVar1)(plVar4,0);
      return 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      puVar6 = &DAT_18033e5ea;
    }
    else {
      puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar6 = &DAT_18033e5ea;
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
    }
    uVar3 = FUN_1802adc80(puVar6,uVar3);
    (*pcVar1)(plVar4,uVar3);
    return 1;
  }
  return 0;
}


)B18004ddf0",
    "ba5511b1d2b3618176cb70f87d3cb5f14a8c80bf1fa653afeb9dc5fffb5bc37a",
    R"F18004ddf0C(FUN_180039770
FUN_1802adc80)F18004ddf0C",
    R"F18004ddf0D(DAT_18033e5ea
DAT_1803ff8ec)F18004ddf0D",
    R"F18004ddf0T()F18004ddf0T",
    R"F18004ddf0F(18: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
20: if (DAT_1803ff8ec == '\0') {
22: return 1;
25: if (cVar2 == '\0') {
28: else {
32: if (cVar2 == '\0') {
35: else {
38: if (puVar5 != (undefined1 *)0x0) {
44: return 1;
46: return 0;)F18004ddf0F",
    R"F18004ddf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 21: (*pcVar1)(plVar4,0);.
TODO: resolve the indirect call in body 24: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);.
TODO: resolve the indirect call in body 29: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);.
TODO: resolve the indirect call in body 31: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 36: puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 43: (*pcVar1)(plVar4,uVar3);.)F18004ddf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004ddf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004ddf0", "FUN_18004ddf0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 21: (*pcVar1)(plVar4,0);.
    // TODO: resolve the indirect call in body 24: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);.
    // TODO: resolve the indirect call in body 29: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);.
    // TODO: resolve the indirect call in body 31: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 36: puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 43: (*pcVar1)(plVar4,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802adc80", reinterpret_cast<const void*>(&image::FUN_1802adc80));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: ba5511b1d2b3618176cb70f87d3cb5f14a8c80bf1fa653afeb9dc5fffb5bc37a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004ddf0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined1 *puVar5;");
            trace.statement("undefined1 *puVar6;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(*pcVar1)(plVar4,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("uVar3 = 0;");
                } else {
                trace.statement("uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);");
                }
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("puVar6 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
                trace.statement("puVar6 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar5 != (undefined1 *)0x0)")) {
                    trace.statement("puVar6 = puVar5;");
                }
                }
                trace.statement("uVar3 = FUN_1802adc80(puVar6,uVar3);");
                trace.statement("(*pcVar1)(plVar4,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004ddf0;
}

// 0x18004def0 FUN_18004def0
// source: re/dump/decompile/0x18004def0_FUN_18004def0.c
// size: 265 bytes; thunk: false
// body sha256: 371bc92e5d6e90175fe1fe012db6ed949e8c8d7eb51167d15b0fdfaec0598cdb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004def0{
    "0x18004def0",
    "FUN_18004def0",
    R"F18004def0S(undefined FUN_18004def0())F18004def0S",
    R"B18004def0(// 0x18004def0  FUN_18004def0
// size=265 thunk=false
// signature: undefined FUN_18004def0()
// status: ok


undefined8 FUN_18004def0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 local_res10 [24];
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      uVar4 = FUN_18004a240(param_1);
      return uVar4;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);
    if (cVar1 == '\0') {
      local_res10[0] = 0;
    }
    else {
      local_res10[0] = (**(code **)(*plVar3 + 200))(plVar3,2);
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_1803431c0;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_1803431c0;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
      }
    }
    uVar2 = FUN_1802ad620(puVar6,local_res10);
    (**(code **)(*plVar3 + 0xf8))(plVar3,local_res10[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    return 2;
  }
  return 0;
}


)B18004def0",
    "371bc92e5d6e90175fe1fe012db6ed949e8c8d7eb51167d15b0fdfaec0598cdb",
    R"F18004def0C(FUN_180039770
FUN_18004a240
FUN_1802ad620)F18004def0C",
    R"F18004def0D(DAT_1803431c0
DAT_1803ff8ec)F18004def0D",
    R"F18004def0T()F18004def0T",
    R"F18004def0F(19: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
20: if (DAT_1803ff8ec == '\0') {
22: return uVar4;
25: if (cVar1 == '\0') {
28: else {
32: if (cVar1 == '\0') {
35: else {
38: if (puVar5 != (undefined *)0x0) {
45: return 2;
47: return 0;)F18004def0F",
    R"F18004def0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 24: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);.
TODO: resolve the indirect call in body 29: local_res10[0] = (**(code **)(*plVar3 + 200))(plVar3,2);.
TODO: resolve the indirect call in body 31: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 36: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 43: (**(code **)(*plVar3 + 0xf8))(plVar3,local_res10[0]);.
TODO: resolve the indirect call in body 44: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004def0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004def0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004def0", "FUN_18004def0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 24: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);.
    // TODO: resolve the indirect call in body 29: local_res10[0] = (**(code **)(*plVar3 + 200))(plVar3,2);.
    // TODO: resolve the indirect call in body 31: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 36: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 43: (**(code **)(*plVar3 + 0xf8))(plVar3,local_res10[0]);.
    // TODO: resolve the indirect call in body 44: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802ad620", reinterpret_cast<const void*>(&image::FUN_1802ad620));
    trace.data_ref("DAT_1803431c0", static_cast<const void*>(&image::DAT_1803431c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 371bc92e5d6e90175fe1fe012db6ed949e8c8d7eb51167d15b0fdfaec0598cdb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004def0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined1 local_res10 [24];");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("uVar4 = FUN_18004a240(param_1);");
                    trace.statement("return uVar4;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("local_res10[0] = 0;");
                } else {
                trace.statement("local_res10[0] = (**(code **)(*plVar3 + 200))(plVar3,2);");
                }
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("puVar6 = &DAT_1803431c0;");
                } else {
                trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
                trace.statement("puVar6 = &DAT_1803431c0;");
                if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                    trace.statement("puVar6 = puVar5;");
                }
                }
                trace.statement("uVar2 = FUN_1802ad620(puVar6,local_res10);");
                trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,local_res10[0]);");
                trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004def0;
}

// 0x18004e000 FUN_18004e000
// source: re/dump/decompile/0x18004e000_FUN_18004e000.c
// size: 540 bytes; thunk: false
// body sha256: 1f0fc05bef35626268a0dbdc614b2c53befef9d0caae51c8c2369d77935e4ccb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004e000{
    "0x18004e000",
    "FUN_18004e000",
    R"F18004e000S(undefined FUN_18004e000())F18004e000S",
    R"B18004e000(// 0x18004e000  FUN_18004e000
// size=540 thunk=false
// signature: undefined FUN_18004e000()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e000(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  float *local_68;
  undefined *local_60;
  float local_48 [2];
  float local_40 [2];
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    fVar9 = 0.0;
    if (cVar1 == '\0') {
      local_38[0] = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_38[0] = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_1803431c8;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);
      puVar7 = &DAT_1803431c8;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    fVar10 = DAT_180380bb0;
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar9 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_1803431d0;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar5 = &DAT_1803431d0;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
    }
    local_68 = local_48;
    local_60 = puVar7;
    local_48[0] = fVar10;
    local_40[0] = fVar9;
    uVar2 = FUN_1802b2b30(puVar5,8,local_38,local_40);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_38[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


)B18004e000",
    "1f0fc05bef35626268a0dbdc614b2c53befef9d0caae51c8c2369d77935e4ccb",
    R"F18004e000C(FUN_180039770
FUN_18004a240
FUN_1802b2b30)F18004e000C",
    R"F18004e000D(DAT_1803431c8
DAT_1803431d0
DAT_180380bb0
DAT_1803da4c0
DAT_1803ff8ec)F18004e000D",
    R"F18004e000T()F18004e000T",
    R"F18004e000F(32: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
35: else if (DAT_1803ff8ec == '\0') {
38: else {
41: if (cVar1 == '\0') {
44: else {
49: if (cVar1 == '\0') {
52: else {
55: if (puVar5 != (undefined *)0x0) {
61: if (cVar1 != '\0') {
66: if (cVar1 != '\0') {
71: if (cVar1 == '\0') {
74: else {
77: if (puVar6 != (undefined *)0x0) {
90: return uVar4;)F18004e000F",
    R"F18004e000U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431c8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431d0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380bb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 39: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 45: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 48: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);.
TODO: resolve the indirect call in body 53: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);.
TODO: resolve the indirect call in body 59: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 62: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 65: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 67: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 70: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 75: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 86: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_38[0]);.
TODO: resolve the indirect call in body 87: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004e000U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004e000() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004e000", "FUN_18004e000");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431c8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431d0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380bb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 39: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 45: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 48: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);.
    // TODO: resolve the indirect call in body 53: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);.
    // TODO: resolve the indirect call in body 59: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 62: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 65: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 67: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 70: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 75: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 86: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_38[0]);.
    // TODO: resolve the indirect call in body 87: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802b2b30", reinterpret_cast<const void*>(&image::FUN_1802b2b30));
    trace.data_ref("DAT_1803431c8", static_cast<const void*>(&image::DAT_1803431c8));
    trace.data_ref("DAT_1803431d0", static_cast<const void*>(&image::DAT_1803431d0));
    trace.data_ref("DAT_180380bb0", static_cast<const void*>(&image::DAT_180380bb0));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 1f0fc05bef35626268a0dbdc614b2c53befef9d0caae51c8c2369d77935e4ccb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004e000(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined *puVar7;");
            trace.statement("double dVar8;");
            trace.statement("float fVar9;");
            trace.statement("float fVar10;");
            trace.statement("undefined1 auStack_88 [32];");
            trace.statement("float *local_68;");
            trace.statement("undefined *local_60;");
            trace.statement("float local_48 [2];");
            trace.statement("float local_40 [2];");
            trace.statement("float local_38 [2];");
            trace.statement("ulonglong local_30;");
            trace.statement("local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("uVar4 = 0;");
            } else {
            trace.statement("uVar4 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
            trace.statement("fVar9 = 0.0;");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("local_38[0] = 0.0;");
            } else {
            trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
            trace.statement("local_38[0] = (float)dVar8;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar7 = &DAT_1803431c8;");
            } else {
            trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);");
            trace.statement("puVar7 = &DAT_1803431c8;");
            if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                trace.statement("puVar7 = puVar5;");
            }
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
            trace.statement("fVar10 = DAT_180380bb0;");
            if (trace.condition("if (cVar1 != '\\0')")) {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
                trace.statement("fVar10 = (float)dVar8;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
            if (trace.condition("if (cVar1 != '\\0')")) {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
                trace.statement("fVar9 = (float)dVar8;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar5 = &DAT_1803431d0;");
            } else {
            trace.statement("puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar5 = &DAT_1803431d0;");
            if (trace.condition("if (puVar6 != (undefined *)0x0)")) {
                trace.statement("puVar5 = puVar6;");
            }
            }
            trace.statement("local_68 = local_48;");
            trace.statement("local_60 = puVar7;");
            trace.statement("local_48[0] = fVar10;");
            trace.statement("local_40[0] = fVar9;");
            trace.statement("uVar2 = FUN_1802b2b30(puVar5,8,local_38,local_40);");
            trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_38[0]);");
            trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
            trace.statement("uVar4 = 2;");
        }
        trace.statement("return uVar4;");
    return kFunction_0x18004e000;
}

// 0x18004e230 FUN_18004e230
// source: re/dump/decompile/0x18004e230_FUN_18004e230.c
// size: 523 bytes; thunk: false
// body sha256: 7bf0f34bb0fbbb22edd6a9351a5a6aa7b56e9734fb1fdd573ba060ac048d5ee0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004e230{
    "0x18004e230",
    "FUN_18004e230",
    R"F18004e230S(undefined FUN_18004e230())F18004e230S",
    R"B18004e230(// 0x18004e230  FUN_18004e230
// size=523 thunk=false
// signature: undefined FUN_18004e230()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e230(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined *local_40;
  int local_28 [2];
  int local_20 [2];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    if (cVar1 == '\0') {
      local_18[0] = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_18[0] = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_18033f570;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);
      puVar7 = &DAT_18033f570;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      iVar8 = 100;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      iVar8 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 == '\0') {
      iVar9 = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      iVar9 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_1803431d8;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar5 = &DAT_1803431d8;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
    }
    local_48 = local_28;
    local_40 = puVar7;
    local_28[0] = iVar8;
    local_20[0] = iVar9;
    uVar2 = FUN_1802b2b30(puVar5,4,local_18,local_20);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


)B18004e230",
    "7bf0f34bb0fbbb22edd6a9351a5a6aa7b56e9734fb1fdd573ba060ac048d5ee0",
    R"F18004e230C(FUN_180039770
FUN_18004a240
FUN_1802b2b30)F18004e230C",
    R"F18004e230D(DAT_18033f570
DAT_1803431d8
DAT_1803da4c0
DAT_1803ff8ec)F18004e230D",
    R"F18004e230T()F18004e230T",
    R"F18004e230F(32: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
35: else if (DAT_1803ff8ec == '\0') {
38: else {
40: if (cVar1 == '\0') {
43: else {
48: if (cVar1 == '\0') {
51: else {
54: if (puVar5 != (undefined *)0x0) {
59: if (cVar1 == '\0') {
62: else {
67: if (cVar1 == '\0') {
70: else {
75: if (cVar1 == '\0') {
78: else {
81: if (puVar6 != (undefined *)0x0) {
94: return uVar4;)F18004e230F",
    R"F18004e230U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033f570.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431d8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 39: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 44: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 47: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);.
TODO: resolve the indirect call in body 52: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);.
TODO: resolve the indirect call in body 58: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 63: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 66: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 71: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 74: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 79: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 90: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);.
TODO: resolve the indirect call in body 91: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004e230U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004e230() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004e230", "FUN_18004e230");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033f570.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431d8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 39: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 44: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 47: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);.
    // TODO: resolve the indirect call in body 52: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);.
    // TODO: resolve the indirect call in body 58: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 63: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 66: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 71: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 74: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 79: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 90: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);.
    // TODO: resolve the indirect call in body 91: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802b2b30", reinterpret_cast<const void*>(&image::FUN_1802b2b30));
    trace.data_ref("DAT_18033f570", static_cast<const void*>(&image::DAT_18033f570));
    trace.data_ref("DAT_1803431d8", static_cast<const void*>(&image::DAT_1803431d8));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 7bf0f34bb0fbbb22edd6a9351a5a6aa7b56e9734fb1fdd573ba060ac048d5ee0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004e230(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined *puVar7;");
            trace.statement("int iVar8;");
            trace.statement("int iVar9;");
            trace.statement("double dVar10;");
            trace.statement("undefined1 auStack_68 [32];");
            trace.statement("int *local_48;");
            trace.statement("undefined *local_40;");
            trace.statement("int local_28 [2];");
            trace.statement("int local_20 [2];");
            trace.statement("int local_18 [2];");
            trace.statement("ulonglong local_10;");
            trace.statement("local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("uVar4 = 0;");
            } else {
            trace.statement("uVar4 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("local_18[0] = 0;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
            trace.statement("local_18[0] = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar7 = &DAT_18033f570;");
            } else {
            trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);");
            trace.statement("puVar7 = &DAT_18033f570;");
            if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                trace.statement("puVar7 = puVar5;");
            }
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("iVar8 = 100;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
            trace.statement("iVar8 = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("iVar9 = 0;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
            trace.statement("iVar9 = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar5 = &DAT_1803431d8;");
            } else {
            trace.statement("puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar5 = &DAT_1803431d8;");
            if (trace.condition("if (puVar6 != (undefined *)0x0)")) {
                trace.statement("puVar5 = puVar6;");
            }
            }
            trace.statement("local_48 = local_28;");
            trace.statement("local_40 = puVar7;");
            trace.statement("local_28[0] = iVar8;");
            trace.statement("local_20[0] = iVar9;");
            trace.statement("uVar2 = FUN_1802b2b30(puVar5,4,local_18,local_20);");
            trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);");
            trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
            trace.statement("uVar4 = 2;");
        }
        trace.statement("return uVar4;");
    return kFunction_0x18004e230;
}

// 0x18004e450 FUN_18004e450
// source: re/dump/decompile/0x18004e450_FUN_18004e450.c
// size: 634 bytes; thunk: false
// body sha256: bbc00d5f281e8c92d18f7695449ae6d06e265ce048d9ef18e4a8a19f2a07092d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004e450{
    "0x18004e450",
    "FUN_18004e450",
    R"F18004e450S(undefined FUN_18004e450())F18004e450S",
    R"B18004e450(// 0x18004e450  FUN_18004e450
// size=634 thunk=false
// signature: undefined FUN_18004e450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e450(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_98 [32];
  float *local_78;
  float *local_70;
  undefined *local_68;
  undefined4 local_60;
  float local_58 [2];
  float local_50 [2];
  float local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    fVar9 = 0.0;
    if (cVar1 == '\0') {
      local_48[0] = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_48[0] = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_1803431c8;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);
      puVar7 = &DAT_1803431c8;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
    if (cVar1 == '\0') {
      fVar11 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
      fVar11 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar9 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    fVar10 = DAT_180380bb0;
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_1803431e0;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar5 = &DAT_1803431e0;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
    }
    local_60 = 0;
    local_70 = local_58;
    local_78 = local_50;
    local_68 = puVar7;
    local_58[0] = fVar11;
    local_50[0] = fVar9;
    uVar2 = FUN_1802b1e50(puVar5,8,local_48,fVar10);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


)B18004e450",
    "bbc00d5f281e8c92d18f7695449ae6d06e265ce048d9ef18e4a8a19f2a07092d",
    R"F18004e450C(FUN_180039770
FUN_18004a240
FUN_1802b1e50)F18004e450C",
    R"F18004e450D(DAT_1803431c8
DAT_1803431e0
DAT_180380bb0
DAT_1803da4c0
DAT_1803ff8ec)F18004e450D",
    R"F18004e450T()F18004e450T",
    R"F18004e450F(35: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
38: else if (DAT_1803ff8ec == '\0') {
41: else {
44: if (cVar1 == '\0') {
47: else {
52: if (cVar1 == '\0') {
55: else {
58: if (puVar5 != (undefined *)0x0) {
63: if (cVar1 == '\0') {
66: else {
71: if (cVar1 != '\0') {
77: if (cVar1 != '\0') {
82: if (cVar1 == '\0') {
85: else {
88: if (puVar6 != (undefined *)0x0) {
103: return uVar4;)F18004e450F",
    R"F18004e450U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431c8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431e0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380bb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 48: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 51: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);.
TODO: resolve the indirect call in body 56: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);.
TODO: resolve the indirect call in body 62: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
TODO: resolve the indirect call in body 67: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
TODO: resolve the indirect call in body 70: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 72: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 75: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 78: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 81: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 86: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 99: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);.
TODO: resolve the indirect call in body 100: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004e450U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004e450() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004e450", "FUN_18004e450");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431c8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431e0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380bb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 48: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 51: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);.
    // TODO: resolve the indirect call in body 56: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);.
    // TODO: resolve the indirect call in body 62: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
    // TODO: resolve the indirect call in body 67: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
    // TODO: resolve the indirect call in body 70: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 72: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 75: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 78: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 81: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 86: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 99: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);.
    // TODO: resolve the indirect call in body 100: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802b1e50", reinterpret_cast<const void*>(&image::FUN_1802b1e50));
    trace.data_ref("DAT_1803431c8", static_cast<const void*>(&image::DAT_1803431c8));
    trace.data_ref("DAT_1803431e0", static_cast<const void*>(&image::DAT_1803431e0));
    trace.data_ref("DAT_180380bb0", static_cast<const void*>(&image::DAT_180380bb0));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: bbc00d5f281e8c92d18f7695449ae6d06e265ce048d9ef18e4a8a19f2a07092d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004e450(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined *puVar7;");
            trace.statement("double dVar8;");
            trace.statement("float fVar9;");
            trace.statement("float fVar10;");
            trace.statement("float fVar11;");
            trace.statement("undefined1 auStack_98 [32];");
            trace.statement("float *local_78;");
            trace.statement("float *local_70;");
            trace.statement("undefined *local_68;");
            trace.statement("undefined4 local_60;");
            trace.statement("float local_58 [2];");
            trace.statement("float local_50 [2];");
            trace.statement("float local_48 [2];");
            trace.statement("ulonglong local_40;");
            trace.statement("local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_98;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("uVar4 = 0;");
            } else {
            trace.statement("uVar4 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
            trace.statement("fVar9 = 0.0;");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("local_48[0] = 0.0;");
            } else {
            trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
            trace.statement("local_48[0] = (float)dVar8;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar7 = &DAT_1803431c8;");
            } else {
            trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);");
            trace.statement("puVar7 = &DAT_1803431c8;");
            if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                trace.statement("puVar7 = puVar5;");
            }
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("fVar11 = 0.0;");
            } else {
            trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);");
            trace.statement("fVar11 = (float)dVar8;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
            if (trace.condition("if (cVar1 != '\\0')")) {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
                trace.statement("fVar9 = (float)dVar8;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
            trace.statement("fVar10 = DAT_180380bb0;");
            if (trace.condition("if (cVar1 != '\\0')")) {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
                trace.statement("fVar10 = (float)dVar8;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar5 = &DAT_1803431e0;");
            } else {
            trace.statement("puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar5 = &DAT_1803431e0;");
            if (trace.condition("if (puVar6 != (undefined *)0x0)")) {
                trace.statement("puVar5 = puVar6;");
            }
            }
            trace.statement("local_60 = 0;");
            trace.statement("local_70 = local_58;");
            trace.statement("local_78 = local_50;");
            trace.statement("local_68 = puVar7;");
            trace.statement("local_58[0] = fVar11;");
            trace.statement("local_50[0] = fVar9;");
            trace.statement("uVar2 = FUN_1802b1e50(puVar5,8,local_48,fVar10);");
            trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);");
            trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
            trace.statement("uVar4 = 2;");
        }
        trace.statement("return uVar4;");
    return kFunction_0x18004e450;
}

// 0x18004e6e0 FUN_18004e6e0
// source: re/dump/decompile/0x18004e6e0_FUN_18004e6e0.c
// size: 613 bytes; thunk: false
// body sha256: 54e3d93788dc30a00e70e2887aac9c9642350a6c6a29a94d6a0508f66e92ecd7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004e6e0{
    "0x18004e6e0",
    "FUN_18004e6e0",
    R"F18004e6e0S(undefined FUN_18004e6e0())F18004e6e0S",
    R"B18004e6e0(// 0x18004e6e0  FUN_18004e6e0
// size=613 thunk=false
// signature: undefined FUN_18004e6e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e6e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_78 [32];
  int *local_58;
  int *local_50;
  undefined *local_48;
  undefined4 local_40;
  int local_38 [2];
  int local_30 [2];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    if (cVar1 == '\0') {
      local_28[0] = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_28[0] = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_18033f570;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);
      puVar7 = &DAT_18033f570;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
    if (cVar1 == '\0') {
      iVar8 = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
      iVar8 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      iVar9 = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      iVar9 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    fVar11 = DAT_180380bb0;
    if (cVar1 != '\0') {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar11 = (float)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_1803431e8;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar5 = &DAT_1803431e8;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
    }
    local_40 = 0;
    local_50 = local_38;
    local_58 = local_30;
    local_48 = puVar7;
    local_38[0] = iVar8;
    local_30[0] = iVar9;
    uVar2 = FUN_1802b1e50(puVar5,4,local_28,fVar11);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_28[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


)B18004e6e0",
    "54e3d93788dc30a00e70e2887aac9c9642350a6c6a29a94d6a0508f66e92ecd7",
    R"F18004e6e0C(FUN_180039770
FUN_18004a240
FUN_1802b1e50)F18004e6e0C",
    R"F18004e6e0D(DAT_18033f570
DAT_1803431e8
DAT_180380bb0
DAT_1803da4c0
DAT_1803ff8ec)F18004e6e0D",
    R"F18004e6e0T()F18004e6e0T",
    R"F18004e6e0F(35: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
38: else if (DAT_1803ff8ec == '\0') {
41: else {
43: if (cVar1 == '\0') {
46: else {
51: if (cVar1 == '\0') {
54: else {
57: if (puVar5 != (undefined *)0x0) {
62: if (cVar1 == '\0') {
65: else {
70: if (cVar1 == '\0') {
73: else {
79: if (cVar1 != '\0') {
84: if (cVar1 == '\0') {
87: else {
90: if (puVar6 != (undefined *)0x0) {
105: return uVar4;)F18004e6e0F",
    R"F18004e6e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033f570.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431e8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380bb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 47: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 50: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);.
TODO: resolve the indirect call in body 55: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);.
TODO: resolve the indirect call in body 61: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
TODO: resolve the indirect call in body 66: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
TODO: resolve the indirect call in body 69: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 74: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 77: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 80: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 83: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 88: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 101: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_28[0]);.
TODO: resolve the indirect call in body 102: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004e6e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004e6e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004e6e0", "FUN_18004e6e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033f570.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431e8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380bb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 47: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 50: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);.
    // TODO: resolve the indirect call in body 55: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);.
    // TODO: resolve the indirect call in body 61: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
    // TODO: resolve the indirect call in body 66: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
    // TODO: resolve the indirect call in body 69: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 74: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 77: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 80: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 83: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 88: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 101: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_28[0]);.
    // TODO: resolve the indirect call in body 102: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802b1e50", reinterpret_cast<const void*>(&image::FUN_1802b1e50));
    trace.data_ref("DAT_18033f570", static_cast<const void*>(&image::DAT_18033f570));
    trace.data_ref("DAT_1803431e8", static_cast<const void*>(&image::DAT_1803431e8));
    trace.data_ref("DAT_180380bb0", static_cast<const void*>(&image::DAT_180380bb0));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 54e3d93788dc30a00e70e2887aac9c9642350a6c6a29a94d6a0508f66e92ecd7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004e6e0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined *puVar7;");
            trace.statement("int iVar8;");
            trace.statement("int iVar9;");
            trace.statement("double dVar10;");
            trace.statement("float fVar11;");
            trace.statement("undefined1 auStack_78 [32];");
            trace.statement("int *local_58;");
            trace.statement("int *local_50;");
            trace.statement("undefined *local_48;");
            trace.statement("undefined4 local_40;");
            trace.statement("int local_38 [2];");
            trace.statement("int local_30 [2];");
            trace.statement("int local_28 [2];");
            trace.statement("ulonglong local_20;");
            trace.statement("local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("uVar4 = 0;");
            } else {
            trace.statement("uVar4 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("local_28[0] = 0;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
            trace.statement("local_28[0] = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar7 = &DAT_18033f570;");
            } else {
            trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);");
            trace.statement("puVar7 = &DAT_18033f570;");
            if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                trace.statement("puVar7 = puVar5;");
            }
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("iVar8 = 0;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);");
            trace.statement("iVar8 = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("iVar9 = 0;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
            trace.statement("iVar9 = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
            trace.statement("fVar11 = DAT_180380bb0;");
            if (trace.condition("if (cVar1 != '\\0')")) {
                trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
                trace.statement("fVar11 = (float)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar5 = &DAT_1803431e8;");
            } else {
            trace.statement("puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar5 = &DAT_1803431e8;");
            if (trace.condition("if (puVar6 != (undefined *)0x0)")) {
                trace.statement("puVar5 = puVar6;");
            }
            }
            trace.statement("local_40 = 0;");
            trace.statement("local_50 = local_38;");
            trace.statement("local_58 = local_30;");
            trace.statement("local_48 = puVar7;");
            trace.statement("local_38[0] = iVar8;");
            trace.statement("local_30[0] = iVar9;");
            trace.statement("uVar2 = FUN_1802b1e50(puVar5,4,local_28,fVar11);");
            trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_28[0]);");
            trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
            trace.statement("uVar4 = 2;");
        }
        trace.statement("return uVar4;");
    return kFunction_0x18004e6e0;
}

// 0x18004e960 FUN_18004e960
// source: re/dump/decompile/0x18004e960_FUN_18004e960.c
// size: 579 bytes; thunk: false
// body sha256: f97c11d6b6e77b8338d820ed720af758e6b7d0c6ee10ce46ad15cfc6c6591e09
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004e960{
    "0x18004e960",
    "FUN_18004e960",
    R"F18004e960S(undefined FUN_18004e960())F18004e960S",
    R"B18004e960(// 0x18004e960  FUN_18004e960
// size=579 thunk=false
// signature: undefined FUN_18004e960()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e960(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float *pfVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_98 [32];
  float *local_78;
  undefined *local_70;
  float local_58 [2];
  float local_50 [2];
  float local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    if (cVar1 == '\0') {
      local_48[0] = 0.0;
    }
    else {
      dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_48[0] = (float)dVar9;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_1803431c8;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);
      puVar7 = &DAT_1803431c8;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      fVar11 = 0.0;
    }
    else {
      dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar11 = (float)dVar9;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar10 = (float)dVar9;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_1803431f0;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar5 = &DAT_1803431f0;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
    }
    local_78 = local_58;
    if (fVar11 <= 0.0) {
      local_78 = (float *)0x0;
    }
    pfVar8 = local_50;
    if (fVar10 <= 0.0) {
      pfVar8 = (float *)0x0;
    }
    local_70 = puVar7;
    local_58[0] = fVar11;
    local_50[0] = fVar10;
    uVar2 = FUN_1802b3a10(puVar5,8,local_48,pfVar8);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


)B18004e960",
    "f97c11d6b6e77b8338d820ed720af758e6b7d0c6ee10ce46ad15cfc6c6591e09",
    R"F18004e960C(FUN_180039770
FUN_18004a240
FUN_1802b3a10)F18004e960C",
    R"F18004e960D(DAT_1803431c8
DAT_1803431f0
DAT_1803da4c0
DAT_1803ff8ec)F18004e960D",
    R"F18004e960T()F18004e960T",
    R"F18004e960F(33: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
36: else if (DAT_1803ff8ec == '\0') {
39: else {
41: if (cVar1 == '\0') {
44: else {
49: if (cVar1 == '\0') {
52: else {
55: if (puVar5 != (undefined *)0x0) {
60: if (cVar1 == '\0') {
63: else {
68: if (cVar1 == '\0') {
71: else {
76: if (cVar1 == '\0') {
79: else {
82: if (puVar6 != (undefined *)0x0) {
87: if (fVar11 <= 0.0) {
91: if (fVar10 <= 0.0) {
102: return uVar4;)F18004e960F",
    R"F18004e960U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431c8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431f0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 40: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 45: dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 48: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);.
TODO: resolve the indirect call in body 53: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);.
TODO: resolve the indirect call in body 59: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 64: dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 67: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 72: dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 75: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 80: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 98: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);.
TODO: resolve the indirect call in body 99: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004e960U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004e960() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004e960", "FUN_18004e960");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431c8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431f0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 40: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 45: dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 48: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);.
    // TODO: resolve the indirect call in body 53: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);.
    // TODO: resolve the indirect call in body 59: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 64: dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 67: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 72: dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 75: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 80: puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 98: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);.
    // TODO: resolve the indirect call in body 99: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802b3a10", reinterpret_cast<const void*>(&image::FUN_1802b3a10));
    trace.data_ref("DAT_1803431c8", static_cast<const void*>(&image::DAT_1803431c8));
    trace.data_ref("DAT_1803431f0", static_cast<const void*>(&image::DAT_1803431f0));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: f97c11d6b6e77b8338d820ed720af758e6b7d0c6ee10ce46ad15cfc6c6591e09
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004e960(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined *puVar7;");
            trace.statement("float *pfVar8;");
            trace.statement("double dVar9;");
            trace.statement("float fVar10;");
            trace.statement("float fVar11;");
            trace.statement("undefined1 auStack_98 [32];");
            trace.statement("float *local_78;");
            trace.statement("undefined *local_70;");
            trace.statement("float local_58 [2];");
            trace.statement("float local_50 [2];");
            trace.statement("float local_48 [2];");
            trace.statement("ulonglong local_40;");
            trace.statement("local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_98;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("uVar4 = 0;");
            } else {
            trace.statement("uVar4 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("local_48[0] = 0.0;");
            } else {
            trace.statement("dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
            trace.statement("local_48[0] = (float)dVar9;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar7 = &DAT_1803431c8;");
            } else {
            trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);");
            trace.statement("puVar7 = &DAT_1803431c8;");
            if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                trace.statement("puVar7 = puVar5;");
            }
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("fVar11 = 0.0;");
            } else {
            trace.statement("dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
            trace.statement("fVar11 = (float)dVar9;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("fVar10 = 0.0;");
            } else {
            trace.statement("dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
            trace.statement("fVar10 = (float)dVar9;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar5 = &DAT_1803431f0;");
            } else {
            trace.statement("puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar5 = &DAT_1803431f0;");
            if (trace.condition("if (puVar6 != (undefined *)0x0)")) {
                trace.statement("puVar5 = puVar6;");
            }
            }
            trace.statement("local_78 = local_58;");
            if (trace.condition("if (fVar11 <= 0.0)")) {
                trace.statement("local_78 = (float *)0x0;");
            }
            trace.statement("pfVar8 = local_50;");
            if (trace.condition("if (fVar10 <= 0.0)")) {
                trace.statement("pfVar8 = (float *)0x0;");
            }
            trace.statement("local_70 = puVar7;");
            trace.statement("local_58[0] = fVar11;");
            trace.statement("local_50[0] = fVar10;");
            trace.statement("uVar2 = FUN_1802b3a10(puVar5,8,local_48,pfVar8);");
            trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_48[0]);");
            trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
            trace.statement("uVar4 = 2;");
        }
        trace.statement("return uVar4;");
    return kFunction_0x18004e960;
}

// 0x18004ebc0 FUN_18004ebc0
// source: re/dump/decompile/0x18004ebc0_FUN_18004ebc0.c
// size: 461 bytes; thunk: false
// body sha256: 3840b844a49ffecb59255a204b7c543738526ca368d7af41eb178ebcbcdff695
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004ebc0{
    "0x18004ebc0",
    "FUN_18004ebc0",
    R"F18004ebc0S(undefined FUN_18004ebc0())F18004ebc0S",
    R"B18004ebc0(// 0x18004ebc0  FUN_18004ebc0
// size=461 thunk=false
// signature: undefined FUN_18004ebc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004ebc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  double dVar10;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined *local_40;
  int local_28 [2];
  int local_20 [2];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    if (cVar1 == '\0') {
      local_18[0] = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_18[0] = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      iVar8 = 100;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      iVar8 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 == '\0') {
      iVar7 = 1;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      iVar7 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_1803431f8;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_1803431f8;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
      }
    }
    local_48 = local_28;
    if (iVar8 < 1) {
      local_48 = (int *)0x0;
    }
    piVar9 = local_20;
    if (iVar7 < 1) {
      piVar9 = (int *)0x0;
    }
    local_40 = &DAT_18033f570;
    local_28[0] = iVar8;
    local_20[0] = iVar7;
    uVar2 = FUN_1802b3a10(puVar6,4,local_18,piVar9);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


)B18004ebc0",
    "3840b844a49ffecb59255a204b7c543738526ca368d7af41eb178ebcbcdff695",
    R"F18004ebc0C(FUN_180039770
FUN_18004a240
FUN_1802b3a10)F18004ebc0C",
    R"F18004ebc0D(DAT_18033f570
DAT_1803431f8
DAT_1803da4c0
DAT_1803ff8ec)F18004ebc0D",
    R"F18004ebc0T()F18004ebc0T",
    R"F18004ebc0F(32: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
35: else if (DAT_1803ff8ec == '\0') {
38: else {
40: if (cVar1 == '\0') {
43: else {
48: if (cVar1 == '\0') {
51: else {
56: if (cVar1 == '\0') {
59: else {
64: if (cVar1 == '\0') {
67: else {
70: if (puVar5 != (undefined *)0x0) {
75: if (iVar8 < 1) {
79: if (iVar7 < 1) {
90: return uVar4;)F18004ebc0F",
    R"F18004ebc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033f570.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431f8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 39: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 44: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 47: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 52: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 55: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 60: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 63: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 68: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 86: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);.
TODO: resolve the indirect call in body 87: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004ebc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004ebc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004ebc0", "FUN_18004ebc0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033f570.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431f8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 39: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 44: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 47: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 52: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 55: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 60: dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 63: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 68: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 86: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);.
    // TODO: resolve the indirect call in body 87: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802b3a10", reinterpret_cast<const void*>(&image::FUN_1802b3a10));
    trace.data_ref("DAT_18033f570", static_cast<const void*>(&image::DAT_18033f570));
    trace.data_ref("DAT_1803431f8", static_cast<const void*>(&image::DAT_1803431f8));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 3840b844a49ffecb59255a204b7c543738526ca368d7af41eb178ebcbcdff695
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004ebc0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("int iVar7;");
            trace.statement("int iVar8;");
            trace.statement("int *piVar9;");
            trace.statement("double dVar10;");
            trace.statement("undefined1 auStack_68 [32];");
            trace.statement("int *local_48;");
            trace.statement("undefined *local_40;");
            trace.statement("int local_28 [2];");
            trace.statement("int local_20 [2];");
            trace.statement("int local_18 [2];");
            trace.statement("ulonglong local_10;");
            trace.statement("local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("uVar4 = 0;");
            } else {
            trace.statement("uVar4 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("local_18[0] = 0;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
            trace.statement("local_18[0] = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("iVar8 = 100;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
            trace.statement("iVar8 = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("iVar7 = 1;");
            } else {
            trace.statement("dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
            trace.statement("iVar7 = (int)dVar10;");
            }
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar6 = &DAT_1803431f8;");
            } else {
            trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar6 = &DAT_1803431f8;");
            if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                trace.statement("puVar6 = puVar5;");
            }
            }
            trace.statement("local_48 = local_28;");
            if (trace.condition("if (iVar8 < 1)")) {
                trace.statement("local_48 = (int *)0x0;");
            }
            trace.statement("piVar9 = local_20;");
            if (trace.condition("if (iVar7 < 1)")) {
                trace.statement("piVar9 = (int *)0x0;");
            }
            trace.statement("local_40 = &DAT_18033f570;");
            trace.statement("local_28[0] = iVar8;");
            trace.statement("local_20[0] = iVar7;");
            trace.statement("uVar2 = FUN_1802b3a10(puVar6,4,local_18,piVar9);");
            trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);");
            trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
            trace.statement("uVar4 = 2;");
        }
        trace.statement("return uVar4;");
    return kFunction_0x18004ebc0;
}

// 0x18004eda0 FUN_18004eda0
// source: re/dump/decompile/0x18004eda0_FUN_18004eda0.c
// size: 529 bytes; thunk: false
// body sha256: c358aaea4cf3a5532b1e2806b0424a5fc5bc01cdd445d3db13d69593ee984770
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004eda0{
    "0x18004eda0",
    "FUN_18004eda0",
    R"F18004eda0S(undefined FUN_18004eda0())F18004eda0S",
    R"B18004eda0(// 0x18004eda0  FUN_18004eda0
// size=529 thunk=false
// signature: undefined FUN_18004eda0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004eda0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  uint uVar11;
  char *_Str;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  uint local_70;
  code *local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    uVar5 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar5 = FUN_18004a240(param_2);
  }
  else {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);
    if (cVar2 == '\0') {
      _Str = "";
    }
    else {
      pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);
      _Str = "";
      if (pcVar6 != (char *)0x0) {
        _Str = pcVar6;
      }
    }
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_38,_Str,sVar7);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    if (cVar2 == '\0') {
      uVar11 = 0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      uVar11 = (uint)dVar1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      puVar9 = &DAT_180343200;
    }
    else {
      puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar9 = &DAT_180343200;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
      }
    }
    local_70 = uVar11 | 0x400000;
    local_50 = &local_38;
    local_48 = 0;
    local_40 = 0;
    pppuVar10 = &local_38;
    if (0xf < uStack_20) {
      pppuVar10 = (undefined8 ***)local_38;
    }
    local_58 = 0;
    local_60 = &local_50;
    local_68 = FUN_1802d2b00;
    local_78 = &local_58;
    uVar3 = FUN_1802b74e0(puVar9,0,pppuVar10,(int)uStack_20 + 1);
    pppuVar10 = &local_38;
    if (0xf < uStack_20) {
      pppuVar10 = (undefined8 ***)local_38;
    }
    (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);
    FUN_18020e450(&local_38);
    uVar5 = 2;
  }
  return uVar5;
}


)B18004eda0",
    "c358aaea4cf3a5532b1e2806b0424a5fc5bc01cdd445d3db13d69593ee984770",
    R"F18004eda0C(FUN_18001d080
FUN_180039770
FUN_18004a240
FUN_18020e450
FUN_1802b74e0
FUN_1802d2b00)F18004eda0C",
    R"F18004eda0D(DAT_180343200
DAT_1803da4c0
DAT_1803ff8ec)F18004eda0D",
    R"F18004eda0T("")F18004eda0T",
    R"F18004eda0F(41: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
44: else if (DAT_1803ff8ec == '\0') {
47: else {
49: if (cVar2 == '\0') {
52: else {
55: if (pcVar6 != (char *)0x0) {
66: if (cVar2 == '\0') {
69: else {
74: if (cVar2 == '\0') {
77: else {
80: if (puVar8 != (undefined *)0x0) {
89: if (0xf < uStack_20) {
98: if (0xf < uStack_20) {
106: return uVar5;)F18004eda0F",
    R"F18004eda0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343200.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 48: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);.
TODO: resolve the indirect call in body 53: pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);.
TODO: resolve the indirect call in body 65: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
TODO: resolve the indirect call in body 70: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 73: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 78: puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 101: (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);.
TODO: resolve the indirect call in body 102: (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);.)F18004eda0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004eda0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004eda0", "FUN_18004eda0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343200.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 48: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);.
    // TODO: resolve the indirect call in body 53: pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);.
    // TODO: resolve the indirect call in body 65: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
    // TODO: resolve the indirect call in body 70: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
    // TODO: resolve the indirect call in body 73: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 78: puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 101: (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);.
    // TODO: resolve the indirect call in body 102: (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.call_target("FUN_1802b74e0", reinterpret_cast<const void*>(&image::FUN_1802b74e0));
    trace.call_target("FUN_1802d2b00", reinterpret_cast<const void*>(&image::FUN_1802d2b00));
    trace.data_ref("DAT_180343200", static_cast<const void*>(&image::DAT_180343200));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("");
    // body sha256: c358aaea4cf3a5532b1e2806b0424a5fc5bc01cdd445d3db13d69593ee984770
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004eda0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("double dVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("char *pcVar6;");
            trace.statement("size_t sVar7;");
            trace.statement("undefined *puVar8;");
            trace.statement("undefined *puVar9;");
            trace.statement("undefined8 ***pppuVar10;");
            trace.statement("uint uVar11;");
            trace.statement("char *_Str;");
            trace.statement("undefined1 auStack_98 [32];");
            trace.statement("undefined8 *local_78;");
            trace.statement("uint local_70;");
            trace.statement("code *local_68;");
            trace.statement("undefined8 **local_60;");
            trace.statement("undefined8 local_58;");
            trace.statement("undefined8 **local_50;");
            trace.statement("undefined8 local_48;");
            trace.statement("undefined8 local_40;");
            trace.statement("undefined8 **local_38;");
            trace.statement("undefined8 uStack_30;");
            trace.statement("undefined8 local_28;");
            trace.statement("ulonglong uStack_20;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2))")) {
                trace.statement("uVar5 = 0;");
            } else {
            trace.statement("uVar5 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("_Str = \"\";");
            } else {
            trace.statement("pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);");
            trace.statement("_Str = \"\";");
            if (trace.condition("if (pcVar6 != (char *)0x0)")) {
                trace.statement("_Str = pcVar6;");
            }
            }
            trace.statement("local_38 = (undefined8 ***)0x0;");
            trace.statement("uStack_30 = 0;");
            trace.statement("local_28 = 0;");
            trace.statement("uStack_20 = 0;");
            trace.statement("sVar7 = strlen(_Str);");
            trace.statement("FUN_18001d080(&local_38,_Str,sVar7);");
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("uVar11 = 0;");
            } else {
            trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);");
            trace.statement("uVar11 = (uint)dVar1;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("puVar9 = &DAT_180343200;");
            } else {
            trace.statement("puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
            trace.statement("puVar9 = &DAT_180343200;");
            if (trace.condition("if (puVar8 != (undefined *)0x0)")) {
                trace.statement("puVar9 = puVar8;");
            }
            }
            trace.statement("local_70 = uVar11 | 0x400000;");
            trace.statement("local_50 = &local_38;");
            trace.statement("local_48 = 0;");
            trace.statement("local_40 = 0;");
            trace.statement("pppuVar10 = &local_38;");
            if (trace.condition("if (0xf < uStack_20)")) {
                trace.statement("pppuVar10 = (undefined8 ***)local_38;");
            }
            trace.statement("local_58 = 0;");
            trace.statement("local_60 = &local_50;");
            trace.statement("local_68 = FUN_1802d2b00;");
            trace.statement("local_78 = &local_58;");
            trace.statement("uVar3 = FUN_1802b74e0(puVar9,0,pppuVar10,(int)uStack_20 + 1);");
            trace.statement("pppuVar10 = &local_38;");
            if (trace.condition("if (0xf < uStack_20)")) {
                trace.statement("pppuVar10 = (undefined8 ***)local_38;");
            }
            trace.statement("(**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);");
            trace.statement("(**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);");
            trace.statement("FUN_18020e450(&local_38);");
            trace.statement("uVar5 = 2;");
        }
        trace.statement("return uVar5;");
    return kFunction_0x18004eda0;
}

// 0x18004efd0 FUN_18004efd0
// source: re/dump/decompile/0x18004efd0_FUN_18004efd0.c
// size: 664 bytes; thunk: false
// body sha256: 03f40aa2be119f4958cc822f59d14184421bbb53c2a15789c3e4084111262983
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004efd0{
    "0x18004efd0",
    "FUN_18004efd0",
    R"F18004efd0S(undefined FUN_18004efd0())F18004efd0S",
    R"B18004efd0(// 0x18004efd0  FUN_18004efd0
// size=664 thunk=false
// signature: undefined FUN_18004efd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004efd0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  uint uVar11;
  char *_Str;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  float *local_98;
  uint local_90;
  code *local_88;
  undefined8 **local_80;
  float local_78;
  float local_74;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    uVar5 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar5 = FUN_18004a240(param_2);
  }
  else {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);
    if (cVar2 == '\0') {
      _Str = "";
    }
    else {
      pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);
      _Str = "";
      if (pcVar6 != (char *)0x0) {
        _Str = pcVar6;
      }
    }
    local_58 = (undefined8 ***)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_58,_Str,sVar7);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3);
    if (cVar2 == '\0') {
      uVar11 = 0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);
      uVar11 = (uint)dVar1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
    fVar12 = 0.0;
    if (cVar2 == '\0') {
      fVar13 = 0.0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
      fVar13 = (float)dVar1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      fVar12 = (float)dVar1;
    }
    local_78 = fVar12;
    local_74 = fVar13;
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      puVar9 = &DAT_180343208;
    }
    else {
      puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar9 = &DAT_180343208;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
      }
    }
    local_70 = &local_58;
    local_68 = 0;
    local_60 = 0;
    pppuVar10 = &local_58;
    if (0xf < uStack_40) {
      pppuVar10 = (undefined8 ***)local_58;
    }
    local_90 = uVar11 | 0x4400000;
    local_80 = &local_70;
    local_88 = FUN_1802d2b00;
    local_98 = &local_78;
    uVar3 = FUN_1802b74e0(puVar9,0,pppuVar10,(int)uStack_40 + 1);
    pppuVar10 = &local_58;
    if (0xf < uStack_40) {
      pppuVar10 = (undefined8 ***)local_58;
    }
    (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);
    FUN_18020e450(&local_58);
    uVar5 = 2;
  }
  return uVar5;
}


)B18004efd0",
    "03f40aa2be119f4958cc822f59d14184421bbb53c2a15789c3e4084111262983",
    R"F18004efd0C(FUN_18001d080
FUN_180039770
FUN_18004a240
FUN_18020e450
FUN_1802b74e0
FUN_1802d2b00)F18004efd0C",
    R"F18004efd0D(DAT_180343208
DAT_1803da4c0
DAT_1803ff8ec)F18004efd0D",
    R"F18004efd0T("")F18004efd0T",
    R"F18004efd0F(44: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
47: else if (DAT_1803ff8ec == '\0') {
50: else {
52: if (cVar2 == '\0') {
55: else {
58: if (pcVar6 != (char *)0x0) {
69: if (cVar2 == '\0') {
72: else {
78: if (cVar2 == '\0') {
81: else {
86: if (cVar2 != '\0') {
93: if (cVar2 == '\0') {
96: else {
99: if (puVar8 != (undefined *)0x0) {
107: if (0xf < uStack_40) {
116: if (0xf < uStack_40) {
124: return uVar5;)F18004efd0F",
    R"F18004efd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343208.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 51: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);.
TODO: resolve the indirect call in body 56: pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);.
TODO: resolve the indirect call in body 68: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3);.
TODO: resolve the indirect call in body 73: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);.
TODO: resolve the indirect call in body 76: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);.
TODO: resolve the indirect call in body 82: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);.
TODO: resolve the indirect call in body 85: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
TODO: resolve the indirect call in body 87: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 92: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 97: puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 119: (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);.
TODO: resolve the indirect call in body 120: (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);.)F18004efd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004efd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004efd0", "FUN_18004efd0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343208.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 51: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);.
    // TODO: resolve the indirect call in body 56: pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);.
    // TODO: resolve the indirect call in body 68: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3);.
    // TODO: resolve the indirect call in body 73: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);.
    // TODO: resolve the indirect call in body 76: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);.
    // TODO: resolve the indirect call in body 82: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);.
    // TODO: resolve the indirect call in body 85: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
    // TODO: resolve the indirect call in body 87: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
    // TODO: resolve the indirect call in body 92: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 97: puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 119: (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);.
    // TODO: resolve the indirect call in body 120: (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.call_target("FUN_1802b74e0", reinterpret_cast<const void*>(&image::FUN_1802b74e0));
    trace.call_target("FUN_1802d2b00", reinterpret_cast<const void*>(&image::FUN_1802d2b00));
    trace.data_ref("DAT_180343208", static_cast<const void*>(&image::DAT_180343208));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("");
    // body sha256: 03f40aa2be119f4958cc822f59d14184421bbb53c2a15789c3e4084111262983
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004efd0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("double dVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("char *pcVar6;");
            trace.statement("size_t sVar7;");
            trace.statement("undefined *puVar8;");
            trace.statement("undefined *puVar9;");
            trace.statement("undefined8 ***pppuVar10;");
            trace.statement("uint uVar11;");
            trace.statement("char *_Str;");
            trace.statement("float fVar12;");
            trace.statement("float fVar13;");
            trace.statement("undefined1 auStack_b8 [32];");
            trace.statement("float *local_98;");
            trace.statement("uint local_90;");
            trace.statement("code *local_88;");
            trace.statement("undefined8 **local_80;");
            trace.statement("float local_78;");
            trace.statement("float local_74;");
            trace.statement("undefined8 **local_70;");
            trace.statement("undefined8 local_68;");
            trace.statement("undefined8 local_60;");
            trace.statement("undefined8 **local_58;");
            trace.statement("undefined8 uStack_50;");
            trace.statement("undefined8 local_48;");
            trace.statement("ulonglong uStack_40;");
            trace.statement("ulonglong local_38;");
            trace.statement("local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2))")) {
                trace.statement("uVar5 = 0;");
            } else {
            trace.statement("uVar5 = FUN_18004a240(param_2);");
            }
            trace.statement("else {");
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("_Str = \"\";");
            } else {
            trace.statement("pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);");
            trace.statement("_Str = \"\";");
            if (trace.condition("if (pcVar6 != (char *)0x0)")) {
                trace.statement("_Str = pcVar6;");
            }
            }
            trace.statement("local_58 = (undefined8 ***)0x0;");
            trace.statement("uStack_50 = 0;");
            trace.statement("local_48 = 0;");
            trace.statement("uStack_40 = 0;");
            trace.statement("sVar7 = strlen(_Str);");
            trace.statement("FUN_18001d080(&local_58,_Str,sVar7);");
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("uVar11 = 0;");
            } else {
            trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);");
            trace.statement("uVar11 = (uint)dVar1;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);");
            trace.statement("fVar12 = 0.0;");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("fVar13 = 0.0;");
            } else {
            trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);");
            trace.statement("fVar13 = (float)dVar1;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);");
            if (trace.condition("if (cVar2 != '\\0')")) {
                trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);");
                trace.statement("fVar12 = (float)dVar1;");
            }
            trace.statement("local_78 = fVar12;");
            trace.statement("local_74 = fVar13;");
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("puVar9 = &DAT_180343208;");
            } else {
            trace.statement("puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
            trace.statement("puVar9 = &DAT_180343208;");
            if (trace.condition("if (puVar8 != (undefined *)0x0)")) {
                trace.statement("puVar9 = puVar8;");
            }
            }
            trace.statement("local_70 = &local_58;");
            trace.statement("local_68 = 0;");
            trace.statement("local_60 = 0;");
            trace.statement("pppuVar10 = &local_58;");
            if (trace.condition("if (0xf < uStack_40)")) {
                trace.statement("pppuVar10 = (undefined8 ***)local_58;");
            }
            trace.statement("local_90 = uVar11 | 0x4400000;");
            trace.statement("local_80 = &local_70;");
            trace.statement("local_88 = FUN_1802d2b00;");
            trace.statement("local_98 = &local_78;");
            trace.statement("uVar3 = FUN_1802b74e0(puVar9,0,pppuVar10,(int)uStack_40 + 1);");
            trace.statement("pppuVar10 = &local_58;");
            if (trace.condition("if (0xf < uStack_40)")) {
                trace.statement("pppuVar10 = (undefined8 ***)local_58;");
            }
            trace.statement("(**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);");
            trace.statement("(**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);");
            trace.statement("FUN_18020e450(&local_58);");
            trace.statement("uVar5 = 2;");
        }
        trace.statement("return uVar5;");
    return kFunction_0x18004efd0;
}

// 0x18004f280 FUN_18004f280
// source: re/dump/decompile/0x18004f280_FUN_18004f280.c
// size: 285 bytes; thunk: false
// body sha256: 6c0a8c2f954014fdacfea4fe1a002d77285783683b074a5ac361d68263d5e12e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004f280{
    "0x18004f280",
    "FUN_18004f280",
    R"F18004f280S(undefined FUN_18004f280())F18004f280S",
    R"B18004f280(// 0x18004f280  FUN_18004f280
// size=285 thunk=false
// signature: undefined FUN_18004f280()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18004f280(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_1);
  }
  else {
    local_38 = _DAT_180381760;
    uStack_30 = _UNK_180381768;
    FUN_180049dc0(&local_48,plVar3,2,&local_38);
    local_28 = local_48;
    uStack_20 = uStack_40;
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_180343210;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_180343210;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
      }
    }
    uVar2 = FUN_1802bac60(puVar6,&local_28,0x44000);
    local_48 = local_28;
    uStack_40 = uStack_20;
    FUN_18004a030(plVar3,&local_48);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


)B18004f280",
    "6c0a8c2f954014fdacfea4fe1a002d77285783683b074a5ac361d68263d5e12e",
    R"F18004f280C(FUN_180039770
FUN_180049dc0
FUN_18004a030
FUN_18004a240
FUN_1802bac60)F18004f280C",
    R"F18004f280D(DAT_180343210
DAT_1803da4c0
DAT_1803ff8ec)F18004f280D",
    R"F18004f280T()F18004f280T",
    R"F18004f280F(30: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
33: else if (DAT_1803ff8ec == '\0') {
36: else {
43: if (cVar1 == '\0') {
46: else {
49: if (puVar5 != (undefined *)0x0) {
60: return uVar4;)F18004f280F",
    R"F18004f280U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343210.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 47: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 57: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.)F18004f280U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004f280() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004f280", "FUN_18004f280");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343210.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 47: puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 57: (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049dc0", reinterpret_cast<const void*>(&image::FUN_180049dc0));
    trace.call_target("FUN_18004a030", reinterpret_cast<const void*>(&image::FUN_18004a030));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802bac60", reinterpret_cast<const void*>(&image::FUN_1802bac60));
    trace.data_ref("DAT_180343210", static_cast<const void*>(&image::DAT_180343210));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 6c0a8c2f954014fdacfea4fe1a002d77285783683b074a5ac361d68263d5e12e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004f280(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined *puVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined1 auStack_68 [32];");
            trace.statement("undefined8 local_48;");
            trace.statement("undefined8 uStack_40;");
            trace.statement("undefined8 local_38;");
            trace.statement("undefined8 uStack_30;");
            trace.statement("undefined8 local_28;");
            trace.statement("undefined8 uStack_20;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("uVar4 = 0;");
            } else {
            trace.statement("uVar4 = FUN_18004a240(param_1);");
            }
            trace.statement("else {");
            trace.statement("local_38 = _DAT_180381760;");
            trace.statement("uStack_30 = _UNK_180381768;");
            trace.statement("FUN_180049dc0(&local_48,plVar3,2,&local_38);");
            trace.statement("local_28 = local_48;");
            trace.statement("uStack_20 = uStack_40;");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("puVar6 = &DAT_180343210;");
            } else {
            trace.statement("puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar6 = &DAT_180343210;");
            if (trace.condition("if (puVar5 != (undefined *)0x0)")) {
                trace.statement("puVar6 = puVar5;");
            }
            }
            trace.statement("uVar2 = FUN_1802bac60(puVar6,&local_28,0x44000);");
            trace.statement("local_48 = local_28;");
            trace.statement("uStack_40 = uStack_20;");
            trace.statement("FUN_18004a030(plVar3,&local_48);");
            trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);");
            trace.statement("uVar4 = 2;");
        }
        trace.statement("return uVar4;");
    return kFunction_0x18004f280;
}

// 0x18004f3a0 FUN_18004f3a0
// source: re/dump/decompile/0x18004f3a0_FUN_18004f3a0.c
// size: 334 bytes; thunk: false
// body sha256: d812b76ef7bcab2b80a56003cceb3f5f8b9b058987d68edcb6e4ca4f245ff1f9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004f3a0{
    "0x18004f3a0",
    "FUN_18004f3a0",
    R"F18004f3a0S(undefined FUN_18004f3a0())F18004f3a0S",
    R"B18004f3a0(// 0x18004f3a0  FUN_18004f3a0
// size=334 thunk=false
// signature: undefined FUN_18004f3a0()
// status: ok


undefined8 FUN_18004f3a0(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_res10;
  float local_res14;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,4);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,4,0);
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    fVar5 = 0.0;
    if (cVar2 == '\0') {
      fVar6 = 0.0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar6 = (float)dVar1;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    local_res10 = DAT_180381318;
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_res10 = (float)dVar1;
    }
    local_res14 = fVar6;
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      fVar5 = (float)dVar1;
    }
    FUN_1802ae300(fVar5,&local_res10,uVar4);
  }
  return 0;
}


)B18004f3a0",
    "d812b76ef7bcab2b80a56003cceb3f5f8b9b058987d68edcb6e4ca4f245ff1f9",
    R"F18004f3a0C(FUN_180039770
FUN_1802ae300)F18004f3a0C",
    R"F18004f3a0D(DAT_180381318
DAT_1803ff8ec)F18004f3a0D",
    R"F18004f3a0T()F18004f3a0T",
    R"F18004f3a0F(20: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
22: if (cVar2 == '\0') {
25: else {
30: if (cVar2 == '\0') {
33: else {
39: if (cVar2 != '\0') {
45: if (cVar2 != '\0') {
51: return 0;)F18004f3a0F",
    R"F18004f3a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180381318.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 21: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,4);.
TODO: resolve the indirect call in body 26: uVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,4,0);.
TODO: resolve the indirect call in body 28: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 34: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 37: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 40: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 44: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
TODO: resolve the indirect call in body 46: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.)F18004f3a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004f3a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004f3a0", "FUN_18004f3a0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180381318.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 21: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,4);.
    // TODO: resolve the indirect call in body 26: uVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,4,0);.
    // TODO: resolve the indirect call in body 28: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 34: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 37: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 40: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 44: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
    // TODO: resolve the indirect call in body 46: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802ae300", reinterpret_cast<const void*>(&image::FUN_1802ae300));
    trace.data_ref("DAT_180381318", static_cast<const void*>(&image::DAT_180381318));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: d812b76ef7bcab2b80a56003cceb3f5f8b9b058987d68edcb6e4ca4f245ff1f9
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004f3a0(longlong param_1)");
        {
            trace.statement("double dVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("float fVar5;");
            trace.statement("float fVar6;");
            trace.statement("float local_res10;");
            trace.statement("float local_res14;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,4);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("uVar4 = 0;");
                } else {
                trace.statement("uVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,4,0);");
                }
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
                trace.statement("fVar5 = 0.0;");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("fVar6 = 0.0;");
                } else {
                trace.statement("dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
                trace.statement("fVar6 = (float)dVar1;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
                trace.statement("local_res10 = DAT_180381318;");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
                    trace.statement("local_res10 = (float)dVar1;");
                }
                trace.statement("local_res14 = fVar6;");
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);");
                    trace.statement("fVar5 = (float)dVar1;");
                }
                trace.statement("FUN_1802ae300(fVar5,&local_res10,uVar4);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004f3a0;
}

// 0x18004f4f0 FUN_18004f4f0
// source: re/dump/decompile/0x18004f4f0_FUN_18004f4f0.c
// size: 663 bytes; thunk: false
// body sha256: 70966a132dc947b847b21880805e43570fbeca1a1654d6acf3472eb50685e65e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004f4f0{
    "0x18004f4f0",
    "FUN_18004f4f0",
    R"F18004f4f0S(undefined FUN_18004f4f0())F18004f4f0S",
    R"B18004f4f0(// 0x18004f4f0  FUN_18004f4f0
// size=663 thunk=false
// signature: undefined FUN_18004f4f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004f4f0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *_Memory;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  int local_78;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  puVar13 = auStack_98;
  puVar14 = auStack_98;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    uVar7 = 0;
    goto LAB_18004f774;
  }
  local_68 = plVar6;
  if (DAT_1803ff8ec == '\0') {
    uVar7 = FUN_18004a240(param_2);
    puVar14 = auStack_98;
    goto LAB_18004f774;
  }
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_18004a120(plVar6);
  local_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  FUN_18020cc60(&local_60,(longlong)plStack_40 - (longlong)local_48 >> 5);
  plVar3 = plStack_40;
  for (plVar12 = local_48; plVar12 != plVar3; plVar12 = plVar12 + 4) {
    local_68 = plVar12;
    if (0xf < (ulonglong)plVar12[3]) {
      local_68 = (longlong *)*plVar12;
    }
    if (puStack_58 == local_50) {
      FUN_180221c00(&local_60,puStack_58,&local_68);
    }
    else {
      *puStack_58 = local_68;
      puStack_58 = puStack_58 + 1;
    }
  }
  cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);
  if (cVar4 == '\0') {
LAB_18004f648:
    iVar10 = 0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);
    iVar10 = (int)dVar2 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar10);
    if (iVar10 < 0) goto LAB_18004f648;
  }
  iVar11 = (int)((longlong)puStack_58 - (longlong)local_60 >> 3);
  if (iVar11 <= iVar10) {
    iVar10 = iVar11 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar10);
  }
  uVar5 = 0;
  if (local_60 != puStack_58) {
    cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);
    if (cVar4 == '\0') {
      pcVar9 = "##combo";
    }
    else {
      pcVar8 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);
      pcVar9 = "##combo";
      if (pcVar8 != (char *)0x0) {
        pcVar9 = pcVar8;
      }
    }
    local_78 = iVar11;
    uVar5 = FUN_1802b1200(pcVar9,&local_68);
    iVar10 = (int)local_68;
  }
  (**(code **)(*plVar6 + 0xf0))(plVar6,(double)(iVar10 + 1));
  (**(code **)(*plVar6 + 0xf8))(plVar6,uVar5);
  if (local_60 != (undefined8 *)0x0) {
    _Memory = local_60;
    puVar13 = auStack_98;
    if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) &&
       (_Memory = (undefined8 *)local_60[-1], puVar13 = auStack_98,
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)_Memory)))) {
      _Memory = (undefined8 *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar13 = auStack_90;
    }
    *(undefined8 *)(puVar13 + -8) = 0x18004f74f;
    free(_Memory);
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
  }
  *(undefined8 *)(puVar13 + -8) = 0x18004f76b;
  FUN_18020d5c0(puVar13 + 0x50);
  uVar7 = 2;
  puVar14 = puVar13;
LAB_18004f774:
  *(undefined8 *)(puVar14 + -8) = 0x18004f781;
  return uVar7;
}


)B18004f4f0",
    "70966a132dc947b847b21880805e43570fbeca1a1654d6acf3472eb50685e65e",
    R"F18004f4f0C(FUN_180039770
FUN_18004a120
FUN_18004a240
FUN_18020cc60
FUN_18020d5c0
FUN_180221c00
FUN_1802b1200)F18004f4f0C",
    R"F18004f4f0D(LAB_18004f648
LAB_18004f774
DAT_1803da4c0
DAT_1803ff8ec)F18004f4f0D",
    R"F18004f4f0T("##combo")F18004f4f0T",
    R"F18004f4f0F(43: if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
45: goto LAB_18004f774;
48: if (DAT_1803ff8ec == '\0') {
51: goto LAB_18004f774;
62: for (plVar12 = local_48; plVar12 != plVar3; plVar12 = plVar12 + 4) {
64: if (0xf < (ulonglong)plVar12[3]) {
67: if (puStack_58 == local_50) {
70: else {
76: if (cVar4 == '\0') {
77: LAB_18004f648:
81: else {
85: if (iVar10 < 0) goto LAB_18004f648;
88: if (iVar11 <= iVar10) {
93: if (local_60 != puStack_58) {
95: if (cVar4 == '\0') {
98: else {
101: if (pcVar8 != (char *)0x0) {
111: if (local_60 != (undefined8 *)0x0) {
114: if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) &&
132: LAB_18004f774:
134: return uVar7;)F18004f4f0F",
    R"F18004f4f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_18004f648.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_18004f774.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 75: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);.
TODO: resolve the indirect call in body 82: dVar2 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);.
TODO: resolve the indirect call in body 94: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);.
TODO: resolve the indirect call in body 99: pcVar8 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);.
TODO: resolve the indirect call in body 109: (**(code **)(*plVar6 + 0xf0))(plVar6,(double)(iVar10 + 1));.
TODO: resolve the indirect call in body 110: (**(code **)(*plVar6 + 0xf8))(plVar6,uVar5);.
TODO: resolve the indirect call in body 118: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 119: (*pcVar1)();.)F18004f4f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004f4f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004f4f0", "FUN_18004f4f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_18004f648.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_18004f774.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 75: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);.
    // TODO: resolve the indirect call in body 82: dVar2 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);.
    // TODO: resolve the indirect call in body 94: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);.
    // TODO: resolve the indirect call in body 99: pcVar8 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);.
    // TODO: resolve the indirect call in body 109: (**(code **)(*plVar6 + 0xf0))(plVar6,(double)(iVar10 + 1));.
    // TODO: resolve the indirect call in body 110: (**(code **)(*plVar6 + 0xf8))(plVar6,uVar5);.
    // TODO: resolve the indirect call in body 118: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 119: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a120", reinterpret_cast<const void*>(&image::FUN_18004a120));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_18020cc60", reinterpret_cast<const void*>(&image::FUN_18020cc60));
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.call_target("FUN_180221c00", reinterpret_cast<const void*>(&image::FUN_180221c00));
    trace.call_target("FUN_1802b1200", reinterpret_cast<const void*>(&image::FUN_1802b1200));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("##combo");
    // body sha256: 70966a132dc947b847b21880805e43570fbeca1a1654d6acf3472eb50685e65e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004f4f0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("double dVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("char cVar4;");
            trace.statement("undefined1 uVar5;");
            trace.statement("longlong *plVar6;");
            trace.statement("undefined8 uVar7;");
            trace.statement("char *pcVar8;");
            trace.statement("char *pcVar9;");
            trace.statement("undefined8 *_Memory;");
            trace.statement("int iVar10;");
            trace.statement("int iVar11;");
            trace.statement("longlong *plVar12;");
            trace.statement("undefined1 *puVar13;");
            trace.statement("undefined1 *puVar14;");
            trace.statement("undefined1 auStack_98 [8];");
            trace.statement("undefined1 auStack_90 [24];");
            trace.statement("int local_78;");
            trace.statement("longlong *local_68;");
            trace.statement("undefined8 *local_60;");
            trace.statement("undefined8 *puStack_58;");
            trace.statement("undefined8 *local_50;");
            trace.statement("longlong *local_48;");
            trace.statement("longlong *plStack_40;");
            trace.statement("undefined8 local_38;");
            trace.statement("ulonglong local_30;");
            trace.statement("puVar13 = auStack_98;");
            trace.statement("puVar14 = auStack_98;");
            trace.statement("local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_98;");
            trace.statement("plVar6 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2))")) {
                trace.statement("uVar7 = 0;");
                trace.statement("goto LAB_18004f774;");
            }
            trace.statement("local_68 = plVar6;");
            if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                trace.statement("uVar7 = FUN_18004a240(param_2);");
                trace.statement("puVar14 = auStack_98;");
                trace.statement("goto LAB_18004f774;");
            }
            trace.statement("local_48 = (longlong *)0x0;");
            trace.statement("plStack_40 = (longlong *)0x0;");
            trace.statement("local_38 = 0;");
            trace.statement("FUN_18004a120(plVar6);");
            trace.statement("local_60 = (undefined8 *)0x0;");
            trace.statement("puStack_58 = (undefined8 *)0x0;");
            trace.statement("local_50 = (undefined8 *)0x0;");
            trace.statement("FUN_18020cc60(&local_60,(longlong)plStack_40 - (longlong)local_48 >> 5);");
            trace.statement("plVar3 = plStack_40;");
            for (auto loop = trace.loop("for (plVar12 = local_48; plVar12 != plVar3; plVar12 = plVar12 + 4)"); loop.next(); ) {
                trace.statement("local_68 = plVar12;");
                if (trace.condition("if (0xf < (ulonglong)plVar12[3])")) {
                    trace.statement("local_68 = (longlong *)*plVar12;");
                }
                if (trace.condition("if (puStack_58 == local_50)")) {
                    trace.statement("FUN_180221c00(&local_60,puStack_58,&local_68);");
                } else {
                trace.statement("*puStack_58 = local_68;");
                trace.statement("puStack_58 = puStack_58 + 1;");
                }
            }
            trace.statement("cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);");
            if (trace.condition("if (cVar4 == '\\0')")) {
                LAB_18004f648: ;
                trace.statement("iVar10 = 0;");
                trace.statement("local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);");
            } else {
            trace.statement("dVar2 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);");
            trace.statement("iVar10 = (int)dVar2 + -1;");
            trace.statement("local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar10);");
            if (trace.condition("if (iVar10 < 0) goto LAB_18004f648; } iVar11 = (int)((longlong)puStack_58 - (longlong)local_60 >> 3); if (iVar11 <= iVar10)")) {
                trace.statement("iVar10 = iVar11 + -1;");
                trace.statement("local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar10);");
            }
            trace.statement("uVar5 = 0;");
            if (trace.condition("if (local_60 != puStack_58)")) {
                trace.statement("cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);");
                if (trace.condition("if (cVar4 == '\\0')")) {
                    trace.statement("pcVar9 = \"##combo\";");
                } else {
                trace.statement("pcVar8 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);");
                trace.statement("pcVar9 = \"##combo\";");
                if (trace.condition("if (pcVar8 != (char *)0x0)")) {
                    trace.statement("pcVar9 = pcVar8;");
                }
                }
                trace.statement("local_78 = iVar11;");
                trace.statement("uVar5 = FUN_1802b1200(pcVar9,&local_68);");
                trace.statement("iVar10 = (int)local_68;");
            }
            trace.statement("(**(code **)(*plVar6 + 0xf0))(plVar6,(double)(iVar10 + 1));");
            trace.statement("(**(code **)(*plVar6 + 0xf8))(plVar6,uVar5);");
            if (trace.condition("if (local_60 != (undefined8 *)0x0)")) {
                trace.statement("_Memory = local_60;");
                trace.statement("puVar13 = auStack_98;");
                if (trace.condition("if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) && (_Memory = (undefined8 *)local_60[-1], puVar13 = auStack_98, 0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (undefined8 *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar13 = auStack_90;");
                }
                trace.statement("*(undefined8 *)(puVar13 + -8) = 0x18004f74f;");
                trace.statement("free(_Memory);");
                trace.statement("*(undefined8 *)(puVar13 + 0x38) = 0;");
                trace.statement("*(undefined8 *)(puVar13 + 0x40) = 0;");
                trace.statement("*(undefined8 *)(puVar13 + 0x48) = 0;");
            }
            trace.statement("*(undefined8 *)(puVar13 + -8) = 0x18004f76b;");
            trace.statement("FUN_18020d5c0(puVar13 + 0x50);");
            trace.statement("uVar7 = 2;");
            trace.statement("puVar14 = puVar13;");
            LAB_18004f774: ;
            trace.statement("*(undefined8 *)(puVar14 + -8) = 0x18004f781;");
            trace.statement("return uVar7;");
            }
        }
    return kFunction_0x18004f4f0;
}

// 0x18004f7a0 FUN_18004f7a0
// source: re/dump/decompile/0x18004f7a0_FUN_18004f7a0.c
// size: 742 bytes; thunk: false
// body sha256: b4a28b77a69fe799b83be4e52639158040b58726d79ebdf7824e142362ce3f97
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004f7a0{
    "0x18004f7a0",
    "FUN_18004f7a0",
    R"F18004f7a0S(undefined FUN_18004f7a0())F18004f7a0S",
    R"B18004f7a0(// 0x18004f7a0  FUN_18004f7a0
// size=742 thunk=false
// signature: undefined FUN_18004f7a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004f7a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *_Memory;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined4 local_78;
  int local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  puVar13 = auStack_98;
  puVar14 = auStack_98;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
    uVar8 = 0;
    goto LAB_18004fa74;
  }
  local_68 = plVar7;
  if (DAT_1803ff8ec == '\0') {
    uVar8 = FUN_18004a240(param_2);
    puVar14 = auStack_98;
    goto LAB_18004fa74;
  }
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_18004a120(plVar7);
  local_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  FUN_18020cc60(&local_60,(longlong)plStack_40 - (longlong)local_48 >> 5);
  plVar3 = plStack_40;
  for (plVar12 = local_48; plVar12 != plVar3; plVar12 = plVar12 + 4) {
    local_68 = plVar12;
    if (0xf < (ulonglong)plVar12[3]) {
      local_68 = (longlong *)*plVar12;
    }
    if (puStack_58 == local_50) {
      FUN_180221c00(&local_60,puStack_58,&local_68);
    }
    else {
      *puStack_58 = local_68;
      puStack_58 = puStack_58 + 1;
    }
  }
  cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7);
  if (cVar4 == '\0') {
LAB_18004f8f9:
    iVar11 = 0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);
    iVar11 = (int)dVar2 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar11);
    if (iVar11 < 0) goto LAB_18004f8f9;
  }
  iVar6 = (int)((longlong)puStack_58 - (longlong)local_60 >> 3);
  if (iVar6 <= iVar11) {
    iVar11 = iVar6 + -1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar11);
  }
  uVar5 = 0;
  if (local_60 != puStack_58) {
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,4,3);
    if (cVar4 == '\0') {
      iVar11 = -1;
    }
    else {
      dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,4);
      iVar11 = (int)dVar2;
    }
    lVar15 = (longlong)puStack_58 - (longlong)local_60;
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);
    if (cVar4 == '\0') {
      puVar10 = &DAT_180343220;
    }
    else {
      puVar9 = (undefined *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);
      puVar10 = &DAT_180343220;
      if (puVar9 != (undefined *)0x0) {
        puVar10 = puVar9;
      }
    }
    local_78 = (undefined4)(lVar15 >> 3);
    local_70 = iVar11;
    uVar5 = FUN_1802c3bd0(puVar10,&local_68);
    iVar11 = (int)local_68;
  }
  (**(code **)(*plVar7 + 0xf0))(plVar7,(double)(iVar11 + 1));
  (**(code **)(*plVar7 + 0xf8))(plVar7,uVar5);
  if (local_60 != (undefined8 *)0x0) {
    _Memory = local_60;
    puVar13 = auStack_98;
    if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) &&
       (_Memory = (undefined8 *)local_60[-1], puVar13 = auStack_98,
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)_Memory)))) {
      _Memory = (undefined8 *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar13 = auStack_90;
    }
    *(undefined8 *)(puVar13 + -8) = 0x18004fa4f;
    free(_Memory);
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
  }
  *(undefined8 *)(puVar13 + -8) = 0x18004fa6b;
  FUN_18020d5c0(puVar13 + 0x50);
  uVar8 = 2;
  puVar14 = puVar13;
LAB_18004fa74:
  *(undefined8 *)(puVar14 + -8) = 0x18004fa81;
  return uVar8;
}


)B18004f7a0",
    "b4a28b77a69fe799b83be4e52639158040b58726d79ebdf7824e142362ce3f97",
    R"F18004f7a0C(FUN_180039770
FUN_18004a120
FUN_18004a240
FUN_18020cc60
FUN_18020d5c0
FUN_180221c00
FUN_1802c3bd0)F18004f7a0C",
    R"F18004f7a0D(LAB_18004f8f9
LAB_18004fa74
DAT_180343220
DAT_1803da4c0
DAT_1803ff8ec)F18004f7a0D",
    R"F18004f7a0T()F18004f7a0T",
    R"F18004f7a0F(45: if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
47: goto LAB_18004fa74;
50: if (DAT_1803ff8ec == '\0') {
53: goto LAB_18004fa74;
64: for (plVar12 = local_48; plVar12 != plVar3; plVar12 = plVar12 + 4) {
66: if (0xf < (ulonglong)plVar12[3]) {
69: if (puStack_58 == local_50) {
72: else {
78: if (cVar4 == '\0') {
79: LAB_18004f8f9:
83: else {
87: if (iVar11 < 0) goto LAB_18004f8f9;
90: if (iVar6 <= iVar11) {
95: if (local_60 != puStack_58) {
97: if (cVar4 == '\0') {
100: else {
106: if (cVar4 == '\0') {
109: else {
112: if (puVar9 != (undefined *)0x0) {
123: if (local_60 != (undefined8 *)0x0) {
126: if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) &&
144: LAB_18004fa74:
146: return uVar8;)F18004f7a0F",
    R"F18004f7a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_18004f8f9.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_18004fa74.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343220.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 77: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7);.
TODO: resolve the indirect call in body 84: dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);.
TODO: resolve the indirect call in body 96: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,4,3);.
TODO: resolve the indirect call in body 101: dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,4);.
TODO: resolve the indirect call in body 105: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);.
TODO: resolve the indirect call in body 110: puVar9 = (undefined *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);.
TODO: resolve the indirect call in body 121: (**(code **)(*plVar7 + 0xf0))(plVar7,(double)(iVar11 + 1));.
TODO: resolve the indirect call in body 122: (**(code **)(*plVar7 + 0xf8))(plVar7,uVar5);.
TODO: resolve the indirect call in body 130: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 131: (*pcVar1)();.)F18004f7a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004f7a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004f7a0", "FUN_18004f7a0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_18004f8f9.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_18004fa74.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343220.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 77: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7);.
    // TODO: resolve the indirect call in body 84: dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);.
    // TODO: resolve the indirect call in body 96: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,4,3);.
    // TODO: resolve the indirect call in body 101: dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,4);.
    // TODO: resolve the indirect call in body 105: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);.
    // TODO: resolve the indirect call in body 110: puVar9 = (undefined *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);.
    // TODO: resolve the indirect call in body 121: (**(code **)(*plVar7 + 0xf0))(plVar7,(double)(iVar11 + 1));.
    // TODO: resolve the indirect call in body 122: (**(code **)(*plVar7 + 0xf8))(plVar7,uVar5);.
    // TODO: resolve the indirect call in body 130: pcVar1 = (code *)swi(0x29);.
    // TODO: resolve the indirect call in body 131: (*pcVar1)();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a120", reinterpret_cast<const void*>(&image::FUN_18004a120));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_18020cc60", reinterpret_cast<const void*>(&image::FUN_18020cc60));
    trace.call_target("FUN_18020d5c0", reinterpret_cast<const void*>(&image::FUN_18020d5c0));
    trace.call_target("FUN_180221c00", reinterpret_cast<const void*>(&image::FUN_180221c00));
    trace.call_target("FUN_1802c3bd0", reinterpret_cast<const void*>(&image::FUN_1802c3bd0));
    trace.data_ref("DAT_180343220", static_cast<const void*>(&image::DAT_180343220));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: b4a28b77a69fe799b83be4e52639158040b58726d79ebdf7824e142362ce3f97
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004f7a0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("double dVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("char cVar4;");
            trace.statement("undefined1 uVar5;");
            trace.statement("int iVar6;");
            trace.statement("longlong *plVar7;");
            trace.statement("undefined8 uVar8;");
            trace.statement("undefined *puVar9;");
            trace.statement("undefined *puVar10;");
            trace.statement("undefined8 *_Memory;");
            trace.statement("int iVar11;");
            trace.statement("longlong *plVar12;");
            trace.statement("undefined1 *puVar13;");
            trace.statement("undefined1 *puVar14;");
            trace.statement("longlong lVar15;");
            trace.statement("undefined1 auStack_98 [8];");
            trace.statement("undefined1 auStack_90 [24];");
            trace.statement("undefined4 local_78;");
            trace.statement("int local_70;");
            trace.statement("longlong *local_68;");
            trace.statement("undefined8 *local_60;");
            trace.statement("undefined8 *puStack_58;");
            trace.statement("undefined8 *local_50;");
            trace.statement("longlong *local_48;");
            trace.statement("longlong *plStack_40;");
            trace.statement("undefined8 local_38;");
            trace.statement("ulonglong local_30;");
            trace.statement("puVar13 = auStack_98;");
            trace.statement("puVar14 = auStack_98;");
            trace.statement("local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_98;");
            trace.statement("plVar7 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2))")) {
                trace.statement("uVar8 = 0;");
                trace.statement("goto LAB_18004fa74;");
            }
            trace.statement("local_68 = plVar7;");
            if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                trace.statement("uVar8 = FUN_18004a240(param_2);");
                trace.statement("puVar14 = auStack_98;");
                trace.statement("goto LAB_18004fa74;");
            }
            trace.statement("local_48 = (longlong *)0x0;");
            trace.statement("plStack_40 = (longlong *)0x0;");
            trace.statement("local_38 = 0;");
            trace.statement("FUN_18004a120(plVar7);");
            trace.statement("local_60 = (undefined8 *)0x0;");
            trace.statement("puStack_58 = (undefined8 *)0x0;");
            trace.statement("local_50 = (undefined8 *)0x0;");
            trace.statement("FUN_18020cc60(&local_60,(longlong)plStack_40 - (longlong)local_48 >> 5);");
            trace.statement("plVar3 = plStack_40;");
            for (auto loop = trace.loop("for (plVar12 = local_48; plVar12 != plVar3; plVar12 = plVar12 + 4)"); loop.next(); ) {
                trace.statement("local_68 = plVar12;");
                if (trace.condition("if (0xf < (ulonglong)plVar12[3])")) {
                    trace.statement("local_68 = (longlong *)*plVar12;");
                }
                if (trace.condition("if (puStack_58 == local_50)")) {
                    trace.statement("FUN_180221c00(&local_60,puStack_58,&local_68);");
                } else {
                trace.statement("*puStack_58 = local_68;");
                trace.statement("puStack_58 = puStack_58 + 1;");
                }
            }
            trace.statement("cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7);");
            if (trace.condition("if (cVar4 == '\\0')")) {
                LAB_18004f8f9: ;
                trace.statement("iVar11 = 0;");
                trace.statement("local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);");
            } else {
            trace.statement("dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);");
            trace.statement("iVar11 = (int)dVar2 + -1;");
            trace.statement("local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar11);");
            if (trace.condition("if (iVar11 < 0) goto LAB_18004f8f9; } iVar6 = (int)((longlong)puStack_58 - (longlong)local_60 >> 3); if (iVar6 <= iVar11)")) {
                trace.statement("iVar11 = iVar6 + -1;");
                trace.statement("local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar11);");
            }
            trace.statement("uVar5 = 0;");
            if (trace.condition("if (local_60 != puStack_58)")) {
                trace.statement("cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,4,3);");
                if (trace.condition("if (cVar4 == '\\0')")) {
                    trace.statement("iVar11 = -1;");
                } else {
                trace.statement("dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,4);");
                trace.statement("iVar11 = (int)dVar2;");
                }
                trace.statement("lVar15 = (longlong)puStack_58 - (longlong)local_60;");
                trace.statement("cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);");
                if (trace.condition("if (cVar4 == '\\0')")) {
                    trace.statement("puVar10 = &DAT_180343220;");
                } else {
                trace.statement("puVar9 = (undefined *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);");
                trace.statement("puVar10 = &DAT_180343220;");
                if (trace.condition("if (puVar9 != (undefined *)0x0)")) {
                    trace.statement("puVar10 = puVar9;");
                }
                }
                trace.statement("local_78 = (undefined4)(lVar15 >> 3);");
                trace.statement("local_70 = iVar11;");
                trace.statement("uVar5 = FUN_1802c3bd0(puVar10,&local_68);");
                trace.statement("iVar11 = (int)local_68;");
            }
            trace.statement("(**(code **)(*plVar7 + 0xf0))(plVar7,(double)(iVar11 + 1));");
            trace.statement("(**(code **)(*plVar7 + 0xf8))(plVar7,uVar5);");
            if (trace.condition("if (local_60 != (undefined8 *)0x0)")) {
                trace.statement("_Memory = local_60;");
                trace.statement("puVar13 = auStack_98;");
                if (trace.condition("if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) && (_Memory = (undefined8 *)local_60[-1], puVar13 = auStack_98, 0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)_Memory))))")) {
                    trace.statement("_Memory = (undefined8 *)0x5;");
                    trace.statement("pcVar1 = (code *)swi(0x29);");
                    trace.statement("(*pcVar1)();");
                    trace.statement("puVar13 = auStack_90;");
                }
                trace.statement("*(undefined8 *)(puVar13 + -8) = 0x18004fa4f;");
                trace.statement("free(_Memory);");
                trace.statement("*(undefined8 *)(puVar13 + 0x38) = 0;");
                trace.statement("*(undefined8 *)(puVar13 + 0x40) = 0;");
                trace.statement("*(undefined8 *)(puVar13 + 0x48) = 0;");
            }
            trace.statement("*(undefined8 *)(puVar13 + -8) = 0x18004fa6b;");
            trace.statement("FUN_18020d5c0(puVar13 + 0x50);");
            trace.statement("uVar8 = 2;");
            trace.statement("puVar14 = puVar13;");
            LAB_18004fa74: ;
            trace.statement("*(undefined8 *)(puVar14 + -8) = 0x18004fa81;");
            trace.statement("return uVar8;");
            }
        }
    return kFunction_0x18004f7a0;
}

// 0x18004faa0 FUN_18004faa0
// source: re/dump/decompile/0x18004faa0_FUN_18004faa0.c
// size: 489 bytes; thunk: false
// body sha256: 868c7cd954e1971db06ef848210a713223034e8006aa4b9806167e5d0d923523
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004faa0{
    "0x18004faa0",
    "FUN_18004faa0",
    R"F18004faa0S(undefined FUN_18004faa0())F18004faa0S",
    R"B18004faa0(// 0x18004faa0  FUN_18004faa0
// size=489 thunk=false
// signature: undefined FUN_18004faa0()
// status: ok


undefined8 FUN_18004faa0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      uVar4 = FUN_18004a240(param_2);
      return uVar4;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 200))(plVar3,2);
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
    fVar9 = 0.0;
    if (cVar2 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
      fVar10 = (float)dVar8;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar2 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar9 = (float)dVar8;
    }
    local_res8 = CONCAT44(fVar10,fVar9);
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar2 == '\0') {
      iVar7 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      iVar7 = (int)dVar8;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar2 == '\0') {
      puVar6 = &DAT_18033e5ea;
    }
    else {
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_18033e5ea;
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
    }
    cVar2 = FUN_1802c1850(puVar6,cVar1,iVar7,&local_res8);
    if (cVar2 != '\0') {
      cVar1 = cVar1 == '\0';
    }
    (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);
    (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);
    return 2;
  }
  return 0;
}


)B18004faa0",
    "868c7cd954e1971db06ef848210a713223034e8006aa4b9806167e5d0d923523",
    R"F18004faa0C(FUN_180039770
FUN_18004a240
FUN_1802c1850)F18004faa0C",
    R"F18004faa0D(DAT_18033e5ea
DAT_1803ff8ec)F18004faa0D",
    R"F18004faa0T()F18004faa0T",
    R"F18004faa0F(24: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
25: if (DAT_1803ff8ec == '\0') {
27: return uVar4;
30: if (cVar1 == '\0') {
33: else {
38: if (cVar2 == '\0') {
41: else {
46: if (cVar2 != '\0') {
52: if (cVar2 == '\0') {
55: else {
60: if (cVar2 == '\0') {
63: else {
66: if (puVar5 != (undefined1 *)0x0) {
71: if (cVar2 != '\0') {
76: return 2;
78: return 0;)F18004faa0F",
    R"F18004faa0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 29: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);.
TODO: resolve the indirect call in body 34: cVar1 = (**(code **)(*plVar3 + 200))(plVar3,2);.
TODO: resolve the indirect call in body 36: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
TODO: resolve the indirect call in body 42: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
TODO: resolve the indirect call in body 45: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 47: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 51: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 56: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 59: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 64: puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 74: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);.
TODO: resolve the indirect call in body 75: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);.)F18004faa0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004faa0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004faa0", "FUN_18004faa0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 29: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);.
    // TODO: resolve the indirect call in body 34: cVar1 = (**(code **)(*plVar3 + 200))(plVar3,2);.
    // TODO: resolve the indirect call in body 36: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
    // TODO: resolve the indirect call in body 42: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
    // TODO: resolve the indirect call in body 45: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 47: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 51: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 56: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 59: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 64: puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 74: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);.
    // TODO: resolve the indirect call in body 75: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802c1850", reinterpret_cast<const void*>(&image::FUN_1802c1850));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 868c7cd954e1971db06ef848210a713223034e8006aa4b9806167e5d0d923523
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004faa0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined1 *puVar5;");
            trace.statement("undefined1 *puVar6;");
            trace.statement("int iVar7;");
            trace.statement("double dVar8;");
            trace.statement("float fVar9;");
            trace.statement("float fVar10;");
            trace.statement("undefined8 local_res8;");
            trace.statement("local_res8 = param_1;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("uVar4 = FUN_18004a240(param_2);");
                    trace.statement("return uVar4;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("cVar1 = '\\0';");
                } else {
                trace.statement("cVar1 = (**(code **)(*plVar3 + 200))(plVar3,2);");
                }
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);");
                trace.statement("fVar9 = 0.0;");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("fVar10 = 0.0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);");
                trace.statement("fVar10 = (float)dVar8;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
                    trace.statement("fVar9 = (float)dVar8;");
                }
                trace.statement("local_res8 = CONCAT44(fVar10,fVar9);");
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("iVar7 = 0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
                trace.statement("iVar7 = (int)dVar8;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("puVar6 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
                trace.statement("puVar6 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar5 != (undefined1 *)0x0)")) {
                    trace.statement("puVar6 = puVar5;");
                }
                }
                trace.statement("cVar2 = FUN_1802c1850(puVar6,cVar1,iVar7,&local_res8);");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("cVar1 = cVar1 == '\\0';");
                }
                trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);");
                trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004faa0;
}

// 0x18004fca0 FUN_18004fca0
// source: re/dump/decompile/0x18004fca0_FUN_18004fca0.c
// size: 477 bytes; thunk: false
// body sha256: faf4baf9b5039402dd37eb186b36aaff0dbcc0cd2b4f11592dfa3fe7e75ea889
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004fca0{
    "0x18004fca0",
    "FUN_18004fca0",
    R"F18004fca0S(undefined FUN_18004fca0())F18004fca0S",
    R"B18004fca0(// 0x18004fca0  FUN_18004fca0
// size=477 thunk=false
// signature: undefined FUN_18004fca0()
// status: ok


undefined8 FUN_18004fca0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  float local_res18;
  float local_res1c;
  
  local_res8 = param_1;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      uVar5 = FUN_18004a240(param_2);
      return uVar5;
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
    if (cVar1 == '\0') {
      iVar3 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
      iVar3 = (int)dVar8;
    }
    local_res8 = CONCAT44(local_res8._4_4_,iVar3);
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,5,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 200))(plVar4,5);
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
    fVar9 = 0.0;
    if (cVar1 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      fVar9 = (float)dVar8;
    }
    local_res18 = fVar9;
    local_res1c = fVar10;
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_180343228;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar7 = &DAT_180343228;
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar6;
      }
    }
    uVar2 = FUN_1802d31a0(puVar7,&local_res8,&local_res18,uVar2);
    (**(code **)(*plVar4 + 0xf0))(plVar4,(double)(int)local_res8);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar2);
    return 2;
  }
  return 0;
}


)B18004fca0",
    "faf4baf9b5039402dd37eb186b36aaff0dbcc0cd2b4f11592dfa3fe7e75ea889",
    R"F18004fca0C(FUN_180039770
FUN_18004a240
FUN_1802d31a0)F18004fca0C",
    R"F18004fca0D(DAT_180343228
DAT_1803ff8ec)F18004fca0D",
    R"F18004fca0T()F18004fca0T",
    R"F18004fca0F(26: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
27: if (DAT_1803ff8ec == '\0') {
29: return uVar5;
32: if (cVar1 == '\0') {
35: else {
41: if (cVar1 == '\0') {
44: else {
49: if (cVar1 == '\0') {
52: else {
57: if (cVar1 != '\0') {
64: if (cVar1 == '\0') {
67: else {
70: if (puVar6 != (undefined *)0x0) {
77: return 2;
79: return 0;)F18004fca0F",
    R"F18004fca0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343228.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 31: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);.
TODO: resolve the indirect call in body 36: dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
TODO: resolve the indirect call in body 40: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,5,1);.
TODO: resolve the indirect call in body 45: uVar2 = (**(code **)(*plVar4 + 200))(plVar4,5);.
TODO: resolve the indirect call in body 47: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);.
TODO: resolve the indirect call in body 53: dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);.
TODO: resolve the indirect call in body 56: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
TODO: resolve the indirect call in body 58: dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 63: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 68: puVar6 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 75: (**(code **)(*plVar4 + 0xf0))(plVar4,(double)(int)local_res8);.
TODO: resolve the indirect call in body 76: (**(code **)(*plVar4 + 0xf8))(plVar4,uVar2);.)F18004fca0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004fca0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004fca0", "FUN_18004fca0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343228.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 31: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);.
    // TODO: resolve the indirect call in body 36: dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
    // TODO: resolve the indirect call in body 40: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,5,1);.
    // TODO: resolve the indirect call in body 45: uVar2 = (**(code **)(*plVar4 + 200))(plVar4,5);.
    // TODO: resolve the indirect call in body 47: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);.
    // TODO: resolve the indirect call in body 53: dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);.
    // TODO: resolve the indirect call in body 56: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
    // TODO: resolve the indirect call in body 58: dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
    // TODO: resolve the indirect call in body 63: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 68: puVar6 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 75: (**(code **)(*plVar4 + 0xf0))(plVar4,(double)(int)local_res8);.
    // TODO: resolve the indirect call in body 76: (**(code **)(*plVar4 + 0xf8))(plVar4,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a240", reinterpret_cast<const void*>(&image::FUN_18004a240));
    trace.call_target("FUN_1802d31a0", reinterpret_cast<const void*>(&image::FUN_1802d31a0));
    trace.data_ref("DAT_180343228", static_cast<const void*>(&image::DAT_180343228));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: faf4baf9b5039402dd37eb186b36aaff0dbcc0cd2b4f11592dfa3fe7e75ea889
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004fca0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("undefined *puVar7;");
            trace.statement("double dVar8;");
            trace.statement("float fVar9;");
            trace.statement("float fVar10;");
            trace.statement("undefined8 local_res8;");
            trace.statement("float local_res18;");
            trace.statement("float local_res1c;");
            trace.statement("local_res8 = param_1;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("uVar5 = FUN_18004a240(param_2);");
                    trace.statement("return uVar5;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("iVar3 = 0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);");
                trace.statement("iVar3 = (int)dVar8;");
                }
                trace.statement("local_res8 = CONCAT44(local_res8._4_4_,iVar3);");
                trace.statement("cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,5,1);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("uVar2 = 0;");
                } else {
                trace.statement("uVar2 = (**(code **)(*plVar4 + 200))(plVar4,5);");
                }
                trace.statement("cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);");
                trace.statement("fVar9 = 0.0;");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("fVar10 = 0.0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);");
                trace.statement("fVar10 = (float)dVar8;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);");
                    trace.statement("fVar9 = (float)dVar8;");
                }
                trace.statement("local_res18 = fVar9;");
                trace.statement("local_res1c = fVar10;");
                trace.statement("cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("puVar7 = &DAT_180343228;");
                } else {
                trace.statement("puVar6 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
                trace.statement("puVar7 = &DAT_180343228;");
                if (trace.condition("if (puVar6 != (undefined *)0x0)")) {
                    trace.statement("puVar7 = puVar6;");
                }
                }
                trace.statement("uVar2 = FUN_1802d31a0(puVar7,&local_res8,&local_res18,uVar2);");
                trace.statement("(**(code **)(*plVar4 + 0xf0))(plVar4,(double)(int)local_res8);");
                trace.statement("(**(code **)(*plVar4 + 0xf8))(plVar4,uVar2);");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004fca0;
}

// 0x18004fe90 FUN_18004fe90
// source: re/dump/decompile/0x18004fe90_FUN_18004fe90.c
// size: 423 bytes; thunk: false
// body sha256: b7697f6876d1e26860e1d7b91a8f5ccb0fee24aff6476a40b72bd0d9a0e11261
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18004fe90{
    "0x18004fe90",
    "FUN_18004fe90",
    R"F18004fe90S(undefined FUN_18004fe90())F18004fe90S",
    R"B18004fe90(// 0x18004fe90  FUN_18004fe90
// size=423 thunk=false
// signature: undefined FUN_18004fe90()
// status: ok


undefined8 FUN_18004fe90(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  double dVar11;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_1)) {
    pcVar1 = *(code **)(*plVar7 + 0xf8);
    if (DAT_1803ff8ec == '\0') {
      (*pcVar1)(plVar7,0);
      return 1;
    }
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,2,3);
    if (cVar4 == '\0') {
      uVar10 = 0;
    }
    else {
      dVar11 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);
      uVar10 = (uint)dVar11;
    }
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);
    if (cVar4 == '\0') {
      puVar9 = &DAT_18033e5ea;
    }
    else {
      puVar8 = (undefined1 *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);
      puVar9 = &DAT_18033e5ea;
      if (puVar8 != (undefined1 *)0x0) {
        puVar9 = puVar8;
      }
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
    plVar3 = *(longlong **)(lVar2 + 0x1520);
    if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
      iVar6 = FUN_180268980(puVar9,0,*(undefined4 *)
                                      (plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
      if (*(int *)(*plVar3 + 0x1578) == iVar6) {
        FUN_1802899e0(iVar6,0xb,puVar9);
      }
      uVar5 = FUN_1802bff90(iVar6,uVar10 | 0x1a,puVar9,0);
    }
    else {
      uVar5 = 0;
    }
    (*pcVar1)(plVar7,uVar5);
    return 1;
  }
  return 0;
}


)B18004fe90",
    "b7697f6876d1e26860e1d7b91a8f5ccb0fee24aff6476a40b72bd0d9a0e11261",
    R"F18004fe90C(FUN_180039770
FUN_180268980
FUN_1802899e0
FUN_1802bff90)F18004fe90C",
    R"F18004fe90D(DAT_18033e5ea
DAT_1803ff8ec)F18004fe90D",
    R"F18004fe90T()F18004fe90T",
    R"F18004fe90F(23: if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_1)) {
25: if (DAT_1803ff8ec == '\0') {
27: return 1;
30: if (cVar4 == '\0') {
33: else {
38: if (cVar4 == '\0') {
41: else {
44: if (puVar8 != (undefined1 *)0x0) {
49: if (*(char *)(lVar2 + 0x10) == '\0') {
55: if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
58: if (*(int *)(*plVar3 + 0x1578) == iVar6) {
63: else {
67: return 1;
69: return 0;)F18004fe90F",
    R"F18004fe90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar7 + 0xf8);.
TODO: resolve the indirect call in body 26: (*pcVar1)(plVar7,0);.
TODO: resolve the indirect call in body 29: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,2,3);.
TODO: resolve the indirect call in body 34: dVar11 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);.
TODO: resolve the indirect call in body 37: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);.
TODO: resolve the indirect call in body 42: puVar8 = (undefined1 *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);.
TODO: resolve the indirect call in body 66: (*pcVar1)(plVar7,uVar5);.)F18004fe90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18004fe90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x18004fe90", "FUN_18004fe90");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar7 + 0xf8);.
    // TODO: resolve the indirect call in body 26: (*pcVar1)(plVar7,0);.
    // TODO: resolve the indirect call in body 29: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,2,3);.
    // TODO: resolve the indirect call in body 34: dVar11 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);.
    // TODO: resolve the indirect call in body 37: cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);.
    // TODO: resolve the indirect call in body 42: puVar8 = (undefined1 *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);.
    // TODO: resolve the indirect call in body 66: (*pcVar1)(plVar7,uVar5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180268980", reinterpret_cast<const void*>(&image::FUN_180268980));
    trace.call_target("FUN_1802899e0", reinterpret_cast<const void*>(&image::FUN_1802899e0));
    trace.call_target("FUN_1802bff90", reinterpret_cast<const void*>(&image::FUN_1802bff90));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: b7697f6876d1e26860e1d7b91a8f5ccb0fee24aff6476a40b72bd0d9a0e11261
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_18004fe90(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("char cVar4;");
            trace.statement("undefined1 uVar5;");
            trace.statement("int iVar6;");
            trace.statement("longlong *plVar7;");
            trace.statement("undefined1 *puVar8;");
            trace.statement("undefined1 *puVar9;");
            trace.statement("uint uVar10;");
            trace.statement("double dVar11;");
            trace.statement("plVar7 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar7 + 0xf8);");
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(*pcVar1)(plVar7,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,2,3);");
                if (trace.condition("if (cVar4 == '\\0')")) {
                    trace.statement("uVar10 = 0;");
                } else {
                trace.statement("dVar11 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);");
                trace.statement("uVar10 = (uint)dVar11;");
                }
                trace.statement("cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,1,4);");
                if (trace.condition("if (cVar4 == '\\0')")) {
                    trace.statement("puVar9 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar8 = (undefined1 *)(**(code **)(*plVar7 + 0xb8))(plVar7,1,0);");
                trace.statement("puVar9 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar8 != (undefined1 *)0x0)")) {
                    trace.statement("puVar9 = puVar8;");
                }
                }
                trace.statement("lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar2 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                trace.statement("lVar2 = *(longlong *)(lVar2 + 0xec0);");
                trace.statement("*(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;");
                trace.statement("plVar3 = *(longlong **)(lVar2 + 0x1520);");
                if (trace.condition("if (*(char *)((longlong)plVar3 + 0xd1) == '\\0')")) {
                    trace.statement("iVar6 = FUN_180268980(puVar9,0,*(undefined4 *)");
                    trace.statement("(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));");
                    if (trace.condition("if (*(int *)(*plVar3 + 0x1578) == iVar6)")) {
                        trace.statement("FUN_1802899e0(iVar6,0xb,puVar9);");
                    }
                    trace.statement("uVar5 = FUN_1802bff90(iVar6,uVar10 | 0x1a,puVar9,0);");
                } else {
                trace.statement("uVar5 = 0;");
                }
                trace.statement("(*pcVar1)(plVar7,uVar5);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x18004fe90;
}

// 0x180050040 FUN_180050040
// source: re/dump/decompile/0x180050040_FUN_180050040.c
// size: 439 bytes; thunk: false
// body sha256: 93d8a2494c373ae353eb4c554e9d584dc30a4df4a31d521dd37e192c4a5ed2ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050040{
    "0x180050040",
    "FUN_180050040",
    R"F180050040S(undefined FUN_180050040())F180050040S",
    R"B180050040(// 0x180050040  FUN_180050040
// size=439 thunk=false
// signature: undefined FUN_180050040()
// status: ok


undefined8 FUN_180050040(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  double dVar9;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar5 + 0xf8))(plVar5,0);
      return 1;
    }
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);
    if (cVar3 == '\0') {
      iVar8 = 0;
    }
    else {
      dVar9 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);
      iVar8 = (int)dVar9;
    }
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,4);
    if (cVar3 == '\0') {
      puVar7 = &DAT_18033e5ea;
    }
    else {
      puVar6 = (undefined1 *)(**(code **)(*plVar5 + 0xb8))(plVar5,1,0);
      puVar7 = &DAT_18033e5ea;
      if (puVar6 != (undefined1 *)0x0) {
        puVar7 = puVar6;
      }
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
    plVar2 = *(longlong **)(lVar1 + 0x1520);
    if (*(char *)((longlong)plVar2 + 0xd1) == '\0') {
      iVar4 = FUN_180268980(puVar7,0,*(undefined4 *)
                                      (plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
      if (*(int *)(*plVar2 + 0x1578) == iVar4) {
        FUN_1802899e0(iVar4,0xb,puVar7);
      }
      cVar3 = FUN_1802bff90(iVar4,iVar8,puVar7,0);
      if (cVar3 != '\0') {
        FUN_180049be0(8);
      }
    }
    else {
      cVar3 = '\0';
    }
    (**(code **)(*plVar5 + 0xf8))(plVar5,cVar3);
    return 1;
  }
  return 0;
}


)B180050040",
    "93d8a2494c373ae353eb4c554e9d584dc30a4df4a31d521dd37e192c4a5ed2ab",
    R"F180050040C(FUN_180039770
FUN_180049be0
FUN_180268980
FUN_1802899e0
FUN_1802bff90)F180050040C",
    R"F180050040D(DAT_18033e5ea
DAT_1803ff8ec)F180050040D",
    R"F180050040T()F180050040T",
    R"F180050040F(21: if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
22: if (DAT_1803ff8ec == '\0') {
24: return 1;
27: if (cVar3 == '\0') {
30: else {
35: if (cVar3 == '\0') {
38: else {
41: if (puVar6 != (undefined1 *)0x0) {
46: if (*(char *)(lVar1 + 0x10) == '\0') {
52: if (*(char *)((longlong)plVar2 + 0xd1) == '\0') {
55: if (*(int *)(*plVar2 + 0x1578) == iVar4) {
59: if (cVar3 != '\0') {
63: else {
67: return 1;
69: return 0;)F180050040F",
    R"F180050040U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar5 + 0xf8))(plVar5,0);.
TODO: resolve the indirect call in body 26: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);.
TODO: resolve the indirect call in body 31: dVar9 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);.
TODO: resolve the indirect call in body 34: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,4);.
TODO: resolve the indirect call in body 39: puVar6 = (undefined1 *)(**(code **)(*plVar5 + 0xb8))(plVar5,1,0);.
TODO: resolve the indirect call in body 66: (**(code **)(*plVar5 + 0xf8))(plVar5,cVar3);.)F180050040U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050040() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050040", "FUN_180050040");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 23: (**(code **)(*plVar5 + 0xf8))(plVar5,0);.
    // TODO: resolve the indirect call in body 26: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);.
    // TODO: resolve the indirect call in body 31: dVar9 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);.
    // TODO: resolve the indirect call in body 34: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,4);.
    // TODO: resolve the indirect call in body 39: puVar6 = (undefined1 *)(**(code **)(*plVar5 + 0xb8))(plVar5,1,0);.
    // TODO: resolve the indirect call in body 66: (**(code **)(*plVar5 + 0xf8))(plVar5,cVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049be0", reinterpret_cast<const void*>(&image::FUN_180049be0));
    trace.call_target("FUN_180268980", reinterpret_cast<const void*>(&image::FUN_180268980));
    trace.call_target("FUN_1802899e0", reinterpret_cast<const void*>(&image::FUN_1802899e0));
    trace.call_target("FUN_1802bff90", reinterpret_cast<const void*>(&image::FUN_1802bff90));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 93d8a2494c373ae353eb4c554e9d584dc30a4df4a31d521dd37e192c4a5ed2ab
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050040(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("char cVar3;");
            trace.statement("int iVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("undefined1 *puVar6;");
            trace.statement("undefined1 *puVar7;");
            trace.statement("int iVar8;");
            trace.statement("double dVar9;");
            trace.statement("plVar5 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(**(code **)(*plVar5 + 0xf8))(plVar5,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);");
                if (trace.condition("if (cVar3 == '\\0')")) {
                    trace.statement("iVar8 = 0;");
                } else {
                trace.statement("dVar9 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);");
                trace.statement("iVar8 = (int)dVar9;");
                }
                trace.statement("cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,4);");
                if (trace.condition("if (cVar3 == '\\0')")) {
                    trace.statement("puVar7 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar6 = (undefined1 *)(**(code **)(*plVar5 + 0xb8))(plVar5,1,0);");
                trace.statement("puVar7 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar6 != (undefined1 *)0x0)")) {
                    trace.statement("puVar7 = puVar6;");
                }
                }
                trace.statement("lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar1 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                trace.statement("lVar1 = *(longlong *)(lVar1 + 0xec0);");
                trace.statement("*(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;");
                trace.statement("plVar2 = *(longlong **)(lVar1 + 0x1520);");
                if (trace.condition("if (*(char *)((longlong)plVar2 + 0xd1) == '\\0')")) {
                    trace.statement("iVar4 = FUN_180268980(puVar7,0,*(undefined4 *)");
                    trace.statement("(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));");
                    if (trace.condition("if (*(int *)(*plVar2 + 0x1578) == iVar4)")) {
                        trace.statement("FUN_1802899e0(iVar4,0xb,puVar7);");
                    }
                    trace.statement("cVar3 = FUN_1802bff90(iVar4,iVar8,puVar7,0);");
                    if (trace.condition("if (cVar3 != '\\0')")) {
                        trace.statement("FUN_180049be0(8);");
                    }
                } else {
                trace.statement("cVar3 = '\\0';");
                }
                trace.statement("(**(code **)(*plVar5 + 0xf8))(plVar5,cVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050040;
}

// 0x180050200 FUN_180050200
// source: re/dump/decompile/0x180050200_FUN_180050200.c
// size: 65 bytes; thunk: false
// body sha256: c3ae31d25fedff35b9a7bfea3bef150592a788f957733dae625a6480b705d8ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050200{
    "0x180050200",
    "FUN_180050200",
    R"F180050200S(undefined FUN_180050200())F180050200S",
    R"B180050200(// 0x180050200  FUN_180050200
// size=65 thunk=false
// signature: undefined FUN_180050200()
// status: ok


undefined8 FUN_180050200(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(8,"TreePop");
    if (cVar1 != '\0') {
      FUN_1802c1650();
    }
  }
  return 0;
}


)B180050200",
    "c3ae31d25fedff35b9a7bfea3bef150592a788f957733dae625a6480b705d8ac",
    R"F180050200C(FUN_180039770
FUN_180049c40
FUN_1802c1650)F180050200C",
    R"F180050200D(DAT_1803ff8ec)F180050200D",
    R"F180050200T("TreePop")F180050200T",
    R"F180050200F(14: if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: if (cVar1 != '\0') {
20: return 0;)F180050200F",
    R"F180050200U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F180050200U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050200() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050200", "FUN_180050200");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049c40", reinterpret_cast<const void*>(&image::FUN_180049c40));
    trace.call_target("FUN_1802c1650", reinterpret_cast<const void*>(&image::FUN_1802c1650));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("TreePop");
    // body sha256: c3ae31d25fedff35b9a7bfea3bef150592a788f957733dae625a6480b705d8ac
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050200(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.condition("if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = FUN_180049c40(8,\"TreePop\");");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_1802c1650();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050200;
}

// 0x180050250 FUN_180050250
// source: re/dump/decompile/0x180050250_FUN_180050250.c
// size: 634 bytes; thunk: false
// body sha256: ef24552f409b79382f42ee7c245af26658ad3e5e27f4e3faaee5a655cea42fb4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050250{
    "0x180050250",
    "FUN_180050250",
    R"F180050250S(undefined FUN_180050250())F180050250S",
    R"B180050250(// 0x180050250  FUN_180050250
// size=634 thunk=false
// signature: undefined FUN_180050250()
// status: ok


undefined8 FUN_180050250(undefined8 param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  int *piVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar6 + 0xf8))(plVar6,0);
      return 1;
    }
    cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);
    if (cVar4 == '\0') {
      uVar11 = 0;
    }
    else {
      dVar13 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);
      uVar11 = (uint)dVar13;
    }
    cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);
    if (cVar4 == '\0') {
      pcVar10 = "##tabs";
    }
    else {
      pcVar7 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);
      pcVar10 = "##tabs";
      if (pcVar7 != (char *)0x0) {
        pcVar10 = pcVar7;
      }
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    plVar3 = *(longlong **)(lVar2 + 0x1520);
    if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
      iVar5 = FUN_180268980(pcVar10,0,
                            *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
      if (*(int *)(*plVar3 + 0x1578) == iVar5) {
        FUN_1802899e0(iVar5,0xb,pcVar10);
      }
      piVar8 = (int *)FUN_180269290(lVar2 + 0x23e8,iVar5);
      if (*piVar8 == -1) {
        *piVar8 = *(int *)(lVar2 + 0x23f8);
        lVar9 = FUN_1802cf300(lVar2 + 0x23d8);
      }
      else {
        lVar9 = (longlong)*piVar8 * 0xb0 + *(longlong *)(lVar2 + 0x23e0);
      }
      local_24 = *(float *)((longlong)plVar3 + 0x11c);
      fVar12 = *(float *)(lVar2 + 0xcc8);
      local_28 = *(float *)(plVar3 + 0x23);
      local_20 = *(float *)(plVar3 + 0x4a);
      fVar1 = *(float *)(lVar2 + 0x1238);
      *(int *)(lVar9 + 0x1c) = iVar5;
      local_1c = local_24 + fVar1 + fVar12 + fVar12;
      *(float *)(lVar9 + 0x74) = local_28 - (float)(int)(*(float *)(plVar3 + 0xb) * DAT_180380ac0);
      fVar12 = (float)(int)(*(float *)(plVar3 + 0xb) * DAT_180380ac0) + local_20;
      *(float *)(lVar9 + 0x78) = fVar12;
      cVar4 = FUN_1802c49e0(fVar12,&local_28,uVar11 | 0x200000);
      if (cVar4 != '\0') {
        FUN_180049be0(4);
      }
    }
    else {
      cVar4 = '\0';
    }
    (**(code **)(*plVar6 + 0xf8))(plVar6,cVar4);
    return 1;
  }
  return 0;
}


)B180050250",
    "ef24552f409b79382f42ee7c245af26658ad3e5e27f4e3faaee5a655cea42fb4",
    R"F180050250C(FUN_180039770
FUN_180049be0
FUN_180268980
FUN_180269290
FUN_1802899e0
FUN_1802c49e0
FUN_1802cf300)F180050250C",
    R"F180050250D(DAT_180380ac0
DAT_1803ff8ec)F180050250D",
    R"F180050250T("##tabs")F180050250T",
    R"F180050250F(29: if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
30: if (DAT_1803ff8ec == '\0') {
32: return 1;
35: if (cVar4 == '\0') {
38: else {
43: if (cVar4 == '\0') {
46: else {
49: if (pcVar7 != (char *)0x0) {
54: if (*(char *)(lVar2 + 0x10) == '\0') {
59: if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
62: if (*(int *)(*plVar3 + 0x1578) == iVar5) {
66: if (*piVar8 == -1) {
70: else {
84: if (cVar4 != '\0') {
88: else {
92: return 1;
94: return 0;)F180050250F",
    R"F180050250U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380ac0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar6 + 0xf8))(plVar6,0);.
TODO: resolve the indirect call in body 34: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);.
TODO: resolve the indirect call in body 39: dVar13 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);.
TODO: resolve the indirect call in body 42: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);.
TODO: resolve the indirect call in body 47: pcVar7 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);.
TODO: resolve the indirect call in body 91: (**(code **)(*plVar6 + 0xf8))(plVar6,cVar4);.)F180050250U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050250() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050250", "FUN_180050250");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380ac0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 31: (**(code **)(*plVar6 + 0xf8))(plVar6,0);.
    // TODO: resolve the indirect call in body 34: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);.
    // TODO: resolve the indirect call in body 39: dVar13 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);.
    // TODO: resolve the indirect call in body 42: cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);.
    // TODO: resolve the indirect call in body 47: pcVar7 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);.
    // TODO: resolve the indirect call in body 91: (**(code **)(*plVar6 + 0xf8))(plVar6,cVar4);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049be0", reinterpret_cast<const void*>(&image::FUN_180049be0));
    trace.call_target("FUN_180268980", reinterpret_cast<const void*>(&image::FUN_180268980));
    trace.call_target("FUN_180269290", reinterpret_cast<const void*>(&image::FUN_180269290));
    trace.call_target("FUN_1802899e0", reinterpret_cast<const void*>(&image::FUN_1802899e0));
    trace.call_target("FUN_1802c49e0", reinterpret_cast<const void*>(&image::FUN_1802c49e0));
    trace.call_target("FUN_1802cf300", reinterpret_cast<const void*>(&image::FUN_1802cf300));
    trace.data_ref("DAT_180380ac0", static_cast<const void*>(&image::DAT_180380ac0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("##tabs");
    // body sha256: ef24552f409b79382f42ee7c245af26658ad3e5e27f4e3faaee5a655cea42fb4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050250(undefined8 param_1,longlong param_2)");
        {
            trace.statement("float fVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("char cVar4;");
            trace.statement("int iVar5;");
            trace.statement("longlong *plVar6;");
            trace.statement("char *pcVar7;");
            trace.statement("int *piVar8;");
            trace.statement("longlong lVar9;");
            trace.statement("char *pcVar10;");
            trace.statement("uint uVar11;");
            trace.statement("float fVar12;");
            trace.statement("double dVar13;");
            trace.statement("float local_28;");
            trace.statement("float local_24;");
            trace.statement("float local_20;");
            trace.statement("float local_1c;");
            trace.statement("plVar6 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(**(code **)(*plVar6 + 0xf8))(plVar6,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);");
                if (trace.condition("if (cVar4 == '\\0')")) {
                    trace.statement("uVar11 = 0;");
                } else {
                trace.statement("dVar13 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);");
                trace.statement("uVar11 = (uint)dVar13;");
                }
                trace.statement("cVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,1,4);");
                if (trace.condition("if (cVar4 == '\\0')")) {
                    trace.statement("pcVar10 = \"##tabs\";");
                } else {
                trace.statement("pcVar7 = (char *)(**(code **)(*plVar6 + 0xb8))(plVar6,1,0);");
                trace.statement("pcVar10 = \"##tabs\";");
                if (trace.condition("if (pcVar7 != (char *)0x0)")) {
                    trace.statement("pcVar10 = pcVar7;");
                }
                }
                trace.statement("lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar2 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                trace.statement("lVar2 = *(longlong *)(lVar2 + 0xec0);");
                trace.statement("plVar3 = *(longlong **)(lVar2 + 0x1520);");
                if (trace.condition("if (*(char *)((longlong)plVar3 + 0xd1) == '\\0')")) {
                    trace.statement("iVar5 = FUN_180268980(pcVar10,0,");
                    trace.statement("*(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));");
                    if (trace.condition("if (*(int *)(*plVar3 + 0x1578) == iVar5)")) {
                        trace.statement("FUN_1802899e0(iVar5,0xb,pcVar10);");
                    }
                    trace.statement("piVar8 = (int *)FUN_180269290(lVar2 + 0x23e8,iVar5);");
                    if (trace.condition("if (*piVar8 == -1)")) {
                        trace.statement("*piVar8 = *(int *)(lVar2 + 0x23f8);");
                        trace.statement("lVar9 = FUN_1802cf300(lVar2 + 0x23d8);");
                    } else {
                    trace.statement("lVar9 = (longlong)*piVar8 * 0xb0 + *(longlong *)(lVar2 + 0x23e0);");
                    }
                    trace.statement("local_24 = *(float *)((longlong)plVar3 + 0x11c);");
                    trace.statement("fVar12 = *(float *)(lVar2 + 0xcc8);");
                    trace.statement("local_28 = *(float *)(plVar3 + 0x23);");
                    trace.statement("local_20 = *(float *)(plVar3 + 0x4a);");
                    trace.statement("fVar1 = *(float *)(lVar2 + 0x1238);");
                    trace.statement("*(int *)(lVar9 + 0x1c) = iVar5;");
                    trace.statement("local_1c = local_24 + fVar1 + fVar12 + fVar12;");
                    trace.statement("*(float *)(lVar9 + 0x74) = local_28 - (float)(int)(*(float *)(plVar3 + 0xb) * DAT_180380ac0);");
                    trace.statement("fVar12 = (float)(int)(*(float *)(plVar3 + 0xb) * DAT_180380ac0) + local_20;");
                    trace.statement("*(float *)(lVar9 + 0x78) = fVar12;");
                    trace.statement("cVar4 = FUN_1802c49e0(fVar12,&local_28,uVar11 | 0x200000);");
                    if (trace.condition("if (cVar4 != '\\0')")) {
                        trace.statement("FUN_180049be0(4);");
                    }
                } else {
                trace.statement("cVar4 = '\\0';");
                }
                trace.statement("(**(code **)(*plVar6 + 0xf8))(plVar6,cVar4);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050250;
}

// 0x1800504e0 FUN_1800504e0
// source: re/dump/decompile/0x1800504e0_FUN_1800504e0.c
// size: 65 bytes; thunk: false
// body sha256: 175b54e9696573209695bc72dc1934c70f2d11a6fba4286b96049ff062c02459
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800504e0{
    "0x1800504e0",
    "FUN_1800504e0",
    R"F1800504e0S(undefined FUN_1800504e0())F1800504e0S",
    R"B1800504e0(// 0x1800504e0  FUN_1800504e0
// size=65 thunk=false
// signature: undefined FUN_1800504e0()
// status: ok


undefined8 FUN_1800504e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(4,"EndTabBar");
    if (cVar1 != '\0') {
      FUN_1802c4d20();
    }
  }
  return 0;
}


)B1800504e0",
    "175b54e9696573209695bc72dc1934c70f2d11a6fba4286b96049ff062c02459",
    R"F1800504e0C(FUN_180039770
FUN_180049c40
FUN_1802c4d20)F1800504e0C",
    R"F1800504e0D(DAT_1803ff8ec)F1800504e0D",
    R"F1800504e0T("EndTabBar")F1800504e0T",
    R"F1800504e0F(14: if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: if (cVar1 != '\0') {
20: return 0;)F1800504e0F",
    R"F1800504e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F1800504e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800504e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800504e0", "FUN_1800504e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049c40", reinterpret_cast<const void*>(&image::FUN_180049c40));
    trace.call_target("FUN_1802c4d20", reinterpret_cast<const void*>(&image::FUN_1802c4d20));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("EndTabBar");
    // body sha256: 175b54e9696573209695bc72dc1934c70f2d11a6fba4286b96049ff062c02459
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800504e0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.condition("if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = FUN_180049c40(4,\"EndTabBar\");");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_1802c4d20();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800504e0;
}

// 0x180050530 FUN_180050530
// source: re/dump/decompile/0x180050530_FUN_180050530.c
// size: 426 bytes; thunk: false
// body sha256: 8ada566fac9fb7b72026838486ca760426a096cf7f45626b02433d931eeb8098
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050530{
    "0x180050530",
    "FUN_180050530",
    R"F180050530S(undefined FUN_180050530())F180050530S",
    R"B180050530(// 0x180050530  FUN_180050530
// size=426 thunk=false
// signature: undefined FUN_180050530()
// status: ok


undefined8 FUN_180050530(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  double dVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  if (DAT_1803ff8ec == '\0') {
    (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    return 1;
  }
  cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    dVar7 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
    uVar5 = (uint)dVar7;
  }
  cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
  if (cVar2 == '\0') {
    puVar6 = &DAT_18034324c;
  }
  else {
    puVar4 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
    puVar6 = &DAT_18034324c;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(*(longlong *)(lVar1 + 0x1520) + 0xd1) == '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x23d0);
    if (lVar1 != 0) {
      cVar2 = FUN_1802c6840(lVar1,puVar6,0,uVar5,0);
      if (cVar2 != '\0') {
        if ((uVar5 & 8) == 0) {
          FUN_18027af00(*(undefined4 *)
                         ((longlong)*(short *)(lVar1 + 0x8a) * 0x2c + *(longlong *)(lVar1 + 0x10)));
        }
        else if (cVar2 == '\0') goto LAB_1800506a2;
        FUN_180049be0(5);
      }
      goto LAB_1800506a2;
    }
    FUN_18027e9c0("Needs to be called between BeginTabBar() and EndTabBar()!");
  }
  cVar2 = '\0';
LAB_1800506a2:
  (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);
  return 1;
}


)B180050530",
    "8ada566fac9fb7b72026838486ca760426a096cf7f45626b02433d931eeb8098",
    R"F180050530C(FUN_180039770
FUN_180049be0
FUN_18027af00
FUN_18027e9c0
FUN_1802c6840)F180050530C",
    R"F180050530D(LAB_1800506a2
DAT_18034324c
DAT_1803ff8ec)F180050530D",
    R"F180050530T("Needs to be called between BeginTabBar() and EndTabBar()!")F180050530T",
    R"F180050530F(19: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
20: return 0;
22: if (DAT_1803ff8ec == '\0') {
24: return 1;
27: if (cVar2 == '\0') {
30: else {
35: if (cVar2 == '\0') {
38: else {
41: if (puVar4 != (undefined *)0x0) {
46: if (*(char *)(lVar1 + 0x10) == '\0') {
50: if (*(char *)(*(longlong *)(lVar1 + 0x1520) + 0xd1) == '\0') {
52: if (lVar1 != 0) {
54: if (cVar2 != '\0') {
55: if ((uVar5 & 8) == 0) {
59: else if (cVar2 == '\0') goto LAB_1800506a2;
62: goto LAB_1800506a2;
67: LAB_1800506a2:
69: return 1;)F180050530F",
    R"F180050530U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800506a2.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034324c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar3 + 0xf8))(plVar3,0);.
TODO: resolve the indirect call in body 26: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 31: dVar7 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 34: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 39: puVar4 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 68: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);.)F180050530U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050530() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050530", "FUN_180050530");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800506a2.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034324c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 23: (**(code **)(*plVar3 + 0xf8))(plVar3,0);.
    // TODO: resolve the indirect call in body 26: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 31: dVar7 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 34: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 39: puVar4 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 68: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049be0", reinterpret_cast<const void*>(&image::FUN_180049be0));
    trace.call_target("FUN_18027af00", reinterpret_cast<const void*>(&image::FUN_18027af00));
    trace.call_target("FUN_18027e9c0", reinterpret_cast<const void*>(&image::FUN_18027e9c0));
    trace.call_target("FUN_1802c6840", reinterpret_cast<const void*>(&image::FUN_1802c6840));
    trace.data_ref("DAT_18034324c", static_cast<const void*>(&image::DAT_18034324c));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("Needs to be called between BeginTabBar() and EndTabBar()!");
    // body sha256: 8ada566fac9fb7b72026838486ca760426a096cf7f45626b02433d931eeb8098
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050530(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined *puVar4;");
            trace.statement("uint uVar5;");
            trace.statement("undefined *puVar6;");
            trace.statement("double dVar7;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,0);");
                trace.statement("return 1;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("uVar5 = 0;");
            } else {
            trace.statement("dVar7 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
            trace.statement("uVar5 = (uint)dVar7;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("puVar6 = &DAT_18034324c;");
            } else {
            trace.statement("puVar4 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
            trace.statement("puVar6 = &DAT_18034324c;");
            if (trace.condition("if (puVar4 != (undefined *)0x0)")) {
                trace.statement("puVar6 = puVar4;");
            }
            }
            trace.statement("lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
            if (trace.condition("if (*(char *)(lVar1 + 0x10) == '\\0')")) {
                trace.statement("__dyn_tls_on_demand_init();");
            }
            trace.statement("lVar1 = *(longlong *)(lVar1 + 0xec0);");
            if (trace.condition("if (*(char *)(*(longlong *)(lVar1 + 0x1520) + 0xd1) == '\\0')")) {
                trace.statement("lVar1 = *(longlong *)(lVar1 + 0x23d0);");
                if (trace.condition("if (lVar1 != 0)")) {
                    trace.statement("cVar2 = FUN_1802c6840(lVar1,puVar6,0,uVar5,0);");
                    if (trace.condition("if (cVar2 != '\\0')")) {
                        if (trace.condition("if ((uVar5 & 8) == 0)")) {
                            trace.statement("FUN_18027af00(*(undefined4 *)");
                            trace.statement("((longlong)*(short *)(lVar1 + 0x8a) * 0x2c + *(longlong *)(lVar1 + 0x10)));");
                        } else {
                        trace.statement("FUN_180049be0(5);");
                        }
                        trace.statement("goto LAB_1800506a2;");
                    }
                    trace.statement("FUN_18027e9c0(\"Needs to be called between BeginTabBar() and EndTabBar()!\");");
                }
                trace.statement("cVar2 = '\\0';");
                LAB_1800506a2: ;
                trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);");
                trace.statement("return 1;");
            }
        }
    return kFunction_0x180050530;
}

// 0x1800506e0 FUN_1800506e0
// source: re/dump/decompile/0x1800506e0_FUN_1800506e0.c
// size: 65 bytes; thunk: false
// body sha256: bba46931c23ce1b4b3486db8b04af5d72c0765f7267aa016140511b85dacf185
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800506e0{
    "0x1800506e0",
    "FUN_1800506e0",
    R"F1800506e0S(undefined FUN_1800506e0())F1800506e0S",
    R"B1800506e0(// 0x1800506e0  FUN_1800506e0
// size=65 thunk=false
// signature: undefined FUN_1800506e0()
// status: ok


undefined8 FUN_1800506e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(5,"EndTabItem");
    if (cVar1 != '\0') {
      FUN_1802c6750();
    }
  }
  return 0;
}


)B1800506e0",
    "bba46931c23ce1b4b3486db8b04af5d72c0765f7267aa016140511b85dacf185",
    R"F1800506e0C(FUN_180039770
FUN_180049c40
FUN_1802c6750)F1800506e0C",
    R"F1800506e0D(DAT_1803ff8ec)F1800506e0D",
    R"F1800506e0T("EndTabItem")F1800506e0T",
    R"F1800506e0F(14: if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: if (cVar1 != '\0') {
20: return 0;)F1800506e0F",
    R"F1800506e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F1800506e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800506e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800506e0", "FUN_1800506e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049c40", reinterpret_cast<const void*>(&image::FUN_180049c40));
    trace.call_target("FUN_1802c6750", reinterpret_cast<const void*>(&image::FUN_1802c6750));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("EndTabItem");
    // body sha256: bba46931c23ce1b4b3486db8b04af5d72c0765f7267aa016140511b85dacf185
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800506e0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.condition("if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = FUN_180049c40(5,\"EndTabItem\");");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_1802c6750();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800506e0;
}

// 0x180050730 FUN_180050730
// source: re/dump/decompile/0x180050730_FUN_180050730.c
// size: 345 bytes; thunk: false
// body sha256: ae6b5a31df39f8766b62880806cec0aef4875312572262ff0f5b070f56c60e01
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050730{
    "0x180050730",
    "FUN_180050730",
    R"F180050730S(undefined FUN_180050730())F180050730S",
    R"B180050730(// 0x180050730  FUN_180050730
// size=345 thunk=false
// signature: undefined FUN_180050730()
// status: ok


undefined8 FUN_180050730(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  double dVar8;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    if (cVar1 == '\0') {
      iVar7 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      iVar7 = (int)dVar8;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);
      puVar6 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar3;
      }
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      pcVar5 = "##combo";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      pcVar5 = "##combo";
      if (pcVar4 != (char *)0x0) {
        pcVar5 = pcVar4;
      }
    }
    cVar1 = FUN_1802b0590(pcVar5,puVar6,iVar7);
    if (cVar1 != '\0') {
      FUN_180049be0(6);
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
    return 1;
  }
  return 0;
}


)B180050730",
    "ae6b5a31df39f8766b62880806cec0aef4875312572262ff0f5b070f56c60e01",
    R"F180050730C(FUN_180039770
FUN_180049be0
FUN_1802b0590)F180050730C",
    R"F180050730D(DAT_18033e5ea
DAT_1803ff8ec)F180050730D",
    R"F180050730T("##combo")F180050730T",
    R"F180050730F(20: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
21: if (DAT_1803ff8ec == '\0') {
23: return 1;
26: if (cVar1 == '\0') {
29: else {
34: if (cVar1 == '\0') {
37: else {
40: if (puVar3 != (undefined1 *)0x0) {
45: if (cVar1 == '\0') {
48: else {
51: if (pcVar4 != (char *)0x0) {
56: if (cVar1 != '\0') {
60: return 1;
62: return 0;)F180050730F",
    R"F180050730U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
TODO: resolve the indirect call in body 25: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
TODO: resolve the indirect call in body 30: dVar8 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
TODO: resolve the indirect call in body 33: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);.
TODO: resolve the indirect call in body 38: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);.
TODO: resolve the indirect call in body 44: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
TODO: resolve the indirect call in body 49: pcVar4 = (char *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
TODO: resolve the indirect call in body 59: (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);.)F180050730U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050730() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050730", "FUN_180050730");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
    // TODO: resolve the indirect call in body 25: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
    // TODO: resolve the indirect call in body 30: dVar8 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
    // TODO: resolve the indirect call in body 33: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);.
    // TODO: resolve the indirect call in body 38: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);.
    // TODO: resolve the indirect call in body 44: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
    // TODO: resolve the indirect call in body 49: pcVar4 = (char *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
    // TODO: resolve the indirect call in body 59: (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049be0", reinterpret_cast<const void*>(&image::FUN_180049be0));
    trace.call_target("FUN_1802b0590", reinterpret_cast<const void*>(&image::FUN_1802b0590));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("##combo");
    // body sha256: ae6b5a31df39f8766b62880806cec0aef4875312572262ff0f5b070f56c60e01
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050730(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined1 *puVar3;");
            trace.statement("char *pcVar4;");
            trace.statement("char *pcVar5;");
            trace.statement("undefined1 *puVar6;");
            trace.statement("int iVar7;");
            trace.statement("double dVar8;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("iVar7 = 0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);");
                trace.statement("iVar7 = (int)dVar8;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("puVar6 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);");
                trace.statement("puVar6 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar3 != (undefined1 *)0x0)")) {
                    trace.statement("puVar6 = puVar3;");
                }
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("pcVar5 = \"##combo\";");
                } else {
                trace.statement("pcVar4 = (char *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);");
                trace.statement("pcVar5 = \"##combo\";");
                if (trace.condition("if (pcVar4 != (char *)0x0)")) {
                    trace.statement("pcVar5 = pcVar4;");
                }
                }
                trace.statement("cVar1 = FUN_1802b0590(pcVar5,puVar6,iVar7);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_180049be0(6);");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050730;
}

// 0x180050890 FUN_180050890
// source: re/dump/decompile/0x180050890_FUN_180050890.c
// size: 65 bytes; thunk: false
// body sha256: cb205dd1bada7fcd0fe7f54a4bb1dfdf6238c5cbcd3858a6c7361a77953170be
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050890{
    "0x180050890",
    "FUN_180050890",
    R"F180050890S(undefined FUN_180050890())F180050890S",
    R"B180050890(// 0x180050890  FUN_180050890
// size=65 thunk=false
// signature: undefined FUN_180050890()
// status: ok


undefined8 FUN_180050890(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(6,"EndCombo");
    if (cVar1 != '\0') {
      FUN_1802b1130();
    }
  }
  return 0;
}


)B180050890",
    "cb205dd1bada7fcd0fe7f54a4bb1dfdf6238c5cbcd3858a6c7361a77953170be",
    R"F180050890C(FUN_180039770
FUN_180049c40
FUN_1802b1130)F180050890C",
    R"F180050890D(DAT_1803ff8ec)F180050890D",
    R"F180050890T("EndCombo")F180050890T",
    R"F180050890F(14: if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: if (cVar1 != '\0') {
20: return 0;)F180050890F",
    R"F180050890U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F180050890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050890() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050890", "FUN_180050890");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049c40", reinterpret_cast<const void*>(&image::FUN_180049c40));
    trace.call_target("FUN_1802b1130", reinterpret_cast<const void*>(&image::FUN_1802b1130));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("EndCombo");
    // body sha256: cb205dd1bada7fcd0fe7f54a4bb1dfdf6238c5cbcd3858a6c7361a77953170be
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050890(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.condition("if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = FUN_180049c40(6,\"EndCombo\");");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_1802b1130();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050890;
}

// 0x1800508e0 FUN_1800508e0
// source: re/dump/decompile/0x1800508e0_FUN_1800508e0.c
// size: 352 bytes; thunk: false
// body sha256: df7634667dd0f6b340cba091048b3e62f26b40d359490e1994d073895a16adc4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800508e0{
    "0x1800508e0",
    "FUN_1800508e0",
    R"F1800508e0S(undefined FUN_1800508e0())F1800508e0S",
    R"B1800508e0(// 0x1800508e0  FUN_1800508e0
// size=352 thunk=false
// signature: undefined FUN_1800508e0()
// status: ok


undefined8 FUN_1800508e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_res10;
  float local_res14;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    fVar6 = 0.0;
    if (cVar1 == '\0') {
      fVar7 = 0.0;
    }
    else {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      fVar7 = (float)dVar5;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 != '\0') {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      fVar6 = (float)dVar5;
    }
    local_res10 = fVar6;
    local_res14 = fVar7;
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      puVar4 = &DAT_180343220;
    }
    else {
      puVar3 = (undefined *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      puVar4 = &DAT_180343220;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
      }
    }
    cVar1 = FUN_1802c3680(puVar4,&local_res10);
    if (cVar1 != '\0') {
      FUN_180049be0(9);
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
    return 1;
  }
  return 0;
}


)B1800508e0",
    "df7634667dd0f6b340cba091048b3e62f26b40d359490e1994d073895a16adc4",
    R"F1800508e0C(FUN_180039770
FUN_180049be0
FUN_1802c3680)F1800508e0C",
    R"F1800508e0D(DAT_180343220
DAT_1803ff8ec)F1800508e0D",
    R"F1800508e0T()F1800508e0T",
    R"F1800508e0F(21: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
22: if (DAT_1803ff8ec == '\0') {
24: return 1;
28: if (cVar1 == '\0') {
31: else {
36: if (cVar1 != '\0') {
43: if (cVar1 == '\0') {
46: else {
49: if (puVar3 != (undefined *)0x0) {
54: if (cVar1 != '\0') {
58: return 1;
60: return 0;)F1800508e0F",
    R"F1800508e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343220.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
TODO: resolve the indirect call in body 26: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
TODO: resolve the indirect call in body 32: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
TODO: resolve the indirect call in body 35: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
TODO: resolve the indirect call in body 37: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
TODO: resolve the indirect call in body 47: puVar3 = (undefined *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
TODO: resolve the indirect call in body 57: (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);.)F1800508e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800508e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800508e0", "FUN_1800508e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343220.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 23: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
    // TODO: resolve the indirect call in body 26: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
    // TODO: resolve the indirect call in body 32: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
    // TODO: resolve the indirect call in body 35: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
    // TODO: resolve the indirect call in body 37: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
    // TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
    // TODO: resolve the indirect call in body 47: puVar3 = (undefined *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
    // TODO: resolve the indirect call in body 57: (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049be0", reinterpret_cast<const void*>(&image::FUN_180049be0));
    trace.call_target("FUN_1802c3680", reinterpret_cast<const void*>(&image::FUN_1802c3680));
    trace.data_ref("DAT_180343220", static_cast<const void*>(&image::DAT_180343220));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: df7634667dd0f6b340cba091048b3e62f26b40d359490e1994d073895a16adc4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800508e0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined *puVar3;");
            trace.statement("undefined *puVar4;");
            trace.statement("double dVar5;");
            trace.statement("float fVar6;");
            trace.statement("float fVar7;");
            trace.statement("float local_res10;");
            trace.statement("float local_res14;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);");
                trace.statement("fVar6 = 0.0;");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("fVar7 = 0.0;");
                } else {
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);");
                trace.statement("fVar7 = (float)dVar5;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);");
                    trace.statement("fVar6 = (float)dVar5;");
                }
                trace.statement("local_res10 = fVar6;");
                trace.statement("local_res14 = fVar7;");
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("puVar4 = &DAT_180343220;");
                } else {
                trace.statement("puVar3 = (undefined *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);");
                trace.statement("puVar4 = &DAT_180343220;");
                if (trace.condition("if (puVar3 != (undefined *)0x0)")) {
                    trace.statement("puVar4 = puVar3;");
                }
                }
                trace.statement("cVar1 = FUN_1802c3680(puVar4,&local_res10);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_180049be0(9);");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800508e0;
}

// 0x180050a40 FUN_180050a40
// source: re/dump/decompile/0x180050a40_FUN_180050a40.c
// size: 105 bytes; thunk: false
// body sha256: 43107a30d96eed7c5ad9920204747e615407660bd2a39bfb210a2bf397f9591d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050a40{
    "0x180050a40",
    "FUN_180050a40",
    R"F180050a40S(undefined FUN_180050a40())F180050a40S",
    R"B180050a40(// 0x180050a40  FUN_180050a40
// size=105 thunk=false
// signature: undefined FUN_180050a40()
// status: ok


undefined8 FUN_180050a40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(9,"EndListBox");
    if (cVar1 != '\0') {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      FUN_180273410();
      FUN_18027fda0();
    }
  }
  return 0;
}


)B180050a40",
    "43107a30d96eed7c5ad9920204747e615407660bd2a39bfb210a2bf397f9591d",
    R"F180050a40C(FUN_180039770
FUN_180049c40
FUN_180273410
FUN_18027fda0)F180050a40C",
    R"F180050a40D(DAT_1803ff8ec)F180050a40D",
    R"F180050a40T("EndListBox")F180050a40T",
    R"F180050a40F(14: if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: if (cVar1 != '\0') {
17: if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
25: return 0;)F180050a40F",
    R"F180050a40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F180050a40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050a40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050a40", "FUN_180050a40");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049c40", reinterpret_cast<const void*>(&image::FUN_180049c40));
    trace.call_target("FUN_180273410", reinterpret_cast<const void*>(&image::FUN_180273410));
    trace.call_target("FUN_18027fda0", reinterpret_cast<const void*>(&image::FUN_18027fda0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("EndListBox");
    // body sha256: 43107a30d96eed7c5ad9920204747e615407660bd2a39bfb210a2bf397f9591d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050a40(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.condition("if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = FUN_180049c40(9,\"EndListBox\");");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    if (trace.condition("if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10) == '\\0')")) {
                        trace.statement("__dyn_tls_on_demand_init();");
                    }
                    trace.statement("FUN_180273410();");
                    trace.statement("FUN_18027fda0();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050a40;
}

// 0x180050ab0 FUN_180050ab0
// source: re/dump/decompile/0x180050ab0_FUN_180050ab0.c
// size: 139 bytes; thunk: false
// body sha256: 48af67359b873eaf21626bef8dc488f04972762923060fab50a1df49f093e474
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050ab0{
    "0x180050ab0",
    "FUN_180050ab0",
    R"F180050ab0S(undefined FUN_180050ab0())F180050ab0S",
    R"B180050ab0(// 0x180050ab0  FUN_180050ab0
// size=139 thunk=false
// signature: undefined FUN_180050ab0()
// status: ok


undefined8 FUN_180050ab0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    cVar1 = FUN_180280a90(0);
    if (cVar1 != '\0') {
      FUN_180049be0(7);
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
    return 1;
  }
  return 0;
}


)B180050ab0",
    "48af67359b873eaf21626bef8dc488f04972762923060fab50a1df49f093e474",
    R"F180050ab0C(FUN_180039770
FUN_180049be0
FUN_180280a90)F180050ab0C",
    R"F180050ab0D(DAT_1803ff8ec)F180050ab0D",
    R"F180050ab0T()F180050ab0T",
    R"F180050ab0F(14: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
15: if (DAT_1803ff8ec == '\0') {
17: return 1;
20: if (cVar1 != '\0') {
24: return 1;
26: return 0;)F180050ab0F",
    R"F180050ab0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 16: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);.)F180050ab0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050ab0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050ab0", "FUN_180050ab0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 16: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
    // TODO: resolve the indirect call in body 23: (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049be0", reinterpret_cast<const void*>(&image::FUN_180049be0));
    trace.call_target("FUN_180280a90", reinterpret_cast<const void*>(&image::FUN_180280a90));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 48af67359b873eaf21626bef8dc488f04972762923060fab50a1df49f093e474
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050ab0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar1 = FUN_180280a90(0);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_180049be0(7);");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050ab0;
}

// 0x180050b40 FUN_180050b40
// source: re/dump/decompile/0x180050b40_FUN_180050b40.c
// size: 65 bytes; thunk: false
// body sha256: 3d65eb69cd171ed0ac5902ab00d07eaf36aea4fcf833d0a48b2fb0732f31f0dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050b40{
    "0x180050b40",
    "FUN_180050b40",
    R"F180050b40S(undefined FUN_180050b40())F180050b40S",
    R"B180050b40(// 0x180050b40  FUN_180050b40
// size=65 thunk=false
// signature: undefined FUN_180050b40()
// status: ok


undefined8 FUN_180050b40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(7,"EndTooltip");
    if (cVar1 != '\0') {
      FUN_180278d40();
    }
  }
  return 0;
}


)B180050b40",
    "3d65eb69cd171ed0ac5902ab00d07eaf36aea4fcf833d0a48b2fb0732f31f0dd",
    R"F180050b40C(FUN_180039770
FUN_180049c40
FUN_180278d40)F180050b40C",
    R"F180050b40D(DAT_1803ff8ec)F180050b40D",
    R"F180050b40T("EndTooltip")F180050b40T",
    R"F180050b40F(14: if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: if (cVar1 != '\0') {
20: return 0;)F180050b40F",
    R"F180050b40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F180050b40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050b40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050b40", "FUN_180050b40");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049c40", reinterpret_cast<const void*>(&image::FUN_180049c40));
    trace.call_target("FUN_180278d40", reinterpret_cast<const void*>(&image::FUN_180278d40));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("EndTooltip");
    // body sha256: 3d65eb69cd171ed0ac5902ab00d07eaf36aea4fcf833d0a48b2fb0732f31f0dd
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050b40(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.condition("if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = FUN_180049c40(7,\"EndTooltip\");");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_180278d40();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050b40;
}

// 0x180050b90 FUN_180050b90
// source: re/dump/decompile/0x180050b90_FUN_180050b90.c
// size: 137 bytes; thunk: false
// body sha256: 11099f96f07327fcb7cc7549ae8c9e512453aefb9527e473c914b80782b8a82f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050b90{
    "0x180050b90",
    "FUN_180050b90",
    R"F180050b90S(undefined FUN_180050b90())F180050b90S",
    R"B180050b90(// 0x180050b90  FUN_180050b90
// size=137 thunk=false
// signature: undefined FUN_180050b90()
// status: ok


undefined8 FUN_180050b90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      puVar4 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      puVar4 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = puVar3;
      }
    }
    FUN_180280d00(&DAT_1803431ac,puVar4);
  }
  return 0;
}


)B180050b90",
    "11099f96f07327fcb7cc7549ae8c9e512453aefb9527e473c914b80782b8a82f",
    R"F180050b90C(FUN_180039770
FUN_180280d00)F180050b90C",
    R"F180050b90D(DAT_18033e5ea
DAT_1803431ac
DAT_1803ff8ec)F180050b90D",
    R"F180050b90T()F180050b90T",
    R"F180050b90F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
18: if (cVar1 == '\0') {
21: else {
24: if (puVar3 != (undefined1 *)0x0) {
30: return 0;)F180050b90F",
    R"F180050b90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803431ac.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
TODO: resolve the indirect call in body 22: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.)F180050b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050b90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050b90", "FUN_180050b90");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803431ac.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
    // TODO: resolve the indirect call in body 22: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180280d00", reinterpret_cast<const void*>(&image::FUN_180280d00));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803431ac", static_cast<const void*>(&image::DAT_1803431ac));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 11099f96f07327fcb7cc7549ae8c9e512453aefb9527e473c914b80782b8a82f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050b90(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined1 *puVar3;");
            trace.statement("undefined1 *puVar4;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("puVar4 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);");
                trace.statement("puVar4 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar3 != (undefined1 *)0x0)")) {
                    trace.statement("puVar4 = puVar3;");
                }
                }
                trace.statement("FUN_180280d00(&DAT_1803431ac,puVar4);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050b90;
}

// 0x180050c20 FUN_180050c20
// source: re/dump/decompile/0x180050c20_FUN_180050c20.c
// size: 519 bytes; thunk: false
// body sha256: 53e47c1a57ee2e70b5dc47cad5359b72b392e5bdcb289ea3b2f367742b878dab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050c20{
    "0x180050c20",
    "FUN_180050c20",
    R"F180050c20S(undefined FUN_180050c20())F180050c20S",
    R"B180050c20(// 0x180050c20  FUN_180050c20
// size=519 thunk=false
// signature: undefined FUN_180050c20()
// status: ok


undefined8 FUN_180050c20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
      return 1;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
    if (cVar1 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      fVar9 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar9 = (float)dVar8;
    }
    local_res8 = CONCAT44(fVar10,fVar9);
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 == '\0') {
      iVar5 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      iVar5 = (int)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    if (cVar1 == '\0') {
      iVar6 = 1;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      iVar6 = (int)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      pcVar7 = "##table";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      pcVar7 = "##table";
      if (pcVar4 != (char *)0x0) {
        pcVar7 = pcVar4;
      }
    }
    uVar2 = FUN_18027b010(pcVar7);
    cVar1 = FUN_1802a0c40(pcVar7,uVar2,iVar6,iVar5,&local_res8,0);
    if (cVar1 != '\0') {
      FUN_180049be0(10);
    }
    (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);
    return 1;
  }
  return 0;
}


)B180050c20",
    "53e47c1a57ee2e70b5dc47cad5359b72b392e5bdcb289ea3b2f367742b878dab",
    R"F180050c20C(FUN_180039770
FUN_180049be0
FUN_18027b010
FUN_1802a0c40)F180050c20C",
    R"F180050c20D(DAT_1803ff8ec)F180050c20D",
    R"F180050c20T("##table")F180050c20T",
    R"F180050c20F(24: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
25: if (DAT_1803ff8ec == '\0') {
27: return 1;
30: if (cVar1 == '\0') {
33: else {
38: if (cVar1 == '\0') {
41: else {
47: if (cVar1 == '\0') {
50: else {
55: if (cVar1 == '\0') {
58: else {
63: if (cVar1 == '\0') {
66: else {
69: if (pcVar4 != (char *)0x0) {
75: if (cVar1 != '\0') {
79: return 1;
81: return 0;)F180050c20F",
    R"F180050c20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 26: (**(code **)(*plVar3 + 0xf8))(plVar3,0);.
TODO: resolve the indirect call in body 29: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
TODO: resolve the indirect call in body 34: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
TODO: resolve the indirect call in body 37: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 42: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 46: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 51: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 54: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 59: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 62: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 67: pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 78: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);.)F180050c20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050c20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050c20", "FUN_180050c20");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 26: (**(code **)(*plVar3 + 0xf8))(plVar3,0);.
    // TODO: resolve the indirect call in body 29: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);.
    // TODO: resolve the indirect call in body 34: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);.
    // TODO: resolve the indirect call in body 37: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
    // TODO: resolve the indirect call in body 42: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
    // TODO: resolve the indirect call in body 46: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 51: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 54: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 59: dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 62: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 67: pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 78: (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049be0", reinterpret_cast<const void*>(&image::FUN_180049be0));
    trace.call_target("FUN_18027b010", reinterpret_cast<const void*>(&image::FUN_18027b010));
    trace.call_target("FUN_1802a0c40", reinterpret_cast<const void*>(&image::FUN_1802a0c40));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("##table");
    // body sha256: 53e47c1a57ee2e70b5dc47cad5359b72b392e5bdcb289ea3b2f367742b878dab
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050c20(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("undefined4 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("char *pcVar4;");
            trace.statement("int iVar5;");
            trace.statement("int iVar6;");
            trace.statement("char *pcVar7;");
            trace.statement("double dVar8;");
            trace.statement("float fVar9;");
            trace.statement("float fVar10;");
            trace.statement("undefined8 local_res8;");
            trace.statement("local_res8 = param_1;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2))")) {
                if (trace.condition("if (DAT_1803ff8ec == '\\0')")) {
                    trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("fVar10 = 0.0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);");
                trace.statement("fVar10 = (float)dVar8;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("fVar9 = 0.0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);");
                trace.statement("fVar9 = (float)dVar8;");
                }
                trace.statement("local_res8 = CONCAT44(fVar10,fVar9);");
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("iVar5 = 0;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
                trace.statement("iVar5 = (int)dVar8;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("iVar6 = 1;");
                } else {
                trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
                trace.statement("iVar6 = (int)dVar8;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("pcVar7 = \"##table\";");
                } else {
                trace.statement("pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
                trace.statement("pcVar7 = \"##table\";");
                if (trace.condition("if (pcVar4 != (char *)0x0)")) {
                    trace.statement("pcVar7 = pcVar4;");
                }
                }
                trace.statement("uVar2 = FUN_18027b010(pcVar7);");
                trace.statement("cVar1 = FUN_1802a0c40(pcVar7,uVar2,iVar6,iVar5,&local_res8,0);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_180049be0(10);");
                }
                trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050c20;
}

// 0x180050e40 FUN_180050e40
// source: re/dump/decompile/0x180050e40_FUN_180050e40.c
// size: 65 bytes; thunk: false
// body sha256: 368ff1d5a5aeed1b7c68742b7c1b1499ce53b9d2a2ba8a4192d1ffa938c78417
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050e40{
    "0x180050e40",
    "FUN_180050e40",
    R"F180050e40S(undefined FUN_180050e40())F180050e40S",
    R"B180050e40(// 0x180050e40  FUN_180050e40
// size=65 thunk=false
// signature: undefined FUN_180050e40()
// status: ok


undefined8 FUN_180050e40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(10,"EndTable");
    if (cVar1 != '\0') {
      FUN_1802a3b20();
    }
  }
  return 0;
}


)B180050e40",
    "368ff1d5a5aeed1b7c68742b7c1b1499ce53b9d2a2ba8a4192d1ffa938c78417",
    R"F180050e40C(FUN_180039770
FUN_180049c40
FUN_1802a3b20)F180050e40C",
    R"F180050e40D(DAT_1803ff8ec)F180050e40D",
    R"F180050e40T("EndTable")F180050e40T",
    R"F180050e40F(14: if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: if (cVar1 != '\0') {
20: return 0;)F180050e40F",
    R"F180050e40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F180050e40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050e40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050e40", "FUN_180050e40");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049c40", reinterpret_cast<const void*>(&image::FUN_180049c40));
    trace.call_target("FUN_1802a3b20", reinterpret_cast<const void*>(&image::FUN_1802a3b20));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("EndTable");
    // body sha256: 368ff1d5a5aeed1b7c68742b7c1b1499ce53b9d2a2ba8a4192d1ffa938c78417
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050e40(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.condition("if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = FUN_180049c40(10,\"EndTable\");");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("FUN_1802a3b20();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050e40;
}

// 0x180050e90 FUN_180050e90
// source: re/dump/decompile/0x180050e90_FUN_180050e90.c
// size: 118 bytes; thunk: false
// body sha256: d80819a8074b1e26bd62b5042962679869b26d529228e58269cc5fc87a72d520
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050e90{
    "0x180050e90",
    "FUN_180050e90",
    R"F180050e90S(undefined FUN_180050e90())F180050e90S",
    R"B180050e90(// 0x180050e90  FUN_180050e90
// size=118 thunk=false
// signature: undefined FUN_180050e90()
// status: ok


undefined8 FUN_180050e90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  float fVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 == '\0') {
      fVar4 = 0.0;
    }
    else {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      fVar4 = (float)dVar3;
    }
    FUN_1802a4950(0,fVar4);
  }
  return 0;
}


)B180050e90",
    "d80819a8074b1e26bd62b5042962679869b26d529228e58269cc5fc87a72d520",
    R"F180050e90C(FUN_180039770
FUN_1802a4950)F180050e90C",
    R"F180050e90D(DAT_1803ff8ec)F180050e90D",
    R"F180050e90T()F180050e90T",
    R"F180050e90F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
18: if (cVar1 == '\0') {
21: else {
27: return 0;)F180050e90F",
    R"F180050e90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 22: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F180050e90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050e90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050e90", "FUN_180050e90");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 22: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802a4950", reinterpret_cast<const void*>(&image::FUN_1802a4950));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: d80819a8074b1e26bd62b5042962679869b26d529228e58269cc5fc87a72d520
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050e90(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("float fVar4;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("fVar4 = 0.0;");
                } else {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                trace.statement("fVar4 = (float)dVar3;");
                }
                trace.statement("FUN_1802a4950(0,fVar4);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050e90;
}

// 0x180050f10 FUN_180050f10
// source: re/dump/decompile/0x180050f10_FUN_180050f10.c
// size: 93 bytes; thunk: false
// body sha256: 33eeaf66f90d17bf2d51072dc4ab180477dee04af178c98d2403a2069895e621
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050f10{
    "0x180050f10",
    "FUN_180050f10",
    R"F180050f10S(undefined FUN_180050f10())F180050f10S",
    R"B180050f10(// 0x180050f10  FUN_180050f10
// size=93 thunk=false
// signature: undefined FUN_180050f10()
// status: ok


undefined8 FUN_180050f10(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1802a5310();
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


)B180050f10",
    "33eeaf66f90d17bf2d51072dc4ab180477dee04af178c98d2403a2069895e621",
    R"F180050f10C(FUN_180039770
FUN_1802a5310)F180050f10C",
    R"F180050f10D(DAT_1803ff8ec)F180050f10D",
    R"F180050f10T()F180050f10T",
    R"F180050f10F(15: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
19: return 1;
21: return 0;)F180050f10F",
    R"F180050f10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.)F180050f10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050f10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050f10", "FUN_180050f10");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802a5310", reinterpret_cast<const void*>(&image::FUN_1802a5310));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 33eeaf66f90d17bf2d51072dc4ab180477dee04af178c98d2403a2069895e621
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050f10(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                trace.statement("uVar2 = FUN_1802a5310();");
                trace.statement("(*pcVar1)(plVar3,uVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050f10;
}

// 0x180050f70 FUN_180050f70
// source: re/dump/decompile/0x180050f70_FUN_180050f70.c
// size: 148 bytes; thunk: false
// body sha256: c85cd7da95ce9df716ce365f80df207981be2fc11a6ae1c7a4518e6bbf86c481
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180050f70{
    "0x180050f70",
    "FUN_180050f70",
    R"F180050f70S(undefined FUN_180050f70())F180050f70S",
    R"B180050f70(// 0x180050f70  FUN_180050f70
// size=148 thunk=false
// signature: undefined FUN_180050f70()
// status: ok


undefined8 FUN_180050f70(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  double dVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
    if (cVar2 == '\0') {
      iVar5 = 1;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
      iVar5 = (int)dVar6;
    }
    uVar3 = FUN_1802a5270(iVar5 + -1);
    (*pcVar1)(plVar4,uVar3);
    return 1;
  }
  return 0;
}


)B180050f70",
    "c85cd7da95ce9df716ce365f80df207981be2fc11a6ae1c7a4518e6bbf86c481",
    R"F180050f70C(FUN_180039770
FUN_1802a5270)F180050f70C",
    R"F180050f70D(DAT_1803ff8ec)F180050f70D",
    R"F180050f70T()F180050f70T",
    R"F180050f70F(18: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
21: if (cVar2 == '\0') {
24: else {
30: return 1;
32: return 0;)F180050f70F",
    R"F180050f70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);.
TODO: resolve the indirect call in body 25: dVar6 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
TODO: resolve the indirect call in body 29: (*pcVar1)(plVar4,uVar3);.)F180050f70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180050f70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180050f70", "FUN_180050f70");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);.
    // TODO: resolve the indirect call in body 25: dVar6 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
    // TODO: resolve the indirect call in body 29: (*pcVar1)(plVar4,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802a5270", reinterpret_cast<const void*>(&image::FUN_1802a5270));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: c85cd7da95ce9df716ce365f80df207981be2fc11a6ae1c7a4518e6bbf86c481
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180050f70(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("int iVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("iVar5 = 1;");
                } else {
                trace.statement("dVar6 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);");
                trace.statement("iVar5 = (int)dVar6;");
                }
                trace.statement("uVar3 = FUN_1802a5270(iVar5 + -1);");
                trace.statement("(*pcVar1)(plVar4,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180050f70;
}

// 0x180051010 FUN_180051010
// source: re/dump/decompile/0x180051010_FUN_180051010.c
// size: 262 bytes; thunk: false
// body sha256: 778126c7f82ec8003e221241868327b40dba7d25fcd0146bf0f80ce12a87e230
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051010{
    "0x180051010",
    "FUN_180051010",
    R"F180051010S(undefined FUN_180051010())F180051010S",
    R"B180051010(// 0x180051010  FUN_180051010
// size=262 thunk=false
// signature: undefined FUN_180051010()
// status: ok


undefined8 FUN_180051010(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    if (cVar1 == '\0') {
      fVar7 = 0.0;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      fVar7 = (float)dVar6;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 == '\0') {
      iVar5 = 0;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      iVar5 = (int)dVar6;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      puVar4 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      puVar4 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = puVar3;
      }
    }
    FUN_1802a4790(puVar4,iVar5,fVar7);
  }
  return 0;
}


)B180051010",
    "778126c7f82ec8003e221241868327b40dba7d25fcd0146bf0f80ce12a87e230",
    R"F180051010C(FUN_180039770
FUN_1802a4790)F180051010C",
    R"F180051010D(DAT_18033e5ea
DAT_1803ff8ec)F180051010D",
    R"F180051010T()F180051010T",
    R"F180051010F(19: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
21: if (cVar1 == '\0') {
24: else {
29: if (cVar1 == '\0') {
32: else {
37: if (cVar1 == '\0') {
40: else {
43: if (puVar3 != (undefined1 *)0x0) {
49: return 0;)F180051010F",
    R"F180051010U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 20: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
TODO: resolve the indirect call in body 25: dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
TODO: resolve the indirect call in body 28: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
TODO: resolve the indirect call in body 33: dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
TODO: resolve the indirect call in body 36: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
TODO: resolve the indirect call in body 41: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.)F180051010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051010() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051010", "FUN_180051010");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 20: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
    // TODO: resolve the indirect call in body 25: dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
    // TODO: resolve the indirect call in body 28: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
    // TODO: resolve the indirect call in body 33: dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
    // TODO: resolve the indirect call in body 36: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
    // TODO: resolve the indirect call in body 41: puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802a4790", reinterpret_cast<const void*>(&image::FUN_1802a4790));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 778126c7f82ec8003e221241868327b40dba7d25fcd0146bf0f80ce12a87e230
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051010(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined1 *puVar3;");
            trace.statement("undefined1 *puVar4;");
            trace.statement("int iVar5;");
            trace.statement("double dVar6;");
            trace.statement("float fVar7;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("fVar7 = 0.0;");
                } else {
                trace.statement("dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);");
                trace.statement("fVar7 = (float)dVar6;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("iVar5 = 0;");
                } else {
                trace.statement("dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);");
                trace.statement("iVar5 = (int)dVar6;");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("puVar4 = &DAT_18033e5ea;");
                } else {
                trace.statement("puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);");
                trace.statement("puVar4 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar3 != (undefined1 *)0x0)")) {
                    trace.statement("puVar4 = puVar3;");
                }
                }
                trace.statement("FUN_1802a4790(puVar4,iVar5,fVar7);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051010;
}

// 0x180051120 FUN_180051120
// source: re/dump/decompile/0x180051120_FUN_180051120.c
// size: 47 bytes; thunk: false
// body sha256: b7127f4ee7d9faf0ef1254b0cda940fe1a4990ea04711c23ba868353bf4d0685
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051120{
    "0x180051120",
    "FUN_180051120",
    R"F180051120S(undefined FUN_180051120())F180051120S",
    R"B180051120(// 0x180051120  FUN_180051120
// size=47 thunk=false
// signature: undefined FUN_180051120()
// status: ok


undefined8 FUN_180051120(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180039770();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    FUN_1802a7190();
  }
  return 0;
}


)B180051120",
    "b7127f4ee7d9faf0ef1254b0cda940fe1a4990ea04711c23ba868353bf4d0685",
    R"F180051120C(FUN_180039770
FUN_1802a7190)F180051120C",
    R"F180051120D(DAT_1803ff8ec)F180051120D",
    R"F180051120T()F180051120T",
    R"F180051120F(13: if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
16: return 0;)F180051120F",
    R"F180051120U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.)F180051120U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051120() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051120", "FUN_180051120");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1802a7190", reinterpret_cast<const void*>(&image::FUN_1802a7190));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: b7127f4ee7d9faf0ef1254b0cda940fe1a4990ea04711c23ba868353bf4d0685
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051120(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("lVar1 = FUN_180039770();");
            if (trace.condition("if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("FUN_1802a7190();");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051120;
}

// 0x180051150 FUN_180051150
// source: re/dump/decompile/0x180051150_FUN_180051150.c
// size: 121 bytes; thunk: false
// body sha256: cbe530cd26dbf86605f2540d2fb2c0524fd083c8388a9f9c2682ca6b2401cf7c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051150{
    "0x180051150",
    "FUN_180051150",
    R"F180051150S(undefined FUN_180051150())F180051150S",
    R"B180051150(// 0x180051150  FUN_180051150
// size=121 thunk=false
// signature: undefined FUN_180051150()
// status: ok


undefined8 FUN_180051150(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    if (DAT_1803ff8ec != '\0') {
      cVar2 = FUN_18026ee60(0);
      if (cVar2 != '\0') {
        (*pcVar1)(plVar3,1);
        return 1;
      }
    }
    (*pcVar1)(plVar3,0);
    return 1;
  }
  return 0;
}


)B180051150",
    "cbe530cd26dbf86605f2540d2fb2c0524fd083c8388a9f9c2682ca6b2401cf7c",
    R"F180051150C(FUN_180039770
FUN_18026ee60)F180051150C",
    R"F180051150D(DAT_1803ff8ec)F180051150D",
    R"F180051150T()F180051150T",
    R"F180051150F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
17: if (DAT_1803ff8ec != '\0') {
19: if (cVar2 != '\0') {
21: return 1;
25: return 1;
27: return 0;)F180051150F",
    R"F180051150U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 20: (*pcVar1)(plVar3,1);.
TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.)F180051150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051150() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051150", "FUN_180051150");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 20: (*pcVar1)(plVar3,1);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18026ee60", reinterpret_cast<const void*>(&image::FUN_18026ee60));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: cbe530cd26dbf86605f2540d2fb2c0524fd083c8388a9f9c2682ca6b2401cf7c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051150(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                if (trace.condition("if (DAT_1803ff8ec != '\\0')")) {
                    trace.statement("cVar2 = FUN_18026ee60(0);");
                    if (trace.condition("if (cVar2 != '\\0')")) {
                        trace.statement("(*pcVar1)(plVar3,1);");
                        trace.statement("return 1;");
                    }
                }
                trace.statement("(*pcVar1)(plVar3,0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051150;
}

// 0x1800511d0 FUN_1800511d0
// source: re/dump/decompile/0x1800511d0_FUN_1800511d0.c
// size: 195 bytes; thunk: false
// body sha256: f7cf4e18c89dfc5fc715ab4a6c532a380f9d11882dd8af1a1bcb978d2d17f84f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800511d0{
    "0x1800511d0",
    "FUN_1800511d0",
    R"F1800511d0S(undefined FUN_1800511d0())F1800511d0S",
    R"B1800511d0(// 0x1800511d0  FUN_1800511d0
// size=195 thunk=false
// signature: undefined FUN_1800511d0()
// status: ok


undefined8 FUN_1800511d0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  pcVar2 = *(code **)(*plVar4 + 0xf8);
  if (DAT_1803ff8ec != '\0') {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    iVar1 = *(int *)(lVar3 + 0x1594);
    if ((iVar1 != 0) && (iVar1 == *(int *)(lVar3 + 0x1ef8))) {
      (*pcVar2)(plVar4,1);
      return 1;
    }
  }
  (*pcVar2)(plVar4,0);
  return 1;
}


)B1800511d0",
    "f7cf4e18c89dfc5fc715ab4a6c532a380f9d11882dd8af1a1bcb978d2d17f84f",
    R"F1800511d0C(FUN_180039770)F1800511d0C",
    R"F1800511d0D(DAT_1803ff8ec)F1800511d0D",
    R"F1800511d0T()F1800511d0T",
    R"F1800511d0F(16: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
17: return 0;
20: if (DAT_1803ff8ec != '\0') {
22: if (*(char *)(lVar3 + 0x10) == '\0') {
27: if ((iVar1 != 0) && (iVar1 == *(int *)(lVar3 + 0x1ef8))) {
29: return 1;
33: return 1;)F1800511d0F",
    R"F1800511d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 19: pcVar2 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 28: (*pcVar2)(plVar4,1);.
TODO: resolve the indirect call in body 32: (*pcVar2)(plVar4,0);.)F1800511d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800511d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800511d0", "FUN_1800511d0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 19: pcVar2 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 28: (*pcVar2)(plVar4,1);.
    // TODO: resolve the indirect call in body 32: (*pcVar2)(plVar4,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: f7cf4e18c89dfc5fc715ab4a6c532a380f9d11882dd8af1a1bcb978d2d17f84f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800511d0(longlong param_1)");
        {
            trace.statement("int iVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("pcVar2 = *(code **)(*plVar4 + 0xf8);");
            if (trace.condition("if (DAT_1803ff8ec != '\\0')")) {
                trace.statement("lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar3 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                trace.statement("lVar3 = *(longlong *)(lVar3 + 0xec0);");
                trace.statement("iVar1 = *(int *)(lVar3 + 0x1594);");
                if (trace.condition("if ((iVar1 != 0) && (iVar1 == *(int *)(lVar3 + 0x1ef8)))")) {
                    trace.statement("(*pcVar2)(plVar4,1);");
                    trace.statement("return 1;");
                }
            }
            trace.statement("(*pcVar2)(plVar4,0);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800511d0;
}

// 0x1800512a0 FUN_1800512a0
// source: re/dump/decompile/0x1800512a0_FUN_1800512a0.c
// size: 194 bytes; thunk: false
// body sha256: 32b13f6fdc6ad9a01ce2264055af0ccf561c4a33ab57b2d5d9eb538b72fac368
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800512a0{
    "0x1800512a0",
    "FUN_1800512a0",
    R"F1800512a0S(undefined FUN_1800512a0())F1800512a0S",
    R"B1800512a0(// 0x1800512a0  FUN_1800512a0
// size=194 thunk=false
// signature: undefined FUN_1800512a0()
// status: ok


undefined8 FUN_1800512a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec != '\0') {
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
      if (cVar2 == '\0') {
        iVar3 = 0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
        iVar3 = (int)dVar5;
      }
      cVar2 = FUN_18027bce0(iVar3,0,0);
      if (cVar2 != '\0') {
        cVar2 = FUN_18026ee60(0);
        if (cVar2 != '\0') {
          (*pcVar1)(plVar4,1);
          return 1;
        }
      }
    }
    (*pcVar1)(plVar4,0);
    return 1;
  }
  return 0;
}


)B1800512a0",
    "32b13f6fdc6ad9a01ce2264055af0ccf561c4a33ab57b2d5d9eb538b72fac368",
    R"F1800512a0C(FUN_180039770
FUN_18026ee60
FUN_18027bce0)F1800512a0C",
    R"F1800512a0D(DAT_1803ff8ec)F1800512a0D",
    R"F1800512a0T()F1800512a0T",
    R"F1800512a0F(17: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
19: if (DAT_1803ff8ec != '\0') {
21: if (cVar2 == '\0') {
24: else {
29: if (cVar2 != '\0') {
31: if (cVar2 != '\0') {
33: return 1;
38: return 1;
40: return 0;)F1800512a0F",
    R"F1800512a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);.
TODO: resolve the indirect call in body 25: dVar5 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
TODO: resolve the indirect call in body 32: (*pcVar1)(plVar4,1);.
TODO: resolve the indirect call in body 37: (*pcVar1)(plVar4,0);.)F1800512a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800512a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800512a0", "FUN_1800512a0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);.
    // TODO: resolve the indirect call in body 25: dVar5 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
    // TODO: resolve the indirect call in body 32: (*pcVar1)(plVar4,1);.
    // TODO: resolve the indirect call in body 37: (*pcVar1)(plVar4,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18026ee60", reinterpret_cast<const void*>(&image::FUN_18026ee60));
    trace.call_target("FUN_18027bce0", reinterpret_cast<const void*>(&image::FUN_18027bce0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 32b13f6fdc6ad9a01ce2264055af0ccf561c4a33ab57b2d5d9eb538b72fac368
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800512a0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                if (trace.condition("if (DAT_1803ff8ec != '\\0')")) {
                    trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);");
                    if (trace.condition("if (cVar2 == '\\0')")) {
                        trace.statement("iVar3 = 0;");
                    } else {
                    trace.statement("dVar5 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);");
                    trace.statement("iVar3 = (int)dVar5;");
                    }
                    trace.statement("cVar2 = FUN_18027bce0(iVar3,0,0);");
                    if (trace.condition("if (cVar2 != '\\0')")) {
                        trace.statement("cVar2 = FUN_18026ee60(0);");
                        if (trace.condition("if (cVar2 != '\\0')")) {
                            trace.statement("(*pcVar1)(plVar4,1);");
                            trace.statement("return 1;");
                        }
                    }
                }
                trace.statement("(*pcVar1)(plVar4,0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800512a0;
}

// 0x180051370 FUN_180051370
// source: re/dump/decompile/0x180051370_FUN_180051370.c
// size: 186 bytes; thunk: false
// body sha256: c97a97237603080bf158242d9b1df54c4a4c49e73fb8f9ba596621d5656667fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051370{
    "0x180051370",
    "FUN_180051370",
    R"F180051370S(undefined FUN_180051370())F180051370S",
    R"B180051370(// 0x180051370  FUN_180051370
// size=186 thunk=false
// signature: undefined FUN_180051370()
// status: ok


undefined8 FUN_180051370(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  pcVar1 = *(code **)(*plVar3 + 0xf8);
  if (DAT_1803ff8ec != '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0xec0) + 0x1f00) & 4) != 0) {
      (*pcVar1)(plVar3,1);
      return 1;
    }
  }
  (*pcVar1)(plVar3,0);
  return 1;
}


)B180051370",
    "c97a97237603080bf158242d9b1df54c4a4c49e73fb8f9ba596621d5656667fb",
    R"F180051370C(FUN_180039770)F180051370C",
    R"F180051370D(DAT_1803ff8ec)F180051370D",
    R"F180051370T()F180051370T",
    R"F180051370F(15: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
16: return 0;
19: if (DAT_1803ff8ec != '\0') {
21: if (*(char *)(lVar2 + 0x10) == '\0') {
24: if ((*(byte *)(*(longlong *)(lVar2 + 0xec0) + 0x1f00) & 4) != 0) {
26: return 1;
30: return 1;)F180051370F",
    R"F180051370U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 25: (*pcVar1)(plVar3,1);.
TODO: resolve the indirect call in body 29: (*pcVar1)(plVar3,0);.)F180051370U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051370() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051370", "FUN_180051370");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 25: (*pcVar1)(plVar3,1);.
    // TODO: resolve the indirect call in body 29: (*pcVar1)(plVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: c97a97237603080bf158242d9b1df54c4a4c49e73fb8f9ba596621d5656667fb
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051370(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
            if (trace.condition("if (DAT_1803ff8ec != '\\0')")) {
                trace.statement("lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar2 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                if (trace.condition("if ((*(byte *)(*(longlong *)(lVar2 + 0xec0) + 0x1f00) & 4) != 0)")) {
                    trace.statement("(*pcVar1)(plVar3,1);");
                    trace.statement("return 1;");
                }
            }
            trace.statement("(*pcVar1)(plVar3,0);");
            trace.statement("return 1;");
        }
    return kFunction_0x180051370;
}

// 0x180051430 FUN_180051430
// source: re/dump/decompile/0x180051430_FUN_180051430.c
// size: 174 bytes; thunk: false
// body sha256: 11e4b788d78c3496deb02baf49d3dda730ecda9fe017d5725a744dcbb6a17e74
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051430{
    "0x180051430",
    "FUN_180051430",
    R"F180051430S(undefined FUN_180051430())F180051430S",
    R"B180051430(// 0x180051430  FUN_180051430
// size=174 thunk=false
// signature: undefined FUN_180051430()
// status: ok


undefined8 FUN_180051430(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    fVar1 = *(float *)(lVar2 + 0x104);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*(float *)(lVar2 + 0x100));
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);
    return 2;
  }
  return 0;
}


)B180051430",
    "11e4b788d78c3496deb02baf49d3dda730ecda9fe017d5725a744dcbb6a17e74",
    R"F180051430C(FUN_180039770)F180051430C",
    R"F180051430D(DAT_1803ff8ec)F180051430D",
    R"F180051430T()F180051430T",
    R"F180051430F(15: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
17: if (*(char *)(lVar2 + 0x10) == '\0') {
24: return 2;
26: return 0;)F180051430F",
    R"F180051430U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 22: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*(float *)(lVar2 + 0x100));.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);.)F180051430U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051430() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051430", "FUN_180051430");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 22: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*(float *)(lVar2 + 0x100));.
    // TODO: resolve the indirect call in body 23: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 11e4b788d78c3496deb02baf49d3dda730ecda9fe017d5725a744dcbb6a17e74
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051430(longlong param_1)");
        {
            trace.statement("float fVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar2 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                trace.statement("lVar2 = *(longlong *)(lVar2 + 0xec0);");
                trace.statement("fVar1 = *(float *)(lVar2 + 0x104);");
                trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)*(float *)(lVar2 + 0x100));");
                trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051430;
}

// 0x1800514e0 FUN_1800514e0
// source: re/dump/decompile/0x1800514e0_FUN_1800514e0.c
// size: 273 bytes; thunk: false
// body sha256: 2f4d7ff2b04282ac61107bdae30cc99bf5ea0c280e4970fed395f58ff187b4f1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800514e0{
    "0x1800514e0",
    "FUN_1800514e0",
    R"F1800514e0S(undefined FUN_1800514e0())F1800514e0S",
    R"B1800514e0(// 0x1800514e0  FUN_1800514e0
// size=273 thunk=false
// signature: undefined FUN_1800514e0()
// status: ok


undefined8 FUN_1800514e0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  double dVar7;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    uVar5 = 0;
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
    if (cVar3 == '\0') {
      iVar6 = 0;
    }
    else {
      uVar5 = 0;
      dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
      iVar6 = (int)dVar7;
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)(lVar2 + 0xec0) + 0x108 + (longlong)iVar6) != '\0') {
      uVar5 = 0;
      cVar3 = FUN_18027deb0(iVar6 + 0x290,0);
      if (cVar3 != '\0') {
        (*pcVar1)(plVar4,1);
        return 1;
      }
    }
    (*pcVar1)(plVar4,uVar5 & 0xffffffffffffff00);
    return 1;
  }
  return 0;
}


)B1800514e0",
    "2f4d7ff2b04282ac61107bdae30cc99bf5ea0c280e4970fed395f58ff187b4f1",
    R"F1800514e0C(FUN_180039770
FUN_18027deb0)F1800514e0C",
    R"F1800514e0D(DAT_1803ff8ec)F1800514e0D",
    R"F1800514e0T()F1800514e0T",
    R"F1800514e0F(19: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
23: if (cVar3 == '\0') {
26: else {
32: if (*(char *)(lVar2 + 0x10) == '\0') {
35: if (*(char *)(*(longlong *)(lVar2 + 0xec0) + 0x108 + (longlong)iVar6) != '\0') {
38: if (cVar3 != '\0') {
40: return 1;
44: return 1;
46: return 0;)F1800514e0F",
    R"F1800514e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 21: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 22: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);.
TODO: resolve the indirect call in body 28: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
TODO: resolve the indirect call in body 39: (*pcVar1)(plVar4,1);.
TODO: resolve the indirect call in body 43: (*pcVar1)(plVar4,uVar5 & 0xffffffffffffff00);.)F1800514e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800514e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800514e0", "FUN_1800514e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 21: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 22: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);.
    // TODO: resolve the indirect call in body 28: dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
    // TODO: resolve the indirect call in body 39: (*pcVar1)(plVar4,1);.
    // TODO: resolve the indirect call in body 43: (*pcVar1)(plVar4,uVar5 & 0xffffffffffffff00);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18027deb0", reinterpret_cast<const void*>(&image::FUN_18027deb0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: 2f4d7ff2b04282ac61107bdae30cc99bf5ea0c280e4970fed395f58ff187b4f1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800514e0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("char cVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("ulonglong uVar5;");
            trace.statement("int iVar6;");
            trace.statement("double dVar7;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("uVar5 = 0;");
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                trace.statement("cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);");
                if (trace.condition("if (cVar3 == '\\0')")) {
                    trace.statement("iVar6 = 0;");
                } else {
                trace.statement("uVar5 = 0;");
                trace.statement("dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);");
                trace.statement("iVar6 = (int)dVar7;");
                }
                trace.statement("lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                if (trace.condition("if (*(char *)(lVar2 + 0x10) == '\\0')")) {
                    trace.statement("__dyn_tls_on_demand_init();");
                }
                if (trace.condition("if (*(char *)(*(longlong *)(lVar2 + 0xec0) + 0x108 + (longlong)iVar6) != '\\0')")) {
                    trace.statement("uVar5 = 0;");
                    trace.statement("cVar3 = FUN_18027deb0(iVar6 + 0x290,0);");
                    if (trace.condition("if (cVar3 != '\\0')")) {
                        trace.statement("(*pcVar1)(plVar4,1);");
                        trace.statement("return 1;");
                    }
                }
                trace.statement("(*pcVar1)(plVar4,uVar5 & 0xffffffffffffff00);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800514e0;
}

// 0x180051600 FUN_180051600
// source: re/dump/decompile/0x180051600_FUN_180051600.c
// size: 150 bytes; thunk: false
// body sha256: bf2fb880ca460e68f7d212559198fe527ee50a2780adc3e538769261d47b6dce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051600{
    "0x180051600",
    "FUN_180051600",
    R"F180051600S(undefined FUN_180051600())F180051600S",
    R"B180051600(// 0x180051600  FUN_180051600
// size=150 thunk=false
// signature: undefined FUN_180051600()
// status: ok


undefined8 FUN_180051600(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  double dVar6;
  
  plVar5 = (longlong *)FUN_180039770();
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar5 + 0xf8);
    cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);
    if (cVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);
      iVar4 = (int)dVar6;
    }
    uVar3 = FUN_18027bce0(iVar4,0,0);
    (*pcVar1)(plVar5,uVar3);
    return 1;
  }
  return 0;
}


)B180051600",
    "bf2fb880ca460e68f7d212559198fe527ee50a2780adc3e538769261d47b6dce",
    R"F180051600C(FUN_180039770
FUN_18027bce0)F180051600C",
    R"F180051600D(DAT_1803ff8ec)F180051600D",
    R"F180051600T()F180051600T",
    R"F180051600F(18: if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
21: if (cVar2 == '\0') {
24: else {
30: return 1;
32: return 0;)F180051600F",
    R"F180051600U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar5 + 0xf8);.
TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);.
TODO: resolve the indirect call in body 25: dVar6 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);.
TODO: resolve the indirect call in body 29: (*pcVar1)(plVar5,uVar3);.)F180051600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051600() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051600", "FUN_180051600");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar5 + 0xf8);.
    // TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);.
    // TODO: resolve the indirect call in body 25: dVar6 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);.
    // TODO: resolve the indirect call in body 29: (*pcVar1)(plVar5,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18027bce0", reinterpret_cast<const void*>(&image::FUN_18027bce0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    // body sha256: bf2fb880ca460e68f7d212559198fe527ee50a2780adc3e538769261d47b6dce
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051600(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("int iVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar5 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*plVar5 + 0xf8);");
                trace.statement("cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("iVar4 = 0;");
                } else {
                trace.statement("dVar6 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);");
                trace.statement("iVar4 = (int)dVar6;");
                }
                trace.statement("uVar3 = FUN_18027bce0(iVar4,0,0);");
                trace.statement("(*pcVar1)(plVar5,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051600;
}

// 0x1800516a0 FUN_1800516a0
// source: re/dump/decompile/0x1800516a0_FUN_1800516a0.c
// size: 64 bytes; thunk: false
// body sha256: 8e1e7444276a4ef2bf7f9f4f6b9ce2351b530e72d43c0f4caf7b50b3dca451bc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800516a0{
    "0x1800516a0",
    "FUN_1800516a0",
    R"F1800516a0S(undefined FUN_1800516a0())F1800516a0S",
    R"B1800516a0(// 0x1800516a0  FUN_1800516a0
// size=64 thunk=false
// signature: undefined FUN_1800516a0()
// status: ok


undefined8 FUN_1800516a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa545);
    return 1;
  }
  return 0;
}


)B1800516a0",
    "8e1e7444276a4ef2bf7f9f4f6b9ce2351b530e72d43c0f4caf7b50b3dca451bc",
    R"F1800516a0C(FUN_180039770)F1800516a0C",
    R"F1800516a0D(DAT_1803fa545)F1800516a0D",
    R"F1800516a0T()F1800516a0T",
    R"F1800516a0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800516a0F",
    R"F1800516a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa545.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa545);.)F1800516a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800516a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800516a0", "FUN_1800516a0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa545.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa545);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa545", static_cast<const void*>(&image::DAT_1803fa545));
    // body sha256: 8e1e7444276a4ef2bf7f9f4f6b9ce2351b530e72d43c0f4caf7b50b3dca451bc
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800516a0(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa545);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800516a0;
}

// 0x1800516e0 FUN_1800516e0
// source: re/dump/decompile/0x1800516e0_FUN_1800516e0.c
// size: 272 bytes; thunk: false
// body sha256: f36184b620017fa814478a794aae7a84a431c383d5df7341851c26e77730e40b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800516e0{
    "0x1800516e0",
    "FUN_1800516e0",
    R"F1800516e0S(undefined FUN_1800516e0())F1800516e0S",
    R"B1800516e0(// 0x1800516e0  FUN_1800516e0
// size=272 thunk=false
// signature: undefined FUN_1800516e0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800516e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  char *_Str2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      _Str2 = "";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      _Str2 = "";
      if (pcVar4 != (char *)0x0) {
        _Str2 = pcVar4;
      }
    }
    if (*_Str2 != '\0') {
      iVar6 = 0;
      do {
        pcVar4 = (char *)FUN_18026ae50(iVar6);
        if (pcVar4 != (char *)0x0) {
          iVar2 = _stricmp(pcVar4,_Str2);
          if (iVar2 == 0) {
            local_28 = _DAT_180381760;
            uStack_20 = _UNK_180381768;
            uVar5 = FUN_180049dc0(local_18,plVar3,2,&local_28);
            FUN_18026a810(iVar6,uVar5);
            DAT_1803ff7a0 = DAT_1803ff7a0 + 1;
            return 0;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x3d);
    }
    FUN_180049960("ImGui.PushStyleColor with an unknown colour name -- ignored");
  }
  return 0;
}


)B1800516e0",
    "f36184b620017fa814478a794aae7a84a431c383d5df7341851c26e77730e40b",
    R"F1800516e0C(FUN_180039770
FUN_180049960
FUN_180049dc0
FUN_18026a810
FUN_18026ae50)F1800516e0C",
    R"F1800516e0D(DAT_1803ff7a0
DAT_1803ff8ec)F1800516e0D",
    R"F1800516e0T(""
"ImGui.PushStyleColor with an unknown colour name -- ignored")F1800516e0T",
    R"F1800516e0F(24: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
26: if (cVar1 == '\0') {
29: else {
32: if (pcVar4 != (char *)0x0) {
36: if (*_Str2 != '\0') {
38: do {
40: if (pcVar4 != (char *)0x0) {
42: if (iVar2 == 0) {
48: return 0;
56: return 0;)F1800516e0F",
    R"F1800516e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff7a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 25: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 30: pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.)F1800516e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800516e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800516e0", "FUN_1800516e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff7a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 25: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 30: pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049960", reinterpret_cast<const void*>(&image::FUN_180049960));
    trace.call_target("FUN_180049dc0", reinterpret_cast<const void*>(&image::FUN_180049dc0));
    trace.call_target("FUN_18026a810", reinterpret_cast<const void*>(&image::FUN_18026a810));
    trace.call_target("FUN_18026ae50", reinterpret_cast<const void*>(&image::FUN_18026ae50));
    trace.data_ref("DAT_1803ff7a0", static_cast<const void*>(&image::DAT_1803ff7a0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("");
    trace.string_literal("ImGui.PushStyleColor with an unknown colour name -- ignored");
    // body sha256: f36184b620017fa814478a794aae7a84a431c383d5df7341851c26e77730e40b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800516e0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("char *pcVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("int iVar6;");
            trace.statement("char *_Str2;");
            trace.statement("undefined8 local_28;");
            trace.statement("undefined8 uStack_20;");
            trace.statement("undefined1 local_18 [16];");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("_Str2 = \"\";");
                } else {
                trace.statement("pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
                trace.statement("_Str2 = \"\";");
                if (trace.condition("if (pcVar4 != (char *)0x0)")) {
                    trace.statement("_Str2 = pcVar4;");
                }
                }
                if (trace.condition("if (*_Str2 != '\\0')")) {
                    trace.statement("iVar6 = 0;");
                    do {
                        trace.statement("pcVar4 = (char *)FUN_18026ae50(iVar6);");
                        if (trace.condition("if (pcVar4 != (char *)0x0)")) {
                            trace.statement("iVar2 = _stricmp(pcVar4,_Str2);");
                            if (trace.condition("if (iVar2 == 0)")) {
                                trace.statement("local_28 = _DAT_180381760;");
                                trace.statement("uStack_20 = _UNK_180381768;");
                                trace.statement("uVar5 = FUN_180049dc0(local_18,plVar3,2,&local_28);");
                                trace.statement("FUN_18026a810(iVar6,uVar5);");
                                trace.statement("DAT_1803ff7a0 = DAT_1803ff7a0 + 1;");
                                trace.statement("return 0;");
                            }
                        }
                        trace.statement("iVar6 = iVar6 + 1;");
                    } while (trace.loop_condition("while (iVar6 < 0x3d);"));
                }
                trace.statement("FUN_180049960(\"ImGui.PushStyleColor with an unknown colour name -- ignored\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800516e0;
}

// 0x1800517f0 FUN_1800517f0
// source: re/dump/decompile/0x1800517f0_FUN_1800517f0.c
// size: 157 bytes; thunk: false
// body sha256: a57cfb4173de43167052032b35166018eab71ab8615d377a22989f90969dbd66
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800517f0{
    "0x1800517f0",
    "FUN_1800517f0",
    R"F1800517f0S(undefined FUN_1800517f0())F1800517f0S",
    R"B1800517f0(// 0x1800517f0  FUN_1800517f0
// size=157 thunk=false
// signature: undefined FUN_1800517f0()
// status: ok


undefined8 FUN_1800517f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    iVar3 = 1;
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      iVar3 = (int)dVar4;
    }
    if (DAT_1803ff7a0 < iVar3) {
      iVar3 = DAT_1803ff7a0;
    }
    if (iVar3 < 1) {
      FUN_180049960("ImGui.PopStyleColor without a matching PushStyleColor -- ignored");
      return 0;
    }
    DAT_1803ff7a0 = DAT_1803ff7a0 - iVar3;
    FUN_18026a890(iVar3);
  }
  return 0;
}


)B1800517f0",
    "a57cfb4173de43167052032b35166018eab71ab8615d377a22989f90969dbd66",
    R"F1800517f0C(FUN_180039770
FUN_180049960
FUN_18026a890)F1800517f0C",
    R"F1800517f0D(DAT_1803ff7a0
DAT_1803ff8ec)F1800517f0D",
    R"F1800517f0T("ImGui.PopStyleColor without a matching PushStyleColor -- ignored")F1800517f0T",
    R"F1800517f0F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
19: if (cVar1 != '\0') {
23: if (DAT_1803ff7a0 < iVar3) {
26: if (iVar3 < 1) {
28: return 0;
33: return 0;)F1800517f0F",
    R"F1800517f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff7a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 18: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800517f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800517f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800517f0", "FUN_1800517f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff7a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 18: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049960", reinterpret_cast<const void*>(&image::FUN_180049960));
    trace.call_target("FUN_18026a890", reinterpret_cast<const void*>(&image::FUN_18026a890));
    trace.data_ref("DAT_1803ff7a0", static_cast<const void*>(&image::DAT_1803ff7a0));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("ImGui.PopStyleColor without a matching PushStyleColor -- ignored");
    // body sha256: a57cfb4173de43167052032b35166018eab71ab8615d377a22989f90969dbd66
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800517f0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("int iVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("iVar3 = 1;");
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("iVar3 = (int)dVar4;");
                }
                if (trace.condition("if (DAT_1803ff7a0 < iVar3)")) {
                    trace.statement("iVar3 = DAT_1803ff7a0;");
                }
                if (trace.condition("if (iVar3 < 1)")) {
                    trace.statement("FUN_180049960(\"ImGui.PopStyleColor without a matching PushStyleColor -- ignored\");");
                    trace.statement("return 0;");
                }
                trace.statement("DAT_1803ff7a0 = DAT_1803ff7a0 - iVar3;");
                trace.statement("FUN_18026a890(iVar3);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800517f0;
}

// 0x180051890 FUN_180051890
// source: re/dump/decompile/0x180051890_FUN_180051890.c
// size: 492 bytes; thunk: false
// body sha256: c691eefc22c8c4ad85bd736a24bf16fa3f678b23bb27f49a33a46f7396b3e389
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051890{
    "0x180051890",
    "FUN_180051890",
    R"F180051890S(undefined FUN_180051890())F180051890S",
    R"B180051890(// 0x180051890  FUN_180051890
// size=492 thunk=false
// signature: undefined FUN_180051890()
// status: ok


undefined8 FUN_180051890(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined **ppuVar5;
  char *_Str2;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      _Str2 = "";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      _Str2 = "";
      if (pcVar4 != (char *)0x0) {
        _Str2 = pcVar4;
      }
    }
    if (*_Str2 != '\0') {
      ppuVar5 = &PTR_s_Alpha_18033e000;
      do {
        iVar2 = _stricmp(*ppuVar5,_Str2);
        if (iVar2 == 0) {
          iVar2 = *(int *)(ppuVar5 + 1);
          if (-1 < iVar2) {
            if (&DAT_180331c70 + (longlong)iVar2 * 4 == (char *)0x0) {
              return 0;
            }
            if ((&DAT_180331c70)[(longlong)iVar2 * 4] != '\x02') {
              cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
              if (cVar1 == '\0') {
                FUN_18026a940(iVar2,0);
                DAT_1803ff7ac = DAT_1803ff7ac + 1;
                return 0;
              }
              dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
              FUN_18026a940(iVar2,(float)dVar6);
              DAT_1803ff7ac = DAT_1803ff7ac + 1;
              return 0;
            }
            cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
            fVar7 = 0.0;
            if (cVar1 == '\0') {
              fVar8 = 0.0;
            }
            else {
              dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
              fVar8 = (float)dVar6;
            }
            cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
            if (cVar1 != '\0') {
              dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
              fVar7 = (float)dVar6;
            }
            local_res8 = CONCAT44(fVar8,fVar7);
            FUN_18026aad0(iVar2,&local_res8);
            DAT_1803ff7ac = DAT_1803ff7ac + 1;
            return 0;
          }
          break;
        }
        ppuVar5 = ppuVar5 + 2;
      } while (ppuVar5 != &Features::EntityChams::EntityChamsFeature::vftable_meta_ptr);
    }
    FUN_180049960("ImGui.PushStyleVar with an unknown variable name -- ignored");
  }
  return 0;
}


)B180051890",
    "c691eefc22c8c4ad85bd736a24bf16fa3f678b23bb27f49a33a46f7396b3e389",
    R"F180051890C(FUN_180039770
FUN_180049960
FUN_18026a940
FUN_18026aad0)F180051890C",
    R"F180051890D(DAT_180331c70
DAT_1803ff7ac
DAT_1803ff8ec)F180051890D",
    R"F180051890T(""
"ImGui.PushStyleVar with an unknown variable name -- ignored")F180051890T",
    R"F180051890F(23: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) && (DAT_1803ff8ec != '\0')) {
25: if (cVar1 == '\0') {
28: else {
31: if (pcVar4 != (char *)0x0) {
35: if (*_Str2 != '\0') {
37: do {
39: if (iVar2 == 0) {
41: if (-1 < iVar2) {
42: if (&DAT_180331c70 + (longlong)iVar2 * 4 == (char *)0x0) {
43: return 0;
45: if ((&DAT_180331c70)[(longlong)iVar2 * 4] != '\x02') {
47: if (cVar1 == '\0') {
50: return 0;
55: return 0;
59: if (cVar1 == '\0') {
62: else {
67: if (cVar1 != '\0') {
74: return 0;
76: break;
83: return 0;)F180051890F",
    R"F180051890U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180331c70.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff7ac.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 24: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
TODO: resolve the indirect call in body 29: pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
TODO: resolve the indirect call in body 46: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 52: dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
TODO: resolve the indirect call in body 57: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
TODO: resolve the indirect call in body 63: dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
TODO: resolve the indirect call in body 66: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
TODO: resolve the indirect call in body 68: dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.)F180051890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051890() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051890", "FUN_180051890");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180331c70.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff7ac.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 24: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);.
    // TODO: resolve the indirect call in body 29: pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);.
    // TODO: resolve the indirect call in body 46: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 52: dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: resolve the indirect call in body 57: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);.
    // TODO: resolve the indirect call in body 63: dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);.
    // TODO: resolve the indirect call in body 66: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);.
    // TODO: resolve the indirect call in body 68: dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049960", reinterpret_cast<const void*>(&image::FUN_180049960));
    trace.call_target("FUN_18026a940", reinterpret_cast<const void*>(&image::FUN_18026a940));
    trace.call_target("FUN_18026aad0", reinterpret_cast<const void*>(&image::FUN_18026aad0));
    trace.data_ref("DAT_180331c70", static_cast<const void*>(&image::DAT_180331c70));
    trace.data_ref("DAT_1803ff7ac", static_cast<const void*>(&image::DAT_1803ff7ac));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("");
    trace.string_literal("ImGui.PushStyleVar with an unknown variable name -- ignored");
    // body sha256: c691eefc22c8c4ad85bd736a24bf16fa3f678b23bb27f49a33a46f7396b3e389
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051890(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("char *pcVar4;");
            trace.statement("undefined **ppuVar5;");
            trace.statement("char *_Str2;");
            trace.statement("double dVar6;");
            trace.statement("float fVar7;");
            trace.statement("float fVar8;");
            trace.statement("undefined8 local_res8;");
            trace.statement("local_res8 = param_1;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("_Str2 = \"\";");
                } else {
                trace.statement("pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);");
                trace.statement("_Str2 = \"\";");
                if (trace.condition("if (pcVar4 != (char *)0x0)")) {
                    trace.statement("_Str2 = pcVar4;");
                }
                }
                if (trace.condition("if (*_Str2 != '\\0')")) {
                    trace.statement("ppuVar5 = &PTR_s_Alpha_18033e000;");
                    do {
                        trace.statement("iVar2 = _stricmp(*ppuVar5,_Str2);");
                        if (trace.condition("if (iVar2 == 0)")) {
                            trace.statement("iVar2 = *(int *)(ppuVar5 + 1);");
                            if (trace.condition("if (-1 < iVar2)")) {
                                if (trace.condition("if (&DAT_180331c70 + (longlong)iVar2 * 4 == (char *)0x0)")) {
                                    trace.statement("return 0;");
                                }
                                if (trace.condition("if ((&DAT_180331c70)[(longlong)iVar2 * 4] != '\\x02')")) {
                                    trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
                                    if (trace.condition("if (cVar1 == '\\0')")) {
                                        trace.statement("FUN_18026a940(iVar2,0);");
                                        trace.statement("DAT_1803ff7ac = DAT_1803ff7ac + 1;");
                                        trace.statement("return 0;");
                                    }
                                    trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
                                    trace.statement("FUN_18026a940(iVar2,(float)dVar6);");
                                    trace.statement("DAT_1803ff7ac = DAT_1803ff7ac + 1;");
                                    trace.statement("return 0;");
                                }
                                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);");
                                trace.statement("fVar7 = 0.0;");
                                if (trace.condition("if (cVar1 == '\\0')")) {
                                    trace.statement("fVar8 = 0.0;");
                                } else {
                                trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);");
                                trace.statement("fVar8 = (float)dVar6;");
                                }
                                trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);");
                                if (trace.condition("if (cVar1 != '\\0')")) {
                                    trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);");
                                    trace.statement("fVar7 = (float)dVar6;");
                                }
                                trace.statement("local_res8 = CONCAT44(fVar8,fVar7);");
                                trace.statement("FUN_18026aad0(iVar2,&local_res8);");
                                trace.statement("DAT_1803ff7ac = DAT_1803ff7ac + 1;");
                                trace.statement("return 0;");
                            }
                            trace.statement("break;");
                        }
                        trace.statement("ppuVar5 = ppuVar5 + 2;");
                    } while (trace.loop_condition("while (ppuVar5 != &Features::EntityChams::EntityChamsFeature::vftable_meta_ptr);"));
                }
                trace.statement("FUN_180049960(\"ImGui.PushStyleVar with an unknown variable name -- ignored\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051890;
}

// 0x180051a90 FUN_180051a90
// source: re/dump/decompile/0x180051a90_FUN_180051a90.c
// size: 157 bytes; thunk: false
// body sha256: 469243bba4b0287b7eebcccc90aeb14606e3de04ab5fdbda13b8c453c335cdd1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051a90{
    "0x180051a90",
    "FUN_180051a90",
    R"F180051a90S(undefined FUN_180051a90())F180051a90S",
    R"B180051a90(// 0x180051a90  FUN_180051a90
// size=157 thunk=false
// signature: undefined FUN_180051a90()
// status: ok


undefined8 FUN_180051a90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    iVar3 = 1;
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      iVar3 = (int)dVar4;
    }
    if (DAT_1803ff7ac < iVar3) {
      iVar3 = DAT_1803ff7ac;
    }
    if (iVar3 < 1) {
      FUN_180049960("ImGui.PopStyleVar without a matching PushStyleVar -- ignored");
      return 0;
    }
    DAT_1803ff7ac = DAT_1803ff7ac - iVar3;
    FUN_18026abb0(iVar3);
  }
  return 0;
}


)B180051a90",
    "469243bba4b0287b7eebcccc90aeb14606e3de04ab5fdbda13b8c453c335cdd1",
    R"F180051a90C(FUN_180039770
FUN_180049960
FUN_18026abb0)F180051a90C",
    R"F180051a90D(DAT_1803ff7ac
DAT_1803ff8ec)F180051a90D",
    R"F180051a90T("ImGui.PopStyleVar without a matching PushStyleVar -- ignored")F180051a90T",
    R"F180051a90F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
19: if (cVar1 != '\0') {
23: if (DAT_1803ff7ac < iVar3) {
26: if (iVar3 < 1) {
28: return 0;
33: return 0;)F180051a90F",
    R"F180051a90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff7ac.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff8ec.
TODO: resolve the indirect call in body 18: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F180051a90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051a90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051a90", "FUN_180051a90");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff7ac.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff8ec.
    // TODO: resolve the indirect call in body 18: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180049960", reinterpret_cast<const void*>(&image::FUN_180049960));
    trace.call_target("FUN_18026abb0", reinterpret_cast<const void*>(&image::FUN_18026abb0));
    trace.data_ref("DAT_1803ff7ac", static_cast<const void*>(&image::DAT_1803ff7ac));
    trace.data_ref("DAT_1803ff8ec", static_cast<const void*>(&image::DAT_1803ff8ec));
    trace.string_literal("ImGui.PopStyleVar without a matching PushStyleVar -- ignored");
    // body sha256: 469243bba4b0287b7eebcccc90aeb14606e3de04ab5fdbda13b8c453c335cdd1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051a90(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("int iVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\\0'))")) {
                trace.statement("iVar3 = 1;");
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("iVar3 = (int)dVar4;");
                }
                if (trace.condition("if (DAT_1803ff7ac < iVar3)")) {
                    trace.statement("iVar3 = DAT_1803ff7ac;");
                }
                if (trace.condition("if (iVar3 < 1)")) {
                    trace.statement("FUN_180049960(\"ImGui.PopStyleVar without a matching PushStyleVar -- ignored\");");
                    trace.statement("return 0;");
                }
                trace.statement("DAT_1803ff7ac = DAT_1803ff7ac - iVar3;");
                trace.statement("FUN_18026abb0(iVar3);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051a90;
}

// 0x180051b30 FUN_180051b30
// source: re/dump/decompile/0x180051b30_FUN_180051b30.c
// size: 278 bytes; thunk: false
// body sha256: 986ddc04ec513cd3865099faa6158d298988b108170b26ed765bdaa99d6657d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051b30{
    "0x180051b30",
    "FUN_180051b30",
    R"F180051b30S(undefined FUN_180051b30())F180051b30S",
    R"B180051b30(// 0x180051b30  FUN_180051b30
// size=278 thunk=false
// signature: undefined FUN_180051b30()
// status: ok


undefined8 FUN_180051b30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  char *_Str2;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
  if (cVar2 == '\0') {
    _Str2 = "";
  }
  else {
    pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
    _Str2 = "";
    if (pcVar5 != (char *)0x0) {
      _Str2 = pcVar5;
    }
  }
  if (*_Str2 != '\0') {
    uVar7 = 0;
    do {
      pcVar5 = (char *)FUN_18026ae50(uVar7);
      if ((pcVar5 != (char *)0x0) && (iVar3 = _stricmp(pcVar5,_Str2), iVar3 == 0)) {
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        FUN_18004a030(plVar4,(uVar7 + 0xdb) * 0x10 + *(longlong *)(lVar1 + 0xec0));
        return 1;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < 0x3d);
  }
  (**(code **)(*plVar4 + 0xe0))(plVar4);
  return 1;
}


)B180051b30",
    "986ddc04ec513cd3865099faa6158d298988b108170b26ed765bdaa99d6657d0",
    R"F180051b30C(FUN_180039770
FUN_18004a030
FUN_18026ae50)F180051b30C",
    R"F180051b30D()F180051b30D",
    R"F180051b30T("")F180051b30T",
    R"F180051b30F(20: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
21: return 0;
24: if (cVar2 == '\0') {
27: else {
30: if (pcVar5 != (char *)0x0) {
34: if (*_Str2 != '\0') {
36: do {
38: if ((pcVar5 != (char *)0x0) && (iVar3 = _stricmp(pcVar5,_Str2), iVar3 == 0)) {
40: if (*(char *)(lVar1 + 0x10) == '\0') {
44: return 1;
51: return 1;)F180051b30F",
    R"F180051b30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 23: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 28: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 50: (**(code **)(*plVar4 + 0xe0))(plVar4);.)F180051b30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051b30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051b30", "FUN_180051b30");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 23: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 28: pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 50: (**(code **)(*plVar4 + 0xe0))(plVar4);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18004a030", reinterpret_cast<const void*>(&image::FUN_18004a030));
    trace.call_target("FUN_18026ae50", reinterpret_cast<const void*>(&image::FUN_18026ae50));
    trace.string_literal("");
    // body sha256: 986ddc04ec513cd3865099faa6158d298988b108170b26ed765bdaa99d6657d0
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051b30(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("char *pcVar5;");
            trace.statement("uint uVar6;");
            trace.statement("ulonglong uVar7;");
            trace.statement("char *_Str2;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("_Str2 = \"\";");
            } else {
            trace.statement("pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
            trace.statement("_Str2 = \"\";");
            if (trace.condition("if (pcVar5 != (char *)0x0)")) {
                trace.statement("_Str2 = pcVar5;");
            }
            }
            if (trace.condition("if (*_Str2 != '\\0')")) {
                trace.statement("uVar7 = 0;");
                do {
                    trace.statement("pcVar5 = (char *)FUN_18026ae50(uVar7);");
                    if (trace.condition("if ((pcVar5 != (char *)0x0) && (iVar3 = _stricmp(pcVar5,_Str2), iVar3 == 0))")) {
                        trace.statement("lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);");
                        if (trace.condition("if (*(char *)(lVar1 + 0x10) == '\\0')")) {
                            trace.statement("__dyn_tls_on_demand_init();");
                        }
                        trace.statement("FUN_18004a030(plVar4,(uVar7 + 0xdb) * 0x10 + *(longlong *)(lVar1 + 0xec0));");
                        trace.statement("return 1;");
                    }
                    trace.statement("uVar6 = (int)uVar7 + 1;");
                    trace.statement("uVar7 = (ulonglong)uVar6;");
                } while (trace.loop_condition("while ((int)uVar6 < 0x3d);"));
            }
            trace.statement("(**(code **)(*plVar4 + 0xe0))(plVar4);");
            trace.statement("return 1;");
        }
    return kFunction_0x180051b30;
}

// 0x180051c50 FUN_180051c50
// source: re/dump/decompile/0x180051c50_FUN_180051c50.c
// size: 111 bytes; thunk: false
// body sha256: 3cbd070a13705a7912c3e488a8894978aee1521c205eab0b1056b1a047a08fa4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051c50{
    "0x180051c50",
    "FUN_180051c50",
    R"F180051c50S(undefined FUN_180051c50())F180051c50S",
    R"B180051c50(// 0x180051c50  FUN_180051c50
// size=111 thunk=false
// signature: undefined FUN_180051c50()
// status: ok


undefined8 FUN_180051c50(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((((DAT_1803f9290 != 0) && (DAT_1803fa658 != 0)) && (DAT_1803fa5a0 != 0)) &&
     (DAT_1803fa608 != 0)) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0;
}


)B180051c50",
    "3cbd070a13705a7912c3e488a8894978aee1521c205eab0b1056b1a047a08fa4",
    R"F180051c50C()F180051c50C",
    R"F180051c50D(DAT_1803f9290
DAT_1803fa360
DAT_1803fa5a0
DAT_1803fa608
DAT_1803fa658
DAT_1803fa668)F180051c50D",
    R"F180051c50T()F180051c50T",
    R"F180051c50F(14: if ((((DAT_1803f9290 != 0) && (DAT_1803fa658 != 0)) && (DAT_1803fa5a0 != 0)) &&
19: if (lVar3 != 0) {
20: return 1;
23: return 0;)F180051c50F",
    R"F180051c50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f9290.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa5a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa658.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 17: uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 18: lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);.)F180051c50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051c50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051c50", "FUN_180051c50");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f9290.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa5a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa658.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
    // TODO: resolve the indirect call in body 17: uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();.
    // TODO: resolve the indirect call in body 18: lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803f9290", static_cast<const void*>(&image::DAT_1803f9290));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    trace.data_ref("DAT_1803fa5a0", static_cast<const void*>(&image::DAT_1803fa5a0));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    trace.data_ref("DAT_1803fa658", static_cast<const void*>(&image::DAT_1803fa658));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 3cbd070a13705a7912c3e488a8894978aee1521c205eab0b1056b1a047a08fa4
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051c50(void)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined4 uVar2;");
            trace.statement("longlong lVar3;");
            if (trace.condition("if ((((DAT_1803f9290 != 0) && (DAT_1803fa658 != 0)) && (DAT_1803fa5a0 != 0)) && (DAT_1803fa608 != 0))")) {
                trace.statement("pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);");
                trace.statement("uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();");
                trace.statement("lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);");
                if (trace.condition("if (lVar3 != 0)")) {
                    trace.statement("return 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051c50;
}

// 0x180051cc0 FUN_180051cc0
// source: re/dump/decompile/0x180051cc0_FUN_180051cc0.c
// size: 113 bytes; thunk: false
// body sha256: 69c50e540107ebdcc5af8ba23f39f774f3a7c811c34bed05e24056a5853c272a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051cc0{
    "0x180051cc0",
    "FUN_180051cc0",
    R"F180051cc0S(undefined FUN_180051cc0())F180051cc0S",
    R"B180051cc0(// 0x180051cc0  FUN_180051cc0
// size=113 thunk=false
// signature: undefined FUN_180051cc0()
// status: ok


void FUN_180051cc0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_1803eb7a8;
  piVar2 = DAT_1803eb7a0;
  if (DAT_1803eb498 != 0) {
    while (piVar2 != piVar1) {
      if (((*piVar2 < 1) || (piVar2[1] < 1)) || (0x10 < piVar2[1])) {
        piVar2 = piVar2 + 6;
      }
      else {
        memcpy((void *)(*piVar2 + DAT_1803eb498),piVar2 + 2,(longlong)piVar2[1]);
        piVar2 = piVar2 + 6;
      }
    }
  }
  return;
}


)B180051cc0",
    "69c50e540107ebdcc5af8ba23f39f774f3a7c811c34bed05e24056a5853c272a",
    R"F180051cc0C()F180051cc0C",
    R"F180051cc0D(DAT_1803eb498
DAT_1803eb7a0
DAT_1803eb7a8)F180051cc0D",
    R"F180051cc0T()F180051cc0T",
    R"F180051cc0F(15: if (DAT_1803eb498 != 0) {
16: while (piVar2 != piVar1) {
17: if (((*piVar2 < 1) || (piVar2[1] < 1)) || (0x10 < piVar2[1])) {
20: else {
26: return;)F180051cc0F",
    R"F180051cc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb498.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7a8.)F180051cc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051cc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051cc0", "FUN_180051cc0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb498.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7a8.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803eb498", static_cast<const void*>(&image::DAT_1803eb498));
    trace.data_ref("DAT_1803eb7a0", static_cast<const void*>(&image::DAT_1803eb7a0));
    trace.data_ref("DAT_1803eb7a8", static_cast<const void*>(&image::DAT_1803eb7a8));
    // body sha256: 69c50e540107ebdcc5af8ba23f39f774f3a7c811c34bed05e24056a5853c272a
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_180051cc0(void)");
        {
            trace.statement("int *piVar1;");
            trace.statement("int *piVar2;");
            trace.statement("piVar1 = DAT_1803eb7a8;");
            trace.statement("piVar2 = DAT_1803eb7a0;");
            if (trace.condition("if (DAT_1803eb498 != 0)")) {
                while (trace.loop_condition("while (piVar2 != piVar1)")) {
                    if (trace.condition("if (((*piVar2 < 1) || (piVar2[1] < 1)) || (0x10 < piVar2[1]))")) {
                        trace.statement("piVar2 = piVar2 + 6;");
                    } else {
                    trace.statement("memcpy((void *)(*piVar2 + DAT_1803eb498),piVar2 + 2,(longlong)piVar2[1]);");
                    trace.statement("piVar2 = piVar2 + 6;");
                    }
                }
            }
            trace.statement("return;");
        }
    return kFunction_0x180051cc0;
}

// 0x180051d40 FUN_180051d40
// source: re/dump/decompile/0x180051d40_FUN_180051d40.c
// size: 122 bytes; thunk: false
// body sha256: dbecdec42a482e1b945719cadde2712397ffac5bc2112d9ff9adb621ef647c40
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051d40{
    "0x180051d40",
    "FUN_180051d40",
    R"F180051d40S(undefined FUN_180051d40())F180051d40S",
    R"B180051d40(// 0x180051d40  FUN_180051d40
// size=122 thunk=false
// signature: undefined FUN_180051d40()
// status: ok


void FUN_180051d40(void)

{
  longlong lVar1;
  
  if (DAT_1803eb490 != '\0') {
    DAT_1803eb490 = '\0';
    FUN_180051cc0();
    lVar1 = DAT_1803fa608;
    if ((DAT_1803eb79c != '\0') && (DAT_1803fa608 != 0)) {
      *(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803eb790;
      *(undefined4 *)(lVar1 + 0x18) = DAT_1803eb798;
    }
    DAT_1803eb79c = '\0';
    DAT_1803eb498 = 0;
    DAT_1803eb4a0 = 0;
    if (DAT_1803eb7a0 != DAT_1803eb7a8) {
      DAT_1803eb7a8 = DAT_1803eb7a0;
    }
  }
  return;
}


)B180051d40",
    "dbecdec42a482e1b945719cadde2712397ffac5bc2112d9ff9adb621ef647c40",
    R"F180051d40C(FUN_180051cc0)F180051d40C",
    R"F180051d40D(DAT_1803eb490
DAT_1803eb498
DAT_1803eb4a0
DAT_1803eb790
DAT_1803eb798
DAT_1803eb79c
DAT_1803eb7a0
DAT_1803eb7a8
DAT_1803fa608)F180051d40D",
    R"F180051d40T()F180051d40T",
    R"F180051d40F(12: if (DAT_1803eb490 != '\0') {
16: if ((DAT_1803eb79c != '\0') && (DAT_1803fa608 != 0)) {
23: if (DAT_1803eb7a0 != DAT_1803eb7a8) {
27: return;)F180051d40F",
    R"F180051d40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb498.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb790.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb798.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb79c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7a8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.)F180051d40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051d40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051d40", "FUN_180051d40");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb498.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb790.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb798.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb79c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7a8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180051cc0", reinterpret_cast<const void*>(&image::FUN_180051cc0));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb498", static_cast<const void*>(&image::DAT_1803eb498));
    trace.data_ref("DAT_1803eb4a0", static_cast<const void*>(&image::DAT_1803eb4a0));
    trace.data_ref("DAT_1803eb790", static_cast<const void*>(&image::DAT_1803eb790));
    trace.data_ref("DAT_1803eb798", static_cast<const void*>(&image::DAT_1803eb798));
    trace.data_ref("DAT_1803eb79c", static_cast<const void*>(&image::DAT_1803eb79c));
    trace.data_ref("DAT_1803eb7a0", static_cast<const void*>(&image::DAT_1803eb7a0));
    trace.data_ref("DAT_1803eb7a8", static_cast<const void*>(&image::DAT_1803eb7a8));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: dbecdec42a482e1b945719cadde2712397ffac5bc2112d9ff9adb621ef647c40
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_180051d40(void)");
        {
            trace.statement("longlong lVar1;");
            if (trace.condition("if (DAT_1803eb490 != '\\0')")) {
                trace.statement("DAT_1803eb490 = '\\0';");
                trace.statement("FUN_180051cc0();");
                trace.statement("lVar1 = DAT_1803fa608;");
                if (trace.condition("if ((DAT_1803eb79c != '\\0') && (DAT_1803fa608 != 0))")) {
                    trace.statement("*(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803eb790;");
                    trace.statement("*(undefined4 *)(lVar1 + 0x18) = DAT_1803eb798;");
                }
                trace.statement("DAT_1803eb79c = '\\0';");
                trace.statement("DAT_1803eb498 = 0;");
                trace.statement("DAT_1803eb4a0 = 0;");
                if (trace.condition("if (DAT_1803eb7a0 != DAT_1803eb7a8)")) {
                    trace.statement("DAT_1803eb7a8 = DAT_1803eb7a0;");
                }
            }
            trace.statement("return;");
        }
    return kFunction_0x180051d40;
}

// 0x180051dc0 FUN_180051dc0
// source: re/dump/decompile/0x180051dc0_FUN_180051dc0.c
// size: 1091 bytes; thunk: false
// body sha256: f13838ef6d3012ee45877d78e4f259999f83b06c7f6944065d7ccc7c94efeea6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180051dc0{
    "0x180051dc0",
    "FUN_180051dc0",
    R"F180051dc0S(undefined FUN_180051dc0())F180051dc0S",
    R"B180051dc0(// 0x180051dc0  FUN_180051dc0
// size=1091 thunk=false
// signature: undefined FUN_180051dc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180051dc0(void)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined1 local_138;
  int local_134;
  undefined **local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined4 *local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  if (DAT_1803eb490 != '\0') {
    FUN_180051d40();
  }
  if ((DAT_1803ff960 != 0) && (cVar5 = FUN_180051c50(), cVar5 != '\0')) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar8 = (*pcVar1)(DAT_1803fa360,uVar6);
    if (lVar8 != 0) {
      puVar13 = (undefined4 *)0x0;
      DAT_1803eb4a0 = 0;
      if (DAT_1803eb7a0 != DAT_1803eb7a8) {
        DAT_1803eb7a8 = DAT_1803eb7a0;
      }
      ppuVar12 = &PTR_s_DT_BaseEntity_180330f40;
      local_108 = (undefined **)&DAT_1803310a8;
      DAT_1803eb498 = lVar8;
      while (local_130 = ppuVar12, ppuVar12 != local_108) {
        local_134 = 0;
        local_c0 = &local_100;
        pcVar2 = *ppuVar12;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        sVar9 = strlen(pcVar2);
        FUN_18001d080(&local_100,pcVar2,sVar9);
        local_b8 = &local_100;
        local_b0 = local_a0;
        uVar10 = FUN_18016d4c0(local_a0,&local_100);
        uVar10 = FUN_180018ef0(&DAT_1803fac80,uVar10);
        FUN_18020e450(&local_100);
        local_a8 = &local_e0;
        pcVar2 = ppuVar12[1];
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        sVar9 = strlen(pcVar2);
        FUN_18001d080(&local_e0,pcVar2,sVar9);
        local_128 = &local_e0;
        local_118 = (undefined4 *)local_80;
        uVar11 = FUN_18016d4c0(local_80,&local_e0);
        iVar7 = FUN_180018c10(uVar10,uVar11);
        FUN_18020e450(&local_e0);
        local_134 = iVar7;
        if (iVar7 < 1) {
          ppuVar12 = ppuVar12 + 3;
        }
        else {
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_5c = *(undefined4 *)(ppuVar12 + 2);
          local_60 = iVar7;
          memcpy(&uStack_58,(void *)(iVar7 + DAT_1803eb498),(longlong)*(int *)(ppuVar12 + 2));
          puVar3 = DAT_1803eb7a8;
          if (DAT_1803eb7a8 == DAT_1803eb7b0) {
            FUN_180224820(&DAT_1803eb7a0,DAT_1803eb7a8,&local_60);
          }
          else {
            *DAT_1803eb7a8 = CONCAT44(uStack_5c,local_60);
            puVar3[1] = uStack_58;
            puVar3[2] = uStack_50;
            DAT_1803eb7a8 = DAT_1803eb7a8 + 3;
          }
          ppuVar12 = ppuVar12 + 3;
        }
      }
      DAT_1803eb790 = *(undefined8 *)(DAT_1803fa608 + 0x10);
      DAT_1803eb798 = *(undefined4 *)(DAT_1803fa608 + 0x18);
      DAT_1803eb79c = 1;
      _DAT_1803eb788 = (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);
      FUN_180052250(&DAT_1803eb648);
      memset(&DAT_1803eb4a4,0,0x1a4);
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      FUN_180024b50(&local_128);
      lVar8 = DAT_1803eb498;
      cVar5 = (char)uStack_120;
      if (cVar5 != '\0') {
        local_118 = (undefined4 *)0x0;
        uVar6 = 0;
        local_110 = 0;
        FUN_180024cd0();
        if ((lVar8 != 0) && (-1 < DAT_1803e6ed0)) {
          puVar13 = (undefined4 *)(lVar8 + DAT_1803e6ed0);
          uVar6 = *puVar13;
          *puVar13 = 0x4e6e6b28;
          local_118 = puVar13;
          local_110 = uVar6;
        }
        uVar4 = DAT_1803fe4ac;
        local_138 = DAT_1803fe4ac;
        DAT_1803fe4ac = 1;
        local_148 = &DAT_1803eb4a4;
        (**(code **)(*DAT_1803f9290 + 0x90))
                  (DAT_1803f9290,DAT_1803eb498,&DAT_1803eb648,DAT_1803fa5a0);
        DAT_1803fe4ac = uVar4;
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = uVar6;
        }
        if ((cVar5 != '\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)) {
          *DAT_1803fa368 = local_128;
        }
        DAT_1803eb490 = 1;
        return 1;
      }
      FUN_180051cc0();
      lVar8 = DAT_1803fa608;
      DAT_1803eb79c = cVar5;
      if (DAT_1803fa608 != 0) {
        *(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803eb790;
        *(undefined4 *)(lVar8 + 0x18) = DAT_1803eb798;
      }
      DAT_1803eb498 = 0;
      if (DAT_1803eb7a0 != DAT_1803eb7a8) {
        DAT_1803eb7a8 = DAT_1803eb7a0;
      }
    }
  }
  return 0;
}


)B180051dc0",
    "f13838ef6d3012ee45877d78e4f259999f83b06c7f6944065d7ccc7c94efeea6",
    R"F180051dc0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_180024b50
FUN_180024cd0
FUN_180051c50
FUN_180051cc0
FUN_180051d40
FUN_180052250
FUN_18016d4c0
FUN_18020e450
FUN_180224820)F180051dc0C",
    R"F180051dc0D(DAT_1803310a8
DAT_1803da4c0
DAT_1803de068
DAT_1803e6ed0
DAT_1803eb490
DAT_1803eb498
DAT_1803eb4a0
DAT_1803eb4a4
DAT_1803eb648
DAT_1803eb790
DAT_1803eb798
DAT_1803eb79c
DAT_1803eb7a0
DAT_1803eb7a8
DAT_1803eb7b0
DAT_1803f9290
DAT_1803fa360
DAT_1803fa368
DAT_1803fa5a0
DAT_1803fa608
DAT_1803fa668
DAT_1803fac80
DAT_1803fe4ac
DAT_1803ff960)F180051dc0D",
    R"F180051dc0T()F180051dc0T",
    R"F180051dc0F(57: if (DAT_1803eb490 != '\0') {
60: if ((DAT_1803ff960 != 0) && (cVar5 = FUN_180051c50(), cVar5 != '\0')) {
64: if (lVar8 != 0) {
67: if (DAT_1803eb7a0 != DAT_1803eb7a8) {
73: while (local_130 = ppuVar12, ppuVar12 != local_108) {
102: if (iVar7 < 1) {
105: else {
112: if (DAT_1803eb7a8 == DAT_1803eb7b0) {
115: else {
135: if (cVar5 != '\0') {
140: if ((lVar8 != 0) && (-1 < DAT_1803e6ed0)) {
154: if (puVar13 != (undefined4 *)0x0) {
157: if ((cVar5 != '\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)) {
161: return 1;
166: if (DAT_1803fa608 != 0) {
171: if (DAT_1803eb7a0 != DAT_1803eb7a8) {
176: return 0;)F180051dc0F",
    R"F180051dc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803310a8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803de068.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e6ed0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb498.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4a4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb648.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb790.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb798.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb79c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7a8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb7b0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f9290.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa368.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa5a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac80.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fe4ac.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 61: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 62: uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 63: lVar8 = (*pcVar1)(DAT_1803fa360,uVar6);.
TODO: resolve the indirect call in body 151: (**(code **)(*DAT_1803f9290 + 0x90)).)F180051dc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180051dc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180051dc0", "FUN_180051dc0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803310a8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803de068.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e6ed0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb498.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4a4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb648.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb790.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb798.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb79c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7a8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb7b0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f9290.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa368.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa5a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac80.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fe4ac.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 61: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
    // TODO: resolve the indirect call in body 62: uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();.
    // TODO: resolve the indirect call in body 63: lVar8 = (*pcVar1)(DAT_1803fa360,uVar6);.
    // TODO: resolve the indirect call in body 151: (**(code **)(*DAT_1803f9290 + 0x90)).
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180018c10", reinterpret_cast<const void*>(&image::FUN_180018c10));
    trace.call_target("FUN_180018ef0", reinterpret_cast<const void*>(&image::FUN_180018ef0));
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_180024b50", reinterpret_cast<const void*>(&image::FUN_180024b50));
    trace.call_target("FUN_180024cd0", reinterpret_cast<const void*>(&image::FUN_180024cd0));
    trace.call_target("FUN_180051c50", reinterpret_cast<const void*>(&image::FUN_180051c50));
    trace.call_target("FUN_180051cc0", reinterpret_cast<const void*>(&image::FUN_180051cc0));
    trace.call_target("FUN_180051d40", reinterpret_cast<const void*>(&image::FUN_180051d40));
    trace.call_target("FUN_180052250", reinterpret_cast<const void*>(&image::FUN_180052250));
    trace.call_target("FUN_18016d4c0", reinterpret_cast<const void*>(&image::FUN_18016d4c0));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.call_target("FUN_180224820", reinterpret_cast<const void*>(&image::FUN_180224820));
    trace.data_ref("DAT_1803310a8", static_cast<const void*>(&image::DAT_1803310a8));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803de068", static_cast<const void*>(&image::DAT_1803de068));
    trace.data_ref("DAT_1803e6ed0", static_cast<const void*>(&image::DAT_1803e6ed0));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb498", static_cast<const void*>(&image::DAT_1803eb498));
    trace.data_ref("DAT_1803eb4a0", static_cast<const void*>(&image::DAT_1803eb4a0));
    trace.data_ref("DAT_1803eb4a4", static_cast<const void*>(&image::DAT_1803eb4a4));
    trace.data_ref("DAT_1803eb648", static_cast<const void*>(&image::DAT_1803eb648));
    trace.data_ref("DAT_1803eb790", static_cast<const void*>(&image::DAT_1803eb790));
    trace.data_ref("DAT_1803eb798", static_cast<const void*>(&image::DAT_1803eb798));
    trace.data_ref("DAT_1803eb79c", static_cast<const void*>(&image::DAT_1803eb79c));
    trace.data_ref("DAT_1803eb7a0", static_cast<const void*>(&image::DAT_1803eb7a0));
    trace.data_ref("DAT_1803eb7a8", static_cast<const void*>(&image::DAT_1803eb7a8));
    trace.data_ref("DAT_1803eb7b0", static_cast<const void*>(&image::DAT_1803eb7b0));
    trace.data_ref("DAT_1803f9290", static_cast<const void*>(&image::DAT_1803f9290));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    trace.data_ref("DAT_1803fa368", static_cast<const void*>(&image::DAT_1803fa368));
    trace.data_ref("DAT_1803fa5a0", static_cast<const void*>(&image::DAT_1803fa5a0));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    trace.data_ref("DAT_1803fac80", static_cast<const void*>(&image::DAT_1803fac80));
    trace.data_ref("DAT_1803fe4ac", static_cast<const void*>(&image::DAT_1803fe4ac));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: f13838ef6d3012ee45877d78e4f259999f83b06c7f6944065d7ccc7c94efeea6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180051dc0(void)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char *pcVar2;");
            trace.statement("undefined8 *puVar3;");
            trace.statement("undefined1 uVar4;");
            trace.statement("char cVar5;");
            trace.statement("undefined4 uVar6;");
            trace.statement("int iVar7;");
            trace.statement("longlong lVar8;");
            trace.statement("size_t sVar9;");
            trace.statement("undefined8 uVar10;");
            trace.statement("undefined8 uVar11;");
            trace.statement("undefined **ppuVar12;");
            trace.statement("undefined4 *puVar13;");
            trace.statement("undefined1 auStack_168 [32];");
            trace.statement("undefined *local_148;");
            trace.statement("undefined1 local_138;");
            trace.statement("int local_134;");
            trace.statement("undefined **local_130;");
            trace.statement("undefined8 *local_128;");
            trace.statement("undefined8 uStack_120;");
            trace.statement("undefined4 *local_118;");
            trace.statement("undefined4 local_110;");
            trace.statement("undefined **local_108;");
            trace.statement("undefined8 local_100;");
            trace.statement("undefined8 uStack_f8;");
            trace.statement("undefined8 local_f0;");
            trace.statement("undefined8 local_e8;");
            trace.statement("undefined8 local_e0;");
            trace.statement("undefined8 uStack_d8;");
            trace.statement("undefined8 local_d0;");
            trace.statement("undefined8 local_c8;");
            trace.statement("undefined8 *local_c0;");
            trace.statement("undefined8 *local_b8;");
            trace.statement("undefined1 *local_b0;");
            trace.statement("undefined8 *local_a8;");
            trace.statement("undefined1 local_a0 [32];");
            trace.statement("undefined1 local_80 [32];");
            trace.statement("int local_60;");
            trace.statement("undefined4 uStack_5c;");
            trace.statement("undefined8 uStack_58;");
            trace.statement("undefined8 uStack_50;");
            trace.statement("ulonglong local_48;");
            trace.statement("local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_168;");
            if (trace.condition("if (DAT_1803eb490 != '\\0')")) {
                trace.statement("FUN_180051d40();");
            }
            if (trace.condition("if ((DAT_1803ff960 != 0) && (cVar5 = FUN_180051c50(), cVar5 != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);");
                trace.statement("uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();");
                trace.statement("lVar8 = (*pcVar1)(DAT_1803fa360,uVar6);");
                if (trace.condition("if (lVar8 != 0)")) {
                    trace.statement("puVar13 = (undefined4 *)0x0;");
                    trace.statement("DAT_1803eb4a0 = 0;");
                    if (trace.condition("if (DAT_1803eb7a0 != DAT_1803eb7a8)")) {
                        trace.statement("DAT_1803eb7a8 = DAT_1803eb7a0;");
                    }
                    trace.statement("ppuVar12 = &PTR_s_DT_BaseEntity_180330f40;");
                    trace.statement("local_108 = (undefined **)&DAT_1803310a8;");
                    trace.statement("DAT_1803eb498 = lVar8;");
                    while (trace.loop_condition("while (local_130 = ppuVar12, ppuVar12 != local_108)")) {
                        trace.statement("local_134 = 0;");
                        trace.statement("local_c0 = &local_100;");
                        trace.statement("pcVar2 = *ppuVar12;");
                        trace.statement("local_100 = 0;");
                        trace.statement("uStack_f8 = 0;");
                        trace.statement("local_f0 = 0;");
                        trace.statement("local_e8 = 0;");
                        trace.statement("sVar9 = strlen(pcVar2);");
                        trace.statement("FUN_18001d080(&local_100,pcVar2,sVar9);");
                        trace.statement("local_b8 = &local_100;");
                        trace.statement("local_b0 = local_a0;");
                        trace.statement("uVar10 = FUN_18016d4c0(local_a0,&local_100);");
                        trace.statement("uVar10 = FUN_180018ef0(&DAT_1803fac80,uVar10);");
                        trace.statement("FUN_18020e450(&local_100);");
                        trace.statement("local_a8 = &local_e0;");
                        trace.statement("pcVar2 = ppuVar12[1];");
                        trace.statement("local_e0 = 0;");
                        trace.statement("uStack_d8 = 0;");
                        trace.statement("local_d0 = 0;");
                        trace.statement("local_c8 = 0;");
                        trace.statement("sVar9 = strlen(pcVar2);");
                        trace.statement("FUN_18001d080(&local_e0,pcVar2,sVar9);");
                        trace.statement("local_128 = &local_e0;");
                        trace.statement("local_118 = (undefined4 *)local_80;");
                        trace.statement("uVar11 = FUN_18016d4c0(local_80,&local_e0);");
                        trace.statement("iVar7 = FUN_180018c10(uVar10,uVar11);");
                        trace.statement("FUN_18020e450(&local_e0);");
                        trace.statement("local_134 = iVar7;");
                        if (trace.condition("if (iVar7 < 1)")) {
                            trace.statement("ppuVar12 = ppuVar12 + 3;");
                        } else {
                        trace.statement("uStack_58 = 0;");
                        trace.statement("uStack_50 = 0;");
                        trace.statement("uStack_5c = *(undefined4 *)(ppuVar12 + 2);");
                        trace.statement("local_60 = iVar7;");
                        trace.statement("memcpy(&uStack_58,(void *)(iVar7 + DAT_1803eb498),(longlong)*(int *)(ppuVar12 + 2));");
                        trace.statement("puVar3 = DAT_1803eb7a8;");
                        if (trace.condition("if (DAT_1803eb7a8 == DAT_1803eb7b0)")) {
                            trace.statement("FUN_180224820(&DAT_1803eb7a0,DAT_1803eb7a8,&local_60);");
                        } else {
                        trace.statement("*DAT_1803eb7a8 = CONCAT44(uStack_5c,local_60);");
                        trace.statement("puVar3[1] = uStack_58;");
                        trace.statement("puVar3[2] = uStack_50;");
                        trace.statement("DAT_1803eb7a8 = DAT_1803eb7a8 + 3;");
                        }
                        trace.statement("ppuVar12 = ppuVar12 + 3;");
                        }
                    }
                    trace.statement("DAT_1803eb790 = *(undefined8 *)(DAT_1803fa608 + 0x10);");
                    trace.statement("DAT_1803eb798 = *(undefined4 *)(DAT_1803fa608 + 0x18);");
                    trace.statement("DAT_1803eb79c = 1;");
                    trace.statement("_DAT_1803eb788 = (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);");
                    trace.statement("FUN_180052250(&DAT_1803eb648);");
                    trace.statement("memset(&DAT_1803eb4a4,0,0x1a4);");
                    trace.statement("local_128 = (undefined8 *)0x0;");
                    trace.statement("uStack_120 = 0;");
                    trace.statement("FUN_180024b50(&local_128);");
                    trace.statement("lVar8 = DAT_1803eb498;");
                    trace.statement("cVar5 = (char)uStack_120;");
                    if (trace.condition("if (cVar5 != '\\0')")) {
                        trace.statement("local_118 = (undefined4 *)0x0;");
                        trace.statement("uVar6 = 0;");
                        trace.statement("local_110 = 0;");
                        trace.statement("FUN_180024cd0();");
                        if (trace.condition("if ((lVar8 != 0) && (-1 < DAT_1803e6ed0))")) {
                            trace.statement("puVar13 = (undefined4 *)(lVar8 + DAT_1803e6ed0);");
                            trace.statement("uVar6 = *puVar13;");
                            trace.statement("*puVar13 = 0x4e6e6b28;");
                            trace.statement("local_118 = puVar13;");
                            trace.statement("local_110 = uVar6;");
                        }
                        trace.statement("uVar4 = DAT_1803fe4ac;");
                        trace.statement("local_138 = DAT_1803fe4ac;");
                        trace.statement("DAT_1803fe4ac = 1;");
                        trace.statement("local_148 = &DAT_1803eb4a4;");
                        trace.statement("(**(code **)(*DAT_1803f9290 + 0x90))");
                        trace.statement("(DAT_1803f9290,DAT_1803eb498,&DAT_1803eb648,DAT_1803fa5a0);");
                        trace.statement("DAT_1803fe4ac = uVar4;");
                        if (trace.condition("if (puVar13 != (undefined4 *)0x0)")) {
                            trace.statement("*puVar13 = uVar6;");
                        }
                        if (trace.condition("if ((cVar5 != '\\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe))")) {
                            trace.statement("*DAT_1803fa368 = local_128;");
                        }
                        trace.statement("DAT_1803eb490 = 1;");
                        trace.statement("return 1;");
                    }
                    trace.statement("FUN_180051cc0();");
                    trace.statement("lVar8 = DAT_1803fa608;");
                    trace.statement("DAT_1803eb79c = cVar5;");
                    if (trace.condition("if (DAT_1803fa608 != 0)")) {
                        trace.statement("*(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803eb790;");
                        trace.statement("*(undefined4 *)(lVar8 + 0x18) = DAT_1803eb798;");
                    }
                    trace.statement("DAT_1803eb498 = 0;");
                    if (trace.condition("if (DAT_1803eb7a0 != DAT_1803eb7a8)")) {
                        trace.statement("DAT_1803eb7a8 = DAT_1803eb7a0;");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180051dc0;
}

// 0x180052250 FUN_180052250
// source: re/dump/decompile/0x180052250_FUN_180052250.c
// size: 230 bytes; thunk: false
// body sha256: 33474faf54f5ba19bbc16244a21e39a1a0884adee527cfd47d3077e721eb5960
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052250{
    "0x180052250",
    "FUN_180052250",
    R"F180052250S(undefined FUN_180052250())F180052250S",
    R"B180052250(// 0x180052250  FUN_180052250
// size=230 thunk=false
// signature: undefined FUN_180052250()
// status: ok


undefined4 * FUN_180052250(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)((longlong)param_2 + 0x32);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)((longlong)param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x37) = *(undefined1 *)((longlong)param_2 + 0x37);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
  *(undefined1 *)((longlong)param_1 + 0x3b) = *(undefined1 *)((longlong)param_2 + 0x3b);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
  *(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)((longlong)param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar1 = 0;
  do {
    *(undefined1 *)((longlong)param_1 + uVar1 + 0x4c) =
         *(undefined1 *)((longlong)param_2 + uVar1 + 0x4c);
    *(undefined1 *)((longlong)param_1 + uVar1 + 0x4d) =
         *(undefined1 *)((longlong)param_2 + uVar1 + 0x4d);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0xf2);
  return param_1;
}


)B180052250",
    "33474faf54f5ba19bbc16244a21e39a1a0884adee527cfd47d3077e721eb5960",
    R"F180052250C()F180052250C",
    R"F180052250D()F180052250D",
    R"F180052250T()F180052250T",
    R"F180052250F(42: do {
49: return param_1;)F180052250F",
    R"F180052250U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180052250U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052250() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052250", "FUN_180052250");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 33474faf54f5ba19bbc16244a21e39a1a0884adee527cfd47d3077e721eb5960
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined4 * FUN_180052250(undefined4 *param_1,undefined4 *param_2)");
        {
            trace.statement("ulonglong uVar1;");
            trace.statement("*param_1 = *param_2;");
            trace.statement("param_1[1] = param_2[1];");
            trace.statement("param_1[2] = param_2[2];");
            trace.statement("param_1[3] = param_2[3];");
            trace.statement("param_1[4] = param_2[4];");
            trace.statement("param_1[5] = param_2[5];");
            trace.statement("param_1[6] = param_2[6];");
            trace.statement("param_1[7] = param_2[7];");
            trace.statement("param_1[8] = param_2[8];");
            trace.statement("param_1[9] = param_2[9];");
            trace.statement("param_1[10] = param_2[10];");
            trace.statement("param_1[0xb] = param_2[0xb];");
            trace.statement("*(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);");
            trace.statement("*(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)((longlong)param_2 + 0x32);");
            trace.statement("*(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)((longlong)param_2 + 0x36);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x37) = *(undefined1 *)((longlong)param_2 + 0x37);");
            trace.statement("*(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x3b) = *(undefined1 *)((longlong)param_2 + 0x3b);");
            trace.statement("*(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)((longlong)param_2 + 0x3e);");
            trace.statement("*(undefined1 *)((longlong)param_1 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x3f);");
            trace.statement("param_1[0x10] = param_2[0x10];");
            trace.statement("param_1[0x11] = param_2[0x11];");
            trace.statement("param_1[0x12] = param_2[0x12];");
            trace.statement("uVar1 = 0;");
            do {
                trace.statement("*(undefined1 *)((longlong)param_1 + uVar1 + 0x4c) =");
                trace.statement("*(undefined1 *)((longlong)param_2 + uVar1 + 0x4c);");
                trace.statement("*(undefined1 *)((longlong)param_1 + uVar1 + 0x4d) =");
                trace.statement("*(undefined1 *)((longlong)param_2 + uVar1 + 0x4d);");
                trace.statement("uVar1 = uVar1 + 2;");
            } while (trace.loop_condition("while (uVar1 < 0xf2);"));
            trace.statement("return param_1;");
        }
    return kFunction_0x180052250;
}

// 0x180052340 FUN_180052340
// source: re/dump/decompile/0x180052340_FUN_180052340.c
// size: 401 bytes; thunk: false
// body sha256: b70724e1a42280a3a7ebf182150b4f9833a9decfb2788c19c875dc0d2371e3d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052340{
    "0x180052340",
    "FUN_180052340",
    R"F180052340S(undefined FUN_180052340())F180052340S",
    R"B180052340(// 0x180052340  FUN_180052340
// size=401 thunk=false
// signature: undefined FUN_180052340()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180052340(void)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 in_R9;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulonglong local_28;
  undefined8 uStack_20;
  
  if (DAT_1803eb490 != '\0') {
    cVar4 = FUN_180051c50();
    lVar2 = DAT_1803fa608;
    if (cVar4 != '\0') {
      if (DAT_1803eb4a0 < 0x40) {
        if (DAT_1803fa608 != 0) {
          pdVar1 = (double *)(DAT_1803fa608 + 0x28);
          *(double *)(DAT_1803fa608 + 0x10) = (double)(DAT_1803eb4a0 + 1) * *pdVar1 + _DAT_1803eb788
          ;
          *(float *)(lVar2 + 0x18) = (float)*pdVar1;
        }
        local_28 = 0;
        uStack_20 = 0;
        FUN_180024b50(&local_28);
        lVar2 = DAT_1803eb498;
        if ((char)uStack_20 == '\0') {
          return 0;
        }
        puVar5 = (undefined4 *)0x0;
        puVar7 = (undefined4 *)0x0;
        uVar6 = 0;
        uVar8 = 0;
        FUN_180024cd0();
        if ((lVar2 != 0) && (-1 < DAT_1803e6ed0)) {
          puVar5 = (undefined4 *)(lVar2 + DAT_1803e6ed0);
          uVar6 = *puVar5;
          *puVar5 = 0x4e6e6b28;
          puVar7 = puVar5;
          uVar8 = uVar6;
        }
        uVar3 = DAT_1803fe4ac;
        DAT_1803fe4ac = 1;
        (**(code **)(*DAT_1803fa658 + 8))
                  (DAT_1803fa658,DAT_1803eb498,&DAT_1803eb4a4,in_R9,puVar7,uVar8);
        DAT_1803eb4a0 = DAT_1803eb4a0 + 1;
        DAT_1803fe4ac = uVar3;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uVar6;
        }
        if ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe) {
          *DAT_1803fa368 = local_28;
        }
        return 1;
      }
      if (DAT_1803fe68a == '\0') {
        DAT_1803fe68a = 1;
        FUN_180014410("[LUAMOVESIM] tick budget (%d) exhausted in one transaction -- extra RunTick calls ignored\n"
                      ,0x40);
        return 0;
      }
    }
  }
  return 0;
}


)B180052340",
    "b70724e1a42280a3a7ebf182150b4f9833a9decfb2788c19c875dc0d2371e3d5",
    R"F180052340C(FUN_180014410
FUN_180024b50
FUN_180024cd0
FUN_180051c50)F180052340C",
    R"F180052340D(DAT_1803e6ed0
DAT_1803eb490
DAT_1803eb498
DAT_1803eb4a0
DAT_1803eb4a4
DAT_1803fa368
DAT_1803fa608
DAT_1803fa658
DAT_1803fe4ac
DAT_1803fe68a)F180052340D",
    R"F180052340T("[LUAMOVESIM] tick budget (%d) exhausted in one transaction -- extra RunTick calls ignored\\n")F180052340T",
    R"F180052340F(24: if (DAT_1803eb490 != '\0') {
27: if (cVar4 != '\0') {
28: if (DAT_1803eb4a0 < 0x40) {
29: if (DAT_1803fa608 != 0) {
39: if ((char)uStack_20 == '\0') {
40: return 0;
47: if ((lVar2 != 0) && (-1 < DAT_1803e6ed0)) {
60: if (puVar5 != (undefined4 *)0x0) {
63: if ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe) {
66: return 1;
68: if (DAT_1803fe68a == '\0') {
72: return 0;
76: return 0;)F180052340F",
    R"F180052340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e6ed0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb498.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4a4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa368.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa658.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fe4ac.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fe68a.
TODO: resolve the indirect call in body 56: (**(code **)(*DAT_1803fa658 + 8)).)F180052340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052340", "FUN_180052340");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e6ed0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb498.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4a4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa368.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa658.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fe4ac.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fe68a.
    // TODO: resolve the indirect call in body 56: (**(code **)(*DAT_1803fa658 + 8)).
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.call_target("FUN_180024b50", reinterpret_cast<const void*>(&image::FUN_180024b50));
    trace.call_target("FUN_180024cd0", reinterpret_cast<const void*>(&image::FUN_180024cd0));
    trace.call_target("FUN_180051c50", reinterpret_cast<const void*>(&image::FUN_180051c50));
    trace.data_ref("DAT_1803e6ed0", static_cast<const void*>(&image::DAT_1803e6ed0));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb498", static_cast<const void*>(&image::DAT_1803eb498));
    trace.data_ref("DAT_1803eb4a0", static_cast<const void*>(&image::DAT_1803eb4a0));
    trace.data_ref("DAT_1803eb4a4", static_cast<const void*>(&image::DAT_1803eb4a4));
    trace.data_ref("DAT_1803fa368", static_cast<const void*>(&image::DAT_1803fa368));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    trace.data_ref("DAT_1803fa658", static_cast<const void*>(&image::DAT_1803fa658));
    trace.data_ref("DAT_1803fe4ac", static_cast<const void*>(&image::DAT_1803fe4ac));
    trace.data_ref("DAT_1803fe68a", static_cast<const void*>(&image::DAT_1803fe68a));
    trace.string_literal("[LUAMOVESIM] tick budget (%d) exhausted in one transaction -- extra RunTick calls ignored\\n");
    // body sha256: b70724e1a42280a3a7ebf182150b4f9833a9decfb2788c19c875dc0d2371e3d5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052340(void)");
        {
            trace.statement("double *pdVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("char cVar4;");
            trace.statement("undefined4 *puVar5;");
            trace.statement("undefined8 in_R9;");
            trace.statement("undefined4 uVar6;");
            trace.statement("undefined4 *puVar7;");
            trace.statement("undefined4 uVar8;");
            trace.statement("ulonglong local_28;");
            trace.statement("undefined8 uStack_20;");
            if (trace.condition("if (DAT_1803eb490 != '\\0')")) {
                trace.statement("cVar4 = FUN_180051c50();");
                trace.statement("lVar2 = DAT_1803fa608;");
                if (trace.condition("if (cVar4 != '\\0')")) {
                    if (trace.condition("if (DAT_1803eb4a0 < 0x40)")) {
                        if (trace.condition("if (DAT_1803fa608 != 0)")) {
                            trace.statement("pdVar1 = (double *)(DAT_1803fa608 + 0x28);");
                            trace.statement("*(double *)(DAT_1803fa608 + 0x10) = (double)(DAT_1803eb4a0 + 1) * *pdVar1 + _DAT_1803eb788");
                            trace.statement(";");
                            trace.statement("*(float *)(lVar2 + 0x18) = (float)*pdVar1;");
                        }
                        trace.statement("local_28 = 0;");
                        trace.statement("uStack_20 = 0;");
                        trace.statement("FUN_180024b50(&local_28);");
                        trace.statement("lVar2 = DAT_1803eb498;");
                        if (trace.condition("if ((char)uStack_20 == '\\0')")) {
                            trace.statement("return 0;");
                        }
                        trace.statement("puVar5 = (undefined4 *)0x0;");
                        trace.statement("puVar7 = (undefined4 *)0x0;");
                        trace.statement("uVar6 = 0;");
                        trace.statement("uVar8 = 0;");
                        trace.statement("FUN_180024cd0();");
                        if (trace.condition("if ((lVar2 != 0) && (-1 < DAT_1803e6ed0))")) {
                            trace.statement("puVar5 = (undefined4 *)(lVar2 + DAT_1803e6ed0);");
                            trace.statement("uVar6 = *puVar5;");
                            trace.statement("*puVar5 = 0x4e6e6b28;");
                            trace.statement("puVar7 = puVar5;");
                            trace.statement("uVar8 = uVar6;");
                        }
                        trace.statement("uVar3 = DAT_1803fe4ac;");
                        trace.statement("DAT_1803fe4ac = 1;");
                        trace.statement("(**(code **)(*DAT_1803fa658 + 8))");
                        trace.statement("(DAT_1803fa658,DAT_1803eb498,&DAT_1803eb4a4,in_R9,puVar7,uVar8);");
                        trace.statement("DAT_1803eb4a0 = DAT_1803eb4a0 + 1;");
                        trace.statement("DAT_1803fe4ac = uVar3;");
                        if (trace.condition("if (puVar5 != (undefined4 *)0x0)")) {
                            trace.statement("*puVar5 = uVar6;");
                        }
                        if (trace.condition("if ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)")) {
                            trace.statement("*DAT_1803fa368 = local_28;");
                        }
                        trace.statement("return 1;");
                    }
                    if (trace.condition("if (DAT_1803fe68a == '\\0')")) {
                        trace.statement("DAT_1803fe68a = 1;");
                        trace.statement("FUN_180014410(\"[LUAMOVESIM] tick budget (%d) exhausted in one transaction -- extra RunTick calls ignored\\n\"");
                        trace.statement(",0x40);");
                        trace.statement("return 0;");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052340;
}

// 0x180052510 FUN_180052510
// source: re/dump/decompile/0x180052510_FUN_180052510.c
// size: 149 bytes; thunk: false
// body sha256: f6ae5906a9650aea0f425ae5d9a7ef62ee410ac225724eee78e4e246a09a95e6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052510{
    "0x180052510",
    "FUN_180052510",
    R"F180052510S(undefined FUN_180052510())F180052510S",
    R"B180052510(// 0x180052510  FUN_180052510
// size=149 thunk=false
// signature: undefined FUN_180052510()
// status: ok


undefined8 FUN_180052510(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar3 = (float)param_4;
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,1,5);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,1,param_3);
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      uVar4 = 0;
      fVar3 = (float)dVar1;
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  return CONCAT44(uVar4,fVar3);
}


)B180052510",
    "f6ae5906a9650aea0f425ae5d9a7ef62ee410ac225724eee78e4e246a09a95e6",
    R"F180052510C()F180052510C",
    R"F180052510D()F180052510D",
    R"F180052510T()F180052510T",
    R"F180052510F(18: if (cVar2 != '\0') {
21: if (cVar2 != '\0') {
28: return CONCAT44(uVar4,fVar3);)F180052510F",
    R"F180052510U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 17: cVar2 = (**(code **)(*param_1 + 0x138))(param_1,1,5);.
TODO: resolve the indirect call in body 19: (**(code **)(*param_1 + 0x20))(param_1,1,param_3);.
TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);.
TODO: resolve the indirect call in body 22: dVar1 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);.
TODO: resolve the indirect call in body 26: (**(code **)(*param_1 + 0x10))(param_1,1);.)F180052510U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052510() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052510", "FUN_180052510");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 17: cVar2 = (**(code **)(*param_1 + 0x138))(param_1,1,5);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*param_1 + 0x20))(param_1,1,param_3);.
    // TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);.
    // TODO: resolve the indirect call in body 22: dVar1 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);.
    // TODO: resolve the indirect call in body 26: (**(code **)(*param_1 + 0x10))(param_1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: f6ae5906a9650aea0f425ae5d9a7ef62ee410ac225724eee78e4e246a09a95e6
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052510(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)");
        {
            trace.statement("double dVar1;");
            trace.statement("char cVar2;");
            trace.statement("float fVar3;");
            trace.statement("undefined4 uVar4;");
            trace.statement("uVar4 = (undefined4)((ulonglong)param_4 >> 0x20);");
            trace.statement("fVar3 = (float)param_4;");
            trace.statement("cVar2 = (**(code **)(*param_1 + 0x138))(param_1,1,5);");
            if (trace.condition("if (cVar2 != '\\0')")) {
                trace.statement("(**(code **)(*param_1 + 0x20))(param_1,1,param_3);");
                trace.statement("cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("dVar1 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);");
                    trace.statement("uVar4 = 0;");
                    trace.statement("fVar3 = (float)dVar1;");
                }
                trace.statement("(**(code **)(*param_1 + 0x10))(param_1,1);");
            }
            trace.statement("return CONCAT44(uVar4,fVar3);");
        }
    return kFunction_0x180052510;
}

// 0x1800525b0 FUN_1800525b0
// source: re/dump/decompile/0x1800525b0_FUN_1800525b0.c
// size: 1082 bytes; thunk: false
// body sha256: 9e6384c28cae10d2af58cc99fe861de3ef67f3620e0afdddefcb68941d6aae36
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800525b0{
    "0x1800525b0",
    "FUN_1800525b0",
    R"F1800525b0S(undefined FUN_1800525b0())F1800525b0S",
    R"B1800525b0(// 0x1800525b0  FUN_1800525b0
// size=1082 thunk=false
// signature: undefined FUN_1800525b0()
// status: ok


void FUN_1800525b0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUAMOVESIM] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800529f0);
      (*pcVar2)(lVar1,0xfffffffe,"Simulated");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a30);
      (*pcVar2)(lVar1,0xfffffffe,"TickBase");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a80);
      (*pcVar2)(lVar1,0xfffffffe,"CurTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);
      (*pcVar2)(lVar1,0xfffffffe,"Interval");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052b50);
      (*pcVar2)(lVar1,0xfffffffe,"Available");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052bd0);
      (*pcVar2)(lVar1,0xfffffffe,"Active");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c10);
      (*pcVar2)(lVar1,0xfffffffe,"Ticks");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c60);
      (*pcVar2)(lVar1,0xfffffffe,"StartPrediction");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052cc0);
      (*pcVar2)(lVar1,0xfffffffe,"EndPrediction");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180052f50);
      (*pcVar2)(lVar1,0xfffffffe,"RunTick");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052f60);
      (*pcVar2)(lVar1,0xfffffffe,"GetPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053010);
      (*pcVar2)(lVar1,0xfffffffe,"SetPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053110);
      (*pcVar2)(lVar1,0xfffffffe,"GetVelocity");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800531c0);
      (*pcVar2)(lVar1,0xfffffffe,"SetVelocity");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800532c0);
      (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053370);
      (*pcVar2)(lVar1,0xfffffffe,"GetAngles");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800535f0);
      (*pcVar2)(lVar1,0xfffffffe,"OnGround");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053600);
      (*pcVar2)(lVar1,0xfffffffe,"GetStepHeight");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053660);
      (*pcVar2)(lVar1,0xfffffffe,"GetMaxSpeed");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"StartPrediction");
      (*pcVar2)(lVar1,0xfffffffe,"Start");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"EndPrediction");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803430fc);
      (*pcVar2)(lVar1,0xfffffffe,"movement_sim");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUAMOVESIM] movement_sim table registered\n");
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}


)B1800525b0",
    "9e6384c28cae10d2af58cc99fe861de3ef67f3620e0afdddefcb68941d6aae36",
    R"F1800525b0C(FUN_180014410
FUN_1800260c0
FUN_1800529f0
FUN_180052a30
FUN_180052a80
FUN_180052af0
FUN_180052b50
FUN_180052bd0
FUN_180052c10
FUN_180052c60
FUN_180052cc0
FUN_180052f60
FUN_180053010
FUN_180053110
FUN_1800531c0
FUN_1800532c0
FUN_180053370
FUN_180053600
FUN_180053660)F1800525b0C",
    R"F1800525b0D(LAB_180052f50
LAB_1800535f0
DAT_1803430fc
DAT_1803fcba8
DAT_1803fcbe0
DAT_1803fcfa0
DAT_180425540)F1800525b0D",
    R"F1800525b0T("Start"
"Ticks"
"Active"
"GetPos"
"SetPos"
"CurTime"
"RunTick"
"GetSpeed"
"Interval"
"OnGround"
"TickBase"
"Available"
"GetAngles"
"Simulated"
"lua_gettop"
"lua_settop"
"GetMaxSpeed"
"GetVelocity"
"SetVelocity"
"movement_sim"
"EndPrediction"
"GetStepHeight"
"lua_shared.dll"
"StartPrediction"
"[LUAMOVESIM] movement_sim table registered\\n"
"[LUAMOVESIM] api table unavailable -- persist not ready\\n")F1800525b0T",
    R"F1800525b0F(16: if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
17: if (DAT_1803fcfa0 == (FARPROC)0x0) {
24: if (cVar3 == '\0') {
27: else if (DAT_1803fcbe0 != (code *)0x0) {
72: if (DAT_180425540 == (FARPROC)0x0) {
78: return;
80: if (DAT_180425540 == (FARPROC)0x0) {
86: return;)F1800525b0F",
    R"F1800525b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_180052f50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800535f0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803430fc.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcba8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
TODO: resolve the indirect call in body 27: else if (DAT_1803fcbe0 != (code *)0x0) {.
TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800529f0);.
TODO: resolve the indirect call in body 30: (*pcVar2)(lVar1,0xfffffffe,"Simulated");.
TODO: resolve the indirect call in body 31: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a30);.
TODO: resolve the indirect call in body 32: (*pcVar2)(lVar1,0xfffffffe,"TickBase");.
TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a80);.
TODO: resolve the indirect call in body 34: (*pcVar2)(lVar1,0xfffffffe,"CurTime");.
TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);.
TODO: resolve the indirect call in body 36: (*pcVar2)(lVar1,0xfffffffe,"Interval");.
TODO: resolve the indirect call in body 37: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052b50);.
TODO: resolve the indirect call in body 38: (*pcVar2)(lVar1,0xfffffffe,"Available");.
TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052bd0);.
TODO: resolve the indirect call in body 40: (*pcVar2)(lVar1,0xfffffffe,"Active");.
TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c10);.
TODO: resolve the indirect call in body 42: (*pcVar2)(lVar1,0xfffffffe,"Ticks");.
TODO: resolve the indirect call in body 43: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c60);.
TODO: resolve the indirect call in body 44: (*pcVar2)(lVar1,0xfffffffe,"StartPrediction");.
TODO: resolve the indirect call in body 45: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052cc0);.
TODO: resolve the indirect call in body 46: (*pcVar2)(lVar1,0xfffffffe,"EndPrediction");.
TODO: resolve the indirect call in body 47: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180052f50);.
TODO: resolve the indirect call in body 48: (*pcVar2)(lVar1,0xfffffffe,"RunTick");.
TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052f60);.
TODO: resolve the indirect call in body 50: (*pcVar2)(lVar1,0xfffffffe,"GetPos");.
TODO: resolve the indirect call in body 51: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053010);.
TODO: resolve the indirect call in body 52: (*pcVar2)(lVar1,0xfffffffe,"SetPos");.
TODO: resolve the indirect call in body 53: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053110);.
TODO: resolve the indirect call in body 54: (*pcVar2)(lVar1,0xfffffffe,"GetVelocity");.
TODO: resolve the indirect call in body 55: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800531c0);.
TODO: resolve the indirect call in body 56: (*pcVar2)(lVar1,0xfffffffe,"SetVelocity");.
TODO: resolve the indirect call in body 57: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800532c0);.
TODO: resolve the indirect call in body 58: (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");.
TODO: resolve the indirect call in body 59: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053370);.
TODO: resolve the indirect call in body 60: (*pcVar2)(lVar1,0xfffffffe,"GetAngles");.
TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800535f0);.
TODO: resolve the indirect call in body 62: (*pcVar2)(lVar1,0xfffffffe,"OnGround");.
TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053600);.
TODO: resolve the indirect call in body 64: (*pcVar2)(lVar1,0xfffffffe,"GetStepHeight");.
TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053660);.
TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"GetMaxSpeed");.
TODO: resolve the indirect call in body 67: (*DAT_1803fcba8)(lVar1,0xffffffff,"StartPrediction");.
TODO: resolve the indirect call in body 68: (*pcVar2)(lVar1,0xfffffffe,"Start");.
TODO: resolve the indirect call in body 69: (*DAT_1803fcba8)(lVar1,0xffffffff,"EndPrediction");.
TODO: resolve the indirect call in body 70: (*pcVar2)(lVar1,0xfffffffe,&DAT_1803430fc);.
TODO: resolve the indirect call in body 71: (*pcVar2)(lVar1,0xfffffffe,"movement_sim");.
TODO: resolve the indirect call in body 76: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
TODO: resolve the indirect call in body 84: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.)F1800525b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800525b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800525b0", "FUN_1800525b0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_180052f50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800535f0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803430fc.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcba8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcbe0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcfa0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425540.
    // TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
    // TODO: resolve the indirect call in body 27: else if (DAT_1803fcbe0 != (code *)0x0) {.
    // TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800529f0);.
    // TODO: resolve the indirect call in body 30: (*pcVar2)(lVar1,0xfffffffe,"Simulated");.
    // TODO: resolve the indirect call in body 31: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a30);.
    // TODO: resolve the indirect call in body 32: (*pcVar2)(lVar1,0xfffffffe,"TickBase");.
    // TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a80);.
    // TODO: resolve the indirect call in body 34: (*pcVar2)(lVar1,0xfffffffe,"CurTime");.
    // TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);.
    // TODO: resolve the indirect call in body 36: (*pcVar2)(lVar1,0xfffffffe,"Interval");.
    // TODO: resolve the indirect call in body 37: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052b50);.
    // TODO: resolve the indirect call in body 38: (*pcVar2)(lVar1,0xfffffffe,"Available");.
    // TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052bd0);.
    // TODO: resolve the indirect call in body 40: (*pcVar2)(lVar1,0xfffffffe,"Active");.
    // TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c10);.
    // TODO: resolve the indirect call in body 42: (*pcVar2)(lVar1,0xfffffffe,"Ticks");.
    // TODO: resolve the indirect call in body 43: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c60);.
    // TODO: resolve the indirect call in body 44: (*pcVar2)(lVar1,0xfffffffe,"StartPrediction");.
    // TODO: resolve the indirect call in body 45: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052cc0);.
    // TODO: resolve the indirect call in body 46: (*pcVar2)(lVar1,0xfffffffe,"EndPrediction");.
    // TODO: resolve the indirect call in body 47: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180052f50);.
    // TODO: resolve the indirect call in body 48: (*pcVar2)(lVar1,0xfffffffe,"RunTick");.
    // TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052f60);.
    // TODO: resolve the indirect call in body 50: (*pcVar2)(lVar1,0xfffffffe,"GetPos");.
    // TODO: resolve the indirect call in body 51: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053010);.
    // TODO: resolve the indirect call in body 52: (*pcVar2)(lVar1,0xfffffffe,"SetPos");.
    // TODO: resolve the indirect call in body 53: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053110);.
    // TODO: resolve the indirect call in body 54: (*pcVar2)(lVar1,0xfffffffe,"GetVelocity");.
    // TODO: resolve the indirect call in body 55: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800531c0);.
    // TODO: resolve the indirect call in body 56: (*pcVar2)(lVar1,0xfffffffe,"SetVelocity");.
    // TODO: resolve the indirect call in body 57: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800532c0);.
    // TODO: resolve the indirect call in body 58: (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");.
    // TODO: resolve the indirect call in body 59: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053370);.
    // TODO: resolve the indirect call in body 60: (*pcVar2)(lVar1,0xfffffffe,"GetAngles");.
    // TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800535f0);.
    // TODO: resolve the indirect call in body 62: (*pcVar2)(lVar1,0xfffffffe,"OnGround");.
    // TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053600);.
    // TODO: resolve the indirect call in body 64: (*pcVar2)(lVar1,0xfffffffe,"GetStepHeight");.
    // TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x100))(param_1,FUN_180053660);.
    // TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"GetMaxSpeed");.
    // TODO: resolve the indirect call in body 67: (*DAT_1803fcba8)(lVar1,0xffffffff,"StartPrediction");.
    // TODO: resolve the indirect call in body 68: (*pcVar2)(lVar1,0xfffffffe,"Start");.
    // TODO: resolve the indirect call in body 69: (*DAT_1803fcba8)(lVar1,0xffffffff,"EndPrediction");.
    // TODO: resolve the indirect call in body 70: (*pcVar2)(lVar1,0xfffffffe,&DAT_1803430fc);.
    // TODO: resolve the indirect call in body 71: (*pcVar2)(lVar1,0xfffffffe,"movement_sim");.
    // TODO: resolve the indirect call in body 76: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: resolve the indirect call in body 84: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.call_target("FUN_1800260c0", reinterpret_cast<const void*>(&image::FUN_1800260c0));
    trace.call_target("FUN_1800529f0", reinterpret_cast<const void*>(&image::FUN_1800529f0));
    trace.call_target("FUN_180052a30", reinterpret_cast<const void*>(&image::FUN_180052a30));
    trace.call_target("FUN_180052a80", reinterpret_cast<const void*>(&image::FUN_180052a80));
    trace.call_target("FUN_180052af0", reinterpret_cast<const void*>(&image::FUN_180052af0));
    trace.call_target("FUN_180052b50", reinterpret_cast<const void*>(&image::FUN_180052b50));
    trace.call_target("FUN_180052bd0", reinterpret_cast<const void*>(&image::FUN_180052bd0));
    trace.call_target("FUN_180052c10", reinterpret_cast<const void*>(&image::FUN_180052c10));
    trace.call_target("FUN_180052c60", reinterpret_cast<const void*>(&image::FUN_180052c60));
    trace.call_target("FUN_180052cc0", reinterpret_cast<const void*>(&image::FUN_180052cc0));
    trace.call_target("FUN_180052f60", reinterpret_cast<const void*>(&image::FUN_180052f60));
    trace.call_target("FUN_180053010", reinterpret_cast<const void*>(&image::FUN_180053010));
    trace.call_target("FUN_180053110", reinterpret_cast<const void*>(&image::FUN_180053110));
    trace.call_target("FUN_1800531c0", reinterpret_cast<const void*>(&image::FUN_1800531c0));
    trace.call_target("FUN_1800532c0", reinterpret_cast<const void*>(&image::FUN_1800532c0));
    trace.call_target("FUN_180053370", reinterpret_cast<const void*>(&image::FUN_180053370));
    trace.call_target("FUN_180053600", reinterpret_cast<const void*>(&image::FUN_180053600));
    trace.call_target("FUN_180053660", reinterpret_cast<const void*>(&image::FUN_180053660));
    trace.data_ref("DAT_1803430fc", static_cast<const void*>(&image::DAT_1803430fc));
    trace.data_ref("DAT_1803fcba8", static_cast<const void*>(&image::DAT_1803fcba8));
    trace.data_ref("DAT_1803fcbe0", static_cast<const void*>(&image::DAT_1803fcbe0));
    trace.data_ref("DAT_1803fcfa0", static_cast<const void*>(&image::DAT_1803fcfa0));
    trace.data_ref("DAT_180425540", static_cast<const void*>(&image::DAT_180425540));
    trace.string_literal("Start");
    trace.string_literal("Ticks");
    trace.string_literal("Active");
    trace.string_literal("GetPos");
    trace.string_literal("SetPos");
    trace.string_literal("CurTime");
    trace.string_literal("RunTick");
    trace.string_literal("GetSpeed");
    trace.string_literal("Interval");
    trace.string_literal("OnGround");
    trace.string_literal("TickBase");
    trace.string_literal("Available");
    trace.string_literal("GetAngles");
    trace.string_literal("Simulated");
    trace.string_literal("lua_gettop");
    trace.string_literal("lua_settop");
    trace.string_literal("GetMaxSpeed");
    trace.string_literal("GetVelocity");
    trace.string_literal("SetVelocity");
    trace.string_literal("movement_sim");
    trace.string_literal("EndPrediction");
    trace.string_literal("GetStepHeight");
    trace.string_literal("lua_shared.dll");
    trace.string_literal("StartPrediction");
    trace.string_literal("[LUAMOVESIM] movement_sim table registered\\n");
    trace.string_literal("[LUAMOVESIM] api table unavailable -- persist not ready\\n");
    // body sha256: 9e6384c28cae10d2af58cc99fe861de3ef67f3620e0afdddefcb68941d6aae36
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_1800525b0(longlong *param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("char cVar3;");
            trace.statement("HMODULE pHVar4;");
            trace.statement("ulonglong uVar5;");
            if (trace.condition("if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0))")) {
                if (trace.condition("if (DAT_1803fcfa0 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_1803fcfa0 = GetProcAddress(pHVar4,\"lua_gettop\");");
                }
                trace.statement("uVar5 = (*DAT_1803fcfa0)(lVar1);");
                trace.statement("cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);");
                trace.statement("pcVar2 = DAT_1803fcbe0;");
                if (trace.condition("if (cVar3 == '\\0')")) {
                    trace.statement("FUN_180014410(\"[LUAMOVESIM] api table unavailable -- persist not ready\\n\");");
                } else {
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800529f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Simulated\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052a30);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"TickBase\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052a80);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"CurTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Interval\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052b50);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Available\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052bd0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Active\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052c10);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Ticks\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052c60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"StartPrediction\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052cc0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"EndPrediction\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_180052f50);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"RunTick\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052f60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetPos\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180053010);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetPos\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180053110);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetVelocity\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800531c0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetVelocity\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800532c0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetSpeed\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180053370);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetAngles\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800535f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"OnGround\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180053600);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetStepHeight\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180053660);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetMaxSpeed\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"StartPrediction\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Start\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"EndPrediction\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,&DAT_1803430fc);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"movement_sim\");");
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
                trace.statement("FUN_180014410(\"[LUAMOVESIM] movement_sim table registered\\n\");");
                trace.statement("return;");
                }
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1800525b0;
}

// 0x1800529f0 FUN_1800529f0
// source: re/dump/decompile/0x1800529f0_FUN_1800529f0.c
// size: 64 bytes; thunk: false
// body sha256: 96b3f0d7e7a6da08157036986311300ab075e95138774eff8d890b10b6787086
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800529f0{
    "0x1800529f0",
    "FUN_1800529f0",
    R"F1800529f0S(undefined FUN_1800529f0())F1800529f0S",
    R"B1800529f0(// 0x1800529f0  FUN_1800529f0
// size=64 thunk=false
// signature: undefined FUN_1800529f0()
// status: ok


undefined8 FUN_1800529f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803de067);
    return 1;
  }
  return 0;
}


)B1800529f0",
    "96b3f0d7e7a6da08157036986311300ab075e95138774eff8d890b10b6787086",
    R"F1800529f0C(FUN_180039770)F1800529f0C",
    R"F1800529f0D(DAT_1803de067)F1800529f0D",
    R"F1800529f0T()F1800529f0T",
    R"F1800529f0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800529f0F",
    R"F1800529f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803de067.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803de067);.)F1800529f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800529f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800529f0", "FUN_1800529f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803de067.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803de067);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803de067", static_cast<const void*>(&image::DAT_1803de067));
    // body sha256: 96b3f0d7e7a6da08157036986311300ab075e95138774eff8d890b10b6787086
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800529f0(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803de067);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800529f0;
}

// 0x180052a30 FUN_180052a30
// source: re/dump/decompile/0x180052a30_FUN_180052a30.c
// size: 68 bytes; thunk: false
// body sha256: 2f4db1e7e01dd33e5fdd53bdd314cbfdc06fb4e9cb8c4587cd776d28e2550818
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052a30{
    "0x180052a30",
    "FUN_180052a30",
    R"F180052a30S(undefined FUN_180052a30())F180052a30S",
    R"B180052a30(// 0x180052a30  FUN_180052a30
// size=68 thunk=false
// signature: undefined FUN_180052a30()
// status: ok


undefined8 FUN_180052a30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803de068);
    return 1;
  }
  return 0;
}


)B180052a30",
    "2f4db1e7e01dd33e5fdd53bdd314cbfdc06fb4e9cb8c4587cd776d28e2550818",
    R"F180052a30C(FUN_180039770)F180052a30C",
    R"F180052a30D(DAT_1803de068)F180052a30D",
    R"F180052a30T()F180052a30T",
    R"F180052a30F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F180052a30F",
    R"F180052a30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803de068.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803de068);.)F180052a30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052a30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052a30", "FUN_180052a30");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803de068.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803de068);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803de068", static_cast<const void*>(&image::DAT_1803de068));
    // body sha256: 2f4db1e7e01dd33e5fdd53bdd314cbfdc06fb4e9cb8c4587cd776d28e2550818
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052a30(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803de068);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052a30;
}

// 0x180052a80 FUN_180052a80
// source: re/dump/decompile/0x180052a80_FUN_180052a80.c
// size: 107 bytes; thunk: false
// body sha256: 945716c67bc291e5c5260433acd89a813171ee6cf02d56636066f4c39f95c35f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052a80{
    "0x180052a80",
    "FUN_180052a80",
    R"F180052a80S(undefined FUN_180052a80())F180052a80S",
    R"B180052a80(// 0x180052a80  FUN_180052a80
// size=107 thunk=false
// signature: undefined FUN_180052a80()
// status: ok


undefined8 FUN_180052a80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 != 0) {
      (**(code **)(*plVar1 + 0xf0))
                (plVar1,(double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28));
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1);
    return 1;
  }
  return 0;
}


)B180052a80",
    "945716c67bc291e5c5260433acd89a813171ee6cf02d56636066f4c39f95c35f",
    R"F180052a80C(FUN_180039770)F180052a80C",
    R"F180052a80D(DAT_1803de068
DAT_1803fa608)F180052a80D",
    R"F180052a80T()F180052a80T",
    R"F180052a80F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 != 0) {
17: return 1;
20: return 1;
22: return 0;)F180052a80F",
    R"F180052a80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803de068.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0)).
TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1);.)F180052a80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052a80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052a80", "FUN_180052a80");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803de068.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0)).
    // TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803de068", static_cast<const void*>(&image::DAT_1803de068));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 945716c67bc291e5c5260433acd89a813171ee6cf02d56636066f4c39f95c35f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052a80(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 != 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xf0))");
                    trace.statement("(plVar1,(double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28));");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052a80;
}

// 0x180052af0 FUN_180052af0
// source: re/dump/decompile/0x180052af0_FUN_180052af0.c
// size: 95 bytes; thunk: false
// body sha256: 7dd34b57c3fc2dfbcca463e12cce3ef66ba85bd59515190209817c5ad2915b15
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052af0{
    "0x180052af0",
    "FUN_180052af0",
    R"F180052af0S(undefined FUN_180052af0())F180052af0S",
    R"B180052af0(// 0x180052af0  FUN_180052af0
// size=95 thunk=false
// signature: undefined FUN_180052af0()
// status: ok


undefined8 FUN_180052af0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 != 0) {
      (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x28));
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180052af0",
    "7dd34b57c3fc2dfbcca463e12cce3ef66ba85bd59515190209817c5ad2915b15",
    R"F180052af0C(FUN_180039770)F180052af0C",
    R"F180052af0D(DAT_1803fa608)F180052af0D",
    R"F180052af0T()F180052af0T",
    R"F180052af0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 != 0) {
16: return 1;
19: return 1;
21: return 0;)F180052af0F",
    R"F180052af0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x28));.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,0);.)F180052af0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052af0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052af0", "FUN_180052af0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x28));.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 7dd34b57c3fc2dfbcca463e12cce3ef66ba85bd59515190209817c5ad2915b15
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052af0(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 != 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x28));");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052af0;
}

// 0x180052b50 FUN_180052b50
// source: re/dump/decompile/0x180052b50_FUN_180052b50.c
// size: 120 bytes; thunk: false
// body sha256: 8f2a571be544dca3595f3147be0580a04a31ea9744316540328a102e4338da92
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052b50{
    "0x180052b50",
    "FUN_180052b50",
    R"F180052b50S(undefined FUN_180052b50())F180052b50S",
    R"B180052b50(// 0x180052b50  FUN_180052b50
// size=120 thunk=false
// signature: undefined FUN_180052b50()
// status: ok


undefined8 FUN_180052b50(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  pcVar1 = *(code **)(*plVar3 + 0xf8);
  cVar2 = FUN_180051c50();
  if ((cVar2 != '\0') && (DAT_1803ff960 != 0)) {
    (*pcVar1)(plVar3,1);
    return 1;
  }
  (*pcVar1)(plVar3,0);
  return 1;
}


)B180052b50",
    "8f2a571be544dca3595f3147be0580a04a31ea9744316540328a102e4338da92",
    R"F180052b50C(FUN_180039770
FUN_180051c50)F180052b50C",
    R"F180052b50D(DAT_1803ff960)F180052b50D",
    R"F180052b50T()F180052b50T",
    R"F180052b50F(15: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
16: return 0;
20: if ((cVar2 != '\0') && (DAT_1803ff960 != 0)) {
22: return 1;
25: return 1;)F180052b50F",
    R"F180052b50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 21: (*pcVar1)(plVar3,1);.
TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.)F180052b50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052b50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052b50", "FUN_180052b50");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 21: (*pcVar1)(plVar3,1);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180051c50", reinterpret_cast<const void*>(&image::FUN_180051c50));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 8f2a571be544dca3595f3147be0580a04a31ea9744316540328a102e4338da92
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052b50(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
            trace.statement("cVar2 = FUN_180051c50();");
            if (trace.condition("if ((cVar2 != '\\0') && (DAT_1803ff960 != 0))")) {
                trace.statement("(*pcVar1)(plVar3,1);");
                trace.statement("return 1;");
            }
            trace.statement("(*pcVar1)(plVar3,0);");
            trace.statement("return 1;");
        }
    return kFunction_0x180052b50;
}

// 0x180052bd0 FUN_180052bd0
// source: re/dump/decompile/0x180052bd0_FUN_180052bd0.c
// size: 64 bytes; thunk: false
// body sha256: 5c23c0a69a4e05d3c7edc9d719b50842ac7ffd46a9e48383574b178965facb37
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052bd0{
    "0x180052bd0",
    "FUN_180052bd0",
    R"F180052bd0S(undefined FUN_180052bd0())F180052bd0S",
    R"B180052bd0(// 0x180052bd0  FUN_180052bd0
// size=64 thunk=false
// signature: undefined FUN_180052bd0()
// status: ok


undefined8 FUN_180052bd0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803eb490);
    return 1;
  }
  return 0;
}


)B180052bd0",
    "5c23c0a69a4e05d3c7edc9d719b50842ac7ffd46a9e48383574b178965facb37",
    R"F180052bd0C(FUN_180039770)F180052bd0C",
    R"F180052bd0D(DAT_1803eb490)F180052bd0D",
    R"F180052bd0T()F180052bd0T",
    R"F180052bd0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F180052bd0F",
    R"F180052bd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803eb490);.)F180052bd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052bd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052bd0", "FUN_180052bd0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803eb490);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    // body sha256: 5c23c0a69a4e05d3c7edc9d719b50842ac7ffd46a9e48383574b178965facb37
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052bd0(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803eb490);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052bd0;
}

// 0x180052c10 FUN_180052c10
// source: re/dump/decompile/0x180052c10_FUN_180052c10.c
// size: 68 bytes; thunk: false
// body sha256: 47650113c43b09e5a81507726000e685444da430fdef878ed6f9b0030ed6db81
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052c10{
    "0x180052c10",
    "FUN_180052c10",
    R"F180052c10S(undefined FUN_180052c10())F180052c10S",
    R"B180052c10(// 0x180052c10  FUN_180052c10
// size=68 thunk=false
// signature: undefined FUN_180052c10()
// status: ok


undefined8 FUN_180052c10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4a0);
    return 1;
  }
  return 0;
}


)B180052c10",
    "47650113c43b09e5a81507726000e685444da430fdef878ed6f9b0030ed6db81",
    R"F180052c10C(FUN_180039770)F180052c10C",
    R"F180052c10D(DAT_1803eb4a0)F180052c10D",
    R"F180052c10T()F180052c10T",
    R"F180052c10F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F180052c10F",
    R"F180052c10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4a0.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4a0);.)F180052c10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052c10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052c10", "FUN_180052c10");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4a0.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4a0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb4a0", static_cast<const void*>(&image::DAT_1803eb4a0));
    // body sha256: 47650113c43b09e5a81507726000e685444da430fdef878ed6f9b0030ed6db81
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052c10(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4a0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052c10;
}

// 0x180052c60 FUN_180052c60
// source: re/dump/decompile/0x180052c60_FUN_180052c60.c
// size: 84 bytes; thunk: false
// body sha256: b15415044dee2fadd606af082be2bde1ab9ee7ee9e16f7a0fce825dd47f0eb0e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052c60{
    "0x180052c60",
    "FUN_180052c60",
    R"F180052c60S(undefined FUN_180052c60())F180052c60S",
    R"B180052c60(// 0x180052c60  FUN_180052c60
// size=84 thunk=false
// signature: undefined FUN_180052c60()
// status: ok


undefined8 FUN_180052c60(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_180051dc0();
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


)B180052c60",
    "b15415044dee2fadd606af082be2bde1ab9ee7ee9e16f7a0fce825dd47f0eb0e",
    R"F180052c60C(FUN_180039770
FUN_180051dc0)F180052c60C",
    R"F180052c60D()F180052c60D",
    R"F180052c60T()F180052c60T",
    R"F180052c60F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
19: return 1;
21: return 0;)F180052c60F",
    R"F180052c60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.)F180052c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052c60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052c60", "FUN_180052c60");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180051dc0", reinterpret_cast<const void*>(&image::FUN_180051dc0));
    // body sha256: b15415044dee2fadd606af082be2bde1ab9ee7ee9e16f7a0fce825dd47f0eb0e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052c60(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                trace.statement("uVar2 = FUN_180051dc0();");
                trace.statement("(*pcVar1)(plVar3,uVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052c60;
}

// 0x180052cc0 FUN_180052cc0
// source: re/dump/decompile/0x180052cc0_FUN_180052cc0.c
// size: 38 bytes; thunk: false
// body sha256: 96fd545123149514fb206641973f64282b16713d46648bc8022c92c2cecc6d6b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052cc0{
    "0x180052cc0",
    "FUN_180052cc0",
    R"F180052cc0S(undefined FUN_180052cc0())F180052cc0S",
    R"B180052cc0(// 0x180052cc0  FUN_180052cc0
// size=38 thunk=false
// signature: undefined FUN_180052cc0()
// status: ok


undefined8 FUN_180052cc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180039770();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
    FUN_180051d40();
  }
  return 0;
}


)B180052cc0",
    "96fd545123149514fb206641973f64282b16713d46648bc8022c92c2cecc6d6b",
    R"F180052cc0C(FUN_180039770
FUN_180051d40)F180052cc0C",
    R"F180052cc0D()F180052cc0D",
    R"F180052cc0T()F180052cc0T",
    R"F180052cc0F(13: if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
16: return 0;)F180052cc0F",
    R"F180052cc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180052cc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052cc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052cc0", "FUN_180052cc0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180051d40", reinterpret_cast<const void*>(&image::FUN_180051d40));
    // body sha256: 96fd545123149514fb206641973f64282b16713d46648bc8022c92c2cecc6d6b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052cc0(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("lVar1 = FUN_180039770();");
            if (trace.condition("if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1))")) {
                trace.statement("FUN_180051d40();");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052cc0;
}

// 0x180052cf0 FUN_180052cf0
// source: re/dump/decompile/0x180052cf0_FUN_180052cf0.c
// size: 607 bytes; thunk: false
// body sha256: 9e948f0ce29f0d5b27034652ca8028550159b929481024e8cddb3e656d1fb3da
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052cf0{
    "0x180052cf0",
    "FUN_180052cf0",
    R"F180052cf0S(undefined FUN_180052cf0())F180052cf0S",
    R"B180052cf0(// 0x180052cf0  FUN_180052cf0
// size=607 thunk=false
// signature: undefined FUN_180052cf0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180052cf0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  if (DAT_1803eb490 == '\0') {
    lVar4 = *plVar3;
  }
  else {
    DAT_1803eb4d0 = FUN_180052510(plVar3);
    DAT_1803eb4d4 = FUN_180052510(plVar3);
    DAT_1803eb4d8 = FUN_180052510(plVar3);
    uVar5 = FUN_180052510(plVar3);
    uVar6 = FUN_180052510(plVar3);
    uVar7 = FUN_180052510(plVar3);
    if ((((uVar7 & 0x7f800000) != 0x7f800000) && ((uVar6 & 0x7f800000) != 0x7f800000)) &&
       ((uVar5 & 0x7f800000) != 0x7f800000)) {
      DAT_1803eb4b0 = uVar7;
      DAT_1803eb4b4 = uVar6;
      DAT_1803eb4b8 = uVar5;
      _DAT_1803eb4bc = uVar7;
      _DAT_1803eb4c0 = uVar6;
      _DAT_1803eb4c4 = uVar5;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,5);
    if (cVar2 != '\0') {
      (**(code **)(*plVar3 + 0x20))(plVar3,1,"buttons");
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,0xffffffff,3);
      if (cVar2 != '\0') {
        dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,0xffffffff);
        _DAT_1803eb4c8 = (int)dVar1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
    }
    cVar2 = FUN_180052340();
    lVar4 = *plVar3;
    if (cVar2 != '\0') {
      (**(code **)(lVar4 + 0xf0))(plVar3,(double)DAT_1803eb53c);
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb540);
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb544);
      return 3;
    }
  }
  (**(code **)(lVar4 + 0xe0))();
  return 1;
}


)B180052cf0",
    "9e948f0ce29f0d5b27034652ca8028550159b929481024e8cddb3e656d1fb3da",
    R"F180052cf0C(FUN_180039770
FUN_180052340
FUN_180052510)F180052cf0C",
    R"F180052cf0D(DAT_1803eb490
DAT_1803eb4b0
DAT_1803eb4b4
DAT_1803eb4b8
DAT_1803eb4d0
DAT_1803eb4d4
DAT_1803eb4d8
DAT_1803eb53c
DAT_1803eb540
DAT_1803eb544)F180052cf0D",
    R"F180052cf0T("buttons")F180052cf0T",
    R"F180052cf0F(21: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
22: return 0;
24: if (DAT_1803eb490 == '\0') {
27: else {
34: if ((((uVar7 & 0x7f800000) != 0x7f800000) && ((uVar6 & 0x7f800000) != 0x7f800000)) &&
44: if (cVar2 != '\0') {
47: if (cVar2 != '\0') {
55: if (cVar2 != '\0') {
59: return 3;
63: return 1;)F180052cf0F",
    R"F180052cf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4b0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4b4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4b8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4d0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4d4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4d8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb53c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb540.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb544.
TODO: resolve the indirect call in body 43: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,5);.
TODO: resolve the indirect call in body 45: (**(code **)(*plVar3 + 0x20))(plVar3,1,"buttons");.
TODO: resolve the indirect call in body 46: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,0xffffffff,3);.
TODO: resolve the indirect call in body 48: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,0xffffffff);.
TODO: resolve the indirect call in body 51: (**(code **)(*plVar3 + 0x10))(plVar3,1);.
TODO: resolve the indirect call in body 56: (**(code **)(lVar4 + 0xf0))(plVar3,(double)DAT_1803eb53c);.
TODO: resolve the indirect call in body 57: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb540);.
TODO: resolve the indirect call in body 58: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb544);.
TODO: resolve the indirect call in body 62: (**(code **)(lVar4 + 0xe0))();.)F180052cf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052cf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052cf0", "FUN_180052cf0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4b0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4b4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4b8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4d0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4d4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4d8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb53c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb540.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb544.
    // TODO: resolve the indirect call in body 43: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,5);.
    // TODO: resolve the indirect call in body 45: (**(code **)(*plVar3 + 0x20))(plVar3,1,"buttons");.
    // TODO: resolve the indirect call in body 46: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,0xffffffff,3);.
    // TODO: resolve the indirect call in body 48: dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,0xffffffff);.
    // TODO: resolve the indirect call in body 51: (**(code **)(*plVar3 + 0x10))(plVar3,1);.
    // TODO: resolve the indirect call in body 56: (**(code **)(lVar4 + 0xf0))(plVar3,(double)DAT_1803eb53c);.
    // TODO: resolve the indirect call in body 57: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb540);.
    // TODO: resolve the indirect call in body 58: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb544);.
    // TODO: resolve the indirect call in body 62: (**(code **)(lVar4 + 0xe0))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180052340", reinterpret_cast<const void*>(&image::FUN_180052340));
    trace.call_target("FUN_180052510", reinterpret_cast<const void*>(&image::FUN_180052510));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb4b0", static_cast<const void*>(&image::DAT_1803eb4b0));
    trace.data_ref("DAT_1803eb4b4", static_cast<const void*>(&image::DAT_1803eb4b4));
    trace.data_ref("DAT_1803eb4b8", static_cast<const void*>(&image::DAT_1803eb4b8));
    trace.data_ref("DAT_1803eb4d0", static_cast<const void*>(&image::DAT_1803eb4d0));
    trace.data_ref("DAT_1803eb4d4", static_cast<const void*>(&image::DAT_1803eb4d4));
    trace.data_ref("DAT_1803eb4d8", static_cast<const void*>(&image::DAT_1803eb4d8));
    trace.data_ref("DAT_1803eb53c", static_cast<const void*>(&image::DAT_1803eb53c));
    trace.data_ref("DAT_1803eb540", static_cast<const void*>(&image::DAT_1803eb540));
    trace.data_ref("DAT_1803eb544", static_cast<const void*>(&image::DAT_1803eb544));
    trace.string_literal("buttons");
    // body sha256: 9e948f0ce29f0d5b27034652ca8028550159b929481024e8cddb3e656d1fb3da
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052cf0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("double dVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("uint uVar5;");
            trace.statement("uint uVar6;");
            trace.statement("uint uVar7;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("return 0;");
            }
            if (trace.condition("if (DAT_1803eb490 == '\\0')")) {
                trace.statement("lVar4 = *plVar3;");
            } else {
            trace.statement("DAT_1803eb4d0 = FUN_180052510(plVar3);");
            trace.statement("DAT_1803eb4d4 = FUN_180052510(plVar3);");
            trace.statement("DAT_1803eb4d8 = FUN_180052510(plVar3);");
            trace.statement("uVar5 = FUN_180052510(plVar3);");
            trace.statement("uVar6 = FUN_180052510(plVar3);");
            trace.statement("uVar7 = FUN_180052510(plVar3);");
            if (trace.condition("if ((((uVar7 & 0x7f800000) != 0x7f800000) && ((uVar6 & 0x7f800000) != 0x7f800000)) && ((uVar5 & 0x7f800000) != 0x7f800000))")) {
                trace.statement("DAT_1803eb4b0 = uVar7;");
                trace.statement("DAT_1803eb4b4 = uVar6;");
                trace.statement("DAT_1803eb4b8 = uVar5;");
                trace.statement("_DAT_1803eb4bc = uVar7;");
                trace.statement("_DAT_1803eb4c0 = uVar6;");
                trace.statement("_DAT_1803eb4c4 = uVar5;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,5);");
            if (trace.condition("if (cVar2 != '\\0')")) {
                trace.statement("(**(code **)(*plVar3 + 0x20))(plVar3,1,\"buttons\");");
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,0xffffffff,3);");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,0xffffffff);");
                    trace.statement("_DAT_1803eb4c8 = (int)dVar1;");
                }
                trace.statement("(**(code **)(*plVar3 + 0x10))(plVar3,1);");
            }
            trace.statement("cVar2 = FUN_180052340();");
            trace.statement("lVar4 = *plVar3;");
            if (trace.condition("if (cVar2 != '\\0')")) {
                trace.statement("(**(code **)(lVar4 + 0xf0))(plVar3,(double)DAT_1803eb53c);");
                trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb540);");
                trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb544);");
                trace.statement("return 3;");
            }
            }
            trace.statement("(**(code **)(lVar4 + 0xe0))();");
            trace.statement("return 1;");
        }
    return kFunction_0x180052cf0;
}

// 0x180052f60 FUN_180052f60
// source: re/dump/decompile/0x180052f60_FUN_180052f60.c
// size: 161 bytes; thunk: false
// body sha256: d102aa4a4ea5f71d727beaf61344bf622a4e9c3af747fe38f7d7c2c77b2f89e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180052f60{
    "0x180052f60",
    "FUN_180052f60",
    R"F180052f60S(undefined FUN_180052f60())F180052f60S",
    R"B180052f60(// 0x180052f60  FUN_180052f60
// size=161 thunk=false
// signature: undefined FUN_180052f60()
// status: ok


undefined8 FUN_180052f60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb53c);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb540);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb544);
    return 3;
  }
  return 0;
}


)B180052f60",
    "d102aa4a4ea5f71d727beaf61344bf622a4e9c3af747fe38f7d7c2c77b2f89e3",
    R"F180052f60C(FUN_180039770)F180052f60C",
    R"F180052f60D(DAT_1803eb490
DAT_1803eb53c
DAT_1803eb540
DAT_1803eb544)F180052f60D",
    R"F180052f60T()F180052f60T",
    R"F180052f60F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803eb490 == '\0') {
16: return 1;
21: return 3;
23: return 0;)F180052f60F",
    R"F180052f60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb53c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb540.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb544.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb53c);.
TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb540);.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb544);.)F180052f60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180052f60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180052f60", "FUN_180052f60");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb53c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb540.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb544.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb53c);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb540);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb544);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb53c", static_cast<const void*>(&image::DAT_1803eb53c));
    trace.data_ref("DAT_1803eb540", static_cast<const void*>(&image::DAT_1803eb540));
    trace.data_ref("DAT_1803eb544", static_cast<const void*>(&image::DAT_1803eb544));
    // body sha256: d102aa4a4ea5f71d727beaf61344bf622a4e9c3af747fe38f7d7c2c77b2f89e3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180052f60(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803eb490 == '\\0')")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb53c);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb540);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb544);");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180052f60;
}

// 0x180053010 FUN_180053010
// source: re/dump/decompile/0x180053010_FUN_180053010.c
// size: 250 bytes; thunk: false
// body sha256: 0ba619ee1ad39cd64a55ab82828a0b532addb424363052aab3876feea94f09ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053010{
    "0x180053010",
    "FUN_180053010",
    R"F180053010S(undefined FUN_180053010())F180053010S",
    R"B180053010(// 0x180053010  FUN_180053010
// size=250 thunk=false
// signature: undefined FUN_180053010()
// status: ok


undefined8 FUN_180053010(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803eb490 != '\0')) {
    dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
    dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
    dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
    if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
        (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) &&
       (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000)) {
      DAT_1803eb53c = (float)dVar1;
      DAT_1803eb540 = (float)dVar2;
      DAT_1803eb544 = (float)dVar3;
    }
    return 0;
  }
  return 0;
}


)B180053010",
    "0ba619ee1ad39cd64a55ab82828a0b532addb424363052aab3876feea94f09ec",
    R"F180053010C(FUN_180039770)F180053010C",
    R"F180053010D(DAT_1803eb490
DAT_1803eb53c
DAT_1803eb540
DAT_1803eb544)F180053010D",
    R"F180053010T()F180053010T",
    R"F180053010F(16: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803eb490 != '\0')) {
20: if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
27: return 0;
29: return 0;)F180053010F",
    R"F180053010U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb53c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb540.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb544.
TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 18: dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
TODO: resolve the indirect call in body 19: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.)F180053010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053010() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053010", "FUN_180053010");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb53c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb540.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb544.
    // TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
    // TODO: resolve the indirect call in body 18: dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
    // TODO: resolve the indirect call in body 19: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb53c", static_cast<const void*>(&image::DAT_1803eb53c));
    trace.data_ref("DAT_1803eb540", static_cast<const void*>(&image::DAT_1803eb540));
    trace.data_ref("DAT_1803eb544", static_cast<const void*>(&image::DAT_1803eb544));
    // body sha256: 0ba619ee1ad39cd64a55ab82828a0b532addb424363052aab3876feea94f09ec
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053010(longlong param_1)");
        {
            trace.statement("double dVar1;");
            trace.statement("double dVar2;");
            trace.statement("double dVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803eb490 != '\\0'))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);");
                trace.statement("dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);");
                trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);");
                if (trace.condition("if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) && (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) && (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000))")) {
                    trace.statement("DAT_1803eb53c = (float)dVar1;");
                    trace.statement("DAT_1803eb540 = (float)dVar2;");
                    trace.statement("DAT_1803eb544 = (float)dVar3;");
                }
                trace.statement("return 0;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180053010;
}

// 0x180053110 FUN_180053110
// source: re/dump/decompile/0x180053110_FUN_180053110.c
// size: 161 bytes; thunk: false
// body sha256: 9dc4b11ef5f96244e331050f8dc6d5a9b882e326ef180df863f398691b6e4371
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053110{
    "0x180053110",
    "FUN_180053110",
    R"F180053110S(undefined FUN_180053110())F180053110S",
    R"B180053110(// 0x180053110  FUN_180053110
// size=161 thunk=false
// signature: undefined FUN_180053110()
// status: ok


undefined8 FUN_180053110(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e4);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e8);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4ec);
    return 3;
  }
  return 0;
}


)B180053110",
    "9dc4b11ef5f96244e331050f8dc6d5a9b882e326ef180df863f398691b6e4371",
    R"F180053110C(FUN_180039770)F180053110C",
    R"F180053110D(DAT_1803eb490
DAT_1803eb4e4
DAT_1803eb4e8
DAT_1803eb4ec)F180053110D",
    R"F180053110T()F180053110T",
    R"F180053110F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803eb490 == '\0') {
16: return 1;
21: return 3;
23: return 0;)F180053110F",
    R"F180053110U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4e4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4e8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4ec.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e4);.
TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e8);.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4ec);.)F180053110U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053110() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053110", "FUN_180053110");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4e4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4e8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4ec.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e4);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e8);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4ec);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb4e4", static_cast<const void*>(&image::DAT_1803eb4e4));
    trace.data_ref("DAT_1803eb4e8", static_cast<const void*>(&image::DAT_1803eb4e8));
    trace.data_ref("DAT_1803eb4ec", static_cast<const void*>(&image::DAT_1803eb4ec));
    // body sha256: 9dc4b11ef5f96244e331050f8dc6d5a9b882e326ef180df863f398691b6e4371
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053110(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803eb490 == '\\0')")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e4);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e8);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4ec);");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180053110;
}

// 0x1800531c0 FUN_1800531c0
// source: re/dump/decompile/0x1800531c0_FUN_1800531c0.c
// size: 250 bytes; thunk: false
// body sha256: 54ca1de006432c183a3de9dfe07e7f2e57b9827cf2b3ca4b7d74aece50c0f38c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800531c0{
    "0x1800531c0",
    "FUN_1800531c0",
    R"F1800531c0S(undefined FUN_1800531c0())F1800531c0S",
    R"B1800531c0(// 0x1800531c0  FUN_1800531c0
// size=250 thunk=false
// signature: undefined FUN_1800531c0()
// status: ok


undefined8 FUN_1800531c0(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803eb490 != '\0')) {
    dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
    dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
    dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
    if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
        (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) &&
       (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000)) {
      DAT_1803eb4e4 = (float)dVar1;
      DAT_1803eb4e8 = (float)dVar2;
      DAT_1803eb4ec = (float)dVar3;
    }
    return 0;
  }
  return 0;
}


)B1800531c0",
    "54ca1de006432c183a3de9dfe07e7f2e57b9827cf2b3ca4b7d74aece50c0f38c",
    R"F1800531c0C(FUN_180039770)F1800531c0C",
    R"F1800531c0D(DAT_1803eb490
DAT_1803eb4e4
DAT_1803eb4e8
DAT_1803eb4ec)F1800531c0D",
    R"F1800531c0T()F1800531c0T",
    R"F1800531c0F(16: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803eb490 != '\0')) {
20: if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
27: return 0;
29: return 0;)F1800531c0F",
    R"F1800531c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4e4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4e8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4ec.
TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 18: dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
TODO: resolve the indirect call in body 19: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.)F1800531c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800531c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800531c0", "FUN_1800531c0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4e4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4e8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4ec.
    // TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
    // TODO: resolve the indirect call in body 18: dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
    // TODO: resolve the indirect call in body 19: dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb4e4", static_cast<const void*>(&image::DAT_1803eb4e4));
    trace.data_ref("DAT_1803eb4e8", static_cast<const void*>(&image::DAT_1803eb4e8));
    trace.data_ref("DAT_1803eb4ec", static_cast<const void*>(&image::DAT_1803eb4ec));
    // body sha256: 54ca1de006432c183a3de9dfe07e7f2e57b9827cf2b3ca4b7d74aece50c0f38c
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800531c0(longlong param_1)");
        {
            trace.statement("double dVar1;");
            trace.statement("double dVar2;");
            trace.statement("double dVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803eb490 != '\\0'))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);");
                trace.statement("dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);");
                trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);");
                if (trace.condition("if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) && (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) && (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000))")) {
                    trace.statement("DAT_1803eb4e4 = (float)dVar1;");
                    trace.statement("DAT_1803eb4e8 = (float)dVar2;");
                    trace.statement("DAT_1803eb4ec = (float)dVar3;");
                }
                trace.statement("return 0;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800531c0;
}

// 0x1800532c0 FUN_1800532c0
// source: re/dump/decompile/0x1800532c0_FUN_1800532c0.c
// size: 174 bytes; thunk: false
// body sha256: bc5a59dfa6094b4b9072909aed6dea00a1416d53b8ccf8bc57192937b5d75347
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800532c0{
    "0x1800532c0",
    "FUN_1800532c0",
    R"F1800532c0S(undefined FUN_1800532c0())F1800532c0S",
    R"B1800532c0(// 0x1800532c0  FUN_1800532c0
// size=174 thunk=false
// signature: undefined FUN_1800532c0()
// status: ok


undefined8 FUN_1800532c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar2 + 0xe0))(plVar2);
      return 1;
    }
    lVar1 = *plVar2;
    fVar3 = DAT_1803eb4e8 * DAT_1803eb4e8 + DAT_1803eb4e4 * DAT_1803eb4e4;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    (**(code **)(lVar1 + 0xf0))(plVar2,(double)fVar3);
    return 1;
  }
  return 0;
}


)B1800532c0",
    "bc5a59dfa6094b4b9072909aed6dea00a1416d53b8ccf8bc57192937b5d75347",
    R"F1800532c0C(FUN_180039770)F1800532c0C",
    R"F1800532c0D(DAT_1803eb490
DAT_1803eb4e4
DAT_1803eb4e8)F1800532c0D",
    R"F1800532c0T()F1800532c0T",
    R"F1800532c0F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
16: if (DAT_1803eb490 == '\0') {
18: return 1;
22: if (fVar3 < 0.0) {
25: else {
29: return 1;
31: return 0;)F1800532c0F",
    R"F1800532c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4e4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4e8.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))(plVar2);.
TODO: resolve the indirect call in body 28: (**(code **)(lVar1 + 0xf0))(plVar2,(double)fVar3);.)F1800532c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800532c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800532c0", "FUN_1800532c0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4e4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4e8.
    // TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: resolve the indirect call in body 28: (**(code **)(lVar1 + 0xf0))(plVar2,(double)fVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb4e4", static_cast<const void*>(&image::DAT_1803eb4e4));
    trace.data_ref("DAT_1803eb4e8", static_cast<const void*>(&image::DAT_1803eb4e8));
    // body sha256: bc5a59dfa6094b4b9072909aed6dea00a1416d53b8ccf8bc57192937b5d75347
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800532c0(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("float fVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.condition("if (DAT_1803eb490 == '\\0')")) {
                    trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
                    trace.statement("return 1;");
                }
                trace.statement("lVar1 = *plVar2;");
                trace.statement("fVar3 = DAT_1803eb4e8 * DAT_1803eb4e8 + DAT_1803eb4e4 * DAT_1803eb4e4;");
                if (trace.condition("if (fVar3 < 0.0)")) {
                    trace.statement("fVar3 = sqrtf(fVar3);");
                } else {
                trace.statement("fVar3 = SQRT(fVar3);");
                }
                trace.statement("(**(code **)(lVar1 + 0xf0))(plVar2,(double)fVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800532c0;
}

// 0x180053370 FUN_180053370
// source: re/dump/decompile/0x180053370_FUN_180053370.c
// size: 161 bytes; thunk: false
// body sha256: efecaf5416d261aaa3b017b9080c70a1f5b8103fac24716adcc3aeb59b99d633
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053370{
    "0x180053370",
    "FUN_180053370",
    R"F180053370S(undefined FUN_180053370())F180053370S",
    R"B180053370(// 0x180053370  FUN_180053370
// size=161 thunk=false
// signature: undefined FUN_180053370()
// status: ok


undefined8 FUN_180053370(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b0);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b4);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b8);
    return 3;
  }
  return 0;
}


)B180053370",
    "efecaf5416d261aaa3b017b9080c70a1f5b8103fac24716adcc3aeb59b99d633",
    R"F180053370C(FUN_180039770)F180053370C",
    R"F180053370D(DAT_1803eb490
DAT_1803eb4b0
DAT_1803eb4b4
DAT_1803eb4b8)F180053370D",
    R"F180053370T()F180053370T",
    R"F180053370F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803eb490 == '\0') {
16: return 1;
21: return 3;
23: return 0;)F180053370F",
    R"F180053370U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4b0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4b4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4b8.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b0);.
TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b4);.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b8);.)F180053370U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053370() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053370", "FUN_180053370");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4b0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4b4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4b8.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b0);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b4);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b8);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb4b0", static_cast<const void*>(&image::DAT_1803eb4b0));
    trace.data_ref("DAT_1803eb4b4", static_cast<const void*>(&image::DAT_1803eb4b4));
    trace.data_ref("DAT_1803eb4b8", static_cast<const void*>(&image::DAT_1803eb4b8));
    // body sha256: efecaf5416d261aaa3b017b9080c70a1f5b8103fac24716adcc3aeb59b99d633
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053370(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803eb490 == '\\0')")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b0);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b4);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4b8);");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180053370;
}

// 0x180053420 FUN_180053420
// source: re/dump/decompile/0x180053420_FUN_180053420.c
// size: 448 bytes; thunk: false
// body sha256: 660abb88a8a45c3e5454c744cf56ffdc42f230cad96dda5c0aa82272f45ed907
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053420{
    "0x180053420",
    "FUN_180053420",
    R"F180053420S(undefined FUN_180053420())F180053420S",
    R"B180053420(// 0x180053420  FUN_180053420
// size=448 thunk=false
// signature: undefined FUN_180053420()
// status: ok


undefined8 FUN_180053420(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  if ((DAT_1803eb490 != '\0') && (DAT_1803eb498 != 0)) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_18001d080(&local_80,"DT_BasePlayer",0xd);
    uVar4 = FUN_18016d4c0(local_40,&local_80);
    uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);
    FUN_18020e450(&local_80);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_18001d080(&local_60,"m_fFlags",8);
    uVar5 = FUN_18016d4c0(local_40,&local_60);
    iVar2 = FUN_180018c10(uVar4,uVar5);
    FUN_18020e450(&local_60);
    lVar1 = *plVar3;
    if (iVar2 < 1) {
      (**(code **)(lVar1 + 0xe0))(plVar3);
      return 1;
    }
    (**(code **)(lVar1 + 0xf8))(plVar3,*(byte *)(iVar2 + DAT_1803eb498) & 1,lVar1,param_4,iVar2);
    return 1;
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}


)B180053420",
    "660abb88a8a45c3e5454c744cf56ffdc42f230cad96dda5c0aa82272f45ed907",
    R"F180053420C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_180039770
FUN_18016d4c0
FUN_18020e450)F180053420C",
    R"F180053420D(DAT_1803eb490
DAT_1803eb498
DAT_1803fac80)F180053420D",
    R"F180053420T("m_fFlags"
"DT_BasePlayer")F180053420T",
    R"F180053420F(26: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
27: return 0;
29: if ((DAT_1803eb490 != '\0') && (DAT_1803eb498 != 0)) {
47: if (iVar2 < 1) {
49: return 1;
52: return 1;
55: return 1;)F180053420F",
    R"F180053420U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb498.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac80.
TODO: resolve the indirect call in body 48: (**(code **)(lVar1 + 0xe0))(plVar3);.
TODO: resolve the indirect call in body 51: (**(code **)(lVar1 + 0xf8))(plVar3,*(byte *)(iVar2 + DAT_1803eb498) & 1,lVar1,param_4,iVar2);.
TODO: resolve the indirect call in body 54: (**(code **)(*plVar3 + 0xe0))(plVar3);.)F180053420U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053420() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053420", "FUN_180053420");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb498.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac80.
    // TODO: resolve the indirect call in body 48: (**(code **)(lVar1 + 0xe0))(plVar3);.
    // TODO: resolve the indirect call in body 51: (**(code **)(lVar1 + 0xf8))(plVar3,*(byte *)(iVar2 + DAT_1803eb498) & 1,lVar1,param_4,iVar2);.
    // TODO: resolve the indirect call in body 54: (**(code **)(*plVar3 + 0xe0))(plVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180018c10", reinterpret_cast<const void*>(&image::FUN_180018c10));
    trace.call_target("FUN_180018ef0", reinterpret_cast<const void*>(&image::FUN_180018ef0));
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18016d4c0", reinterpret_cast<const void*>(&image::FUN_18016d4c0));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb498", static_cast<const void*>(&image::DAT_1803eb498));
    trace.data_ref("DAT_1803fac80", static_cast<const void*>(&image::DAT_1803fac80));
    trace.string_literal("m_fFlags");
    trace.string_literal("DT_BasePlayer");
    // body sha256: 660abb88a8a45c3e5454c744cf56ffdc42f230cad96dda5c0aa82272f45ed907
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053420(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("undefined8 local_80;");
            trace.statement("undefined8 uStack_78;");
            trace.statement("undefined8 local_70;");
            trace.statement("undefined8 local_68;");
            trace.statement("undefined8 local_60;");
            trace.statement("undefined8 uStack_58;");
            trace.statement("undefined8 local_50;");
            trace.statement("undefined8 local_48;");
            trace.statement("undefined1 local_40 [40];");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("return 0;");
            }
            if (trace.condition("if ((DAT_1803eb490 != '\\0') && (DAT_1803eb498 != 0))")) {
                trace.statement("local_80 = 0;");
                trace.statement("uStack_78 = 0;");
                trace.statement("local_70 = 0;");
                trace.statement("local_68 = 0;");
                trace.statement("FUN_18001d080(&local_80,\"DT_BasePlayer\",0xd);");
                trace.statement("uVar4 = FUN_18016d4c0(local_40,&local_80);");
                trace.statement("uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);");
                trace.statement("FUN_18020e450(&local_80);");
                trace.statement("local_60 = 0;");
                trace.statement("uStack_58 = 0;");
                trace.statement("local_50 = 0;");
                trace.statement("local_48 = 0;");
                trace.statement("FUN_18001d080(&local_60,\"m_fFlags\",8);");
                trace.statement("uVar5 = FUN_18016d4c0(local_40,&local_60);");
                trace.statement("iVar2 = FUN_180018c10(uVar4,uVar5);");
                trace.statement("FUN_18020e450(&local_60);");
                trace.statement("lVar1 = *plVar3;");
                if (trace.condition("if (iVar2 < 1)")) {
                    trace.statement("(**(code **)(lVar1 + 0xe0))(plVar3);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(lVar1 + 0xf8))(plVar3,*(byte *)(iVar2 + DAT_1803eb498) & 1,lVar1,param_4,iVar2);");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar3 + 0xe0))(plVar3);");
            trace.statement("return 1;");
        }
    return kFunction_0x180053420;
}

// 0x180053600 FUN_180053600
// source: re/dump/decompile/0x180053600_FUN_180053600.c
// size: 93 bytes; thunk: false
// body sha256: d163f0d9aee23d51d654f6a3b75f0dd4bbc8a3c740053bd7ca08f72c1f715c61
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053600{
    "0x180053600",
    "FUN_180053600",
    R"F180053600S(undefined FUN_180053600())F180053600S",
    R"B180053600(// 0x180053600  FUN_180053600
// size=93 thunk=false
// signature: undefined FUN_180053600()
// status: ok


undefined8 FUN_180053600(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb508);
    return 1;
  }
  return 0;
}


)B180053600",
    "d163f0d9aee23d51d654f6a3b75f0dd4bbc8a3c740053bd7ca08f72c1f715c61",
    R"F180053600C(FUN_180039770)F180053600C",
    R"F180053600D(DAT_1803eb490
DAT_1803eb508)F180053600D",
    R"F180053600T()F180053600T",
    R"F180053600F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803eb490 == '\0') {
16: return 1;
19: return 1;
21: return 0;)F180053600F",
    R"F180053600U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb508.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb508);.)F180053600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053600() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053600", "FUN_180053600");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb508.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb508);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb508", static_cast<const void*>(&image::DAT_1803eb508));
    // body sha256: d163f0d9aee23d51d654f6a3b75f0dd4bbc8a3c740053bd7ca08f72c1f715c61
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053600(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803eb490 == '\\0')")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb508);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180053600;
}

// 0x180053660 FUN_180053660
// source: re/dump/decompile/0x180053660_FUN_180053660.c
// size: 93 bytes; thunk: false
// body sha256: efdeadb21a1411224da0bd454170e8dfe08f6fe9e996de138f54e24ad7d244c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053660{
    "0x180053660",
    "FUN_180053660",
    R"F180053660S(undefined FUN_180053660())F180053660S",
    R"B180053660(// 0x180053660  FUN_180053660
// size=93 thunk=false
// signature: undefined FUN_180053660()
// status: ok


undefined8 FUN_180053660(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4dc);
    return 1;
  }
  return 0;
}


)B180053660",
    "efdeadb21a1411224da0bd454170e8dfe08f6fe9e996de138f54e24ad7d244c7",
    R"F180053660C(FUN_180039770)F180053660C",
    R"F180053660D(DAT_1803eb490
DAT_1803eb4dc)F180053660D",
    R"F180053660T()F180053660T",
    R"F180053660F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803eb490 == '\0') {
16: return 1;
19: return 1;
21: return 0;)F180053660F",
    R"F180053660U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb490.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb4dc.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4dc);.)F180053660U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053660() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053660", "FUN_180053660");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb490.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb4dc.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4dc);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803eb490", static_cast<const void*>(&image::DAT_1803eb490));
    trace.data_ref("DAT_1803eb4dc", static_cast<const void*>(&image::DAT_1803eb4dc));
    // body sha256: efdeadb21a1411224da0bd454170e8dfe08f6fe9e996de138f54e24ad7d244c7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053660(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803eb490 == '\\0')")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4dc);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180053660;
}

// 0x1800536c0 FUN_1800536c0
// source: re/dump/decompile/0x1800536c0_FUN_1800536c0.c
// size: 183 bytes; thunk: false
// body sha256: 2a875dba0154ca600f1c27bba288d2115a659af305e61e6e8670eda8e14a0b54
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800536c0{
    "0x1800536c0",
    "FUN_1800536c0",
    R"F1800536c0S(undefined FUN_1800536c0())F1800536c0S",
    R"B1800536c0(// 0x1800536c0  FUN_1800536c0
// size=183 thunk=false
// signature: undefined FUN_1800536c0()
// status: ok


int FUN_1800536c0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((param_1 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) || (DAT_1803fa608 == 0))
  {
    iVar1 = -1;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();
    if (plVar3 == (longlong *)0x0) {
      iVar1 = -1;
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if ((iVar1 < 1) || (*(int *)(DAT_1803fa608 + 0x1c) < iVar1)) {
        iVar1 = -1;
      }
      else {
        iVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
        if (iVar1 == iVar2) {
          iVar1 = -1;
        }
        else if (DAT_1803fa360 == (longlong *)0x0) {
          iVar1 = -1;
        }
        else {
          plVar3 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar1);
          if (plVar3 != param_1) {
            iVar1 = -1;
          }
        }
      }
    }
  }
  return iVar1;
}


)B1800536c0",
    "2a875dba0154ca600f1c27bba288d2115a659af305e61e6e8670eda8e14a0b54",
    R"F1800536c0C()F1800536c0C",
    R"F1800536c0D(DAT_1803fa360
DAT_1803fa608
DAT_1803fa668)F1800536c0D",
    R"F1800536c0T()F1800536c0T",
    R"F1800536c0F(14: if (((param_1 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) || (DAT_1803fa608 == 0))
18: else {
20: if (plVar3 == (longlong *)0x0) {
23: else {
25: if ((iVar1 < 1) || (*(int *)(DAT_1803fa608 + 0x1c) < iVar1)) {
28: else {
30: if (iVar1 == iVar2) {
33: else if (DAT_1803fa360 == (longlong *)0x0) {
36: else {
38: if (plVar3 != param_1) {
45: return iVar1;)F1800536c0F",
    R"F1800536c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 19: plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();.
TODO: resolve the indirect call in body 24: iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);.
TODO: resolve the indirect call in body 29: iVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 37: plVar3 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar1);.)F1800536c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800536c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800536c0", "FUN_1800536c0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 19: plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();.
    // TODO: resolve the indirect call in body 24: iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);.
    // TODO: resolve the indirect call in body 29: iVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();.
    // TODO: resolve the indirect call in body 37: plVar3 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 2a875dba0154ca600f1c27bba288d2115a659af305e61e6e8670eda8e14a0b54
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("int FUN_1800536c0(longlong *param_1)");
        {
            trace.statement("int iVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            if (trace.condition("if (((param_1 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) || (DAT_1803fa608 == 0))")) {
                trace.statement("iVar1 = -1;");
            } else {
            trace.statement("plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();");
            if (trace.condition("if (plVar3 == (longlong *)0x0)")) {
                trace.statement("iVar1 = -1;");
            } else {
            trace.statement("iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);");
            if (trace.condition("if ((iVar1 < 1) || (*(int *)(DAT_1803fa608 + 0x1c) < iVar1))")) {
                trace.statement("iVar1 = -1;");
            } else {
            trace.statement("iVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();");
            if (trace.condition("if (iVar1 == iVar2)")) {
                trace.statement("iVar1 = -1;");
            } else {
            trace.statement("iVar1 = -1;");
            }
            trace.statement("else {");
            trace.statement("plVar3 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar1);");
            if (trace.condition("if (plVar3 != param_1)")) {
                trace.statement("iVar1 = -1;");
            }
            }
            }
            }
        }
        trace.statement("return iVar1;");
    return kFunction_0x1800536c0;
}

// 0x180053780 FUN_180053780
// source: re/dump/decompile/0x180053780_FUN_180053780.c
// size: 944 bytes; thunk: false
// body sha256: 754fccaf3cf2ee067a125ad067623ef47534bd4dfd3987870d9b94310b3c5a25
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053780{
    "0x180053780",
    "FUN_180053780",
    R"F180053780S(undefined FUN_180053780())F180053780S",
    R"B180053780(// 0x180053780  FUN_180053780
// size=944 thunk=false
// signature: undefined FUN_180053780()
// status: ok


longlong * FUN_180053780(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  float *pfVar7;
  code *pcVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 **ppuVar14;
  double *pdVar15;
  double local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 *local_60;
  double local_58;
  
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  cVar6 = FUN_18003a090("Pre_BuildBones");
  if (cVar6 == '\0') {
    return param_1;
  }
  local_68 = FUN_1800536c0(param_2);
  if (local_68 < 1) {
    return param_1;
  }
  pfVar7 = (float *)FUN_18001d620(param_2);
  fVar1 = pfVar7[1];
  local_res20 = (undefined8 *)(double)fVar1;
  fVar2 = *pfVar7;
  local_f8 = (double)fVar2;
  local_res18 = (undefined8 *)((ulonglong)local_res18 & 0xffffffffffffff00);
  pdVar15 = &local_f8;
  ppuVar14 = &local_res18;
  local_60 = local_res20;
  local_58 = local_f8;
  cVar6 = FUN_1801fea40();
  if (cVar6 == '\0') {
    return param_1;
  }
  fVar12 = (float)FUN_1802d3e00((float)(double)local_res20);
  fVar13 = fVar2;
  if ((char)local_res18 != '\0') {
    fVar13 = (float)local_f8;
  }
  if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
    return param_1;
  }
  if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
    return param_1;
  }
  if ((fVar12 == fVar1) && (fVar13 == fVar2)) {
    return param_1;
  }
  *(float *)(param_1 + 1) = *pfVar7;
  *(float *)((longlong)param_1 + 0xc) = pfVar7[1];
  *(float *)(param_1 + 2) = pfVar7[2];
  pfVar7[1] = fVar12;
  *pfVar7 = fVar13;
  *param_1 = param_2;
  if (param_2 == 0) {
    return param_1;
  }
  if (DAT_1803ff11c == '\0') {
    DAT_1803ff11c = '\x01';
    local_res18 = &local_e8;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    FUN_18001d080(&local_e8,
                  "8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
                  ,0x53,fVar2,ppuVar14,pdVar15);
    local_res20 = &local_c8;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"client.dll",10);
    pcVar8 = (code *)FUN_180015f40(&local_c8,&local_e8);
    if (pcVar8 == (code *)0x0) {
      local_res18 = &local_a8;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_f0 = pcVar8;
      FUN_18001d080(&local_a8,
                    "FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3",0x45);
      local_res20 = &local_88;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_18001d080(&local_88,"client.dll",10);
      lVar9 = FUN_180015f40(&local_88,&local_a8);
      if ((lVar9 == 0) || (pcVar8 = (code *)(lVar9 + -6), local_f0 = pcVar8, pcVar8 == (code *)0x0))
      {
        FUN_180014410(&DAT_18033fcf0);
        goto LAB_180053a61;
      }
    }
    iVar3 = *(int *)(pcVar8 + 10);
    iVar4 = *(int *)(pcVar8 + 0x1b);
    if (((iVar3 - 0x101U < 0x3eff) && (iVar4 - 0x101U < 0x3eff)) && (iVar4 != iVar3)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((iVar3 == 0x1718) && (iVar4 == 0x1a88)) {
      pcVar11 = " [matches the documented layout]";
    }
    else {
      pcVar11 = "";
    }
    pcVar10 = "REJECTED (offsets outside the bone block)";
    if (bVar5) {
      pcVar10 = "accepted";
    }
    local_f0 = pcVar8;
    FUN_180014410(&DAT_18033fde0,pcVar8,iVar3,iVar4,pcVar10,pcVar11);
    if (bVar5) {
      DAT_1803fead8 = pcVar8;
    }
  }
LAB_180053a61:
  if (DAT_1803fead8 != (code *)0x0) {
    (*DAT_1803fead8)(param_2);
  }
  return param_1;
}


)B180053780",
    "754fccaf3cf2ee067a125ad067623ef47534bd4dfd3987870d9b94310b3c5a25",
    R"F180053780C(FUN_180014410
FUN_180015f40
FUN_18001d080
FUN_18001d620
FUN_18003a090
FUN_1800536c0
FUN_1801fea40
FUN_1802d3e00)F180053780C",
    R"F180053780D(LAB_180053a61
DAT_18033fcf0
DAT_18033fde0
DAT_1803fead8
DAT_1803ff11c)F180053780D",
    R"F180053780T(""
"accepted"
"client.dll"
"Pre_BuildBones"
" [matches the documented layout]"
"REJECTED (offsets outside the bone block)"
"FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
"8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3")F180053780T",
    R"F180053780F(53: if (cVar6 == '\0') {
54: return param_1;
57: if (local_68 < 1) {
58: return param_1;
71: if (cVar6 == '\0') {
72: return param_1;
76: if ((char)local_res18 != '\0') {
79: if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
80: return param_1;
82: if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
83: return param_1;
85: if ((fVar12 == fVar1) && (fVar13 == fVar2)) {
86: return param_1;
94: if (param_2 == 0) {
95: return param_1;
97: if (DAT_1803ff11c == '\0') {
114: if (pcVar8 == (code *)0x0) {
130: if ((lVar9 == 0) || (pcVar8 = (code *)(lVar9 + -6), local_f0 = pcVar8, pcVar8 == (code *)0x0))
133: goto LAB_180053a61;
138: if (((iVar3 - 0x101U < 0x3eff) && (iVar4 - 0x101U < 0x3eff)) && (iVar4 != iVar3)) {
141: else {
144: if ((iVar3 == 0x1718) && (iVar4 == 0x1a88)) {
147: else {
151: if (bVar5) {
156: if (bVar5) {
160: LAB_180053a61:
161: if (DAT_1803fead8 != (code *)0x0) {
164: return param_1;)F180053780F",
    R"F180053780U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_180053a61.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033fcf0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033fde0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fead8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff11c.
TODO: resolve the indirect call in body 113: pcVar8 = (code *)FUN_180015f40(&local_c8,&local_e8);.
TODO: resolve the indirect call in body 114: if (pcVar8 == (code *)0x0) {.
TODO: resolve the indirect call in body 130: if ((lVar9 == 0) || (pcVar8 = (code *)(lVar9 + -6), local_f0 = pcVar8, pcVar8 == (code *)0x0)).
TODO: resolve the indirect call in body 161: if (DAT_1803fead8 != (code *)0x0) {.
TODO: resolve the indirect call in body 162: (*DAT_1803fead8)(param_2);.)F180053780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053780() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053780", "FUN_180053780");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_180053a61.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033fcf0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033fde0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fead8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff11c.
    // TODO: resolve the indirect call in body 113: pcVar8 = (code *)FUN_180015f40(&local_c8,&local_e8);.
    // TODO: resolve the indirect call in body 114: if (pcVar8 == (code *)0x0) {.
    // TODO: resolve the indirect call in body 130: if ((lVar9 == 0) || (pcVar8 = (code *)(lVar9 + -6), local_f0 = pcVar8, pcVar8 == (code *)0x0)).
    // TODO: resolve the indirect call in body 161: if (DAT_1803fead8 != (code *)0x0) {.
    // TODO: resolve the indirect call in body 162: (*DAT_1803fead8)(param_2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.call_target("FUN_180015f40", reinterpret_cast<const void*>(&image::FUN_180015f40));
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_18001d620", reinterpret_cast<const void*>(&image::FUN_18001d620));
    trace.call_target("FUN_18003a090", reinterpret_cast<const void*>(&image::FUN_18003a090));
    trace.call_target("FUN_1800536c0", reinterpret_cast<const void*>(&image::FUN_1800536c0));
    trace.call_target("FUN_1801fea40", reinterpret_cast<const void*>(&image::FUN_1801fea40));
    trace.call_target("FUN_1802d3e00", reinterpret_cast<const void*>(&image::FUN_1802d3e00));
    trace.data_ref("DAT_18033fcf0", static_cast<const void*>(&image::DAT_18033fcf0));
    trace.data_ref("DAT_18033fde0", static_cast<const void*>(&image::DAT_18033fde0));
    trace.data_ref("DAT_1803fead8", static_cast<const void*>(&image::DAT_1803fead8));
    trace.data_ref("DAT_1803ff11c", static_cast<const void*>(&image::DAT_1803ff11c));
    trace.string_literal("");
    trace.string_literal("accepted");
    trace.string_literal("client.dll");
    trace.string_literal("Pre_BuildBones");
    trace.string_literal(" [matches the documented layout]");
    trace.string_literal("REJECTED (offsets outside the bone block)");
    trace.string_literal("FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3");
    trace.string_literal("8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3");
    // body sha256: 754fccaf3cf2ee067a125ad067623ef47534bd4dfd3987870d9b94310b3c5a25
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("longlong * FUN_180053780(longlong *param_1,longlong param_2)");
        {
            trace.statement("float fVar1;");
            trace.statement("float fVar2;");
            trace.statement("int iVar3;");
            trace.statement("int iVar4;");
            trace.statement("bool bVar5;");
            trace.statement("char cVar6;");
            trace.statement("float *pfVar7;");
            trace.statement("code *pcVar8;");
            trace.statement("longlong lVar9;");
            trace.statement("char *pcVar10;");
            trace.statement("char *pcVar11;");
            trace.statement("float fVar12;");
            trace.statement("float fVar13;");
            trace.statement("undefined8 *local_res18;");
            trace.statement("undefined8 *local_res20;");
            trace.statement("undefined8 **ppuVar14;");
            trace.statement("double *pdVar15;");
            trace.statement("double local_f8;");
            trace.statement("code *local_f0;");
            trace.statement("undefined8 local_e8;");
            trace.statement("undefined8 uStack_e0;");
            trace.statement("undefined8 local_d8;");
            trace.statement("undefined8 local_d0;");
            trace.statement("undefined8 local_c8;");
            trace.statement("undefined8 uStack_c0;");
            trace.statement("undefined8 local_b8;");
            trace.statement("undefined8 local_b0;");
            trace.statement("undefined8 local_a8;");
            trace.statement("undefined8 uStack_a0;");
            trace.statement("undefined8 local_98;");
            trace.statement("undefined8 local_90;");
            trace.statement("undefined8 local_88;");
            trace.statement("undefined8 uStack_80;");
            trace.statement("undefined8 local_78;");
            trace.statement("undefined8 local_70;");
            trace.statement("int local_68;");
            trace.statement("undefined8 *local_60;");
            trace.statement("double local_58;");
            trace.statement("*param_1 = 0;");
            trace.statement("*(undefined8 *)((longlong)param_1 + 0xc) = 0;");
            trace.statement("*(undefined4 *)(param_1 + 1) = 0;");
            trace.statement("cVar6 = FUN_18003a090(\"Pre_BuildBones\");");
            if (trace.condition("if (cVar6 == '\\0')")) {
                trace.statement("return param_1;");
            }
            trace.statement("local_68 = FUN_1800536c0(param_2);");
            if (trace.condition("if (local_68 < 1)")) {
                trace.statement("return param_1;");
            }
            trace.statement("pfVar7 = (float *)FUN_18001d620(param_2);");
            trace.statement("fVar1 = pfVar7[1];");
            trace.statement("local_res20 = (undefined8 *)(double)fVar1;");
            trace.statement("fVar2 = *pfVar7;");
            trace.statement("local_f8 = (double)fVar2;");
            trace.statement("local_res18 = (undefined8 *)((ulonglong)local_res18 & 0xffffffffffffff00);");
            trace.statement("pdVar15 = &local_f8;");
            trace.statement("ppuVar14 = &local_res18;");
            trace.statement("local_60 = local_res20;");
            trace.statement("local_58 = local_f8;");
            trace.statement("cVar6 = FUN_1801fea40();");
            if (trace.condition("if (cVar6 == '\\0')")) {
                trace.statement("return param_1;");
            }
            trace.statement("fVar12 = (float)FUN_1802d3e00((float)(double)local_res20);");
            trace.statement("fVar13 = fVar2;");
            if (trace.condition("if ((char)local_res18 != '\\0')")) {
                trace.statement("fVar13 = (float)local_f8;");
            }
            if (trace.condition("if (((uint)fVar12 & 0x7f800000) == 0x7f800000)")) {
                trace.statement("return param_1;");
            }
            if (trace.condition("if (((uint)fVar13 & 0x7f800000) == 0x7f800000)")) {
                trace.statement("return param_1;");
            }
            if (trace.condition("if ((fVar12 == fVar1) && (fVar13 == fVar2))")) {
                trace.statement("return param_1;");
            }
            trace.statement("*(float *)(param_1 + 1) = *pfVar7;");
            trace.statement("*(float *)((longlong)param_1 + 0xc) = pfVar7[1];");
            trace.statement("*(float *)(param_1 + 2) = pfVar7[2];");
            trace.statement("pfVar7[1] = fVar12;");
            trace.statement("*pfVar7 = fVar13;");
            trace.statement("*param_1 = param_2;");
            if (trace.condition("if (param_2 == 0)")) {
                trace.statement("return param_1;");
            }
            if (trace.condition("if (DAT_1803ff11c == '\\0')")) {
                trace.statement("DAT_1803ff11c = '\\x01';");
                trace.statement("local_res18 = &local_e8;");
                trace.statement("local_e8 = 0;");
                trace.statement("uStack_e0 = 0;");
                trace.statement("local_d8 = 0;");
                trace.statement("local_d0 = 0;");
                trace.statement("FUN_18001d080(&local_e8,");
                trace.statement("\"8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3\"");
                trace.statement(",0x53,fVar2,ppuVar14,pdVar15);");
                trace.statement("local_res20 = &local_c8;");
                trace.statement("local_c8 = 0;");
                trace.statement("uStack_c0 = 0;");
                trace.statement("local_b8 = 0;");
                trace.statement("local_b0 = 0;");
                trace.statement("FUN_18001d080(&local_c8,\"client.dll\",10);");
                trace.statement("pcVar8 = (code *)FUN_180015f40(&local_c8,&local_e8);");
                if (trace.condition("if (pcVar8 == (code *)0x0)")) {
                    trace.statement("local_res18 = &local_a8;");
                    trace.statement("local_a8 = 0;");
                    trace.statement("uStack_a0 = 0;");
                    trace.statement("local_98 = 0;");
                    trace.statement("local_90 = 0;");
                    trace.statement("local_f0 = pcVar8;");
                    trace.statement("FUN_18001d080(&local_a8,");
                    trace.statement("\"FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3\",0x45);");
                    trace.statement("local_res20 = &local_88;");
                    trace.statement("local_88 = 0;");
                    trace.statement("uStack_80 = 0;");
                    trace.statement("local_78 = 0;");
                    trace.statement("local_70 = 0;");
                    trace.statement("FUN_18001d080(&local_88,\"client.dll\",10);");
                    trace.statement("lVar9 = FUN_180015f40(&local_88,&local_a8);");
                    if (trace.condition("if ((lVar9 == 0) || (pcVar8 = (code *)(lVar9 + -6), local_f0 = pcVar8, pcVar8 == (code *)0x0))")) {
                        trace.statement("FUN_180014410(&DAT_18033fcf0);");
                        trace.statement("goto LAB_180053a61;");
                    }
                }
                trace.statement("iVar3 = *(int *)(pcVar8 + 10);");
                trace.statement("iVar4 = *(int *)(pcVar8 + 0x1b);");
                if (trace.condition("if (((iVar3 - 0x101U < 0x3eff) && (iVar4 - 0x101U < 0x3eff)) && (iVar4 != iVar3))")) {
                    trace.statement("bVar5 = true;");
                } else {
                trace.statement("bVar5 = false;");
                }
                if (trace.condition("if ((iVar3 == 0x1718) && (iVar4 == 0x1a88))")) {
                    trace.statement("pcVar11 = \" [matches the documented layout]\";");
                } else {
                trace.statement("pcVar11 = \"\";");
                }
                trace.statement("pcVar10 = \"REJECTED (offsets outside the bone block)\";");
                if (trace.condition("if (bVar5)")) {
                    trace.statement("pcVar10 = \"accepted\";");
                }
                trace.statement("local_f0 = pcVar8;");
                trace.statement("FUN_180014410(&DAT_18033fde0,pcVar8,iVar3,iVar4,pcVar10,pcVar11);");
                if (trace.condition("if (bVar5)")) {
                    trace.statement("DAT_1803fead8 = pcVar8;");
                }
            }
            LAB_180053a61: ;
            if (trace.condition("if (DAT_1803fead8 != (code *)0x0)")) {
                trace.statement("(*DAT_1803fead8)(param_2);");
            }
            trace.statement("return param_1;");
        }
    return kFunction_0x180053780;
}

// 0x180053b40 FUN_180053b40
// source: re/dump/decompile/0x180053b40_FUN_180053b40.c
// size: 72 bytes; thunk: false
// body sha256: e4a0a48044baa35a0a65f659190a0992f2c32c0d3eccee196496d21e0f8bcba2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053b40{
    "0x180053b40",
    "FUN_180053b40",
    R"F180053b40S(undefined FUN_180053b40())F180053b40S",
    R"B180053b40(// 0x180053b40  FUN_180053b40
// size=72 thunk=false
// signature: undefined FUN_180053b40()
// status: ok


void FUN_180053b40(longlong *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_18001d620(*param_1);
    *puVar1 = (int)param_1[1];
    puVar1[1] = *(undefined4 *)((longlong)param_1 + 0xc);
    puVar1[2] = (int)param_1[2];
    FUN_18001d810(*param_1);
    *param_1 = 0;
    return;
  }
  return;
}


)B180053b40",
    "e4a0a48044baa35a0a65f659190a0992f2c32c0d3eccee196496d21e0f8bcba2",
    R"F180053b40C(FUN_18001d620
FUN_18001d810)F180053b40C",
    R"F180053b40D()F180053b40D",
    R"F180053b40T()F180053b40T",
    R"F180053b40F(12: if (*param_1 != 0) {
19: return;
21: return;)F180053b40F",
    R"F180053b40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F180053b40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053b40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053b40", "FUN_180053b40");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18001d620", reinterpret_cast<const void*>(&image::FUN_18001d620));
    trace.call_target("FUN_18001d810", reinterpret_cast<const void*>(&image::FUN_18001d810));
    // body sha256: e4a0a48044baa35a0a65f659190a0992f2c32c0d3eccee196496d21e0f8bcba2
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_180053b40(longlong *param_1)");
        {
            trace.statement("undefined4 *puVar1;");
            if (trace.condition("if (*param_1 != 0)")) {
                trace.statement("puVar1 = (undefined4 *)FUN_18001d620(*param_1);");
                trace.statement("*puVar1 = (int)param_1[1];");
                trace.statement("puVar1[1] = *(undefined4 *)((longlong)param_1 + 0xc);");
                trace.statement("puVar1[2] = (int)param_1[2];");
                trace.statement("FUN_18001d810(*param_1);");
                trace.statement("*param_1 = 0;");
                trace.statement("return;");
            }
            trace.statement("return;");
        }
    return kFunction_0x180053b40;
}

// 0x180053ba0 FUN_180053ba0
// source: re/dump/decompile/0x180053ba0_FUN_180053ba0.c
// size: 534 bytes; thunk: false
// body sha256: 86a0d87bda61732cdbeabf5d49ac3f5f7dc813866ebf66f784f9884d647fa486
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053ba0{
    "0x180053ba0",
    "FUN_180053ba0",
    R"F180053ba0S(undefined FUN_180053ba0())F180053ba0S",
    R"B180053ba0(// 0x180053ba0  FUN_180053ba0
// size=534 thunk=false
// signature: undefined FUN_180053ba0()
// status: ok


undefined8 FUN_180053ba0(void *param_1,char *param_2)

{
  longlong *lp;
  ulonglong uVar1;
  longlong lVar2;
  char *_Str1;
  undefined8 *puVar3;
  BOOL BVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  longlong *plVar8;
  void *lp_00;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_2 != (char *)0x0) {
    lp_00 = *(void **)((longlong)param_1 + 0x38);
    if (((lp_00 == (void *)0x0) || (lp_00 == param_1)) ||
       (BVar4 = IsBadReadPtr(lp_00,0x60), BVar4 != 0)) {
      lp_00 = param_1;
    }
    lp = (longlong *)((longlong)lp_00 + 0x40);
    BVar4 = IsBadReadPtr(lp,8);
    if (((BVar4 == 0) && (_Str1 = (char *)*lp, _Str1 != (char *)0x0)) &&
       (BVar4 = IsBadReadPtr(_Str1,1), BVar4 == 0)) {
      iVar5 = strcmp(_Str1,param_2);
      if (iVar5 != 0) {
        if ((DAT_1805b8820 & 1) == 0) {
          DAT_1805b8820 = DAT_1805b8820 | 1;
          DAT_180427808 = (undefined8 *)0x0;
          DAT_180427810 = 0;
          DAT_180427818 = 0;
          DAT_180427820 = 0;
          DAT_180427828 = 0;
          DAT_180427808 = (undefined8 *)FUN_1802d8350(0x10);
          DAT_180427808[1] = 0;
          *DAT_180427808 = &DAT_180427808;
          atexit(FUN_1803091d0);
        }
        if (DAT_180427818 <= DAT_180427828 + 1U) {
          FUN_18022ddb0(&DAT_180427808);
        }
        DAT_180427820 = DAT_180427818 - 1 & DAT_180427820;
        uVar1 = DAT_180427820 + DAT_180427828;
        lVar2 = (DAT_180427818 - 1 & uVar1) * 8;
        if (*(longlong *)(lVar2 + DAT_180427810) == 0) {
          uVar6 = FUN_1802d8350(0x20);
          *(undefined8 *)(lVar2 + DAT_180427810) = uVar6;
        }
        puVar3 = *(undefined8 **)(DAT_180427810 + (DAT_180427818 - 1 & uVar1) * 8);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        sVar7 = strlen(param_2);
        FUN_18001d080(puVar3,param_2,sVar7);
        DAT_180427828 = DAT_180427828 + 1;
        plVar8 = *(longlong **)
                  (DAT_180427810 + ((DAT_180427820 - 1) + DAT_180427828 & DAT_180427818 - 1) * 8);
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        *lp = (longlong)plVar8;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}


)B180053ba0",
    "86a0d87bda61732cdbeabf5d49ac3f5f7dc813866ebf66f784f9884d647fa486",
    R"F180053ba0C(FUN_18001d080
FUN_18022ddb0
FUN_1802d8350
FUN_1803091d0)F180053ba0C",
    R"F180053ba0D(DAT_180427808
DAT_180427810
DAT_180427818
DAT_180427820
DAT_180427828
DAT_1805b8820)F180053ba0D",
    R"F180053ba0T()F180053ba0T",
    R"F180053ba0F(22: if (param_1 == (void *)0x0) {
23: return 0;
25: if (param_2 != (char *)0x0) {
27: if (((lp_00 == (void *)0x0) || (lp_00 == param_1)) ||
33: if (((BVar4 == 0) && (_Str1 = (char *)*lp, _Str1 != (char *)0x0)) &&
36: if (iVar5 != 0) {
37: if ((DAT_1805b8820 & 1) == 0) {
49: if (DAT_180427818 <= DAT_180427828 + 1U) {
55: if (*(longlong *)(lVar2 + DAT_180427810) == 0) {
69: if (0xf < (ulonglong)plVar8[3]) {
74: return 1;
76: return 0;
78: return 0;)F180053ba0F",
    R"F180053ba0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427808.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427810.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427818.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427820.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180427828.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805b8820.)F180053ba0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053ba0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053ba0", "FUN_180053ba0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427808.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427810.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427818.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427820.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180427828.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805b8820.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_18022ddb0", reinterpret_cast<const void*>(&image::FUN_18022ddb0));
    trace.call_target("FUN_1802d8350", reinterpret_cast<const void*>(&image::FUN_1802d8350));
    trace.call_target("FUN_1803091d0", reinterpret_cast<const void*>(&image::FUN_1803091d0));
    trace.data_ref("DAT_180427808", static_cast<const void*>(&image::DAT_180427808));
    trace.data_ref("DAT_180427810", static_cast<const void*>(&image::DAT_180427810));
    trace.data_ref("DAT_180427818", static_cast<const void*>(&image::DAT_180427818));
    trace.data_ref("DAT_180427820", static_cast<const void*>(&image::DAT_180427820));
    trace.data_ref("DAT_180427828", static_cast<const void*>(&image::DAT_180427828));
    trace.data_ref("DAT_1805b8820", static_cast<const void*>(&image::DAT_1805b8820));
    // body sha256: 86a0d87bda61732cdbeabf5d49ac3f5f7dc813866ebf66f784f9884d647fa486
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053ba0(void *param_1,char *param_2)");
        {
            trace.statement("longlong *lp;");
            trace.statement("ulonglong uVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("char *_Str1;");
            trace.statement("undefined8 *puVar3;");
            trace.statement("BOOL BVar4;");
            trace.statement("int iVar5;");
            trace.statement("undefined8 uVar6;");
            trace.statement("size_t sVar7;");
            trace.statement("longlong *plVar8;");
            trace.statement("void *lp_00;");
            if (trace.condition("if (param_1 == (void *)0x0)")) {
                trace.statement("return 0;");
            }
            if (trace.condition("if (param_2 != (char *)0x0)")) {
                trace.statement("lp_00 = *(void **)((longlong)param_1 + 0x38);");
                if (trace.condition("if (((lp_00 == (void *)0x0) || (lp_00 == param_1)) || (BVar4 = IsBadReadPtr(lp_00,0x60), BVar4 != 0))")) {
                    trace.statement("lp_00 = param_1;");
                }
                trace.statement("lp = (longlong *)((longlong)lp_00 + 0x40);");
                trace.statement("BVar4 = IsBadReadPtr(lp,8);");
                if (trace.condition("if (((BVar4 == 0) && (_Str1 = (char *)*lp, _Str1 != (char *)0x0)) && (BVar4 = IsBadReadPtr(_Str1,1), BVar4 == 0))")) {
                    trace.statement("iVar5 = strcmp(_Str1,param_2);");
                    if (trace.condition("if (iVar5 != 0)")) {
                        if (trace.condition("if ((DAT_1805b8820 & 1) == 0)")) {
                            trace.statement("DAT_1805b8820 = DAT_1805b8820 | 1;");
                            trace.statement("DAT_180427808 = (undefined8 *)0x0;");
                            trace.statement("DAT_180427810 = 0;");
                            trace.statement("DAT_180427818 = 0;");
                            trace.statement("DAT_180427820 = 0;");
                            trace.statement("DAT_180427828 = 0;");
                            trace.statement("DAT_180427808 = (undefined8 *)FUN_1802d8350(0x10);");
                            trace.statement("DAT_180427808[1] = 0;");
                            trace.statement("*DAT_180427808 = &DAT_180427808;");
                            trace.statement("atexit(FUN_1803091d0);");
                        }
                        if (trace.condition("if (DAT_180427818 <= DAT_180427828 + 1U)")) {
                            trace.statement("FUN_18022ddb0(&DAT_180427808);");
                        }
                        trace.statement("DAT_180427820 = DAT_180427818 - 1 & DAT_180427820;");
                        trace.statement("uVar1 = DAT_180427820 + DAT_180427828;");
                        trace.statement("lVar2 = (DAT_180427818 - 1 & uVar1) * 8;");
                        if (trace.condition("if (*(longlong *)(lVar2 + DAT_180427810) == 0)")) {
                            trace.statement("uVar6 = FUN_1802d8350(0x20);");
                            trace.statement("*(undefined8 *)(lVar2 + DAT_180427810) = uVar6;");
                        }
                        trace.statement("puVar3 = *(undefined8 **)(DAT_180427810 + (DAT_180427818 - 1 & uVar1) * 8);");
                        trace.statement("*puVar3 = 0;");
                        trace.statement("puVar3[1] = 0;");
                        trace.statement("puVar3[2] = 0;");
                        trace.statement("puVar3[3] = 0;");
                        trace.statement("sVar7 = strlen(param_2);");
                        trace.statement("FUN_18001d080(puVar3,param_2,sVar7);");
                        trace.statement("DAT_180427828 = DAT_180427828 + 1;");
                        trace.statement("plVar8 = *(longlong **)");
                        trace.statement("(DAT_180427810 + ((DAT_180427820 - 1) + DAT_180427828 & DAT_180427818 - 1) * 8);");
                        if (trace.condition("if (0xf < (ulonglong)plVar8[3])")) {
                            trace.statement("plVar8 = (longlong *)*plVar8;");
                        }
                        trace.statement("*lp = (longlong)plVar8;");
                    }
                    trace.statement("return 1;");
                }
                trace.statement("return 0;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180053ba0;
}

// 0x180053dc0 FUN_180053dc0
// source: re/dump/decompile/0x180053dc0_FUN_180053dc0.c
// size: 252 bytes; thunk: false
// body sha256: d07bd25beecc7653fbbb8f6d43d51244da28fdb3ede14e50a757a8cca5489888
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053dc0{
    "0x180053dc0",
    "FUN_180053dc0",
    R"F180053dc0S(undefined FUN_180053dc0())F180053dc0S",
    R"B180053dc0(// 0x180053dc0  FUN_180053dc0
// size=252 thunk=false
// signature: undefined FUN_180053dc0()
// status: ok


ulonglong FUN_180053dc0(longlong *param_1,ulonglong param_2,float *param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  
  cVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2,3);
  dVar7 = 0.0;
  if (cVar3 == '\0') {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,param_2 & 0xffffffff);
  }
  lVar1 = *param_1;
  iVar2 = (int)param_2;
  *param_3 = (float)dVar6;
  cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 1,3);
  if (cVar3 == '\0') {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 1);
  }
  lVar1 = *param_1;
  param_3[1] = (float)dVar6;
  cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 2,3);
  if (cVar3 != '\0') {
    dVar7 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 2);
  }
  uVar5 = (ulonglong)((uint)*param_3 & 0x7f800000);
  param_3[2] = (float)dVar7;
  if ((((uint)*param_3 & 0x7f800000) != 0x7f800000) &&
     (uVar5 = (ulonglong)((uint)param_3[1] & 0x7f800000),
     ((uint)param_3[1] & 0x7f800000) != 0x7f800000)) {
    uVar4 = (uint)(float)dVar7 & 0x7f800000;
    uVar5 = (ulonglong)uVar4;
    if (uVar4 != 0x7f800000) {
      uVar5 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    }
  }
  return uVar5;
}


)B180053dc0",
    "d07bd25beecc7653fbbb8f6d43d51244da28fdb3ede14e50a757a8cca5489888",
    R"F180053dc0C()F180053dc0C",
    R"F180053dc0D()F180053dc0D",
    R"F180053dc0T()F180053dc0T",
    R"F180053dc0F(20: if (cVar3 == '\0') {
23: else {
30: if (cVar3 == '\0') {
33: else {
39: if (cVar3 != '\0') {
44: if ((((uint)*param_3 & 0x7f800000) != 0x7f800000) &&
49: if (uVar4 != 0x7f800000) {
53: return uVar5;)F180053dc0F",
    R"F180053dc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 18: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2,3);.
TODO: resolve the indirect call in body 24: dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,param_2 & 0xffffffff);.
TODO: resolve the indirect call in body 29: cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 1,3);.
TODO: resolve the indirect call in body 34: dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 1);.
TODO: resolve the indirect call in body 38: cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 2,3);.
TODO: resolve the indirect call in body 40: dVar7 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 2);.)F180053dc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053dc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053dc0", "FUN_180053dc0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 18: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2,3);.
    // TODO: resolve the indirect call in body 24: dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,param_2 & 0xffffffff);.
    // TODO: resolve the indirect call in body 29: cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 1,3);.
    // TODO: resolve the indirect call in body 34: dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 1);.
    // TODO: resolve the indirect call in body 38: cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 2,3);.
    // TODO: resolve the indirect call in body 40: dVar7 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: d07bd25beecc7653fbbb8f6d43d51244da28fdb3ede14e50a757a8cca5489888
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("ulonglong FUN_180053dc0(longlong *param_1,ulonglong param_2,float *param_3)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("char cVar3;");
            trace.statement("uint uVar4;");
            trace.statement("ulonglong uVar5;");
            trace.statement("double dVar6;");
            trace.statement("double dVar7;");
            trace.statement("cVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2,3);");
            trace.statement("dVar7 = 0.0;");
            if (trace.condition("if (cVar3 == '\\0')")) {
                trace.statement("dVar6 = 0.0;");
            } else {
            trace.statement("dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,param_2 & 0xffffffff);");
            }
            trace.statement("lVar1 = *param_1;");
            trace.statement("iVar2 = (int)param_2;");
            trace.statement("*param_3 = (float)dVar6;");
            trace.statement("cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 1,3);");
            if (trace.condition("if (cVar3 == '\\0')")) {
                trace.statement("dVar6 = 0.0;");
            } else {
            trace.statement("dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 1);");
            }
            trace.statement("lVar1 = *param_1;");
            trace.statement("param_3[1] = (float)dVar6;");
            trace.statement("cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 2,3);");
            if (trace.condition("if (cVar3 != '\\0')")) {
                trace.statement("dVar7 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 2);");
            }
            trace.statement("uVar5 = (ulonglong)((uint)*param_3 & 0x7f800000);");
            trace.statement("param_3[2] = (float)dVar7;");
            if (trace.condition("if ((((uint)*param_3 & 0x7f800000) != 0x7f800000) && (uVar5 = (ulonglong)((uint)param_3[1] & 0x7f800000), ((uint)param_3[1] & 0x7f800000) != 0x7f800000))")) {
                trace.statement("uVar4 = (uint)(float)dVar7 & 0x7f800000;");
                trace.statement("uVar5 = (ulonglong)uVar4;");
                if (trace.condition("if (uVar4 != 0x7f800000)")) {
                    trace.statement("uVar5 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);");
                }
            }
            trace.statement("return uVar5;");
        }
    return kFunction_0x180053dc0;
}

// 0x180053ec0 FUN_180053ec0
// source: re/dump/decompile/0x180053ec0_FUN_180053ec0.c
// size: 121 bytes; thunk: false
// body sha256: 139e2a3b061f002744a190347f17c9f873e6033d87e7b37be701a3e4f664ceee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053ec0{
    "0x180053ec0",
    "FUN_180053ec0",
    R"F180053ec0S(undefined FUN_180053ec0())F180053ec0S",
    R"B180053ec0(// 0x180053ec0  FUN_180053ec0
// size=121 thunk=false
// signature: undefined FUN_180053ec0()
// status: ok


undefined8 FUN_180053ec0(longlong param_1)

{
  undefined8 *lp;
  FARPROC lpfn;
  BOOL BVar1;
  
  if (((DAT_1803fa668 != (longlong *)0x0) && (param_1 != 0)) && (*DAT_1803fa668 != 0)) {
    lp = (undefined8 *)(*DAT_1803fa668 + 0x458);
    BVar1 = IsBadReadPtr(lp,8);
    if (BVar1 == 0) {
      lpfn = (FARPROC)*lp;
      if ((lpfn != (FARPROC)0x0) && (BVar1 = IsBadCodePtr(lpfn), BVar1 == 0)) {
        (*lpfn)(DAT_1803fa668,param_1);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


)B180053ec0",
    "139e2a3b061f002744a190347f17c9f873e6033d87e7b37be701a3e4f664ceee",
    R"F180053ec0C()F180053ec0C",
    R"F180053ec0D(DAT_1803fa668)F180053ec0D",
    R"F180053ec0T()F180053ec0T",
    R"F180053ec0F(14: if (((DAT_1803fa668 != (longlong *)0x0) && (param_1 != 0)) && (*DAT_1803fa668 != 0)) {
17: if (BVar1 == 0) {
19: if ((lpfn != (FARPROC)0x0) && (BVar1 = IsBadCodePtr(lpfn), BVar1 == 0)) {
21: return 1;
23: return 0;
26: return 0;)F180053ec0F",
    R"F180053ec0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 20: (*lpfn)(DAT_1803fa668,param_1);.)F180053ec0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053ec0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053ec0", "FUN_180053ec0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 20: (*lpfn)(DAT_1803fa668,param_1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 139e2a3b061f002744a190347f17c9f873e6033d87e7b37be701a3e4f664ceee
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180053ec0(longlong param_1)");
        {
            trace.statement("undefined8 *lp;");
            trace.statement("FARPROC lpfn;");
            trace.statement("BOOL BVar1;");
            if (trace.condition("if (((DAT_1803fa668 != (longlong *)0x0) && (param_1 != 0)) && (*DAT_1803fa668 != 0))")) {
                trace.statement("lp = (undefined8 *)(*DAT_1803fa668 + 0x458);");
                trace.statement("BVar1 = IsBadReadPtr(lp,8);");
                if (trace.condition("if (BVar1 == 0)")) {
                    trace.statement("lpfn = (FARPROC)*lp;");
                    if (trace.condition("if ((lpfn != (FARPROC)0x0) && (BVar1 = IsBadCodePtr(lpfn), BVar1 == 0))")) {
                        trace.statement("(*lpfn)(DAT_1803fa668,param_1);");
                        trace.statement("return 1;");
                    }
                    trace.statement("return 0;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180053ec0;
}

// 0x180053f40 FUN_180053f40
// source: re/dump/decompile/0x180053f40_FUN_180053f40.c
// size: 876 bytes; thunk: false
// body sha256: 8712e29541b759e714de80edc5a0957266b8c883b706dac8cbc94500eb2a7232
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180053f40{
    "0x180053f40",
    "FUN_180053f40",
    R"F180053f40S(undefined FUN_180053f40())F180053f40S",
    R"B180053f40(// 0x180053f40  FUN_180053f40
// size=876 thunk=false
// signature: undefined FUN_180053f40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_180053f40(undefined4 *param_1,uint param_2,float param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  bVar3 = FUN_180015e50(param_4);
  FUN_180020770((double)bVar3);
  if (DAT_180425780 == 0) {
    DAT_180425780 = FUN_180016fb0("ai_shot_bias_min");
  }
  if (DAT_1803f91f0 == 0) {
    DAT_1803f91f0 = FUN_180016fb0("ai_shot_bias_max");
  }
  fVar2 = DAT_180381384;
  fVar7 = DAT_180381384;
  if (DAT_180425780 != 0) {
    fVar7 = (float)FUN_180019700();
  }
  fVar1 = DAT_180380bb0;
  fVar8 = DAT_180380bb0;
  if (DAT_1803f91f0 != 0) {
    fVar8 = (float)FUN_180019700(DAT_1803f91f0);
  }
  fVar11 = 0.0;
  if (0.0 <= param_5) {
    fVar11 = param_5;
  }
  fVar10 = fVar1;
  if (fVar11 <= fVar1) {
    fVar10 = fVar11;
  }
  fVar7 = fVar10 * (fVar8 - fVar7) + fVar7;
  fVar8 = (float)((uint)fVar7 & _DAT_1803817c0) * DAT_180380ac0;
  iVar6 = 0;
  pFVar5 = DAT_1805c51e8;
  do {
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar11 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar11 = extraout_XMM0_Da;
    }
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar10 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar10 = extraout_XMM0_Da_00;
    }
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar12 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar12 = extraout_XMM0_Da_01;
    }
    if ((DAT_18042f184 & 1) == 0) {
      DAT_18042f184 = DAT_18042f184 | 1;
      pHVar4 = GetModuleHandleA("vstdlib.dll");
      pFVar5 = GetProcAddress(pHVar4,"RandomFloat");
      DAT_1805c51e8 = pFVar5;
    }
    fVar9 = fVar2;
    if (pFVar5 != (FARPROC)0x0) {
      (*pFVar5)((ulonglong)(uint)fVar2,fVar1);
      pFVar5 = DAT_1805c51e8;
      fVar9 = extraout_XMM0_Da_02;
    }
    fVar11 = (fVar1 - fVar8) * fVar11 + fVar10 * fVar8;
    fVar10 = (fVar1 - fVar8) * fVar12 + fVar9 * fVar8;
    if (fVar7 < 0.0) {
      fVar12 = fVar2;
      if (0.0 <= fVar11) {
        fVar12 = fVar1;
      }
      fVar11 = fVar12 - fVar11;
      fVar12 = fVar2;
      if (0.0 <= fVar10) {
        fVar12 = fVar1;
      }
      fVar10 = fVar12 - fVar10;
    }
  } while ((fVar1 < fVar10 * fVar10 + fVar11 * fVar11) && (iVar6 = iVar6 + 1, iVar6 < 0x40));
  *param_1 = 0x3f800000;
  param_1[1] = (float)(param_2 ^ DAT_1803817f0) * fVar11;
  param_1[2] = fVar10 * param_3;
  return param_1;
}


)B180053f40",
    "8712e29541b759e714de80edc5a0957266b8c883b706dac8cbc94500eb2a7232",
    R"F180053f40C(FUN_180015e50
FUN_180016fb0
FUN_180019700
FUN_180020770)F180053f40C",
    R"F180053f40D(DAT_180380ac0
DAT_180380bb0
DAT_180381384
DAT_1803817f0
DAT_1803f91f0
DAT_180425780
DAT_18042f184
DAT_1805c51e8)F180053f40D",
    R"F180053f40T("RandomFloat"
"vstdlib.dll"
"ai_shot_bias_max"
"ai_shot_bias_min")F180053f40T",
    R"F180053f40F(32: if (DAT_180425780 == 0) {
35: if (DAT_1803f91f0 == 0) {
40: if (DAT_180425780 != 0) {
45: if (DAT_1803f91f0 != 0) {
49: if (0.0 <= param_5) {
53: if (fVar11 <= fVar1) {
60: do {
61: if ((DAT_18042f184 & 1) == 0) {
68: if (pFVar5 != (FARPROC)0x0) {
73: if ((DAT_18042f184 & 1) == 0) {
80: if (pFVar5 != (FARPROC)0x0) {
85: if ((DAT_18042f184 & 1) == 0) {
92: if (pFVar5 != (FARPROC)0x0) {
97: if ((DAT_18042f184 & 1) == 0) {
104: if (pFVar5 != (FARPROC)0x0) {
111: if (fVar7 < 0.0) {
113: if (0.0 <= fVar11) {
118: if (0.0 <= fVar10) {
127: return param_1;)F180053f40F",
    R"F180053f40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380ac0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380bb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180381384.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803817f0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803f91f0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425780.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18042f184.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1805c51e8.
TODO: resolve the indirect call in body 69: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.
TODO: resolve the indirect call in body 81: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.
TODO: resolve the indirect call in body 93: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.
TODO: resolve the indirect call in body 105: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.)F180053f40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180053f40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180053f40", "FUN_180053f40");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380ac0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380bb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180381384.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803817f0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803f91f0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425780.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18042f184.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1805c51e8.
    // TODO: resolve the indirect call in body 69: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.
    // TODO: resolve the indirect call in body 81: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.
    // TODO: resolve the indirect call in body 93: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.
    // TODO: resolve the indirect call in body 105: (*pFVar5)((ulonglong)(uint)fVar2,fVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180015e50", reinterpret_cast<const void*>(&image::FUN_180015e50));
    trace.call_target("FUN_180016fb0", reinterpret_cast<const void*>(&image::FUN_180016fb0));
    trace.call_target("FUN_180019700", reinterpret_cast<const void*>(&image::FUN_180019700));
    trace.call_target("FUN_180020770", reinterpret_cast<const void*>(&image::FUN_180020770));
    trace.data_ref("DAT_180380ac0", static_cast<const void*>(&image::DAT_180380ac0));
    trace.data_ref("DAT_180380bb0", static_cast<const void*>(&image::DAT_180380bb0));
    trace.data_ref("DAT_180381384", static_cast<const void*>(&image::DAT_180381384));
    trace.data_ref("DAT_1803817f0", static_cast<const void*>(&image::DAT_1803817f0));
    trace.data_ref("DAT_1803f91f0", static_cast<const void*>(&image::DAT_1803f91f0));
    trace.data_ref("DAT_180425780", static_cast<const void*>(&image::DAT_180425780));
    trace.data_ref("DAT_18042f184", static_cast<const void*>(&image::DAT_18042f184));
    trace.data_ref("DAT_1805c51e8", static_cast<const void*>(&image::DAT_1805c51e8));
    trace.string_literal("RandomFloat");
    trace.string_literal("vstdlib.dll");
    trace.string_literal("ai_shot_bias_max");
    trace.string_literal("ai_shot_bias_min");
    // body sha256: 8712e29541b759e714de80edc5a0957266b8c883b706dac8cbc94500eb2a7232
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined4 *");
        trace.statement("FUN_180053f40(undefined4 *param_1,uint param_2,float param_3,undefined4 param_4,float param_5)");
        {
            trace.statement("float fVar1;");
            trace.statement("float fVar2;");
            trace.statement("byte bVar3;");
            trace.statement("HMODULE pHVar4;");
            trace.statement("FARPROC pFVar5;");
            trace.statement("int iVar6;");
            trace.statement("float fVar7;");
            trace.statement("float fVar8;");
            trace.statement("float extraout_XMM0_Da;");
            trace.statement("float extraout_XMM0_Da_00;");
            trace.statement("float extraout_XMM0_Da_01;");
            trace.statement("float extraout_XMM0_Da_02;");
            trace.statement("float fVar9;");
            trace.statement("float fVar10;");
            trace.statement("float fVar11;");
            trace.statement("float fVar12;");
            trace.statement("bVar3 = FUN_180015e50(param_4);");
            trace.statement("FUN_180020770((double)bVar3);");
            if (trace.condition("if (DAT_180425780 == 0)")) {
                trace.statement("DAT_180425780 = FUN_180016fb0(\"ai_shot_bias_min\");");
            }
            if (trace.condition("if (DAT_1803f91f0 == 0)")) {
                trace.statement("DAT_1803f91f0 = FUN_180016fb0(\"ai_shot_bias_max\");");
            }
            trace.statement("fVar2 = DAT_180381384;");
            trace.statement("fVar7 = DAT_180381384;");
            if (trace.condition("if (DAT_180425780 != 0)")) {
                trace.statement("fVar7 = (float)FUN_180019700();");
            }
            trace.statement("fVar1 = DAT_180380bb0;");
            trace.statement("fVar8 = DAT_180380bb0;");
            if (trace.condition("if (DAT_1803f91f0 != 0)")) {
                trace.statement("fVar8 = (float)FUN_180019700(DAT_1803f91f0);");
            }
            trace.statement("fVar11 = 0.0;");
            if (trace.condition("if (0.0 <= param_5)")) {
                trace.statement("fVar11 = param_5;");
            }
            trace.statement("fVar10 = fVar1;");
            if (trace.condition("if (fVar11 <= fVar1)")) {
                trace.statement("fVar10 = fVar11;");
            }
            trace.statement("fVar7 = fVar10 * (fVar8 - fVar7) + fVar7;");
            trace.statement("fVar8 = (float)((uint)fVar7 & _DAT_1803817c0) * DAT_180380ac0;");
            trace.statement("iVar6 = 0;");
            trace.statement("pFVar5 = DAT_1805c51e8;");
            do {
                if (trace.condition("if ((DAT_18042f184 & 1) == 0)")) {
                    trace.statement("DAT_18042f184 = DAT_18042f184 | 1;");
                    trace.statement("pHVar4 = GetModuleHandleA(\"vstdlib.dll\");");
                    trace.statement("pFVar5 = GetProcAddress(pHVar4,\"RandomFloat\");");
                    trace.statement("DAT_1805c51e8 = pFVar5;");
                }
                trace.statement("fVar11 = fVar2;");
                if (trace.condition("if (pFVar5 != (FARPROC)0x0)")) {
                    trace.statement("(*pFVar5)((ulonglong)(uint)fVar2,fVar1);");
                    trace.statement("pFVar5 = DAT_1805c51e8;");
                    trace.statement("fVar11 = extraout_XMM0_Da;");
                }
                if (trace.condition("if ((DAT_18042f184 & 1) == 0)")) {
                    trace.statement("DAT_18042f184 = DAT_18042f184 | 1;");
                    trace.statement("pHVar4 = GetModuleHandleA(\"vstdlib.dll\");");
                    trace.statement("pFVar5 = GetProcAddress(pHVar4,\"RandomFloat\");");
                    trace.statement("DAT_1805c51e8 = pFVar5;");
                }
                trace.statement("fVar10 = fVar2;");
                if (trace.condition("if (pFVar5 != (FARPROC)0x0)")) {
                    trace.statement("(*pFVar5)((ulonglong)(uint)fVar2,fVar1);");
                    trace.statement("pFVar5 = DAT_1805c51e8;");
                    trace.statement("fVar10 = extraout_XMM0_Da_00;");
                }
                if (trace.condition("if ((DAT_18042f184 & 1) == 0)")) {
                    trace.statement("DAT_18042f184 = DAT_18042f184 | 1;");
                    trace.statement("pHVar4 = GetModuleHandleA(\"vstdlib.dll\");");
                    trace.statement("pFVar5 = GetProcAddress(pHVar4,\"RandomFloat\");");
                    trace.statement("DAT_1805c51e8 = pFVar5;");
                }
                trace.statement("fVar12 = fVar2;");
                if (trace.condition("if (pFVar5 != (FARPROC)0x0)")) {
                    trace.statement("(*pFVar5)((ulonglong)(uint)fVar2,fVar1);");
                    trace.statement("pFVar5 = DAT_1805c51e8;");
                    trace.statement("fVar12 = extraout_XMM0_Da_01;");
                }
                if (trace.condition("if ((DAT_18042f184 & 1) == 0)")) {
                    trace.statement("DAT_18042f184 = DAT_18042f184 | 1;");
                    trace.statement("pHVar4 = GetModuleHandleA(\"vstdlib.dll\");");
                    trace.statement("pFVar5 = GetProcAddress(pHVar4,\"RandomFloat\");");
                    trace.statement("DAT_1805c51e8 = pFVar5;");
                }
                trace.statement("fVar9 = fVar2;");
                if (trace.condition("if (pFVar5 != (FARPROC)0x0)")) {
                    trace.statement("(*pFVar5)((ulonglong)(uint)fVar2,fVar1);");
                    trace.statement("pFVar5 = DAT_1805c51e8;");
                    trace.statement("fVar9 = extraout_XMM0_Da_02;");
                }
                trace.statement("fVar11 = (fVar1 - fVar8) * fVar11 + fVar10 * fVar8;");
                trace.statement("fVar10 = (fVar1 - fVar8) * fVar12 + fVar9 * fVar8;");
                if (trace.condition("if (fVar7 < 0.0)")) {
                    trace.statement("fVar12 = fVar2;");
                    if (trace.condition("if (0.0 <= fVar11)")) {
                        trace.statement("fVar12 = fVar1;");
                    }
                    trace.statement("fVar11 = fVar12 - fVar11;");
                    trace.statement("fVar12 = fVar2;");
                    if (trace.condition("if (0.0 <= fVar10)")) {
                        trace.statement("fVar12 = fVar1;");
                    }
                    trace.statement("fVar10 = fVar12 - fVar10;");
                }
            } while (trace.loop_condition("while ((fVar1 < fVar10 * fVar10 + fVar11 * fVar11) && (iVar6 = iVar6 + 1, iVar6 < 0x40));"));
            trace.statement("*param_1 = 0x3f800000;");
            trace.statement("param_1[1] = (float)(param_2 ^ DAT_1803817f0) * fVar11;");
            trace.statement("param_1[2] = fVar10 * param_3;");
            trace.statement("return param_1;");
        }
    return kFunction_0x180053f40;
}

// 0x1800542b0 FUN_1800542b0
// source: re/dump/decompile/0x1800542b0_FUN_1800542b0.c
// size: 145 bytes; thunk: false
// body sha256: a190945b7a45783a5b7c82a8e26ec94a15add3c2daea46c8910893acca1f3279
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800542b0{
    "0x1800542b0",
    "FUN_1800542b0",
    R"F1800542b0S(undefined FUN_1800542b0())F1800542b0S",
    R"B1800542b0(// 0x1800542b0  FUN_1800542b0
// size=145 thunk=false
// signature: undefined FUN_1800542b0()
// status: ok


undefined1
FUN_1800542b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  HANDLE hMem;
  char *_Str;
  size_t sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  uVar4 = 0;
  hMem = GetClipboardData(1);
  if (hMem != (HANDLE)0x0) {
    _Str = GlobalLock(hMem);
    if (_Str != (char *)0x0) {
      sVar2 = strlen(_Str);
      FUN_180212700(param_1,_Str,sVar2,param_4,uVar4);
      uVar3 = 1;
      GlobalUnlock(hMem);
    }
  }
  CloseClipboard();
  return uVar3;
}


)B1800542b0",
    "a190945b7a45783a5b7c82a8e26ec94a15add3c2daea46c8910893acca1f3279",
    R"F1800542b0C(FUN_180212700)F1800542b0C",
    R"F1800542b0D()F1800542b0D",
    R"F1800542b0T()F1800542b0T",
    R"F1800542b0F(19: if (BVar1 == 0) {
20: return 0;
25: if (hMem != (HANDLE)0x0) {
27: if (_Str != (char *)0x0) {
35: return uVar3;)F1800542b0F",
    R"F1800542b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800542b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800542b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800542b0", "FUN_1800542b0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180212700", reinterpret_cast<const void*>(&image::FUN_180212700));
    // body sha256: a190945b7a45783a5b7c82a8e26ec94a15add3c2daea46c8910893acca1f3279
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined1");
        trace.statement("FUN_1800542b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)");
        {
            trace.statement("BOOL BVar1;");
            trace.statement("HANDLE hMem;");
            trace.statement("char *_Str;");
            trace.statement("size_t sVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("undefined1 uVar4;");
            trace.statement("BVar1 = OpenClipboard((HWND)0x0);");
            if (trace.condition("if (BVar1 == 0)")) {
                trace.statement("return 0;");
            }
            trace.statement("uVar3 = 0;");
            trace.statement("uVar4 = 0;");
            trace.statement("hMem = GetClipboardData(1);");
            if (trace.condition("if (hMem != (HANDLE)0x0)")) {
                trace.statement("_Str = GlobalLock(hMem);");
                if (trace.condition("if (_Str != (char *)0x0)")) {
                    trace.statement("sVar2 = strlen(_Str);");
                    trace.statement("FUN_180212700(param_1,_Str,sVar2,param_4,uVar4);");
                    trace.statement("uVar3 = 1;");
                    trace.statement("GlobalUnlock(hMem);");
                }
            }
            trace.statement("CloseClipboard();");
            trace.statement("return uVar3;");
        }
    return kFunction_0x1800542b0;
}

// 0x180054350 FUN_180054350
// source: re/dump/decompile/0x180054350_FUN_180054350.c
// size: 2246 bytes; thunk: false
// body sha256: 9b3bda114b89aae99ea98252aca85597bbff855941c3b8501ae6ae74d1417803
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054350{
    "0x180054350",
    "FUN_180054350",
    R"F180054350S(undefined FUN_180054350())F180054350S",
    R"B180054350(// 0x180054350  FUN_180054350
// size=2246 thunk=false
// signature: undefined FUN_180054350()
// status: ok


void FUN_180054350(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUAENGINE] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054c20);
      (*pcVar2)(lVar1,0xfffffffe,"ServerCmd");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054cf0);
      (*pcVar2)(lVar1,0xfffffffe,"ClientCmd");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054d70);
      (*pcVar2)(lVar1,0xfffffffe,"ExecuteClientCmd");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054df0);
      (*pcVar2)(lVar1,0xfffffffe,"ClientCmdUnrestricted");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054e70);
      (*pcVar2)(lVar1,0xfffffffe,"SetRestrictServerCommands");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054ef0);
      (*pcVar2)(lVar1,0xfffffffe,"SetRestrictClientCommands");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180054f70);
      (*pcVar2)(lVar1,0xfffffffe,"GetViewAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055050);
      (*pcVar2)(lVar1,0xfffffffe,"SetViewAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800551e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetLocalPlayer");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055270);
      (*pcVar2)(lVar1,0xfffffffe,"IsInGame");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800552f0);
      (*pcVar2)(lVar1,0xfffffffe,"IsConnected");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055370);
      (*pcVar2)(lVar1,0xfffffffe,"GetGameDirectory");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055400);
      (*pcVar2)(lVar1,0xfffffffe,"GetTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055480);
      (*pcVar2)(lVar1,0xfffffffe,"GetLastTimeStamp");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055500);
      (*pcVar2)(lVar1,0xfffffffe,"IsBoxVisible");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800555d0);
      (*pcVar2)(lVar1,0xfffffffe,"IsBoxInViewCluster");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800556a0);
      (*pcVar2)(lVar1,0xfffffffe,"IsOccluded");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055770);
      (*pcVar2)(lVar1,0xfffffffe,"RawClientCmdUnrestricted");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055830);
      (*pcVar2)(lVar1,0xfffffffe,"ExcludeFromCapture");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055b20);
      (*pcVar2)(lVar1,0xfffffffe,"SetInterpolation");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055cf0);
      (*pcVar2)(lVar1,0xfffffffe,"GetInterpolation");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055d00);
      (*pcVar2)(lVar1,0xfffffffe,"GetClipboardText");
      (*pcVar2)(lVar1,0xfffffffe,"engine");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055dd0);
      (*pcVar2)(lVar1,0xfffffffe,"CurTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055e30);
      (*pcVar2)(lVar1,0xfffffffe,"SetCurTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055ea0);
      (*pcVar2)(lVar1,0xfffffffe,"FrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f00);
      (*pcVar2)(lVar1,0xfffffffe,"SetFrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f80);
      (*pcVar2)(lVar1,0xfffffffe,"RealTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180055fe0);
      (*pcVar2)(lVar1,0xfffffffe,"SetRealTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056060);
      (*pcVar2)(lVar1,0xfffffffe,"FrameCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800560d0);
      (*pcVar2)(lVar1,0xfffffffe,"SetFrameCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056150);
      (*pcVar2)(lVar1,0xfffffffe,"AbsFrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800561b0);
      (*pcVar2)(lVar1,0xfffffffe,"SetAbsFrameTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056230);
      (*pcVar2)(lVar1,0xfffffffe,"InterpolationAmount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056290);
      (*pcVar2)(lVar1,0xfffffffe,"SetInterpolationAmount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056310);
      (*pcVar2)(lVar1,0xfffffffe,"TickCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056380);
      (*pcVar2)(lVar1,0xfffffffe,"IntervalPerTick");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800563e0);
      (*pcVar2)(lVar1,0xfffffffe,"MaxClients");
      (*pcVar2)(lVar1,0xfffffffe,"globals");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056450);
      (*pcVar2)(lVar1,0xfffffffe,"Exists");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800564f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetFloat");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800565b0);
      (*pcVar2)(lVar1,0xfffffffe,"GetInt");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056670);
      (*pcVar2)(lVar1,0xfffffffe,"GetString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056770);
      (*pcVar2)(lVar1,0xfffffffe,"GetFlags");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800569d0);
      (*pcVar2)(lVar1,0xfffffffe,"SetFloat");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056b80);
      (*pcVar2)(lVar1,0xfffffffe,"SetInt");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056d30);
      (*pcVar2)(lVar1,0xfffffffe,"SetString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056d40);
      (*pcVar2)(lVar1,0xfffffffe,"SetDefault");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180056e80);
      (*pcVar2)(lVar1,0xfffffffe,"SetViaConsole");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057040);
      (*pcVar2)(lVar1,0xfffffffe,"Unlock");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057140);
      (*pcVar2)(lVar1,0xfffffffe,"IsLinkedChild");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057240);
      (*pcVar2)(lVar1,0xfffffffe,"SetFlags");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180344334);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057360);
      (*pcVar2)(lVar1,0xfffffffe,"MD5PseudoRandom");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180057410);
      (*pcVar2)(lVar1,0xfffffffe,"PredictSpread");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUAENGINE] engine, globals and cvar tables registered\n");
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}


)B180054350",
    "9b3bda114b89aae99ea98252aca85597bbff855941c3b8501ae6ae74d1417803",
    R"F180054350C(FUN_180014410
FUN_1800260c0
FUN_180054c20
FUN_180054cf0
FUN_180054d70
FUN_180054df0
FUN_180054e70
FUN_180054ef0
FUN_180054f70
FUN_180055050
FUN_1800551e0
FUN_180055270
FUN_1800552f0
FUN_180055370
FUN_180055400
FUN_180055480
FUN_180055500
FUN_1800555d0
FUN_1800556a0
FUN_180055770
FUN_180055830
FUN_180055d00
FUN_180055dd0
FUN_180055e30
FUN_180055ea0
FUN_180055f00
FUN_180055f80
FUN_180055fe0
FUN_180056060
FUN_1800560d0
FUN_180056150
FUN_1800561b0
FUN_180056230
FUN_180056290
FUN_180056310
FUN_180056380
FUN_1800563e0
FUN_180056450
FUN_1800564f0
FUN_1800565b0
FUN_180056670
FUN_180056770
FUN_180056d40
FUN_180056e80
FUN_180057040
FUN_180057140
FUN_180057240
FUN_180057360
FUN_180057410)F180054350C",
    R"F180054350D(LAB_180055b20
LAB_180055cf0
LAB_1800569d0
LAB_180056b80
LAB_180056d30
DAT_180344334
DAT_1803fcbe0
DAT_1803fcfa0
DAT_180425540)F180054350D",
    R"F180054350T("Exists"
"GetInt"
"SetInt"
"Unlock"
"engine"
"CurTime"
"GetTime"
"globals"
"GetFlags"
"GetFloat"
"IsInGame"
"RealTime"
"SetFlags"
"SetFloat"
"ClientCmd"
"FrameTime"
"GetString"
"ServerCmd"
"SetString"
"TickCount"
"FrameCount"
"IsOccluded"
"MaxClients"
"SetCurTime"
"SetDefault"
"lua_gettop"
"lua_settop"
"IsConnected"
"SetRealTime"
"AbsFrameTime"
"IsBoxVisible"
"SetFrameTime"
"GetViewAngles"
"IsLinkedChild"
"PredictSpread"
"SetFrameCount"
"SetViaConsole"
"SetViewAngles"
"GetLocalPlayer"
"lua_shared.dll"
"IntervalPerTick"
"MD5PseudoRandom"
"SetAbsFrameTime"
"ExecuteClientCmd"
"GetClipboardText"
"GetGameDirectory"
"GetInterpolation"
"GetLastTimeStamp"
"SetInterpolation"
"ExcludeFromCapture"
"IsBoxInViewCluster"
"InterpolationAmount"
"ClientCmdUnrestricted"
"SetInterpolationAmount"
"RawClientCmdUnrestricted"
"SetRestrictClientCommands"
"SetRestrictServerCommands"
"[LUAENGINE] api table unavailable -- persist not ready\\n"
"[LUAENGINE] engine, globals and cvar tables registered\\n")F180054350T",
    R"F180054350F(16: if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
17: if (DAT_1803fcfa0 == (FARPROC)0x0) {
24: if (cVar3 == '\0') {
27: else if (DAT_1803fcbe0 != (code *)0x0) {
138: if (DAT_180425540 == (FARPROC)0x0) {
144: return;
146: if (DAT_180425540 == (FARPROC)0x0) {
152: return;)F180054350F",
    R"F180054350U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_180055b20.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_180055cf0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800569d0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_180056b80.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_180056d30.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180344334.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
TODO: resolve the indirect call in body 27: else if (DAT_1803fcbe0 != (code *)0x0) {.
TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054c20);.
TODO: resolve the indirect call in body 30: (*pcVar2)(lVar1,0xfffffffe,"ServerCmd");.
TODO: resolve the indirect call in body 31: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054cf0);.
TODO: resolve the indirect call in body 32: (*pcVar2)(lVar1,0xfffffffe,"ClientCmd");.
TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054d70);.
TODO: resolve the indirect call in body 34: (*pcVar2)(lVar1,0xfffffffe,"ExecuteClientCmd");.
TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054df0);.
TODO: resolve the indirect call in body 36: (*pcVar2)(lVar1,0xfffffffe,"ClientCmdUnrestricted");.
TODO: resolve the indirect call in body 37: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054e70);.
TODO: resolve the indirect call in body 38: (*pcVar2)(lVar1,0xfffffffe,"SetRestrictServerCommands");.
TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054ef0);.
TODO: resolve the indirect call in body 40: (*pcVar2)(lVar1,0xfffffffe,"SetRestrictClientCommands");.
TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054f70);.
TODO: resolve the indirect call in body 42: (*pcVar2)(lVar1,0xfffffffe,"GetViewAngles");.
TODO: resolve the indirect call in body 43: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055050);.
TODO: resolve the indirect call in body 44: (*pcVar2)(lVar1,0xfffffffe,"SetViewAngles");.
TODO: resolve the indirect call in body 45: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800551e0);.
TODO: resolve the indirect call in body 46: (*pcVar2)(lVar1,0xfffffffe,"GetLocalPlayer");.
TODO: resolve the indirect call in body 47: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055270);.
TODO: resolve the indirect call in body 48: (*pcVar2)(lVar1,0xfffffffe,"IsInGame");.
TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800552f0);.
TODO: resolve the indirect call in body 50: (*pcVar2)(lVar1,0xfffffffe,"IsConnected");.
TODO: resolve the indirect call in body 51: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055370);.
TODO: resolve the indirect call in body 52: (*pcVar2)(lVar1,0xfffffffe,"GetGameDirectory");.
TODO: resolve the indirect call in body 53: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055400);.
TODO: resolve the indirect call in body 54: (*pcVar2)(lVar1,0xfffffffe,"GetTime");.
TODO: resolve the indirect call in body 55: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055480);.
TODO: resolve the indirect call in body 56: (*pcVar2)(lVar1,0xfffffffe,"GetLastTimeStamp");.
TODO: resolve the indirect call in body 57: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055500);.
TODO: resolve the indirect call in body 58: (*pcVar2)(lVar1,0xfffffffe,"IsBoxVisible");.
TODO: resolve the indirect call in body 59: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800555d0);.
TODO: resolve the indirect call in body 60: (*pcVar2)(lVar1,0xfffffffe,"IsBoxInViewCluster");.
TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800556a0);.
TODO: resolve the indirect call in body 62: (*pcVar2)(lVar1,0xfffffffe,"IsOccluded");.
TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055770);.
TODO: resolve the indirect call in body 64: (*pcVar2)(lVar1,0xfffffffe,"RawClientCmdUnrestricted");.
TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055830);.
TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"ExcludeFromCapture");.
TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055b20);.
TODO: resolve the indirect call in body 68: (*pcVar2)(lVar1,0xfffffffe,"SetInterpolation");.
TODO: resolve the indirect call in body 69: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055cf0);.
TODO: resolve the indirect call in body 70: (*pcVar2)(lVar1,0xfffffffe,"GetInterpolation");.
TODO: resolve the indirect call in body 71: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055d00);.
TODO: resolve the indirect call in body 72: (*pcVar2)(lVar1,0xfffffffe,"GetClipboardText");.
TODO: resolve the indirect call in body 73: (*pcVar2)(lVar1,0xfffffffe,"engine");.
TODO: resolve the indirect call in body 74: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 75: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055dd0);.
TODO: resolve the indirect call in body 76: (*pcVar2)(lVar1,0xfffffffe,"CurTime");.
TODO: resolve the indirect call in body 77: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055e30);.
TODO: resolve the indirect call in body 78: (*pcVar2)(lVar1,0xfffffffe,"SetCurTime");.
TODO: resolve the indirect call in body 79: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055ea0);.
TODO: resolve the indirect call in body 80: (*pcVar2)(lVar1,0xfffffffe,"FrameTime");.
TODO: resolve the indirect call in body 81: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f00);.
TODO: resolve the indirect call in body 82: (*pcVar2)(lVar1,0xfffffffe,"SetFrameTime");.
TODO: resolve the indirect call in body 83: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f80);.
TODO: resolve the indirect call in body 84: (*pcVar2)(lVar1,0xfffffffe,"RealTime");.
TODO: resolve the indirect call in body 85: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055fe0);.
TODO: resolve the indirect call in body 86: (*pcVar2)(lVar1,0xfffffffe,"SetRealTime");.
TODO: resolve the indirect call in body 87: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056060);.
TODO: resolve the indirect call in body 88: (*pcVar2)(lVar1,0xfffffffe,"FrameCount");.
TODO: resolve the indirect call in body 89: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800560d0);.
TODO: resolve the indirect call in body 90: (*pcVar2)(lVar1,0xfffffffe,"SetFrameCount");.
TODO: resolve the indirect call in body 91: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056150);.
TODO: resolve the indirect call in body 92: (*pcVar2)(lVar1,0xfffffffe,"AbsFrameTime");.
TODO: resolve the indirect call in body 93: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800561b0);.
TODO: resolve the indirect call in body 94: (*pcVar2)(lVar1,0xfffffffe,"SetAbsFrameTime");.
TODO: resolve the indirect call in body 95: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056230);.
TODO: resolve the indirect call in body 96: (*pcVar2)(lVar1,0xfffffffe,"InterpolationAmount");.
TODO: resolve the indirect call in body 97: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056290);.
TODO: resolve the indirect call in body 98: (*pcVar2)(lVar1,0xfffffffe,"SetInterpolationAmount");.
TODO: resolve the indirect call in body 99: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056310);.
TODO: resolve the indirect call in body 100: (*pcVar2)(lVar1,0xfffffffe,"TickCount");.
TODO: resolve the indirect call in body 101: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056380);.
TODO: resolve the indirect call in body 102: (*pcVar2)(lVar1,0xfffffffe,"IntervalPerTick");.
TODO: resolve the indirect call in body 103: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800563e0);.
TODO: resolve the indirect call in body 104: (*pcVar2)(lVar1,0xfffffffe,"MaxClients");.
TODO: resolve the indirect call in body 105: (*pcVar2)(lVar1,0xfffffffe,"globals");.
TODO: resolve the indirect call in body 106: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 107: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056450);.
TODO: resolve the indirect call in body 108: (*pcVar2)(lVar1,0xfffffffe,"Exists");.
TODO: resolve the indirect call in body 109: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800564f0);.
TODO: resolve the indirect call in body 110: (*pcVar2)(lVar1,0xfffffffe,"GetFloat");.
TODO: resolve the indirect call in body 111: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800565b0);.
TODO: resolve the indirect call in body 112: (*pcVar2)(lVar1,0xfffffffe,"GetInt");.
TODO: resolve the indirect call in body 113: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056670);.
TODO: resolve the indirect call in body 114: (*pcVar2)(lVar1,0xfffffffe,"GetString");.
TODO: resolve the indirect call in body 115: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056770);.
TODO: resolve the indirect call in body 116: (*pcVar2)(lVar1,0xfffffffe,"GetFlags");.
TODO: resolve the indirect call in body 117: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800569d0);.
TODO: resolve the indirect call in body 118: (*pcVar2)(lVar1,0xfffffffe,"SetFloat");.
TODO: resolve the indirect call in body 119: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056b80);.
TODO: resolve the indirect call in body 120: (*pcVar2)(lVar1,0xfffffffe,"SetInt");.
TODO: resolve the indirect call in body 121: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056d30);.
TODO: resolve the indirect call in body 122: (*pcVar2)(lVar1,0xfffffffe,"SetString");.
TODO: resolve the indirect call in body 123: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056d40);.
TODO: resolve the indirect call in body 124: (*pcVar2)(lVar1,0xfffffffe,"SetDefault");.
TODO: resolve the indirect call in body 125: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056e80);.
TODO: resolve the indirect call in body 126: (*pcVar2)(lVar1,0xfffffffe,"SetViaConsole");.
TODO: resolve the indirect call in body 127: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057040);.
TODO: resolve the indirect call in body 128: (*pcVar2)(lVar1,0xfffffffe,"Unlock");.
TODO: resolve the indirect call in body 129: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057140);.
TODO: resolve the indirect call in body 130: (*pcVar2)(lVar1,0xfffffffe,"IsLinkedChild");.
TODO: resolve the indirect call in body 131: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057240);.
TODO: resolve the indirect call in body 132: (*pcVar2)(lVar1,0xfffffffe,"SetFlags");.
TODO: resolve the indirect call in body 133: (*pcVar2)(lVar1,0xfffffffe,&DAT_180344334);.
TODO: resolve the indirect call in body 134: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057360);.
TODO: resolve the indirect call in body 135: (*pcVar2)(lVar1,0xfffffffe,"MD5PseudoRandom");.
TODO: resolve the indirect call in body 136: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057410);.
TODO: resolve the indirect call in body 137: (*pcVar2)(lVar1,0xfffffffe,"PredictSpread");.
TODO: resolve the indirect call in body 142: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
TODO: resolve the indirect call in body 150: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.)F180054350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054350() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054350", "FUN_180054350");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_180055b20.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_180055cf0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800569d0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_180056b80.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_180056d30.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180344334.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcbe0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcfa0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425540.
    // TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
    // TODO: resolve the indirect call in body 27: else if (DAT_1803fcbe0 != (code *)0x0) {.
    // TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054c20);.
    // TODO: resolve the indirect call in body 30: (*pcVar2)(lVar1,0xfffffffe,"ServerCmd");.
    // TODO: resolve the indirect call in body 31: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054cf0);.
    // TODO: resolve the indirect call in body 32: (*pcVar2)(lVar1,0xfffffffe,"ClientCmd");.
    // TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054d70);.
    // TODO: resolve the indirect call in body 34: (*pcVar2)(lVar1,0xfffffffe,"ExecuteClientCmd");.
    // TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054df0);.
    // TODO: resolve the indirect call in body 36: (*pcVar2)(lVar1,0xfffffffe,"ClientCmdUnrestricted");.
    // TODO: resolve the indirect call in body 37: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054e70);.
    // TODO: resolve the indirect call in body 38: (*pcVar2)(lVar1,0xfffffffe,"SetRestrictServerCommands");.
    // TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054ef0);.
    // TODO: resolve the indirect call in body 40: (*pcVar2)(lVar1,0xfffffffe,"SetRestrictClientCommands");.
    // TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0x100))(param_1,FUN_180054f70);.
    // TODO: resolve the indirect call in body 42: (*pcVar2)(lVar1,0xfffffffe,"GetViewAngles");.
    // TODO: resolve the indirect call in body 43: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055050);.
    // TODO: resolve the indirect call in body 44: (*pcVar2)(lVar1,0xfffffffe,"SetViewAngles");.
    // TODO: resolve the indirect call in body 45: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800551e0);.
    // TODO: resolve the indirect call in body 46: (*pcVar2)(lVar1,0xfffffffe,"GetLocalPlayer");.
    // TODO: resolve the indirect call in body 47: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055270);.
    // TODO: resolve the indirect call in body 48: (*pcVar2)(lVar1,0xfffffffe,"IsInGame");.
    // TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800552f0);.
    // TODO: resolve the indirect call in body 50: (*pcVar2)(lVar1,0xfffffffe,"IsConnected");.
    // TODO: resolve the indirect call in body 51: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055370);.
    // TODO: resolve the indirect call in body 52: (*pcVar2)(lVar1,0xfffffffe,"GetGameDirectory");.
    // TODO: resolve the indirect call in body 53: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055400);.
    // TODO: resolve the indirect call in body 54: (*pcVar2)(lVar1,0xfffffffe,"GetTime");.
    // TODO: resolve the indirect call in body 55: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055480);.
    // TODO: resolve the indirect call in body 56: (*pcVar2)(lVar1,0xfffffffe,"GetLastTimeStamp");.
    // TODO: resolve the indirect call in body 57: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055500);.
    // TODO: resolve the indirect call in body 58: (*pcVar2)(lVar1,0xfffffffe,"IsBoxVisible");.
    // TODO: resolve the indirect call in body 59: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800555d0);.
    // TODO: resolve the indirect call in body 60: (*pcVar2)(lVar1,0xfffffffe,"IsBoxInViewCluster");.
    // TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800556a0);.
    // TODO: resolve the indirect call in body 62: (*pcVar2)(lVar1,0xfffffffe,"IsOccluded");.
    // TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055770);.
    // TODO: resolve the indirect call in body 64: (*pcVar2)(lVar1,0xfffffffe,"RawClientCmdUnrestricted");.
    // TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055830);.
    // TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"ExcludeFromCapture");.
    // TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055b20);.
    // TODO: resolve the indirect call in body 68: (*pcVar2)(lVar1,0xfffffffe,"SetInterpolation");.
    // TODO: resolve the indirect call in body 69: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180055cf0);.
    // TODO: resolve the indirect call in body 70: (*pcVar2)(lVar1,0xfffffffe,"GetInterpolation");.
    // TODO: resolve the indirect call in body 71: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055d00);.
    // TODO: resolve the indirect call in body 72: (*pcVar2)(lVar1,0xfffffffe,"GetClipboardText");.
    // TODO: resolve the indirect call in body 73: (*pcVar2)(lVar1,0xfffffffe,"engine");.
    // TODO: resolve the indirect call in body 74: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 75: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055dd0);.
    // TODO: resolve the indirect call in body 76: (*pcVar2)(lVar1,0xfffffffe,"CurTime");.
    // TODO: resolve the indirect call in body 77: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055e30);.
    // TODO: resolve the indirect call in body 78: (*pcVar2)(lVar1,0xfffffffe,"SetCurTime");.
    // TODO: resolve the indirect call in body 79: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055ea0);.
    // TODO: resolve the indirect call in body 80: (*pcVar2)(lVar1,0xfffffffe,"FrameTime");.
    // TODO: resolve the indirect call in body 81: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f00);.
    // TODO: resolve the indirect call in body 82: (*pcVar2)(lVar1,0xfffffffe,"SetFrameTime");.
    // TODO: resolve the indirect call in body 83: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055f80);.
    // TODO: resolve the indirect call in body 84: (*pcVar2)(lVar1,0xfffffffe,"RealTime");.
    // TODO: resolve the indirect call in body 85: (**(code **)(*param_1 + 0x100))(param_1,FUN_180055fe0);.
    // TODO: resolve the indirect call in body 86: (*pcVar2)(lVar1,0xfffffffe,"SetRealTime");.
    // TODO: resolve the indirect call in body 87: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056060);.
    // TODO: resolve the indirect call in body 88: (*pcVar2)(lVar1,0xfffffffe,"FrameCount");.
    // TODO: resolve the indirect call in body 89: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800560d0);.
    // TODO: resolve the indirect call in body 90: (*pcVar2)(lVar1,0xfffffffe,"SetFrameCount");.
    // TODO: resolve the indirect call in body 91: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056150);.
    // TODO: resolve the indirect call in body 92: (*pcVar2)(lVar1,0xfffffffe,"AbsFrameTime");.
    // TODO: resolve the indirect call in body 93: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800561b0);.
    // TODO: resolve the indirect call in body 94: (*pcVar2)(lVar1,0xfffffffe,"SetAbsFrameTime");.
    // TODO: resolve the indirect call in body 95: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056230);.
    // TODO: resolve the indirect call in body 96: (*pcVar2)(lVar1,0xfffffffe,"InterpolationAmount");.
    // TODO: resolve the indirect call in body 97: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056290);.
    // TODO: resolve the indirect call in body 98: (*pcVar2)(lVar1,0xfffffffe,"SetInterpolationAmount");.
    // TODO: resolve the indirect call in body 99: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056310);.
    // TODO: resolve the indirect call in body 100: (*pcVar2)(lVar1,0xfffffffe,"TickCount");.
    // TODO: resolve the indirect call in body 101: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056380);.
    // TODO: resolve the indirect call in body 102: (*pcVar2)(lVar1,0xfffffffe,"IntervalPerTick");.
    // TODO: resolve the indirect call in body 103: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800563e0);.
    // TODO: resolve the indirect call in body 104: (*pcVar2)(lVar1,0xfffffffe,"MaxClients");.
    // TODO: resolve the indirect call in body 105: (*pcVar2)(lVar1,0xfffffffe,"globals");.
    // TODO: resolve the indirect call in body 106: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 107: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056450);.
    // TODO: resolve the indirect call in body 108: (*pcVar2)(lVar1,0xfffffffe,"Exists");.
    // TODO: resolve the indirect call in body 109: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800564f0);.
    // TODO: resolve the indirect call in body 110: (*pcVar2)(lVar1,0xfffffffe,"GetFloat");.
    // TODO: resolve the indirect call in body 111: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800565b0);.
    // TODO: resolve the indirect call in body 112: (*pcVar2)(lVar1,0xfffffffe,"GetInt");.
    // TODO: resolve the indirect call in body 113: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056670);.
    // TODO: resolve the indirect call in body 114: (*pcVar2)(lVar1,0xfffffffe,"GetString");.
    // TODO: resolve the indirect call in body 115: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056770);.
    // TODO: resolve the indirect call in body 116: (*pcVar2)(lVar1,0xfffffffe,"GetFlags");.
    // TODO: resolve the indirect call in body 117: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800569d0);.
    // TODO: resolve the indirect call in body 118: (*pcVar2)(lVar1,0xfffffffe,"SetFloat");.
    // TODO: resolve the indirect call in body 119: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056b80);.
    // TODO: resolve the indirect call in body 120: (*pcVar2)(lVar1,0xfffffffe,"SetInt");.
    // TODO: resolve the indirect call in body 121: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180056d30);.
    // TODO: resolve the indirect call in body 122: (*pcVar2)(lVar1,0xfffffffe,"SetString");.
    // TODO: resolve the indirect call in body 123: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056d40);.
    // TODO: resolve the indirect call in body 124: (*pcVar2)(lVar1,0xfffffffe,"SetDefault");.
    // TODO: resolve the indirect call in body 125: (**(code **)(*param_1 + 0x100))(param_1,FUN_180056e80);.
    // TODO: resolve the indirect call in body 126: (*pcVar2)(lVar1,0xfffffffe,"SetViaConsole");.
    // TODO: resolve the indirect call in body 127: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057040);.
    // TODO: resolve the indirect call in body 128: (*pcVar2)(lVar1,0xfffffffe,"Unlock");.
    // TODO: resolve the indirect call in body 129: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057140);.
    // TODO: resolve the indirect call in body 130: (*pcVar2)(lVar1,0xfffffffe,"IsLinkedChild");.
    // TODO: resolve the indirect call in body 131: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057240);.
    // TODO: resolve the indirect call in body 132: (*pcVar2)(lVar1,0xfffffffe,"SetFlags");.
    // TODO: resolve the indirect call in body 133: (*pcVar2)(lVar1,0xfffffffe,&DAT_180344334);.
    // TODO: resolve the indirect call in body 134: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057360);.
    // TODO: resolve the indirect call in body 135: (*pcVar2)(lVar1,0xfffffffe,"MD5PseudoRandom");.
    // TODO: resolve the indirect call in body 136: (**(code **)(*param_1 + 0x100))(param_1,FUN_180057410);.
    // TODO: resolve the indirect call in body 137: (*pcVar2)(lVar1,0xfffffffe,"PredictSpread");.
    // TODO: resolve the indirect call in body 142: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: resolve the indirect call in body 150: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.call_target("FUN_1800260c0", reinterpret_cast<const void*>(&image::FUN_1800260c0));
    trace.call_target("FUN_180054c20", reinterpret_cast<const void*>(&image::FUN_180054c20));
    trace.call_target("FUN_180054cf0", reinterpret_cast<const void*>(&image::FUN_180054cf0));
    trace.call_target("FUN_180054d70", reinterpret_cast<const void*>(&image::FUN_180054d70));
    trace.call_target("FUN_180054df0", reinterpret_cast<const void*>(&image::FUN_180054df0));
    trace.call_target("FUN_180054e70", reinterpret_cast<const void*>(&image::FUN_180054e70));
    trace.call_target("FUN_180054ef0", reinterpret_cast<const void*>(&image::FUN_180054ef0));
    trace.call_target("FUN_180054f70", reinterpret_cast<const void*>(&image::FUN_180054f70));
    trace.call_target("FUN_180055050", reinterpret_cast<const void*>(&image::FUN_180055050));
    trace.call_target("FUN_1800551e0", reinterpret_cast<const void*>(&image::FUN_1800551e0));
    trace.call_target("FUN_180055270", reinterpret_cast<const void*>(&image::FUN_180055270));
    trace.call_target("FUN_1800552f0", reinterpret_cast<const void*>(&image::FUN_1800552f0));
    trace.call_target("FUN_180055370", reinterpret_cast<const void*>(&image::FUN_180055370));
    trace.call_target("FUN_180055400", reinterpret_cast<const void*>(&image::FUN_180055400));
    trace.call_target("FUN_180055480", reinterpret_cast<const void*>(&image::FUN_180055480));
    trace.call_target("FUN_180055500", reinterpret_cast<const void*>(&image::FUN_180055500));
    trace.call_target("FUN_1800555d0", reinterpret_cast<const void*>(&image::FUN_1800555d0));
    trace.call_target("FUN_1800556a0", reinterpret_cast<const void*>(&image::FUN_1800556a0));
    trace.call_target("FUN_180055770", reinterpret_cast<const void*>(&image::FUN_180055770));
    trace.call_target("FUN_180055830", reinterpret_cast<const void*>(&image::FUN_180055830));
    trace.call_target("FUN_180055d00", reinterpret_cast<const void*>(&image::FUN_180055d00));
    trace.call_target("FUN_180055dd0", reinterpret_cast<const void*>(&image::FUN_180055dd0));
    trace.call_target("FUN_180055e30", reinterpret_cast<const void*>(&image::FUN_180055e30));
    trace.call_target("FUN_180055ea0", reinterpret_cast<const void*>(&image::FUN_180055ea0));
    trace.call_target("FUN_180055f00", reinterpret_cast<const void*>(&image::FUN_180055f00));
    trace.call_target("FUN_180055f80", reinterpret_cast<const void*>(&image::FUN_180055f80));
    trace.call_target("FUN_180055fe0", reinterpret_cast<const void*>(&image::FUN_180055fe0));
    trace.call_target("FUN_180056060", reinterpret_cast<const void*>(&image::FUN_180056060));
    trace.call_target("FUN_1800560d0", reinterpret_cast<const void*>(&image::FUN_1800560d0));
    trace.call_target("FUN_180056150", reinterpret_cast<const void*>(&image::FUN_180056150));
    trace.call_target("FUN_1800561b0", reinterpret_cast<const void*>(&image::FUN_1800561b0));
    trace.call_target("FUN_180056230", reinterpret_cast<const void*>(&image::FUN_180056230));
    trace.call_target("FUN_180056290", reinterpret_cast<const void*>(&image::FUN_180056290));
    trace.call_target("FUN_180056310", reinterpret_cast<const void*>(&image::FUN_180056310));
    trace.call_target("FUN_180056380", reinterpret_cast<const void*>(&image::FUN_180056380));
    trace.call_target("FUN_1800563e0", reinterpret_cast<const void*>(&image::FUN_1800563e0));
    trace.call_target("FUN_180056450", reinterpret_cast<const void*>(&image::FUN_180056450));
    trace.call_target("FUN_1800564f0", reinterpret_cast<const void*>(&image::FUN_1800564f0));
    trace.call_target("FUN_1800565b0", reinterpret_cast<const void*>(&image::FUN_1800565b0));
    trace.call_target("FUN_180056670", reinterpret_cast<const void*>(&image::FUN_180056670));
    trace.call_target("FUN_180056770", reinterpret_cast<const void*>(&image::FUN_180056770));
    trace.call_target("FUN_180056d40", reinterpret_cast<const void*>(&image::FUN_180056d40));
    trace.call_target("FUN_180056e80", reinterpret_cast<const void*>(&image::FUN_180056e80));
    trace.call_target("FUN_180057040", reinterpret_cast<const void*>(&image::FUN_180057040));
    trace.call_target("FUN_180057140", reinterpret_cast<const void*>(&image::FUN_180057140));
    trace.call_target("FUN_180057240", reinterpret_cast<const void*>(&image::FUN_180057240));
    trace.call_target("FUN_180057360", reinterpret_cast<const void*>(&image::FUN_180057360));
    trace.call_target("FUN_180057410", reinterpret_cast<const void*>(&image::FUN_180057410));
    trace.data_ref("DAT_180344334", static_cast<const void*>(&image::DAT_180344334));
    trace.data_ref("DAT_1803fcbe0", static_cast<const void*>(&image::DAT_1803fcbe0));
    trace.data_ref("DAT_1803fcfa0", static_cast<const void*>(&image::DAT_1803fcfa0));
    trace.data_ref("DAT_180425540", static_cast<const void*>(&image::DAT_180425540));
    trace.string_literal("Exists");
    trace.string_literal("GetInt");
    trace.string_literal("SetInt");
    trace.string_literal("Unlock");
    trace.string_literal("engine");
    trace.string_literal("CurTime");
    trace.string_literal("GetTime");
    trace.string_literal("globals");
    trace.string_literal("GetFlags");
    trace.string_literal("GetFloat");
    trace.string_literal("IsInGame");
    trace.string_literal("RealTime");
    trace.string_literal("SetFlags");
    trace.string_literal("SetFloat");
    trace.string_literal("ClientCmd");
    trace.string_literal("FrameTime");
    trace.string_literal("GetString");
    trace.string_literal("ServerCmd");
    trace.string_literal("SetString");
    trace.string_literal("TickCount");
    trace.string_literal("FrameCount");
    trace.string_literal("IsOccluded");
    trace.string_literal("MaxClients");
    trace.string_literal("SetCurTime");
    trace.string_literal("SetDefault");
    trace.string_literal("lua_gettop");
    trace.string_literal("lua_settop");
    trace.string_literal("IsConnected");
    trace.string_literal("SetRealTime");
    trace.string_literal("AbsFrameTime");
    trace.string_literal("IsBoxVisible");
    trace.string_literal("SetFrameTime");
    trace.string_literal("GetViewAngles");
    trace.string_literal("IsLinkedChild");
    trace.string_literal("PredictSpread");
    trace.string_literal("SetFrameCount");
    trace.string_literal("SetViaConsole");
    trace.string_literal("SetViewAngles");
    trace.string_literal("GetLocalPlayer");
    trace.string_literal("lua_shared.dll");
    trace.string_literal("IntervalPerTick");
    trace.string_literal("MD5PseudoRandom");
    trace.string_literal("SetAbsFrameTime");
    trace.string_literal("ExecuteClientCmd");
    trace.string_literal("GetClipboardText");
    trace.string_literal("GetGameDirectory");
    trace.string_literal("GetInterpolation");
    trace.string_literal("GetLastTimeStamp");
    trace.string_literal("SetInterpolation");
    trace.string_literal("ExcludeFromCapture");
    trace.string_literal("IsBoxInViewCluster");
    trace.string_literal("InterpolationAmount");
    trace.string_literal("ClientCmdUnrestricted");
    trace.string_literal("SetInterpolationAmount");
    trace.string_literal("RawClientCmdUnrestricted");
    trace.string_literal("SetRestrictClientCommands");
    trace.string_literal("SetRestrictServerCommands");
    trace.string_literal("[LUAENGINE] api table unavailable -- persist not ready\\n");
    trace.string_literal("[LUAENGINE] engine, globals and cvar tables registered\\n");
    // body sha256: 9b3bda114b89aae99ea98252aca85597bbff855941c3b8501ae6ae74d1417803
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("void FUN_180054350(longlong *param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("char cVar3;");
            trace.statement("HMODULE pHVar4;");
            trace.statement("ulonglong uVar5;");
            if (trace.condition("if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0))")) {
                if (trace.condition("if (DAT_1803fcfa0 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_1803fcfa0 = GetProcAddress(pHVar4,\"lua_gettop\");");
                }
                trace.statement("uVar5 = (*DAT_1803fcfa0)(lVar1);");
                trace.statement("cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);");
                trace.statement("pcVar2 = DAT_1803fcbe0;");
                if (trace.condition("if (cVar3 == '\\0')")) {
                    trace.statement("FUN_180014410(\"[LUAENGINE] api table unavailable -- persist not ready\\n\");");
                } else {
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180054c20);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ServerCmd\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180054cf0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ClientCmd\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180054d70);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ExecuteClientCmd\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180054df0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ClientCmdUnrestricted\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180054e70);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetRestrictServerCommands\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180054ef0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetRestrictClientCommands\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180054f70);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetViewAngles\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055050);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetViewAngles\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800551e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetLocalPlayer\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055270);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsInGame\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800552f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsConnected\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055370);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetGameDirectory\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055400);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055480);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetLastTimeStamp\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055500);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsBoxVisible\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800555d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsBoxInViewCluster\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800556a0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsOccluded\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055770);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"RawClientCmdUnrestricted\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055830);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ExcludeFromCapture\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_180055b20);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetInterpolation\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_180055cf0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetInterpolation\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055d00);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetClipboardText\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"engine\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055dd0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"CurTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055e30);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetCurTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055ea0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"FrameTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055f00);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetFrameTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055f80);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"RealTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180055fe0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetRealTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056060);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"FrameCount\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800560d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetFrameCount\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056150);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"AbsFrameTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800561b0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetAbsFrameTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056230);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"InterpolationAmount\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056290);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetInterpolationAmount\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056310);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"TickCount\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056380);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IntervalPerTick\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800563e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"MaxClients\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"globals\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056450);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Exists\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800564f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetFloat\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800565b0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetInt\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056670);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetString\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056770);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetFlags\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800569d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetFloat\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_180056b80);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetInt\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_180056d30);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetString\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056d40);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetDefault\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180056e80);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetViaConsole\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180057040);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Unlock\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180057140);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsLinkedChild\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180057240);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetFlags\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,&DAT_180344334);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180057360);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"MD5PseudoRandom\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180057410);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"PredictSpread\");");
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
                trace.statement("FUN_180014410(\"[LUAENGINE] engine, globals and cvar tables registered\\n\");");
                trace.statement("return;");
                }
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
            }
            trace.statement("return;");
        }
    return kFunction_0x180054350;
}

// 0x180054c20 FUN_180054c20
// source: re/dump/decompile/0x180054c20_FUN_180054c20.c
// size: 203 bytes; thunk: false
// body sha256: 4d972da1001fce08315f0012db6df859a3c40cf9ec97e842c8186861420fe960
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054c20{
    "0x180054c20",
    "FUN_180054c20",
    R"F180054c20S(undefined FUN_180054c20())F180054c20S",
    R"B180054c20(// 0x180054c20  FUN_180054c20
// size=203 thunk=false
// signature: undefined FUN_180054c20()
// status: ok


undefined8 FUN_180054c20(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 != '\0') {
      lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      if ((lVar5 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
        pcVar1 = *(code **)(*DAT_1803fa668 + 0x30);
        cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);
        if (cVar2 == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);
        }
        (*pcVar1)(DAT_1803fa668,lVar5,uVar3);
      }
    }
  }
  return 0;
}


)B180054c20",
    "4d972da1001fce08315f0012db6df859a3c40cf9ec97e842c8186861420fe960",
    R"F180054c20C(FUN_180039770)F180054c20C",
    R"F180054c20D(DAT_1803fa668)F180054c20D",
    R"F180054c20T()F180054c20T",
    R"F180054c20F(17: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
19: if (cVar2 != '\0') {
21: if ((lVar5 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
24: if (cVar2 == '\0') {
27: else {
34: return 0;)F180054c20F",
    R"F180054c20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 20: lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 22: pcVar1 = *(code **)(*DAT_1803fa668 + 0x30);.
TODO: resolve the indirect call in body 23: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);.
TODO: resolve the indirect call in body 28: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);.
TODO: resolve the indirect call in body 30: (*pcVar1)(DAT_1803fa668,lVar5,uVar3);.)F180054c20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054c20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054c20", "FUN_180054c20");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 20: lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 22: pcVar1 = *(code **)(*DAT_1803fa668 + 0x30);.
    // TODO: resolve the indirect call in body 23: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);.
    // TODO: resolve the indirect call in body 28: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);.
    // TODO: resolve the indirect call in body 30: (*pcVar1)(DAT_1803fa668,lVar5,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 4d972da1001fce08315f0012db6df859a3c40cf9ec97e842c8186861420fe960
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180054c20(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("longlong lVar5;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1))")) {
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
                if (trace.condition("if (cVar2 != '\\0')")) {
                    trace.statement("lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
                    if (trace.condition("if ((lVar5 != 0) && (DAT_1803fa668 != (longlong *)0x0))")) {
                        trace.statement("pcVar1 = *(code **)(*DAT_1803fa668 + 0x30);");
                        trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);");
                        if (trace.condition("if (cVar2 == '\\0')")) {
                            trace.statement("uVar3 = 1;");
                        } else {
                        trace.statement("uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);");
                        }
                        trace.statement("(*pcVar1)(DAT_1803fa668,lVar5,uVar3);");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180054c20;
}

// 0x180054cf0 FUN_180054cf0
// source: re/dump/decompile/0x180054cf0_FUN_180054cf0.c
// size: 120 bytes; thunk: false
// body sha256: cc498fb4f30c6dcb8fe27f06902f6a2ed89ebe50e7db8d45061b6c9a908818b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054cf0{
    "0x180054cf0",
    "FUN_180054cf0",
    R"F180054cf0S(undefined FUN_180054cf0())F180054cf0S",
    R"B180054cf0(// 0x180054cf0  FUN_180054cf0
// size=120 thunk=false
// signature: undefined FUN_180054cf0()
// status: ok


undefined8 FUN_180054cf0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 != '\0') {
      lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
        (**(code **)(*DAT_1803fa668 + 0x38))(DAT_1803fa668,lVar3);
      }
    }
  }
  return 0;
}


)B180054cf0",
    "cc498fb4f30c6dcb8fe27f06902f6a2ed89ebe50e7db8d45061b6c9a908818b7",
    R"F180054cf0C(FUN_180039770)F180054cf0C",
    R"F180054cf0D(DAT_1803fa668)F180054cf0D",
    R"F180054cf0T()F180054cf0T",
    R"F180054cf0F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
17: if (cVar1 != '\0') {
19: if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
24: return 0;)F180054cf0F",
    R"F180054cf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
TODO: resolve the indirect call in body 18: lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
TODO: resolve the indirect call in body 20: (**(code **)(*DAT_1803fa668 + 0x38))(DAT_1803fa668,lVar3);.)F180054cf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054cf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054cf0", "FUN_180054cf0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
    // TODO: resolve the indirect call in body 18: lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*DAT_1803fa668 + 0x38))(DAT_1803fa668,lVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: cc498fb4f30c6dcb8fe27f06902f6a2ed89ebe50e7db8d45061b6c9a908818b7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180054cf0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);");
                    if (trace.condition("if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0))")) {
                        trace.statement("(**(code **)(*DAT_1803fa668 + 0x38))(DAT_1803fa668,lVar3);");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180054cf0;
}

// 0x180054d70 FUN_180054d70
// source: re/dump/decompile/0x180054d70_FUN_180054d70.c
// size: 123 bytes; thunk: false
// body sha256: 0d4e6436aac68720fe25afa799c9190f1cd662356202332d6a366de75ae5302d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054d70{
    "0x180054d70",
    "FUN_180054d70",
    R"F180054d70S(undefined FUN_180054d70())F180054d70S",
    R"B180054d70(// 0x180054d70  FUN_180054d70
// size=123 thunk=false
// signature: undefined FUN_180054d70()
// status: ok


undefined8 FUN_180054d70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 != '\0') {
      lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
        (**(code **)(*DAT_1803fa668 + 0x330))(DAT_1803fa668,lVar3);
      }
    }
  }
  return 0;
}


)B180054d70",
    "0d4e6436aac68720fe25afa799c9190f1cd662356202332d6a366de75ae5302d",
    R"F180054d70C(FUN_180039770)F180054d70C",
    R"F180054d70D(DAT_1803fa668)F180054d70D",
    R"F180054d70T()F180054d70T",
    R"F180054d70F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
17: if (cVar1 != '\0') {
19: if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
24: return 0;)F180054d70F",
    R"F180054d70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
TODO: resolve the indirect call in body 18: lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
TODO: resolve the indirect call in body 20: (**(code **)(*DAT_1803fa668 + 0x330))(DAT_1803fa668,lVar3);.)F180054d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054d70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054d70", "FUN_180054d70");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
    // TODO: resolve the indirect call in body 18: lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*DAT_1803fa668 + 0x330))(DAT_1803fa668,lVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 0d4e6436aac68720fe25afa799c9190f1cd662356202332d6a366de75ae5302d
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180054d70(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);");
                    if (trace.condition("if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0))")) {
                        trace.statement("(**(code **)(*DAT_1803fa668 + 0x330))(DAT_1803fa668,lVar3);");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180054d70;
}

// 0x180054df0 FUN_180054df0
// source: re/dump/decompile/0x180054df0_FUN_180054df0.c
// size: 123 bytes; thunk: false
// body sha256: 3ae9ab854fdaba07efcb5222a9b57e142ce5da47f52f073ea61589116609f070
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054df0{
    "0x180054df0",
    "FUN_180054df0",
    R"F180054df0S(undefined FUN_180054df0())F180054df0S",
    R"B180054df0(// 0x180054df0  FUN_180054df0
// size=123 thunk=false
// signature: undefined FUN_180054df0()
// status: ok


undefined8 FUN_180054df0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 != '\0') {
      lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
        (**(code **)(*DAT_1803fa668 + 0x350))(DAT_1803fa668,lVar3);
      }
    }
  }
  return 0;
}


)B180054df0",
    "3ae9ab854fdaba07efcb5222a9b57e142ce5da47f52f073ea61589116609f070",
    R"F180054df0C(FUN_180039770)F180054df0C",
    R"F180054df0D(DAT_1803fa668)F180054df0D",
    R"F180054df0T()F180054df0T",
    R"F180054df0F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
17: if (cVar1 != '\0') {
19: if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
24: return 0;)F180054df0F",
    R"F180054df0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
TODO: resolve the indirect call in body 18: lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
TODO: resolve the indirect call in body 20: (**(code **)(*DAT_1803fa668 + 0x350))(DAT_1803fa668,lVar3);.)F180054df0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054df0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054df0", "FUN_180054df0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);.
    // TODO: resolve the indirect call in body 18: lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*DAT_1803fa668 + 0x350))(DAT_1803fa668,lVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 3ae9ab854fdaba07efcb5222a9b57e142ce5da47f52f073ea61589116609f070
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180054df0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);");
                    if (trace.condition("if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0))")) {
                        trace.statement("(**(code **)(*DAT_1803fa668 + 0x350))(DAT_1803fa668,lVar3);");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180054df0;
}

// 0x180054e70 FUN_180054e70
// source: re/dump/decompile/0x180054e70_FUN_180054e70.c
// size: 125 bytes; thunk: false
// body sha256: ea59d78843be987816f8aebd551ad37af7e1fe186197b8371bd8100ee6ac9830
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054e70{
    "0x180054e70",
    "FUN_180054e70",
    R"F180054e70S(undefined FUN_180054e70())F180054e70S",
    R"B180054e70(// 0x180054e70  FUN_180054e70
// size=125 thunk=false
// signature: undefined FUN_180054e70()
// status: ok


undefined8 FUN_180054e70(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
  {
    pcVar1 = *(code **)(*DAT_1803fa668 + 0x358);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);
    }
    (*pcVar1)(DAT_1803fa668,uVar3);
  }
  return 0;
}


)B180054e70",
    "ea59d78843be987816f8aebd551ad37af7e1fe186197b8371bd8100ee6ac9830",
    R"F180054e70C(FUN_180039770)F180054e70C",
    R"F180054e70D(DAT_1803fa668)F180054e70D",
    R"F180054e70T()F180054e70T",
    R"F180054e70F(16: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
20: if (cVar2 == '\0') {
23: else {
28: return 0;)F180054e70F",
    R"F180054e70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*DAT_1803fa668 + 0x358);.
TODO: resolve the indirect call in body 19: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
TODO: resolve the indirect call in body 24: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.
TODO: resolve the indirect call in body 26: (*pcVar1)(DAT_1803fa668,uVar3);.)F180054e70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054e70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054e70", "FUN_180054e70");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*DAT_1803fa668 + 0x358);.
    // TODO: resolve the indirect call in body 19: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
    // TODO: resolve the indirect call in body 24: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.
    // TODO: resolve the indirect call in body 26: (*pcVar1)(DAT_1803fa668,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: ea59d78843be987816f8aebd551ad37af7e1fe186197b8371bd8100ee6ac9830
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180054e70(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))")) {
                trace.statement("pcVar1 = *(code **)(*DAT_1803fa668 + 0x358);");
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("uVar3 = 1;");
                } else {
                trace.statement("uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);");
                }
                trace.statement("(*pcVar1)(DAT_1803fa668,uVar3);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180054e70;
}

// 0x180054ef0 FUN_180054ef0
// source: re/dump/decompile/0x180054ef0_FUN_180054ef0.c
// size: 125 bytes; thunk: false
// body sha256: a747acdb3ba3fb016db163f9923e9c2240a0f9b331a408340496da953ecc5115
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054ef0{
    "0x180054ef0",
    "FUN_180054ef0",
    R"F180054ef0S(undefined FUN_180054ef0())F180054ef0S",
    R"B180054ef0(// 0x180054ef0  FUN_180054ef0
// size=125 thunk=false
// signature: undefined FUN_180054ef0()
// status: ok


undefined8 FUN_180054ef0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
  {
    pcVar1 = *(code **)(*DAT_1803fa668 + 0x360);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);
    }
    (*pcVar1)(DAT_1803fa668,uVar3);
  }
  return 0;
}


)B180054ef0",
    "a747acdb3ba3fb016db163f9923e9c2240a0f9b331a408340496da953ecc5115",
    R"F180054ef0C(FUN_180039770)F180054ef0C",
    R"F180054ef0D(DAT_1803fa668)F180054ef0D",
    R"F180054ef0T()F180054ef0T",
    R"F180054ef0F(16: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
20: if (cVar2 == '\0') {
23: else {
28: return 0;)F180054ef0F",
    R"F180054ef0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*DAT_1803fa668 + 0x360);.
TODO: resolve the indirect call in body 19: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
TODO: resolve the indirect call in body 24: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.
TODO: resolve the indirect call in body 26: (*pcVar1)(DAT_1803fa668,uVar3);.)F180054ef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054ef0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054ef0", "FUN_180054ef0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*DAT_1803fa668 + 0x360);.
    // TODO: resolve the indirect call in body 19: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
    // TODO: resolve the indirect call in body 24: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.
    // TODO: resolve the indirect call in body 26: (*pcVar1)(DAT_1803fa668,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: a747acdb3ba3fb016db163f9923e9c2240a0f9b331a408340496da953ecc5115
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180054ef0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))")) {
                trace.statement("pcVar1 = *(code **)(*DAT_1803fa668 + 0x360);");
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("uVar3 = 1;");
                } else {
                trace.statement("uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);");
                }
                trace.statement("(*pcVar1)(DAT_1803fa668,uVar3);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180054ef0;
}

// 0x180054f70 FUN_180054f70
// source: re/dump/decompile/0x180054f70_FUN_180054f70.c
// size: 213 bytes; thunk: false
// body sha256: dc4fa6470025fd4413769fb64cd688c1e96c954c4878204a1b548ffdb6042d74
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180054f70{
    "0x180054f70",
    "FUN_180054f70",
    R"F180054f70S(undefined FUN_180054f70())F180054f70S",
    R"B180054f70(// 0x180054f70  FUN_180054f70
// size=213 thunk=false
// signature: undefined FUN_180054f70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180054f70(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  float local_28;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else if (DAT_1803fa668 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe0))(plVar1);
    uVar2 = 1;
  }
  else {
    local_24 = 0;
    local_28 = 0.0;
    (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_28);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_24);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_24._4_4_);
    uVar2 = 3;
  }
  return uVar2;
}


)B180054f70",
    "dc4fa6470025fd4413769fb64cd688c1e96c954c4878204a1b548ffdb6042d74",
    R"F180054f70C(FUN_180039770)F180054f70C",
    R"F180054f70D(DAT_1803da4c0
DAT_1803fa668)F180054f70D",
    R"F180054f70T()F180054f70T",
    R"F180054f70F(21: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
24: else if (DAT_1803fa668 == (longlong *)0x0) {
28: else {
37: return uVar2;)F180054f70F",
    R"F180054f70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 31: (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_28);.
TODO: resolve the indirect call in body 32: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28);.
TODO: resolve the indirect call in body 33: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_24);.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_24._4_4_);.)F180054f70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180054f70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180054f70", "FUN_180054f70");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 31: (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_28);.
    // TODO: resolve the indirect call in body 32: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28);.
    // TODO: resolve the indirect call in body 33: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_24);.
    // TODO: resolve the indirect call in body 34: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_24._4_4_);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: dc4fa6470025fd4413769fb64cd688c1e96c954c4878204a1b548ffdb6042d74
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180054f70(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("undefined8 uVar2;");
            trace.statement("undefined1 auStack_48 [32];");
            trace.statement("float local_28;");
            trace.statement("undefined8 local_24;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1))")) {
                trace.statement("uVar2 = 0;");
            } else {
            trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
            trace.statement("uVar2 = 1;");
            }
            trace.statement("else {");
            trace.statement("local_24 = 0;");
            trace.statement("local_28 = 0.0;");
            trace.statement("(**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_28);");
            trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28);");
            trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_24);");
            trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_24._4_4_);");
            trace.statement("uVar2 = 3;");
        }
        trace.statement("return uVar2;");
    return kFunction_0x180054f70;
}

// 0x180055050 FUN_180055050
// source: re/dump/decompile/0x180055050_FUN_180055050.c
// size: 393 bytes; thunk: false
// body sha256: 5aafb0a10e66ee7dc87c119bc0a0755cd250dfb13ea4258770e98097ec8d74df
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055050{
    "0x180055050",
    "FUN_180055050",
    R"F180055050S(undefined FUN_180055050())F180055050S",
    R"B180055050(// 0x180055050  FUN_180055050
// size=393 thunk=false
// signature: undefined FUN_180055050()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180055050(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    dVar5 = 0.0;
    if (cVar1 == '\0') {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 == '\0') {
      dVar4 = 0.0;
    }
    else {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
    }
    local_58 = (float)dVar5;
    local_54 = (float)dVar4;
    local_50 = (float)dVar3;
    if (((((uint)local_58 & 0x7f800000) != 0x7f800000) &&
        (((uint)local_54 & 0x7f800000) != 0x7f800000)) &&
       (((uint)local_50 & 0x7f800000) != 0x7f800000)) {
      (**(code **)(*DAT_1803fa668 + 0xa0))(DAT_1803fa668,&local_58);
    }
  }
  return 0;
}


)B180055050",
    "5aafb0a10e66ee7dc87c119bc0a0755cd250dfb13ea4258770e98097ec8d74df",
    R"F180055050C(FUN_180039770)F180055050C",
    R"F180055050D(DAT_1803da4c0
DAT_1803fa668)F180055050D",
    R"F180055050T()F180055050T",
    R"F180055050F(25: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
29: if (cVar1 == '\0') {
32: else {
36: if (cVar1 == '\0') {
39: else {
43: if (cVar1 != '\0') {
49: if (((((uint)local_58 & 0x7f800000) != 0x7f800000) &&
55: return 0;)F180055050F",
    R"F180055050U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 27: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
TODO: resolve the indirect call in body 33: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
TODO: resolve the indirect call in body 35: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
TODO: resolve the indirect call in body 40: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 44: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
TODO: resolve the indirect call in body 52: (**(code **)(*DAT_1803fa668 + 0xa0))(DAT_1803fa668,&local_58);.)F180055050U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055050() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055050", "FUN_180055050");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 27: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);.
    // TODO: resolve the indirect call in body 33: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);.
    // TODO: resolve the indirect call in body 35: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
    // TODO: resolve the indirect call in body 40: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
    // TODO: resolve the indirect call in body 42: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 44: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: resolve the indirect call in body 52: (**(code **)(*DAT_1803fa668 + 0xa0))(DAT_1803fa668,&local_58);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 5aafb0a10e66ee7dc87c119bc0a0755cd250dfb13ea4258770e98097ec8d74df
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055050(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("double dVar4;");
            trace.statement("double dVar5;");
            trace.statement("undefined1 auStack_78 [32];");
            trace.statement("float local_58;");
            trace.statement("float local_54;");
            trace.statement("float local_50;");
            trace.statement("ulonglong local_48;");
            trace.statement("local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_78;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);");
                trace.statement("dVar5 = 0.0;");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("dVar3 = 0.0;");
                } else {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);");
                if (trace.condition("if (cVar1 == '\\0')")) {
                    trace.statement("dVar4 = 0.0;");
                } else {
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);");
                }
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                }
                trace.statement("local_58 = (float)dVar5;");
                trace.statement("local_54 = (float)dVar4;");
                trace.statement("local_50 = (float)dVar3;");
                if (trace.condition("if (((((uint)local_58 & 0x7f800000) != 0x7f800000) && (((uint)local_54 & 0x7f800000) != 0x7f800000)) && (((uint)local_50 & 0x7f800000) != 0x7f800000))")) {
                    trace.statement("(**(code **)(*DAT_1803fa668 + 0xa0))(DAT_1803fa668,&local_58);");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055050;
}

// 0x1800551e0 FUN_1800551e0
// source: re/dump/decompile/0x1800551e0_FUN_1800551e0.c
// size: 131 bytes; thunk: false
// body sha256: 2c25daf72d7dbad721d3a3c6ac6e568c8756e7f0ce5e4fdf258c343be986c3e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800551e0{
    "0x1800551e0",
    "FUN_1800551e0",
    R"F1800551e0S(undefined FUN_1800551e0())F1800551e0S",
    R"B1800551e0(// 0x1800551e0  FUN_1800551e0
// size=131 thunk=false
// signature: undefined FUN_1800551e0()
// status: ok


undefined8 FUN_1800551e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    else {
      iVar1 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar3 = *plVar2;
      if (0 < iVar1) {
        (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800551e0",
    "2c25daf72d7dbad721d3a3c6ac6e568c8756e7f0ce5e4fdf258c343be986c3e3",
    R"F1800551e0C(FUN_180039770)F1800551e0C",
    R"F1800551e0D(DAT_1803fa668)F1800551e0D",
    R"F1800551e0T()F1800551e0T",
    R"F1800551e0F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
16: if (DAT_1803fa668 == (longlong *)0x0) {
19: else {
22: if (0 < iVar1) {
24: return 1;
28: return 1;
30: return 0;)F1800551e0F",
    R"F1800551e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 20: iVar1 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 23: (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);.
TODO: resolve the indirect call in body 27: (**(code **)(lVar3 + 0xe0))(plVar2);.)F1800551e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800551e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800551e0", "FUN_1800551e0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 20: iVar1 = (**(code **)(*DAT_1803fa668 + 0x60))();.
    // TODO: resolve the indirect call in body 23: (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);.
    // TODO: resolve the indirect call in body 27: (**(code **)(lVar3 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 2c25daf72d7dbad721d3a3c6ac6e568c8756e7f0ce5e4fdf258c343be986c3e3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800551e0(longlong param_1)");
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa668 == (longlong *)0x0)")) {
                    trace.statement("lVar3 = *plVar2;");
                } else {
                trace.statement("iVar1 = (**(code **)(*DAT_1803fa668 + 0x60))();");
                trace.statement("lVar3 = *plVar2;");
                if (trace.condition("if (0 < iVar1)")) {
                    trace.statement("(**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);");
                    trace.statement("return 1;");
                }
                }
                trace.statement("(**(code **)(lVar3 + 0xe0))(plVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800551e0;
}

// 0x180055270 FUN_180055270
// source: re/dump/decompile/0x180055270_FUN_180055270.c
// size: 126 bytes; thunk: false
// body sha256: c300f5b4cb96a4e2d13192a046b5ef6f627b96643095e13ee08d9ffd76dc4849
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055270{
    "0x180055270",
    "FUN_180055270",
    R"F180055270S(undefined FUN_180055270())F180055270S",
    R"B180055270(// 0x180055270  FUN_180055270
// size=126 thunk=false
// signature: undefined FUN_180055270()
// status: ok


undefined8 FUN_180055270(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    if (DAT_1803fa668 != (longlong *)0x0) {
      cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
      if (cVar2 != '\0') {
        (*pcVar1)(plVar3,1);
        return 1;
      }
    }
    (*pcVar1)(plVar3,0);
    return 1;
  }
  return 0;
}


)B180055270",
    "c300f5b4cb96a4e2d13192a046b5ef6f627b96643095e13ee08d9ffd76dc4849",
    R"F180055270C(FUN_180039770)F180055270C",
    R"F180055270D(DAT_1803fa668)F180055270D",
    R"F180055270T()F180055270T",
    R"F180055270F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
17: if (DAT_1803fa668 != (longlong *)0x0) {
19: if (cVar2 != '\0') {
21: return 1;
25: return 1;
27: return 0;)F180055270F",
    R"F180055270U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();.
TODO: resolve the indirect call in body 20: (*pcVar1)(plVar3,1);.
TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.)F180055270U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055270() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055270", "FUN_180055270");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();.
    // TODO: resolve the indirect call in body 20: (*pcVar1)(plVar3,1);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: c300f5b4cb96a4e2d13192a046b5ef6f627b96643095e13ee08d9ffd76dc4849
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055270(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                if (trace.condition("if (DAT_1803fa668 != (longlong *)0x0)")) {
                    trace.statement("cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();");
                    if (trace.condition("if (cVar2 != '\\0')")) {
                        trace.statement("(*pcVar1)(plVar3,1);");
                        trace.statement("return 1;");
                    }
                }
                trace.statement("(*pcVar1)(plVar3,0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055270;
}

// 0x1800552f0 FUN_1800552f0
// source: re/dump/decompile/0x1800552f0_FUN_1800552f0.c
// size: 126 bytes; thunk: false
// body sha256: 8138e1655f8ae94315702a17f426ad9f65a6d72bb3427e9001267d0e6ebdb9a3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800552f0{
    "0x1800552f0",
    "FUN_1800552f0",
    R"F1800552f0S(undefined FUN_1800552f0())F1800552f0S",
    R"B1800552f0(// 0x1800552f0  FUN_1800552f0
// size=126 thunk=false
// signature: undefined FUN_1800552f0()
// status: ok


undefined8 FUN_1800552f0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    if (DAT_1803fa668 != (longlong *)0x0) {
      cVar2 = (**(code **)(*DAT_1803fa668 + 0xd8))();
      if (cVar2 != '\0') {
        (*pcVar1)(plVar3,1);
        return 1;
      }
    }
    (*pcVar1)(plVar3,0);
    return 1;
  }
  return 0;
}


)B1800552f0",
    "8138e1655f8ae94315702a17f426ad9f65a6d72bb3427e9001267d0e6ebdb9a3",
    R"F1800552f0C(FUN_180039770)F1800552f0C",
    R"F1800552f0D(DAT_1803fa668)F1800552f0D",
    R"F1800552f0T()F1800552f0T",
    R"F1800552f0F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
17: if (DAT_1803fa668 != (longlong *)0x0) {
19: if (cVar2 != '\0') {
21: return 1;
25: return 1;
27: return 0;)F1800552f0F",
    R"F1800552f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*DAT_1803fa668 + 0xd8))();.
TODO: resolve the indirect call in body 20: (*pcVar1)(plVar3,1);.
TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.)F1800552f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800552f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800552f0", "FUN_1800552f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*DAT_1803fa668 + 0xd8))();.
    // TODO: resolve the indirect call in body 20: (*pcVar1)(plVar3,1);.
    // TODO: resolve the indirect call in body 24: (*pcVar1)(plVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 8138e1655f8ae94315702a17f426ad9f65a6d72bb3427e9001267d0e6ebdb9a3
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800552f0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                if (trace.condition("if (DAT_1803fa668 != (longlong *)0x0)")) {
                    trace.statement("cVar2 = (**(code **)(*DAT_1803fa668 + 0xd8))();");
                    if (trace.condition("if (cVar2 != '\\0')")) {
                        trace.statement("(*pcVar1)(plVar3,1);");
                        trace.statement("return 1;");
                    }
                }
                trace.statement("(*pcVar1)(plVar3,0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800552f0;
}

// 0x180055370 FUN_180055370
// source: re/dump/decompile/0x180055370_FUN_180055370.c
// size: 140 bytes; thunk: false
// body sha256: dcdc001fc96ef5e27645cdf1d7fc54374ee4ddf5c69f7cea37727dd912cd349e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055370{
    "0x180055370",
    "FUN_180055370",
    R"F180055370S(undefined FUN_180055370())F180055370S",
    R"B180055370(// 0x180055370  FUN_180055370
// size=140 thunk=false
// signature: undefined FUN_180055370()
// status: ok


undefined8 FUN_180055370(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    puVar2 = (undefined1 *)(**(code **)(*DAT_1803fa668 + 0x118))();
    puVar3 = &DAT_18033e5ea;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);
    return 1;
  }
  return 0;
}


)B180055370",
    "dcdc001fc96ef5e27645cdf1d7fc54374ee4ddf5c69f7cea37727dd912cd349e",
    R"F180055370C(FUN_180039770)F180055370C",
    R"F180055370D(DAT_18033e5ea
DAT_1803fa668)F180055370D",
    R"F180055370T()F180055370T",
    R"F180055370F(15: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
16: if (DAT_1803fa668 == (longlong *)0x0) {
18: return 1;
22: if (puVar2 != (undefined1 *)0x0) {
26: return 1;
28: return 0;)F180055370F",
    R"F180055370U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 20: puVar2 = (undefined1 *)(**(code **)(*DAT_1803fa668 + 0x118))();.
TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);.)F180055370U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055370() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055370", "FUN_180055370");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 17: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 20: puVar2 = (undefined1 *)(**(code **)(*DAT_1803fa668 + 0x118))();.
    // TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: dcdc001fc96ef5e27645cdf1d7fc54374ee4ddf5c69f7cea37727dd912cd349e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055370(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 *puVar3;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa668 == (longlong *)0x0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("puVar2 = (undefined1 *)(**(code **)(*DAT_1803fa668 + 0x118))();");
                trace.statement("puVar3 = &DAT_18033e5ea;");
                if (trace.condition("if (puVar2 != (undefined1 *)0x0)")) {
                    trace.statement("puVar3 = puVar2;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055370;
}

// 0x180055400 FUN_180055400
// source: re/dump/decompile/0x180055400_FUN_180055400.c
// size: 119 bytes; thunk: false
// body sha256: e92fdab26f1c5e843df4f2c2c6aef270427b1dd75d342af347bf41088d375d4b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055400{
    "0x180055400",
    "FUN_180055400",
    R"F180055400S(undefined FUN_180055400())F180055400S",
    R"B180055400(// 0x180055400  FUN_180055400
// size=119 thunk=false
// signature: undefined FUN_180055400()
// status: ok


undefined8 FUN_180055400(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    lVar1 = *plVar2;
    if (DAT_1803fa668 == (longlong *)0x0) {
      (**(code **)(lVar1 + 0xe0))(plVar2);
      return 1;
    }
    uVar3 = (**(code **)(*DAT_1803fa668 + 0x70))();
    (**(code **)(lVar1 + 0xf0))(plVar2,uVar3);
    return 1;
  }
  return 0;
}


)B180055400",
    "e92fdab26f1c5e843df4f2c2c6aef270427b1dd75d342af347bf41088d375d4b",
    R"F180055400C(FUN_180039770)F180055400C",
    R"F180055400D(DAT_1803fa668)F180055400D",
    R"F180055400T()F180055400T",
    R"F180055400F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
17: if (DAT_1803fa668 == (longlong *)0x0) {
19: return 1;
23: return 1;
25: return 0;)F180055400F",
    R"F180055400U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 18: (**(code **)(lVar1 + 0xe0))(plVar2);.
TODO: resolve the indirect call in body 21: uVar3 = (**(code **)(*DAT_1803fa668 + 0x70))();.
TODO: resolve the indirect call in body 22: (**(code **)(lVar1 + 0xf0))(plVar2,uVar3);.)F180055400U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055400() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055400", "FUN_180055400");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 18: (**(code **)(lVar1 + 0xe0))(plVar2);.
    // TODO: resolve the indirect call in body 21: uVar3 = (**(code **)(*DAT_1803fa668 + 0x70))();.
    // TODO: resolve the indirect call in body 22: (**(code **)(lVar1 + 0xf0))(plVar2,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: e92fdab26f1c5e843df4f2c2c6aef270427b1dd75d342af347bf41088d375d4b
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055400(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined4 uVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("lVar1 = *plVar2;");
                if (trace.condition("if (DAT_1803fa668 == (longlong *)0x0)")) {
                    trace.statement("(**(code **)(lVar1 + 0xe0))(plVar2);");
                    trace.statement("return 1;");
                }
                trace.statement("uVar3 = (**(code **)(*DAT_1803fa668 + 0x70))();");
                trace.statement("(**(code **)(lVar1 + 0xf0))(plVar2,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055400;
}

// 0x180055480 FUN_180055480
// source: re/dump/decompile/0x180055480_FUN_180055480.c
// size: 119 bytes; thunk: false
// body sha256: 25cd2afa74d71fc940390646dbe50c3542da08990aa69003d889498ab6ad07ed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055480{
    "0x180055480",
    "FUN_180055480",
    R"F180055480S(undefined FUN_180055480())F180055480S",
    R"B180055480(// 0x180055480  FUN_180055480
// size=119 thunk=false
// signature: undefined FUN_180055480()
// status: ok


undefined8 FUN_180055480(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    lVar1 = *plVar2;
    if (DAT_1803fa668 == (longlong *)0x0) {
      (**(code **)(lVar1 + 0xe0))(plVar2);
      return 1;
    }
    uVar3 = (**(code **)(*DAT_1803fa668 + 0x78))();
    (**(code **)(lVar1 + 0xf0))(plVar2,uVar3);
    return 1;
  }
  return 0;
}


)B180055480",
    "25cd2afa74d71fc940390646dbe50c3542da08990aa69003d889498ab6ad07ed",
    R"F180055480C(FUN_180039770)F180055480C",
    R"F180055480D(DAT_1803fa668)F180055480D",
    R"F180055480T()F180055480T",
    R"F180055480F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
17: if (DAT_1803fa668 == (longlong *)0x0) {
19: return 1;
23: return 1;
25: return 0;)F180055480F",
    R"F180055480U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 18: (**(code **)(lVar1 + 0xe0))(plVar2);.
TODO: resolve the indirect call in body 21: uVar3 = (**(code **)(*DAT_1803fa668 + 0x78))();.
TODO: resolve the indirect call in body 22: (**(code **)(lVar1 + 0xf0))(plVar2,uVar3);.)F180055480U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055480() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055480", "FUN_180055480");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 18: (**(code **)(lVar1 + 0xe0))(plVar2);.
    // TODO: resolve the indirect call in body 21: uVar3 = (**(code **)(*DAT_1803fa668 + 0x78))();.
    // TODO: resolve the indirect call in body 22: (**(code **)(lVar1 + 0xf0))(plVar2,uVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 25cd2afa74d71fc940390646dbe50c3542da08990aa69003d889498ab6ad07ed
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055480(longlong param_1)");
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined4 uVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("lVar1 = *plVar2;");
                if (trace.condition("if (DAT_1803fa668 == (longlong *)0x0)")) {
                    trace.statement("(**(code **)(lVar1 + 0xe0))(plVar2);");
                    trace.statement("return 1;");
                }
                trace.statement("uVar3 = (**(code **)(*DAT_1803fa668 + 0x78))();");
                trace.statement("(**(code **)(lVar1 + 0xf0))(plVar2,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055480;
}

// 0x180055500 FUN_180055500
// source: re/dump/decompile/0x180055500_FUN_180055500.c
// size: 203 bytes; thunk: false
// body sha256: dab05a0096380bf0397adbd40f1fc433db94b87831d2167f921cf3aa2fdd73bf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055500{
    "0x180055500",
    "FUN_180055500",
    R"F180055500S(undefined FUN_180055500())F180055500S",
    R"B180055500(// 0x180055500  FUN_180055500
// size=203 thunk=false
// signature: undefined FUN_180055500()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180055500(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar5 = 0;
  }
  else {
    if (((DAT_1803fa668 != (longlong *)0x0) &&
        (cVar2 = FUN_180053dc0(plVar4,1,local_28), cVar2 != '\0')) &&
       (cVar2 = FUN_180053dc0(plVar4,4,local_38), cVar2 != '\0')) {
      pcVar1 = *(code **)(*plVar4 + 0xf8);
      iVar3 = (**(code **)(*DAT_1803fa668 + 0xf8))(DAT_1803fa668,local_28,local_38);
      (*pcVar1)(plVar4,iVar3 != 0);
      return 1;
    }
    (**(code **)(*plVar4 + 0xe0))(plVar4);
    uVar5 = 1;
  }
  return uVar5;
}


)B180055500",
    "dab05a0096380bf0397adbd40f1fc433db94b87831d2167f921cf3aa2fdd73bf",
    R"F180055500C(FUN_180039770
FUN_180053dc0)F180055500C",
    R"F180055500D(DAT_1803da4c0
DAT_1803fa668)F180055500D",
    R"F180055500T()F180055500T",
    R"F180055500F(24: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
27: else {
28: if (((DAT_1803fa668 != (longlong *)0x0) &&
34: return 1;
39: return uVar5;)F180055500F",
    R"F180055500U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 32: iVar3 = (**(code **)(*DAT_1803fa668 + 0xf8))(DAT_1803fa668,local_28,local_38);.
TODO: resolve the indirect call in body 33: (*pcVar1)(plVar4,iVar3 != 0);.
TODO: resolve the indirect call in body 36: (**(code **)(*plVar4 + 0xe0))(plVar4);.)F180055500U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055500() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055500", "FUN_180055500");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 32: iVar3 = (**(code **)(*DAT_1803fa668 + 0xf8))(DAT_1803fa668,local_28,local_38);.
    // TODO: resolve the indirect call in body 33: (*pcVar1)(plVar4,iVar3 != 0);.
    // TODO: resolve the indirect call in body 36: (**(code **)(*plVar4 + 0xe0))(plVar4);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180053dc0", reinterpret_cast<const void*>(&image::FUN_180053dc0));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: dab05a0096380bf0397adbd40f1fc433db94b87831d2167f921cf3aa2fdd73bf
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055500(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("undefined1 auStack_58 [32];");
            trace.statement("undefined1 local_38 [16];");
            trace.statement("undefined1 local_28 [16];");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1))")) {
                trace.statement("uVar5 = 0;");
            } else {
            if (trace.condition("if (((DAT_1803fa668 != (longlong *)0x0) && (cVar2 = FUN_180053dc0(plVar4,1,local_28), cVar2 != '\\0')) && (cVar2 = FUN_180053dc0(plVar4,4,local_38), cVar2 != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                trace.statement("iVar3 = (**(code **)(*DAT_1803fa668 + 0xf8))(DAT_1803fa668,local_28,local_38);");
                trace.statement("(*pcVar1)(plVar4,iVar3 != 0);");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar4 + 0xe0))(plVar4);");
            trace.statement("uVar5 = 1;");
            }
            trace.statement("return uVar5;");
        }
    return kFunction_0x180055500;
}

// 0x1800555d0 FUN_1800555d0
// source: re/dump/decompile/0x1800555d0_FUN_1800555d0.c
// size: 203 bytes; thunk: false
// body sha256: 2750a5139fd07d5cb5e7258ddfbf35c38b197a447f52dcb9f9b1e118ac0ae813
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800555d0{
    "0x1800555d0",
    "FUN_1800555d0",
    R"F1800555d0S(undefined FUN_1800555d0())F1800555d0S",
    R"B1800555d0(// 0x1800555d0  FUN_1800555d0
// size=203 thunk=false
// signature: undefined FUN_1800555d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800555d0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar5 = 0;
  }
  else {
    if (((DAT_1803fa668 != (longlong *)0x0) &&
        (cVar2 = FUN_180053dc0(plVar4,1,local_28), cVar2 != '\0')) &&
       (cVar2 = FUN_180053dc0(plVar4,4,local_38), cVar2 != '\0')) {
      pcVar1 = *(code **)(*plVar4 + 0xf8);
      iVar3 = (**(code **)(*DAT_1803fa668 + 0x100))(DAT_1803fa668,local_28,local_38);
      (*pcVar1)(plVar4,iVar3 != 0);
      return 1;
    }
    (**(code **)(*plVar4 + 0xe0))(plVar4);
    uVar5 = 1;
  }
  return uVar5;
}


)B1800555d0",
    "2750a5139fd07d5cb5e7258ddfbf35c38b197a447f52dcb9f9b1e118ac0ae813",
    R"F1800555d0C(FUN_180039770
FUN_180053dc0)F1800555d0C",
    R"F1800555d0D(DAT_1803da4c0
DAT_1803fa668)F1800555d0D",
    R"F1800555d0T()F1800555d0T",
    R"F1800555d0F(24: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
27: else {
28: if (((DAT_1803fa668 != (longlong *)0x0) &&
34: return 1;
39: return uVar5;)F1800555d0F",
    R"F1800555d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 32: iVar3 = (**(code **)(*DAT_1803fa668 + 0x100))(DAT_1803fa668,local_28,local_38);.
TODO: resolve the indirect call in body 33: (*pcVar1)(plVar4,iVar3 != 0);.
TODO: resolve the indirect call in body 36: (**(code **)(*plVar4 + 0xe0))(plVar4);.)F1800555d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800555d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800555d0", "FUN_1800555d0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 32: iVar3 = (**(code **)(*DAT_1803fa668 + 0x100))(DAT_1803fa668,local_28,local_38);.
    // TODO: resolve the indirect call in body 33: (*pcVar1)(plVar4,iVar3 != 0);.
    // TODO: resolve the indirect call in body 36: (**(code **)(*plVar4 + 0xe0))(plVar4);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180053dc0", reinterpret_cast<const void*>(&image::FUN_180053dc0));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 2750a5139fd07d5cb5e7258ddfbf35c38b197a447f52dcb9f9b1e118ac0ae813
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800555d0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("undefined1 auStack_58 [32];");
            trace.statement("undefined1 local_38 [16];");
            trace.statement("undefined1 local_28 [16];");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1))")) {
                trace.statement("uVar5 = 0;");
            } else {
            if (trace.condition("if (((DAT_1803fa668 != (longlong *)0x0) && (cVar2 = FUN_180053dc0(plVar4,1,local_28), cVar2 != '\\0')) && (cVar2 = FUN_180053dc0(plVar4,4,local_38), cVar2 != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                trace.statement("iVar3 = (**(code **)(*DAT_1803fa668 + 0x100))(DAT_1803fa668,local_28,local_38);");
                trace.statement("(*pcVar1)(plVar4,iVar3 != 0);");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar4 + 0xe0))(plVar4);");
            trace.statement("uVar5 = 1;");
            }
            trace.statement("return uVar5;");
        }
    return kFunction_0x1800555d0;
}

// 0x1800556a0 FUN_1800556a0
// source: re/dump/decompile/0x1800556a0_FUN_1800556a0.c
// size: 201 bytes; thunk: false
// body sha256: d9f9ab00160ceefeb7ca6eb8caae3b88f3a67e502305a7815a7bf03c5fc619ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800556a0{
    "0x1800556a0",
    "FUN_1800556a0",
    R"F1800556a0S(undefined FUN_1800556a0())F1800556a0S",
    R"B1800556a0(// 0x1800556a0  FUN_1800556a0
// size=201 thunk=false
// signature: undefined FUN_1800556a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800556a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar5 = 0;
  }
  else {
    if (((DAT_1803fa668 != (longlong *)0x0) &&
        (cVar2 = FUN_180053dc0(plVar4,1,local_28), cVar2 != '\0')) &&
       (cVar2 = FUN_180053dc0(plVar4,4,local_38), cVar2 != '\0')) {
      pcVar1 = *(code **)(*plVar4 + 0xf8);
      uVar3 = (**(code **)(*DAT_1803fa668 + 0x228))(DAT_1803fa668,local_28,local_38);
      (*pcVar1)(plVar4,uVar3);
      return 1;
    }
    (**(code **)(*plVar4 + 0xe0))(plVar4);
    uVar5 = 1;
  }
  return uVar5;
}


)B1800556a0",
    "d9f9ab00160ceefeb7ca6eb8caae3b88f3a67e502305a7815a7bf03c5fc619ec",
    R"F1800556a0C(FUN_180039770
FUN_180053dc0)F1800556a0C",
    R"F1800556a0D(DAT_1803da4c0
DAT_1803fa668)F1800556a0D",
    R"F1800556a0T()F1800556a0T",
    R"F1800556a0F(24: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
27: else {
28: if (((DAT_1803fa668 != (longlong *)0x0) &&
34: return 1;
39: return uVar5;)F1800556a0F",
    R"F1800556a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 32: uVar3 = (**(code **)(*DAT_1803fa668 + 0x228))(DAT_1803fa668,local_28,local_38);.
TODO: resolve the indirect call in body 33: (*pcVar1)(plVar4,uVar3);.
TODO: resolve the indirect call in body 36: (**(code **)(*plVar4 + 0xe0))(plVar4);.)F1800556a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800556a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800556a0", "FUN_1800556a0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 32: uVar3 = (**(code **)(*DAT_1803fa668 + 0x228))(DAT_1803fa668,local_28,local_38);.
    // TODO: resolve the indirect call in body 33: (*pcVar1)(plVar4,uVar3);.
    // TODO: resolve the indirect call in body 36: (**(code **)(*plVar4 + 0xe0))(plVar4);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180053dc0", reinterpret_cast<const void*>(&image::FUN_180053dc0));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: d9f9ab00160ceefeb7ca6eb8caae3b88f3a67e502305a7815a7bf03c5fc619ec
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800556a0(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("undefined1 auStack_58 [32];");
            trace.statement("undefined1 local_38 [16];");
            trace.statement("undefined1 local_28 [16];");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1))")) {
                trace.statement("uVar5 = 0;");
            } else {
            if (trace.condition("if (((DAT_1803fa668 != (longlong *)0x0) && (cVar2 = FUN_180053dc0(plVar4,1,local_28), cVar2 != '\\0')) && (cVar2 = FUN_180053dc0(plVar4,4,local_38), cVar2 != '\\0'))")) {
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                trace.statement("uVar3 = (**(code **)(*DAT_1803fa668 + 0x228))(DAT_1803fa668,local_28,local_38);");
                trace.statement("(*pcVar1)(plVar4,uVar3);");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar4 + 0xe0))(plVar4);");
            trace.statement("uVar5 = 1;");
            }
            trace.statement("return uVar5;");
        }
    return kFunction_0x1800556a0;
}

// 0x180055770 FUN_180055770
// source: re/dump/decompile/0x180055770_FUN_180055770.c
// size: 189 bytes; thunk: false
// body sha256: ca71d3170d94215ce6c319f55fd238f9ed11f3b4edd089470ff219ea977151f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055770{
    "0x180055770",
    "FUN_180055770",
    R"F180055770S(undefined FUN_180055770())F180055770S",
    R"B180055770(// 0x180055770  FUN_180055770
// size=189 thunk=false
// signature: undefined FUN_180055770()
// status: ok


undefined8 FUN_180055770(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
  if (cVar2 != '\0') {
    lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
    if ((lVar5 != 0) && (DAT_1803fa668 != 0)) {
      pcVar1 = *(code **)(*plVar4 + 0xf8);
      uVar3 = FUN_180053ec0(lVar5);
      (*pcVar1)(plVar4,uVar3);
      return 1;
    }
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


)B180055770",
    "ca71d3170d94215ce6c319f55fd238f9ed11f3b4edd089470ff219ea977151f7",
    R"F180055770C(FUN_180039770
FUN_180053ec0)F180055770C",
    R"F180055770D(DAT_1803fa668)F180055770D",
    R"F180055770T()F180055770T",
    R"F180055770F(17: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
18: return 0;
21: if (cVar2 != '\0') {
23: if ((lVar5 != 0) && (DAT_1803fa668 != 0)) {
27: return 1;
31: return 1;)F180055770F",
    R"F180055770U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
TODO: resolve the indirect call in body 22: lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 26: (*pcVar1)(plVar4,uVar3);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar4 + 0xf8))(plVar4,0);.)F180055770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055770() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055770", "FUN_180055770");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 20: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);.
    // TODO: resolve the indirect call in body 22: lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);.
    // TODO: resolve the indirect call in body 24: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 26: (*pcVar1)(plVar4,uVar3);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar4 + 0xf8))(plVar4,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_180053ec0", reinterpret_cast<const void*>(&image::FUN_180053ec0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: ca71d3170d94215ce6c319f55fd238f9ed11f3b4edd089470ff219ea977151f7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055770(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("longlong lVar5;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);");
            if (trace.condition("if (cVar2 != '\\0')")) {
                trace.statement("lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);");
                if (trace.condition("if ((lVar5 != 0) && (DAT_1803fa668 != 0))")) {
                    trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                    trace.statement("uVar3 = FUN_180053ec0(lVar5);");
                    trace.statement("(*pcVar1)(plVar4,uVar3);");
                    trace.statement("return 1;");
                }
            }
            trace.statement("(**(code **)(*plVar4 + 0xf8))(plVar4,0);");
            trace.statement("return 1;");
        }
    return kFunction_0x180055770;
}

// 0x180055830 FUN_180055830
// source: re/dump/decompile/0x180055830_FUN_180055830.c
// size: 188 bytes; thunk: false
// body sha256: 4baa0364ac3fb300f23496cbd76f6aade46a07c219b1aeebf50df744146e6907
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055830{
    "0x180055830",
    "FUN_180055830",
    R"F180055830S(undefined FUN_180055830())F180055830S",
    R"B180055830(// 0x180055830  FUN_180055830
// size=188 thunk=false
// signature: undefined FUN_180055830()
// status: ok


undefined8 FUN_180055830(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    if (DAT_1803fa618 == (HWND)0x0) {
      (**(code **)(*plVar4 + 0xf8))(plVar4,0);
      return 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
    }
    else {
      cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);
    }
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    BVar3 = SetWindowDisplayAffinity(DAT_1803fa618,-(uint)(cVar2 != '\0') & 0x11);
    (*pcVar1)(plVar4,BVar3 != 0);
    return 1;
  }
  return 0;
}


)B180055830",
    "4baa0364ac3fb300f23496cbd76f6aade46a07c219b1aeebf50df744146e6907",
    R"F180055830C(FUN_180039770)F180055830C",
    R"F180055830D(DAT_1803fa618)F180055830D",
    R"F180055830T()F180055830T",
    R"F180055830F(16: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
17: if (DAT_1803fa618 == (HWND)0x0) {
19: return 1;
22: if (cVar2 == '\0') {
25: else {
31: return 1;
33: return 0;)F180055830F",
    R"F180055830U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa618.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar4 + 0xf8))(plVar4,0);.
TODO: resolve the indirect call in body 21: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
TODO: resolve the indirect call in body 26: cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);.
TODO: resolve the indirect call in body 28: pcVar1 = *(code **)(*plVar4 + 0xf8);.
TODO: resolve the indirect call in body 30: (*pcVar1)(plVar4,BVar3 != 0);.)F180055830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055830() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055830", "FUN_180055830");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa618.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar4 + 0xf8))(plVar4,0);.
    // TODO: resolve the indirect call in body 21: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
    // TODO: resolve the indirect call in body 26: cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);.
    // TODO: resolve the indirect call in body 28: pcVar1 = *(code **)(*plVar4 + 0xf8);.
    // TODO: resolve the indirect call in body 30: (*pcVar1)(plVar4,BVar3 != 0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa618", static_cast<const void*>(&image::DAT_1803fa618));
    // body sha256: 4baa0364ac3fb300f23496cbd76f6aade46a07c219b1aeebf50df744146e6907
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055830(longlong param_1)");
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("BOOL BVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa618 == (HWND)0x0)")) {
                    trace.statement("(**(code **)(*plVar4 + 0xf8))(plVar4,0);");
                    trace.statement("return 1;");
                }
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);");
                if (trace.condition("if (cVar2 == '\\0')")) {
                    trace.statement("cVar2 = '\\x01';");
                } else {
                trace.statement("cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);");
                }
                trace.statement("pcVar1 = *(code **)(*plVar4 + 0xf8);");
                trace.statement("BVar3 = SetWindowDisplayAffinity(DAT_1803fa618,-(uint)(cVar2 != '\\0') & 0x11);");
                trace.statement("(*pcVar1)(plVar4,BVar3 != 0);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055830;
}

// 0x1800558f0 FUN_1800558f0
// source: re/dump/decompile/0x1800558f0_FUN_1800558f0.c
// size: 545 bytes; thunk: false
// body sha256: 0338c955bc19e47cbc6789bfa60233039ca924ec06cd5bbefed7072a58f34a20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800558f0{
    "0x1800558f0",
    "FUN_1800558f0",
    R"F1800558f0S(undefined FUN_1800558f0())F1800558f0S",
    R"B1800558f0(// 0x1800558f0  FUN_1800558f0
// size=545 thunk=false
// signature: undefined FUN_1800558f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800558f0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  TypeDescriptor *pTVar12;
  ulonglong uVar13;
  byte *pbVar14;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong local_50 [7];
  TypeDescriptor *pTStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    uVar7 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
    }
    else {
      cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);
    }
    pbVar14 = &DAT_180343f44;
    uVar13 = 0x14650fb0739d0383;
    uVar8 = 0x14650fb0739d0383;
    do {
      if (*pbVar14 == 0) break;
      uVar8 = (uVar8 ^ *pbVar14) * 0x100000001b3;
      pbVar14 = pbVar14 + 1;
    } while (pbVar14 != (byte *)0x0);
    plVar5 = (longlong *)DAT_1803fadf0[1];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    plVar6 = DAT_1803fadf0;
    while (cVar1 == '\0') {
      plVar11 = plVar5;
      if ((ulonglong)plVar5[4] < uVar8) {
        plVar5 = plVar5 + 2;
        plVar11 = plVar6;
      }
      plVar5 = (longlong *)*plVar5;
      plVar6 = plVar11;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar8 < (ulonglong)plVar6[4])) {
      plVar6 = DAT_1803fadf0;
    }
    if ((plVar6 != DAT_1803fadf0) && (plVar6 + 5 != (longlong *)0x0)) {
      pcVar9 = "no_interp";
      do {
        if (*pcVar9 == 0) break;
        uVar13 = (uVar13 ^ (byte)*pcVar9) * 0x100000001b3;
        pcVar9 = pcVar9 + 1;
      } while ((byte *)pcVar9 != (byte *)0x0);
      plVar5 = (longlong *)plVar6[5];
      plVar6 = (longlong *)plVar5[1];
      cVar1 = *(char *)((longlong)plVar6 + 0x19);
      plVar11 = plVar5;
      while (cVar1 == '\0') {
        plVar10 = plVar6;
        if ((ulonglong)plVar6[4] < uVar13) {
          plVar6 = plVar6 + 2;
          plVar10 = plVar11;
        }
        plVar6 = (longlong *)*plVar6;
        plVar11 = plVar10;
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
      }
      if ((*(char *)((longlong)plVar11 + 0x19) != '\0') || (uVar13 < (ulonglong)plVar11[4])) {
        plVar11 = plVar5;
      }
      plVar6 = (longlong *)0x0;
      if (plVar11 != plVar5) {
        plVar6 = plVar11 + 5;
      }
      if (plVar6 != (longlong *)0x0) {
        pTVar12 = &.X::RTTI_Type_Descriptor;
        if ((TypeDescriptor *)(plVar6[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
          pTVar12 = (TypeDescriptor *)(plVar6[9] & 0xfffffffffffffffcU);
        }
        iVar3 = __std_type_info_compare(&pTVar12->spare,0x1803eddb8);
        if (iVar3 == 0) {
          local_58 = local_50;
          local_50[1] = 0;
          local_50[2] = 0;
          local_50[3] = 0;
          local_50[4] = 0;
          local_50[5] = 0;
          local_50[6] = 0;
          local_50[0] = (ulonglong)(cVar2 == '\0');
          pTStack_18 = &._N::RTTI_Type_Descriptor;
          FUN_180014200(plVar6 + 2,local_50);
        }
        (**(code **)(*plVar4 + 0xf8))(plVar4,1);
        return 1;
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    uVar7 = 1;
  }
  return uVar7;
}


)B1800558f0",
    "0338c955bc19e47cbc6789bfa60233039ca924ec06cd5bbefed7072a58f34a20",
    R"F1800558f0C(FUN_180014200
FUN_180039770)F1800558f0C",
    R"F1800558f0D(DAT_180343f44
DAT_1803da4c0
DAT_1803fadf0)F1800558f0D",
    R"F1800558f0T("no_interp")F1800558f0T",
    R"F1800558f0F(34: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
37: else {
39: if (cVar2 == '\0') {
42: else {
48: do {
49: if (*pbVar14 == 0) break;
56: while (cVar1 == '\0') {
58: if ((ulonglong)plVar5[4] < uVar8) {
66: if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar8 < (ulonglong)plVar6[4])) {
69: if ((plVar6 != DAT_1803fadf0) && (plVar6 + 5 != (longlong *)0x0)) {
71: do {
72: if (*pcVar9 == 0) break;
80: while (cVar1 == '\0') {
82: if ((ulonglong)plVar6[4] < uVar13) {
90: if ((*(char *)((longlong)plVar11 + 0x19) != '\0') || (uVar13 < (ulonglong)plVar11[4])) {
94: if (plVar11 != plVar5) {
97: if (plVar6 != (longlong *)0x0) {
99: if ((TypeDescriptor *)(plVar6[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
103: if (iVar3 == 0) {
116: return 1;
122: return uVar7;)F1800558f0F",
    R"F1800558f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343f44.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fadf0.
TODO: resolve the indirect call in body 38: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
TODO: resolve the indirect call in body 43: cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);.
TODO: resolve the indirect call in body 115: (**(code **)(*plVar4 + 0xf8))(plVar4,1);.
TODO: resolve the indirect call in body 119: (**(code **)(*plVar4 + 0xf8))(plVar4,0);.)F1800558f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800558f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800558f0", "FUN_1800558f0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343f44.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fadf0.
    // TODO: resolve the indirect call in body 38: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
    // TODO: resolve the indirect call in body 43: cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);.
    // TODO: resolve the indirect call in body 115: (**(code **)(*plVar4 + 0xf8))(plVar4,1);.
    // TODO: resolve the indirect call in body 119: (**(code **)(*plVar4 + 0xf8))(plVar4,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014200", reinterpret_cast<const void*>(&image::FUN_180014200));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_180343f44", static_cast<const void*>(&image::DAT_180343f44));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fadf0", static_cast<const void*>(&image::DAT_1803fadf0));
    trace.string_literal("no_interp");
    // body sha256: 0338c955bc19e47cbc6789bfa60233039ca924ec06cd5bbefed7072a58f34a20
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800558f0(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("char cVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("longlong *plVar6;");
            trace.statement("undefined8 uVar7;");
            trace.statement("ulonglong uVar8;");
            trace.statement("char *pcVar9;");
            trace.statement("longlong *plVar10;");
            trace.statement("longlong *plVar11;");
            trace.statement("TypeDescriptor *pTVar12;");
            trace.statement("ulonglong uVar13;");
            trace.statement("byte *pbVar14;");
            trace.statement("undefined1 auStack_78 [32];");
            trace.statement("ulonglong *local_58;");
            trace.statement("ulonglong local_50 [7];");
            trace.statement("TypeDescriptor *pTStack_18;");
            trace.statement("ulonglong local_10;");
            trace.statement("local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2))")) {
                trace.statement("uVar7 = 0;");
            } else {
            trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);");
            if (trace.condition("if (cVar2 == '\\0')")) {
                trace.statement("cVar2 = '\\x01';");
            } else {
            trace.statement("cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);");
            }
            trace.statement("pbVar14 = &DAT_180343f44;");
            trace.statement("uVar13 = 0x14650fb0739d0383;");
            trace.statement("uVar8 = 0x14650fb0739d0383;");
            do {
                if (trace.condition("if (*pbVar14 == 0) break; uVar8 = (uVar8 ^ *pbVar14) * 0x100000001b3; pbVar14 = pbVar14 + 1; } while (pbVar14 != (byte *)0x0); plVar5 = (longlong *)DAT_1803fadf0[1]; cVar1 = *(char *)((longlong)plVar5 + 0x19); plVar6 = DAT_1803fadf0; while (cVar1 == '\\0')")) {
                    trace.statement("plVar11 = plVar5;");
                    if (trace.condition("if ((ulonglong)plVar5[4] < uVar8)")) {
                        trace.statement("plVar5 = plVar5 + 2;");
                        trace.statement("plVar11 = plVar6;");
                    }
                    trace.statement("plVar5 = (longlong *)*plVar5;");
                    trace.statement("plVar6 = plVar11;");
                    trace.statement("cVar1 = *(char *)((longlong)plVar5 + 0x19);");
                }
                if (trace.condition("if ((*(char *)((longlong)plVar6 + 0x19) != '\\0') || (uVar8 < (ulonglong)plVar6[4]))")) {
                    trace.statement("plVar6 = DAT_1803fadf0;");
                }
                if (trace.condition("if ((plVar6 != DAT_1803fadf0) && (plVar6 + 5 != (longlong *)0x0))")) {
                    trace.statement("pcVar9 = \"no_interp\";");
                    do {
                        if (trace.condition("if (*pcVar9 == 0) break; uVar13 = (uVar13 ^ (byte)*pcVar9) * 0x100000001b3; pcVar9 = pcVar9 + 1; } while ((byte *)pcVar9 != (byte *)0x0); plVar5 = (longlong *)plVar6[5]; plVar6 = (longlong *)plVar5[1]; cVar1 = *(char *)((longlong)plVar6 + 0x19); plVar11 = plVar5; while (cVar1 == '\\0')")) {
                            trace.statement("plVar10 = plVar6;");
                            if (trace.condition("if ((ulonglong)plVar6[4] < uVar13)")) {
                                trace.statement("plVar6 = plVar6 + 2;");
                                trace.statement("plVar10 = plVar11;");
                            }
                            trace.statement("plVar6 = (longlong *)*plVar6;");
                            trace.statement("plVar11 = plVar10;");
                            trace.statement("cVar1 = *(char *)((longlong)plVar6 + 0x19);");
                        }
                        if (trace.condition("if ((*(char *)((longlong)plVar11 + 0x19) != '\\0') || (uVar13 < (ulonglong)plVar11[4]))")) {
                            trace.statement("plVar11 = plVar5;");
                        }
                        trace.statement("plVar6 = (longlong *)0x0;");
                        if (trace.condition("if (plVar11 != plVar5)")) {
                            trace.statement("plVar6 = plVar11 + 5;");
                        }
                        if (trace.condition("if (plVar6 != (longlong *)0x0)")) {
                            trace.statement("pTVar12 = &.X::RTTI_Type_Descriptor;");
                            if (trace.condition("if ((TypeDescriptor *)(plVar6[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0)")) {
                                trace.statement("pTVar12 = (TypeDescriptor *)(plVar6[9] & 0xfffffffffffffffcU);");
                            }
                            trace.statement("iVar3 = __std_type_info_compare(&pTVar12->spare,0x1803eddb8);");
                            if (trace.condition("if (iVar3 == 0)")) {
                                trace.statement("local_58 = local_50;");
                                trace.statement("local_50[1] = 0;");
                                trace.statement("local_50[2] = 0;");
                                trace.statement("local_50[3] = 0;");
                                trace.statement("local_50[4] = 0;");
                                trace.statement("local_50[5] = 0;");
                                trace.statement("local_50[6] = 0;");
                                trace.statement("local_50[0] = (ulonglong)(cVar2 == '\\0');");
                                trace.statement("pTStack_18 = &._N::RTTI_Type_Descriptor;");
                                trace.statement("FUN_180014200(plVar6 + 2,local_50);");
                            }
                            trace.statement("(**(code **)(*plVar4 + 0xf8))(plVar4,1);");
                            trace.statement("return 1;");
                        }
                    } while (trace.loop_condition("do/while"));
                    trace.statement("(**(code **)(*plVar4 + 0xf8))(plVar4,0);");
                    trace.statement("uVar7 = 1;");
                }
                trace.statement("return uVar7;");
            } while (trace.loop_condition("do/while"));
            }
        }
    return kFunction_0x1800558f0;
}

// 0x180055b30 FUN_180055b30
// source: re/dump/decompile/0x180055b30_FUN_180055b30.c
// size: 439 bytes; thunk: false
// body sha256: cdf902eac656c41d227cb7e75b0f2c4f816994ea19462887f304dd765b7c3cb1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055b30{
    "0x180055b30",
    "FUN_180055b30",
    R"F180055b30S(undefined FUN_180055b30())F180055b30S",
    R"B180055b30(// 0x180055b30  FUN_180055b30
// size=439 thunk=false
// signature: undefined FUN_180055b30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180055b30(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  TypeDescriptor *pTVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar6 = 0;
  }
  else {
    uVar12 = 0x14650fb0739d0383;
    pbVar13 = &DAT_180343f44;
    uVar7 = 0x14650fb0739d0383;
    do {
      if (*pbVar13 == 0) break;
      uVar7 = (uVar7 ^ *pbVar13) * 0x100000001b3;
      pbVar13 = pbVar13 + 1;
    } while (pbVar13 != (byte *)0x0);
    plVar4 = (longlong *)DAT_1803fadf0[1];
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
    plVar5 = DAT_1803fadf0;
    while (cVar1 == '\0') {
      plVar10 = plVar4;
      if ((ulonglong)plVar4[4] < uVar7) {
        plVar4 = plVar4 + 2;
        plVar10 = plVar5;
      }
      plVar4 = (longlong *)*plVar4;
      plVar5 = plVar10;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
    if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar7 < (ulonglong)plVar5[4])) {
      plVar5 = DAT_1803fadf0;
    }
    if ((plVar5 != DAT_1803fadf0) && (plVar5 + 5 != (longlong *)0x0)) {
      pcVar8 = "no_interp";
      do {
        if (*pcVar8 == 0) break;
        uVar12 = (uVar12 ^ (byte)*pcVar8) * 0x100000001b3;
        pcVar8 = pcVar8 + 1;
      } while ((byte *)pcVar8 != (byte *)0x0);
      plVar4 = (longlong *)plVar5[5];
      plVar5 = (longlong *)plVar4[1];
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
      plVar10 = plVar4;
      while (cVar1 == '\0') {
        plVar9 = plVar5;
        if ((ulonglong)plVar5[4] < uVar12) {
          plVar5 = plVar5 + 2;
          plVar9 = plVar10;
        }
        plVar5 = (longlong *)*plVar5;
        plVar10 = plVar9;
        cVar1 = *(char *)((longlong)plVar5 + 0x19);
      }
      if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
        plVar10 = plVar4;
      }
      plVar5 = (longlong *)0x0;
      if (plVar10 != plVar4) {
        plVar5 = plVar10 + 5;
      }
      if (plVar5 != (longlong *)0x0) {
        pTVar11 = &.X::RTTI_Type_Descriptor;
        if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
          pTVar11 = (TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU);
        }
        iVar2 = __std_type_info_compare(&pTVar11->spare,0x1803eddb8);
        if (iVar2 == 0) {
          if (((plVar5 + 2 != (longlong *)0x0) && ((plVar5[9] & 0xfffffffffffffffcU) != 0)) &&
             (iVar2 = __std_type_info_compare((plVar5[9] & 0xfffffffffffffffcU) + 8,0x1803eddb8),
             iVar2 == 0)) {
            (**(code **)(*plVar3 + 0xf8))(plVar3,(char)plVar5[2] == '\0');
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_180014070();
        }
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
    uVar6 = 1;
  }
  return uVar6;
}


)B180055b30",
    "cdf902eac656c41d227cb7e75b0f2c4f816994ea19462887f304dd765b7c3cb1",
    R"F180055b30C(FUN_180014070
FUN_180039770)F180055b30C",
    R"F180055b30D(DAT_180343f44
DAT_1803da4c0
DAT_1803fadf0)F180055b30D",
    R"F180055b30T("no_interp")F180055b30T",
    R"F180055b30F(30: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
33: else {
37: do {
38: if (*pbVar13 == 0) break;
45: while (cVar1 == '\0') {
47: if ((ulonglong)plVar4[4] < uVar7) {
55: if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar7 < (ulonglong)plVar5[4])) {
58: if ((plVar5 != DAT_1803fadf0) && (plVar5 + 5 != (longlong *)0x0)) {
60: do {
61: if (*pcVar8 == 0) break;
69: while (cVar1 == '\0') {
71: if ((ulonglong)plVar5[4] < uVar12) {
79: if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
83: if (plVar10 != plVar4) {
86: if (plVar5 != (longlong *)0x0) {
88: if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
92: if (iVar2 == 0) {
93: if (((plVar5 + 2 != (longlong *)0x0) && ((plVar5[9] & 0xfffffffffffffffcU) != 0)) &&
97: return 1;
107: return uVar6;)F180055b30F",
    R"F180055b30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180343f44.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fadf0.
TODO: resolve the indirect call in body 96: (**(code **)(*plVar3 + 0xf8))(plVar3,(char)plVar5[2] == '\0');.
TODO: resolve the indirect call in body 104: (**(code **)(*plVar3 + 0xe0))(plVar3);.)F180055b30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055b30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055b30", "FUN_180055b30");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180343f44.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fadf0.
    // TODO: resolve the indirect call in body 96: (**(code **)(*plVar3 + 0xf8))(plVar3,(char)plVar5[2] == '\0');.
    // TODO: resolve the indirect call in body 104: (**(code **)(*plVar3 + 0xe0))(plVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180014070", reinterpret_cast<const void*>(&image::FUN_180014070));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_180343f44", static_cast<const void*>(&image::DAT_180343f44));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fadf0", static_cast<const void*>(&image::DAT_1803fadf0));
    trace.string_literal("no_interp");
    // body sha256: cdf902eac656c41d227cb7e75b0f2c4f816994ea19462887f304dd765b7c3cb1
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055b30(undefined8 param_1,longlong param_2)");
        {
            trace.statement("char cVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("undefined8 uVar6;");
            trace.statement("ulonglong uVar7;");
            trace.statement("char *pcVar8;");
            trace.statement("longlong *plVar9;");
            trace.statement("longlong *plVar10;");
            trace.statement("TypeDescriptor *pTVar11;");
            trace.statement("ulonglong uVar12;");
            trace.statement("byte *pbVar13;");
            trace.statement("undefined1 auStack_38 [32];");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("uVar6 = 0;");
            } else {
            trace.statement("uVar12 = 0x14650fb0739d0383;");
            trace.statement("pbVar13 = &DAT_180343f44;");
            trace.statement("uVar7 = 0x14650fb0739d0383;");
            do {
                if (trace.condition("if (*pbVar13 == 0) break; uVar7 = (uVar7 ^ *pbVar13) * 0x100000001b3; pbVar13 = pbVar13 + 1; } while (pbVar13 != (byte *)0x0); plVar4 = (longlong *)DAT_1803fadf0[1]; cVar1 = *(char *)((longlong)plVar4 + 0x19); plVar5 = DAT_1803fadf0; while (cVar1 == '\\0')")) {
                    trace.statement("plVar10 = plVar4;");
                    if (trace.condition("if ((ulonglong)plVar4[4] < uVar7)")) {
                        trace.statement("plVar4 = plVar4 + 2;");
                        trace.statement("plVar10 = plVar5;");
                    }
                    trace.statement("plVar4 = (longlong *)*plVar4;");
                    trace.statement("plVar5 = plVar10;");
                    trace.statement("cVar1 = *(char *)((longlong)plVar4 + 0x19);");
                }
                if (trace.condition("if ((*(char *)((longlong)plVar5 + 0x19) != '\\0') || (uVar7 < (ulonglong)plVar5[4]))")) {
                    trace.statement("plVar5 = DAT_1803fadf0;");
                }
                if (trace.condition("if ((plVar5 != DAT_1803fadf0) && (plVar5 + 5 != (longlong *)0x0))")) {
                    trace.statement("pcVar8 = \"no_interp\";");
                    do {
                        if (trace.condition("if (*pcVar8 == 0) break; uVar12 = (uVar12 ^ (byte)*pcVar8) * 0x100000001b3; pcVar8 = pcVar8 + 1; } while ((byte *)pcVar8 != (byte *)0x0); plVar4 = (longlong *)plVar5[5]; plVar5 = (longlong *)plVar4[1]; cVar1 = *(char *)((longlong)plVar5 + 0x19); plVar10 = plVar4; while (cVar1 == '\\0')")) {
                            trace.statement("plVar9 = plVar5;");
                            if (trace.condition("if ((ulonglong)plVar5[4] < uVar12)")) {
                                trace.statement("plVar5 = plVar5 + 2;");
                                trace.statement("plVar9 = plVar10;");
                            }
                            trace.statement("plVar5 = (longlong *)*plVar5;");
                            trace.statement("plVar10 = plVar9;");
                            trace.statement("cVar1 = *(char *)((longlong)plVar5 + 0x19);");
                        }
                        if (trace.condition("if ((*(char *)((longlong)plVar10 + 0x19) != '\\0') || (uVar12 < (ulonglong)plVar10[4]))")) {
                            trace.statement("plVar10 = plVar4;");
                        }
                        trace.statement("plVar5 = (longlong *)0x0;");
                        if (trace.condition("if (plVar10 != plVar4)")) {
                            trace.statement("plVar5 = plVar10 + 5;");
                        }
                        if (trace.condition("if (plVar5 != (longlong *)0x0)")) {
                            trace.statement("pTVar11 = &.X::RTTI_Type_Descriptor;");
                            if (trace.condition("if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0)")) {
                                trace.statement("pTVar11 = (TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU);");
                            }
                            trace.statement("iVar2 = __std_type_info_compare(&pTVar11->spare,0x1803eddb8);");
                            if (trace.condition("if (iVar2 == 0)")) {
                                if (trace.condition("if (((plVar5 + 2 != (longlong *)0x0) && ((plVar5[9] & 0xfffffffffffffffcU) != 0)) && (iVar2 = __std_type_info_compare((plVar5[9] & 0xfffffffffffffffcU) + 8,0x1803eddb8), iVar2 == 0))")) {
                                    trace.statement("(**(code **)(*plVar3 + 0xf8))(plVar3,(char)plVar5[2] == '\\0');");
                                    trace.statement("return 1;");
                                }
                                trace.statement("FUN_180014070();");
                            }
                        }
                    } while (trace.loop_condition("do/while"));
                    trace.statement("(**(code **)(*plVar3 + 0xe0))(plVar3);");
                    trace.statement("uVar6 = 1;");
                }
                trace.statement("return uVar6;");
            } while (trace.loop_condition("do/while"));
            }
        }
    return kFunction_0x180055b30;
}

// 0x180055d00 FUN_180055d00
// source: re/dump/decompile/0x180055d00_FUN_180055d00.c
// size: 203 bytes; thunk: false
// body sha256: ea879282a57ab8c038bd34a318cd113492c95299ef9aa3b7cbfc9b542a155792
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055d00{
    "0x180055d00",
    "FUN_180055d00",
    R"F180055d00S(undefined FUN_180055d00())F180055d00S",
    R"B180055d00(// 0x180055d00  FUN_180055d00
// size=203 thunk=false
// signature: undefined FUN_180055d00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180055d00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_58 [32];
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    uVar3 = 0;
  }
  else {
    uStack_30 = 0;
    local_28 = _DAT_1803814b0;
    uStack_20 = _UNK_1803814b8;
    local_38 = (undefined8 ***)0x0;
    cVar1 = FUN_1800542b0(&local_38);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xe0))();
      FUN_18020e450(&local_38);
      uVar3 = 1;
    }
    else {
      pppuVar4 = &local_38;
      if (0xf < uStack_20) {
        pppuVar4 = (undefined8 ***)local_38;
      }
      (**(code **)(*plVar2 + 0xe8))(plVar2,pppuVar4,0);
      FUN_18020e450(&local_38);
      uVar3 = 1;
    }
  }
  return uVar3;
}


)B180055d00",
    "ea879282a57ab8c038bd34a318cd113492c95299ef9aa3b7cbfc9b542a155792",
    R"F180055d00C(FUN_180039770
FUN_1800542b0
FUN_18020e450)F180055d00C",
    R"F180055d00D(DAT_1803da4c0)F180055d00D",
    R"F180055d00T()F180055d00T",
    R"F180055d00F(26: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
29: else {
35: if (cVar1 == '\0') {
40: else {
42: if (0xf < uStack_20) {
50: return uVar3;)F180055d00F",
    R"F180055d00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 36: (**(code **)(*plVar2 + 0xe0))();.
TODO: resolve the indirect call in body 45: (**(code **)(*plVar2 + 0xe8))(plVar2,pppuVar4,0);.)F180055d00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055d00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055d00", "FUN_180055d00");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: resolve the indirect call in body 36: (**(code **)(*plVar2 + 0xe0))();.
    // TODO: resolve the indirect call in body 45: (**(code **)(*plVar2 + 0xe8))(plVar2,pppuVar4,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800542b0", reinterpret_cast<const void*>(&image::FUN_1800542b0));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    // body sha256: ea879282a57ab8c038bd34a318cd113492c95299ef9aa3b7cbfc9b542a155792
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055d00(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined8 uVar3;");
            trace.statement("undefined8 ***pppuVar4;");
            trace.statement("undefined1 auStack_58 [32];");
            trace.statement("undefined8 **local_38;");
            trace.statement("undefined8 uStack_30;");
            trace.statement("undefined8 local_28;");
            trace.statement("ulonglong uStack_20;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("uVar3 = 0;");
            } else {
            trace.statement("uStack_30 = 0;");
            trace.statement("local_28 = _DAT_1803814b0;");
            trace.statement("uStack_20 = _UNK_1803814b8;");
            trace.statement("local_38 = (undefined8 ***)0x0;");
            trace.statement("cVar1 = FUN_1800542b0(&local_38);");
            if (trace.condition("if (cVar1 == '\\0')")) {
                trace.statement("(**(code **)(*plVar2 + 0xe0))();");
                trace.statement("FUN_18020e450(&local_38);");
                trace.statement("uVar3 = 1;");
            } else {
            trace.statement("pppuVar4 = &local_38;");
            if (trace.condition("if (0xf < uStack_20)")) {
                trace.statement("pppuVar4 = (undefined8 ***)local_38;");
            }
            trace.statement("(**(code **)(*plVar2 + 0xe8))(plVar2,pppuVar4,0);");
            trace.statement("FUN_18020e450(&local_38);");
            trace.statement("uVar3 = 1;");
            }
            }
            trace.statement("return uVar3;");
        }
    return kFunction_0x180055d00;
}

// 0x180055dd0 FUN_180055dd0
// source: re/dump/decompile/0x180055dd0_FUN_180055dd0.c
// size: 93 bytes; thunk: false
// body sha256: f271ac71dff72631e3895137730774d9da7f54ba98b206d3533929f6b4510386
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055dd0{
    "0x180055dd0",
    "FUN_180055dd0",
    R"F180055dd0S(undefined FUN_180055dd0())F180055dd0S",
    R"B180055dd0(// 0x180055dd0  FUN_180055dd0
// size=93 thunk=false
// signature: undefined FUN_180055dd0()
// status: ok


undefined8 FUN_180055dd0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x10));
    return 1;
  }
  return 0;
}


)B180055dd0",
    "f271ac71dff72631e3895137730774d9da7f54ba98b206d3533929f6b4510386",
    R"F180055dd0C(FUN_180039770)F180055dd0C",
    R"F180055dd0D(DAT_1803fa608)F180055dd0D",
    R"F180055dd0T()F180055dd0T",
    R"F180055dd0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 == 0) {
16: return 1;
19: return 1;
21: return 0;)F180055dd0F",
    R"F180055dd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x10));.)F180055dd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055dd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055dd0", "FUN_180055dd0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x10));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: f271ac71dff72631e3895137730774d9da7f54ba98b206d3533929f6b4510386
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055dd0(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 == 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x10));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055dd0;
}

// 0x180055e30 FUN_180055e30
// source: re/dump/decompile/0x180055e30_FUN_180055e30.c
// size: 112 bytes; thunk: false
// body sha256: 0caecf659111230f7cefb37233f1ac1d63c003f6518c58d62180a69eb282f2d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055e30{
    "0x180055e30",
    "FUN_180055e30",
    R"F180055e30S(undefined FUN_180055e30())F180055e30S",
    R"B180055e30(// 0x180055e30  FUN_180055e30
// size=112 thunk=false
// signature: undefined FUN_180055e30()
// status: ok


undefined8 FUN_180055e30(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(undefined8 *)(DAT_1803fa608 + 0x10) = uVar3;
    }
  }
  return 0;
}


)B180055e30",
    "0caecf659111230f7cefb37233f1ac1d63c003f6518c58d62180a69eb282f2d5",
    R"F180055e30C(FUN_180039770)F180055e30C",
    R"F180055e30D(DAT_1803fa608)F180055e30D",
    R"F180055e30T()F180055e30T",
    R"F180055e30F(15: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
17: if (cVar1 != '\0') {
22: return 0;)F180055e30F",
    R"F180055e30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F180055e30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055e30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055e30", "FUN_180055e30");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 0caecf659111230f7cefb37233f1ac1d63c003f6518c58d62180a69eb282f2d5
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055e30(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined8 uVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("*(undefined8 *)(DAT_1803fa608 + 0x10) = uVar3;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055e30;
}

// 0x180055ea0 FUN_180055ea0
// source: re/dump/decompile/0x180055ea0_FUN_180055ea0.c
// size: 96 bytes; thunk: false
// body sha256: 52235cac1076b063e0b0ce7ee6ad391c862af50071646faa8c03508352491bc7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055ea0{
    "0x180055ea0",
    "FUN_180055ea0",
    R"F180055ea0S(undefined FUN_180055ea0())F180055ea0S",
    R"B180055ea0(// 0x180055ea0  FUN_180055ea0
// size=96 thunk=false
// signature: undefined FUN_180055ea0()
// status: ok


undefined8 FUN_180055ea0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x18));
    return 1;
  }
  return 0;
}


)B180055ea0",
    "52235cac1076b063e0b0ce7ee6ad391c862af50071646faa8c03508352491bc7",
    R"F180055ea0C(FUN_180039770)F180055ea0C",
    R"F180055ea0D(DAT_1803fa608)F180055ea0D",
    R"F180055ea0T()F180055ea0T",
    R"F180055ea0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 == 0) {
16: return 1;
19: return 1;
21: return 0;)F180055ea0F",
    R"F180055ea0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x18));.)F180055ea0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055ea0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055ea0", "FUN_180055ea0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x18));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 52235cac1076b063e0b0ce7ee6ad391c862af50071646faa8c03508352491bc7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055ea0(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 == 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x18));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055ea0;
}

// 0x180055f00 FUN_180055f00
// source: re/dump/decompile/0x180055f00_FUN_180055f00.c
// size: 119 bytes; thunk: false
// body sha256: d469fc427a90c63fef35e747e458e90690c6d6a5ad2d0dd62a95780ec99c4557
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055f00{
    "0x180055f00",
    "FUN_180055f00",
    R"F180055f00S(undefined FUN_180055f00())F180055f00S",
    R"B180055f00(// 0x180055f00  FUN_180055f00
// size=119 thunk=false
// signature: undefined FUN_180055f00()
// status: ok


undefined8 FUN_180055f00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(float *)(DAT_1803fa608 + 0x18) = (float)dVar3;
    }
  }
  return 0;
}


)B180055f00",
    "d469fc427a90c63fef35e747e458e90690c6d6a5ad2d0dd62a95780ec99c4557",
    R"F180055f00C(FUN_180039770)F180055f00C",
    R"F180055f00D(DAT_1803fa608)F180055f00D",
    R"F180055f00T()F180055f00T",
    R"F180055f00F(15: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
17: if (cVar1 != '\0') {
22: return 0;)F180055f00F",
    R"F180055f00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F180055f00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055f00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055f00", "FUN_180055f00");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: d469fc427a90c63fef35e747e458e90690c6d6a5ad2d0dd62a95780ec99c4557
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055f00(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("*(float *)(DAT_1803fa608 + 0x18) = (float)dVar3;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055f00;
}

// 0x180055f80 FUN_180055f80
// source: re/dump/decompile/0x180055f80_FUN_180055f80.c
// size: 95 bytes; thunk: false
// body sha256: cdcce6fd66dfcad13b9946d02b66057fed9ae6ad8ed7001dfd662c98c635608f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055f80{
    "0x180055f80",
    "FUN_180055f80",
    R"F180055f80S(undefined FUN_180055f80())F180055f80S",
    R"B180055f80(// 0x180055f80  FUN_180055f80
// size=95 thunk=false
// signature: undefined FUN_180055f80()
// status: ok


undefined8 FUN_180055f80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == (float *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803fa608);
    return 1;
  }
  return 0;
}


)B180055f80",
    "cdcce6fd66dfcad13b9946d02b66057fed9ae6ad8ed7001dfd662c98c635608f",
    R"F180055f80C(FUN_180039770)F180055f80C",
    R"F180055f80D(DAT_1803fa608)F180055f80D",
    R"F180055f80T()F180055f80T",
    R"F180055f80F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 == (float *)0x0) {
16: return 1;
19: return 1;
21: return 0;)F180055f80F",
    R"F180055f80U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803fa608);.)F180055f80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055f80() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055f80", "FUN_180055f80");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803fa608);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: cdcce6fd66dfcad13b9946d02b66057fed9ae6ad8ed7001dfd662c98c635608f
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055f80(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 == (float *)0x0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803fa608);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055f80;
}

// 0x180055fe0 FUN_180055fe0
// source: re/dump/decompile/0x180055fe0_FUN_180055fe0.c
// size: 118 bytes; thunk: false
// body sha256: 3c1a60de69577512ae30bcc62abc0660c07ac96b00764607bad1ce10a871d105
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180055fe0{
    "0x180055fe0",
    "FUN_180055fe0",
    R"F180055fe0S(undefined FUN_180055fe0())F180055fe0S",
    R"B180055fe0(// 0x180055fe0  FUN_180055fe0
// size=118 thunk=false
// signature: undefined FUN_180055fe0()
// status: ok


undefined8 FUN_180055fe0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != (float *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *DAT_1803fa608 = (float)dVar3;
    }
  }
  return 0;
}


)B180055fe0",
    "3c1a60de69577512ae30bcc62abc0660c07ac96b00764607bad1ce10a871d105",
    R"F180055fe0C(FUN_180039770)F180055fe0C",
    R"F180055fe0D(DAT_1803fa608)F180055fe0D",
    R"F180055fe0T()F180055fe0T",
    R"F180055fe0F(15: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != (float *)0x0)) {
17: if (cVar1 != '\0') {
22: return 0;)F180055fe0F",
    R"F180055fe0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F180055fe0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180055fe0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180055fe0", "FUN_180055fe0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 3c1a60de69577512ae30bcc62abc0660c07ac96b00764607bad1ce10a871d105
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180055fe0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != (float *)0x0))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("*DAT_1803fa608 = (float)dVar3;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180055fe0;
}

// 0x180056060 FUN_180056060
// source: re/dump/decompile/0x180056060_FUN_180056060.c
// size: 97 bytes; thunk: false
// body sha256: 370a4f9e7d3aec18637ebb38d662d946ba34585fb8ca8aca352dbfd5e9d0898e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180056060{
    "0x180056060",
    "FUN_180056060",
    R"F180056060S(undefined FUN_180056060())F180056060S",
    R"B180056060(// 0x180056060  FUN_180056060
// size=97 thunk=false
// signature: undefined FUN_180056060()
// status: ok


undefined8 FUN_180056060(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 4));
    return 1;
  }
  return 0;
}


)B180056060",
    "370a4f9e7d3aec18637ebb38d662d946ba34585fb8ca8aca352dbfd5e9d0898e",
    R"F180056060C(FUN_180039770)F180056060C",
    R"F180056060D(DAT_1803fa608)F180056060D",
    R"F180056060T()F180056060T",
    R"F180056060F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 == 0) {
16: return 1;
19: return 1;
21: return 0;)F180056060F",
    R"F180056060U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 4));.)F180056060U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180056060() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180056060", "FUN_180056060");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 4));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 370a4f9e7d3aec18637ebb38d662d946ba34585fb8ca8aca352dbfd5e9d0898e
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180056060(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 == 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 4));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180056060;
}

// 0x1800560d0 FUN_1800560d0
// source: re/dump/decompile/0x1800560d0_FUN_1800560d0.c
// size: 114 bytes; thunk: false
// body sha256: 391111394c3c24c2a1ff407e86d9330fc435a9246c8b3cc97ebb42544ec540ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800560d0{
    "0x1800560d0",
    "FUN_1800560d0",
    R"F1800560d0S(undefined FUN_1800560d0())F1800560d0S",
    R"B1800560d0(// 0x1800560d0  FUN_1800560d0
// size=114 thunk=false
// signature: undefined FUN_1800560d0()
// status: ok


undefined8 FUN_1800560d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(int *)(DAT_1803fa608 + 4) = (int)dVar3;
    }
  }
  return 0;
}


)B1800560d0",
    "391111394c3c24c2a1ff407e86d9330fc435a9246c8b3cc97ebb42544ec540ab",
    R"F1800560d0C(FUN_180039770)F1800560d0C",
    R"F1800560d0D(DAT_1803fa608)F1800560d0D",
    R"F1800560d0T()F1800560d0T",
    R"F1800560d0F(15: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
17: if (cVar1 != '\0') {
22: return 0;)F1800560d0F",
    R"F1800560d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800560d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800560d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800560d0", "FUN_1800560d0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 391111394c3c24c2a1ff407e86d9330fc435a9246c8b3cc97ebb42544ec540ab
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800560d0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("*(int *)(DAT_1803fa608 + 4) = (int)dVar3;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800560d0;
}

// 0x180056150 FUN_180056150
// source: re/dump/decompile/0x180056150_FUN_180056150.c
// size: 96 bytes; thunk: false
// body sha256: 2f572dcbc3d4b76bd6f9317404a775a0509c77ceec80ed5d0ac5b7e3c8b07d77
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180056150{
    "0x180056150",
    "FUN_180056150",
    R"F180056150S(undefined FUN_180056150())F180056150S",
    R"B180056150(// 0x180056150  FUN_180056150
// size=96 thunk=false
// signature: undefined FUN_180056150()
// status: ok


undefined8 FUN_180056150(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 8));
    return 1;
  }
  return 0;
}


)B180056150",
    "2f572dcbc3d4b76bd6f9317404a775a0509c77ceec80ed5d0ac5b7e3c8b07d77",
    R"F180056150C(FUN_180039770)F180056150C",
    R"F180056150D(DAT_1803fa608)F180056150D",
    R"F180056150T()F180056150T",
    R"F180056150F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 == 0) {
16: return 1;
19: return 1;
21: return 0;)F180056150F",
    R"F180056150U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 8));.)F180056150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180056150() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180056150", "FUN_180056150");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 8));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 2f572dcbc3d4b76bd6f9317404a775a0509c77ceec80ed5d0ac5b7e3c8b07d77
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180056150(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 == 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 8));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180056150;
}

// 0x1800561b0 FUN_1800561b0
// source: re/dump/decompile/0x1800561b0_FUN_1800561b0.c
// size: 119 bytes; thunk: false
// body sha256: 8aaeac3e8a7c1e9e6257e3ad45646525b4e45f642b70cfb672b9ccc266d76f51
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800561b0{
    "0x1800561b0",
    "FUN_1800561b0",
    R"F1800561b0S(undefined FUN_1800561b0())F1800561b0S",
    R"B1800561b0(// 0x1800561b0  FUN_1800561b0
// size=119 thunk=false
// signature: undefined FUN_1800561b0()
// status: ok


undefined8 FUN_1800561b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(float *)(DAT_1803fa608 + 8) = (float)dVar3;
    }
  }
  return 0;
}


)B1800561b0",
    "8aaeac3e8a7c1e9e6257e3ad45646525b4e45f642b70cfb672b9ccc266d76f51",
    R"F1800561b0C(FUN_180039770)F1800561b0C",
    R"F1800561b0D(DAT_1803fa608)F1800561b0D",
    R"F1800561b0T()F1800561b0T",
    R"F1800561b0F(15: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
17: if (cVar1 != '\0') {
22: return 0;)F1800561b0F",
    R"F1800561b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800561b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800561b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800561b0", "FUN_1800561b0");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 8aaeac3e8a7c1e9e6257e3ad45646525b4e45f642b70cfb672b9ccc266d76f51
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_1800561b0(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("*(float *)(DAT_1803fa608 + 8) = (float)dVar3;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800561b0;
}

// 0x180056230 FUN_180056230
// source: re/dump/decompile/0x180056230_FUN_180056230.c
// size: 96 bytes; thunk: false
// body sha256: 4d56ae2e9ae8bf0e5969c585e45bc99cce7bc2bda3b129d878199c01637feb29
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180056230{
    "0x180056230",
    "FUN_180056230",
    R"F180056230S(undefined FUN_180056230())F180056230S",
    R"B180056230(// 0x180056230  FUN_180056230
// size=96 thunk=false
// signature: undefined FUN_180056230()
// status: ok


undefined8 FUN_180056230(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x30));
    return 1;
  }
  return 0;
}


)B180056230",
    "4d56ae2e9ae8bf0e5969c585e45bc99cce7bc2bda3b129d878199c01637feb29",
    R"F180056230C(FUN_180039770)F180056230C",
    R"F180056230D(DAT_1803fa608)F180056230D",
    R"F180056230T()F180056230T",
    R"F180056230F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 == 0) {
16: return 1;
19: return 1;
21: return 0;)F180056230F",
    R"F180056230U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x30));.)F180056230U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180056230() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180056230", "FUN_180056230");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x30));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 4d56ae2e9ae8bf0e5969c585e45bc99cce7bc2bda3b129d878199c01637feb29
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180056230(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 == 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803fa608 + 0x30));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180056230;
}

// 0x180056290 FUN_180056290
// source: re/dump/decompile/0x180056290_FUN_180056290.c
// size: 119 bytes; thunk: false
// body sha256: 28fe279312ef491df71d46377719296f7d238b3a3ba686c0c485b242a72d8f58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180056290{
    "0x180056290",
    "FUN_180056290",
    R"F180056290S(undefined FUN_180056290())F180056290S",
    R"B180056290(// 0x180056290  FUN_180056290
// size=119 thunk=false
// signature: undefined FUN_180056290()
// status: ok


undefined8 FUN_180056290(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(float *)(DAT_1803fa608 + 0x30) = (float)dVar3;
    }
  }
  return 0;
}


)B180056290",
    "28fe279312ef491df71d46377719296f7d238b3a3ba686c0c485b242a72d8f58",
    R"F180056290C(FUN_180039770)F180056290C",
    R"F180056290D(DAT_1803fa608)F180056290D",
    R"F180056290T()F180056290T",
    R"F180056290F(15: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
17: if (cVar1 != '\0') {
22: return 0;)F180056290F",
    R"F180056290U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F180056290U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180056290() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180056290", "FUN_180056290");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 28fe279312ef491df71d46377719296f7d238b3a3ba686c0c485b242a72d8f58
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180056290(longlong param_1)");
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.condition("if (cVar1 != '\\0')")) {
                    trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("*(float *)(DAT_1803fa608 + 0x30) = (float)dVar3;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180056290;
}

// 0x180056310 FUN_180056310
// source: re/dump/decompile/0x180056310_FUN_180056310.c
// size: 97 bytes; thunk: false
// body sha256: 8e4ad6315a77296fb42aa22fa17e375616454a8b6e631a731bf9e3ec8d8b3ee7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180056310{
    "0x180056310",
    "FUN_180056310",
    R"F180056310S(undefined FUN_180056310())F180056310S",
    R"B180056310(// 0x180056310  FUN_180056310
// size=97 thunk=false
// signature: undefined FUN_180056310()
// status: ok


undefined8 FUN_180056310(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 0x20));
    return 1;
  }
  return 0;
}


)B180056310",
    "8e4ad6315a77296fb42aa22fa17e375616454a8b6e631a731bf9e3ec8d8b3ee7",
    R"F180056310C(FUN_180039770)F180056310C",
    R"F180056310D(DAT_1803fa608)F180056310D",
    R"F180056310T()F180056310T",
    R"F180056310F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803fa608 == 0) {
16: return 1;
19: return 1;
21: return 0;)F180056310F",
    R"F180056310U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 0x20));.)F180056310U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180056310() noexcept {
    sf::reconstructed::TranslationTrace trace("0x180056310", "FUN_180056310");
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 0x20));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 8e4ad6315a77296fb42aa22fa17e375616454a8b6e631a731bf9e3ec8d8b3ee7
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8 FUN_180056310(longlong param_1)");
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803fa608 == 0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa608 + 0x20));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x180056310;
}

}  // namespace sf::reconstructed
