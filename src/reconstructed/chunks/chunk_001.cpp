// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"

namespace sf::reconstructed {

// 0x180013f90 std__Node_if_vfunc00
// source: re/dump/decompile/0x180013f90_std__Node_if_vfunc00.c
// size: 153 bytes; thunk: false
// body sha256: cacc4f74493b1cfe32d698cef042d1c68d3bd5dfd69332e3a6acfc0e811eac72
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013f90{
    "0x180013f90",
    "std__Node_if_vfunc00",
    R"F180013f90S(undefined std__Node_if_vfunc00())F180013f90S",
    R"B180013f90(// 0x180013f90  std__Node_if_vfunc00
// size=153 thunk=false
// signature: undefined std__Node_if_vfunc00()
// status: ok


undefined8 * std__Node_if_vfunc00(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = vftable_std__Node_if;
  puVar3 = (undefined8 *)param_1[5];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[5];
    puVar3[5] = 0;
    puVar2 = (undefined8 *)param_1[4];
    puVar4 = puVar3;
    while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (undefined8 *)0x0))) {
      puVar3 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1);
      puVar4 = puVar3;
    }
  }
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013f90",
    "cacc4f74493b1cfe32d698cef042d1c68d3bd5dfd69332e3a6acfc0e811eac72",
    R"F180013f90C()F180013f90C",
    R"F180013f90D()F180013f90D",
    R"F180013f90T()F180013f90T",
    R"F180013f90F(17: while (puVar3 != (undefined8 *)0x0) {
22: while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (undefined8 *)0x0))) {
30: if ((param_2 & 1) != 0) {
33: return param_1;)F180013f90F",
    R"F180013f90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 25: (**(code **)*puVar4)(puVar4,1);.)F180013f90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013f90() noexcept {
    return kFunction_0x180013f90;
}

// 0x180014030 std__Node_rep_vfunc00
// source: re/dump/decompile/0x180014030_std__Node_rep_vfunc00.c
// size: 47 bytes; thunk: false
// body sha256: dd53b780fdd983a851a15a44097a55920f54144e136ed604128dd8bbd98de5bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014030{
    "0x180014030",
    "std__Node_rep_vfunc00",
    R"F180014030S(undefined std__Node_rep_vfunc00())F180014030S",
    R"B180014030(// 0x180014030  std__Node_rep_vfunc00
// size=47 thunk=false
// signature: undefined std__Node_rep_vfunc00()
// status: ok


undefined8 * std__Node_rep_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180014030",
    "dd53b780fdd983a851a15a44097a55920f54144e136ed604128dd8bbd98de5bd",
    R"F180014030C()F180014030C",
    R"F180014030D()F180014030D",
    R"F180014030T()F180014030T",
    R"F180014030F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F180014030F",
    R"F180014030U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014030U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014030() noexcept {
    return kFunction_0x180014030;
}

// 0x180014060 std_bad_any_cast_vfunc01
// source: re/dump/decompile/0x180014060_std_bad_any_cast_vfunc01.c
// size: 8 bytes; thunk: false
// body sha256: 9da8d890ceceaf5c34fa917c55efaf6139f2e8180b00eced6e5b0d918bd11361
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014060{
    "0x180014060",
    "std_bad_any_cast_vfunc01",
    R"F180014060S(undefined std_bad_any_cast_vfunc01())F180014060S",
    R"B180014060(// 0x180014060  std_bad_any_cast_vfunc01
// size=8 thunk=false
// signature: undefined std_bad_any_cast_vfunc01()
// status: ok


char * std_bad_any_cast_vfunc01(void)

{
  return "Bad any_cast";
}


)B180014060",
    "9da8d890ceceaf5c34fa917c55efaf6139f2e8180b00eced6e5b0d918bd11361",
    R"F180014060C()F180014060C",
    R"F180014060D()F180014060D",
    R"F180014060T("Bad any_cast")F180014060T",
    R"F180014060F(10: return "Bad any_cast";)F180014060F",
    R"F180014060U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014060U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014060() noexcept {
    return kFunction_0x180014060;
}

// 0x180014070 FUN_180014070
// source: re/dump/decompile/0x180014070_FUN_180014070.c
// size: 46 bytes; thunk: false
// body sha256: 85d909983c54a960f9ef640f1ba5445c194a3ebde8a13ab70251d709c4cdac55
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014070{
    "0x180014070",
    "FUN_180014070",
    R"F180014070S(undefined FUN_180014070())F180014070S",
    R"B180014070(// 0x180014070  FUN_180014070
// size=46 thunk=false
// signature: undefined FUN_180014070()
// status: ok


void FUN_180014070(void)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1800140a0(&local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_28,(ThrowInfo *)&DAT_1803d5a10);
}


)B180014070",
    "85d909983c54a960f9ef640f1ba5445c194a3ebde8a13ab70251d709c4cdac55",
    R"F180014070C(FUN_1800140a0)F180014070C",
    R"F180014070D(DAT_1803d5a10)F180014070D",
    R"F180014070T()F180014070T",
    R"F180014070F(linear body (no explicit branch keyword found))F180014070F",
    R"F180014070U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5a10.)F180014070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014070() noexcept {
    return kFunction_0x180014070;
}

// 0x1800140a0 FUN_1800140a0
// source: re/dump/decompile/0x1800140a0_FUN_1800140a0.c
// size: 58 bytes; thunk: false
// body sha256: 53fb858579149259d50884e0c24216e1218141c66d5290968f395b7e1c4147f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800140a0{
    "0x1800140a0",
    "FUN_1800140a0",
    R"F1800140a0S(undefined FUN_1800140a0())F1800140a0S",
    R"B1800140a0(// 0x1800140a0  FUN_1800140a0
// size=58 thunk=false
// signature: undefined FUN_1800140a0()
// status: ok


undefined8 * FUN_1800140a0(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = vftable_std_bad_cast;
  *param_1 = vftable_std_bad_any_cast;
  return param_1;
}


)B1800140a0",
    "53fb858579149259d50884e0c24216e1218141c66d5290968f395b7e1c4147f3",
    R"F1800140a0C()F1800140a0C",
    R"F1800140a0D()F1800140a0D",
    R"F1800140a0T("bad cast")F1800140a0T",
    R"F1800140a0F(15: return param_1;)F1800140a0F",
    R"F1800140a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800140a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800140a0() noexcept {
    return kFunction_0x1800140a0;
}

// 0x1800140e0 FUN_1800140e0
// source: re/dump/decompile/0x1800140e0_FUN_1800140e0.c
// size: 76 bytes; thunk: false
// body sha256: 62f3f806e7abd5c4343473269721ace31ca1e4488242600f67b27ba248cbe9df
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800140e0{
    "0x1800140e0",
    "FUN_1800140e0",
    R"F1800140e0S(undefined FUN_1800140e0())F1800140e0S",
    R"B1800140e0(// 0x1800140e0  FUN_1800140e0
// size=76 thunk=false
// signature: undefined FUN_1800140e0()
// status: ok


undefined8 * FUN_1800140e0(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_bad_cast;
  *param_1 = vftable_std_bad_any_cast;
  return param_1;
}


)B1800140e0",
    "62f3f806e7abd5c4343473269721ace31ca1e4488242600f67b27ba248cbe9df",
    R"F1800140e0C()F1800140e0C",
    R"F1800140e0D()F1800140e0D",
    R"F1800140e0T()F1800140e0T",
    R"F1800140e0F(16: return param_1;)F1800140e0F",
    R"F1800140e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800140e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800140e0() noexcept {
    return kFunction_0x1800140e0;
}

// 0x180014130 FUN_180014130
// source: re/dump/decompile/0x180014130_FUN_180014130.c
// size: 85 bytes; thunk: false
// body sha256: abf1def2e0972719d74a4bca9484871419935c1eb620462ce946ee8da943e26c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014130{
    "0x180014130",
    "FUN_180014130",
    R"F180014130S(undefined FUN_180014130())F180014130S",
    R"B180014130(// 0x180014130  FUN_180014130
// size=85 thunk=false
// signature: undefined FUN_180014130()
// status: ok


void FUN_180014130(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38) & 3;
  if (uVar1 == 1) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  if (uVar1 == 2) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


)B180014130",
    "abf1def2e0972719d74a4bca9484871419935c1eb620462ce946ee8da943e26c",
    R"F180014130C()F180014130C",
    R"F180014130D()F180014130D",
    R"F180014130T()F180014130T",
    R"F180014130F(13: if (uVar1 == 1) {
16: return;
18: if (uVar1 == 2) {
21: return;
24: return;)F180014130F",
    R"F180014130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 14: (*(code *)**(undefined8 **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x28));.
TODO: resolve the indirect call in body 19: (*(code *)**(undefined8 **)(param_1 + 0x30))();.)F180014130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014130() noexcept {
    return kFunction_0x180014130;
}

// 0x180014190 FUN_180014190
// source: re/dump/decompile/0x180014190_FUN_180014190.c
// size: 112 bytes; thunk: false
// body sha256: 2340a7640f7402d7effba35b50fcbcc16bc4e681d4e4f2c4b0d364610a715ed8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014190{
    "0x180014190",
    "FUN_180014190",
    R"F180014190S(undefined FUN_180014190())F180014190S",
    R"B180014190(// 0x180014190  FUN_180014190
// size=112 thunk=false
// signature: undefined FUN_180014190()
// status: ok


void FUN_180014190(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = param_2[7];
  param_1[7] = uVar1;
  uVar4 = (uint)uVar1 & 3;
  if ((uVar1 & 3) != 0) {
    if (uVar4 == 1) {
      param_1[6] = param_2[6];
      param_1[5] = param_2[5];
      param_2[7] = 0;
      return;
    }
    if (uVar4 == 2) {
      lVar2 = param_2[6];
      param_1[6] = lVar2;
      (**(code **)(lVar2 + 0x10))();
      return;
    }
  }
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[6] = param_2[6];
  return;
}


)B180014190",
    "2340a7640f7402d7effba35b50fcbcc16bc4e681d4e4f2c4b0d364610a715ed8",
    R"F180014190C()F180014190C",
    R"F180014190D()F180014190D",
    R"F180014190T()F180014190T",
    R"F180014190F(18: if ((uVar1 & 3) != 0) {
19: if (uVar4 == 1) {
23: return;
25: if (uVar4 == 2) {
29: return;
42: return;)F180014190F",
    R"F180014190U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 28: (**(code **)(lVar2 + 0x10))();.)F180014190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014190() noexcept {
    return kFunction_0x180014190;
}

// 0x180014200 FUN_180014200
// source: re/dump/decompile/0x180014200_FUN_180014200.c
// size: 245 bytes; thunk: false
// body sha256: 5358ece47d61de8d6e7525003fd2d96f1048d3fb1abe77902ec0d2756e191802
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014200{
    "0x180014200",
    "FUN_180014200",
    R"F180014200S(undefined FUN_180014200())F180014200S",
    R"B180014200(// 0x180014200  FUN_180014200
// size=245 thunk=false
// signature: undefined FUN_180014200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180014200(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((*(uint *)(param_1 + 7) & 3) == 1) {
    puVar8 = (undefined8 *)param_1[6];
    puVar9 = (undefined8 *)param_1[5];
LAB_180014249:
    (*(code *)*puVar8)(puVar9);
  }
  else if ((*(uint *)(param_1 + 7) & 3) == 2) {
    puVar8 = (undefined8 *)param_1[6];
    puVar9 = param_1;
    goto LAB_180014249;
  }
  param_1[7] = 0;
  uVar1 = param_2[7];
  param_1[7] = uVar1;
  uVar7 = (uint)uVar1 & 3;
  if ((uVar1 & 3) == 0) {
LAB_180014293:
    uVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    uVar6 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar6;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 5);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    param_1[6] = param_2[6];
  }
  else if (uVar7 == 1) {
    param_1[6] = param_2[6];
    param_1[5] = param_2[5];
    param_2[7] = 0;
  }
  else {
    if (uVar7 != 2) goto LAB_180014293;
    lVar2 = param_2[6];
    param_1[6] = lVar2;
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
  }
  if ((*(uint *)(param_2 + 7) & 3) == 1) {
    puVar8 = (undefined8 *)param_2[5];
  }
  else {
    puVar8 = param_2;
    if ((*(uint *)(param_2 + 7) & 3) != 2) goto LAB_1800142d4;
  }
  (**(code **)param_2[6])(puVar8);
LAB_1800142d4:
  param_2[7] = 0;
  return;
}


)B180014200",
    "5358ece47d61de8d6e7525003fd2d96f1048d3fb1abe77902ec0d2756e191802",
    R"F180014200C()F180014200C",
    R"F180014200D(LAB_180014249
LAB_180014293
LAB_1800142d4
DAT_1803da4c0)F180014200D",
    R"F180014200T()F180014200T",
    R"F180014200F(27: if ((*(uint *)(param_1 + 7) & 3) == 1) {
30: LAB_180014249:
33: else if ((*(uint *)(param_1 + 7) & 3) == 2) {
36: goto LAB_180014249;
42: if ((uVar1 & 3) == 0) {
43: LAB_180014293:
59: else if (uVar7 == 1) {
64: else {
65: if (uVar7 != 2) goto LAB_180014293;
70: if ((*(uint *)(param_2 + 7) & 3) == 1) {
73: else {
75: if ((*(uint *)(param_2 + 7) & 3) != 2) goto LAB_1800142d4;
78: LAB_1800142d4:
80: return;)F180014200F",
    R"F180014200U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180014249.
TODO: recover the declaration, type and value for global/data reference LAB_180014293.
TODO: recover the declaration, type and value for global/data reference LAB_1800142d4.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 31: (*(code *)*puVar8)(puVar9);.
TODO: resolve the indirect call in body 68: (**(code **)(lVar2 + 0x10))(param_1,param_2);.
TODO: resolve the indirect call in body 77: (**(code **)param_2[6])(puVar8);.)F180014200U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014200() noexcept {
    return kFunction_0x180014200;
}

// 0x180014300 FUN_180014300
// source: re/dump/decompile/0x180014300_FUN_180014300.c
// size: 218 bytes; thunk: false
// body sha256: 6fabb2d6f9c2292779a83517fe8b0427bd4712b3921fd839cd1669a21db92297
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014300{
    "0x180014300",
    "FUN_180014300",
    R"F180014300S(undefined FUN_180014300())F180014300S",
    R"B180014300(// 0x180014300  FUN_180014300
// size=218 thunk=false
// signature: undefined FUN_180014300()
// status: ok


longlong * FUN_180014300(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = _Query_perf_frequency();
  lVar2 = _Query_perf_counter();
  if (lVar1 == 10000000) {
    *param_1 = lVar2 * 100;
    return param_1;
  }
  if (lVar1 == 24000000) {
    lVar1 = lVar2 + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar2),8);
    lVar3 = (lVar1 >> 0x18) - (lVar1 >> 0x3f);
    lVar1 = (lVar2 + lVar3 * -24000000) * 1000000000;
    lVar1 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar1),8) + lVar1;
    *param_1 = ((lVar1 >> 0x18) - (lVar1 >> 0x3f)) + lVar3 * 1000000000;
    return param_1;
  }
  *param_1 = ((lVar2 % lVar1) * 1000000000) / lVar1 + (lVar2 / lVar1) * 1000000000;
  return param_1;
}


)B180014300",
    "6fabb2d6f9c2292779a83517fe8b0427bd4712b3921fd839cd1669a21db92297",
    R"F180014300C()F180014300C",
    R"F180014300D()F180014300D",
    R"F180014300T()F180014300T",
    R"F180014300F(16: if (lVar1 == 10000000) {
18: return param_1;
20: if (lVar1 == 24000000) {
26: return param_1;
29: return param_1;)F180014300F",
    R"F180014300U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014300U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014300() noexcept {
    return kFunction_0x180014300;
}

// 0x1800143e0 FUN_1800143e0
// source: re/dump/decompile/0x1800143e0_FUN_1800143e0.c
// size: 22 bytes; thunk: false
// body sha256: e0687661b395e5e96156b3d2d8720f1b97cd27c636853fa65c9637f1284d1778
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800143e0{
    "0x1800143e0",
    "FUN_1800143e0",
    R"F1800143e0S(undefined FUN_1800143e0())F1800143e0S",
    R"B1800143e0(// 0x1800143e0  FUN_1800143e0
// size=22 thunk=false
// signature: undefined FUN_1800143e0()
// status: ok


void FUN_1800143e0(longlong param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}


)B1800143e0",
    "e0687661b395e5e96156b3d2d8720f1b97cd27c636853fa65c9637f1284d1778",
    R"F1800143e0C()F1800143e0C",
    R"F1800143e0D()F1800143e0D",
    R"F1800143e0T()F1800143e0T",
    R"F1800143e0F(10: if (*(int *)(param_1 + 8) != 0) {
14: return;)F1800143e0F",
    R"F1800143e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800143e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800143e0() noexcept {
    return kFunction_0x1800143e0;
}

// 0x180014410 FUN_180014410
// source: re/dump/decompile/0x180014410_FUN_180014410.c
// size: 265 bytes; thunk: false
// body sha256: 50be29fb0f13fceb90cdd4288779d4f09caaca1c399a346ebcba62dc44280646
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014410{
    "0x180014410",
    "FUN_180014410",
    R"F180014410S(undefined FUN_180014410())F180014410S",
    R"B180014410(// 0x180014410  FUN_180014410
// size=265 thunk=false
// signature: undefined FUN_180014410()
// status: ok


void FUN_180014410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FILE *pFVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (param_1 != 0) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    iVar2 = _Mtx_lock(&DAT_1803da720);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803da76c == 0x7fffffff) {
      DAT_1803da76c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (DAT_1803fa567 != '\0') {
      uVar3 = __acrt_iob_func(1);
      puVar4 = (undefined8 *)FUN_180012990();
      __stdio_common_vfprintf(*puVar4,uVar3,param_1,0,&local_res10);
      pFVar5 = (FILE *)__acrt_iob_func(1);
      fflush(pFVar5);
    }
    pFVar5 = DAT_1803f9240;
    if (DAT_1803f9240 != (FILE *)0x0) {
      puVar4 = (undefined8 *)FUN_180012990();
      __stdio_common_vfprintf(*puVar4,pFVar5,param_1,0,&local_res10);
      fflush(DAT_1803f9240);
    }
    _Mtx_unlock(&DAT_1803da720);
  }
  return;
}


)B180014410",
    "50be29fb0f13fceb90cdd4288779d4f09caaca1c399a346ebcba62dc44280646",
    R"F180014410C(FUN_180012990)F180014410C",
    R"F180014410D(DAT_1803da720
DAT_1803da76c
DAT_1803f9240
DAT_1803fa567)F180014410D",
    R"F180014410T()F180014410T",
    R"F180014410F(19: if (param_1 != 0) {
24: if (iVar2 != 0) {
28: return;
30: if (DAT_1803da76c == 0x7fffffff) {
34: if (DAT_1803fa567 != '\0') {
42: if (DAT_1803f9240 != (FILE *)0x0) {
49: return;)F180014410F",
    R"F180014410U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da720.
TODO: recover the declaration, type and value for global/data reference DAT_1803da76c.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9240.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa567.
TODO: resolve the indirect call in body 26: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 27: (*pcVar1)();.)F180014410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014410() noexcept {
    return kFunction_0x180014410;
}

// 0x180014520 FUN_180014520
// source: re/dump/decompile/0x180014520_FUN_180014520.c
// size: 1290 bytes; thunk: false
// body sha256: 157f04eaa4a2145143a84b8a2ce60ae19c53e24f0634b4d4bd7dc6b7b6e76527
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014520{
    "0x180014520",
    "FUN_180014520",
    R"F180014520S(undefined FUN_180014520())F180014520S",
    R"B180014520(// 0x180014520  FUN_180014520
// size=1290 thunk=false
// signature: undefined FUN_180014520()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180014520(undefined8 *param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  basic_ios<char,std::char_traits<char>_> *local_270;
  undefined8 *local_268;
  HMODULE local_260;
  void *local_258 [3];
  int iStack_23c;
  undefined *local_238;
  undefined **local_230;
  basic_ostream<char,std::char_traits<char>_> local_228 [16];
  longlong *local_218;
  longlong *local_210;
  longlong *local_1f8;
  ulonglong *local_1f0;
  int *local_1e0;
  ulonglong local_1c8;
  uint local_1c0;
  basic_ios<char,std::char_traits<char>_> local_1b0 [104];
  undefined1 local_148 [272];
  ulonglong local_38;
  ulonglong uVar10;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  local_278 = 0;
  local_268 = param_1;
  GetModuleHandleExW(4,*(LPCWSTR *)(*param_2 + 0x10),&local_260);
  pHVar2 = local_260;
  pvVar3 = GetCurrentProcess();
  K32GetModuleInformation(pvVar3,pHVar2,local_258,0x18);
  pvVar3 = GetCurrentProcess();
  K32GetModuleFileNameExA(pvVar3,local_260,local_148,0x104);
  memset(&local_238,0,0xe8);
  local_238 = &DAT_18033b3dc;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_1b0);
  local_278 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_238,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_230,false);
  *(undefined ***)((longlong)&local_238 + (longlong)*(int *)(local_238 + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)((longlong)&iStack_23c + (longlong)*(int *)(local_238 + 4)) =
       *(int *)(local_238 + 4) + -0x88;
  local_270 = (basic_ios<char,std::char_traits<char>_> *)&local_230;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_230);
  local_230 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
  local_1c8 = 0;
  local_1c0 = 4;
  uVar4 = FUN_1801fc280(&local_238,&DAT_18033e970);
  if (param_4 < 0xc0000006) {
    if (param_4 == 0xc0000005) {
      pcVar7 = "EXCEPTION_ACCESS_VIOLATION";
    }
    else if (param_4 == 0x80000002) {
      pcVar7 = "EXCEPTION_DATATYPE_MISALIGNMENT";
    }
    else if (param_4 == 0x80000003) {
      pcVar7 = "EXCEPTION_BREAKPOINT";
    }
    else {
      if (param_4 != 0x80000004) goto switchD_1800146fb_caseD_c0000007;
      pcVar7 = "EXCEPTION_SINGLE_STEP";
    }
  }
  else {
    switch(param_4) {
    case 0xc0000006:
      pcVar7 = "EXCEPTION_IN_PAGE_ERROR";
      break;
    default:
switchD_1800146fb_caseD_c0000007:
      pcVar7 = "UNKNOWN EXCEPTION";
      break;
    case 0xc000001d:
      pcVar7 = "EXCEPTION_ILLEGAL_INSTRUCTION";
      break;
    case 0xc0000025:
      pcVar7 = "EXCEPTION_NONCONTINUABLE_EXCEPTION";
      break;
    case 0xc0000026:
      pcVar7 = "EXCEPTION_INVALID_DISPOSITION";
      break;
    case 0xc000008c:
      pcVar7 = "EXCEPTION_ARRAY_BOUNDS_EXCEEDED";
      break;
    case 0xc000008d:
      pcVar7 = "EXCEPTION_FLT_DENORMAL_OPERAND";
      break;
    case 0xc000008e:
      pcVar7 = "EXCEPTION_FLT_DIVIDE_BY_ZERO";
      break;
    case 0xc000008f:
      pcVar7 = "EXCEPTION_FLT_INEXACT_RESULT";
      break;
    case 0xc0000090:
      pcVar7 = "EXCEPTION_FLT_INVALID_OPERATION";
      break;
    case 0xc0000091:
      pcVar7 = "EXCEPTION_FLT_OVERFLOW";
      break;
    case 0xc0000092:
      pcVar7 = "EXCEPTION_FLT_STACK_CHECK";
      break;
    case 0xc0000093:
      pcVar7 = "EXCEPTION_FLT_UNDERFLOW";
      break;
    case 0xc0000094:
      pcVar7 = "EXCEPTION_INT_DIVIDE_BY_ZERO";
      break;
    case 0xc0000095:
      pcVar7 = "EXCEPTION_INT_OVERFLOW";
      break;
    case 0xc0000096:
      pcVar7 = "EXCEPTION_PRIV_INSTRUCTION";
      break;
    case 0xc00000fd:
      pcVar7 = "EXCEPTION_STACK_OVERFLOW";
    }
  }
  uVar4 = FUN_1801fc280(uVar4,pcVar7);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4," at address 0x");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar5,(_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b50);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                      *(void **)(*param_2 + 0x10));
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                      (_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b30);
  uVar4 = FUN_1801fc280(pbVar6," inside ");
  uVar4 = FUN_1801fc280(uVar4,local_148);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1801fc280(uVar4," loaded at base address 0x");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar5,(_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b50);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,local_258[0]);
  FUN_1801fc280(pbVar6,&DAT_18033e92c);
  if (param_4 + 0x3ffffffb < 2) {
    uVar4 = FUN_1801fc280(&local_238,"Invalid operation: ");
    iVar1 = *(int *)(*param_2 + 0x20);
    if (iVar1 == 0) {
      pcVar7 = "read";
    }
    else if (iVar1 == 1) {
      pcVar7 = "write";
    }
    else if (iVar1 == 8) {
      pcVar7 = "user-mode data execution prevention (DEP) violation";
    }
    else {
      pcVar7 = "unknown";
    }
    uVar4 = FUN_1801fc280(uVar4,pcVar7);
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4," at address 0x");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar5,(_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b50);
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                        *(__uint64 *)(*param_2 + 0x28));
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,
                        (_func_ios_base_ptr_ios_base_ptr *)&LAB_180013b30);
    FUN_1801fc280(pbVar6,&DAT_18033e92c);
  }
  if (param_4 == 0xc0000006) {
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1801fc280(&local_238,"Underlying NTSTATUS code that resulted in the exception ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar5,*(__uint64 *)(*param_2 + 0x30));
    FUN_1801fc280(pbVar6,&DAT_18033e92c);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_278 = 10;
  if ((((byte)local_1c0 & 0x22) == 2) || (uVar10 = *local_1f0, uVar10 == 0)) {
    if (((local_1c0 & 4) != 0) || (*local_1f8 == 0)) goto LAB_180014994;
    lVar8 = *local_218;
    lVar9 = (*local_1e0 - lVar8) + *local_1f8;
  }
  else {
    lVar8 = *local_210;
    if (uVar10 < local_1c8) {
      uVar10 = local_1c8;
    }
    lVar9 = uVar10 - lVar8;
  }
  if (lVar8 != 0) {
    FUN_180212700(param_1,lVar8,lVar9);
  }
LAB_180014994:
  local_278 = 3;
  local_270 = local_1b0;
  *(undefined ***)((longlong)&local_238 + (longlong)*(int *)(local_238 + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)((longlong)&iStack_23c + (longlong)*(int *)(local_238 + 4)) =
       *(int *)(local_238 + 4) + -0x88;
  FUN_18020ffc0(&local_230);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_228);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_1b0);
  return param_1;
}


)B180014520",
    "157f04eaa4a2145143a84b8a2ce60ae19c53e24f0634b4d4bd7dc6b7b6e76527",
    R"F180014520C(FUN_1801fc280
FUN_18020ffc0
FUN_180212700)F180014520C",
    R"F180014520D(LAB_180013b30
LAB_180013b50
LAB_180014994
DAT_18033b3dc
DAT_18033e92c
DAT_18033e970
DAT_1803da4c0)F180014520D",
    R"F180014520T("read"
"write"
"unknown"
" inside "
" at address 0x"
"UNKNOWN EXCEPTION"
"Invalid operation: "
"EXCEPTION_BREAKPOINT"
"EXCEPTION_SINGLE_STEP"
"EXCEPTION_FLT_OVERFLOW"
"EXCEPTION_INT_OVERFLOW"
"EXCEPTION_FLT_UNDERFLOW"
"EXCEPTION_IN_PAGE_ERROR"
"EXCEPTION_STACK_OVERFLOW"
"EXCEPTION_FLT_STACK_CHECK"
" loaded at base address 0x"
"EXCEPTION_ACCESS_VIOLATION"
"EXCEPTION_PRIV_INSTRUCTION"
"EXCEPTION_FLT_DIVIDE_BY_ZERO"
"EXCEPTION_FLT_INEXACT_RESULT"
"EXCEPTION_INT_DIVIDE_BY_ZERO"
"EXCEPTION_ILLEGAL_INSTRUCTION"
"EXCEPTION_INVALID_DISPOSITION"
"EXCEPTION_FLT_DENORMAL_OPERAND"
"EXCEPTION_ARRAY_BOUNDS_EXCEEDED"
"EXCEPTION_DATATYPE_MISALIGNMENT"
"EXCEPTION_FLT_INVALID_OPERATION"
"EXCEPTION_NONCONTINUABLE_EXCEPTION"
"user-mode data execution prevention (DEP) violation"
"Underlying NTSTATUS code that resulted in the exception ")F180014520T",
    R"F180014520F(70: if (param_4 < 0xc0000006) {
71: if (param_4 == 0xc0000005) {
74: else if (param_4 == 0x80000002) {
77: else if (param_4 == 0x80000003) {
80: else {
81: if (param_4 != 0x80000004) goto switchD_1800146fb_caseD_c0000007;
85: else {
86: switch(param_4) {
87: case 0xc0000006:
89: break;
93: break;
94: case 0xc000001d:
96: break;
97: case 0xc0000025:
99: break;
100: case 0xc0000026:
102: break;
103: case 0xc000008c:
105: break;
106: case 0xc000008d:
108: break;
109: case 0xc000008e:
111: break;
112: case 0xc000008f:
114: break;
115: case 0xc0000090:
117: break;
118: case 0xc0000091:
120: break;
121: case 0xc0000092:
123: break;
124: case 0xc0000093:
126: break;
127: case 0xc0000094:
129: break;
130: case 0xc0000095:
132: break;
133: case 0xc0000096:
135: break;
136: case 0xc00000fd:
159: if (param_4 + 0x3ffffffb < 2) {
162: if (iVar1 == 0) {
165: else if (iVar1 == 1) {
168: else if (iVar1 == 8) {
171: else {
186: if (param_4 == 0xc0000006) {
199: if ((((byte)local_1c0 & 0x22) == 2) || (uVar10 = *local_1f0, uVar10 == 0)) {
200: if (((local_1c0 & 4) != 0) || (*local_1f8 == 0)) goto LAB_180014994;
204: else {
206: if (uVar10 < local_1c8) {
211: if (lVar8 != 0) {
214: LAB_180014994:
225: return param_1;)F180014520F",
    R"F180014520U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180013b30.
TODO: recover the declaration, type and value for global/data reference LAB_180013b50.
TODO: recover the declaration, type and value for global/data reference LAB_180014994.
TODO: recover the declaration, type and value for global/data reference DAT_18033b3dc.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18033e970.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180014520U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014520() noexcept {
    return kFunction_0x180014520;
}

// 0x180014b70 FUN_180014b70
// source: re/dump/decompile/0x180014b70_FUN_180014b70.c
// size: 140 bytes; thunk: false
// body sha256: c29ca54c9f95938277d71543f35e7cbce67cac8f7a3da1e16edefb1202d5955a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014b70{
    "0x180014b70",
    "FUN_180014b70",
    R"F180014b70S(undefined FUN_180014b70())F180014b70S",
    R"B180014b70(// 0x180014b70  FUN_180014b70
// size=140 thunk=false
// signature: undefined FUN_180014b70()
// status: ok


void FUN_180014b70(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x11);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x88) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x8c) = *(int *)(*param_1 + 4) + -0x88;
  FUN_18020ffc0(param_1 + 1);
  *(code **)(this + (longlong)*(int *)(*param_1 + 4) + -0x88) = _vftable__exref;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x8c) = *(int *)(*param_1 + 4) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x000180014bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}


)B180014b70",
    "c29ca54c9f95938277d71543f35e7cbce67cac8f7a3da1e16edefb1202d5955a",
    R"F180014b70C(FUN_18020ffc0)F180014b70C",
    R"F180014b70D()F180014b70D",
    R"F180014b70T()F180014b70T",
    R"F180014b70F(22: return;)F180014b70F",
    R"F180014b70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 17: *(code **)(this + (longlong)*(int *)(*param_1 + 4) + -0x88) = _vftable__exref;.)F180014b70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014b70() noexcept {
    return kFunction_0x180014b70;
}

// 0x180014c00 FUN_180014c00
// source: re/dump/decompile/0x180014c00_FUN_180014c00.c
// size: 43 bytes; thunk: false
// body sha256: b36b5f88706add1a7272b13b3c3fe1a3218919198d0d707c0d3a9ca1a41fbf57
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014c00{
    "0x180014c00",
    "FUN_180014c00",
    R"F180014c00S(undefined FUN_180014c00())F180014c00S",
    R"B180014c00(// 0x180014c00  FUN_180014c00
// size=43 thunk=false
// signature: undefined FUN_180014c00()
// status: ok


undefined8 * FUN_180014c00(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = vftable_SE_Exception;
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[4] = param_3;
  return param_1;
}


)B180014c00",
    "b36b5f88706add1a7272b13b3c3fe1a3218919198d0d707c0d3a9ca1a41fbf57",
    R"F180014c00C()F180014c00C",
    R"F180014c00D()F180014c00D",
    R"F180014c00T()F180014c00T",
    R"F180014c00F(16: return param_1;)F180014c00F",
    R"F180014c00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014c00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014c00() noexcept {
    return kFunction_0x180014c00;
}

// 0x180014c30 SE_Exception_vfunc01
// source: re/dump/decompile/0x180014c30_SE_Exception_vfunc01.c
// size: 56 bytes; thunk: false
// body sha256: c9eaf8495fe463e5cae6685b11ff6d54b20740b68d47328c42f0fb7f6a99e9c5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014c30{
    "0x180014c30",
    "SE_Exception_vfunc01",
    R"F180014c30S(undefined SE_Exception_vfunc01())F180014c30S",
    R"B180014c30(// 0x180014c30  SE_Exception_vfunc01
// size=56 thunk=false
// signature: undefined SE_Exception_vfunc01()
// status: ok


undefined8 * SE_Exception_vfunc01(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 local_28 [32];
  
  puVar1 = (undefined8 *)
           FUN_180014520(local_28,*(undefined8 *)(param_1 + 0x20),param_3,
                         *(undefined4 *)(param_1 + 0x18));
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  FUN_18020e450(local_28);
  return puVar1;
}


)B180014c30",
    "c9eaf8495fe463e5cae6685b11ff6d54b20740b68d47328c42f0fb7f6a99e9c5",
    R"F180014c30C(FUN_180014520
FUN_18020e450)F180014c30C",
    R"F180014c30D()F180014c30D",
    R"F180014c30T()F180014c30T",
    R"F180014c30F(16: if (0xf < (ulonglong)puVar1[3]) {
20: return puVar1;)F180014c30F",
    R"F180014c30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014c30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014c30() noexcept {
    return kFunction_0x180014c30;
}

// 0x180014c70 SE_Exception_vfunc00
// source: re/dump/decompile/0x180014c70_SE_Exception_vfunc00.c
// size: 72 bytes; thunk: false
// body sha256: 2a1886237ca393ae8a118f19e3a6836326efcea78f08dc5c1a6e487b6f682935
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014c70{
    "0x180014c70",
    "SE_Exception_vfunc00",
    R"F180014c70S(undefined SE_Exception_vfunc00())F180014c70S",
    R"B180014c70(// 0x180014c70  SE_Exception_vfunc00
// size=72 thunk=false
// signature: undefined SE_Exception_vfunc00()
// status: ok


undefined8 * SE_Exception_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180014c70",
    "2a1886237ca393ae8a118f19e3a6836326efcea78f08dc5c1a6e487b6f682935",
    R"F180014c70C()F180014c70C",
    R"F180014c70D()F180014c70D",
    R"F180014c70T()F180014c70T",
    R"F180014c70F(12: if ((param_2 & 1) != 0) {
15: return param_1;)F180014c70F",
    R"F180014c70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014c70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014c70() noexcept {
    return kFunction_0x180014c70;
}

// 0x180014cc0 FUN_180014cc0
// source: re/dump/decompile/0x180014cc0_FUN_180014cc0.c
// size: 19 bytes; thunk: false
// body sha256: e729eee773ef2b56f3cc4a58def68c2a93d859ae0cfd5692dd0c0e8f2b174d69
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014cc0{
    "0x180014cc0",
    "FUN_180014cc0",
    R"F180014cc0S(undefined FUN_180014cc0())F180014cc0S",
    R"B180014cc0(// 0x180014cc0  FUN_180014cc0
// size=19 thunk=false
// signature: undefined FUN_180014cc0()
// status: ok


void FUN_180014cc0(undefined8 *param_1)

{
  _set_se_translator(*param_1);
  return;
}


)B180014cc0",
    "e729eee773ef2b56f3cc4a58def68c2a93d859ae0cfd5692dd0c0e8f2b174d69",
    R"F180014cc0C()F180014cc0C",
    R"F180014cc0D()F180014cc0D",
    R"F180014cc0T()F180014cc0T",
    R"F180014cc0F(11: return;)F180014cc0F",
    R"F180014cc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014cc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014cc0() noexcept {
    return kFunction_0x180014cc0;
}

// 0x180014ce0 FUN_180014ce0
// source: re/dump/decompile/0x180014ce0_FUN_180014ce0.c
// size: 36 bytes; thunk: false
// body sha256: 3fed2e5e9ea9637e82af66f8dbaaf5af0e7034d9daeb763ba26705f1b7c6abd5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014ce0{
    "0x180014ce0",
    "FUN_180014ce0",
    R"F180014ce0S(undefined FUN_180014ce0())F180014ce0S",
    R"B180014ce0(// 0x180014ce0  FUN_180014ce0
// size=36 thunk=false
// signature: undefined FUN_180014ce0()
// status: ok


void FUN_180014ce0(undefined4 param_1,undefined8 param_2)

{
  undefined1 local_38 [56];
  
  FUN_180014c00(local_38,param_1,param_2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_1803d5be0);
}


)B180014ce0",
    "3fed2e5e9ea9637e82af66f8dbaaf5af0e7034d9daeb763ba26705f1b7c6abd5",
    R"F180014ce0C(FUN_180014c00)F180014ce0C",
    R"F180014ce0D(DAT_1803d5be0)F180014ce0D",
    R"F180014ce0T()F180014ce0T",
    R"F180014ce0F(linear body (no explicit branch keyword found))F180014ce0F",
    R"F180014ce0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5be0.)F180014ce0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014ce0() noexcept {
    return kFunction_0x180014ce0;
}

// 0x180014d10 FUN_180014d10
// source: re/dump/decompile/0x180014d10_FUN_180014d10.c
// size: 90 bytes; thunk: false
// body sha256: 0d2a770f7a87535257e47fee4dfb3d24caee446c086fac62ec0569e3e1ac46bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014d10{
    "0x180014d10",
    "FUN_180014d10",
    R"F180014d10S(undefined FUN_180014d10())F180014d10S",
    R"B180014d10(// 0x180014d10  FUN_180014d10
// size=90 thunk=false
// signature: undefined FUN_180014d10()
// status: ok


undefined8 * FUN_180014d10(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_SE_Exception;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


)B180014d10",
    "0d2a770f7a87535257e47fee4dfb3d24caee446c086fac62ec0569e3e1ac46bd",
    R"F180014d10C()F180014d10C",
    R"F180014d10D()F180014d10D",
    R"F180014d10T()F180014d10T",
    R"F180014d10F(17: return param_1;)F180014d10F",
    R"F180014d10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180014d10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014d10() noexcept {
    return kFunction_0x180014d10;
}

// 0x180014d70 FUN_180014d70
// source: re/dump/decompile/0x180014d70_FUN_180014d70.c
// size: 551 bytes; thunk: false
// body sha256: f67b0794cb4f454dad7be761fd2c79d9dc2c6dee203dd1b30c28d34260fcf9b2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014d70{
    "0x180014d70",
    "FUN_180014d70",
    R"F180014d70S(undefined FUN_180014d70())F180014d70S",
    R"B180014d70(// 0x180014d70  FUN_180014d70
// size=551 thunk=false
// signature: undefined FUN_180014d70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180014d70(longlong *param_1)

{
  LPCSTR lpModuleName;
  int *piVar1;
  DWORD DVar2;
  BOOL BVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  undefined1 *local_2c0;
  DWORD local_2b8;
  int local_2b0;
  HMODULE local_2a8 [2];
  undefined1 local_298;
  undefined8 local_297;
  undefined8 uStack_28f;
  undefined8 local_287;
  undefined8 uStack_27f;
  undefined8 local_277;
  undefined8 uStack_26f;
  undefined8 local_267;
  undefined8 uStack_25f;
  undefined8 local_257;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined8 uStack_240;
  CHAR local_238;
  undefined1 local_237 [271];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_2e8;
  LOCK();
  UNLOCK();
  iVar5 = DAT_1804258dc + 1;
  DAT_1804258dc = DAT_1804258dc + 1;
  DVar2 = GetTickCount();
  if ((iVar5 < 9) || (1000 < DVar2 - _DAT_1803ff790)) {
    lpModuleName = *(LPCSTR *)(*param_1 + 0x10);
    local_128[0] = '?';
    local_128[1] = '\0';
    _DAT_1803ff790 = DVar2;
    memset(local_128 + 2,0,0x102);
    lVar6 = 0;
    local_2a8[0] = (HMODULE)0x0;
    BVar3 = GetModuleHandleExA(6,lpModuleName,local_2a8);
    if ((BVar3 != 0) && (local_2a8[0] != (HMODULE)0x0)) {
      local_238 = '\0';
      memset(local_237,0,0x103);
      DVar2 = GetModuleFileNameA(local_2a8[0],&local_238,0x104);
      if (DVar2 != 0) {
        pcVar4 = strrchr(&local_238,0x5c);
        pcVar7 = pcVar4 + 1;
        if (pcVar4 == (char *)0x0) {
          pcVar7 = &local_238;
        }
        strncpy_s(local_128,0x104,pcVar7,0xffffffffffffffff);
      }
      lVar6 = (longlong)lpModuleName - (longlong)local_2a8[0];
    }
    piVar1 = (int *)*param_1;
    local_257 = 0;
    uStack_24f = 0;
    local_298 = 0;
    local_297 = 0;
    uStack_28f = 0;
    local_287 = 0;
    uStack_27f = 0;
    local_277 = 0;
    uStack_26f = 0;
    local_267 = 0;
    uStack_25f = 0;
    uStack_248 = 0;
    uStack_247 = 0;
    uStack_240 = 0;
    if ((*piVar1 == -0x3ffffffb) && (1 < (uint)piVar1[6])) {
      if (*(longlong *)(piVar1 + 8) == 0) {
        pcVar7 = "reading";
      }
      else {
        pcVar7 = "executing";
        if (*(longlong *)(piVar1 + 8) == 1) {
          pcVar7 = "writing";
        }
      }
      FUN_1801fc620(&local_298," %s 0x%p",pcVar7,*(undefined8 *)(piVar1 + 10));
    }
    local_2b8 = GetCurrentThreadId();
    local_2c0 = &local_298;
    local_2c8 = lVar6;
    local_2b0 = iVar5;
    FUN_180014410("[UNHANDLED] 0x%x at 0x%p = %s+0x%llX%s (thread %lu, total: %d)\n",
                  *(undefined4 *)*param_1,lpModuleName,local_128);
  }
  return 0;
}


)B180014d70",
    "f67b0794cb4f454dad7be761fd2c79d9dc2c6dee203dd1b30c28d34260fcf9b2",
    R"F180014d70C(FUN_180014410
FUN_1801fc620)F180014d70C",
    R"F180014d70D(DAT_1803da4c0
DAT_1804258dc)F180014d70D",
    R"F180014d70T("reading"
"writing"
" %s 0x%p"
"executing"
"[UNHANDLED] 0x%x at 0x%p = %s+0x%llX%s (thread %lu, total: %d)\\n")F180014d70T",
    R"F180014d70F(52: if ((iVar5 < 9) || (1000 < DVar2 - _DAT_1803ff790)) {
61: if ((BVar3 != 0) && (local_2a8[0] != (HMODULE)0x0)) {
65: if (DVar2 != 0) {
68: if (pcVar4 == (char *)0x0) {
90: if ((*piVar1 == -0x3ffffffb) && (1 < (uint)piVar1[6])) {
91: if (*(longlong *)(piVar1 + 8) == 0) {
94: else {
96: if (*(longlong *)(piVar1 + 8) == 1) {
109: return 0;)F180014d70F",
    R"F180014d70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1804258dc.)F180014d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014d70() noexcept {
    return kFunction_0x180014d70;
}

// 0x180014fa0 FUN_180014fa0
// source: re/dump/decompile/0x180014fa0_FUN_180014fa0.c
// size: 207 bytes; thunk: false
// body sha256: 57774bf45b7a8eea553bf6a415ef57f0593cfe829eb2ce7964007b389669e4b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180014fa0{
    "0x180014fa0",
    "FUN_180014fa0",
    R"F180014fa0S(undefined FUN_180014fa0())F180014fa0S",
    R"B180014fa0(// 0x180014fa0  FUN_180014fa0
// size=207 thunk=false
// signature: undefined FUN_180014fa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180014fa0(undefined8 *param_1,byte *param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  uVar2 = 0x14650fb0739d0383;
  for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    uVar2 = (uVar2 ^ *param_2) * 0x100000001b3;
  }
  local_30 = param_1;
  FUN_180012ac0(local_28,0x11,"%016llx",uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_28);
  FUN_18001d080(param_1,local_28,sVar1);
  return param_1;
}


)B180014fa0",
    "57774bf45b7a8eea553bf6a415ef57f0593cfe829eb2ce7964007b389669e4b1",
    R"F180014fa0C(FUN_180012ac0
FUN_18001d080)F180014fa0C",
    R"F180014fa0D(DAT_1803da4c0)F180014fa0D",
    R"F180014fa0T("%016llx")F180014fa0T",
    R"F180014fa0F(22: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
26: for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
37: return param_1;)F180014fa0F",
    R"F180014fa0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180014fa0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180014fa0() noexcept {
    return kFunction_0x180014fa0;
}

// 0x180015070 FUN_180015070
// source: re/dump/decompile/0x180015070_FUN_180015070.c
// size: 13 bytes; thunk: false
// body sha256: bd9f9dfec68dd879919e06f5ab6215b48a6a9606630ce19eb6a0ceb7e8a90597
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015070{
    "0x180015070",
    "FUN_180015070",
    R"F180015070S(undefined FUN_180015070())F180015070S",
    R"B180015070(// 0x180015070  FUN_180015070
// size=13 thunk=false
// signature: undefined FUN_180015070()
// status: ok


undefined4 * FUN_180015070(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}


)B180015070",
    "bd9f9dfec68dd879919e06f5ab6215b48a6a9606630ce19eb6a0ceb7e8a90597",
    R"F180015070C()F180015070C",
    R"F180015070D()F180015070D",
    R"F180015070T()F180015070T",
    R"F180015070F(12: return param_1;)F180015070F",
    R"F180015070U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180015070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015070() noexcept {
    return kFunction_0x180015070;
}

// 0x180015080 FUN_180015080
// source: re/dump/decompile/0x180015080_FUN_180015080.c
// size: 238 bytes; thunk: false
// body sha256: 85c704cc0ded319bf772f7be4b451277cfdebab524741fddbd39c38b899743f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015080{
    "0x180015080",
    "FUN_180015080",
    R"F180015080S(undefined FUN_180015080())F180015080S",
    R"B180015080(// 0x180015080  FUN_180015080
// size=238 thunk=false
// signature: undefined FUN_180015080()
// status: ok


void FUN_180015080(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != lVar1) {
    do {
      FUN_18023b050(lVar2);
      lVar2 = lVar2 + 0x60;
    } while (lVar2 != lVar1);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x118) != *(longlong *)(param_1 + 0x120)) {
    FUN_18022a400();
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_180254220(param_1 + 0xf0);
  FUN_18024f460(param_1);
  FUN_18024f770(param_1);
  *(undefined8 *)(param_1 + 0x578) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0xbe99999a;
  *(undefined1 *)(param_1 + 0x588) = 1;
  FUN_1801fc8c0(param_1 + 0x50,param_1,param_2);
  return;
}


)B180015080",
    "85c704cc0ded319bf772f7be4b451277cfdebab524741fddbd39c38b899743f8",
    R"F180015080C(FUN_1801fc8c0
FUN_18022a400
FUN_18023b050
FUN_18024f460
FUN_18024f770
FUN_180254220)F180015080C",
    R"F180015080D()F180015080D",
    R"F180015080T()F180015080T",
    R"F180015080F(15: if (lVar2 != lVar1) {
16: do {
22: if (*(longlong *)(param_1 + 0x118) != *(longlong *)(param_1 + 0x120)) {
41: return;)F180015080F",
    R"F180015080U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180015080U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015080() noexcept {
    return kFunction_0x180015080;
}

// 0x180015170 FUN_180015170
// source: re/dump/decompile/0x180015170_FUN_180015170.c
// size: 48 bytes; thunk: false
// body sha256: 2384a7f3d5e0f844833e702e6560be39f0a2b97ab7d06aa98fffcf080760335b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015170{
    "0x180015170",
    "FUN_180015170",
    R"F180015170S(undefined FUN_180015170())F180015170S",
    R"B180015170(// 0x180015170  FUN_180015170
// size=48 thunk=false
// signature: undefined FUN_180015170()
// status: ok


undefined8 FUN_180015170(longlong param_1,undefined8 param_2)

{
  FUN_1801fcbd0(param_1 + 0x50);
  return param_2;
}


)B180015170",
    "2384a7f3d5e0f844833e702e6560be39f0a2b97ab7d06aa98fffcf080760335b",
    R"F180015170C(FUN_1801fcbd0)F180015170C",
    R"F180015170D()F180015170D",
    R"F180015170T()F180015170T",
    R"F180015170F(11: return param_2;)F180015170F",
    R"F180015170U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180015170U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015170() noexcept {
    return kFunction_0x180015170;
}

// 0x1800151b0 FUN_1800151b0
// source: re/dump/decompile/0x1800151b0_FUN_1800151b0.c
// size: 191 bytes; thunk: false
// body sha256: b1a9a3439c45b88a628fddf4c9d420fc5f88caceaa7e3e4550a671798a832008
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800151b0{
    "0x1800151b0",
    "FUN_1800151b0",
    R"F1800151b0S(undefined FUN_1800151b0())F1800151b0S",
    R"B1800151b0(// 0x1800151b0  FUN_1800151b0
// size=191 thunk=false
// signature: undefined FUN_1800151b0()
// status: ok


void FUN_1800151b0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) * -0x5555555555555555
  ;
  if (uVar2 <= param_2) {
    param_2 = uVar2 - 1;
  }
  *(undefined8 *)(param_1 + 0x578) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x570) = 1;
  uVar4 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) * -0x5555555555555555
  ;
  uVar2 = param_2;
  if (uVar4 < param_2) {
    uVar2 = uVar4;
  }
  *(ulonglong *)(param_1 + 0x568) = uVar2;
  if (*(char *)(param_1 + 0x23) != '\0') {
    puVar1 = *(ulonglong **)(param_1 + 0x1c0);
    for (puVar3 = *(ulonglong **)(param_1 + 0x1b8); puVar3 != puVar1; puVar3 = puVar3 + 2) {
      if ((*puVar3 < param_2) && (param_2 <= puVar3[1])) {
        lVar5 = *puVar3 * 0x60;
        if (*(char *)(lVar5 + 0x22 + *(longlong *)(param_1 + 0x50)) == '\x01') {
          *(undefined1 *)(lVar5 + 0x22 + *(longlong *)(param_1 + 0x50)) = 0;
          *(undefined1 *)(param_1 + 0x1d2) = 1;
        }
      }
    }
  }
  return;
}


)B1800151b0",
    "b1a9a3439c45b88a628fddf4c9d420fc5f88caceaa7e3e4550a671798a832008",
    R"F1800151b0C()F1800151b0C",
    R"F1800151b0D()F1800151b0D",
    R"F1800151b0T()F1800151b0T",
    R"F1800151b0F(18: if (uVar2 <= param_2) {
27: if (uVar4 < param_2) {
31: if (*(char *)(param_1 + 0x23) != '\0') {
33: for (puVar3 = *(ulonglong **)(param_1 + 0x1b8); puVar3 != puVar1; puVar3 = puVar3 + 2) {
34: if ((*puVar3 < param_2) && (param_2 <= puVar3[1])) {
36: if (*(char *)(lVar5 + 0x22 + *(longlong *)(param_1 + 0x50)) == '\x01') {
43: return;)F1800151b0F",
    R"F1800151b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800151b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800151b0() noexcept {
    return kFunction_0x1800151b0;
}

// 0x180015270 FUN_180015270
// source: re/dump/decompile/0x180015270_FUN_180015270.c
// size: 489 bytes; thunk: false
// body sha256: b7d48e825eb985f496a376ccf1feecc6bd1ea649b76d90ce2ac2ee86e65c2872
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015270{
    "0x180015270",
    "FUN_180015270",
    R"F180015270S(undefined FUN_180015270())F180015270S",
    R"B180015270(// 0x180015270  FUN_180015270
// size=489 thunk=false
// signature: undefined FUN_180015270()
// status: ok


void FUN_180015270(longlong param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined ***pppuVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 local_a8 [2];
  undefined ***local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined **local_78;
  longlong local_70;
  undefined ***local_40;
  
  uVar5 = *param_3;
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar6 = (*(longlong *)(param_1 + 0x58) - lVar1 >> 5) * -0x5555555555555555;
  if (uVar5 < uVar6) {
    uVar4 = *(longlong *)(uVar5 * 0x60 + 8 + lVar1) - *(longlong *)(uVar5 * 0x60 + lVar1) >> 4;
    if (param_3[1] <= uVar4) {
      uVar4 = param_3[1];
    }
  }
  else {
    uVar5 = uVar6 - 1;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_180015454;
    uVar4 = *(longlong *)(uVar5 * 0x60 + 8 + lVar1) - *(longlong *)(uVar5 * 0x60 + lVar1) >> 4;
  }
  uVar3 = *param_2;
  if (uVar3 < uVar6) {
    uVar6 = *(longlong *)(uVar3 * 0x60 + 8 + lVar1) - *(longlong *)(uVar3 * 0x60 + lVar1) >> 4;
    if (param_2[1] <= uVar6) {
      uVar6 = param_2[1];
    }
  }
  else {
    uVar3 = uVar6 - 1;
    if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
LAB_180015454:
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    uVar6 = *(longlong *)(uVar3 * 0x60 + 8 + lVar1) - *(longlong *)(uVar3 * 0x60 + lVar1) >> 4;
  }
  local_a8[0] = 0xff604cee;
  local_a0 = (undefined ***)0x0;
  bVar7 = uVar3 < uVar5;
  if (uVar3 == uVar5) {
    bVar7 = uVar6 < uVar4;
  }
  if (bVar7) {
    pppuVar2 = *(undefined ****)(param_1 + 0x360);
    if (pppuVar2 == *(undefined ****)(param_1 + 0x368)) {
      FUN_180262c20((longlong *)(param_1 + 0x358),pppuVar2,&local_a0,local_a8,param_6);
    }
    else {
      *pppuVar2 = (undefined **)0x0;
      *(undefined4 *)(pppuVar2 + 1) = 0xff604cee;
      pppuVar2[2] = (undefined **)0x0;
      pppuVar2[3] = (undefined **)0x0;
      pppuVar2[4] = (undefined **)0x0;
      pppuVar2[5] = (undefined **)0x0;
      local_a0 = pppuVar2;
      FUN_18001d080(pppuVar2 + 2,*param_6,param_6[1]);
      *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 0x30;
    }
    local_a0 = &local_78;
    local_78 = 
    vftable_std_3_XAEAUGlyph_Z_std_std_D_DU__char_traits_0_KIAEBV__basic_string_view_3_IEAAXUDocPos_TextEditor__4__addSquiggle_V_lambda_1_____Func_impl_no_alloc
    ;
    local_70 = (*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 4) *
               -0x5555555555555555;
    local_40 = &local_78;
    local_98 = uVar5;
    local_90 = uVar4;
    local_88 = uVar3;
    local_80 = uVar6;
    FUN_180255080((longlong *)(param_1 + 0x50),&local_88,&local_98,&local_78);
  }
  return;
}


)B180015270",
    "b7d48e825eb985f496a376ccf1feecc6bd1ea649b76d90ce2ac2ee86e65c2872",
    R"F180015270C(FUN_18001d080
FUN_180255080
FUN_180262180
FUN_180262c20)F180015270C",
    R"F180015270D(LAB_180015454)F180015270D",
    R"F180015270T()F180015270T",
    R"F180015270F(31: if (uVar5 < uVar6) {
33: if (param_3[1] <= uVar4) {
37: else {
39: if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_180015454;
43: if (uVar3 < uVar6) {
45: if (param_2[1] <= uVar6) {
49: else {
51: if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
52: LAB_180015454:
61: if (uVar3 == uVar5) {
64: if (bVar7) {
66: if (pppuVar2 == *(undefined ****)(param_1 + 0x368)) {
69: else {
93: return;)F180015270F",
    R"F180015270U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180015454.)F180015270U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015270() noexcept {
    return kFunction_0x180015270;
}

// 0x180015460 FUN_180015460
// source: re/dump/decompile/0x180015460_FUN_180015460.c
// size: 48 bytes; thunk: false
// body sha256: 72343a46bfcd8a1e23e39b843ffebad8aa39f1cda98930eb819e3f3a7d5017e1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015460{
    "0x180015460",
    "FUN_180015460",
    R"F180015460S(undefined FUN_180015460())F180015460S",
    R"B180015460(// 0x180015460  FUN_180015460
// size=48 thunk=false
// signature: undefined FUN_180015460()
// status: ok


void FUN_180015460(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}


)B180015460",
    "72343a46bfcd8a1e23e39b843ffebad8aa39f1cda98930eb819e3f3a7d5017e1",
    R"F180015460C()F180015460C",
    R"F180015460D()F180015460D",
    R"F180015460T()F180015460T",
    R"F180015460F(13: if (plVar1 != (longlong *)0x0) {
17: return;)F180015460F",
    R"F180015460U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);.)F180015460U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015460() noexcept {
    return kFunction_0x180015460;
}

// 0x180015490 FUN_180015490
// source: re/dump/decompile/0x180015490_FUN_180015490.c
// size: 240 bytes; thunk: false
// body sha256: a662ab2abc6a45db010ae099af716454ca53880f08634900fe8f414d6a2e486c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015490{
    "0x180015490",
    "FUN_180015490",
    R"F180015490S(undefined FUN_180015490())F180015490S",
    R"B180015490(// 0x180015490  FUN_180015490
// size=240 thunk=false
// signature: undefined FUN_180015490()
// status: ok


undefined8 FUN_180015490(ushort param_1)

{
  longlong lVar1;
  DWORD DVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar3;
  undefined8 uVar4;
  
  hResInfo = FindResourceW(DAT_1803f9288,(LPCWSTR)(ulonglong)param_1,(LPCWSTR)0xa);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(DAT_1803f9288,hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x60);
      DVar2 = SizeofResource(DAT_1803f9288,hResInfo);
      pvVar3 = LockResource(hResData);
      uVar4 = FUN_180298b30(uVar4,pvVar3,DVar2);
      return uVar4;
    }
  }
  return 0;
}


)B180015490",
    "a662ab2abc6a45db010ae099af716454ca53880f08634900fe8f414d6a2e486c",
    R"F180015490C(FUN_180298b30)F180015490C",
    R"F180015490D(DAT_1803f9288)F180015490D",
    R"F180015490T()F180015490T",
    R"F180015490F(18: if (hResInfo != (HRSRC)0x0) {
20: if (hResData != (HGLOBAL)0x0) {
22: if (*(char *)(lVar1 + 0x10) == '\0') {
29: return uVar4;
32: return 0;)F180015490F",
    R"F180015490U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9288.)F180015490U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015490() noexcept {
    return kFunction_0x180015490;
}

// 0x180015580 FUN_180015580
// source: re/dump/decompile/0x180015580_FUN_180015580.c
// size: 169 bytes; thunk: false
// body sha256: f5532240d8539f6beef9c1eca26794e1d67365134e58ffb8f3b002c0aa029392
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015580{
    "0x180015580",
    "FUN_180015580",
    R"F180015580S(undefined FUN_180015580())F180015580S",
    R"B180015580(// 0x180015580  FUN_180015580
// size=169 thunk=false
// signature: undefined FUN_180015580()
// status: ok


bool FUN_180015580(float *param_1,float *param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  sVar1 = _fdclass(fVar4);
  if (sVar1 < 1) {
    fVar2 = param_1[1];
    sVar1 = _fdclass(fVar2);
    if (sVar1 < 1) {
      fVar3 = param_1[2];
      sVar1 = _fdclass(fVar3);
      if (sVar1 < 1) {
        fVar2 = fVar2 - param_2[1];
        fVar4 = fVar4 - *param_2;
        fVar3 = fVar3 - param_2[2];
        return fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < DAT_1803812f4;
      }
    }
  }
  return false;
}


)B180015580",
    "f5532240d8539f6beef9c1eca26794e1d67365134e58ffb8f3b002c0aa029392",
    R"F180015580C()F180015580C",
    R"F180015580D(DAT_1803812f4)F180015580D",
    R"F180015580T()F180015580T",
    R"F180015580F(17: if (sVar1 < 1) {
20: if (sVar1 < 1) {
23: if (sVar1 < 1) {
27: return fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < DAT_1803812f4;
31: return false;)F180015580F",
    R"F180015580U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803812f4.)F180015580U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015580() noexcept {
    return kFunction_0x180015580;
}

// 0x180015630 FUN_180015630
// source: re/dump/decompile/0x180015630_FUN_180015630.c
// size: 2067 bytes; thunk: false
// body sha256: e6ec56e762ad7a39161332b7e800c577fbe9969fe7b0a22c606bcb6d7362a744
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015630{
    "0x180015630",
    "FUN_180015630",
    R"F180015630S(undefined FUN_180015630())F180015630S",
    R"B180015630(// 0x180015630  FUN_180015630
// size=2067 thunk=false
// signature: undefined FUN_180015630()
// status: ok


void FUN_180015630(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar21 = param_1[1];
  uVar19 = param_1[2];
  uVar18 = param_1[3];
  iVar1 = *param_2;
  iVar2 = param_2[5];
  iVar3 = param_2[1];
  uVar17 = *param_1 + -0x28955b88 + ((uVar18 ^ uVar19) & uVar21 ^ uVar18) + iVar1;
  uVar17 = (uVar17 >> 0x19 | uVar17 * 0x80) + uVar21;
  iVar4 = param_2[2];
  uVar18 = uVar18 + 0xe8c7b756 + ((uVar19 ^ uVar21) & uVar17 ^ uVar19) + iVar3;
  uVar18 = (uVar18 >> 0x14 | uVar18 * 0x1000) + uVar17;
  iVar5 = param_2[3];
  uVar19 = uVar19 + 0x242070db + ((uVar17 ^ uVar21) & uVar18 ^ uVar21) + iVar4;
  uVar20 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar18;
  iVar6 = param_2[4];
  uVar21 = uVar21 + 0xc1bdceee + ((uVar18 ^ uVar17) & uVar20 ^ uVar17) + iVar5;
  uVar22 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar20;
  iVar7 = param_2[6];
  uVar21 = iVar6 + -0xa83f051 + ((uVar20 ^ uVar18) & uVar22 ^ uVar18) + uVar17;
  uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar22;
  uVar19 = iVar2 + 0x4787c62a + ((uVar22 ^ uVar20) & uVar21 ^ uVar20) + uVar18;
  uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
  uVar18 = iVar7 + -0x57cfb9ed + ((uVar21 ^ uVar22) & uVar19 ^ uVar22) + uVar20;
  uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar19;
  iVar8 = param_2[8];
  iVar9 = param_2[7];
  iVar10 = param_2[10];
  iVar11 = param_2[0xc];
  iVar12 = param_2[0xd];
  iVar13 = param_2[0xe];
  uVar17 = iVar9 + -0x2b96aff + ((uVar19 ^ uVar21) & uVar18 ^ uVar21) + uVar22;
  uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar18;
  iVar14 = param_2[9];
  uVar21 = iVar8 + 0x698098d8 + ((uVar18 ^ uVar19) & uVar17 ^ uVar19) + uVar21;
  uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar17;
  iVar15 = param_2[0xb];
  uVar19 = iVar14 + -0x74bb0851 + ((uVar17 ^ uVar18) & uVar21 ^ uVar18) + uVar19;
  uVar20 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
  uVar19 = iVar10 + -0xa44f + ((uVar21 ^ uVar17) & uVar20 ^ uVar17) + uVar18;
  uVar22 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
  uVar19 = iVar15 + -0x76a32842 + ((uVar20 ^ uVar21) & uVar22 ^ uVar21) + uVar17;
  uVar18 = (uVar19 >> 10 | uVar19 * 0x400000) + uVar22;
  uVar21 = iVar11 + 0x6b901122 + ((uVar22 ^ uVar20) & uVar18 ^ uVar20) + uVar21;
  uVar19 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar18;
  uVar21 = iVar12 + -0x2678e6d + ((uVar18 ^ uVar22) & uVar19 ^ uVar22) + uVar20;
  uVar17 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar19;
  uVar21 = iVar13 + -0x5986bc72 + ((uVar19 ^ uVar18) & uVar17 ^ uVar18) + uVar22;
  iVar16 = param_2[0xf];
  uVar20 = (uVar21 >> 0xf | uVar21 * 0x20000) + uVar17;
  uVar21 = iVar16 + 0x49b40821 + ((uVar17 ^ uVar19) & uVar20 ^ uVar19) + uVar18;
  uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar20;
  uVar19 = iVar3 + -0x9e1da9e + ((uVar21 ^ uVar20) & uVar17 ^ uVar20) + uVar19;
  uVar19 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar21;
  uVar18 = iVar7 + -0x3fbf4cc0 + ((uVar19 ^ uVar21) & uVar20 ^ uVar21) + uVar17;
  uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar19;
  uVar17 = iVar15 + 0x265e5a51 + ((uVar18 ^ uVar19) & uVar21 ^ uVar19) + uVar20;
  uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar18;
  uVar21 = iVar1 + -0x16493856 + ((uVar17 ^ uVar18) & uVar19 ^ uVar18) + uVar21;
  uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar17;
  uVar19 = iVar2 + -0x29d0efa3 + ((uVar21 ^ uVar17) & uVar18 ^ uVar17) + uVar19;
  uVar19 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar21;
  uVar18 = iVar10 + 0x2441453 + ((uVar19 ^ uVar21) & uVar17 ^ uVar21) + uVar18;
  uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar19;
  uVar17 = iVar16 + -0x275e197f + ((uVar18 ^ uVar19) & uVar21 ^ uVar19) + uVar17;
  uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar18;
  uVar21 = iVar6 + -0x182c0438 + ((uVar17 ^ uVar18) & uVar19 ^ uVar18) + uVar21;
  uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar17;
  uVar19 = iVar14 + 0x21e1cde6 + ((uVar21 ^ uVar17) & uVar18 ^ uVar17) + uVar19;
  uVar19 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar21;
  uVar18 = iVar13 + -0x3cc8f82a + ((uVar19 ^ uVar21) & uVar17 ^ uVar21) + uVar18;
  uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar19;
  uVar17 = iVar5 + -0xb2af279 + ((uVar18 ^ uVar19) & uVar21 ^ uVar19) + uVar17;
  uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar18;
  uVar21 = iVar8 + 0x455a14ed + ((uVar17 ^ uVar18) & uVar19 ^ uVar18) + uVar21;
  uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar17;
  uVar19 = iVar12 + -0x561c16fb + ((uVar21 ^ uVar17) & uVar18 ^ uVar17) + uVar19;
  uVar19 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar21;
  uVar18 = iVar4 + -0x3105c08 + ((uVar19 ^ uVar21) & uVar17 ^ uVar21) + uVar18;
  uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar19;
  uVar17 = iVar9 + 0x676f02d9 + ((uVar18 ^ uVar19) & uVar21 ^ uVar19) + uVar17;
  uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar18;
  uVar21 = iVar11 + -0x72d5b376 + (uVar19 & (uVar17 ^ uVar18) ^ uVar18) + uVar21;
  uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar17;
  uVar19 = iVar2 + -0x5c6be + (uVar21 ^ uVar17 ^ uVar18) + uVar19;
  uVar19 = (uVar19 >> 0x1c | uVar19 * 0x10) + uVar21;
  uVar18 = iVar8 + -0x788e097f + (uVar19 ^ uVar21 ^ uVar17) + uVar18;
  uVar18 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar17 = iVar15 + 0x6d9d6122 + (uVar18 ^ uVar19 ^ uVar21) + uVar17;
  uVar20 = (uVar17 >> 0x10 | uVar17 * 0x10000) + uVar18;
  uVar21 = iVar13 + -0x21ac7f4 + (uVar19 ^ uVar20 ^ uVar18) + uVar21;
  uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar20;
  uVar19 = iVar3 + -0x5b4115bc + (uVar21 ^ uVar20 ^ uVar18) + uVar19;
  uVar19 = (uVar19 >> 0x1c | uVar19 * 0x10) + uVar21;
  uVar18 = iVar6 + 0x4bdecfa9 + (uVar19 ^ uVar21 ^ uVar20) + uVar18;
  uVar17 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar18 = iVar9 + -0x944b4a0 + (uVar17 ^ uVar19 ^ uVar21) + uVar20;
  uVar20 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar17;
  uVar21 = iVar10 + -0x41404390 + (uVar19 ^ uVar20 ^ uVar17) + uVar21;
  uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar20;
  uVar19 = iVar12 + 0x289b7ec6 + (uVar21 ^ uVar20 ^ uVar17) + uVar19;
  uVar18 = (uVar19 >> 0x1c | uVar19 * 0x10) + uVar21;
  uVar19 = iVar1 + -0x155ed806 + (uVar21 ^ uVar20 ^ uVar18) + uVar17;
  uVar17 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar18;
  uVar19 = iVar5 + -0x2b10cf7b + (uVar21 ^ uVar17 ^ uVar18) + uVar20;
  uVar20 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
  uVar21 = iVar7 + 0x4881d05 + (uVar20 ^ uVar17 ^ uVar18) + uVar21;
  uVar19 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar20;
  uVar21 = (uVar20 ^ uVar17 ^ uVar19) + iVar14 + uVar18 + 0xd9d4d039;
  uVar21 = (uVar21 >> 0x1c | uVar21 * 0x10) + uVar19;
  uVar18 = uVar17 + 0xe6db99e5 + (uVar21 ^ uVar19 ^ uVar20) + iVar11;
  uVar18 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar21;
  uVar17 = uVar20 + 0x1fa27cf8 + (uVar18 ^ uVar21 ^ uVar19) + iVar16;
  uVar17 = (uVar17 >> 0x10 | uVar17 * 0x10000) + uVar18;
  uVar19 = uVar19 + (uVar17 ^ uVar18 ^ uVar21) + 0xc4ac5665 + iVar4;
  uVar19 = (uVar19 >> 9 | uVar19 * 0x800000) + uVar17;
  uVar21 = iVar1 + -0xbd6ddbc + ((~uVar18 | uVar19) ^ uVar17) + uVar21;
  uVar20 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar19;
  uVar21 = uVar18 + 0x432aff97 + ((~uVar17 | uVar20) ^ uVar19) + iVar9;
  uVar21 = (uVar21 >> 0x16 | uVar21 * 0x400) + uVar20;
  uVar17 = uVar17 + ((~uVar19 | uVar21) ^ uVar20) + 0xab9423a7 + iVar13;
  uVar17 = (uVar17 >> 0x11 | uVar17 * 0x8000) + uVar21;
  uVar19 = uVar19 + ((~uVar20 | uVar17) ^ uVar21) + 0xfc93a039 + iVar2;
  uVar19 = (uVar19 >> 0xb | uVar19 * 0x200000) + uVar17;
  uVar18 = uVar20 + 0x655b59c3 + ((~uVar21 | uVar19) ^ uVar17) + iVar11;
  uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar19;
  uVar21 = iVar5 + -0x70f3336e + ((~uVar17 | uVar18) ^ uVar19) + uVar21;
  uVar20 = (uVar21 >> 0x16 | uVar21 * 0x400) + uVar18;
  uVar21 = (uVar17 - 0x100b83) + ((~uVar19 | uVar20) ^ uVar18) + iVar10;
  uVar21 = (uVar21 >> 0x11 | uVar21 * 0x8000) + uVar20;
  uVar19 = iVar3 + -0x7a7ba22f + ((~uVar18 | uVar21) ^ uVar20) + uVar19;
  uVar19 = (uVar19 >> 0xb | uVar19 * 0x200000) + uVar21;
  uVar18 = iVar8 + 0x6fa87e4f + ((~uVar20 | uVar19) ^ uVar21) + uVar18;
  uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar19;
  uVar17 = uVar20 + 0xfe2ce6e0 + ((~uVar21 | uVar18) ^ uVar19) + iVar16;
  uVar20 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
  uVar21 = iVar7 + -0x5cfebcec + ((~uVar19 | uVar20) ^ uVar18) + uVar21;
  uVar21 = (uVar21 >> 0x11 | uVar21 * 0x8000) + uVar20;
  uVar19 = iVar12 + 0x4e0811a1 + ((~uVar18 | uVar21) ^ uVar20) + uVar19;
  uVar22 = (uVar19 >> 0xb | uVar19 * 0x200000) + uVar21;
  uVar19 = iVar6 + -0x8ac817e + ((~uVar20 | uVar22) ^ uVar21) + uVar18;
  uVar17 = (uVar19 >> 0x1a | uVar19 * 0x40) + uVar22;
  uVar19 = iVar15 + -0x42c50dcb + ((~uVar21 | uVar17) ^ uVar22) + uVar20;
  uVar18 = (uVar19 >> 0x16 | uVar19 * 0x400) + uVar17;
  *param_1 = *param_1 + uVar17;
  uVar21 = iVar4 + 0x2ad7d2bb + ((~uVar22 | uVar18) ^ uVar17) + uVar21;
  uVar19 = (uVar21 >> 0x11 | uVar21 * 0x8000) + uVar18;
  param_1[2] = param_1[2] + uVar19;
  uVar21 = iVar14 + -0x14792c6f + ((~uVar17 | uVar19) ^ uVar18) + uVar22;
  param_1[1] = param_1[1] + (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
  param_1[3] = param_1[3] + uVar18;
  return;
}


)B180015630",
    "e6ec56e762ad7a39161332b7e800c577fbe9969fe7b0a22c606bcb6d7362a744",
    R"F180015630C()F180015630C",
    R"F180015630D()F180015630D",
    R"F180015630T()F180015630T",
    R"F180015630F(183: return;)F180015630F",
    R"F180015630U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180015630U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015630() noexcept {
    return kFunction_0x180015630;
}

// 0x180015e50 FUN_180015e50
// source: re/dump/decompile/0x180015e50_FUN_180015e50.c
// size: 225 bytes; thunk: false
// body sha256: fe58610c4c38136b97860931be8856ca8b0a54119e598a4332b92650d1454e7a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015e50{
    "0x180015e50",
    "FUN_180015e50",
    R"F180015e50S(undefined FUN_180015e50())F180015e50S",
    R"B180015e50(// 0x180015e50  FUN_180015e50
// size=225 thunk=false
// signature: undefined FUN_180015e50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180015ec7) */

undefined4 FUN_180015e50(undefined4 param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0x67452301;
  local_74 = 0xab89;
  uStack_72 = 0xefcd;
  local_70 = 0xdcfe;
  uStack_6e = 0x98ba;
  uStack_58 = 0;
  local_6c = 0x10325476;
  local_68 = 0x20;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_60 = (ulonglong)CONCAT14(0x80,param_1);
  memset((void *)((longlong)&local_60 + 5),0,0x33);
  uStack_28 = local_68;
  FUN_180015630(&local_78,&local_60);
  return CONCAT22(local_70,uStack_72);
}


)B180015e50",
    "fe58610c4c38136b97860931be8856ca8b0a54119e598a4332b92650d1454e7a",
    R"F180015e50C(FUN_180015630)F180015e50C",
    R"F180015e50D(DAT_1803da4c0)F180015e50D",
    R"F180015e50T()F180015e50T",
    R"F180015e50F(50: return CONCAT22(local_70,uStack_72);)F180015e50F",
    R"F180015e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180015e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015e50() noexcept {
    return kFunction_0x180015e50;
}

// 0x180015f40 FUN_180015f40
// source: re/dump/decompile/0x180015f40_FUN_180015f40.c
// size: 406 bytes; thunk: false
// body sha256: 76bb26eea529cdc811b952b7fb4c44236e13ade89891e6dbf686e10aacb3586f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180015f40{
    "0x180015f40",
    "FUN_180015f40",
    R"F180015f40S(undefined FUN_180015f40())F180015f40S",
    R"B180015f40(// 0x180015f40  FUN_180015f40
// size=406 thunk=false
// signature: undefined FUN_180015f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HMODULE FUN_180015f40(LPCSTR param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  HMODULE pHVar6;
  uint uVar7;
  LPCSTR lpModuleName;
  byte *pbVar8;
  HMODULE pHVar9;
  HMODULE pHVar10;
  undefined1 auStack_68 [32];
  LPCSTR local_48;
  byte *local_40;
  undefined1 local_38 [8];
  uint local_30;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  pbVar8 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar8 = *(byte **)param_2;
  }
  lpModuleName = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    lpModuleName = *(LPCSTR *)param_1;
  }
  local_48 = param_1;
  local_40 = param_2;
  pHVar4 = GetModuleHandleA(lpModuleName);
  pvVar5 = GetCurrentProcess();
  K32GetModuleInformation(pvVar5,pHVar4,local_38,0x18);
  pHVar10 = (HMODULE)((longlong)&pHVar4->unused + (ulonglong)local_30);
  if (pHVar4 < pHVar10) {
    pHVar9 = (HMODULE)0x0;
    do {
      bVar1 = *pbVar8;
      pHVar6 = pHVar9;
      if (bVar1 == 0) goto LAB_1800160c0;
      if (bVar1 == 0x3f) {
LAB_180016057:
        pHVar6 = pHVar4;
        if (pHVar9 != (HMODULE)0x0) {
          pHVar6 = pHVar9;
        }
        if (pbVar8[2] == 0) {
LAB_1800160c0:
          FUN_18020e450(param_1);
          FUN_18020e450(param_2);
          return pHVar6;
        }
        if ((*(short *)pbVar8 == 0x3f3f) || (bVar1 != 0x3f)) {
          pbVar8 = pbVar8 + 3;
        }
        else {
          pbVar8 = pbVar8 + 2;
        }
      }
      else {
        if ((byte)((bVar1 & 0xdf) + 0xbf) < 6) {
          iVar3 = ((int)(char)bVar1 & 0xffffffdfU) - 0x37;
        }
        else if ((byte)(bVar1 - 0x30) < 10) {
          iVar3 = (int)(char)bVar1 - 0x30;
        }
        else {
          iVar3 = 0;
        }
        bVar2 = pbVar8[1];
        if ((byte)((bVar2 & 0xdf) + 0xbf) < 6) {
          uVar7 = ((int)(char)bVar2 & 0xffffffdfU) - 0x37;
        }
        else if ((byte)(bVar2 - 0x30) < 10) {
          uVar7 = (int)(char)bVar2 - 0x30;
        }
        else {
          uVar7 = 0;
        }
        if ((uint)(byte)pHVar4->unused == (iVar3 << 4 | uVar7)) goto LAB_180016057;
        if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
          pHVar6 = (HMODULE)0x0;
          pbVar8 = param_2;
        }
        else {
          pHVar6 = (HMODULE)0x0;
          pbVar8 = *(byte **)param_2;
        }
      }
      pHVar4 = (HMODULE)((longlong)&pHVar4->unused + 1);
      pHVar9 = pHVar6;
    } while (pHVar4 < pHVar10);
  }
  FUN_18020e450(param_1);
  FUN_18020e450(param_2);
  return (HMODULE)0x0;
}


)B180015f40",
    "76bb26eea529cdc811b952b7fb4c44236e13ade89891e6dbf686e10aacb3586f",
    R"F180015f40C(FUN_18020e450)F180015f40C",
    R"F180015f40D(LAB_180016057
LAB_1800160c0
DAT_1803da4c0)F180015f40D",
    R"F180015f40T()F180015f40T",
    R"F180015f40F(32: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
36: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
45: if (pHVar4 < pHVar10) {
47: do {
50: if (bVar1 == 0) goto LAB_1800160c0;
51: if (bVar1 == 0x3f) {
52: LAB_180016057:
54: if (pHVar9 != (HMODULE)0x0) {
57: if (pbVar8[2] == 0) {
58: LAB_1800160c0:
61: return pHVar6;
63: if ((*(short *)pbVar8 == 0x3f3f) || (bVar1 != 0x3f)) {
66: else {
70: else {
71: if ((byte)((bVar1 & 0xdf) + 0xbf) < 6) {
74: else if ((byte)(bVar1 - 0x30) < 10) {
77: else {
81: if ((byte)((bVar2 & 0xdf) + 0xbf) < 6) {
84: else if ((byte)(bVar2 - 0x30) < 10) {
87: else {
90: if ((uint)(byte)pHVar4->unused == (iVar3 << 4 | uVar7)) goto LAB_180016057;
91: if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
95: else {
106: return (HMODULE)0x0;)F180015f40F",
    R"F180015f40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180016057.
TODO: recover the declaration, type and value for global/data reference LAB_1800160c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180015f40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180015f40() noexcept {
    return kFunction_0x180015f40;
}

// 0x1800160e0 FUN_1800160e0
// source: re/dump/decompile/0x1800160e0_FUN_1800160e0.c
// size: 795 bytes; thunk: false
// body sha256: 3f44e5242b74f69603098a9a8d7b7b192e60a013a86a97004c4786952652a7fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800160e0{
    "0x1800160e0",
    "FUN_1800160e0",
    R"F1800160e0S(undefined FUN_1800160e0())F1800160e0S",
    R"B1800160e0(// 0x1800160e0  FUN_1800160e0
// size=795 thunk=false
// signature: undefined FUN_1800160e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800160e0(LPCSTR param_1,longlong *param_2)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  HMODULE pHVar10;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  uint *local_60;
  uint *puStack_58;
  uint *local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(LPCSTR *)param_1;
  }
  pHVar2 = GetModuleHandleA(param_1);
  if (pHVar2 != (HMODULE)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_48,0x18);
    if (iVar1 != 0) {
      local_60 = (uint *)0x0;
      puStack_58 = (uint *)0x0;
      local_50 = (uint *)0x0;
      uVar8 = 0;
      puVar9 = (uint *)0x0;
      if (param_2[2] != 0) {
        do {
          uVar6 = param_2[3];
          plVar5 = param_2;
          if (0xf < uVar6) {
            plVar5 = (longlong *)*param_2;
          }
          if (*(char *)((longlong)plVar5 + uVar8) == ' ') {
            uVar8 = uVar8 + 1;
          }
          else {
            plVar5 = param_2;
            if (0xf < uVar6) {
              plVar5 = (longlong *)*param_2;
            }
            if (*(char *)((longlong)plVar5 + uVar8) == '?') {
              local_68[0] = 0xffffffff;
              if (puVar9 == local_50) {
                FUN_180229d20(&local_60,puVar9,local_68);
              }
              else {
                *puVar9 = 0xffffffff;
                puStack_58 = puStack_58 + 1;
              }
              if (uVar8 + 1 < (ulonglong)param_2[2]) {
                plVar5 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  plVar5 = (longlong *)*param_2;
                }
                lVar4 = 2;
                if (*(char *)((longlong)plVar5 + uVar8 + 1) != '?') goto LAB_1800161fc;
              }
              else {
LAB_1800161fc:
                lVar4 = 1;
              }
              uVar8 = uVar8 + lVar4;
              puVar9 = puStack_58;
            }
            else {
              plVar5 = param_2;
              if (0xf < uVar6) {
                plVar5 = (longlong *)*param_2;
              }
              if ((char)(*(byte *)((longlong)plVar5 + uVar8) & 0xdf) < 'A') {
LAB_18001624d:
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('/' < *(char *)((longlong)plVar5 + uVar8)) {
                  plVar5 = param_2;
                  if (0xf < uVar6) {
                    plVar5 = (longlong *)*param_2;
                  }
                  if (*(char *)((longlong)plVar5 + uVar8) < ':') {
                    plVar5 = param_2;
                    if (0xf < uVar6) {
                      plVar5 = (longlong *)*param_2;
                    }
                    iVar1 = *(char *)((longlong)plVar5 + uVar8) + -0x30;
                    goto LAB_180016288;
                  }
                }
                iVar1 = 0;
              }
              else {
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar5 + uVar8) & 0xdf)) goto LAB_18001624d;
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                iVar1 = ((int)*(char *)((longlong)plVar5 + uVar8) & 0xffffffdfU) - 0x37;
              }
LAB_180016288:
              uVar6 = param_2[3];
              plVar5 = param_2;
              if (0xf < uVar6) {
                plVar5 = (longlong *)*param_2;
              }
              if ((char)(*(byte *)((longlong)plVar5 + uVar8 + 1) & 0xdf) < 'A') {
LAB_1800162e3:
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('/' < *(char *)((longlong)plVar5 + uVar8 + 1)) {
                  plVar5 = param_2;
                  if (0xf < uVar6) {
                    plVar5 = (longlong *)*param_2;
                  }
                  if (*(char *)((longlong)plVar5 + uVar8 + 1) < ':') {
                    if (uVar6 < 0x10) {
                      local_68[0] = (int)*(char *)((longlong)param_2 + uVar8 + 1) - 0x30;
                    }
                    else {
                      local_68[0] = (int)*(char *)(*param_2 + 1 + uVar8) - 0x30;
                    }
                    goto LAB_18001632b;
                  }
                }
                local_68[0] = 0;
              }
              else {
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar5 + uVar8 + 1) & 0xdf))
                goto LAB_1800162e3;
                if (uVar6 < 0x10) {
                  local_68[0] = ((int)*(char *)((longlong)param_2 + uVar8 + 1) & 0xffffffdfU) - 0x37
                  ;
                }
                else {
                  local_68[0] = ((int)*(char *)(*param_2 + 1 + uVar8) & 0xffffffdfU) - 0x37;
                }
              }
LAB_18001632b:
              local_68[0] = iVar1 << 4 | local_68[0];
              if (puVar9 == local_50) {
                FUN_180229d20(&local_60,puVar9,local_68);
              }
              else {
                *puVar9 = local_68[0];
                puStack_58 = puStack_58 + 1;
              }
              uVar8 = uVar8 + 2;
              puVar9 = puStack_58;
            }
          }
        } while (uVar8 < (ulonglong)param_2[2]);
      }
      uVar8 = 0;
      if (local_60 != puVar9) {
        pHVar10 = (HMODULE)(((uStack_40 & 0xffffffff) - ((longlong)puVar9 - (longlong)local_60 >> 2)
                            ) + (longlong)pHVar2);
        for (; pHVar2 < pHVar10; pHVar2 = (HMODULE)((longlong)&pHVar2->unused + 1)) {
          uVar6 = 0;
          uVar7 = (longlong)puVar9 - (longlong)local_60 >> 2;
          if (uVar7 != 0) {
            do {
              if ((-1 < (int)local_60[uVar6]) &&
                 (*(char *)((longlong)&pHVar2->unused + uVar6) != (char)local_60[uVar6]))
              goto LAB_1800163ce;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
          if ((uVar6 == (longlong)puVar9 - (longlong)local_60 >> 2) &&
             (uVar8 = uVar8 + 1, 0xf < uVar8)) break;
LAB_1800163ce:
        }
      }
      FUN_18021e060(&local_60);
      return uVar8;
    }
  }
  return 0;
}


)B1800160e0",
    "3f44e5242b74f69603098a9a8d7b7b192e60a013a86a97004c4786952652a7fb",
    R"F1800160e0C(FUN_18021e060
FUN_180229d20)F1800160e0C",
    R"F1800160e0D(LAB_1800161fc
LAB_18001624d
LAB_180016288
LAB_1800162e3
LAB_18001632b
LAB_1800163ce
DAT_1803da4c0)F1800160e0D",
    R"F1800160e0T()F1800160e0T",
    R"F1800160e0F(33: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
37: if (pHVar2 != (HMODULE)0x0) {
43: if (iVar1 != 0) {
49: if (param_2[2] != 0) {
50: do {
53: if (0xf < uVar6) {
56: if (*(char *)((longlong)plVar5 + uVar8) == ' ') {
59: else {
61: if (0xf < uVar6) {
64: if (*(char *)((longlong)plVar5 + uVar8) == '?') {
66: if (puVar9 == local_50) {
69: else {
73: if (uVar8 + 1 < (ulonglong)param_2[2]) {
75: if (0xf < (ulonglong)param_2[3]) {
79: if (*(char *)((longlong)plVar5 + uVar8 + 1) != '?') goto LAB_1800161fc;
81: else {
82: LAB_1800161fc:
88: else {
90: if (0xf < uVar6) {
93: if ((char)(*(byte *)((longlong)plVar5 + uVar8) & 0xdf) < 'A') {
94: LAB_18001624d:
96: if (0xf < uVar6) {
99: if ('/' < *(char *)((longlong)plVar5 + uVar8)) {
101: if (0xf < uVar6) {
104: if (*(char *)((longlong)plVar5 + uVar8) < ':') {
106: if (0xf < uVar6) {
110: goto LAB_180016288;
115: else {
117: if (0xf < uVar6) {
120: if ('F' < (char)(*(byte *)((longlong)plVar5 + uVar8) & 0xdf)) goto LAB_18001624d;
122: if (0xf < uVar6) {
127: LAB_180016288:
130: if (0xf < uVar6) {
133: if ((char)(*(byte *)((longlong)plVar5 + uVar8 + 1) & 0xdf) < 'A') {
134: LAB_1800162e3:
136: if (0xf < uVar6) {
139: if ('/' < *(char *)((longlong)plVar5 + uVar8 + 1)) {
141: if (0xf < uVar6) {
144: if (*(char *)((longlong)plVar5 + uVar8 + 1) < ':') {
145: if (uVar6 < 0x10) {
148: else {
151: goto LAB_18001632b;
156: else {
158: if (0xf < uVar6) {
161: if ('F' < (char)(*(byte *)((longlong)plVar5 + uVar8 + 1) & 0xdf))
162: goto LAB_1800162e3;
163: if (uVar6 < 0x10) {
167: else {
171: LAB_18001632b:
173: if (puVar9 == local_50) {
176: else {
187: if (local_60 != puVar9) {
190: for (; pHVar2 < pHVar10; pHVar2 = (HMODULE)((longlong)&pHVar2->unused + 1)) {
193: if (uVar7 != 0) {
194: do {
195: if ((-1 < (int)local_60[uVar6]) &&
197: goto LAB_1800163ce;
201: if ((uVar6 == (longlong)puVar9 - (longlong)local_60 >> 2) &&
203: LAB_1800163ce:
207: return uVar8;
210: return 0;)F1800160e0F",
    R"F1800160e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800161fc.
TODO: recover the declaration, type and value for global/data reference LAB_18001624d.
TODO: recover the declaration, type and value for global/data reference LAB_180016288.
TODO: recover the declaration, type and value for global/data reference LAB_1800162e3.
TODO: recover the declaration, type and value for global/data reference LAB_18001632b.
TODO: recover the declaration, type and value for global/data reference LAB_1800163ce.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1800160e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800160e0() noexcept {
    return kFunction_0x1800160e0;
}

// 0x180016400 FUN_180016400
// source: re/dump/decompile/0x180016400_FUN_180016400.c
// size: 15 bytes; thunk: false
// body sha256: 54021093e7ae8feed416bf797aa354a959263e1fc0ecfec5c9336b90668c32df
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180016400{
    "0x180016400",
    "FUN_180016400",
    R"F180016400S(undefined FUN_180016400())F180016400S",
    R"B180016400(// 0x180016400  FUN_180016400
// size=15 thunk=false
// signature: undefined FUN_180016400()
// status: ok


undefined8 * FUN_180016400(undefined8 *param_1)

{
  if (0xf < (ulonglong)param_1[3]) {
    return (undefined8 *)*param_1;
  }
  return param_1;
}


)B180016400",
    "54021093e7ae8feed416bf797aa354a959263e1fc0ecfec5c9336b90668c32df",
    R"F180016400C()F180016400C",
    R"F180016400D()F180016400D",
    R"F180016400T()F180016400T",
    R"F180016400F(10: if (0xf < (ulonglong)param_1[3]) {
11: return (undefined8 *)*param_1;
13: return param_1;)F180016400F",
    R"F180016400U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180016400U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180016400() noexcept {
    return kFunction_0x180016400;
}

// 0x180016410 FUN_180016410
// source: re/dump/decompile/0x180016410_FUN_180016410.c
// size: 948 bytes; thunk: false
// body sha256: f87bc20fc51ec3e6e57dd6b5d5d8520be8f173c22cede4ddf83be9db06245caa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180016410{
    "0x180016410",
    "FUN_180016410",
    R"F180016410S(undefined FUN_180016410())F180016410S",
    R"B180016410(// 0x180016410  FUN_180016410
// size=948 thunk=false
// signature: undefined FUN_180016410()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180016410(longlong *param_1,LPCSTR param_2,longlong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  HMODULE pHVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  HMODULE local_80;
  longlong *local_78;
  uint *local_70;
  uint *puStack_68;
  uint *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar13 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_88 = 1;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(LPCSTR *)param_2;
  }
  local_78 = param_1;
  pHVar4 = GetModuleHandleA(param_2);
  if (pHVar4 != (HMODULE)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    pvVar5 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar5,pHVar4,&local_58,0x18);
    if (iVar2 != 0) {
      local_70 = (uint *)0x0;
      puStack_68 = (uint *)0x0;
      local_60 = (uint *)0x0;
      puVar12 = (uint *)0x0;
      uVar10 = uVar13;
      if (param_3[2] != 0) {
        do {
          uVar8 = param_3[3];
          plVar7 = param_3;
          if (0xf < uVar8) {
            plVar7 = (longlong *)*param_3;
          }
          if (*(char *)((longlong)plVar7 + uVar10) == ' ') {
            uVar10 = uVar10 + 1;
          }
          else {
            plVar7 = param_3;
            if (0xf < uVar8) {
              plVar7 = (longlong *)*param_3;
            }
            if (*(char *)((longlong)plVar7 + uVar10) == '?') {
              local_80 = (HMODULE)CONCAT44(local_80._4_4_,0xffffffff);
              if (puVar12 == local_60) {
                FUN_180229d20(&local_70,puVar12,&local_80);
              }
              else {
                *puVar12 = 0xffffffff;
                puStack_68 = puStack_68 + 1;
              }
              if (uVar10 + 1 < (ulonglong)param_3[2]) {
                plVar7 = param_3;
                if (0xf < (ulonglong)param_3[3]) {
                  plVar7 = (longlong *)*param_3;
                }
                lVar6 = 2;
                if (*(char *)((longlong)plVar7 + uVar10 + 1) != '?') goto LAB_18001656c;
              }
              else {
LAB_18001656c:
                lVar6 = 1;
              }
              uVar10 = uVar10 + lVar6;
              puVar12 = puStack_68;
            }
            else {
              plVar7 = param_3;
              if (0xf < uVar8) {
                plVar7 = (longlong *)*param_3;
              }
              iVar2 = 0;
              if ((char)(*(byte *)((longlong)plVar7 + uVar10) & 0xdf) < 'A') {
LAB_1800165bb:
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('/' < *(char *)((longlong)plVar7 + uVar10)) {
                  plVar7 = param_3;
                  if (0xf < uVar8) {
                    plVar7 = (longlong *)*param_3;
                  }
                  if (*(char *)((longlong)plVar7 + uVar10) < ':') {
                    plVar7 = param_3;
                    if (0xf < uVar8) {
                      plVar7 = (longlong *)*param_3;
                    }
                    iVar2 = *(char *)((longlong)plVar7 + uVar10) + -0x30;
                  }
                }
              }
              else {
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar7 + uVar10) & 0xdf)) goto LAB_1800165bb;
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                iVar2 = ((int)*(char *)((longlong)plVar7 + uVar10) & 0xffffffdfU) - 0x37;
              }
              plVar7 = param_3;
              if (0xf < uVar8) {
                plVar7 = (longlong *)*param_3;
              }
              if ((char)(*(byte *)((longlong)plVar7 + uVar10 + 1) & 0xdf) < 'A') {
LAB_18001664e:
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('/' < *(char *)((longlong)plVar7 + uVar10 + 1)) {
                  plVar7 = param_3;
                  if (0xf < uVar8) {
                    plVar7 = (longlong *)*param_3;
                  }
                  if (*(char *)((longlong)plVar7 + uVar10 + 1) < ':') {
                    if (uVar8 < 0x10) {
                      uVar3 = (int)*(char *)((longlong)param_3 + uVar10 + 1) - 0x30;
                    }
                    else {
                      uVar3 = (int)*(char *)(*param_3 + 1 + uVar10) - 0x30;
                    }
                    goto LAB_180016697;
                  }
                }
                uVar3 = 0;
              }
              else {
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar7 + uVar10 + 1) & 0xdf))
                goto LAB_18001664e;
                if (uVar8 < 0x10) {
                  uVar3 = ((int)*(char *)((longlong)param_3 + uVar10 + 1) & 0xffffffdfU) - 0x37;
                }
                else {
                  uVar3 = ((int)*(char *)(*param_3 + 1 + uVar10) & 0xffffffdfU) - 0x37;
                }
              }
LAB_180016697:
              uVar3 = uVar3 | iVar2 << 4;
              local_80 = (HMODULE)CONCAT44(local_80._4_4_,uVar3);
              if (puVar12 == local_60) {
                FUN_180229d20(&local_70,puVar12,&local_80);
              }
              else {
                *puVar12 = uVar3;
                puStack_68 = puStack_68 + 1;
              }
              uVar10 = uVar10 + 2;
              puVar12 = puStack_68;
            }
          }
        } while (uVar10 < (ulonglong)param_3[2]);
      }
      if (local_70 != puVar12) {
        pHVar9 = (HMODULE)(((uStack_50 & 0xffffffff) - ((longlong)puVar12 - (longlong)local_70 >> 2)
                           ) + (longlong)pHVar4);
        puVar11 = local_70;
        for (; local_80 = pHVar4, pHVar4 < pHVar9; pHVar4 = (HMODULE)((longlong)&pHVar4->unused + 1)
            ) {
          uVar8 = (longlong)puVar12 - (longlong)puVar11 >> 2;
          uVar10 = uVar13;
          if (uVar8 != 0) {
            do {
              if ((-1 < (int)puVar11[uVar10]) &&
                 (*(char *)((longlong)&pHVar4->unused + uVar10) != (char)puVar11[uVar10]))
              goto LAB_18001677f;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar8);
          }
          if (uVar10 == (longlong)puVar12 - (longlong)puVar11 >> 2) {
            puVar1 = (ulonglong *)param_1[1];
            if (puVar1 == (ulonglong *)param_1[2]) {
              FUN_180221c00(param_1,puVar1,&local_80);
            }
            else {
              *puVar1 = (ulonglong)pHVar4;
              param_1[1] = param_1[1] + 8;
            }
            puVar11 = local_70;
            puVar12 = puStack_68;
            if (param_4 <= (ulonglong)(param_1[1] - *param_1 >> 3)) break;
          }
LAB_18001677f:
        }
      }
      local_88 = 0;
      FUN_18021e060(&local_70);
    }
  }
  return param_1;
}


)B180016410",
    "f87bc20fc51ec3e6e57dd6b5d5d8520be8f173c22cede4ddf83be9db06245caa",
    R"F180016410C(FUN_18021e060
FUN_180221c00
FUN_180229d20)F180016410C",
    R"F180016410D(LAB_18001656c
LAB_1800165bb
LAB_18001664e
LAB_180016697
LAB_18001677f
DAT_1803da4c0)F180016410D",
    R"F180016410T()F180016410T",
    R"F180016410F(45: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
50: if (pHVar4 != (HMODULE)0x0) {
56: if (iVar2 != 0) {
62: if (param_3[2] != 0) {
63: do {
66: if (0xf < uVar8) {
69: if (*(char *)((longlong)plVar7 + uVar10) == ' ') {
72: else {
74: if (0xf < uVar8) {
77: if (*(char *)((longlong)plVar7 + uVar10) == '?') {
79: if (puVar12 == local_60) {
82: else {
86: if (uVar10 + 1 < (ulonglong)param_3[2]) {
88: if (0xf < (ulonglong)param_3[3]) {
92: if (*(char *)((longlong)plVar7 + uVar10 + 1) != '?') goto LAB_18001656c;
94: else {
95: LAB_18001656c:
101: else {
103: if (0xf < uVar8) {
107: if ((char)(*(byte *)((longlong)plVar7 + uVar10) & 0xdf) < 'A') {
108: LAB_1800165bb:
110: if (0xf < uVar8) {
113: if ('/' < *(char *)((longlong)plVar7 + uVar10)) {
115: if (0xf < uVar8) {
118: if (*(char *)((longlong)plVar7 + uVar10) < ':') {
120: if (0xf < uVar8) {
127: else {
129: if (0xf < uVar8) {
132: if ('F' < (char)(*(byte *)((longlong)plVar7 + uVar10) & 0xdf)) goto LAB_1800165bb;
134: if (0xf < uVar8) {
140: if (0xf < uVar8) {
143: if ((char)(*(byte *)((longlong)plVar7 + uVar10 + 1) & 0xdf) < 'A') {
144: LAB_18001664e:
146: if (0xf < uVar8) {
149: if ('/' < *(char *)((longlong)plVar7 + uVar10 + 1)) {
151: if (0xf < uVar8) {
154: if (*(char *)((longlong)plVar7 + uVar10 + 1) < ':') {
155: if (uVar8 < 0x10) {
158: else {
161: goto LAB_180016697;
166: else {
168: if (0xf < uVar8) {
171: if ('F' < (char)(*(byte *)((longlong)plVar7 + uVar10 + 1) & 0xdf))
172: goto LAB_18001664e;
173: if (uVar8 < 0x10) {
176: else {
180: LAB_180016697:
183: if (puVar12 == local_60) {
186: else {
196: if (local_70 != puVar12) {
200: for (; local_80 = pHVar4, pHVar4 < pHVar9; pHVar4 = (HMODULE)((longlong)&pHVar4->unused + 1)
204: if (uVar8 != 0) {
205: do {
206: if ((-1 < (int)puVar11[uVar10]) &&
208: goto LAB_18001677f;
212: if (uVar10 == (longlong)puVar12 - (longlong)puVar11 >> 2) {
214: if (puVar1 == (ulonglong *)param_1[2]) {
217: else {
223: if (param_4 <= (ulonglong)(param_1[1] - *param_1 >> 3)) break;
225: LAB_18001677f:
232: return param_1;)F180016410F",
    R"F180016410U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18001656c.
TODO: recover the declaration, type and value for global/data reference LAB_1800165bb.
TODO: recover the declaration, type and value for global/data reference LAB_18001664e.
TODO: recover the declaration, type and value for global/data reference LAB_180016697.
TODO: recover the declaration, type and value for global/data reference LAB_18001677f.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180016410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180016410() noexcept {
    return kFunction_0x180016410;
}

// 0x1800167d0 FUN_1800167d0
// source: re/dump/decompile/0x1800167d0_FUN_1800167d0.c
// size: 353 bytes; thunk: false
// body sha256: dd1ed3a88dd6a69400487ebb41c3cca98fc46edb645b27350d649749a69ce400
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800167d0{
    "0x1800167d0",
    "FUN_1800167d0",
    R"F1800167d0S(undefined FUN_1800167d0())F1800167d0S",
    R"B1800167d0(// 0x1800167d0  FUN_1800167d0
// size=353 thunk=false
// signature: undefined FUN_1800167d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800167d0(ulonglong *param_1,undefined8 param_2,char *param_3)

{
  undefined1 *_Size;
  BOOL BVar1;
  int iVar2;
  ulonglong uVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  HMODULE pHVar6;
  undefined4 extraout_var_01;
  HMODULE pHVar7;
  HMODULE pHVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  uVar3 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((ulonglong *)0xffff < param_1) {
    local_10 = uVar3;
    pHVar4 = GetModuleHandleA("client.dll");
    uVar3 = 0;
    if (pHVar4 != (HMODULE)0x0) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      pvVar5 = GetCurrentProcess();
      uVar3 = K32GetModuleInformation(pvVar5,pHVar4,&local_28,0x18);
      if ((int)uVar3 != 0) {
        BVar1 = IsBadReadPtr(param_1,8);
        uVar3 = CONCAT44(extraout_var,BVar1);
        if (BVar1 == 0) {
          pHVar7 = (HMODULE)*param_1;
          pHVar6 = pHVar4 + 2;
          if ((pHVar6 <= pHVar7) &&
             (pHVar8 = (HMODULE)((longlong)&pHVar4->unused + (uStack_20 & 0xffffffff)),
             pHVar7 < pHVar8)) {
            BVar1 = IsBadReadPtr(pHVar7 + -2,8);
            pHVar6 = (HMODULE)CONCAT44(extraout_var_00,BVar1);
            if (((BVar1 == 0) &&
                ((((pHVar7 = *(HMODULE *)(pHVar7 + -2), pHVar4 <= pHVar7 &&
                   (pHVar6 = pHVar7 + 6, pHVar6 <= pHVar8)) && (pHVar7->unused == 1)) &&
                 ((pHVar7[1].unused == 0 && (0 < pHVar7[3].unused)))))) &&
               (pHVar6 = (HMODULE)((longlong)&pHVar4->unused + (ulonglong)(uint)pHVar7[5].unused),
               pHVar6 == pHVar7)) {
              pHVar7 = (HMODULE)((longlong)&pHVar4[4].unused + (ulonglong)(uint)pHVar7[3].unused);
              pHVar6 = (HMODULE)strlen(param_3);
              if (((pHVar4 <= pHVar7) && (pHVar7 < pHVar8)) &&
                 (_Size = (undefined1 *)((longlong)&pHVar6->unused + 1),
                 _Size <= (undefined1 *)((longlong)pHVar8 - (longlong)pHVar7))) {
                iVar2 = memcmp(pHVar7,param_3,(size_t)_Size);
                return CONCAT71((int7)(CONCAT44(extraout_var_01,iVar2) >> 8),iVar2 == 0);
              }
            }
          }
          return (ulonglong)pHVar6 & 0xffffffffffffff00;
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


)B1800167d0",
    "dd1ed3a88dd6a69400487ebb41c3cca98fc46edb645b27350d649749a69ce400",
    R"F1800167d0C()F1800167d0C",
    R"F1800167d0D(DAT_1803da4c0)F1800167d0D",
    R"F1800167d0T("client.dll")F1800167d0T",
    R"F1800167d0F(31: if ((ulonglong *)0xffff < param_1) {
35: if (pHVar4 != (HMODULE)0x0) {
41: if ((int)uVar3 != 0) {
44: if (BVar1 == 0) {
47: if ((pHVar6 <= pHVar7) &&
52: if (((BVar1 == 0) &&
60: if (((pHVar4 <= pHVar7) && (pHVar7 < pHVar8)) &&
64: return CONCAT71((int7)(CONCAT44(extraout_var_01,iVar2) >> 8),iVar2 == 0);
68: return (ulonglong)pHVar6 & 0xffffffffffffff00;
73: return uVar3 & 0xffffffffffffff00;)F1800167d0F",
    R"F1800167d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1800167d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800167d0() noexcept {
    return kFunction_0x1800167d0;
}

// 0x180016940 FUN_180016940
// source: re/dump/decompile/0x180016940_FUN_180016940.c
// size: 1229 bytes; thunk: false
// body sha256: 34f0fe61ea058706b9fce757f1da7f7e9d29cd6a204176498b906b8ca5cc857e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180016940{
    "0x180016940",
    "FUN_180016940",
    R"F180016940S(undefined FUN_180016940())F180016940S",
    R"B180016940(// 0x180016940  FUN_180016940
// size=1229 thunk=false
// signature: undefined FUN_180016940()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HMODULE FUN_180016940(undefined8 param_1,char *param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  int iVar7;
  HMODULE pHVar8;
  HANDLE pvVar9;
  SIZE_T SVar10;
  size_t sVar11;
  uint uVar12;
  longlong lVar13;
  HMODULE pHVar14;
  ulonglong uVar15;
  HMODULE pHVar16;
  HMODULE pHVar17;
  longlong lVar18;
  HMODULE pHVar19;
  ulonglong uVar20;
  int *lp;
  HMODULE pHVar21;
  HMODULE pHVar22;
  undefined1 auStack_308 [32];
  HMODULE local_2e8;
  HMODULE local_2e0;
  HMODULE local_2d8;
  HMODULE local_2d0;
  longlong local_2c8;
  char *local_2c0;
  uint local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0 [2];
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 *puStack_290;
  undefined4 *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8 [48];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_308;
  local_2c8 = CONCAT44(local_2c8._4_4_,param_3);
  local_2c0 = param_2;
  pHVar8 = GetModuleHandleA("client.dll");
  if (pHVar8 != (HMODULE)0x0) {
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    local_2e0 = pHVar8;
    pvVar9 = GetCurrentProcess();
    iVar5 = K32GetModuleInformation(pvVar9,pHVar8,&local_278,0x18);
    if (iVar5 != 0) {
      uVar15 = uStack_270 & 0xffffffff;
      BVar6 = IsBadReadPtr(pHVar8,0x40);
      if ((BVar6 == 0) && ((short)pHVar8->unused == 0x5a4d)) {
        lp = (int *)((longlong)&pHVar8->unused + (longlong)pHVar8[0xf].unused);
        BVar6 = IsBadReadPtr(lp,0x108);
        if ((BVar6 == 0) && (*lp == 0x4550)) {
          local_2e8 = (HMODULE)((longlong)&pHVar8->unused + uVar15);
          local_2d8 = (HMODULE)0x0;
          local_2d0 = (HMODULE)0x0;
          memset(local_1d8,0,0x180);
          uVar15 = 0;
          iVar5 = 0;
          local_2b8 = 0;
          uVar1 = *(ushort *)(lp + 5);
          if (*(short *)((longlong)lp + 6) != 0) {
            do {
              lVar18 = (longlong)iVar5 * 0x28;
              pHVar16 = (HMODULE)((longlong)&pHVar8->unused +
                                 (ulonglong)
                                 *(uint *)((longlong)lp + lVar18 + 0x24 + (ulonglong)uVar1));
              pHVar19 = (HMODULE)((longlong)&pHVar16->unused +
                                 (ulonglong)
                                 *(uint *)((longlong)lp + lVar18 + 0x20 + (ulonglong)uVar1));
              if ((pHVar19 <= pHVar16) || (local_2e8 < pHVar19)) goto LAB_180016b59;
              local_2a8._0_8_ = (PVOID)0x0;
              local_2a8._8_8_ = (PVOID)0x0;
              local_298._0_4_ = 0;
              local_298._4_4_ = 0;
              puStack_290 = (undefined8 *)0x0;
              local_288 = (undefined4 *)0x0;
              uStack_280._0_4_ = 0;
              uStack_280._4_4_ = 0;
              SVar10 = VirtualQuery(pHVar16,(PMEMORY_BASIC_INFORMATION)local_2a8,0x30);
              pHVar8 = local_2e0;
              if ((SVar10 == 0) ||
                 (((DWORD)local_288 != 0x1000 || (((ulonglong)local_288 & 0x10100000000) != 0)))) {
LAB_180016b45:
                uVar15 = (ulonglong)local_2b8;
              }
              else {
                uVar12 = *(uint *)((longlong)lp + lVar18 + 0x3c + (ulonglong)uVar1);
                if ((uVar12 >> 0x1d & 1) == 0) {
                  if ((uVar12 >> 0x1e & 1) == 0) goto LAB_180016b45;
                  uVar20 = (ulonglong)(int)local_2b8;
                  uVar15 = uVar20;
                  if ((int)local_2b8 < 0x18) {
                    local_2b8 = local_2b8 + 1;
                    uVar15 = (ulonglong)local_2b8;
                    local_1d8[uVar20 * 2] = (ulonglong)pHVar16;
                    local_1d8[uVar20 * 2 + 1] = (ulonglong)pHVar19;
                  }
                }
                else {
                  if (local_2d8 != (HMODULE)0x0) goto LAB_180016b45;
                  uVar15 = (ulonglong)local_2b8;
                  local_2d8 = pHVar16;
                  local_2d0 = pHVar19;
                }
              }
LAB_180016b59:
              pHVar19 = local_2d0;
              pHVar16 = local_2d8;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)(uint)*(ushort *)((longlong)lp + 6));
            if ((local_2d8 != (HMODULE)0x0) && (iVar5 = (int)uVar15, iVar5 != 0)) {
              local_2b4 = 0;
              local_2a8._0_8_ = &local_2b8;
              local_2b0[0] = 0;
              local_2a8._8_8_ = local_1d8;
              local_298 = &local_2b4;
              puStack_290 = &local_258;
              local_288 = local_2b0;
              iVar7 = 0;
              local_2d8 = (HMODULE)((ulonglong)local_2d8 & 0xffffffff00000000);
              local_258 = 0;
              uStack_250 = 0;
              local_248 = 0;
              uStack_240 = 0;
              local_238 = 0;
              uStack_230 = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              if (0 < iVar5) {
                iVar3 = (int)local_2c8;
                lVar18 = (longlong)(int)local_2c8;
                pHVar21 = (HMODULE)0x0;
                do {
                  pHVar22 = pHVar21;
                  if (pHVar21 != (HMODULE)0x0) goto LAB_180016d6d;
                  lVar13 = (longlong)iVar7;
                  local_2d0 = (HMODULE)(lVar18 * 8);
                  local_2c8 = lVar13 * 0x10;
                  pHVar17 = (HMODULE)(local_1d8[lVar13 * 2] + 8);
                  pHVar14 = local_2e8;
                  if ((longlong)&local_2d0[2].unused + local_1d8[lVar13 * 2] <=
                      local_1d8[lVar13 * 2 + 1]) {
                    do {
                      pHVar22 = *(HMODULE *)(pHVar17 + -2);
                      if (((((pHVar8 <= pHVar22) && (pHVar22 < pHVar14)) && (pHVar8 + 2 <= pHVar17))
                          && (((pHVar17 < pHVar14 && (pHVar22 + 6 <= pHVar14)) &&
                              ((pHVar22->unused == 1 &&
                               ((pHVar22[1].unused == 0 &&
                                (pHVar14 = local_2e8, 0 < pHVar22[3].unused)))))))) &&
                         ((HMODULE)((longlong)&pHVar8->unused + (ulonglong)(uint)pHVar22[5].unused)
                          == pHVar22)) {
                        pHVar22 = (HMODULE)((longlong)&pHVar8[4].unused +
                                           (ulonglong)(uint)pHVar22[3].unused);
                        sVar11 = strlen(local_2c0);
                        pHVar14 = local_2e8;
                        pHVar8 = local_2e0;
                        if ((((local_2e0 <= pHVar22) && (pHVar22 < local_2e8)) &&
                            (sVar11 + 1 <= (ulonglong)((longlong)local_2e8 - (longlong)pHVar22))) &&
                           (iVar7 = memcmp(pHVar22,local_2c0,sVar11 + 1), pHVar14 = local_2e8,
                           pHVar8 = local_2e0, iVar7 == 0)) {
                          uVar20 = 0;
                          bVar2 = true;
                          pHVar22 = pHVar17;
                          if (iVar3 < 1) break;
                          do {
                            if (!bVar2) goto LAB_180016d1f;
                            if ((*(HMODULE *)(pHVar17 + uVar20 * 2) < pHVar16) ||
                               (pHVar19 <= *(HMODULE *)(pHVar17 + uVar20 * 2))) {
                              bVar2 = false;
                            }
                            else {
                              bVar2 = true;
                            }
                            uVar12 = (int)uVar20 + 1;
                            uVar20 = (ulonglong)uVar12;
                          } while ((int)uVar12 < iVar3);
                          if (bVar2) break;
                        }
                      }
LAB_180016d1f:
                      pHVar17 = pHVar17 + 2;
                      pHVar22 = pHVar21;
                    } while ((ulonglong)((longlong)&pHVar17->unused + (longlong)&local_2d0->unused)
                             <= *(ulonglong *)((longlong)local_1d8 + local_2c8 + 8));
                  }
                  iVar7 = (int)local_2d8 + 1;
                  local_2d8 = (HMODULE)CONCAT44(local_2d8._4_4_,iVar7);
                  pHVar8 = local_2e0;
                  pHVar21 = pHVar22;
                } while (iVar7 < iVar5);
                if (pHVar22 != (HMODULE)0x0) {
LAB_180016d6d:
                  iVar5 = 0;
                  do {
                    iVar7 = 0;
                    if (0 < (int)uVar15) {
                      do {
                        lVar18 = (longlong)iVar7;
                        pHVar8 = (HMODULE)local_1d8[lVar18 * 2];
                        if ((HMODULE)local_1d8[lVar18 * 2] + 2 <= (HMODULE)local_1d8[lVar18 * 2 + 1]
                           ) {
                          do {
                            pHVar16 = *(HMODULE *)pHVar8;
                            pHVar19 = pHVar8;
                            if (iVar5 == 0) {
                              cVar4 = FUN_180016e10(local_2a8,pHVar16);
                              if (cVar4 != '\0') {
                                pHVar19 = pHVar16;
                                pHVar16 = *(HMODULE *)pHVar16;
                                goto joined_r0x000180016dbc;
                              }
                            }
                            else {
joined_r0x000180016dbc:
                              if (pHVar16 == pHVar22) {
                                return pHVar19;
                              }
                            }
                            pHVar16 = pHVar8 + 4;
                            pHVar8 = pHVar8 + 2;
                          } while (pHVar16 <= (HMODULE)local_1d8[lVar18 * 2 + 1]);
                          uVar15 = (ulonglong)local_2b8;
                        }
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < (int)uVar15);
                    }
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < 2);
                }
              }
            }
          }
        }
      }
    }
  }
  return (HMODULE)0x0;
}


)B180016940",
    "34f0fe61ea058706b9fce757f1da7f7e9d29cd6a204176498b906b8ca5cc857e",
    R"F180016940C(FUN_180016e10)F180016940C",
    R"F180016940D(LAB_180016b45
LAB_180016b59
LAB_180016d1f
LAB_180016d6d
DAT_1803da4c0)F180016940D",
    R"F180016940T("client.dll")F180016940T",
    R"F180016940F(76: if (pHVar8 != (HMODULE)0x0) {
83: if (iVar5 != 0) {
86: if ((BVar6 == 0) && ((short)pHVar8->unused == 0x5a4d)) {
89: if ((BVar6 == 0) && (*lp == 0x4550)) {
98: if (*(short *)((longlong)lp + 6) != 0) {
99: do {
107: if ((pHVar19 <= pHVar16) || (local_2e8 < pHVar19)) goto LAB_180016b59;
118: if ((SVar10 == 0) ||
120: LAB_180016b45:
123: else {
125: if ((uVar12 >> 0x1d & 1) == 0) {
126: if ((uVar12 >> 0x1e & 1) == 0) goto LAB_180016b45;
129: if ((int)local_2b8 < 0x18) {
136: else {
137: if (local_2d8 != (HMODULE)0x0) goto LAB_180016b45;
143: LAB_180016b59:
148: if ((local_2d8 != (HMODULE)0x0) && (iVar5 = (int)uVar15, iVar5 != 0)) {
174: if (0 < iVar5) {
178: do {
180: if (pHVar21 != (HMODULE)0x0) goto LAB_180016d6d;
186: if ((longlong)&local_2d0[2].unused + local_1d8[lVar13 * 2] <=
188: do {
190: if (((((pHVar8 <= pHVar22) && (pHVar22 < pHVar14)) && (pHVar8 + 2 <= pHVar17))
202: if ((((local_2e0 <= pHVar22) && (pHVar22 < local_2e8)) &&
209: if (iVar3 < 1) break;
210: do {
211: if (!bVar2) goto LAB_180016d1f;
212: if ((*(HMODULE *)(pHVar17 + uVar20 * 2) < pHVar16) ||
216: else {
222: if (bVar2) break;
225: LAB_180016d1f:
236: if (pHVar22 != (HMODULE)0x0) {
237: LAB_180016d6d:
239: do {
241: if (0 < (int)uVar15) {
242: do {
245: if ((HMODULE)local_1d8[lVar18 * 2] + 2 <= (HMODULE)local_1d8[lVar18 * 2 + 1]
247: do {
250: if (iVar5 == 0) {
252: if (cVar4 != '\0') {
255: goto joined_r0x000180016dbc;
258: else {
260: if (pHVar16 == pHVar22) {
261: return pHVar19;
282: return (HMODULE)0x0;)F180016940F",
    R"F180016940U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180016b45.
TODO: recover the declaration, type and value for global/data reference LAB_180016b59.
TODO: recover the declaration, type and value for global/data reference LAB_180016d1f.
TODO: recover the declaration, type and value for global/data reference LAB_180016d6d.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180016940U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180016940() noexcept {
    return kFunction_0x180016940;
}

// 0x180016e10 FUN_180016e10
// source: re/dump/decompile/0x180016e10_FUN_180016e10.c
// size: 407 bytes; thunk: false
// body sha256: 159b739df6552b063af65cb4b05d5c9512cf9cec9e9952c4aa3b786bcb4e6227
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180016e10{
    "0x180016e10",
    "FUN_180016e10",
    R"F180016e10S(undefined FUN_180016e10())F180016e10S",
    R"B180016e10(// 0x180016e10  FUN_180016e10
// size=407 thunk=false
// signature: undefined FUN_180016e10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180016e10(undefined8 *param_1,LPCVOID param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  uVar3 = local_18;
  if ((((LPCVOID)0xffff < param_2) && (((ulonglong)param_2 & 7) == 0)) &&
     (uVar3 = 0x7fffffffffff, param_2 < (LPCVOID)0x800000000000)) {
    if (0 < *(int *)*param_1) {
      uVar3 = 0;
      do {
        if ((*(LPCVOID *)(param_1[1] + uVar3 * 0x10) <= param_2) &&
           ((longlong)param_2 + 8U <= *(ulonglong *)(param_1[1] + 8 + uVar3 * 0x10)))
        goto LAB_180016f4b;
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)*param_1);
    }
    if (0 < *(int *)param_1[2]) {
      uVar4 = 0;
      do {
        if ((*(LPCVOID *)(param_1[3] + (ulonglong)uVar4 * 0x10) <= param_2) &&
           ((longlong)param_2 + 8U <= *(ulonglong *)(param_1[3] + 8 + (ulonglong)uVar4 * 0x10))) {
LAB_180016f4b:
          return CONCAT71((int7)((ulonglong)((longlong)param_2 + 8) >> 8),1);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)param_1[2]);
    }
    local_48.BaseAddress = (PVOID)0x0;
    local_48.AllocationBase = (PVOID)0x0;
    local_48.AllocationProtect = 0;
    local_48._20_4_ = 0;
    local_48.RegionSize = 0;
    local_48.State = 0;
    local_48.Protect = 0;
    local_48.Type = 0;
    local_48._44_4_ = 0;
    uVar3 = VirtualQuery(param_2,&local_48,0x30);
    if ((((uVar3 != 0) && (local_48.State == 0x1000)) &&
        (uVar3 = (ulonglong)local_48._32_8_ >> 0x20, (local_48._32_8_ & 0x10100000000) == 0)) &&
       ((local_48._32_8_ & 0xee00000000) != 0)) {
      uVar3 = local_48.RegionSize + (longlong)local_48.BaseAddress;
      iVar1 = *(int *)param_1[2];
      if (iVar1 < 8) {
        lVar2 = param_1[3];
        *(PVOID *)(lVar2 + (longlong)iVar1 * 0x10) = local_48.BaseAddress;
        *(ulonglong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = uVar3;
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
        return CONCAT71((int7)((longlong)param_2 + 8U >> 8),(longlong)param_2 + 8U <= uVar3);
      }
      iVar1 = *(int *)param_1[4];
      lVar2 = param_1[3];
      *(PVOID *)(lVar2 + (longlong)iVar1 * 0x10) = local_48.BaseAddress;
      *(ulonglong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = uVar3;
      uVar4 = *(uint *)param_1[4] + 1 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      *(uint *)param_1[4] = uVar4;
      return CONCAT71((int7)((longlong)param_2 + 8U >> 8),(longlong)param_2 + 8U <= uVar3);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


)B180016e10",
    "159b739df6552b063af65cb4b05d5c9512cf9cec9e9952c4aa3b786bcb4e6227",
    R"F180016e10C()F180016e10C",
    R"F180016e10D(LAB_180016f4b
DAT_1803da4c0)F180016e10D",
    R"F180016e10T()F180016e10T",
    R"F180016e10F(22: if ((((LPCVOID)0xffff < param_2) && (((ulonglong)param_2 & 7) == 0)) &&
24: if (0 < *(int *)*param_1) {
26: do {
27: if ((*(LPCVOID *)(param_1[1] + uVar3 * 0x10) <= param_2) &&
29: goto LAB_180016f4b;
34: if (0 < *(int *)param_1[2]) {
36: do {
37: if ((*(LPCVOID *)(param_1[3] + (ulonglong)uVar4 * 0x10) <= param_2) &&
39: LAB_180016f4b:
40: return CONCAT71((int7)((ulonglong)((longlong)param_2 + 8) >> 8),1);
55: if ((((uVar3 != 0) && (local_48.State == 0x1000)) &&
60: if (iVar1 < 8) {
65: return CONCAT71((int7)((longlong)param_2 + 8U >> 8),(longlong)param_2 + 8U <= uVar3);
72: if ((int)uVar4 < 0) {
76: return CONCAT71((int7)((longlong)param_2 + 8U >> 8),(longlong)param_2 + 8U <= uVar3);
79: return uVar3 & 0xffffffffffffff00;)F180016e10F",
    R"F180016e10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180016f4b.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180016e10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180016e10() noexcept {
    return kFunction_0x180016e10;
}

// 0x180016fb0 FUN_180016fb0
// source: re/dump/decompile/0x180016fb0_FUN_180016fb0.c
// size: 125 bytes; thunk: false
// body sha256: 694eb447ccc730451f51fbeae51cf12cf7f1c55fa3f9939cb6bdc0063640bd7e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180016fb0{
    "0x180016fb0",
    "FUN_180016fb0",
    R"F180016fb0S(undefined FUN_180016fb0())F180016fb0S",
    R"B180016fb0(// 0x180016fb0  FUN_180016fb0
// size=125 thunk=false
// signature: undefined FUN_180016fb0()
// status: ok


longlong FUN_180016fb0(char *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((DAT_1803fa340 == (longlong *)0x0) || (param_1 == (char *)0x0)) {
    return 0;
  }
  if (*(code **)(*DAT_1803fa340 + 0x88) == (code *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*DAT_1803fa340 + 0x88))(DAT_1803fa340,param_1);
  }
  if (((lVar2 != 0) && (*(char **)(lVar2 + 0x18) != (char *)0x0)) &&
     (iVar1 = strcmp(*(char **)(lVar2 + 0x18),param_1), iVar1 == 0)) {
    return lVar2;
  }
  return 0;
}


)B180016fb0",
    "694eb447ccc730451f51fbeae51cf12cf7f1c55fa3f9939cb6bdc0063640bd7e",
    R"F180016fb0C()F180016fb0C",
    R"F180016fb0D(DAT_1803fa340)F180016fb0D",
    R"F180016fb0T()F180016fb0T",
    R"F180016fb0F(13: if ((DAT_1803fa340 == (longlong *)0x0) || (param_1 == (char *)0x0)) {
14: return 0;
16: if (*(code **)(*DAT_1803fa340 + 0x88) == (code *)0x0) {
19: else {
22: if (((lVar2 != 0) && (*(char **)(lVar2 + 0x18) != (char *)0x0)) &&
24: return lVar2;
26: return 0;)F180016fb0F",
    R"F180016fb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa340.
TODO: resolve the indirect call in body 16: if (*(code **)(*DAT_1803fa340 + 0x88) == (code *)0x0) {.
TODO: resolve the indirect call in body 20: lVar2 = (**(code **)(*DAT_1803fa340 + 0x88))(DAT_1803fa340,param_1);.)F180016fb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180016fb0() noexcept {
    return kFunction_0x180016fb0;
}

// 0x180017040 FUN_180017040
// source: re/dump/decompile/0x180017040_FUN_180017040.c
// size: 44 bytes; thunk: false
// body sha256: 7f06c3e7d95fcaead2447f286e7ef30195e0234072d7bff90442166e13bbae32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180017040{
    "0x180017040",
    "FUN_180017040",
    R"F180017040S(undefined FUN_180017040())F180017040S",
    R"B180017040(// 0x180017040  FUN_180017040
// size=44 thunk=false
// signature: undefined FUN_180017040()
// status: ok


undefined8 FUN_180017040(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_1803fa668 == (longlong *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*DAT_1803fa668 + 0x350))();
    uVar1 = 1;
  }
  return uVar1;
}


)B180017040",
    "7f06c3e7d95fcaead2447f286e7ef30195e0234072d7bff90442166e13bbae32",
    R"F180017040C()F180017040C",
    R"F180017040D(DAT_1803fa668)F180017040D",
    R"F180017040T()F180017040T",
    R"F180017040F(12: if ((DAT_1803fa668 == (longlong *)0x0) || (param_1 == 0)) {
15: else {
19: return uVar1;)F180017040F",
    R"F180017040U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: (**(code **)(*DAT_1803fa668 + 0x350))();.)F180017040U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180017040() noexcept {
    return kFunction_0x180017040;
}

// 0x180017070 FUN_180017070
// source: re/dump/decompile/0x180017070_FUN_180017070.c
// size: 30 bytes; thunk: false
// body sha256: 7efa6b4ceb112549ffc77be562d3da8497c8e90d2e22a7efbf7d7ce8092548b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180017070{
    "0x180017070",
    "FUN_180017070",
    R"F180017070S(undefined FUN_180017070())F180017070S",
    R"B180017070(// 0x180017070  FUN_180017070
// size=30 thunk=false
// signature: undefined FUN_180017070()
// status: ok


longlong FUN_180017070(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    param_1 = *(longlong *)(param_1 + 0x38);
  }
  return param_1;
}


)B180017070",
    "7efa6b4ceb112549ffc77be562d3da8497c8e90d2e22a7efbf7d7ce8092548b5",
    R"F180017070C()F180017070C",
    R"F180017070D()F180017070D",
    R"F180017070T()F180017070T",
    R"F180017070F(10: if (param_1 == 0) {
11: return 0;
13: if (*(longlong *)(param_1 + 0x38) != 0) {
16: return param_1;)F180017070F",
    R"F180017070U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180017070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180017070() noexcept {
    return kFunction_0x180017070;
}

// 0x1800170a0 FUN_1800170a0
// source: re/dump/decompile/0x1800170a0_FUN_1800170a0.c
// size: 29 bytes; thunk: false
// body sha256: 7f9ee7b3fdea663a45f1b7a8a45b4658c9c5bf9ecc9a6f5ae78bedd64253584c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800170a0{
    "0x1800170a0",
    "FUN_1800170a0",
    R"F1800170a0S(undefined FUN_1800170a0())F1800170a0S",
    R"B1800170a0(// 0x1800170a0  FUN_1800170a0
// size=29 thunk=false
// signature: undefined FUN_1800170a0()
// status: ok


undefined4 FUN_1800170a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180017070();
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x28);
}


)B1800170a0",
    "7f9ee7b3fdea663a45f1b7a8a45b4658c9c5bf9ecc9a6f5ae78bedd64253584c",
    R"F1800170a0C(FUN_180017070)F1800170a0C",
    R"F1800170a0D()F1800170a0D",
    R"F1800170a0T()F1800170a0T",
    R"F1800170a0F(13: if (lVar1 == 0) {
14: return 0;
16: return *(undefined4 *)(lVar1 + 0x28);)F1800170a0F",
    R"F1800170a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800170a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800170a0() noexcept {
    return kFunction_0x1800170a0;
}

// 0x1800170c0 FUN_1800170c0
// source: re/dump/decompile/0x1800170c0_FUN_1800170c0.c
// size: 37 bytes; thunk: false
// body sha256: 2b06b99d1dc4e2826e2a91843b2bf917b099c74cd7d130c27bfcd8a9e59e1edd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800170c0{
    "0x1800170c0",
    "FUN_1800170c0",
    R"F1800170c0S(undefined FUN_1800170c0())F1800170c0S",
    R"B1800170c0(// 0x1800170c0  FUN_1800170c0
// size=37 thunk=false
// signature: undefined FUN_1800170c0()
// status: ok


undefined1 FUN_1800170c0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180017070();
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x28) = param_2;
  return 1;
}


)B1800170c0",
    "2b06b99d1dc4e2826e2a91843b2bf917b099c74cd7d130c27bfcd8a9e59e1edd",
    R"F1800170c0C(FUN_180017070)F1800170c0C",
    R"F1800170c0D()F1800170c0D",
    R"F1800170c0T()F1800170c0T",
    R"F1800170c0F(13: if (lVar1 == 0) {
14: return 0;
17: return 1;)F1800170c0F",
    R"F1800170c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800170c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800170c0() noexcept {
    return kFunction_0x1800170c0;
}

// 0x1800170f0 FUN_1800170f0
// source: re/dump/decompile/0x1800170f0_FUN_1800170f0.c
// size: 85 bytes; thunk: false
// body sha256: 9a156ece2f975ca30633062578c4fbc7c524a1ed7463a6bf33ae091e4db925d4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800170f0{
    "0x1800170f0",
    "FUN_1800170f0",
    R"F1800170f0S(undefined FUN_1800170f0())F1800170f0S",
    R"B1800170f0(// 0x1800170f0  FUN_1800170f0
// size=85 thunk=false
// signature: undefined FUN_1800170f0()
// status: ok


undefined4 FUN_1800170f0(void)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180017070();
  if (lVar3 == 0) {
    return 0;
  }
  _Str1 = *(char **)(lVar3 + 0x18);
  if (_Str1 == (char *)0x0) {
LAB_18001713b:
    uVar2 = 0;
  }
  else {
    iVar1 = _stricmp(_Str1,"sv_cheats");
    if (iVar1 != 0) {
      iVar1 = _stricmp(_Str1,"sv_allowcslua");
      if (iVar1 != 0) goto LAB_18001713b;
    }
    uVar2 = 1;
  }
  return uVar2;
}


)B1800170f0",
    "9a156ece2f975ca30633062578c4fbc7c524a1ed7463a6bf33ae091e4db925d4",
    R"F1800170f0C(FUN_180017070)F1800170f0C",
    R"F1800170f0D(LAB_18001713b)F1800170f0D",
    R"F1800170f0T("sv_cheats"
"sv_allowcslua")F1800170f0T",
    R"F1800170f0F(16: if (lVar3 == 0) {
17: return 0;
20: if (_Str1 == (char *)0x0) {
21: LAB_18001713b:
24: else {
26: if (iVar1 != 0) {
28: if (iVar1 != 0) goto LAB_18001713b;
32: return uVar2;)F1800170f0F",
    R"F1800170f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18001713b.)F1800170f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800170f0() noexcept {
    return kFunction_0x1800170f0;
}

// 0x180017150 FUN_180017150
// source: re/dump/decompile/0x180017150_FUN_180017150.c
// size: 5462 bytes; thunk: false
// body sha256: dff4e13ed561744f019cb8499f92f84b5d295278d689226d52c014ab43221061
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180017150{
    "0x180017150",
    "FUN_180017150",
    R"F180017150S(undefined FUN_180017150())F180017150S",
    R"B180017150(// 0x180017150  FUN_180017150
// size=5462 thunk=false
// signature: undefined FUN_180017150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180017150(void)

{
  undefined8 *puVar1;
  HMODULE pHVar2;
  code *pcVar3;
  char cVar4;
  BOOL BVar5;
  HMODULE pHVar6;
  FARPROC pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *_Memory;
  HANDLE pvVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined1 *puVar15;
  int iVar16;
  HMODULE pHVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_448 [8];
  undefined1 auStack_440 [80];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  undefined1 local_390 [48];
  undefined1 local_360 [24];
  undefined1 local_348 [24];
  undefined1 local_330 [24];
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined1 local_210 [24];
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [24];
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [24];
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  void *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  void *local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar15 = auStack_448;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_448;
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_348);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_348,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9278 = (longlong *)(*pFVar7)("VClient017",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3a8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3a8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa668 = (*pFVar7)("VEngineClient015",0);
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_330);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_330,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa360 = (*pFVar7)("VClientEntityList003",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_318);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_318,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa600 = (*pFVar7)("VGUI_Panel009",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_300);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_300,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa350 = (*pFVar7)("VGUI_ivgui008",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2e8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2e8,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VGUI_System010",0);
  pHVar6 = GetModuleHandleA("vguimatsurface");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2d0,(ThrowInfo *)&DAT_1803d5b48);
  }
  _DAT_1803f9298 = (*pFVar7)("VGUI_Surface030",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2b8,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VGUI_Scheme010",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2a0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2a0,(ThrowInfo *)&DAT_1803d5b48);
  }
  _DAT_1803fa328 = (*pFVar7)("VGUI_Input005",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_288);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_288,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VGUI_InputInternal001",0);
  pHVar6 = GetModuleHandleA("filesystem_stdio.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_270);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_270,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9248 = (*pFVar7)("VBaseFileSystem011",0);
  pHVar6 = GetModuleHandleA("filesystem_stdio.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_258);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_258,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa358 = (*pFVar7)("VFileSystem022",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 != (FARPROC)0x0) {
    (*pFVar7)("VEngineClientStringTable001",0);
  }
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_240);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_240,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VClientDllSharedAppSystems001",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_228);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_228,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VENGINE_LAUNCHER_API_VERSION004",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_210);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_210,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa348 = (*pFVar7)("VEngineVGui001",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1f8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1f8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9250 = (*pFVar7)("VModelInfoClient006",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1e0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1e0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9280 = (*pFVar7)("VEngineRenderView014",0);
  pHVar6 = GetModuleHandleA("materialsystem.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1c8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1c8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa640 = (*pFVar7)("VMaterialSystem080",0);
  pHVar6 = GetModuleHandleA("inputsystem.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1b0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa5a8 = (*pFVar7)("InputSystemVersion001",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_198);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_198,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa598 = (*pFVar7)("VEngineModel016",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_180);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_180,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa610 = (*pFVar7)("EngineTraceClient003",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_168);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_168,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VPhysicsDebugOverlay001",0);
  pHVar6 = GetModuleHandleA("vphysics.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3c0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3c0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa650 = (*pFVar7)("VPhysicsSurfaceProps001",0);
  pHVar6 = GetModuleHandleA("vstdlib.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_150);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_150,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa340 = (*pFVar7)("VEngineCvar007",0);
  pHVar6 = GetModuleHandleA("shaderapidx9.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_138);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_138,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("ShaderApi030",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3f0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3f0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa320 = (*pFVar7)("GAMEEVENTSMANAGER002",0);
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3d8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3d8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa658 = (*pFVar7)("GameMovement001",0);
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_360);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_360,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9290 = (*pFVar7)("VClientPrediction001",0);
  pHVar6 = GetModuleHandleA("datacache.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_390);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_390,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("MDLCache004",0);
  uVar19 = 0;
  DAT_1803fa670 = 0;
  DAT_1803fa620 = (HMODULE)0x0;
  DAT_1803fa660 = 0;
  DAT_1803fa608 = 0;
  DAT_1803fa638 = 0;
  DAT_1803fa5e0 = 0;
  _DAT_1803fa688 = 0;
  DAT_1803fa680 = 0;
  DAT_1803fa5a0 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  FUN_18001d080(&local_120,"48 8B 0D ? ? ? ? 48 8B 01 FF 50 28 48 8B 0D",0x2b);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_18001d080(&local_88,"client.dll",10);
  puVar8 = (undefined8 *)FUN_180016410(&local_b8,&local_88,&local_120,8);
  FUN_18020e450(&local_88);
  uVar21 = FUN_18020e450(&local_120);
  puVar1 = (undefined8 *)puVar8[1];
  for (puVar8 = (undefined8 *)*puVar8; lVar9 = DAT_1803fa5a0, puVar8 != puVar1; puVar8 = puVar8 + 1)
  {
    lVar9 = FUN_1801fce00(*puVar8);
    cVar4 = FUN_1800167d0(lVar9);
    uVar21 = extraout_XMM0_Da;
    if (cVar4 != '\0') break;
  }
  DAT_1803fa5a0 = lVar9;
  if (local_b8 == (void *)0x0) {
LAB_180017957:
    if ((DAT_1803fa5a0 == 0) &&
       (DAT_1803fa5a0 = FUN_180016940(uVar21,".?AVCMoveHelperClient@@",8), DAT_1803fa5a0 == 0)) {
      FUN_180014410(&DAT_18033eee0);
    }
    else {
      FUN_180014410("[IFACE] g_pMoveHelper = %p (CMoveHelperClient, RTTI-verified)\n",DAT_1803fa5a0)
      ;
    }
    DAT_1803fa670 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_108 = 0;
    FUN_18001d080(&local_120,"48 8B 0D ? ? ? ? 48 8B 01 FF 50 18 48 8B 0D",0x2b);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"client.dll",10);
    puVar8 = (undefined8 *)FUN_180016410(local_a0,&local_68,&local_120,8);
    FUN_18020e450(&local_68);
    uVar21 = FUN_18020e450(&local_120);
    puVar1 = (undefined8 *)puVar8[1];
    for (puVar8 = (undefined8 *)*puVar8; lVar9 = DAT_1803fa670, puVar8 != puVar1;
        puVar8 = puVar8 + 1) {
      lVar9 = FUN_1801fce00(*puVar8);
      cVar4 = FUN_1800167d0(lVar9);
      uVar21 = extraout_XMM0_Da_00;
      if (cVar4 != '\0') break;
    }
    DAT_1803fa670 = lVar9;
    if (local_a0[0] != (void *)0x0) {
      puVar15 = auStack_448;
      if ((0xfff < (ulonglong)((local_90 - (longlong)local_a0[0] >> 3) * 8)) &&
         (uVar13 = (longlong)local_a0[0] + (-8 - (longlong)*(void **)((longlong)local_a0[0] + -8)),
         local_a0[0] = *(void **)((longlong)local_a0[0] + -8), puVar15 = auStack_448, 0x1f < uVar13)
         ) goto LAB_180017ad4;
      goto LAB_180017ade;
    }
  }
  else {
    _Memory = local_b8;
    if (((ulonglong)((local_a8 - (longlong)local_b8 >> 3) * 8) < 0x1000) ||
       (_Memory = *(void **)((longlong)local_b8 + -8),
       (ulonglong)((longlong)local_b8 + (-8 - (longlong)_Memory)) < 0x20)) {
      free(_Memory);
      uVar21 = 0;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      goto LAB_180017957;
    }
LAB_180017ad4:
    local_a0[0] = (void *)0x5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar15 = auStack_440;
LAB_180017ade:
    *(undefined8 *)(puVar15 + -8) = 0x180017ae6;
    free(local_a0[0]);
    uVar21 = 0;
    *(undefined8 *)(puVar15 + 0x3a8) = 0;
    *(undefined8 *)(puVar15 + 0x3b0) = 0;
    *(undefined8 *)(puVar15 + 0x3b8) = 0;
  }
  if (DAT_1803fa670 == 0) {
    *(undefined8 *)(puVar15 + -8) = 0x180017b16;
    DAT_1803fa670 = FUN_180016940(uVar21,".?AVCViewRenderBeams@@",8);
    if (DAT_1803fa670 != 0) goto LAB_180017b30;
    *(undefined8 *)(puVar15 + -8) = 0x180017b2e;
    FUN_180014410(&DAT_18033efd0);
  }
  else {
LAB_180017b30:
    *(undefined8 *)(puVar15 + -8) = 0x180017b43;
    FUN_180014410("[IFACE] g_pViewRenderBeams = %p (CViewRenderBeams, RTTI-verified)\n",
                  DAT_1803fa670);
  }
  *(undefined8 *)(puVar15 + -8) = 0x180017b50;
  pHVar6 = GetModuleHandleA("lua_shared.dll");
  *(undefined8 *)(puVar15 + -8) = 0x180017b60;
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x1800186b5;
    FUN_180013100(puVar15 + 0xd0);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar15 + -8) = &UNK_1800186c9;
    _CxxThrowException(puVar15 + 0xd0,(ThrowInfo *)&DAT_1803d5b48);
  }
  *(undefined8 *)(puVar15 + -8) = 0x180017b74;
  DAT_1803fa678 = (*pFVar7)("LUASHARED003",0);
  *(undefined8 *)(puVar15 + -8) = 0x180017b88;
  pHVar6 = GetModuleHandleA("tier0.dll");
  *(undefined8 *)(puVar15 + -8) = 0x180017b98;
  GetProcAddress(pHVar6,"g_pMemAlloc");
  *(undefined8 *)(puVar15 + -8) = 0x180017ba5;
  pHVar6 = GetModuleHandleA("engine.dll");
  if (pHVar6 != (HMODULE)0x0) {
    *(undefined8 *)(puVar15 + 0x358) = 0;
    *(undefined8 *)(puVar15 + 0x360) = 0;
    *(undefined8 *)(puVar15 + 0x368) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017bcc;
    pvVar10 = GetCurrentProcess();
    *(undefined8 *)(puVar15 + -8) = 0x180017be6;
    K32GetModuleInformation(pvVar10,pHVar6,puVar15 + 0x358,0x18);
    uVar18 = *(uint *)(puVar15 + 0x360);
    *(undefined1 **)(puVar15 + 0x350) = puVar15 + 0x328;
    *(undefined8 *)(puVar15 + 0x328) = 0;
    *(undefined8 *)(puVar15 + 0x330) = 0;
    *(undefined8 *)(puVar15 + 0x338) = 0;
    *(undefined8 *)(puVar15 + 0x340) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017c33;
    FUN_18001d080(puVar15 + 0x328,"40 55 53 48 8D AC 24 38 F0 FF FF B8 C8 10 00 00",0x2f);
    *(undefined1 **)(puVar15 + 0x348) = puVar15 + 0x370;
    *(undefined8 *)(puVar15 + 0x370) = 0;
    *(undefined8 *)(puVar15 + 0x378) = 0;
    *(undefined8 *)(puVar15 + 0x380) = 0;
    *(undefined8 *)(puVar15 + 0x388) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017c79;
    FUN_18001d080(puVar15 + 0x370,"engine.dll",10);
    *(undefined8 *)(puVar15 + -8) = 0x180017c8f;
    pcVar11 = (char *)FUN_180015f40(puVar15 + 0x370,puVar15 + 0x328);
    if (pcVar11 != (char *)0x0) {
      pcVar14 = pcVar11 + 0x400;
      for (; pcVar11 < pcVar14; pcVar11 = pcVar11 + 1) {
        if ((((*pcVar11 == 'H') && (pcVar11[1] == -0x73)) && (pcVar11[2] == '\r')) &&
           ((pHVar17 = (HMODULE)(pcVar11 + (longlong)*(int *)(pcVar11 + 3) + 7), pHVar6 <= pHVar17
            && (pHVar17 + 2 <= (HMODULE)((longlong)&pHVar6->unused + (ulonglong)uVar18))))) {
          *(undefined8 *)(puVar15 + -8) = 0x180017ce3;
          BVar5 = IsBadReadPtr(pHVar17,8);
          if ((BVar5 == 0) &&
             ((pHVar6 <= *(HMODULE *)pHVar17 &&
              (*(HMODULE *)pHVar17 < (HMODULE)((longlong)&pHVar6->unused + (ulonglong)uVar18))))) {
            *(undefined8 *)(puVar15 + -8) = 0x180017d14;
            DAT_1803fa620 = pHVar17;
            FUN_180014410("[IFACE] BaseClientState (x64) = %p (last=0x20B84 choked=0x20B88)\n",
                          pHVar17);
            break;
          }
        }
      }
    }
    if (DAT_1803fa620 == (HMODULE)0x0) {
      *(undefined8 *)(puVar15 + -8) = 0x180017d2a;
      FUN_180014410("[IFACE-WARN] BaseClientState x64 CL_Move resolver failed\n");
    }
  }
  if (DAT_1803f9278 == (longlong *)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x180018061;
    FUN_180014410("[IFACE-FAIL] g_pClient is null!\n");
  }
  else {
    lVar9 = *DAT_1803f9278;
    uVar12 = *(undefined8 *)(lVar9 + 0x70);
    *(undefined8 *)(puVar15 + -8) = 0x180017d47;
    DAT_1803fa660 = FUN_1801fce00(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + 0x50);
    *(undefined8 *)(puVar15 + -8) = 0x180017d57;
    DAT_1803fa638 = FUN_1801fce00(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 *)(puVar15 + -8) = 0x180017d67;
    DAT_1803fa608 = FUN_1801fce20(uVar12);
    _DAT_1803de0e8 = 0x1a;
    DAT_1803fa680 = 0;
    DAT_1803f9258 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017d93;
    pHVar6 = GetModuleHandleA("client.dll");
    uVar21 = 0;
    *(undefined8 *)(puVar15 + 0x328) = 0;
    *(undefined8 *)(puVar15 + 0x330) = 0;
    *(undefined8 *)(puVar15 + 0x338) = 0;
    if (pHVar6 != (HMODULE)0x0) {
      *(undefined8 *)(puVar15 + -8) = 0x180017db6;
      pvVar10 = GetCurrentProcess();
      *(undefined8 *)(puVar15 + -8) = 0x180017dd0;
      uVar21 = K32GetModuleInformation(pvVar10,pHVar6,puVar15 + 0x328,0x18);
    }
    *(HMODULE *)(puVar15 + 0x350) = pHVar6;
    pHVar17 = (HMODULE)((longlong)&pHVar6->unused + (ulonglong)*(uint *)(puVar15 + 0x330));
    *(HMODULE *)(puVar15 + 0x348) = pHVar17;
    pHVar2 = *(HMODULE *)(lVar9 + 0xd0);
    *(undefined1 **)(puVar15 + 0x370) = puVar15 + 0x350;
    *(undefined1 **)(puVar15 + 0x378) = puVar15 + 0x348;
    *(undefined1 **)(puVar15 + 0x358) = puVar15 + 0x350;
    *(undefined1 **)(puVar15 + 0x360) = puVar15 + 0x348;
    *(undefined1 **)(puVar15 + 0x30) = puVar15 + 0x350;
    *(undefined1 **)(puVar15 + 0x38) = puVar15 + 0x348;
    *(undefined1 **)(puVar15 + 0x40) = puVar15 + 0x370;
    *(undefined1 **)(puVar15 + 0x48) = puVar15 + 0x358;
    if (((*(uint *)(puVar15 + 0x330) != 0) && (pHVar6 <= pHVar2)) && (pHVar2 < pHVar17)) {
      *(undefined4 *)(puVar15 + 0x54) = 0;
      uVar13 = uVar19;
      while (iVar20 = (int)uVar13, iVar20 < 2) {
        if (DAT_1803fa680 != 0) goto LAB_180018026;
        *(undefined4 *)(puVar15 + 0x50) = 0;
        uVar13 = uVar19;
        while (iVar16 = (int)uVar13, iVar16 < 0x180) {
          pcVar11 = (char *)((longlong)&pHVar2->unused + (longlong)iVar16);
          if (*(char **)(puVar15 + 0x348) < pcVar11 + 0xd) break;
          if (*pcVar11 == -0x34) {
            if (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 1)) == -0x34) {
              if (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 2)) != -0x34)
              goto LAB_180017efc;
              break;
            }
LAB_180017fb3:
            uVar13 = (ulonglong)(iVar16 + 1U);
            *(uint *)(puVar15 + 0x50) = iVar16 + 1U;
          }
          else {
LAB_180017efc:
            if (((*pcVar11 != 'H') ||
                (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 1)) != -0x75)) ||
               (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 2)) != '\r'))
            goto LAB_180017fb3;
            if ((iVar20 == 0) &&
               (((*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 7)) != 'H' ||
                 (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 8)) != -0x75)) ||
                ((*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 9)) != -0x29 ||
                 (((*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 10)) != 'H' ||
                   (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 0xb)) != -0x75)) ||
                  (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 0xc)) != '\x01'))))))))
            {
              uVar13 = (ulonglong)(iVar16 + 1U);
              *(uint *)(puVar15 + 0x50) = iVar16 + 1U;
            }
            else {
              pcVar14 = "View_Render scan+";
              if (iVar20 == 0) {
                pcVar14 = "View_Render sig+";
              }
              *(undefined8 *)(puVar15 + -8) = 0x180017f91;
              uVar12 = FUN_1801fce00(pcVar11);
              *(undefined8 *)(puVar15 + -8) = 0x180017fa4;
              cVar4 = FUN_180018770(puVar15 + 0x30,uVar12,pcVar14,(longlong)iVar16);
              uVar21 = extraout_XMM0_Da_01;
              if (cVar4 != '\0') break;
              uVar13 = (ulonglong)(iVar16 + 1U);
              *(uint *)(puVar15 + 0x50) = iVar16 + 1U;
            }
          }
        }
        *(uint *)(puVar15 + 0x54) = iVar20 + 1U;
        uVar13 = (ulonglong)(iVar20 + 1U);
      }
    }
    if (DAT_1803fa680 == 0) {
      *(undefined8 *)(puVar15 + -8) = 0x180017fe7;
      lVar9 = FUN_180016940(uVar21,".?AVCViewRender@@",0x26);
      uVar13 = uVar19;
      if (lVar9 != 0) {
        uVar13 = lVar9 - *(longlong *)(puVar15 + 0x350);
      }
      *(undefined8 *)(puVar15 + -8) = 0x180018010;
      FUN_180018770(puVar15 + 0x30,lVar9,"data sweep client+",uVar13);
      if (DAT_1803fa680 == 0) {
        *(undefined8 *)(puVar15 + -8) = 0x180018026;
        FUN_180014410(&DAT_18033f180);
      }
    }
LAB_180018026:
    *(longlong *)(puVar15 + 0x20) = DAT_1803fa680;
    *(undefined8 *)(puVar15 + -8) = 0x180018053;
    FUN_180014410("[IFACE] Input=%p Globals=%p CMode=%p ViewR=%p\n",DAT_1803fa660,DAT_1803fa608,
                  DAT_1803fa638);
  }
  *(undefined1 **)(puVar15 + 0x350) = puVar15 + 0x30;
  *(undefined8 *)(puVar15 + 0x30) = 0;
  *(undefined8 *)(puVar15 + 0x38) = 0;
  *(undefined8 *)(puVar15 + 0x40) = 0;
  *(undefined8 *)(puVar15 + 0x48) = 0;
  *(undefined8 *)(puVar15 + -8) = 0x18001809d;
  FUN_18001d080(puVar15 + 0x30,
                "48 89 6C 24 18 48 89 7C 24 20 41 56 48 83 EC 30 48 8B F9 45 33 F6 48 8B 0D",0x4a);
  *(undefined1 **)(puVar15 + 0x348) = puVar15 + 0x328;
  *(undefined8 *)(puVar15 + 0x328) = 0;
  *(undefined8 *)(puVar15 + 0x330) = 0;
  *(undefined8 *)(puVar15 + 0x338) = 0;
  *(undefined8 *)(puVar15 + 0x340) = 0;
  *(undefined8 *)(puVar15 + -8) = 0x1800180e3;
  FUN_18001d080(puVar15 + 0x328,"shaderapidx9.dll",0x10);
  *(undefined8 *)(puVar15 + -8) = 0x1800180f6;
  lVar9 = FUN_180015f40(puVar15 + 0x328,puVar15 + 0x30);
  if (lVar9 == 0) {
    *(undefined8 *)(puVar15 + -8) = 0x180018128;
    FUN_180014410("[IFACE-FAIL] D3DDevice x64 pattern not found!\n");
  }
  else {
    DAT_1803fa5e0 = *(undefined8 *)((longlong)*(int *)(lVar9 + 0x19) + 0x1d + lVar9);
    *(undefined8 *)(puVar15 + -8) = 0x18001811a;
    FUN_180014410("[IFACE] D3DDevice=%p (via x64 pattern scan)\n");
  }
  if (DAT_1803f9280 == 0) {
    pcVar11 = "[IFACE-FAIL] g_pRenderview is null!\n";
  }
  else {
    *(undefined1 **)(puVar15 + 0x350) = puVar15 + 0x30;
    *(undefined8 *)(puVar15 + 0x30) = 0;
    *(undefined8 *)(puVar15 + 0x38) = 0;
    *(undefined8 *)(puVar15 + 0x40) = 0;
    *(undefined8 *)(puVar15 + 0x48) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x18001816d;
    FUN_18001d080(puVar15 + 0x30,
                  "48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 60 CC CC 48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 20"
                  ,0x51);
    *(undefined1 **)(puVar15 + 0x348) = puVar15 + 0x328;
    *(undefined8 *)(puVar15 + 0x328) = 0;
    *(undefined8 *)(puVar15 + 0x330) = 0;
    *(undefined8 *)(puVar15 + 0x338) = 0;
    *(undefined8 *)(puVar15 + 0x340) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x1800181b3;
    FUN_18001d080(puVar15 + 0x328,"engine.dll",10);
    *(undefined8 *)(puVar15 + -8) = 0x1800181c6;
    lVar9 = FUN_180015f40(puVar15 + 0x328,puVar15 + 0x30);
    if (lVar9 != 0) {
      *(undefined8 *)(puVar15 + -8) = 0x1800181d3;
      _DAT_1803fa688 = FUN_1801fce00(lVar9);
      *(undefined8 *)(puVar15 + -8) = 0x1800181e9;
      FUN_180014410("[IFACE] g_pRender (x64 proxy) = %p\n",_DAT_1803fa688);
      goto LAB_180018201;
    }
    pcVar11 = "[IFACE-WARN] g_pRender x64 pattern not found\n";
  }
  *(undefined8 *)(puVar15 + -8) = 0x180018200;
  FUN_180014410(pcVar11);
LAB_180018201:
  *(undefined8 *)(puVar15 + -8) = 0x180018213;
  pHVar6 = LoadLibraryA("vstdlib");
  *(undefined8 *)(puVar15 + -8) = 0x180018223;
  pFVar7 = GetProcAddress(pHVar6,"KeyValuesSystem");
  *(undefined8 *)(puVar15 + -8) = 0x180018225;
  (*pFVar7)();
  *(undefined8 *)(puVar15 + -8) = 0x180018232;
  pHVar6 = GetModuleHandleA("vstdlib.dll");
  *(undefined8 *)(puVar15 + -8) = 0x180018242;
  pFVar7 = GetProcAddress(pHVar6,"RandomSeed");
  if (pFVar7 != (FARPROC)0x0) {
    do {
      if (((pFVar7[uVar19] == (FARPROC)0x48) && (pFVar7[uVar19 + 1] == (FARPROC)0x8b)) &&
         (pFVar7[uVar19 + 2] == (FARPROC)0xd)) {
        iVar20 = *(int *)(pFVar7 + uVar19 + 3);
        lVar9 = *(longlong *)(pFVar7 + uVar19 + (longlong)iVar20 + 7);
        if (lVar9 != 0) {
          *(undefined8 *)(puVar15 + -8) = 0x180018299;
          DAT_1803fa5c0 = lVar9;
          FUN_180014410("[IFACE] g_pRandom (x64 MOV deref) = %p\n");
          goto LAB_1800182b7;
        }
        *(undefined8 *)(puVar15 + -8) = 0x1800182ab;
        FUN_180014410("[IFACE-WARN] RandomSeed global at %p is null\n",
                      pFVar7 + uVar19 + (longlong)iVar20 + 7);
        break;
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
    } while ((int)uVar18 < 0x20);
    *(undefined8 *)(puVar15 + -8) = 0x1800182b7;
    FUN_180014410("[IFACE-WARN] RandomSeed x64 pattern not found\n");
  }
LAB_1800182b7:
  *(undefined8 *)(puVar15 + -8) = 0x1800182c7;
  return;
}


)B180017150",
    "dff4e13ed561744f019cb8499f92f84b5d295278d689226d52c014ab43221061",
    R"F180017150C(FUN_180013100
FUN_180014410
FUN_180015f40
FUN_180016410
FUN_1800167d0
FUN_180016940
FUN_180018770
FUN_18001d080
FUN_1801fce00
FUN_1801fce20
FUN_18020e450)F180017150C",
    R"F180017150D(LAB_180017957
LAB_180017ad4
LAB_180017ade
LAB_180017b30
LAB_180017efc
LAB_180017fb3
LAB_180018026
LAB_180018201
LAB_1800182b7
UNK_1800186c9
DAT_18033eee0
DAT_18033efd0
DAT_18033f180
DAT_1803d5b48
DAT_1803da4c0
DAT_1803f9248
DAT_1803f9250
DAT_1803f9258
DAT_1803f9278
DAT_1803f9280
DAT_1803f9290
DAT_1803fa320
DAT_1803fa340
DAT_1803fa348
DAT_1803fa350
DAT_1803fa358
DAT_1803fa360
DAT_1803fa598
DAT_1803fa5a0
DAT_1803fa5a8
DAT_1803fa5c0
DAT_1803fa5e0
DAT_1803fa600
DAT_1803fa608
DAT_1803fa610
DAT_1803fa620
DAT_1803fa638
DAT_1803fa640
DAT_1803fa650
DAT_1803fa658
DAT_1803fa660
DAT_1803fa668
DAT_1803fa670
DAT_1803fa678
DAT_1803fa680)F180017150D",
    R"F180017150T("vstdlib"
"tier0.dll"
"vgui2.dll"
"RandomSeed"
"VClient017"
"client.dll"
"engine.dll"
"MDLCache004"
"g_pMemAlloc"
"vstdlib.dll"
"LUASHARED003"
"ShaderApi030"
"vphysics.dll"
"VGUI_Input005"
"VGUI_Panel009"
"VGUI_ivgui008"
"datacache.dll"
"VEngineCvar007"
"VEngineVGui001"
"VFileSystem022"
"VGUI_Scheme010"
"VGUI_System010"
"lua_shared.dll"
"vguimatsurface"
"CreateInterface"
"GameMovement001"
"KeyValuesSystem"
"VEngineModel016"
"VGUI_Surface030"
"inputsystem.dll"
"VEngineClient015"
"View_Render sig+"
"shaderapidx9.dll"
".?AVCViewRender@@"
"View_Render scan+"
"VBaseFileSystem011"
"VMaterialSystem080"
"data sweep client+"
"materialsystem.dll"
"VModelInfoClient006"
"EngineTraceClient003"
"GAMEEVENTSMANAGER002"
"VClientEntityList003"
"VClientPrediction001"
"VEngineRenderView014"
"filesystem_stdio.dll"
"InputSystemVersion001"
"VGUI_InputInternal001"
".?AVCViewRenderBeams@@"
".?AVCMoveHelperClient@@"
"VPhysicsDebugOverlay001"
"VPhysicsSurfaceProps001"
"VEngineClientStringTable001"
"VClientDllSharedAppSystems001"
"VENGINE_LAUNCHER_API_VERSION004"
"[IFACE-FAIL] g_pClient is null!\\n"
"[IFACE] g_pRender (x64 proxy) = %p\\n"
"[IFACE-FAIL] g_pRenderview is null!\\n"
"[IFACE] g_pRandom (x64 MOV deref) = %p\\n"
"48 8B 0D ? ? ? ? 48 8B 01 FF 50 18 48 8B 0D"
"48 8B 0D ? ? ? ? 48 8B 01 FF 50 28 48 8B 0D"
"[IFACE] D3DDevice=%p (via x64 pattern scan)\\n"
"[IFACE-WARN] RandomSeed global at %p is null\\n"
"[IFACE-WARN] g_pRender x64 pattern not found\\n"
"40 55 53 48 8D AC 24 38 F0 FF FF B8 C8 10 00 00"
"[IFACE-FAIL] D3DDevice x64 pattern not found!\\n"
"[IFACE-WARN] RandomSeed x64 pattern not found\\n"
"[IFACE] Input=%p Globals=%p CMode=%p ViewR=%p\\n"
"[IFACE-WARN] BaseClientState x64 CL_Move resolver failed\\n"
"[IFACE] g_pMoveHelper = %p (CMoveHelperClient, RTTI-verified)\\n"
"[IFACE] BaseClientState (x64) = %p (last=0x20B84 choked=0x20B88)\\n"
"[IFACE] g_pViewRenderBeams = %p (CViewRenderBeams, RTTI-verified)\\n"
"48 89 6C 24 18 48 89 7C 24 20 41 56 48 83 EC 30 48 8B F9 45 33 F6 48 8B 0D"
"48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 60 CC CC 48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 20")F180017150T",
    R"F180017150F(92: if (pFVar7 == (FARPROC)0x0) {
100: if (pFVar7 == (FARPROC)0x0) {
108: if (pFVar7 == (FARPROC)0x0) {
116: if (pFVar7 == (FARPROC)0x0) {
124: if (pFVar7 == (FARPROC)0x0) {
132: if (pFVar7 == (FARPROC)0x0) {
140: if (pFVar7 == (FARPROC)0x0) {
148: if (pFVar7 == (FARPROC)0x0) {
156: if (pFVar7 == (FARPROC)0x0) {
164: if (pFVar7 == (FARPROC)0x0) {
172: if (pFVar7 == (FARPROC)0x0) {
180: if (pFVar7 == (FARPROC)0x0) {
188: if (pFVar7 != (FARPROC)0x0) {
193: if (pFVar7 == (FARPROC)0x0) {
201: if (pFVar7 == (FARPROC)0x0) {
209: if (pFVar7 == (FARPROC)0x0) {
217: if (pFVar7 == (FARPROC)0x0) {
225: if (pFVar7 == (FARPROC)0x0) {
233: if (pFVar7 == (FARPROC)0x0) {
241: if (pFVar7 == (FARPROC)0x0) {
249: if (pFVar7 == (FARPROC)0x0) {
257: if (pFVar7 == (FARPROC)0x0) {
265: if (pFVar7 == (FARPROC)0x0) {
273: if (pFVar7 == (FARPROC)0x0) {
281: if (pFVar7 == (FARPROC)0x0) {
289: if (pFVar7 == (FARPROC)0x0) {
297: if (pFVar7 == (FARPROC)0x0) {
305: if (pFVar7 == (FARPROC)0x0) {
313: if (pFVar7 == (FARPROC)0x0) {
321: if (pFVar7 == (FARPROC)0x0) {
351: for (puVar8 = (undefined8 *)*puVar8; lVar9 = DAT_1803fa5a0, puVar8 != puVar1; puVar8 = puVar8 + 1)
356: if (cVar4 != '\0') break;
359: if (local_b8 == (void *)0x0) {
360: LAB_180017957:
361: if ((DAT_1803fa5a0 == 0) &&
365: else {
384: for (puVar8 = (undefined8 *)*puVar8; lVar9 = DAT_1803fa670, puVar8 != puVar1;
389: if (cVar4 != '\0') break;
392: if (local_a0[0] != (void *)0x0) {
394: if ((0xfff < (ulonglong)((local_90 - (longlong)local_a0[0] >> 3) * 8)) &&
398: goto LAB_180017ade;
401: else {
403: if (((ulonglong)((local_a8 - (longlong)local_b8 >> 3) * 8) < 0x1000) ||
411: goto LAB_180017957;
413: LAB_180017ad4:
418: LAB_180017ade:
426: if (DAT_1803fa670 == 0) {
429: if (DAT_1803fa670 != 0) goto LAB_180017b30;
433: else {
434: LAB_180017b30:
443: if (pFVar7 == (FARPROC)0x0) {
458: if (pHVar6 != (HMODULE)0x0) {
483: if (pcVar11 != (char *)0x0) {
485: for (; pcVar11 < pcVar14; pcVar11 = pcVar11 + 1) {
486: if ((((*pcVar11 == 'H') && (pcVar11[1] == -0x73)) && (pcVar11[2] == '\r')) &&
491: if ((BVar5 == 0) &&
498: break;
503: if (DAT_1803fa620 == (HMODULE)0x0) {
508: if (DAT_1803f9278 == (longlong *)0x0) {
512: else {
532: if (pHVar6 != (HMODULE)0x0) {
550: if (((*(uint *)(puVar15 + 0x330) != 0) && (pHVar6 <= pHVar2)) && (pHVar2 < pHVar17)) {
553: while (iVar20 = (int)uVar13, iVar20 < 2) {
554: if (DAT_1803fa680 != 0) goto LAB_180018026;
557: while (iVar16 = (int)uVar13, iVar16 < 0x180) {
559: if (*(char **)(puVar15 + 0x348) < pcVar11 + 0xd) break;
560: if (*pcVar11 == -0x34) {
561: if (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 1)) == -0x34) {
562: if (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 2)) != -0x34)
563: goto LAB_180017efc;
564: break;
566: LAB_180017fb3:
570: else {
571: LAB_180017efc:
572: if (((*pcVar11 != 'H') ||
575: goto LAB_180017fb3;
576: if ((iVar20 == 0) &&
587: else {
589: if (iVar20 == 0) {
597: if (cVar4 != '\0') break;
607: if (DAT_1803fa680 == 0) {
611: if (lVar9 != 0) {
616: if (DAT_1803fa680 == 0) {
621: LAB_180018026:
644: if (lVar9 == 0) {
648: else {
653: if (DAT_1803f9280 == 0) {
656: else {
675: if (lVar9 != 0) {
680: goto LAB_180018201;
686: LAB_180018201:
697: if (pFVar7 != (FARPROC)0x0) {
698: do {
699: if (((pFVar7[uVar19] == (FARPROC)0x48) && (pFVar7[uVar19 + 1] == (FARPROC)0x8b)) &&
703: if (lVar9 != 0) {
707: goto LAB_1800182b7;
712: break;
720: LAB_1800182b7:
722: return;)F180017150F",
    R"F180017150U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180017957.
TODO: recover the declaration, type and value for global/data reference LAB_180017ad4.
TODO: recover the declaration, type and value for global/data reference LAB_180017ade.
TODO: recover the declaration, type and value for global/data reference LAB_180017b30.
TODO: recover the declaration, type and value for global/data reference LAB_180017efc.
TODO: recover the declaration, type and value for global/data reference LAB_180017fb3.
TODO: recover the declaration, type and value for global/data reference LAB_180018026.
TODO: recover the declaration, type and value for global/data reference LAB_180018201.
TODO: recover the declaration, type and value for global/data reference LAB_1800182b7.
TODO: recover the declaration, type and value for global/data reference UNK_1800186c9.
TODO: recover the declaration, type and value for global/data reference DAT_18033eee0.
TODO: recover the declaration, type and value for global/data reference DAT_18033efd0.
TODO: recover the declaration, type and value for global/data reference DAT_18033f180.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5b48.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9248.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9258.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9278.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9280.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9290.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa320.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa340.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa348.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa350.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa358.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa598.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa5a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa5a8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa5c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa5e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa600.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa610.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa620.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa638.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa650.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa658.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa660.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa670.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa678.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa680.
TODO: resolve the indirect call in body 97: DAT_1803f9278 = (longlong *)(*pFVar7)("VClient017",0);.
TODO: resolve the indirect call in body 105: DAT_1803fa668 = (*pFVar7)("VEngineClient015",0);.
TODO: resolve the indirect call in body 113: DAT_1803fa360 = (*pFVar7)("VClientEntityList003",0);.
TODO: resolve the indirect call in body 121: DAT_1803fa600 = (*pFVar7)("VGUI_Panel009",0);.
TODO: resolve the indirect call in body 129: DAT_1803fa350 = (*pFVar7)("VGUI_ivgui008",0);.
TODO: resolve the indirect call in body 137: (*pFVar7)("VGUI_System010",0);.
TODO: resolve the indirect call in body 145: _DAT_1803f9298 = (*pFVar7)("VGUI_Surface030",0);.
TODO: resolve the indirect call in body 153: (*pFVar7)("VGUI_Scheme010",0);.
TODO: resolve the indirect call in body 161: _DAT_1803fa328 = (*pFVar7)("VGUI_Input005",0);.
TODO: resolve the indirect call in body 169: (*pFVar7)("VGUI_InputInternal001",0);.
TODO: resolve the indirect call in body 177: DAT_1803f9248 = (*pFVar7)("VBaseFileSystem011",0);.
TODO: resolve the indirect call in body 185: DAT_1803fa358 = (*pFVar7)("VFileSystem022",0);.
TODO: resolve the indirect call in body 189: (*pFVar7)("VEngineClientStringTable001",0);.
TODO: resolve the indirect call in body 198: (*pFVar7)("VClientDllSharedAppSystems001",0);.
TODO: resolve the indirect call in body 206: (*pFVar7)("VENGINE_LAUNCHER_API_VERSION004",0);.
TODO: resolve the indirect call in body 214: DAT_1803fa348 = (*pFVar7)("VEngineVGui001",0);.
TODO: resolve the indirect call in body 222: DAT_1803f9250 = (*pFVar7)("VModelInfoClient006",0);.
TODO: resolve the indirect call in body 230: DAT_1803f9280 = (*pFVar7)("VEngineRenderView014",0);.
TODO: resolve the indirect call in body 238: DAT_1803fa640 = (*pFVar7)("VMaterialSystem080",0);.
TODO: resolve the indirect call in body 246: DAT_1803fa5a8 = (*pFVar7)("InputSystemVersion001",0);.
TODO: resolve the indirect call in body 254: DAT_1803fa598 = (*pFVar7)("VEngineModel016",0);.
TODO: resolve the indirect call in body 262: DAT_1803fa610 = (*pFVar7)("EngineTraceClient003",0);.
TODO: resolve the indirect call in body 270: (*pFVar7)("VPhysicsDebugOverlay001",0);.
TODO: resolve the indirect call in body 278: DAT_1803fa650 = (*pFVar7)("VPhysicsSurfaceProps001",0);.
TODO: resolve the indirect call in body 286: DAT_1803fa340 = (*pFVar7)("VEngineCvar007",0);.
TODO: resolve the indirect call in body 294: (*pFVar7)("ShaderApi030",0);.
TODO: resolve the indirect call in body 302: DAT_1803fa320 = (*pFVar7)("GAMEEVENTSMANAGER002",0);.
TODO: resolve the indirect call in body 310: DAT_1803fa658 = (*pFVar7)("GameMovement001",0);.
TODO: resolve the indirect call in body 318: DAT_1803f9290 = (*pFVar7)("VClientPrediction001",0);.
TODO: resolve the indirect call in body 326: (*pFVar7)("MDLCache004",0);.
TODO: resolve the indirect call in body 415: pcVar3 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 416: (*pcVar3)();.
TODO: resolve the indirect call in body 451: DAT_1803fa678 = (*pFVar7)("LUASHARED003",0);.
TODO: resolve the indirect call in body 692: (*pFVar7)();.)F180017150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180017150() noexcept {
    return kFunction_0x180017150;
}

// 0x1800186d0 FUN_1800186d0
// source: re/dump/decompile/0x1800186d0_FUN_1800186d0.c
// size: 146 bytes; thunk: false
// body sha256: 7be6d1cf07ba37b24d583aa27fb92ba03133a1e4308c4215b33230a2813798d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800186d0{
    "0x1800186d0",
    "FUN_1800186d0",
    R"F1800186d0S(undefined FUN_1800186d0())F1800186d0S",
    R"B1800186d0(// 0x1800186d0  FUN_1800186d0
// size=146 thunk=false
// signature: undefined FUN_1800186d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800186d0(undefined8 *param_1,LPCVOID param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  puVar1 = (ulonglong *)*param_1;
  if (((LPCVOID)*puVar1 <= param_2) &&
     (puVar1 = (ulonglong *)param_1[1], param_2 < (LPCVOID)*puVar1)) {
    local_48.BaseAddress = (PVOID)0x0;
    local_48.AllocationBase = (PVOID)0x0;
    local_48.AllocationProtect = 0;
    local_48._20_4_ = 0;
    local_48.RegionSize = 0;
    local_48.State = 0;
    local_48.Protect = 0;
    local_48.Type = 0;
    local_48._44_4_ = 0;
    puVar1 = (ulonglong *)VirtualQuery(param_2,&local_48,0x30);
    if ((puVar1 != (ulonglong *)0x0) && (local_48.State == 0x1000)) {
      puVar1 = (ulonglong *)((ulonglong)local_48._32_8_ >> 0x20);
      if ((local_48._32_8_ & 0x10100000000) == 0) {
        return (ulonglong)CONCAT31(local_48.Protect._1_3_,(local_48._32_8_ & 0xf000000000) != 0);
      }
    }
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}


)B1800186d0",
    "7be6d1cf07ba37b24d583aa27fb92ba03133a1e4308c4215b33230a2813798d0",
    R"F1800186d0C()F1800186d0C",
    R"F1800186d0D(DAT_1803da4c0)F1800186d0D",
    R"F1800186d0T()F1800186d0T",
    R"F1800186d0F(19: if (((LPCVOID)*puVar1 <= param_2) &&
31: if ((puVar1 != (ulonglong *)0x0) && (local_48.State == 0x1000)) {
33: if ((local_48._32_8_ & 0x10100000000) == 0) {
34: return (ulonglong)CONCAT31(local_48.Protect._1_3_,(local_48._32_8_ & 0xf000000000) != 0);
38: return (ulonglong)puVar1 & 0xffffffffffffff00;)F1800186d0F",
    R"F1800186d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1800186d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800186d0() noexcept {
    return kFunction_0x1800186d0;
}

// 0x180018770 FUN_180018770
// source: re/dump/decompile/0x180018770_FUN_180018770.c
// size: 538 bytes; thunk: false
// body sha256: 0b5c5c58a4aa32db88eb503bd331fba3a57eb88bd90184bd06392f38bf3dfca3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018770{
    "0x180018770",
    "FUN_180018770",
    R"F180018770S(undefined FUN_180018770())F180018770S",
    R"B180018770(// 0x180018770  FUN_180018770
// size=538 thunk=false
// signature: undefined FUN_180018770()
// status: ok


undefined8
FUN_180018770(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  void *lp;
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((undefined8 *)0xffff < param_2) {
    BVar5 = IsBadReadPtr(param_2,8);
    if ((((BVar5 == 0) && (lp = (void *)*param_2, lp != (void *)0x0)) && (*(void **)*param_1 <= lp))
       && ((longlong)lp + 0x130U <= *(ulonglong *)param_1[1])) {
      BVar5 = IsBadReadPtr(lp,0x130);
      if (BVar5 == 0) {
        cVar4 = FUN_1800186d0(param_1[2],*(undefined8 *)((longlong)lp + 0x28));
        if (cVar4 != '\0') {
          cVar4 = FUN_1800186d0(param_1[2],*(undefined8 *)((longlong)lp + 0x30));
          if (cVar4 != '\0') {
            cVar4 = FUN_1800186d0(param_1[2],*(undefined8 *)((longlong)lp + 0x128));
            if (cVar4 != '\0') {
              puVar1 = (undefined8 *)param_1[3];
              if (((void *)(*(longlong *)*puVar1 + 8) <= lp) && (lp < *(void **)puVar1[1])) {
                BVar5 = IsBadReadPtr((void *)((longlong)lp + -8),8);
                if (BVar5 == 0) {
                  plVar7 = *(longlong **)((longlong)lp + -8);
                  plVar2 = *(longlong **)*puVar1;
                  if (plVar2 <= plVar7) {
                    plVar3 = *(longlong **)puVar1[1];
                    if (((plVar7 + 3 <= plVar3) && ((int)*plVar7 == 1)) &&
                       ((0 < (int)*(uint *)((longlong)plVar7 + 0xc) &&
                        (((((longlong *)
                            ((ulonglong)*(uint *)((longlong)plVar7 + 0x14) + (longlong)plVar2) ==
                            plVar7 && (*(int *)((longlong)plVar7 + 4) == 0)) &&
                          (plVar7 = (longlong *)
                                    ((ulonglong)*(uint *)((longlong)plVar7 + 0xc) + 0x10 +
                                    (longlong)plVar2), plVar2 <= plVar7)) &&
                         ((plVar7 < plVar3 &&
                          (0x11 < (ulonglong)((longlong)plVar3 - (longlong)plVar7))))))))) {
                      lVar6 = *plVar7 - s___AVCViewRender___180310118._0_8_;
                      if ((lVar6 == 0) &&
                         (lVar6 = plVar7[1] - s___AVCViewRender___180310118._8_8_, lVar6 == 0)) {
                        lVar6 = (ulonglong)*(ushort *)(plVar7 + 2) -
                                (ulonglong)(ushort)s___AVCViewRender___180310118._16_2_;
                      }
                      if (lVar6 == 0) {
                        lVar6 = *(longlong *)*param_1;
                        DAT_1803f9258 = 1;
                        DAT_1803fa680 = param_2;
                        FUN_180014410("[IFACE] g_pViewrender verified via %s 0x%llX -> %p (vt=%p Render=client+0x%llX RenderView=client+0x%llX PreHUD=client+0x%llX)\n"
                                      ,param_3,param_4,param_2,lp,
                                      *(longlong *)((longlong)lp + 0x28) - lVar6,
                                      *(longlong *)((longlong)lp + 0x30) - lVar6,
                                      *(longlong *)((longlong)lp + 0x128) - lVar6);
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


)B180018770",
    "0b5c5c58a4aa32db88eb503bd331fba3a57eb88bd90184bd06392f38bf3dfca3",
    R"F180018770C(FUN_180014410
FUN_1800186d0)F180018770C",
    R"F180018770D(DAT_1803f9258
DAT_1803fa680)F180018770D",
    R"F180018770T("[IFACE] g_pViewrender verified via %s 0x%llX -> %p (vt=%p Render=client+0x%llX RenderView=client+0x%llX PreHUD=client+0x%llX)\\n")F180018770T",
    R"F180018770F(20: if ((undefined8 *)0xffff < param_2) {
22: if ((((BVar5 == 0) && (lp = (void *)*param_2, lp != (void *)0x0)) && (*(void **)*param_1 <= lp))
25: if (BVar5 == 0) {
27: if (cVar4 != '\0') {
29: if (cVar4 != '\0') {
31: if (cVar4 != '\0') {
33: if (((void *)(*(longlong *)*puVar1 + 8) <= lp) && (lp < *(void **)puVar1[1])) {
35: if (BVar5 == 0) {
38: if (plVar2 <= plVar7) {
40: if (((plVar7 + 3 <= plVar3) && ((int)*plVar7 == 1)) &&
51: if ((lVar6 == 0) &&
56: if (lVar6 == 0) {
65: return 1;
77: return 0;)F180018770F",
    R"F180018770U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9258.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa680.)F180018770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018770() noexcept {
    return kFunction_0x180018770;
}

// 0x180018990 FUN_180018990
// source: re/dump/decompile/0x180018990_FUN_180018990.c
// size: 145 bytes; thunk: false
// body sha256: 7c66fdf04cb376ebc19963d4eb4df10cb211d234fce35b43f877e78d055655cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018990{
    "0x180018990",
    "FUN_180018990",
    R"F180018990S(undefined FUN_180018990())F180018990S",
    R"B180018990(// 0x180018990  FUN_180018990
// size=145 thunk=false
// signature: undefined FUN_180018990()
// status: ok


longlong * FUN_180018990(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = DAT_1803f9278;
  if (DAT_1803f9278 != (longlong *)0x0) {
    if (*param_1 != param_1[1]) {
      param_1[1] = *param_1;
    }
    for (lVar3 = (**(code **)(*plVar2 + 0x40))(); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
      local_res10 = *(undefined8 *)(lVar3 + 0x18);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_180221c00(param_1,puVar1,&local_res10);
      }
      else {
        *puVar1 = local_res10;
        param_1[1] = param_1[1] + 8;
      }
    }
  }
  return param_1;
}


)B180018990",
    "7c66fdf04cb376ebc19963d4eb4df10cb211d234fce35b43f877e78d055655cd",
    R"F180018990C(FUN_180221c00)F180018990C",
    R"F180018990D(DAT_1803f9278)F180018990D",
    R"F180018990T()F180018990T",
    R"F180018990F(19: if (DAT_1803f9278 != (longlong *)0x0) {
20: if (*param_1 != param_1[1]) {
23: for (lVar3 = (**(code **)(*plVar2 + 0x40))(); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
26: if (puVar1 == (undefined8 *)param_1[2]) {
29: else {
35: return param_1;)F180018990F",
    R"F180018990U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9278.
TODO: resolve the indirect call in body 23: for (lVar3 = (**(code **)(*plVar2 + 0x40))(); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {.)F180018990U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018990() noexcept {
    return kFunction_0x180018990;
}

// 0x180018a30 FUN_180018a30
// source: re/dump/decompile/0x180018a30_FUN_180018a30.c
// size: 147 bytes; thunk: false
// body sha256: fdce06dfc4f6c1697666fb85098ff5da003e932ab9b5384ae55f256bcaad045c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018a30{
    "0x180018a30",
    "FUN_180018a30",
    R"F180018a30S(undefined FUN_180018a30())F180018a30S",
    R"B180018a30(// 0x180018a30  FUN_180018a30
// size=147 thunk=false
// signature: undefined FUN_180018a30()
// status: ok


int FUN_180018a30(undefined8 param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar3 = 0;
  if (0 < (int)param_2[1]) {
    do {
      puVar4 = (undefined8 *)((longlong)iVar3 * 0x60 + *param_2);
      lVar1 = puVar4[8];
      if (((lVar1 != 0) && (0 < *(int *)(lVar1 + 8))) &&
         (iVar2 = FUN_180018a30(param_1,lVar1,param_3,0), iVar2 != 0)) {
        return *(int *)(puVar4 + 9) + iVar2;
      }
      iVar2 = _stricmp((char *)*puVar4,param_3);
      if (iVar2 == 0) {
        return *(int *)(puVar4 + 9);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_2[1]);
  }
  return 0;
}


)B180018a30",
    "fdce06dfc4f6c1697666fb85098ff5da003e932ab9b5384ae55f256bcaad045c",
    R"F180018a30C()F180018a30C",
    R"F180018a30D()F180018a30D",
    R"F180018a30T()F180018a30T",
    R"F180018a30F(16: if (0 < (int)param_2[1]) {
17: do {
20: if (((lVar1 != 0) && (0 < *(int *)(lVar1 + 8))) &&
22: return *(int *)(puVar4 + 9) + iVar2;
25: if (iVar2 == 0) {
26: return *(int *)(puVar4 + 9);
31: return 0;)F180018a30F",
    R"F180018a30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180018a30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018a30() noexcept {
    return kFunction_0x180018a30;
}

// 0x180018ad0 FUN_180018ad0
// source: re/dump/decompile/0x180018ad0_FUN_180018ad0.c
// size: 316 bytes; thunk: false
// body sha256: 1b2ea5fa14f730831d141dca954224920354bee80ac514f5312fc4ed2ace5def
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018ad0{
    "0x180018ad0",
    "FUN_180018ad0",
    R"F180018ad0S(undefined FUN_180018ad0())F180018ad0S",
    R"B180018ad0(// 0x180018ad0  FUN_180018ad0
// size=316 thunk=false
// signature: undefined FUN_180018ad0()
// status: ok


void FUN_180018ad0(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if ((param_3 != (longlong *)0x0) && (iVar5 = 0, 0 < (int)param_3[1])) {
    do {
      puVar4 = (undefined8 *)((longlong)iVar5 * 0x60 + *param_3);
      if ((puVar4 != (undefined8 *)0x0) &&
         (((char *)*puVar4 != (char *)0x0 &&
          (iVar2 = strcmp((char *)*puVar4,"baseclass"), iVar2 != 0)))) {
        iVar2 = *(int *)(puVar4 + 9);
        iVar3 = 0;
        if (0 < param_5) {
          do {
            FUN_1800129b0(param_2,&DAT_18033f514);
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_5);
        }
        FUN_1800129b0(param_2,"  [0x%04X] %s",iVar2 + param_4,*puVar4);
        lVar1 = puVar4[8];
        if ((lVar1 == 0) || (*(int *)(lVar1 + 8) < 1)) {
          FUN_1800129b0(param_2,&DAT_18033e92c);
        }
        else {
          FUN_1800129b0(param_2," -> %s\n",*(undefined8 *)(lVar1 + 0x18));
          FUN_180018ad0(&DAT_1803fac80,param_2,puVar4[8],iVar2 + param_4,param_5 + 1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_3[1]);
  }
  return;
}


)B180018ad0",
    "1b2ea5fa14f730831d141dca954224920354bee80ac514f5312fc4ed2ace5def",
    R"F180018ad0C(FUN_1800129b0)F180018ad0C",
    R"F180018ad0D(DAT_18033e92c
DAT_18033f514
DAT_1803fac80)F180018ad0D",
    R"F180018ad0T(" -> %s\\n"
"baseclass"
"  [0x%04X] %s")F180018ad0T",
    R"F180018ad0F(16: if ((param_3 != (longlong *)0x0) && (iVar5 = 0, 0 < (int)param_3[1])) {
17: do {
19: if ((puVar4 != (undefined8 *)0x0) &&
24: if (0 < param_5) {
25: do {
32: if ((lVar1 == 0) || (*(int *)(lVar1 + 8) < 1)) {
35: else {
43: return;)F180018ad0F",
    R"F180018ad0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18033f514.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F180018ad0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018ad0() noexcept {
    return kFunction_0x180018ad0;
}

// 0x180018c10 FUN_180018c10
// source: re/dump/decompile/0x180018c10_FUN_180018c10.c
// size: 340 bytes; thunk: false
// body sha256: cb7dd8aac92e9414cf6abe7418e08a2f4a358fc77fd2e257165dbbab09712a03
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018c10{
    "0x180018c10",
    "FUN_180018c10",
    R"F180018c10S(undefined FUN_180018c10())F180018c10S",
    R"B180018c10(// 0x180018c10  FUN_180018c10
// size=340 thunk=false
// signature: undefined FUN_180018c10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180018c10(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *_Str2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar6 = param_1 + 1;
  uVar1 = param_2[3];
  puVar8 = param_2;
  if (0xf < uVar1) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)puVar8 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  local_48 = param_2;
  lVar5 = FUN_180229bd0(plVar6,local_58,param_2,uVar10);
  lVar5 = *(longlong *)(lVar5 + 8);
  if (lVar5 == 0) {
    lVar5 = param_1[2];
  }
  if (lVar5 == param_1[2]) {
    puVar8 = (undefined8 *)*param_1;
    puVar11 = param_2;
    if (0xf < uVar1) {
      puVar11 = (undefined8 *)*param_2;
    }
    _Str2 = param_1 + 9;
    if (0xf < (ulonglong)param_1[0xc]) {
      _Str2 = (longlong *)*_Str2;
    }
    plVar2 = (longlong *)puVar8[1];
    for (plVar9 = (longlong *)*puVar8; plVar9 != plVar2; plVar9 = plVar9 + 1) {
      lVar5 = *plVar9;
      if ((lVar5 != 0) && (iVar3 = _stricmp(*(char **)(lVar5 + 0x18),(char *)_Str2), iVar3 == 0)) {
        uVar4 = FUN_180018a30(puVar8,lVar5,puVar11);
        goto LAB_180018cf5;
      }
    }
    uVar4 = 0;
LAB_180018cf5:
    plVar6 = (longlong *)FUN_180219900(plVar6,local_58,param_2);
    *(undefined4 *)(*plVar6 + 0x30) = uVar4;
  }
  else {
    plVar6 = (longlong *)FUN_180219900(plVar6,local_58,param_2);
    uVar4 = *(undefined4 *)(*plVar6 + 0x30);
  }
  FUN_18020e450(param_2);
  return uVar4;
}


)B180018c10",
    "cb7dd8aac92e9414cf6abe7418e08a2f4a358fc77fd2e257165dbbab09712a03",
    R"F180018c10C(FUN_180018a30
FUN_18020e450
FUN_180219900
FUN_180229bd0)F180018c10C",
    R"F180018c10D(LAB_180018cf5
DAT_1803da4c0)F180018c10D",
    R"F180018c10T()F180018c10T",
    R"F180018c10F(33: if (0xf < uVar1) {
38: if (param_2[2] != 0) {
39: do {
47: if (lVar5 == 0) {
50: if (lVar5 == param_1[2]) {
53: if (0xf < uVar1) {
57: if (0xf < (ulonglong)param_1[0xc]) {
61: for (plVar9 = (longlong *)*puVar8; plVar9 != plVar2; plVar9 = plVar9 + 1) {
63: if ((lVar5 != 0) && (iVar3 = _stricmp(*(char **)(lVar5 + 0x18),(char *)_Str2), iVar3 == 0)) {
65: goto LAB_180018cf5;
69: LAB_180018cf5:
73: else {
78: return uVar4;)F180018c10F",
    R"F180018c10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180018cf5.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180018c10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018c10() noexcept {
    return kFunction_0x180018c10;
}

// 0x180018d70 FUN_180018d70
// source: re/dump/decompile/0x180018d70_FUN_180018d70.c
// size: 37 bytes; thunk: false
// body sha256: ee9b64968d4224e9c8713ee7bce9d8ae4f7ccfd46302dd3f53199c0deb75d93d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018d70{
    "0x180018d70",
    "FUN_180018d70",
    R"F180018d70S(undefined FUN_180018d70())F180018d70S",
    R"B180018d70(// 0x180018d70  FUN_180018d70
// size=37 thunk=false
// signature: undefined FUN_180018d70()
// status: ok


void FUN_180018d70(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020d1d0(param_1 + 8);
  return;
}


)B180018d70",
    "ee9b64968d4224e9c8713ee7bce9d8ae4f7ccfd46302dd3f53199c0deb75d93d",
    R"F180018d70C(FUN_180209700
FUN_18020d1d0)F180018d70C",
    R"F180018d70D()F180018d70D",
    R"F180018d70T()F180018d70T",
    R"F180018d70F(12: return;)F180018d70F",
    R"F180018d70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180018d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018d70() noexcept {
    return kFunction_0x180018d70;
}

// 0x180018da0 FUN_180018da0
// source: re/dump/decompile/0x180018da0_FUN_180018da0.c
// size: 37 bytes; thunk: false
// body sha256: c559c9a49d58fc913c5960598257809db519bcbcd2525c1559e8d2544ebbeda7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018da0{
    "0x180018da0",
    "FUN_180018da0",
    R"F180018da0S(undefined FUN_180018da0())F180018da0S",
    R"B180018da0(// 0x180018da0  FUN_180018da0
// size=37 thunk=false
// signature: undefined FUN_180018da0()
// status: ok


void FUN_180018da0(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020d1d0(param_1 + 8);
  return;
}


)B180018da0",
    "c559c9a49d58fc913c5960598257809db519bcbcd2525c1559e8d2544ebbeda7",
    R"F180018da0C(FUN_180209700
FUN_18020d1d0)F180018da0C",
    R"F180018da0D()F180018da0D",
    R"F180018da0T()F180018da0T",
    R"F180018da0F(12: return;)F180018da0F",
    R"F180018da0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180018da0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018da0() noexcept {
    return kFunction_0x180018da0;
}

// 0x180018dd0 FUN_180018dd0
// source: re/dump/decompile/0x180018dd0_FUN_180018dd0.c
// size: 284 bytes; thunk: false
// body sha256: 1d55923a709556a15c85fcbb14d873d9e1690d2aab02ede9b8000d9be7eabd32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018dd0{
    "0x180018dd0",
    "FUN_180018dd0",
    R"F180018dd0S(undefined FUN_180018dd0())F180018dd0S",
    R"B180018dd0(// 0x180018dd0  FUN_180018dd0
// size=284 thunk=false
// signature: undefined FUN_180018dd0()
// status: ok


longlong FUN_180018dd0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *local_res10;
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined8 *local_18;
  
  FUN_180018990();
  puVar1 = (undefined4 *)(param_1 + 0x18);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_res10 = puVar1;
  lVar2 = FUN_1802d8350(0x98);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 7;
  *(undefined8 *)(param_1 + 0x50) = 8;
  *puVar1 = 0x3f800000;
  FUN_18022be40((undefined8 *)(param_1 + 0x30),0x10,*(undefined8 *)(param_1 + 0x20));
  if (DAT_1803f9278 != (longlong *)0x0) {
    local_28 = 0;
    puStack_20 = (undefined8 *)0x0;
    local_18 = (undefined8 *)0x0;
    for (lVar2 = (**(code **)(*DAT_1803f9278 + 0x40))(); lVar2 != 0;
        lVar2 = *(longlong *)(lVar2 + 0x20)) {
      local_res10 = *(undefined4 **)(lVar2 + 0x18);
      if (puStack_20 == local_18) {
        FUN_180221c00(&local_28,puStack_20,&local_res10);
      }
      else {
        *puStack_20 = local_res10;
        puStack_20 = puStack_20 + 1;
      }
    }
    FUN_1800191d0(param_1,&local_28);
    FUN_180209700(&local_28);
  }
  return param_1;
}


)B180018dd0",
    "1d55923a709556a15c85fcbb14d873d9e1690d2aab02ede9b8000d9be7eabd32",
    R"F180018dd0C(FUN_180018990
FUN_1800191d0
FUN_180209700
FUN_180221c00
FUN_18022be40
FUN_1802d8350)F180018dd0C",
    R"F180018dd0D(DAT_1803f9278)F180018dd0D",
    R"F180018dd0T()F180018dd0T",
    R"F180018dd0F(34: if (DAT_1803f9278 != (longlong *)0x0) {
38: for (lVar2 = (**(code **)(*DAT_1803f9278 + 0x40))(); lVar2 != 0;
41: if (puStack_20 == local_18) {
44: else {
52: return param_1;)F180018dd0F",
    R"F180018dd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9278.
TODO: resolve the indirect call in body 38: for (lVar2 = (**(code **)(*DAT_1803f9278 + 0x40))(); lVar2 != 0;.)F180018dd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018dd0() noexcept {
    return kFunction_0x180018dd0;
}

// 0x180018ef0 FUN_180018ef0
// source: re/dump/decompile/0x180018ef0_FUN_180018ef0.c
// size: 574 bytes; thunk: false
// body sha256: 58a4602e366b105132da20543476bccd5c5e70680b8bfc3798726048f23cd16c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180018ef0{
    "0x180018ef0",
    "FUN_180018ef0",
    R"F180018ef0S(undefined FUN_180018ef0())F180018ef0S",
    R"B180018ef0(// 0x180018ef0  FUN_180018ef0
// size=574 thunk=false
// signature: undefined FUN_180018ef0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180018ef0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_68 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  puVar10 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar10 = (undefined8 *)*param_2;
  }
  uVar12 = 0;
  uVar14 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      uVar14 = (uVar14 ^ *(byte *)((longlong)puVar10 + uVar12)) * 0x100000001b3;
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulonglong)param_2[2]);
  }
  local_28 = param_2;
  lVar9 = FUN_180229bd0(param_1 + 0x18,local_68,param_2,uVar14);
  lVar9 = *(longlong *)(lVar9 + 8);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar9 == *(longlong *)(param_1 + 0x20)) {
    puVar10 = (undefined8 *)FUN_18016d4c0(local_48,param_2);
    local_68[0] = puVar10;
    FUN_18020d250(local_d0);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_18001d080(&local_90,&DAT_18033e5ea,0);
    if (&local_90 != puVar10) {
      puVar13 = puVar10;
      if (0xf < (ulonglong)puVar10[3]) {
        puVar13 = (undefined8 *)*puVar10;
      }
      FUN_180212700(&local_90,puVar13,puVar10[2]);
    }
    local_d8 = param_1;
    FUN_18020e450(puVar10);
    plVar11 = (longlong *)FUN_180219600(param_1 + 0x18,local_58,param_2);
    lVar9 = *plVar11;
    *(longlong *)(lVar9 + 0x30) = local_d8;
    puVar1 = (undefined4 *)(lVar9 + 0x38);
    if (puVar1 != local_d0) {
      FUN_18022e8b0(puVar1);
      *puVar1 = local_d0[0];
      uVar2 = *(undefined8 *)(lVar9 + 0x40);
      *(undefined8 *)(lVar9 + 0x40) = local_c8;
      uVar3 = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar9 + 0x48) = local_c0;
      uVar4 = *(undefined8 *)(lVar9 + 0x50);
      *(undefined8 *)(lVar9 + 0x50) = local_b8;
      uVar5 = *(undefined8 *)(lVar9 + 0x58);
      *(undefined8 *)(lVar9 + 0x58) = local_b0;
      uVar6 = *(undefined8 *)(lVar9 + 0x60);
      *(undefined8 *)(lVar9 + 0x60) = local_a8;
      uVar7 = *(undefined8 *)(lVar9 + 0x68);
      *(undefined8 *)(lVar9 + 0x68) = local_a0;
      uVar8 = *(undefined8 *)(lVar9 + 0x70);
      *(undefined8 *)(lVar9 + 0x70) = local_98;
      local_c8 = uVar2;
      local_c0 = uVar3;
      local_b8 = uVar4;
      local_b0 = uVar5;
      local_a8 = uVar6;
      local_a0 = uVar7;
      local_98 = uVar8;
    }
    FUN_18020e8a0(lVar9 + 0x78,&local_90);
    FUN_18020e450(&local_90);
    local_68[0] = (undefined8 *)local_d0;
    FUN_180209700(&local_b8);
    FUN_18020d1d0(&local_c8);
    FUN_18020e450(param_2);
  }
  else {
    plVar11 = (longlong *)FUN_180219600(param_1 + 0x18,local_68,param_2);
    lVar9 = *plVar11;
    FUN_18020e450(param_2);
  }
  return lVar9 + 0x30;
}


)B180018ef0",
    "58a4602e366b105132da20543476bccd5c5e70680b8bfc3798726048f23cd16c",
    R"F180018ef0C(FUN_18001d080
FUN_18016d4c0
FUN_180209700
FUN_18020d1d0
FUN_18020d250
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_180219600
FUN_180229bd0
FUN_18022e8b0)F180018ef0C",
    R"F180018ef0D(DAT_18033e5ea
DAT_1803da4c0)F180018ef0D",
    R"F180018ef0T()F180018ef0T",
    R"F180018ef0F(48: if (0xf < (ulonglong)param_2[3]) {
53: if (param_2[2] != 0) {
54: do {
62: if (lVar9 == 0) {
65: if (lVar9 == *(longlong *)(param_1 + 0x20)) {
74: if (&local_90 != puVar10) {
76: if (0xf < (ulonglong)puVar10[3]) {
87: if (puVar1 != local_d0) {
119: else {
124: return lVar9 + 0x30;)F180018ef0F",
    R"F180018ef0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180018ef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180018ef0() noexcept {
    return kFunction_0x180018ef0;
}

// 0x180019130 FUN_180019130
// source: re/dump/decompile/0x180019130_FUN_180019130.c
// size: 18 bytes; thunk: false
// body sha256: 0013c1b3109fcc8c5cd8abb581a7e43caceec4104167941ba8f43d2b334e065a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019130{
    "0x180019130",
    "FUN_180019130",
    R"F180019130S(undefined FUN_180019130())F180019130S",
    R"B180019130(// 0x180019130  FUN_180019130
// size=18 thunk=false
// signature: undefined FUN_180019130()
// status: ok


void FUN_180019130(void)

{
  FUN_180209700();
  return;
}


)B180019130",
    "0013c1b3109fcc8c5cd8abb581a7e43caceec4104167941ba8f43d2b334e065a",
    R"F180019130C(FUN_180209700)F180019130C",
    R"F180019130D()F180019130D",
    R"F180019130T()F180019130T",
    R"F180019130F(11: return;)F180019130F",
    R"F180019130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180019130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019130() noexcept {
    return kFunction_0x180019130;
}

// 0x180019150 FUN_180019150
// source: re/dump/decompile/0x180019150_FUN_180019150.c
// size: 52 bytes; thunk: false
// body sha256: e69e699e96cca11ca38a3a1dd3ac7106ecacc133d37c3c16dea0551c607b2f1e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019150{
    "0x180019150",
    "FUN_180019150",
    R"F180019150S(undefined FUN_180019150())F180019150S",
    R"B180019150(// 0x180019150  FUN_180019150
// size=52 thunk=false
// signature: undefined FUN_180019150()
// status: ok


void FUN_180019150(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18022a370();
  free(*(void **)(param_1 + 8));
  return;
}


)B180019150",
    "e69e699e96cca11ca38a3a1dd3ac7106ecacc133d37c3c16dea0551c607b2f1e",
    R"F180019150C(FUN_180209700
FUN_18022a370)F180019150C",
    R"F180019150D()F180019150D",
    R"F180019150T()F180019150T",
    R"F180019150F(13: return;)F180019150F",
    R"F180019150U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180019150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019150() noexcept {
    return kFunction_0x180019150;
}

// 0x180019190 FUN_180019190
// source: re/dump/decompile/0x180019190_FUN_180019190.c
// size: 52 bytes; thunk: false
// body sha256: 9c39643de7a238f911d5c64c2bd9feb8be8a638c942118664c319b1565065aba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019190{
    "0x180019190",
    "FUN_180019190",
    R"F180019190S(undefined FUN_180019190())F180019190S",
    R"B180019190(// 0x180019190  FUN_180019190
// size=52 thunk=false
// signature: undefined FUN_180019190()
// status: ok


void FUN_180019190(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18022a370();
  free(*(void **)(param_1 + 8));
  return;
}


)B180019190",
    "9c39643de7a238f911d5c64c2bd9feb8be8a638c942118664c319b1565065aba",
    R"F180019190C(FUN_180209700
FUN_18022a370)F180019190C",
    R"F180019190D()F180019190D",
    R"F180019190T()F180019190T",
    R"F180019190F(13: return;)F180019190F",
    R"F180019190U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180019190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019190() noexcept {
    return kFunction_0x180019190;
}

// 0x1800191d0 FUN_1800191d0
// source: re/dump/decompile/0x1800191d0_FUN_1800191d0.c
// size: 168 bytes; thunk: false
// body sha256: b343d77924f55d75ce355c4a9cbde9624445d23d27b7fdff55ae9f0d18a5caf3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800191d0{
    "0x1800191d0",
    "FUN_1800191d0",
    R"F1800191d0S(undefined FUN_1800191d0())F1800191d0S",
    R"B1800191d0(// 0x1800191d0  FUN_1800191d0
// size=168 thunk=false
// signature: undefined FUN_1800191d0()
// status: ok


longlong * FUN_1800191d0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      _Memory = pvVar1;
      puVar3 = auStack_28;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 3) * 8)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar3 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x180019239;
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}


)B1800191d0",
    "b343d77924f55d75ce355c4a9cbde9624445d23d27b7fdff55ae9f0d18a5caf3",
    R"F1800191d0C()F1800191d0C",
    R"F1800191d0D()F1800191d0D",
    R"F1800191d0T()F1800191d0T",
    R"F1800191d0F(17: if (param_1 != param_2) {
19: if (pvVar1 != (void *)0x0) {
22: if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 3) * 8)) &&
43: return param_1;)F1800191d0F",
    R"F1800191d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 26: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 27: (*pcVar2)();.)F1800191d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800191d0() noexcept {
    return kFunction_0x1800191d0;
}

// 0x180019280 FUN_180019280
// source: re/dump/decompile/0x180019280_FUN_180019280.c
// size: 56 bytes; thunk: false
// body sha256: a6b8a6b234e2db112a04e6787285e0f0ba76d2ce6783ca841fb1b8d5ef44ee6f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019280{
    "0x180019280",
    "FUN_180019280",
    R"F180019280S(undefined FUN_180019280())F180019280S",
    R"B180019280(// 0x180019280  FUN_180019280
// size=56 thunk=false
// signature: undefined FUN_180019280()
// status: ok


void FUN_180019280(longlong param_1)

{
  FUN_18020e450(param_1 + 0x48);
  FUN_180209700(param_1 + 0x20);
  FUN_18020d1d0(param_1 + 0x10);
  return;
}


)B180019280",
    "a6b8a6b234e2db112a04e6787285e0f0ba76d2ce6783ca841fb1b8d5ef44ee6f",
    R"F180019280C(FUN_180209700
FUN_18020d1d0
FUN_18020e450)F180019280C",
    R"F180019280D()F180019280D",
    R"F180019280T()F180019280T",
    R"F180019280F(13: return;)F180019280F",
    R"F180019280U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180019280U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019280() noexcept {
    return kFunction_0x180019280;
}

// 0x1800192c0 FUN_1800192c0
// source: re/dump/decompile/0x1800192c0_FUN_1800192c0.c
// size: 84 bytes; thunk: false
// body sha256: 325d23b0c7122d37f0c2a6b8069cc2fe8b996b31a2b085d6ff122489f7dfed56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800192c0{
    "0x1800192c0",
    "FUN_1800192c0",
    R"F1800192c0S(undefined FUN_1800192c0())F1800192c0S",
    R"B1800192c0(// 0x1800192c0  FUN_1800192c0
// size=84 thunk=false
// signature: undefined FUN_1800192c0()
// status: ok


void FUN_1800192c0(longlong param_1)

{
  FUN_180209700(param_1 + 0x30);
  FUN_18022a370();
  free(*(void **)(param_1 + 0x20));
  FUN_180209700(param_1);
  return;
}


)B1800192c0",
    "325d23b0c7122d37f0c2a6b8069cc2fe8b996b31a2b085d6ff122489f7dfed56",
    R"F1800192c0C(FUN_180209700
FUN_18022a370)F1800192c0C",
    R"F1800192c0D()F1800192c0D",
    R"F1800192c0T()F1800192c0T",
    R"F1800192c0F(14: return;)F1800192c0F",
    R"F1800192c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800192c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800192c0() noexcept {
    return kFunction_0x1800192c0;
}

// 0x180019320 FUN_180019320
// source: re/dump/decompile/0x180019320_FUN_180019320.c
// size: 789 bytes; thunk: false
// body sha256: ed97740c20df562337b56e5874e84add8f7520a4c0692ca67970c53720fbd2db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019320{
    "0x180019320",
    "FUN_180019320",
    R"F180019320S(undefined FUN_180019320())F180019320S",
    R"B180019320(// 0x180019320  FUN_180019320
// size=789 thunk=false
// signature: undefined FUN_180019320()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019320(void)

{
  longlong *plVar1;
  char *_Str1;
  longlong *plVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined1 *local_1d8;
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [40];
  FILE *local_178 [2];
  CHAR local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  lVar6 = FUN_180018dd0(local_1d0);
  FUN_1800191d0(&DAT_1803fac80,lVar6);
  if ((undefined4 *)(lVar6 + 0x18) != (undefined4 *)&DAT_1803fac98) {
    FUN_18022e830();
    _DAT_1803fac98 = *(undefined4 *)(lVar6 + 0x18);
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(lVar6 + 0x20) = DAT_1803faca0;
    DAT_1803faca0 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = DAT_1803faca8;
    DAT_1803faca8 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar6 + 0x30) = DAT_1803facb0;
    DAT_1803facb0 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x38);
    *(undefined8 *)(lVar6 + 0x38) = DAT_1803facb8;
    DAT_1803facb8 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar6 + 0x40) = DAT_1803facc0;
    DAT_1803facc0 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined8 *)(lVar6 + 0x48) = DAT_1803facc8;
    DAT_1803facc8 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x50);
    *(undefined8 *)(lVar6 + 0x50) = DAT_1803facd0;
    DAT_1803facd0 = uVar4;
  }
  local_178[0] = (FILE *)local_1b8;
  FUN_180209700(local_1a0);
  FUN_18022a370();
  free((void *)local_1b8._8_8_);
  local_1d8 = local_1d0;
  FUN_180209700(local_1d0);
  GetTempPathA(0x104,local_168);
  strcat_s(local_168,0x104,"mayrrx64_netvars.txt");
  local_178[0] = (FILE *)0x0;
  fopen_s(local_178,local_168,"w");
  if (local_178[0] != (FILE *)0x0) {
    FUN_1800129b0(local_178[0],"=== mayrrX64 Netvar Dump ===\n\n");
    plVar2 = DAT_1803fac88;
    for (plVar9 = DAT_1803fac80; plVar9 != plVar2; plVar9 = plVar9 + 1) {
      plVar1 = (longlong *)*plVar9;
      if (plVar1 != (longlong *)0x0) {
        FUN_1800129b0(local_178[0],"--- %s (%d props) ---\n",plVar1[3],(int)plVar1[1]);
        pFVar3 = local_178[0];
        iVar8 = 0;
        if (0 < (int)plVar1[1]) {
          do {
            puVar7 = (undefined8 *)((longlong)iVar8 * 0x60 + *plVar1);
            if (((puVar7 != (undefined8 *)0x0) && (_Str1 = (char *)*puVar7, _Str1 != (char *)0x0))
               && (iVar5 = strcmp(_Str1,"baseclass"), iVar5 != 0)) {
              FUN_1800129b0(pFVar3,"  [0x%04X] %s",*(undefined4 *)(puVar7 + 9),_Str1);
              lVar6 = puVar7[8];
              if ((lVar6 == 0) || (*(int *)(lVar6 + 8) < 1)) {
                FUN_1800129b0(pFVar3,&DAT_18033e92c);
              }
              else {
                FUN_1800129b0(pFVar3," -> %s\n",*(undefined8 *)(lVar6 + 0x18));
                local_1e8 = 1;
                FUN_180018ad0();
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)plVar1[1]);
        }
        FUN_1800129b0(local_178[0],&DAT_18033e92c);
      }
    }
    fclose(local_178[0]);
  }
  FUN_180014410("[NVMGR] Netvar dump written to %s\n",local_168);
  return;
}


)B180019320",
    "ed97740c20df562337b56e5874e84add8f7520a4c0692ca67970c53720fbd2db",
    R"F180019320C(FUN_1800129b0
FUN_180014410
FUN_180018ad0
FUN_180018dd0
FUN_1800191d0
FUN_180209700
FUN_18022a370
FUN_18022e830)F180019320C",
    R"F180019320D(DAT_18033e92c
DAT_1803da4c0
DAT_1803fac80
DAT_1803fac88
DAT_1803fac98
DAT_1803faca0
DAT_1803faca8
DAT_1803facb0
DAT_1803facb8
DAT_1803facc0
DAT_1803facc8
DAT_1803facd0)F180019320D",
    R"F180019320T("w"
" -> %s\\n"
"baseclass"
"  [0x%04X] %s"
"mayrrx64_netvars.txt"
"--- %s (%d props) ---\\n"
"=== mayrrX64 Netvar Dump ===\\n\\n"
"[NVMGR] Netvar dump written to %s\\n")F180019320T",
    R"F180019320F(36: if ((undefined4 *)(lVar6 + 0x18) != (undefined4 *)&DAT_1803fac98) {
71: if (local_178[0] != (FILE *)0x0) {
74: for (plVar9 = DAT_1803fac80; plVar9 != plVar2; plVar9 = plVar9 + 1) {
76: if (plVar1 != (longlong *)0x0) {
80: if (0 < (int)plVar1[1]) {
81: do {
83: if (((puVar7 != (undefined8 *)0x0) && (_Str1 = (char *)*puVar7, _Str1 != (char *)0x0))
87: if ((lVar6 == 0) || (*(int *)(lVar6 + 8) < 1)) {
90: else {
105: return;)F180019320F",
    R"F180019320U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac88.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac98.
TODO: recover the declaration, type and value for global/data reference DAT_1803faca0.
TODO: recover the declaration, type and value for global/data reference DAT_1803faca8.
TODO: recover the declaration, type and value for global/data reference DAT_1803facb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803facb8.
TODO: recover the declaration, type and value for global/data reference DAT_1803facc0.
TODO: recover the declaration, type and value for global/data reference DAT_1803facc8.
TODO: recover the declaration, type and value for global/data reference DAT_1803facd0.)F180019320U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019320() noexcept {
    return kFunction_0x180019320;
}

// 0x180019640 FUN_180019640
// source: re/dump/decompile/0x180019640_FUN_180019640.c
// size: 178 bytes; thunk: false
// body sha256: 542317765a692e86b8e1df4519ab98dd938547308bdc8f53e5bad05e08f1cec6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019640{
    "0x180019640",
    "FUN_180019640",
    R"F180019640S(undefined FUN_180019640())F180019640S",
    R"B180019640(// 0x180019640  FUN_180019640
// size=178 thunk=false
// signature: undefined FUN_180019640()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019640(undefined8 param_1,longlong param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  if (((DAT_1803da5c4 < 0) && (param_3 != (char *)0x0)) &&
     (((byte)(*param_3 - 0x30U) < 10 || ((byte)(*param_3 - 0x2dU) < 2)))) {
    dVar3 = atof(param_3);
    fVar5 = (float)((uint)(float)dVar3 & _DAT_1803817c0) * DAT_180380964;
    fVar4 = DAT_180380964;
    if (DAT_180380964 <= fVar5) {
      fVar4 = fVar5;
    }
    if ((float)((uint)((float)((uint)param_2 ^ *(uint *)(param_2 + 0x54)) - (float)dVar3) &
               _DAT_1803817c0) <= fVar4) {
      uVar1 = *(uint *)(param_2 + 0x58);
      uVar2 = atoi(param_3);
      if (((uint)param_2 ^ uVar1) == uVar2) {
        DAT_1803da5c4 = 1;
        return;
      }
    }
    DAT_1803da5c4 = 0;
  }
  return;
}


)B180019640",
    "542317765a692e86b8e1df4519ab98dd938547308bdc8f53e5bad05e08f1cec6",
    R"F180019640C()F180019640C",
    R"F180019640D(DAT_180380964
DAT_1803da5c4)F180019640D",
    R"F180019640T()F180019640T",
    R"F180019640F(18: if (((DAT_1803da5c4 < 0) && (param_3 != (char *)0x0)) &&
23: if (DAT_180380964 <= fVar5) {
26: if ((float)((uint)((float)((uint)param_2 ^ *(uint *)(param_2 + 0x54)) - (float)dVar3) &
30: if (((uint)param_2 ^ uVar1) == uVar2) {
32: return;
37: return;)F180019640F",
    R"F180019640U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380964.
TODO: recover the declaration, type and value for global/data reference DAT_1803da5c4.)F180019640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019640() noexcept {
    return kFunction_0x180019640;
}

// 0x180019700 FUN_180019700
// source: re/dump/decompile/0x180019700_FUN_180019700.c
// size: 146 bytes; thunk: false
// body sha256: 2cf0208f669bb4d93ef087ff30aa60fcbc99cfa67e2cfce04778444536171e13
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019700{
    "0x180019700",
    "FUN_180019700",
    R"F180019700S(undefined FUN_180019700())F180019700S",
    R"B180019700(// 0x180019700  FUN_180019700
// size=146 thunk=false
// signature: undefined FUN_180019700()
// status: ok


ulonglong FUN_180019700(void *param_1)

{
  BOOL BVar1;
  void *lp;
  char *_String;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 extraout_XMM0_Qb;
  
  lp = *(void **)((longlong)param_1 + 0x38);
  if ((lp == (void *)0x0) || (lp == param_1)) {
LAB_18001972d:
    lp = param_1;
  }
  else {
    BVar1 = IsBadReadPtr(lp,0x60);
    if (BVar1 != 0) goto LAB_18001972d;
  }
  _String = *(char **)((longlong)lp + 0x48);
  if (_String != (char *)0x0) {
    BVar1 = IsBadReadPtr(_String,2);
    if (BVar1 == 0) {
      FUN_180019640(extraout_XMM0_Qa,lp,_String);
      goto LAB_18001975a;
    }
  }
  _String = (char *)0x0;
LAB_18001975a:
  if ((DAT_1803da5c4 != 1) && (_String != (char *)0x0)) {
    auVar2._0_8_ = atof(_String);
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar3._4_12_ = auVar2._4_12_;
    auVar3._0_4_ = (float)auVar2._0_8_;
    return auVar3._0_8_;
  }
  return (ulonglong)((uint)lp ^ *(uint *)((longlong)lp + 0x54));
}


)B180019700",
    "2cf0208f669bb4d93ef087ff30aa60fcbc99cfa67e2cfce04778444536171e13",
    R"F180019700C(FUN_180019640)F180019700C",
    R"F180019700D(LAB_18001972d
LAB_18001975a
DAT_1803da5c4)F180019700D",
    R"F180019700T()F180019700T",
    R"F180019700F(19: if ((lp == (void *)0x0) || (lp == param_1)) {
20: LAB_18001972d:
23: else {
25: if (BVar1 != 0) goto LAB_18001972d;
28: if (_String != (char *)0x0) {
30: if (BVar1 == 0) {
32: goto LAB_18001975a;
36: LAB_18001975a:
37: if ((DAT_1803da5c4 != 1) && (_String != (char *)0x0)) {
42: return auVar3._0_8_;
44: return (ulonglong)((uint)lp ^ *(uint *)((longlong)lp + 0x54));)F180019700F",
    R"F180019700U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18001972d.
TODO: recover the declaration, type and value for global/data reference LAB_18001975a.
TODO: recover the declaration, type and value for global/data reference DAT_1803da5c4.)F180019700U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019700() noexcept {
    return kFunction_0x180019700;
}

// 0x1800197a0 FUN_1800197a0
// source: re/dump/decompile/0x1800197a0_FUN_1800197a0.c
// size: 140 bytes; thunk: false
// body sha256: 6bc3c10c74e2e80e949b5c449bd15bfa7c9fdd955a4b61f3e90dc6d6f6d78948
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800197a0{
    "0x1800197a0",
    "FUN_1800197a0",
    R"F1800197a0S(undefined FUN_1800197a0())F1800197a0S",
    R"B1800197a0(// 0x1800197a0  FUN_1800197a0
// size=140 thunk=false
// signature: undefined FUN_1800197a0()
// status: ok


uint FUN_1800197a0(void *param_1)

{
  BOOL BVar1;
  uint uVar2;
  void *lp;
  char *_Str;
  
  lp = *(void **)((longlong)param_1 + 0x38);
  if ((lp == (void *)0x0) || (lp == param_1)) {
LAB_1800197cd:
    lp = param_1;
  }
  else {
    BVar1 = IsBadReadPtr(lp,0x60);
    if (BVar1 != 0) goto LAB_1800197cd;
  }
  _Str = *(char **)((longlong)lp + 0x48);
  if (_Str != (char *)0x0) {
    BVar1 = IsBadReadPtr(_Str,2);
    if (BVar1 == 0) {
      FUN_180019640();
      goto LAB_1800197fa;
    }
  }
  _Str = (char *)0x0;
LAB_1800197fa:
  if ((DAT_1803da5c4 != 1) && (_Str != (char *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180019815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = atoi(_Str);
    return uVar2;
  }
  return (uint)lp ^ *(uint *)((longlong)lp + 0x58);
}


)B1800197a0",
    "6bc3c10c74e2e80e949b5c449bd15bfa7c9fdd955a4b61f3e90dc6d6f6d78948",
    R"F1800197a0C(FUN_180019640)F1800197a0C",
    R"F1800197a0D(LAB_1800197cd
LAB_1800197fa
DAT_1803da5c4)F1800197a0D",
    R"F1800197a0T()F1800197a0T",
    R"F1800197a0F(16: if ((lp == (void *)0x0) || (lp == param_1)) {
17: LAB_1800197cd:
20: else {
22: if (BVar1 != 0) goto LAB_1800197cd;
25: if (_Str != (char *)0x0) {
27: if (BVar1 == 0) {
29: goto LAB_1800197fa;
33: LAB_1800197fa:
34: if ((DAT_1803da5c4 != 1) && (_Str != (char *)0x0)) {
38: return uVar2;
40: return (uint)lp ^ *(uint *)((longlong)lp + 0x58);)F1800197a0F",
    R"F1800197a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800197cd.
TODO: recover the declaration, type and value for global/data reference LAB_1800197fa.
TODO: recover the declaration, type and value for global/data reference DAT_1803da5c4.)F1800197a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800197a0() noexcept {
    return kFunction_0x1800197a0;
}

// 0x180019830 FUN_180019830
// source: re/dump/decompile/0x180019830_FUN_180019830.c
// size: 213 bytes; thunk: false
// body sha256: b4d1fd54532be882b8d837dfd6758f7ce9e5b27fbe20202c920f926406349877
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019830{
    "0x180019830",
    "FUN_180019830",
    R"F180019830S(undefined FUN_180019830())F180019830S",
    R"B180019830(// 0x180019830  FUN_180019830
// size=213 thunk=false
// signature: undefined FUN_180019830()
// status: ok


void FUN_180019830(longlong *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar7 < param_3) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return;
  }
  *(int *)(param_1 + 2) = iVar7 + param_3;
  uVar4 = 0x7fffffff >> (0x20U - (char)param_3 & 0x1f);
  puVar1 = (uint *)(*param_1 + ((longlong)iVar7 >> 5) * 4);
  uVar2 = *puVar1;
  uVar4 = (int)param_2 >> 0x1f & ~uVar4 | uVar4 & param_2;
  bVar3 = (byte)iVar7 & 0x1f;
  uVar5 = uVar4 << bVar3 | uVar4 >> 0x20 - bVar3;
  iVar7 = 1 << ((char)param_3 - 1U & 0x1f);
  uVar6 = iVar7 - 1U >> (0x1f - bVar3 & 0x1f);
  uVar4 = uVar6 & 1;
  puVar1[uVar4] = puVar1[uVar4] ^ (puVar1[uVar4] ^ uVar5) & uVar6;
  *puVar1 = iVar7 * 2 + -1 << bVar3 & (uVar5 ^ uVar2) ^ uVar2;
  return;
}


)B180019830",
    "b4d1fd54532be882b8d837dfd6758f7ce9e5b27fbe20202c920f926406349877",
    R"F180019830C()F180019830C",
    R"F180019830D()F180019830D",
    R"F180019830T()F180019830T",
    R"F180019830F(19: if (*(int *)((longlong)param_1 + 0xc) - iVar7 < param_3) {
22: return;
36: return;)F180019830F",
    R"F180019830U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180019830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019830() noexcept {
    return kFunction_0x180019830;
}

// 0x180019910 FUN_180019910
// source: re/dump/decompile/0x180019910_FUN_180019910.c
// size: 554 bytes; thunk: false
// body sha256: d1c10e32531a0e1b3442c7de654aff3e4654e6b612fac3196bb717f73b5605a0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019910{
    "0x180019910",
    "FUN_180019910",
    R"F180019910S(undefined FUN_180019910())F180019910S",
    R"B180019910(// 0x180019910  FUN_180019910
// size=554 thunk=false
// signature: undefined FUN_180019910()
// status: ok


void FUN_180019910(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 2);
  uVar6 = (ulonglong)(int)uVar8;
  if (((uVar6 & 7) != 0) || ((int)uVar9 < (int)(uVar8 + 0x28))) {
    for (; 0x7f < param_2; param_2 = param_2 >> 7) {
      iVar5 = (int)uVar6;
      if ((int)(uVar9 - iVar5) < 8) {
        *(uint *)(param_1 + 2) = uVar9;
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        uVar8 = uVar9;
      }
      else {
        *(int *)(param_1 + 2) = iVar5 + 8;
        bVar3 = (byte)uVar6 & 0x1f;
        uVar8 = *(uint *)(*param_1 + ((longlong)iVar5 >> 5) * 4);
        puVar1 = (uint *)(*param_1 + ((longlong)iVar5 >> 5) * 4);
        uVar9 = param_2 & 0x7f | 0x80;
        uVar10 = uVar9 << bVar3 | uVar9 >> 0x20 - bVar3;
        uVar7 = 0x7f >> (0x1f - bVar3 & 0x1f);
        uVar9 = uVar7 & 1;
        puVar1[uVar9] = puVar1[uVar9] ^ (puVar1[uVar9] ^ uVar10) & uVar7;
        *puVar1 = (uVar8 ^ uVar10) & 0xff << bVar3 ^ uVar8;
        uVar8 = *(uint *)(param_1 + 2);
        uVar9 = *(uint *)((longlong)param_1 + 0xc);
      }
      uVar6 = (ulonglong)uVar8;
    }
    if ((int)(uVar9 - uVar8) < 8) {
      *(uint *)(param_1 + 2) = uVar9;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(uint *)(param_1 + 2) = uVar8 + 8;
      bVar3 = (byte)uVar8 & 0x1f;
      uVar7 = (param_2 & 0x7f) << bVar3 | (param_2 & 0x7f) >> 0x20 - bVar3;
      uVar9 = *(uint *)(*param_1 + ((longlong)(int)uVar8 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar8 >> 5) * 4);
      uVar10 = 0x7f >> (0x1f - bVar3 & 0x1f);
      uVar8 = uVar10 & 1;
      puVar1[uVar8] = puVar1[uVar8] ^ (puVar1[uVar8] ^ uVar7) & uVar10;
      *puVar1 = (uVar9 ^ uVar7) & 0xff << bVar3 ^ uVar9;
    }
    return;
  }
  lVar2 = *param_1;
  lVar4 = (longlong)uVar6 >> 3;
  *(byte *)(lVar4 + lVar2) = (byte)param_2 | 0x80;
  if (param_2 < 0x80) {
    *(byte *)(lVar4 + lVar2) = (byte)param_2 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 8;
    return;
  }
  bVar3 = (byte)(param_2 >> 7);
  *(byte *)(lVar4 + 1 + lVar2) = bVar3 | 0x80;
  if (param_2 < 0x4000) {
    *(byte *)(lVar4 + 1 + lVar2) = bVar3 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
    return;
  }
  bVar3 = (byte)(param_2 >> 0xe);
  *(byte *)(lVar4 + 2 + lVar2) = bVar3 | 0x80;
  if (param_2 < 0x200000) {
    *(byte *)(lVar4 + 2 + lVar2) = bVar3 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 0x18;
    return;
  }
  bVar3 = (byte)(param_2 >> 0x15);
  *(byte *)(lVar4 + 3 + lVar2) = bVar3 | 0x80;
  if (param_2 < 0x10000000) {
    *(byte *)(lVar4 + 3 + lVar2) = bVar3 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
    return;
  }
  *(byte *)(lVar4 + 4 + lVar2) = (byte)(param_2 >> 0x1c);
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x28;
  return;
}


)B180019910",
    "d1c10e32531a0e1b3442c7de654aff3e4654e6b612fac3196bb717f73b5605a0",
    R"F180019910C()F180019910C",
    R"F180019910D()F180019910D",
    R"F180019910T()F180019910T",
    R"F180019910F(24: if (((uVar6 & 7) != 0) || ((int)uVar9 < (int)(uVar8 + 0x28))) {
25: for (; 0x7f < param_2; param_2 = param_2 >> 7) {
27: if ((int)(uVar9 - iVar5) < 8) {
32: else {
48: if ((int)(uVar9 - uVar8) < 8) {
52: else {
63: return;
68: if (param_2 < 0x80) {
71: return;
75: if (param_2 < 0x4000) {
78: return;
82: if (param_2 < 0x200000) {
85: return;
89: if (param_2 < 0x10000000) {
92: return;
96: return;)F180019910F",
    R"F180019910U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180019910U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019910() noexcept {
    return kFunction_0x180019910;
}

// 0x180019b40 FUN_180019b40
// source: re/dump/decompile/0x180019b40_FUN_180019b40.c
// size: 718 bytes; thunk: false
// body sha256: f6dcdf2691c95da1ec9dcb80a307f19003ee11a61f1a6698f3aba1c81e1e193a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019b40{
    "0x180019b40",
    "FUN_180019b40",
    R"F180019b40S(undefined FUN_180019b40())F180019b40S",
    R"B180019b40(// 0x180019b40  FUN_180019b40
// size=718 thunk=false
// signature: undefined FUN_180019b40()
// status: ok


void FUN_180019b40(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar6 = *(uint *)(param_1 + 2);
  uVar4 = (ulonglong)(int)uVar6;
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  if (((uVar4 & 7) != 0) || ((int)uVar7 < (int)(uVar6 + 0x50))) {
    for (; 0x7f < param_2; param_2 = param_2 >> 7) {
      iVar3 = (int)uVar4;
      if ((int)(uVar7 - iVar3) < 8) {
        *(uint *)(param_1 + 2) = uVar7;
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        uVar6 = uVar7;
      }
      else {
        *(int *)(param_1 + 2) = iVar3 + 8;
        bVar2 = (byte)uVar4 & 0x1f;
        uVar6 = *(uint *)(*param_1 + ((longlong)iVar3 >> 5) * 4);
        puVar1 = (uint *)(*param_1 + ((longlong)iVar3 >> 5) * 4);
        uVar7 = (uint)param_2 & 0x7f | 0x80;
        uVar5 = uVar7 << bVar2 | uVar7 >> 0x20 - bVar2;
        uVar9 = 0x7f >> (0x1f - bVar2 & 0x1f);
        uVar7 = uVar9 & 1;
        puVar1[uVar7] = puVar1[uVar7] ^ (puVar1[uVar7] ^ uVar5) & uVar9;
        *puVar1 = (uVar5 ^ uVar6) & 0xff << bVar2 ^ uVar6;
        uVar6 = *(uint *)(param_1 + 2);
        uVar7 = *(uint *)((longlong)param_1 + 0xc);
      }
      uVar4 = (ulonglong)uVar6;
    }
    if ((int)(uVar7 - uVar6) < 8) {
      *(uint *)(param_1 + 2) = uVar7;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      uVar5 = (uint)param_2 & 0x7f;
      *(uint *)(param_1 + 2) = uVar6 + 8;
      bVar2 = (byte)uVar6 & 0x1f;
      uVar7 = *(uint *)(*param_1 + ((longlong)(int)uVar6 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar6 >> 5) * 4);
      uVar6 = uVar5 << bVar2 | uVar5 >> 0x20 - bVar2;
      uVar9 = 0x7f >> (0x1f - bVar2 & 0x1f);
      uVar5 = uVar9 & 1;
      puVar1[uVar5] = puVar1[uVar5] ^ (puVar1[uVar5] ^ uVar6) & uVar9;
      *puVar1 = (uVar6 ^ uVar7) & 0xff << bVar2 ^ uVar7;
    }
    return;
  }
  pbVar8 = (byte *)(((longlong)uVar4 >> 3) + *param_1);
  uVar6 = (uint)(param_2 >> 0x1c);
  uVar7 = (uint)param_2;
  if (param_2 < 0x100000000000000) {
    if (uVar6 != 0) {
      if (0x3fff < uVar6) {
        if (0x1fffff < uVar6) {
          iVar3 = 8;
          goto LAB_180019c43;
        }
        iVar3 = 7;
        goto LAB_180019c4e;
      }
      if (0x7f < uVar6) {
        iVar3 = 6;
        goto LAB_180019c59;
      }
      iVar3 = 5;
      goto LAB_180019c64;
    }
    if (0x3fff < uVar7) {
      if (0x1fffff < uVar7) {
        iVar3 = 4;
        goto LAB_180019c6b;
      }
      iVar3 = 3;
      goto LAB_180019c76;
    }
    if (uVar7 < 0x80) {
      iVar3 = 1;
      goto LAB_180019c8c;
    }
    iVar3 = 2;
  }
  else {
    bVar2 = (byte)(param_2 >> 0x38);
    if (param_2 < 0x8000000000000000) {
      iVar3 = 9;
    }
    else {
      iVar3 = 10;
      pbVar8[9] = bVar2 >> 7 | 0x80;
    }
    pbVar8[8] = bVar2 | 0x80;
LAB_180019c43:
    pbVar8[7] = (byte)(param_2 >> 0x31) | 0x80;
LAB_180019c4e:
    pbVar8[6] = (byte)(param_2 >> 0x2a) | 0x80;
LAB_180019c59:
    pbVar8[5] = (byte)(param_2 >> 0x23) | 0x80;
LAB_180019c64:
    pbVar8[4] = (byte)(param_2 >> 0x1c) | 0x80;
LAB_180019c6b:
    pbVar8[3] = (byte)(param_2 >> 0x15) | 0x80;
LAB_180019c76:
    pbVar8[2] = (byte)(param_2 >> 0xe) | 0x80;
  }
  pbVar8[1] = (byte)(param_2 >> 7) | 0x80;
LAB_180019c8c:
  *pbVar8 = (byte)param_2 | 0x80;
  pbVar8[(longlong)iVar3 + -1] = pbVar8[(longlong)iVar3 + -1] & 0x7f;
  *(int *)(param_1 + 2) = (int)param_1[2] + iVar3 * 8;
  return;
}


)B180019b40",
    "f6dcdf2691c95da1ec9dcb80a307f19003ee11a61f1a6698f3aba1c81e1e193a",
    R"F180019b40C()F180019b40C",
    R"F180019b40D(LAB_180019c43
LAB_180019c4e
LAB_180019c59
LAB_180019c64
LAB_180019c6b
LAB_180019c76
LAB_180019c8c)F180019b40D",
    R"F180019b40T()F180019b40T",
    R"F180019b40F(23: if (((uVar4 & 7) != 0) || ((int)uVar7 < (int)(uVar6 + 0x50))) {
24: for (; 0x7f < param_2; param_2 = param_2 >> 7) {
26: if ((int)(uVar7 - iVar3) < 8) {
31: else {
47: if ((int)(uVar7 - uVar6) < 8) {
51: else {
63: return;
68: if (param_2 < 0x100000000000000) {
69: if (uVar6 != 0) {
70: if (0x3fff < uVar6) {
71: if (0x1fffff < uVar6) {
73: goto LAB_180019c43;
76: goto LAB_180019c4e;
78: if (0x7f < uVar6) {
80: goto LAB_180019c59;
83: goto LAB_180019c64;
85: if (0x3fff < uVar7) {
86: if (0x1fffff < uVar7) {
88: goto LAB_180019c6b;
91: goto LAB_180019c76;
93: if (uVar7 < 0x80) {
95: goto LAB_180019c8c;
99: else {
101: if (param_2 < 0x8000000000000000) {
104: else {
109: LAB_180019c43:
111: LAB_180019c4e:
113: LAB_180019c59:
115: LAB_180019c64:
117: LAB_180019c6b:
119: LAB_180019c76:
123: LAB_180019c8c:
127: return;)F180019b40F",
    R"F180019b40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180019c43.
TODO: recover the declaration, type and value for global/data reference LAB_180019c4e.
TODO: recover the declaration, type and value for global/data reference LAB_180019c59.
TODO: recover the declaration, type and value for global/data reference LAB_180019c64.
TODO: recover the declaration, type and value for global/data reference LAB_180019c6b.
TODO: recover the declaration, type and value for global/data reference LAB_180019c76.
TODO: recover the declaration, type and value for global/data reference LAB_180019c8c.)F180019b40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019b40() noexcept {
    return kFunction_0x180019b40;
}

// 0x180019e10 FUN_180019e10
// source: re/dump/decompile/0x180019e10_FUN_180019e10.c
// size: 795 bytes; thunk: false
// body sha256: d1e134e110d55c70e70934d13bf794deaa0e528325620ad9ca524d8c761bbdec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180019e10{
    "0x180019e10",
    "FUN_180019e10",
    R"F180019e10S(undefined FUN_180019e10())F180019e10S",
    R"B180019e10(// 0x180019e10  FUN_180019e10
// size=795 thunk=false
// signature: undefined FUN_180019e10()
// status: ok


bool FUN_180019e10(longlong *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar4 = *(uint *)(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar5 < (int)(uVar4 + param_3)) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return false;
  }
  for (; (((ulonglong)param_2 & 3) != 0 && (7 < param_3)); param_3 = param_3 + -8) {
    if ((int)(uVar5 - uVar4) < 8) {
      *(uint *)(param_1 + 2) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      uVar6 = uVar5;
    }
    else {
      uVar6 = *param_2;
      *(uint *)(param_1 + 2) = uVar4 + 8;
      bVar3 = (byte)uVar4 & 0x1f;
      uVar5 = *(uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      uVar6 = (uint)(byte)uVar6 << bVar3 | (uint)(byte)((byte)uVar6 >> 0x20 - bVar3);
      uVar8 = 0x7f >> (0x1f - bVar3 & 0x1f);
      uVar4 = uVar8 & 1;
      puVar7[uVar4] = puVar7[uVar4] ^ (uVar6 ^ puVar7[uVar4]) & uVar8;
      *puVar7 = (uVar5 ^ uVar6) & 0xff << bVar3 ^ uVar5;
      uVar5 = *(uint *)(param_1 + 2);
      uVar6 = *(uint *)((longlong)param_1 + 0xc);
    }
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar4 = uVar5;
    uVar5 = uVar6;
  }
  if (0x1f < param_3) {
    if ((uVar4 & 7) == 0) {
      iVar2 = param_3 >> 3;
      memcpy((void *)(((longlong)(int)uVar4 >> 3) + *param_1),param_2,(longlong)iVar2);
      *(int *)(param_1 + 2) = (int)param_1[2] + iVar2 * 8;
      param_2 = (uint *)((longlong)param_2 + (longlong)iVar2);
      uVar4 = *(uint *)(param_1 + 2);
      param_3 = param_3 + iVar2 * -8;
      if (param_3 < 0x20) goto joined_r0x000180019fd9;
    }
    uVar8 = uVar4 & 0x1f;
    uVar5 = *(uint *)(&DAT_1803f9320 + (ulonglong)uVar8 * 0x84);
    uVar6 = (&DAT_1803f92a0)[uVar8];
    puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
    do {
      uVar4 = *param_2;
      puVar1 = puVar7 + 1;
      param_2 = param_2 + 1;
      *puVar7 = uVar4 << (sbyte)uVar8 | *puVar7 & uVar5;
      if (0x20 - uVar8 < 0x20) {
        *puVar1 = uVar4 >> ((byte)(0x20 - uVar8) & 0x1f) | *puVar1 & uVar6;
      }
      param_3 = param_3 + -0x20;
      uVar4 = (int)param_1[2] + 0x20;
      *(uint *)(param_1 + 2) = uVar4;
      puVar7 = puVar1;
    } while (0x1f < param_3);
  }
joined_r0x000180019fd9:
  for (; 7 < param_3; param_3 = param_3 + -8) {
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)(uVar5 - uVar4) < 8) {
      *(uint *)(param_1 + 2) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      uVar6 = *param_2;
      *(uint *)(param_1 + 2) = uVar4 + 8;
      bVar3 = (byte)uVar4 & 0x1f;
      uVar5 = *(uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      uVar6 = (uint)(byte)uVar6 << bVar3 | (uint)(byte)((byte)uVar6 >> 0x20 - bVar3);
      uVar8 = 0x7f >> (0x1f - bVar3 & 0x1f);
      uVar4 = uVar8 & 1;
      puVar7[uVar4] = puVar7[uVar4] ^ (uVar6 ^ puVar7[uVar4]) & uVar8;
      *puVar7 = (uVar5 ^ uVar6) & 0xff << bVar3 ^ uVar5;
      uVar5 = *(uint *)(param_1 + 2);
    }
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar4 = uVar5;
  }
  if (param_3 != 0) {
    if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar4) < param_3) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      uVar6 = *param_2;
      *(uint *)(param_1 + 2) = uVar4 + param_3;
      bVar3 = (byte)uVar4 & 0x1f;
      uVar5 = *(uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      uVar6 = (uint)(byte)uVar6 << bVar3 | (uint)(byte)((byte)uVar6 >> 0x20 - bVar3);
      iVar2 = 1 << ((char)param_3 - 1U & 0x1f);
      uVar8 = iVar2 - 1U >> (0x1f - bVar3 & 0x1f);
      uVar4 = uVar8 & 1;
      puVar7[uVar4] = puVar7[uVar4] ^ (uVar6 ^ puVar7[uVar4]) & uVar8;
      *puVar7 = iVar2 * 2 + -1 << bVar3 & (uVar5 ^ uVar6) ^ uVar5;
    }
  }
  return *(char *)((longlong)param_1 + 0x14) == '\0';
}


)B180019e10",
    "d1e134e110d55c70e70934d13bf794deaa0e528325620ad9ca524d8c761bbdec",
    R"F180019e10C()F180019e10C",
    R"F180019e10D(DAT_1803f92a0
DAT_1803f9320)F180019e10D",
    R"F180019e10T()F180019e10T",
    R"F180019e10F(21: if ((int)uVar5 < (int)(uVar4 + param_3)) {
23: return false;
25: for (; (((ulonglong)param_2 & 3) != 0 && (7 < param_3)); param_3 = param_3 + -8) {
26: if ((int)(uVar5 - uVar4) < 8) {
31: else {
49: if (0x1f < param_3) {
50: if ((uVar4 & 7) == 0) {
57: if (param_3 < 0x20) goto joined_r0x000180019fd9;
63: do {
68: if (0x20 - uVar8 < 0x20) {
78: for (; 7 < param_3; param_3 = param_3 + -8) {
80: if ((int)(uVar5 - uVar4) < 8) {
84: else {
100: if (param_3 != 0) {
101: if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar4) < param_3) {
105: else {
119: return *(char *)((longlong)param_1 + 0x14) == '\0';)F180019e10F",
    R"F180019e10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f92a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9320.)F180019e10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180019e10() noexcept {
    return kFunction_0x180019e10;
}

// 0x18001a130 FUN_18001a130
// source: re/dump/decompile/0x18001a130_FUN_18001a130.c
// size: 632 bytes; thunk: false
// body sha256: 9617615048acd6466fda0072ba505732b65920c481a4225b3ea590ae0c5c8e5a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001a130{
    "0x18001a130",
    "FUN_18001a130",
    R"F18001a130S(undefined FUN_18001a130())F18001a130S",
    R"B18001a130(// 0x18001a130  FUN_18001a130
// size=632 thunk=false
// signature: undefined FUN_18001a130()
// status: ok


longlong FUN_18001a130(longlong *param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint7 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  for (; 0x20 < param_3; param_3 = param_3 + -0x20) {
    iVar8 = (int)param_2[2];
    if (*(int *)((longlong)param_2 + 0xc) - iVar8 < 0x20) {
      *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
      uVar2 = 0;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
    }
    else {
      *(int *)(param_2 + 2) = iVar8 + 0x20;
      bVar5 = (byte)iVar8 & 0x1f;
      uVar2 = (*(int *)(*param_2 + (ulonglong)(uint)(iVar8 + 0x1f >> 5) * 4) << (-bVar5 & 0x1f) |
              *(uint *)(*param_2 + (ulonglong)(uint)(iVar8 >> 5) * 4) >> bVar5) & DAT_1803fa790;
    }
    iVar8 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar8 < 0x20) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar8 + 0x20;
      bVar5 = (byte)iVar8 & 0x1f;
      uVar3 = *(uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      uVar2 = uVar2 << bVar5 | uVar2 >> 0x20 - bVar5;
      uVar7 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
      uVar6 = uVar7 & 1;
      puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar2) & uVar7;
      *puVar1 = (uVar3 ^ uVar2) & -1 << bVar5 ^ uVar3;
    }
  }
  iVar8 = (int)param_2[2];
  if (*(int *)((longlong)param_2 + 0xc) - iVar8 < param_3) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    uVar2 = 0;
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(int *)(param_2 + 2) = iVar8 + param_3;
    bVar5 = (byte)iVar8 & 0x1f;
    uVar2 = (*(int *)(*param_2 + (ulonglong)(uint)(iVar8 + param_3 + -1 >> 5) * 4) <<
             (0x20 - bVar5 & 0x1f) |
            *(uint *)(*param_2 + (ulonglong)(uint)(iVar8 >> 5) * 4) >> bVar5) &
            *(uint *)(&DAT_1803fa710 + (longlong)param_3 * 4);
  }
  iVar8 = (int)param_1[2];
  uVar3 = *(int *)((longlong)param_1 + 0xc) - iVar8;
  if ((int)uVar3 < param_3) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar8 + param_3;
    bVar5 = (byte)iVar8 & 0x1f;
    uVar6 = *(uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
    puVar1 = (uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
    uVar9 = uVar2 << bVar5 | uVar2 >> 0x20 - bVar5;
    iVar8 = 1 << ((char)param_3 - 1U & 0x1f);
    uVar7 = iVar8 - 1U >> (0x1f - bVar5 & 0x1f);
    uVar2 = uVar7 & 1;
    uVar3 = uVar6 ^ uVar9;
    puVar1[uVar2] = puVar1[uVar2] ^ (puVar1[uVar2] ^ uVar9) & uVar7;
    *puVar1 = iVar8 * 2 + -1 << bVar5 & uVar3 ^ uVar6;
  }
  uVar4 = (uint7)(uint3)(uVar3 >> 8);
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') && (*(char *)((longlong)param_2 + 0x14) == '\0')
     ) {
    return CONCAT71(uVar4,1);
  }
  return (ulonglong)uVar4 << 8;
}


)B18001a130",
    "9617615048acd6466fda0072ba505732b65920c481a4225b3ea590ae0c5c8e5a",
    R"F18001a130C()F18001a130C",
    R"F18001a130D(DAT_1803fa710
DAT_1803fa790)F18001a130D",
    R"F18001a130T()F18001a130T",
    R"F18001a130F(20: for (; 0x20 < param_3; param_3 = param_3 + -0x20) {
22: if (*(int *)((longlong)param_2 + 0xc) - iVar8 < 0x20) {
27: else {
34: if (*(int *)((longlong)param_1 + 0xc) - iVar8 < 0x20) {
38: else {
51: if (*(int *)((longlong)param_2 + 0xc) - iVar8 < param_3) {
56: else {
66: if ((int)uVar3 < param_3) {
70: else {
84: if ((*(char *)((longlong)param_1 + 0x14) == '\0') && (*(char *)((longlong)param_2 + 0x14) == '\0')
86: return CONCAT71(uVar4,1);
88: return (ulonglong)uVar4 << 8;)F18001a130F",
    R"F18001a130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa790.)F18001a130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001a130() noexcept {
    return kFunction_0x18001a130;
}

// 0x18001a3b0 FUN_18001a3b0
// source: re/dump/decompile/0x18001a3b0_FUN_18001a3b0.c
// size: 409 bytes; thunk: false
// body sha256: a2af9087a2acc0c310a83ea2a9cc0a86b8d3a1f8420ec7c4ba9794061ef5924e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001a3b0{
    "0x18001a3b0",
    "FUN_18001a3b0",
    R"F18001a3b0S(undefined FUN_18001a3b0())F18001a3b0S",
    R"B18001a3b0(// 0x18001a3b0  FUN_18001a3b0
// size=409 thunk=false
// signature: undefined FUN_18001a3b0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001a3b0(longlong *param_1,float param_2,char param_3,byte param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  
  iVar11 = (int)(float)((uint)param_2 & _DAT_1803817c0);
  if (param_4 == 0) {
    uVar7 = -(int)(param_2 * DAT_180381070);
    if ((int)uVar7 < 0) {
      uVar7 = (int)(param_2 * DAT_180381070);
    }
    uVar7 = uVar7 & 0x1f;
    dVar12 = DAT_180381390;
  }
  else {
    uVar7 = -(int)(param_2 * DAT_180380fa8);
    if ((int)uVar7 < 0) {
      uVar7 = (int)(param_2 * DAT_180380fa8);
    }
    uVar7 = uVar7 & 7;
    dVar12 = DAT_1803813a0;
  }
  bVar3 = (double)param_2 <= dVar12;
  if (param_3 == '\0') {
    iVar8 = (param_4 ^ 1) * 2;
    if (iVar11 == 0) {
      uVar7 = ((uint)bVar3 + uVar7 * 2) * 4 + 1;
      iVar8 = iVar8 + 6;
    }
    else {
      iVar4 = uVar7 << 0xe;
      if (0x7ff < iVar11) {
        iVar4 = uVar7 << 0x11;
      }
      iVar5 = 0x14;
      if (iVar11 < 0x800) {
        iVar5 = 0x11;
      }
      uVar7 = (uint)(iVar11 < 0x800) + iVar4 + -6 + ((uint)bVar3 + iVar11 * 2) * 4;
      iVar8 = iVar8 + iVar5;
    }
  }
  else if (iVar11 == 0) {
    iVar8 = 2;
    uVar7 = 1;
  }
  else {
    uVar7 = ((uint)(iVar11 < 0x800) + ((uint)bVar3 + iVar11 * 2) * 4) - 6;
    iVar8 = 0x11;
    if (iVar11 < 0x800) {
      iVar8 = 0xe;
    }
  }
  iVar11 = (int)param_1[2];
  if (iVar8 <= *(int *)((longlong)param_1 + 0xc) - iVar11) {
    *(int *)(param_1 + 2) = iVar11 + iVar8;
    bVar6 = (byte)iVar11 & 0x1f;
    uVar2 = *(uint *)(*param_1 + ((longlong)iVar11 >> 5) * 4);
    puVar1 = (uint *)(*param_1 + ((longlong)iVar11 >> 5) * 4);
    uVar9 = uVar7 << bVar6 | uVar7 >> 0x20 - bVar6;
    iVar11 = 1 << ((char)iVar8 - 1U & 0x1f);
    uVar7 = iVar11 - 1U >> (0x1f - bVar6 & 0x1f);
    uVar10 = uVar7 & 1;
    puVar1[uVar10] = puVar1[uVar10] ^ (puVar1[uVar10] ^ uVar9) & uVar7;
    *puVar1 = iVar11 * 2 + -1 << bVar6 & (uVar2 ^ uVar9) ^ uVar2;
    return;
  }
  *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}


)B18001a3b0",
    "a2af9087a2acc0c310a83ea2a9cc0a86b8d3a1f8420ec7c4ba9794061ef5924e",
    R"F18001a3b0C()F18001a3b0C",
    R"F18001a3b0D(DAT_180380fa8
DAT_180381070
DAT_180381390
DAT_1803813a0)F18001a3b0D",
    R"F18001a3b0T()F18001a3b0T",
    R"F18001a3b0F(26: if (param_4 == 0) {
28: if ((int)uVar7 < 0) {
34: else {
36: if ((int)uVar7 < 0) {
43: if (param_3 == '\0') {
45: if (iVar11 == 0) {
49: else {
51: if (0x7ff < iVar11) {
55: if (iVar11 < 0x800) {
62: else if (iVar11 == 0) {
66: else {
69: if (iVar11 < 0x800) {
74: if (iVar8 <= *(int *)((longlong)param_1 + 0xc) - iVar11) {
85: return;
89: return;)F18001a3b0F",
    R"F18001a3b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380fa8.
TODO: recover the declaration, type and value for global/data reference DAT_180381070.
TODO: recover the declaration, type and value for global/data reference DAT_180381390.
TODO: recover the declaration, type and value for global/data reference DAT_1803813a0.)F18001a3b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001a3b0() noexcept {
    return kFunction_0x18001a3b0;
}

// 0x18001a550 FUN_18001a550
// source: re/dump/decompile/0x18001a550_FUN_18001a550.c
// size: 533 bytes; thunk: false
// body sha256: 865b08bae0a7abe41b8e655525451fcaefccfe456ba7b69921b6a8f4cd184561
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001a550{
    "0x18001a550",
    "FUN_18001a550",
    R"F18001a550S(undefined FUN_18001a550())F18001a550S",
    R"B18001a550(// 0x18001a550  FUN_18001a550
// size=533 thunk=false
// signature: undefined FUN_18001a550()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001a550(longlong *param_1,float param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = *(uint *)(param_1 + 2);
  bVar2 = DAT_18038132c < param_2;
  iVar8 = (int)(float)((uint)param_2 & _DAT_1803817c0);
  uVar5 = -(int)(param_2 * DAT_180381070);
  if ((int)uVar5 < 0) {
    uVar5 = (int)(param_2 * DAT_180381070);
  }
  uVar5 = uVar5 & 0x1f;
  if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
    if (iVar8 == 0) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
    if (uVar5 == 0) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((iVar8 != 0) || (uVar5 != 0)) {
    if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
      if (bVar2) {
        puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
      }
      else {
        puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar3 = *(uint *)(param_1 + 2);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    if (iVar8 != 0) {
      if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar3) < 0xe) {
        *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      }
      else {
        *(uint *)(param_1 + 2) = uVar3 + 0xe;
        bVar4 = (byte)uVar3 & 0x1f;
        uVar6 = *(uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        uVar9 = iVar8 - 1U << bVar4 | iVar8 - 1U >> 0x20 - bVar4;
        uVar3 = 0x1fff >> (0x1f - bVar4 & 0x1f);
        uVar7 = uVar3 & 1;
        puVar1[uVar7] = puVar1[uVar7] ^ (uVar9 ^ puVar1[uVar7]) & uVar3;
        *puVar1 = (uVar6 ^ uVar9) & 0x3fff << bVar4 ^ uVar6;
      }
    }
    if (uVar5 != 0) {
      iVar8 = (int)param_1[2];
      if (*(int *)((longlong)param_1 + 0xc) - iVar8 < 5) {
        *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        return;
      }
      *(int *)(param_1 + 2) = iVar8 + 5;
      bVar4 = (byte)iVar8 & 0x1f;
      uVar3 = *(uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      uVar6 = uVar5 << bVar4 | uVar5 >> 0x20 - bVar4;
      uVar5 = 0xf >> (0x1f - bVar4 & 0x1f);
      uVar7 = uVar5 & 1;
      puVar1[uVar7] = puVar1[uVar7] ^ (uVar6 ^ puVar1[uVar7]) & uVar5;
      *puVar1 = (uVar3 ^ uVar6) & 0x1f << bVar4 ^ uVar3;
    }
  }
  return;
}


)B18001a550",
    "865b08bae0a7abe41b8e655525451fcaefccfe456ba7b69921b6a8f4cd184561",
    R"F18001a550C()F18001a550C",
    R"F18001a550D(DAT_180381070
DAT_18038132c
DAT_1803fa690)F18001a550D",
    R"F18001a550T()F18001a550T",
    R"F18001a550F(26: if ((int)uVar5 < 0) {
30: if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
31: if (iVar8 == 0) {
35: else {
42: else {
45: if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
46: if (uVar5 == 0) {
50: else {
57: else {
60: if ((iVar8 != 0) || (uVar5 != 0)) {
61: if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
62: if (bVar2) {
66: else {
73: else {
76: if (iVar8 != 0) {
77: if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar3) < 0xe) {
81: else {
93: if (uVar5 != 0) {
95: if (*(int *)((longlong)param_1 + 0xc) - iVar8 < 5) {
98: return;
111: return;)F18001a550F",
    R"F18001a550U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180381070.
TODO: recover the declaration, type and value for global/data reference DAT_18038132c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa690.)F18001a550U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001a550() noexcept {
    return kFunction_0x18001a550;
}

// 0x18001a770 FUN_18001a770
// source: re/dump/decompile/0x18001a770_FUN_18001a770.c
// size: 562 bytes; thunk: false
// body sha256: 280df9913c073782966bbfd044d3d3e86eb8d6318283fb65a24a10f9c56d45d6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001a770{
    "0x18001a770",
    "FUN_18001a770",
    R"F18001a770S(undefined FUN_18001a770())F18001a770S",
    R"B18001a770(// 0x18001a770  FUN_18001a770
// size=562 thunk=false
// signature: undefined FUN_18001a770()
// status: ok


void FUN_18001a770(longlong *param_1,float param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (int)param_1[2];
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  lVar5 = (longlong)iVar10 >> 5;
  if (param_4 == 2) {
    if (iVar6 - iVar10 < param_3) {
      *(int *)(param_1 + 2) = iVar6;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      return;
    }
    *(int *)(param_1 + 2) = iVar10 + param_3;
    bVar4 = (byte)iVar10 & 0x1f;
    uVar2 = *(uint *)(*param_1 + lVar5 * 4);
    puVar1 = (uint *)(*param_1 + lVar5 * 4);
    uVar8 = (int)param_2 << bVar4 | (uint)(int)param_2 >> 0x20 - bVar4;
    iVar10 = 1 << ((char)param_3 - 1U & 0x1f);
    uVar3 = iVar10 - 1U >> (0x1f - bVar4 & 0x1f);
    uVar7 = uVar3 & 1;
    puVar1[uVar7] = puVar1[uVar7] ^ (puVar1[uVar7] ^ uVar8) & uVar3;
    *puVar1 = iVar10 * 2 + -1 << bVar4 & (uVar2 ^ uVar8) ^ uVar2;
    return;
  }
  iVar9 = 0x20;
  if (param_4 == 1) {
    iVar9 = 8;
  }
  if (iVar6 - iVar10 < param_3) {
    *(int *)(param_1 + 2) = iVar6;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar10 + param_3;
    bVar4 = (byte)iVar10 & 0x1f;
    uVar2 = *(uint *)(*param_1 + lVar5 * 4);
    puVar1 = (uint *)(*param_1 + lVar5 * 4);
    uVar7 = (int)param_2 << bVar4 | (uint)(int)param_2 >> 0x20 - bVar4;
    iVar10 = 1 << ((char)param_3 - 1U & 0x1f);
    uVar3 = iVar10 - 1U >> (0x1f - bVar4 & 0x1f);
    uVar8 = uVar3 & 1;
    puVar1[uVar8] = puVar1[uVar8] ^ (puVar1[uVar8] ^ uVar7) & uVar3;
    *puVar1 = iVar10 * 2 + -1 << bVar4 & (uVar2 ^ uVar7) ^ uVar2;
  }
  iVar10 = (int)param_1[2];
  iVar6 = 5;
  if (param_4 == 1) {
    iVar6 = 3;
  }
  if (*(int *)((longlong)param_1 + 0xc) - iVar10 < iVar6) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar10 + iVar6;
    bVar4 = (byte)iVar10 & 0x1f;
    uVar2 = *(uint *)(*param_1 + ((longlong)iVar10 >> 5) * 4);
    puVar1 = (uint *)(*param_1 + ((longlong)iVar10 >> 5) * 4);
    uVar3 = (int)((float)iVar9 * param_2) & iVar9 - 1U;
    uVar8 = uVar3 << bVar4 | uVar3 >> 0x20 - bVar4;
    iVar10 = 1 << ((char)iVar6 - 1U & 0x1f);
    uVar3 = iVar10 - 1U >> (0x1f - bVar4 & 0x1f);
    uVar7 = uVar3 & 1;
    puVar1[uVar7] = puVar1[uVar7] ^ (puVar1[uVar7] ^ uVar8) & uVar3;
    *puVar1 = iVar10 * 2 + -1 << bVar4 & (uVar8 ^ uVar2) ^ uVar2;
  }
  return;
}


)B18001a770",
    "280df9913c073782966bbfd044d3d3e86eb8d6318283fb65a24a10f9c56d45d6",
    R"F18001a770C()F18001a770C",
    R"F18001a770D()F18001a770D",
    R"F18001a770T()F18001a770T",
    R"F18001a770F(23: if (param_2 <= 0.0) {
27: if (param_4 == 2) {
28: if (iVar6 - iVar10 < param_3) {
31: return;
43: return;
46: if (param_4 == 1) {
49: if (iVar6 - iVar10 < param_3) {
53: else {
67: if (param_4 == 1) {
70: if (*(int *)((longlong)param_1 + 0xc) - iVar10 < iVar6) {
74: else {
87: return;)F18001a770F",
    R"F18001a770U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001a770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001a770() noexcept {
    return kFunction_0x18001a770;
}

// 0x18001a9b0 FUN_18001a9b0
// source: re/dump/decompile/0x18001a9b0_FUN_18001a9b0.c
// size: 315 bytes; thunk: false
// body sha256: a3dabcd849be20105ef0b1925055e0917ef3a3af9b3d6f4ebb0aa3c5a8570a7d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001a9b0{
    "0x18001a9b0",
    "FUN_18001a9b0",
    R"F18001a9b0S(undefined FUN_18001a9b0())F18001a9b0S",
    R"B18001a9b0(// 0x18001a9b0  FUN_18001a9b0
// size=315 thunk=false
// signature: undefined FUN_18001a9b0()
// status: ok


void FUN_18001a9b0(longlong *param_1,float *param_2)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  
  bVar2 = true;
  if ((DAT_1803809b4 <= *param_2) || (*param_2 <= DAT_18038132c)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((DAT_1803809b4 <= param_2[1]) || (param_2[1] <= DAT_18038132c)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((param_2[2] < DAT_1803809b4) && (DAT_18038132c < param_2[2])) {
    bVar2 = false;
  }
  uVar5 = *(uint *)(param_1 + 2);
  if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar4) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar5 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar3) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar5 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar2) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if (bVar4) {
    FUN_18001a550(param_1,*param_2);
  }
  if (bVar3) {
    FUN_18001a550(param_1,param_2[1]);
  }
  if (bVar2) {
    FUN_18001a550(param_1,param_2[2]);
  }
  return;
}


)B18001a9b0",
    "a3dabcd849be20105ef0b1925055e0917ef3a3af9b3d6f4ebb0aa3c5a8570a7d",
    R"F18001a9b0C(FUN_18001a550)F18001a9b0C",
    R"F18001a9b0D(DAT_1803809b4
DAT_18038132c
DAT_1803fa690)F18001a9b0D",
    R"F18001a9b0T()F18001a9b0T",
    R"F18001a9b0F(17: if ((DAT_1803809b4 <= *param_2) || (*param_2 <= DAT_18038132c)) {
20: else {
23: if ((DAT_1803809b4 <= param_2[1]) || (param_2[1] <= DAT_18038132c)) {
26: else {
29: if ((param_2[2] < DAT_1803809b4) && (DAT_18038132c < param_2[2])) {
33: if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
34: if (bVar4) {
38: else {
45: else {
48: if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
49: if (bVar3) {
53: else {
60: else {
63: if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
64: if (bVar2) {
68: else {
74: else {
77: if (bVar4) {
80: if (bVar3) {
83: if (bVar2) {
86: return;)F18001a9b0F",
    R"F18001a9b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803809b4.
TODO: recover the declaration, type and value for global/data reference DAT_18038132c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa690.)F18001a9b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001a9b0() noexcept {
    return kFunction_0x18001a9b0;
}

// 0x18001aaf0 FUN_18001aaf0
// source: re/dump/decompile/0x18001aaf0_FUN_18001aaf0.c
// size: 258 bytes; thunk: false
// body sha256: 89052fe9cb86e1571b4c6cc2e8cf963030d26932006cfd0cbf30282ef4bcfb1e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001aaf0{
    "0x18001aaf0",
    "FUN_18001aaf0",
    R"F18001aaf0S(undefined FUN_18001aaf0())F18001aaf0S",
    R"B18001aaf0(// 0x18001aaf0  FUN_18001aaf0
// size=258 thunk=false
// signature: undefined FUN_18001aaf0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001aaf0(longlong *param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 2);
  uVar5 = -(int)(param_2 * _DAT_18038127c);
  if ((int)uVar5 < 0) {
    uVar5 = (int)(param_2 * _DAT_18038127c);
  }
  if (0x7ff < uVar5) {
    uVar5 = 0x7ff;
  }
  if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
    if (DAT_180381370 < (double)param_2) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    uVar3 = (int)param_1[2] + 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar3) < 0xb) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return;
  }
  *(uint *)(param_1 + 2) = uVar3 + 0xb;
  bVar4 = (byte)uVar3 & 0x1f;
  uVar2 = *(uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
  puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
  uVar5 = uVar5 << bVar4 | uVar5 >> 0x20 - bVar4;
  uVar3 = 0x3ff >> (0x1f - bVar4 & 0x1f);
  uVar6 = uVar3 & 1;
  puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar5) & uVar3;
  *puVar1 = (uVar2 ^ uVar5) & 0x7ff << bVar4 ^ uVar2;
  return;
}


)B18001aaf0",
    "89052fe9cb86e1571b4c6cc2e8cf963030d26932006cfd0cbf30282ef4bcfb1e",
    R"F18001aaf0C()F18001aaf0C",
    R"F18001aaf0D(DAT_180381370
DAT_1803fa690)F18001aaf0D",
    R"F18001aaf0T()F18001aaf0T",
    R"F18001aaf0F(21: if ((int)uVar5 < 0) {
24: if (0x7ff < uVar5) {
27: if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
28: if (DAT_180381370 < (double)param_2) {
32: else {
38: else {
41: if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar3) < 0xb) {
44: return;
55: return;)F18001aaf0F",
    R"F18001aaf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180381370.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa690.)F18001aaf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001aaf0() noexcept {
    return kFunction_0x18001aaf0;
}

// 0x18001ac00 FUN_18001ac00
// source: re/dump/decompile/0x18001ac00_FUN_18001ac00.c
// size: 327 bytes; thunk: false
// body sha256: 8948c5a22afb65323cdcfd4fa37828e623f467e511d091b62ef684ad34052021
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001ac00{
    "0x18001ac00",
    "FUN_18001ac00",
    R"F18001ac00S(undefined FUN_18001ac00())F18001ac00S",
    R"B18001ac00(// 0x18001ac00  FUN_18001ac00
// size=327 thunk=false
// signature: undefined FUN_18001ac00()
// status: ok


void FUN_18001ac00(longlong *param_1,float *param_2)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  
  dVar5 = DAT_180381370;
  bVar2 = true;
  if ((DAT_180380b28 <= (double)*param_2) || ((double)*param_2 <= DAT_180381370)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((double)param_2[1] < DAT_180380b28) && (DAT_180381370 < (double)param_2[1])) {
    bVar2 = false;
  }
  uVar4 = *(uint *)(param_1 + 2);
  if ((int)uVar4 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar3) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar4 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar4 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar2) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if (bVar3) {
    FUN_18001aaf0(param_1,*param_2);
  }
  if (bVar2) {
    FUN_18001aaf0(param_1,param_2[1]);
  }
  uVar4 = *(uint *)(param_1 + 2);
  if (*(int *)((longlong)param_1 + 0xc) <= (int)uVar4) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return;
  }
  if ((double)param_2[2] <= dVar5) {
    puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    return;
  }
  puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
  *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}


)B18001ac00",
    "8948c5a22afb65323cdcfd4fa37828e623f467e511d091b62ef684ad34052021",
    R"F18001ac00C(FUN_18001aaf0)F18001ac00C",
    R"F18001ac00D(DAT_180380b28
DAT_180381370
DAT_1803fa690)F18001ac00D",
    R"F18001ac00T()F18001ac00T",
    R"F18001ac00F(18: if ((DAT_180380b28 <= (double)*param_2) || ((double)*param_2 <= DAT_180381370)) {
21: else {
24: if (((double)param_2[1] < DAT_180380b28) && (DAT_180381370 < (double)param_2[1])) {
28: if ((int)uVar4 < *(int *)((longlong)param_1 + 0xc)) {
29: if (bVar3) {
33: else {
40: else {
43: if ((int)uVar4 < *(int *)((longlong)param_1 + 0xc)) {
44: if (bVar2) {
48: else {
54: else {
57: if (bVar3) {
60: if (bVar2) {
64: if (*(int *)((longlong)param_1 + 0xc) <= (int)uVar4) {
66: return;
68: if ((double)param_2[2] <= dVar5) {
72: return;
77: return;)F18001ac00F",
    R"F18001ac00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380b28.
TODO: recover the declaration, type and value for global/data reference DAT_180381370.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa690.)F18001ac00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001ac00() noexcept {
    return kFunction_0x18001ac00;
}

// 0x18001ad50 FUN_18001ad50
// source: re/dump/decompile/0x18001ad50_FUN_18001ad50.c
// size: 489 bytes; thunk: false
// body sha256: 134f77aa893d032877498fc7ca100230db797743b9f6374690de4abb1d77c50d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001ad50{
    "0x18001ad50",
    "FUN_18001ad50",
    R"F18001ad50S(undefined FUN_18001ad50())F18001ad50S",
    R"B18001ad50(// 0x18001ad50  FUN_18001ad50
// size=489 thunk=false
// signature: undefined FUN_18001ad50()
// status: ok


void FUN_18001ad50(longlong *param_1,uint *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  bVar2 = (byte)DAT_1803fa730;
  uVar3 = DAT_1803fa790;
  for (; (DAT_1803fa790 = uVar3, ((ulonglong)param_2 & 3) != 0 && (7 < param_3));
      param_3 = param_3 + -8) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      bVar4 = 0;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar1 + 8;
      bVar4 = (byte)iVar1 & 0x1f;
      bVar4 = ((byte)(*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (-bVar4 & 0x1f))
              | (byte)(*(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4)) & bVar2;
    }
    *(byte *)param_2 = bVar4;
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar3 = DAT_1803fa790;
  }
  for (; 0x1f < param_3; param_3 = param_3 + -0x20) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 0x20) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      uVar5 = 0;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar1 + 0x20;
      bVar4 = (byte)iVar1 & 0x1f;
      uVar5 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 0x1f >> 5) * 4) << (-bVar4 & 0x1f) |
              *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4) & uVar3;
    }
    *param_2 = uVar5;
    param_2 = param_2 + 1;
  }
  for (; 7 < param_3; param_3 = param_3 + -8) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      bVar4 = 0;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar1 + 8;
      bVar4 = (byte)iVar1 & 0x1f;
      bVar4 = ((byte)(*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (-bVar4 & 0x1f))
              | (byte)(*(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4)) & bVar2;
    }
    *(byte *)param_2 = bVar4;
    param_2 = (uint *)((longlong)param_2 + 1);
  }
  if (param_3 != 0) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < param_3) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      *(byte *)param_2 = 0;
      return;
    }
    *(int *)(param_1 + 2) = iVar1 + param_3;
    bVar2 = (byte)iVar1 & 0x1f;
    *(byte *)param_2 =
         ((byte)(*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + param_3 + -1 >> 5) * 4) <<
                (0x20 - bVar2 & 0x1f)) |
         (byte)(*(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2)) &
         (byte)*(undefined4 *)(&DAT_1803fa710 + (longlong)param_3 * 4);
  }
  return;
}


)B18001ad50",
    "134f77aa893d032877498fc7ca100230db797743b9f6374690de4abb1d77c50d",
    R"F18001ad50C()F18001ad50C",
    R"F18001ad50D(DAT_1803fa710
DAT_1803fa730
DAT_1803fa790)F18001ad50D",
    R"F18001ad50T()F18001ad50T",
    R"F18001ad50F(18: for (; (DAT_1803fa790 = uVar3, ((ulonglong)param_2 & 3) != 0 && (7 < param_3));
21: if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
26: else {
36: for (; 0x1f < param_3; param_3 = param_3 + -0x20) {
38: if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 0x20) {
43: else {
52: for (; 7 < param_3; param_3 = param_3 + -8) {
54: if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
59: else {
68: if (param_3 != 0) {
70: if (*(int *)((longlong)param_1 + 0xc) - iVar1 < param_3) {
74: return;
84: return;)F18001ad50F",
    R"F18001ad50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa730.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa790.)F18001ad50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001ad50() noexcept {
    return kFunction_0x18001ad50;
}

// 0x18001af40 FUN_18001af40
// source: re/dump/decompile/0x18001af40_FUN_18001af40.c
// size: 153 bytes; thunk: false
// body sha256: 2dbe008e1b3e1b1800322715f27672e4b34f19055f314fed0b64b4d88129b160
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001af40{
    "0x18001af40",
    "FUN_18001af40",
    R"F18001af40S(undefined FUN_18001af40())F18001af40S",
    R"B18001af40(// 0x18001af40  FUN_18001af40
// size=153 thunk=false
// signature: undefined FUN_18001af40()
// status: ok


uint FUN_18001af40(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  lVar3 = param_1[2];
  if (0 < param_2) {
    uVar4 = 0;
    do {
      iVar2 = (int)param_1[2];
      if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      }
      else {
        bVar1 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
        *(int *)(param_1 + 2) = iVar2 + 1;
        if ((bVar1 >> ((byte)iVar2 & 7) & 1) != 0) {
          uVar5 = uVar5 | (&DAT_18033d650)[uVar4 & 0x1f];
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < param_2);
  }
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = lVar3;
  param_1[3] = param_1[3];
  return uVar5;
}


)B18001af40",
    "2dbe008e1b3e1b1800322715f27672e4b34f19055f314fed0b64b4d88129b160",
    R"F18001af40C()F18001af40C",
    R"F18001af40D(DAT_18033d650)F18001af40D",
    R"F18001af40T()F18001af40T",
    R"F18001af40F(18: if (0 < param_2) {
20: do {
22: if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
25: else {
28: if ((bVar1 >> ((byte)iVar2 & 7) & 1) != 0) {
39: return uVar5;)F18001af40F",
    R"F18001af40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033d650.)F18001af40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001af40() noexcept {
    return kFunction_0x18001af40;
}

// 0x18001afe0 FUN_18001afe0
// source: re/dump/decompile/0x18001afe0_FUN_18001afe0.c
// size: 128 bytes; thunk: false
// body sha256: 9363c257f60225c4918765d4ffd3441db35f9a3be606c23d46d1ce83ec50076a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001afe0{
    "0x18001afe0",
    "FUN_18001afe0",
    R"F18001afe0S(undefined FUN_18001afe0())F18001afe0S",
    R"B18001afe0(// 0x18001afe0  FUN_18001afe0
// size=128 thunk=false
// signature: undefined FUN_18001afe0()
// status: ok


uint FUN_18001afe0(longlong *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar1 < param_2) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    uVar4 = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar1 + param_2;
    bVar2 = (byte)iVar1 & 0x1f;
    uVar4 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + param_2 + -1 >> 5) * 4) <<
             (0x20 - bVar2 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) &
            *(uint *)(&DAT_1803fa710 + (longlong)param_2 * 4);
  }
  uVar3 = 1 << ((char)param_2 - 1U & 0x1f);
  if (uVar3 <= uVar4) {
    uVar4 = uVar4 + uVar3 * -2;
  }
  return uVar4;
}


)B18001afe0",
    "9363c257f60225c4918765d4ffd3441db35f9a3be606c23d46d1ce83ec50076a",
    R"F18001afe0C()F18001afe0C",
    R"F18001afe0D(DAT_1803fa710)F18001afe0D",
    R"F18001afe0T()F18001afe0T",
    R"F18001afe0F(16: if (*(int *)((longlong)param_1 + 0xc) - iVar1 < param_2) {
21: else {
30: if (uVar3 <= uVar4) {
33: return uVar4;)F18001afe0F",
    R"F18001afe0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.)F18001afe0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001afe0() noexcept {
    return kFunction_0x18001afe0;
}

// 0x18001b060 FUN_18001b060
// source: re/dump/decompile/0x18001b060_FUN_18001b060.c
// size: 153 bytes; thunk: false
// body sha256: d64764a1e2b396a826bbf49ed2e0755ce0bebaa727bc313928471854a62aa6c2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b060{
    "0x18001b060",
    "FUN_18001b060",
    R"F18001b060S(undefined FUN_18001b060())F18001b060S",
    R"B18001b060(// 0x18001b060  FUN_18001b060
// size=153 thunk=false
// signature: undefined FUN_18001b060()
// status: ok


uint FUN_18001b060(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = DAT_1803fa730;
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      return uVar5;
    }
    *(int *)(param_1 + 2) = iVar1 + 8;
    bVar2 = (byte)iVar1 & 0x1f;
    uVar6 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (0x20 - bVar2 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) & uVar3;
    uVar5 = uVar5 | (uVar6 & 0x7f) << ((char)iVar4 * '\a' & 0x1fU);
    if (-1 < (char)uVar6) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 5) {
      return uVar5;
    }
  }
  return uVar5;
}


)B18001b060",
    "d64764a1e2b396a826bbf49ed2e0755ce0bebaa727bc313928471854a62aa6c2",
    R"F18001b060C()F18001b060C",
    R"F18001b060D(DAT_1803fa730)F18001b060D",
    R"F18001b060T()F18001b060T",
    R"F18001b060F(20: while( true ) {
22: if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
25: return uVar5;
32: if (-1 < (char)uVar6) break;
34: if (iVar4 == 5) {
35: return uVar5;
38: return uVar5;)F18001b060F",
    R"F18001b060U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa730.)F18001b060U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b060() noexcept {
    return kFunction_0x18001b060;
}

// 0x18001b100 FUN_18001b100
// source: re/dump/decompile/0x18001b100_FUN_18001b100.c
// size: 155 bytes; thunk: false
// body sha256: 72a3d146126776f4fb06d407b7b5ffb135d639b121fe89a2fc81f5928322ec3d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b100{
    "0x18001b100",
    "FUN_18001b100",
    R"F18001b100S(undefined FUN_18001b100())F18001b100S",
    R"B18001b100(// 0x18001b100  FUN_18001b100
// size=155 thunk=false
// signature: undefined FUN_18001b100()
// status: ok


ulonglong FUN_18001b100(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar3 = DAT_1803fa730;
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      return uVar5;
    }
    *(int *)(param_1 + 2) = iVar1 + 8;
    bVar2 = (byte)iVar1 & 0x1f;
    uVar6 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (0x20 - bVar2 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) & uVar3;
    uVar5 = uVar5 | (ulonglong)(uVar6 & 0x7f) << ((char)iVar4 * '\a' & 0x3fU);
    if (-1 < (char)uVar6) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 10) {
      return uVar5;
    }
  }
  return uVar5;
}


)B18001b100",
    "72a3d146126776f4fb06d407b7b5ffb135d639b121fe89a2fc81f5928322ec3d",
    R"F18001b100C()F18001b100C",
    R"F18001b100D(DAT_1803fa730)F18001b100D",
    R"F18001b100T()F18001b100T",
    R"F18001b100F(20: while( true ) {
22: if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
25: return uVar5;
32: if (-1 < (char)uVar6) break;
34: if (iVar4 == 10) {
35: return uVar5;
38: return uVar5;)F18001b100F",
    R"F18001b100U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa730.)F18001b100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b100() noexcept {
    return kFunction_0x18001b100;
}

// 0x18001b1a0 FUN_18001b1a0
// source: re/dump/decompile/0x18001b1a0_FUN_18001b1a0.c
// size: 493 bytes; thunk: false
// body sha256: b614148758c7f1aa06d47de0d9e58594c75dc1eaf73ca1f770924a951e2139d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b1a0{
    "0x18001b1a0",
    "FUN_18001b1a0",
    R"F18001b1a0S(undefined FUN_18001b1a0())F18001b1a0S",
    R"B18001b1a0(// 0x18001b1a0  FUN_18001b1a0
// size=493 thunk=false
// signature: undefined FUN_18001b1a0()
// status: ok


void FUN_18001b1a0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[2];
  if (iVar1 - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar4 = (byte)iVar2;
    bVar3 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
    bVar3 = bVar3 >> (bVar4 & 7) & 1;
  }
  if (iVar1 - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar4 = 0;
  }
  else {
    bVar5 = (byte)iVar2;
    bVar4 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
    bVar4 = bVar4 >> (bVar5 & 7) & 1;
  }
  if ((bVar3 == 0) && (bVar4 == 0)) {
    return;
  }
  if (iVar1 - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
  }
  if (bVar3 != 0) {
    if (iVar1 - iVar2 < 0xe) {
      *(int *)(param_1 + 2) = iVar1;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      iVar2 = iVar1;
    }
    else {
      iVar2 = iVar2 + 0xe;
      *(int *)(param_1 + 2) = iVar2;
    }
  }
  if (bVar4 != 0) {
    if (iVar1 - iVar2 < 5) {
      *(int *)(param_1 + 2) = iVar1;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar2 + 5;
    }
  }
  return;
}


)B18001b1a0",
    "b614148758c7f1aa06d47de0d9e58594c75dc1eaf73ca1f770924a951e2139d9",
    R"F18001b1a0C()F18001b1a0C",
    R"F18001b1a0D()F18001b1a0D",
    R"F18001b1a0T()F18001b1a0T",
    R"F18001b1a0F(18: if (iVar1 - iVar2 < 1) {
22: else {
29: if (iVar1 - iVar2 < 1) {
33: else {
40: if ((bVar3 == 0) && (bVar4 == 0)) {
41: return;
43: if (iVar1 - iVar2 < 1) {
46: else {
50: if (bVar3 != 0) {
51: if (iVar1 - iVar2 < 0xe) {
56: else {
61: if (bVar4 != 0) {
62: if (iVar1 - iVar2 < 5) {
66: else {
70: return;)F18001b1a0F",
    R"F18001b1a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001b1a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b1a0() noexcept {
    return kFunction_0x18001b1a0;
}

// 0x18001b390 FUN_18001b390
// source: re/dump/decompile/0x18001b390_FUN_18001b390.c
// size: 564 bytes; thunk: false
// body sha256: 58b1ca3fd256180c13e9c694ff6c659de0952763971f7af49471c20d50bdd50c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b390{
    "0x18001b390",
    "FUN_18001b390",
    R"F18001b390S(undefined FUN_18001b390())F18001b390S",
    R"B18001b390(// 0x18001b390  FUN_18001b390
// size=564 thunk=false
// signature: undefined FUN_18001b390()
// status: ok


float FUN_18001b390(longlong *param_1,byte param_2,byte param_3)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[2];
  if (iVar5 - iVar6 < (int)(3 - (uint)param_2)) {
    *(int *)(param_1 + 2) = iVar5;
    uVar8 = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    iVar1 = iVar5;
  }
  else {
    iVar1 = (3 - (uint)param_2) + iVar6;
    *(int *)(param_1 + 2) = iVar1;
    bVar3 = (byte)iVar6 & 0x1f;
    uVar8 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + -1 >> 5) * 4) << (-bVar3 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar6 >> 5) * 4) >> bVar3) &
            (&DAT_1803fa71c)[-(ulonglong)param_2];
  }
  if (param_2 == 0) {
    fVar2 = *(float *)(&DAT_18033bc30 + (ulonglong)((uint)param_3 * 8) + (ulonglong)(uVar8 & 4));
    bVar3 = (&DAT_18033b610)[(uVar8 & 3) + (uint)param_3 * 4];
    if (iVar5 - iVar1 < (int)(uint)bVar3) {
      *(int *)(param_1 + 2) = iVar5;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      uVar7 = 0;
    }
    else {
      *(uint *)(param_1 + 2) = (uint)bVar3 + iVar1;
      bVar4 = (byte)iVar1 & 0x1f;
      uVar7 = (*(int *)(*param_1 + (ulonglong)(uint)((int)((uint)bVar3 + iVar1 + -1) >> 5) * 4) <<
               (0x20 - bVar4 & 0x1f) |
              *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4) &
              *(uint *)(&DAT_1803fa710 + (ulonglong)bVar3 * 4);
    }
    if ((uVar8 & 2) != 0) {
      uVar8 = (uVar8 & 1) - 1;
      iVar5 = ((uVar8 & 0x3800) + 0x7ff & uVar7) + 1;
      uVar7 = (iVar5 * 0x18 & param_3 - 1) + iVar5 * 8 |
              ((uVar7 >> 0xe) - (uVar7 >> 0xb) & uVar8) + (uVar7 >> 0xb);
    }
    return (float)(int)uVar7 * fVar2;
  }
  if ((uVar8 & 2) == 0) {
    return 0.0;
  }
  lVar9 = 0xf;
  if ((uVar8 & 1) != 0) {
    lVar9 = 0xc;
  }
  if (iVar5 - iVar1 < (int)lVar9) {
    *(int *)(param_1 + 2) = iVar5;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    uVar8 = 0;
  }
  else {
    iVar5 = (int)lVar9 + iVar1;
    *(int *)(param_1 + 2) = iVar5;
    bVar3 = (byte)iVar1 & 0x1f;
    uVar8 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar5 + -1 >> 5) * 4) << (0x20 - bVar3 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) &
            *(uint *)(&DAT_1803fa710 + lVar9 * 4);
  }
  iVar6 = (uVar8 >> 1) + 1;
  iVar5 = -iVar6;
  if ((uVar8 & 1) == 0) {
    iVar5 = iVar6;
  }
  return (float)iVar5;
}


)B18001b390",
    "58b1ca3fd256180c13e9c694ff6c659de0952763971f7af49471c20d50bdd50c",
    R"F18001b390C()F18001b390C",
    R"F18001b390D(DAT_18033b610
DAT_18033bc30
DAT_1803fa710
DAT_1803fa71c)F18001b390D",
    R"F18001b390T()F18001b390T",
    R"F18001b390F(22: if (iVar5 - iVar6 < (int)(3 - (uint)param_2)) {
28: else {
36: if (param_2 == 0) {
39: if (iVar5 - iVar1 < (int)(uint)bVar3) {
44: else {
52: if ((uVar8 & 2) != 0) {
58: return (float)(int)uVar7 * fVar2;
60: if ((uVar8 & 2) == 0) {
61: return 0.0;
64: if ((uVar8 & 1) != 0) {
67: if (iVar5 - iVar1 < (int)lVar9) {
72: else {
82: if ((uVar8 & 1) == 0) {
85: return (float)iVar5;)F18001b390F",
    R"F18001b390U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033b610.
TODO: recover the declaration, type and value for global/data reference DAT_18033bc30.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa71c.)F18001b390U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b390() noexcept {
    return kFunction_0x18001b390;
}

// 0x18001b5d0 FUN_18001b5d0
// source: re/dump/decompile/0x18001b5d0_FUN_18001b5d0.c
// size: 449 bytes; thunk: false
// body sha256: d3b1c4099d88983bbab40ec66dad456834fcddd642ebea3fb52a9749f22bdcf0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b5d0{
    "0x18001b5d0",
    "FUN_18001b5d0",
    R"F18001b5d0S(undefined FUN_18001b5d0())F18001b5d0S",
    R"B18001b5d0(// 0x18001b5d0  FUN_18001b5d0
// size=449 thunk=false
// signature: undefined FUN_18001b5d0()
// status: ok


float FUN_18001b5d0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  iVar1 = (int)param_1[2];
  if (param_3 != 2) {
    uVar6 = 0;
    if (iVar3 - iVar1 < param_2) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      uVar7 = 0;
      iVar4 = iVar3;
    }
    else {
      iVar4 = iVar1 + param_2;
      *(int *)(param_1 + 2) = iVar4;
      bVar2 = (byte)iVar1 & 0x1f;
      uVar7 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar4 + -1 >> 5) * 4) << (-bVar2 & 0x1f) |
              *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) &
              *(uint *)(&DAT_1803fa710 + (longlong)param_2 * 4);
    }
    lVar5 = 5;
    if (param_3 == 1) {
      lVar5 = 3;
    }
    if (iVar3 - iVar4 < (int)lVar5) {
      *(int *)(param_1 + 2) = iVar3;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      iVar3 = (int)lVar5 + iVar4;
      *(int *)(param_1 + 2) = iVar3;
      bVar2 = (byte)iVar4 & 0x1f;
      uVar6 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar3 + -1 >> 5) * 4) << (0x20 - bVar2 & 0x1f)
              | *(uint *)(*param_1 + (ulonglong)(uint)(iVar4 >> 5) * 4) >> bVar2) &
              *(uint *)(&DAT_1803fa710 + lVar5 * 4);
    }
    dVar8 = DAT_180380c08;
    if (param_3 == 1) {
      dVar8 = DAT_180380c58;
    }
    return (float)dVar8 * (float)(int)uVar6 + (float)(int)uVar7;
  }
  if (param_2 <= iVar3 - iVar1) {
    *(int *)(param_1 + 2) = iVar1 + param_2;
    bVar2 = (byte)iVar1 & 0x1f;
    return (float)((*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + param_2 + -1 >> 5) * 4) <<
                    (0x20 - bVar2 & 0x1f) |
                   *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) &
                  *(uint *)(&DAT_1803fa710 + (longlong)param_2 * 4));
  }
  *(int *)(param_1 + 2) = iVar3;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return 0.0;
}


)B18001b5d0",
    "d3b1c4099d88983bbab40ec66dad456834fcddd642ebea3fb52a9749f22bdcf0",
    R"F18001b5d0C()F18001b5d0C",
    R"F18001b5d0D(DAT_180380c08
DAT_180380c58
DAT_1803fa710)F18001b5d0D",
    R"F18001b5d0T()F18001b5d0T",
    R"F18001b5d0F(21: if (param_3 != 2) {
23: if (iVar3 - iVar1 < param_2) {
28: else {
37: if (param_3 == 1) {
40: if (iVar3 - iVar4 < (int)lVar5) {
44: else {
53: if (param_3 == 1) {
56: return (float)dVar8 * (float)(int)uVar6 + (float)(int)uVar7;
58: if (param_2 <= iVar3 - iVar1) {
61: return (float)((*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + param_2 + -1 >> 5) * 4) <<
68: return 0.0;)F18001b5d0F",
    R"F18001b5d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380c08.
TODO: recover the declaration, type and value for global/data reference DAT_180380c58.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.)F18001b5d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b5d0() noexcept {
    return kFunction_0x18001b5d0;
}

// 0x18001b7a0 FUN_18001b7a0
// source: re/dump/decompile/0x18001b7a0_FUN_18001b7a0.c
// size: 252 bytes; thunk: false
// body sha256: 64e716ad0f1c1fb98af7bdea2b8e387a1e7d0121bf769700c659d469164f6bfe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b7a0{
    "0x18001b7a0",
    "FUN_18001b7a0",
    R"F18001b7a0S(undefined FUN_18001b7a0())F18001b7a0S",
    R"B18001b7a0(// 0x18001b7a0  FUN_18001b7a0
// size=252 thunk=false
// signature: undefined FUN_18001b7a0()
// status: ok


void FUN_18001b7a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  
  *param_2 = 0;
  bVar2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[2];
  if (iVar1 - iVar5 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar6 = bVar2;
  }
  else {
    bVar3 = (byte)iVar5;
    bVar6 = *(byte *)(((longlong)iVar5 >> 3) + *param_1);
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 2) = iVar5;
    bVar6 = bVar6 >> (bVar3 & 7) & 1;
  }
  if (iVar1 - iVar5 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar4 = (byte)iVar5;
    bVar3 = *(byte *)(((longlong)iVar5 >> 3) + *param_1);
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 2) = iVar5;
    bVar3 = bVar3 >> (bVar4 & 7) & 1;
  }
  if (iVar1 - iVar5 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    bVar2 = *(byte *)(((longlong)iVar5 >> 3) + *param_1);
    *(int *)(param_1 + 2) = iVar5 + 1;
    bVar2 = bVar2 >> ((byte)iVar5 & 7) & 1;
  }
  if (bVar6 != 0) {
    uVar7 = FUN_18001b1a0(param_1);
    *(undefined4 *)param_2 = uVar7;
  }
  if (bVar3 != 0) {
    uVar7 = FUN_18001b1a0(param_1);
    *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  }
  if (bVar2 != 0) {
    uVar7 = FUN_18001b1a0(param_1);
    *(undefined4 *)(param_2 + 1) = uVar7;
  }
  return;
}


)B18001b7a0",
    "64e716ad0f1c1fb98af7bdea2b8e387a1e7d0121bf769700c659d469164f6bfe",
    R"F18001b7a0C(FUN_18001b1a0)F18001b7a0C",
    R"F18001b7a0D()F18001b7a0D",
    R"F18001b7a0T()F18001b7a0T",
    R"F18001b7a0F(23: if (iVar1 - iVar5 < 1) {
27: else {
34: if (iVar1 - iVar5 < 1) {
38: else {
45: if (iVar1 - iVar5 < 1) {
48: else {
53: if (bVar6 != 0) {
57: if (bVar3 != 0) {
61: if (bVar2 != 0) {
65: return;)F18001b7a0F",
    R"F18001b7a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001b7a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b7a0() noexcept {
    return kFunction_0x18001b7a0;
}

// 0x18001b8a0 FUN_18001b8a0
// source: re/dump/decompile/0x18001b8a0_FUN_18001b8a0.c
// size: 191 bytes; thunk: false
// body sha256: eebe7d2745c523d4499b1dcc23b9784ea0d5a2c42086e7709338b57c096e0713
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b8a0{
    "0x18001b8a0",
    "FUN_18001b8a0",
    R"F18001b8a0S(undefined FUN_18001b8a0())F18001b8a0S",
    R"B18001b8a0(// 0x18001b8a0  FUN_18001b8a0
// size=191 thunk=false
// signature: undefined FUN_18001b8a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001b8a0(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float fVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[2];
  if (iVar1 - iVar4 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(((longlong)iVar4 >> 3) + *param_1) >> ((byte)iVar4 & 7) & 1;
    iVar4 = iVar4 + 1;
  }
  if (iVar1 - iVar4 < 0xb) {
    *(int *)(param_1 + 2) = iVar1;
    uVar3 = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar4 + 0xb;
    bVar2 = (byte)iVar4 & 0x1f;
    uVar3 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar4 + 10 >> 5) * 4) << (0x20 - bVar2 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar4 >> 5) * 4) >> bVar2) & _DAT_1803fa73c;
  }
  fVar6 = (float)((double)uVar3 * DAT_180380b28);
  uVar7 = 0;
  if (bVar5 != 0) {
    fVar6 = (float)((uint)fVar6 ^ DAT_1803817f0);
    uVar7 = _UNK_1803817f4;
  }
  return CONCAT44(uVar7,fVar6);
}


)B18001b8a0",
    "eebe7d2745c523d4499b1dcc23b9784ea0d5a2c42086e7709338b57c096e0713",
    R"F18001b8a0C()F18001b8a0C",
    R"F18001b8a0D(DAT_180380b28
DAT_1803817f0)F18001b8a0D",
    R"F18001b8a0T()F18001b8a0T",
    R"F18001b8a0F(22: if (iVar1 - iVar4 < 1) {
26: else {
30: if (iVar1 - iVar4 < 0xb) {
35: else {
43: if (bVar5 != 0) {
47: return CONCAT44(uVar7,fVar6);)F18001b8a0F",
    R"F18001b8a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380b28.
TODO: recover the declaration, type and value for global/data reference DAT_1803817f0.)F18001b8a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b8a0() noexcept {
    return kFunction_0x18001b8a0;
}

// 0x18001b960 FUN_18001b960
// source: re/dump/decompile/0x18001b960_FUN_18001b960.c
// size: 346 bytes; thunk: false
// body sha256: 4c3d81b91bf38275976e0cd1b9bc066348bd56d0c56e5b4b447a0d13dcf5d048
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001b960{
    "0x18001b960",
    "FUN_18001b960",
    R"F18001b960S(undefined FUN_18001b960())F18001b960S",
    R"B18001b960(// 0x18001b960  FUN_18001b960
// size=346 thunk=false
// signature: undefined FUN_18001b960()
// status: ok


void FUN_18001b960(longlong *param_1,float *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar1 = (byte)iVar2;
    bVar3 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
    bVar3 = bVar3 >> (bVar1 & 7) & 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    *(int *)(param_1 + 2) = iVar2 + 1;
    bVar1 = bVar1 >> ((byte)iVar2 & 7) & 1;
  }
  fVar5 = 0.0;
  if (bVar3 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_18001b8a0(param_1);
  }
  *param_2 = fVar4;
  if (bVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_18001b8a0(param_1);
  }
  param_2[1] = fVar4;
  iVar2 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    *(int *)(param_1 + 2) = iVar2 + 1;
    bVar3 = bVar3 >> ((byte)iVar2 & 7) & 1;
  }
  fVar4 = param_2[1] * param_2[1] + *param_2 * *param_2;
  if (fVar4 < DAT_180380bb0) {
    fVar4 = DAT_180380bb0 - fVar4;
    if (fVar4 < 0.0) {
      fVar5 = sqrtf(fVar4);
    }
    else {
      fVar5 = SQRT(fVar4);
    }
  }
  param_2[2] = fVar5;
  if (bVar3 != 0) {
    param_2[2] = (float)((uint)fVar5 ^ DAT_1803817f0);
  }
  return;
}


)B18001b960",
    "4c3d81b91bf38275976e0cd1b9bc066348bd56d0c56e5b4b447a0d13dcf5d048",
    R"F18001b960C(FUN_18001b8a0)F18001b960C",
    R"F18001b960D(DAT_180380bb0
DAT_1803817f0)F18001b960D",
    R"F18001b960T()F18001b960T",
    R"F18001b960F(17: if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
21: else {
28: if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
32: else {
38: if (bVar3 == 0) {
41: else {
45: if (bVar1 == 0) {
48: else {
53: if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
57: else {
63: if (fVar4 < DAT_180380bb0) {
65: if (fVar4 < 0.0) {
68: else {
73: if (bVar3 != 0) {
76: return;)F18001b960F",
    R"F18001b960U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803817f0.)F18001b960U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001b960() noexcept {
    return kFunction_0x18001b960;
}

// 0x18001bac0 FUN_18001bac0
// source: re/dump/decompile/0x18001bac0_FUN_18001bac0.c
// size: 229 bytes; thunk: false
// body sha256: fc3cd494d434b8ff8a76cdb634289347b9407d8c6f632e8ef107f1790804cb6e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bac0{
    "0x18001bac0",
    "FUN_18001bac0",
    R"F18001bac0S(undefined FUN_18001bac0())F18001bac0S",
    R"B18001bac0(// 0x18001bac0  FUN_18001bac0
// size=229 thunk=false
// signature: undefined FUN_18001bac0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_18001bac0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  float fVar4;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x7fff) == 0x7c00) {
    if (-1 < (short)uVar1) {
      return DAT_180380bb0 * _DAT_1803812d8;
    }
    return DAT_180381384 * _DAT_1803812d8;
  }
  uVar3 = uVar1 & 0x3ff;
  if ((uVar1 & 0x7c00) != 0x7c00 || uVar3 == 0) {
    if (((uVar1 & 0x7c00) == 0) && (uVar3 != 0)) {
      fVar4 = DAT_180380bb0;
      if ((short)uVar1 < 0) {
        fVar4 = DAT_180381384;
      }
      return (float)uVar3 * _DAT_180380960 * fVar4 * DAT_180380944;
    }
    iVar2 = 0;
    if ((uVar1 >> 10 & 0x1f) != 0) {
      iVar2 = (uVar1 >> 10 & 0x1f) + 0x70;
    }
    return (float)(((iVar2 << 7 | uVar1 & 0xffff8000) << 3 | uVar1 & 0x3ff) << 0xd);
  }
  return 0.0;
}


)B18001bac0",
    "fc3cd494d434b8ff8a76cdb634289347b9407d8c6f632e8ef107f1790804cb6e",
    R"F18001bac0C()F18001bac0C",
    R"F18001bac0D(DAT_180380944
DAT_180380bb0
DAT_180381384)F18001bac0D",
    R"F18001bac0T()F18001bac0T",
    R"F18001bac0F(18: if ((uVar1 & 0x7fff) == 0x7c00) {
19: if (-1 < (short)uVar1) {
20: return DAT_180380bb0 * _DAT_1803812d8;
22: return DAT_180381384 * _DAT_1803812d8;
25: if ((uVar1 & 0x7c00) != 0x7c00 || uVar3 == 0) {
26: if (((uVar1 & 0x7c00) == 0) && (uVar3 != 0)) {
28: if ((short)uVar1 < 0) {
31: return (float)uVar3 * _DAT_180380960 * fVar4 * DAT_180380944;
34: if ((uVar1 >> 10 & 0x1f) != 0) {
37: return (float)(((iVar2 << 7 | uVar1 & 0xffff8000) << 3 | uVar1 & 0x3ff) << 0xd);
39: return 0.0;)F18001bac0F",
    R"F18001bac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380944.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180381384.)F18001bac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bac0() noexcept {
    return kFunction_0x18001bac0;
}

// 0x18001bbb0 CUtlNoEscConversion_vfunc00
// source: re/dump/decompile/0x18001bbb0_CUtlNoEscConversion_vfunc00.c
// size: 10 bytes; thunk: false
// body sha256: bed16e39c0e31f6ca65ab8ef3f29aeca416e382495c6dcd5a37d2d28f5acb165
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bbb0{
    "0x18001bbb0",
    "CUtlNoEscConversion_vfunc00",
    R"F18001bbb0S(undefined CUtlNoEscConversion_vfunc00())F18001bbb0S",
    R"B18001bbb0(// 0x18001bbb0  CUtlNoEscConversion_vfunc00
// size=10 thunk=false
// signature: undefined CUtlNoEscConversion_vfunc00()
// status: ok


undefined1 CUtlNoEscConversion_vfunc00(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 0;
}


)B18001bbb0",
    "bed16e39c0e31f6ca65ab8ef3f29aeca416e382495c6dcd5a37d2d28f5acb165",
    R"F18001bbb0C()F18001bbb0C",
    R"F18001bbb0D()F18001bbb0D",
    R"F18001bbb0T()F18001bbb0T",
    R"F18001bbb0F(11: return 0;)F18001bbb0F",
    R"F18001bbb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001bbb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bbb0() noexcept {
    return kFunction_0x18001bbb0;
}

// 0x18001bbc0 CUtlCStringConversion_vfunc00
// source: re/dump/decompile/0x18001bbc0_CUtlCStringConversion_vfunc00.c
// size: 22 bytes; thunk: false
// body sha256: dec4d4436557dcaff98d899df0aed044b91d64fa68c93cbbd03f7399c35d2a36
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bbc0{
    "0x18001bbc0",
    "CUtlCStringConversion_vfunc00",
    R"F18001bbc0S(undefined CUtlCStringConversion_vfunc00())F18001bbc0S",
    R"B18001bbc0(// 0x18001bbc0  CUtlCStringConversion_vfunc00
// size=22 thunk=false
// signature: undefined CUtlCStringConversion_vfunc00()
// status: ok


void CUtlCStringConversion_vfunc00(longlong param_1,byte *param_2,uint *param_3)

{
  *param_3 = (uint)(*(char *)((ulonglong)*param_2 + 0x1128 + param_1) != '\0');
  return;
}


)B18001bbc0",
    "dec4d4436557dcaff98d899df0aed044b91d64fa68c93cbbd03f7399c35d2a36",
    R"F18001bbc0C()F18001bbc0C",
    R"F18001bbc0D()F18001bbc0D",
    R"F18001bbc0T()F18001bbc0T",
    R"F18001bbc0F(11: return;)F18001bbc0F",
    R"F18001bbc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001bbc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bbc0() noexcept {
    return kFunction_0x18001bbc0;
}

// 0x18001bbe0 CUtlCharConversion_vfunc00
// source: re/dump/decompile/0x18001bbe0_CUtlCharConversion_vfunc00.c
// size: 124 bytes; thunk: false
// body sha256: 3a52b92584cefd85e2f5105d1b0015ff710b62365a8b5fb1be2a7bb3f9062b5b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bbe0{
    "0x18001bbe0",
    "CUtlCharConversion_vfunc00",
    R"F18001bbe0S(undefined CUtlCharConversion_vfunc00())F18001bbe0S",
    R"B18001bbe0(// 0x18001bbe0  CUtlCharConversion_vfunc00
// size=124 thunk=false
// signature: undefined CUtlCharConversion_vfunc00()
// status: ok


ulonglong CUtlCharConversion_vfunc00(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar5 = (ulonglong)*(byte *)(uVar4 + 0x24 + param_1);
      iVar2 = strcmp(param_2,*(char **)(param_1 + (uVar5 + 0x13) * 0x10));
      in_RAX = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) {
        *param_3 = *(undefined4 *)(param_1 + 0x128 + uVar5 * 0x10);
        return (ulonglong)*(byte *)(uVar4 + 0x24 + param_1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar1);
  }
  *param_3 = 0;
  return in_RAX & 0xffffffffffffff00;
}


)B18001bbe0",
    "3a52b92584cefd85e2f5105d1b0015ff710b62365a8b5fb1be2a7bb3f9062b5b",
    R"F18001bbe0C()F18001bbe0C",
    R"F18001bbe0D()F18001bbe0D",
    R"F18001bbe0T()F18001bbe0T",
    R"F18001bbe0F(20: if (0 < iVar1) {
21: do {
25: if (iVar2 == 0) {
27: return (ulonglong)*(byte *)(uVar4 + 0x24 + param_1);
34: return in_RAX & 0xffffffffffffff00;)F18001bbe0F",
    R"F18001bbe0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001bbe0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bbe0() noexcept {
    return kFunction_0x18001bbe0;
}

// 0x18001bc60 FUN_18001bc60
// source: re/dump/decompile/0x18001bc60_FUN_18001bc60.c
// size: 98 bytes; thunk: false
// body sha256: d6147d5fe957a7a750644d7ee6c352acce286f79fa3d62a922be97a45d1eebd7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bc60{
    "0x18001bc60",
    "FUN_18001bc60",
    R"F18001bc60S(undefined FUN_18001bc60())F18001bc60S",
    R"B18001bc60(// 0x18001bc60  FUN_18001bc60
// size=98 thunk=false
// signature: undefined FUN_18001bc60()
// status: ok


void FUN_18001bc60(longlong *param_1)

{
  longlong local_18;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    DAT_1803fa338 = param_1[2] != 0;
    if ((bool)DAT_1803fa338) {
      local_18 = param_1[2];
    }
    DAT_1803fa339 = local_f;
    DAT_1803fa33d = local_b;
    DAT_1803fa33f = local_9;
    DAT_1803fa330 = local_18;
  }
  return;
}


)B18001bc60",
    "d6147d5fe957a7a750644d7ee6c352acce286f79fa3d62a922be97a45d1eebd7",
    R"F18001bc60C()F18001bc60C",
    R"F18001bc60D(DAT_1803fa330
DAT_1803fa338
DAT_1803fa339
DAT_1803fa33d
DAT_1803fa33f)F18001bc60D",
    R"F18001bc60T()F18001bc60T",
    R"F18001bc60F(15: if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
18: if ((bool)DAT_1803fa338) {
26: return;)F18001bc60F",
    R"F18001bc60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa330.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa338.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa339.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa33d.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa33f.
TODO: resolve the indirect call in body 16: (*(code *)**(undefined8 **)*param_1)();.)F18001bc60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bc60() noexcept {
    return kFunction_0x18001bc60;
}

// 0x18001bcd0 FUN_18001bcd0
// source: re/dump/decompile/0x18001bcd0_FUN_18001bcd0.c
// size: 161 bytes; thunk: false
// body sha256: 974422b9ed26c92798d2f8af9caa3275dad8a4d614a53027ac136dfc1d2152b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bcd0{
    "0x18001bcd0",
    "FUN_18001bcd0",
    R"F18001bcd0S(undefined FUN_18001bcd0())F18001bcd0S",
    R"B18001bcd0(// 0x18001bcd0  FUN_18001bcd0
// size=161 thunk=false
// signature: undefined FUN_18001bcd0()
// status: ok


longlong * FUN_18001bcd0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  puVar2 = (undefined8 *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0,param_3,param_4,0);
  *param_2 = (longlong)puVar2;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)*puVar2)(puVar2);
    *(undefined4 *)(param_2 + 1) = uVar1;
    if (DAT_1803fa338 != '\0') {
      param_2[2] = DAT_1803fa330;
    }
    DAT_1803fa330 = *(longlong *)(*param_2 + 8);
    DAT_1803fa338 = '\x01';
    DAT_1803fa339 = local_17;
    DAT_1803fa33d = local_13;
    DAT_1803fa33f = local_11;
  }
  return param_2;
}


)B18001bcd0",
    "974422b9ed26c92798d2f8af9caa3275dad8a4d614a53027ac136dfc1d2152b7",
    R"F18001bcd0C()F18001bcd0C",
    R"F18001bcd0D(DAT_1803fa330
DAT_1803fa338
DAT_1803fa339
DAT_1803fa33d
DAT_1803fa33f
DAT_1803fa678)F18001bcd0D",
    R"F18001bcd0T()F18001bcd0T",
    R"F18001bcd0F(20: if (puVar2 != (undefined8 *)0x0) {
23: if (DAT_1803fa338 != '\0') {
32: return param_2;)F18001bcd0F",
    R"F18001bcd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa330.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa338.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa339.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa33d.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa33f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa678.
TODO: resolve the indirect call in body 16: puVar2 = (undefined8 *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0,param_3,param_4,0);.
TODO: resolve the indirect call in body 21: uVar1 = (**(code **)*puVar2)(puVar2);.)F18001bcd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bcd0() noexcept {
    return kFunction_0x18001bcd0;
}

// 0x18001bd90 INetMessage_vfunc00
// source: re/dump/decompile/0x18001bd90_INetMessage_vfunc00.c
// size: 43 bytes; thunk: false
// body sha256: 772039c5b703952ff60c0c1a1146ae661bab1b1a52161b9503a1355f5509a163
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bd90{
    "0x18001bd90",
    "INetMessage_vfunc00",
    R"F18001bd90S(undefined INetMessage_vfunc00())F18001bd90S",
    R"B18001bd90(// 0x18001bd90  INetMessage_vfunc00
// size=43 thunk=false
// signature: undefined INetMessage_vfunc00()
// status: ok


undefined8 * INetMessage_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_INetMessage;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B18001bd90",
    "772039c5b703952ff60c0c1a1146ae661bab1b1a52161b9503a1355f5509a163",
    R"F18001bd90C()F18001bd90C",
    R"F18001bd90D()F18001bd90D",
    R"F18001bd90T()F18001bd90T",
    R"F18001bd90F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F18001bd90F",
    R"F18001bd90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001bd90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bd90() noexcept {
    return kFunction_0x18001bd90;
}

// 0x18001bdc0 FUN_18001bdc0
// source: re/dump/decompile/0x18001bdc0_FUN_18001bdc0.c
// size: 34 bytes; thunk: false
// body sha256: 37d2c15366f870bfaddbaa982b6ca83029f23181d5e1d4d648dbab58c58c0276
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bdc0{
    "0x18001bdc0",
    "FUN_18001bdc0",
    R"F18001bdc0S(undefined FUN_18001bdc0())F18001bdc0S",
    R"B18001bdc0(// 0x18001bdc0  FUN_18001bdc0
// size=34 thunk=false
// signature: undefined FUN_18001bdc0()
// status: ok


undefined8 FUN_18001bdc0(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x570))();
  return 1;
}


)B18001bdc0",
    "37d2c15366f870bfaddbaa982b6ca83029f23181d5e1d4d648dbab58c58c0276",
    R"F18001bdc0C()F18001bdc0C",
    R"F18001bdc0D()F18001bdc0D",
    R"F18001bdc0T()F18001bdc0T",
    R"F18001bdc0F(10: if (param_1 == (longlong *)0x0) {
11: return 0;
14: return 1;)F18001bdc0F",
    R"F18001bdc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 13: (**(code **)(*param_1 + 0x570))();.)F18001bdc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bdc0() noexcept {
    return kFunction_0x18001bdc0;
}

// 0x18001bdf0 FUN_18001bdf0
// source: re/dump/decompile/0x18001bdf0_FUN_18001bdf0.c
// size: 247 bytes; thunk: false
// body sha256: 58c81018d05ffc67d13d93573d3cb05bfc959989ac5350fea857eaca2e26b382
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bdf0{
    "0x18001bdf0",
    "FUN_18001bdf0",
    R"F18001bdf0S(undefined FUN_18001bdf0())F18001bdf0S",
    R"B18001bdf0(// 0x18001bdf0  FUN_18001bdf0
// size=247 thunk=false
// signature: undefined FUN_18001bdf0()
// status: ok


ulonglong FUN_18001bdf0(longlong *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))();
  lVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
  if ((lVar4 != 0) &&
     (lVar4 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar4), lVar4 != 0)) {
    iVar7 = 0;
    lVar9 = *(int *)(lVar4 + 0x16c) + lVar4;
    iVar1 = *(int *)(lVar4 + 0xa0);
    iVar6 = *(int *)(lVar4 + 0x9c) + -1;
    if (-1 < iVar6) {
      do {
        iVar8 = iVar6 + iVar7 >> 1;
        piVar5 = (int *)((ulonglong)*(byte *)(iVar8 + lVar9) * 0xd8 + iVar1 + lVar4);
        iVar2 = _stricmp((char *)((longlong)*piVar5 + (longlong)piVar5),param_2);
        if (iVar2 < 0) {
          iVar7 = iVar8 + 1;
        }
        else {
          if (iVar2 < 1) {
            return (ulonglong)*(byte *)(iVar8 + lVar9);
          }
          iVar6 = iVar8 + -1;
        }
      } while (iVar7 <= iVar6);
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


)B18001bdf0",
    "58c81018d05ffc67d13d93573d3cb05bfc959989ac5350fea857eaca2e26b382",
    R"F18001bdf0C()F18001bdf0C",
    R"F18001bdf0D(DAT_1803f9250)F18001bdf0D",
    R"F18001bdf0T()F18001bdf0T",
    R"F18001bdf0F(22: if ((lVar4 != 0) &&
28: if (-1 < iVar6) {
29: do {
33: if (iVar2 < 0) {
36: else {
37: if (iVar2 < 1) {
38: return (ulonglong)*(byte *)(iVar8 + lVar9);
44: return 0xffffffff;
46: return 0xffffffff;)F18001bdf0F",
    R"F18001bdf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 20: plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))();.
TODO: resolve the indirect call in body 21: lVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);.
TODO: resolve the indirect call in body 23: (lVar4 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar4), lVar4 != 0)) {.)F18001bdf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bdf0() noexcept {
    return kFunction_0x18001bdf0;
}

// 0x18001bef0 FUN_18001bef0
// source: re/dump/decompile/0x18001bef0_FUN_18001bef0.c
// size: 233 bytes; thunk: false
// body sha256: 200be8830475b2eed03164155e8291466716fbe196903b0b1cbe795238081320
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bef0{
    "0x18001bef0",
    "FUN_18001bef0",
    R"F18001bef0S(undefined FUN_18001bef0())F18001bef0S",
    R"B18001bef0(// 0x18001bef0  FUN_18001bef0
// size=233 thunk=false
// signature: undefined FUN_18001bef0()
// status: ok


longlong FUN_18001bef0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_Collision",0xb);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + 0x28 + (longlong)iVar1;
}


)B18001bef0",
    "200be8830475b2eed03164155e8291466716fbe196903b0b1cbe795238081320",
    R"F18001bef0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001bef0C",
    R"F18001bef0D(DAT_1803fac80)F18001bef0D",
    R"F18001bef0T("m_Collision"
"DT_BaseEntity")F18001bef0T",
    R"F18001bef0F(44: return param_1 + 0x28 + (longlong)iVar1;)F18001bef0F",
    R"F18001bef0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001bef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bef0() noexcept {
    return kFunction_0x18001bef0;
}

// 0x18001bfe0 FUN_18001bfe0
// source: re/dump/decompile/0x18001bfe0_FUN_18001bfe0.c
// size: 233 bytes; thunk: false
// body sha256: 6e09b3b07b751027a5b64a7096fc3665c6fb44ac96e36cb242016c71f4627784
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001bfe0{
    "0x18001bfe0",
    "FUN_18001bfe0",
    R"F18001bfe0S(undefined FUN_18001bfe0())F18001bfe0S",
    R"B18001bfe0(// 0x18001bfe0  FUN_18001bfe0
// size=233 thunk=false
// signature: undefined FUN_18001bfe0()
// status: ok


longlong FUN_18001bfe0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_Collision",0xb);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + 0x34 + (longlong)iVar1;
}


)B18001bfe0",
    "6e09b3b07b751027a5b64a7096fc3665c6fb44ac96e36cb242016c71f4627784",
    R"F18001bfe0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001bfe0C",
    R"F18001bfe0D(DAT_1803fac80)F18001bfe0D",
    R"F18001bfe0T("m_Collision"
"DT_BaseEntity")F18001bfe0T",
    R"F18001bfe0F(44: return param_1 + 0x34 + (longlong)iVar1;)F18001bfe0F",
    R"F18001bfe0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001bfe0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001bfe0() noexcept {
    return kFunction_0x18001bfe0;
}

// 0x18001c0d0 FUN_18001c0d0
// source: re/dump/decompile/0x18001c0d0_FUN_18001c0d0.c
// size: 360 bytes; thunk: false
// body sha256: d71635ef7d7cdcef991704e0426105c416be05022062f6cd34a9a75efe6f668c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c0d0{
    "0x18001c0d0",
    "FUN_18001c0d0",
    R"F18001c0d0S(undefined FUN_18001c0d0())F18001c0d0S",
    R"B18001c0d0(// 0x18001c0d0  FUN_18001c0d0
// size=360 thunk=false
// signature: undefined FUN_18001c0d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001c0d0(longlong param_1)

{
  double dVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [72];
  
  if (DAT_1803da608 == -999) {
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_18001d080(&local_d8,"DT_BaseEntity",0xd);
    uVar4 = FUN_18016d4c0(local_88,&local_d8);
    uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);
    FUN_18020e450(&local_d8);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"m_flSimulationTime",0x12);
    local_98 = &local_b8;
    local_90 = local_68;
    uVar5 = FUN_18016d4c0(local_68,&local_b8);
    iVar3 = FUN_180018c10(uVar4,uVar5);
    FUN_18020e450(&local_b8);
    DAT_1803da608 = iVar3;
  }
  if (DAT_1803fa608 == 0) {
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  dVar1 = *(double *)(DAT_1803da608 + param_1);
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  sVar2 = _dclass(uVar6);
  if (((0 < sVar2) || (dVar1 <= DAT_180380d08)) ||
     (dVar1 = (double)CONCAT44(uVar10,uVar8) - dVar1, uVar9 = SUB84(dVar1,0) & _DAT_1803817d0,
     uVar11 = (uint)((ulonglong)dVar1 >> 0x20) & _UNK_1803817d4,
     DAT_180380d80 < (double)CONCAT44(uVar11,uVar9) ||
     DAT_180380d80 == (double)CONCAT44(uVar11,uVar9))) {
    uVar6 = 0;
    uVar7 = 0;
  }
  return CONCAT44(uVar7,uVar6);
}


)B18001c0d0",
    "d71635ef7d7cdcef991704e0426105c416be05022062f6cd34a9a75efe6f668c",
    R"F18001c0d0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001c0d0C",
    R"F18001c0d0D(DAT_180380d08
DAT_180380d80
DAT_1803da608
DAT_1803fa608
DAT_1803fac80)F18001c0d0D",
    R"F18001c0d0T("DT_BaseEntity"
"m_flSimulationTime")F18001c0d0T",
    R"F18001c0d0F(36: if (DAT_1803da608 == -999) {
57: if (DAT_1803fa608 == 0) {
61: else {
69: if (((0 < sVar2) || (dVar1 <= DAT_180380d08)) ||
77: return CONCAT44(uVar7,uVar6);)F18001c0d0F",
    R"F18001c0d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380d08.
TODO: recover the declaration, type and value for global/data reference DAT_180380d80.
TODO: recover the declaration, type and value for global/data reference DAT_1803da608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001c0d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c0d0() noexcept {
    return kFunction_0x18001c0d0;
}

// 0x18001c240 FUN_18001c240
// source: re/dump/decompile/0x18001c240_FUN_18001c240.c
// size: 230 bytes; thunk: false
// body sha256: f84d24f485c38535e5314d05e5ae46d80a4184d5f5d8b58d68c4b0451aa94a02
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c240{
    "0x18001c240",
    "FUN_18001c240",
    R"F18001c240S(undefined FUN_18001c240())F18001c240S",
    R"B18001c240(// 0x18001c240  FUN_18001c240
// size=230 thunk=false
// signature: undefined FUN_18001c240()
// status: ok


longlong FUN_18001c240(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_nModelIndex",0xd);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + iVar1;
}


)B18001c240",
    "f84d24f485c38535e5314d05e5ae46d80a4184d5f5d8b58d68c4b0451aa94a02",
    R"F18001c240C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001c240C",
    R"F18001c240D(DAT_1803fac80)F18001c240D",
    R"F18001c240T("DT_BaseEntity"
"m_nModelIndex")F18001c240T",
    R"F18001c240F(44: return param_1 + iVar1;)F18001c240F",
    R"F18001c240U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001c240U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c240() noexcept {
    return kFunction_0x18001c240;
}

// 0x18001c330 FUN_18001c330
// source: re/dump/decompile/0x18001c330_FUN_18001c330.c
// size: 242 bytes; thunk: false
// body sha256: b4c30298330a29a7fd221df561c4eb73dd22146b0976d6edda4467b0c4ee9108
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c330{
    "0x18001c330",
    "FUN_18001c330",
    R"F18001c330S(undefined FUN_18001c330())F18001c330S",
    R"B18001c330(// 0x18001c330  FUN_18001c330
// size=242 thunk=false
// signature: undefined FUN_18001c330()
// status: ok


bool FUN_18001c330(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BasePlayer",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_lifeState",0xb);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  uVar1 = FUN_180018c10(uVar2,uVar3);
  uVar4 = (ulonglong)uVar1;
  FUN_18020e450(&local_98);
  if ((int)uVar1 < 1) {
    uVar4 = 0xd7;
  }
  return *(char *)(uVar4 + param_1) == '\0';
}


)B18001c330",
    "b4c30298330a29a7fd221df561c4eb73dd22146b0976d6edda4467b0c4ee9108",
    R"F18001c330C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001c330C",
    R"F18001c330D(DAT_1803fac80)F18001c330D",
    R"F18001c330T("m_lifeState"
"DT_BasePlayer")F18001c330T",
    R"F18001c330F(46: if ((int)uVar1 < 1) {
49: return *(char *)(uVar4 + param_1) == '\0';)F18001c330F",
    R"F18001c330U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001c330U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c330() noexcept {
    return kFunction_0x18001c330;
}

// 0x18001c430 FUN_18001c430
// source: re/dump/decompile/0x18001c430_FUN_18001c430.c
// size: 294 bytes; thunk: false
// body sha256: 635dc5eca3035f6142c3757126686e5c0a088149fe5f6fc580a589b4b9694e12
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c430{
    "0x18001c430",
    "FUN_18001c430",
    R"F18001c430S(undefined FUN_18001c430())F18001c430S",
    R"B18001c430(// 0x18001c430  FUN_18001c430
// size=294 thunk=false
// signature: undefined FUN_18001c430()
// status: ok


float * FUN_18001c430(longlong param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"DT_BaseFlex",0xb);
  uVar2 = FUN_18016d4c0(local_70,&local_c8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_c8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"m_vecViewOffset[0]",0x12);
  local_78 = &local_a8;
  local_88[0] = local_50;
  uVar3 = FUN_18016d4c0(local_50,&local_a8);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  lVar5 = (longlong)iVar1;
  FUN_18020e450(&local_a8);
  pfVar4 = (float *)FUN_18001daf0(param_1,local_88);
  *param_2 = *pfVar4 + *(float *)(lVar5 + param_1);
  param_2[1] = *(float *)(lVar5 + 4 + param_1) + pfVar4[1];
  param_2[2] = *(float *)(lVar5 + 8 + param_1) + pfVar4[2];
  return param_2;
}


)B18001c430",
    "635dc5eca3035f6142c3757126686e5c0a088149fe5f6fc580a589b4b9694e12",
    R"F18001c430C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18001daf0
FUN_18016d4c0
FUN_18020e450)F18001c430C",
    R"F18001c430D(DAT_1803fac80)F18001c430D",
    R"F18001c430T("DT_BaseFlex"
"m_vecViewOffset[0]")F18001c430T",
    R"F18001c430F(51: return param_2;)F18001c430F",
    R"F18001c430U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001c430U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c430() noexcept {
    return kFunction_0x18001c430;
}

// 0x18001c560 FUN_18001c560
// source: re/dump/decompile/0x18001c560_FUN_18001c560.c
// size: 287 bytes; thunk: false
// body sha256: 413cc9d037521e1a5e6f96f02b9fbb14af3ea7cc171e0ba2536b05618594624e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c560{
    "0x18001c560",
    "FUN_18001c560",
    R"F18001c560S(undefined FUN_18001c560())F18001c560S",
    R"B18001c560(// 0x18001c560  FUN_18001c560
// size=287 thunk=false
// signature: undefined FUN_18001c560()
// status: ok


int FUN_18001c560(longlong *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();
  pcVar2 = DAT_1803fe398;
  if ((plVar5 != (longlong *)0x0) && (DAT_1803fe398 != (code *)0x0)) {
    uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
    dVar1 = (double)(*pcVar2)(uVar3,"iTeam",0);
    if ((int)dVar1 != 0) {
      return (int)dVar1;
    }
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar6 = FUN_18016d4c0(local_68,&local_b8);
  uVar6 = FUN_180018ef0(&DAT_1803fac80,uVar6);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_iTeamNum",10);
  local_78 = &local_98;
  local_70 = local_48;
  uVar7 = FUN_18016d4c0(local_48,&local_98);
  iVar4 = FUN_180018c10(uVar6,uVar7);
  FUN_18020e450(&local_98);
  return *(int *)((longlong)iVar4 + (longlong)param_1);
}


)B18001c560",
    "413cc9d037521e1a5e6f96f02b9fbb14af3ea7cc171e0ba2536b05618594624e",
    R"F18001c560C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001c560C",
    R"F18001c560D(DAT_1803fac80
DAT_1803fe398)F18001c560D",
    R"F18001c560T("iTeam"
"m_iTeamNum"
"DT_BaseEntity")F18001c560T",
    R"F18001c560F(32: if ((plVar5 != (longlong *)0x0) && (DAT_1803fe398 != (code *)0x0)) {
35: if ((int)dVar1 != 0) {
36: return (int)dVar1;
57: return *(int *)((longlong)iVar4 + (longlong)param_1);)F18001c560F",
    R"F18001c560U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe398.
TODO: resolve the indirect call in body 30: plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();.
TODO: resolve the indirect call in body 32: if ((plVar5 != (longlong *)0x0) && (DAT_1803fe398 != (code *)0x0)) {.
TODO: resolve the indirect call in body 33: uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);.
TODO: resolve the indirect call in body 34: dVar1 = (double)(*pcVar2)(uVar3,"iTeam",0);.)F18001c560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c560() noexcept {
    return kFunction_0x18001c560;
}

// 0x18001c680 FUN_18001c680
// source: re/dump/decompile/0x18001c680_FUN_18001c680.c
// size: 229 bytes; thunk: false
// body sha256: 82c6a9d857934ab8f22e81bd0eff6d15376c708c326aebdb6317af0008a195ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c680{
    "0x18001c680",
    "FUN_18001c680",
    R"F18001c680S(undefined FUN_18001c680())F18001c680S",
    R"B18001c680(// 0x18001c680  FUN_18001c680
// size=229 thunk=false
// signature: undefined FUN_18001c680()
// status: ok


undefined4 FUN_18001c680(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_iHealth",9);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return *(undefined4 *)(iVar1 + param_1);
}


)B18001c680",
    "82c6a9d857934ab8f22e81bd0eff6d15376c708c326aebdb6317af0008a195ae",
    R"F18001c680C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001c680C",
    R"F18001c680D(DAT_1803fac80)F18001c680D",
    R"F18001c680T("m_iHealth"
"DT_BaseEntity")F18001c680T",
    R"F18001c680F(44: return *(undefined4 *)(iVar1 + param_1);)F18001c680F",
    R"F18001c680U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001c680U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c680() noexcept {
    return kFunction_0x18001c680;
}

// 0x18001c770 FUN_18001c770
// source: re/dump/decompile/0x18001c770_FUN_18001c770.c
// size: 229 bytes; thunk: false
// body sha256: 08e8df507a4fbf4c0e5f7ecb4c60c217f6decd528e54fcd20c34ff8547384e00
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c770{
    "0x18001c770",
    "FUN_18001c770",
    R"F18001c770S(undefined FUN_18001c770())F18001c770S",
    R"B18001c770(// 0x18001c770  FUN_18001c770
// size=229 thunk=false
// signature: undefined FUN_18001c770()
// status: ok


undefined4 FUN_18001c770(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_iMaxHealth",0xc);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return *(undefined4 *)(iVar1 + param_1);
}


)B18001c770",
    "08e8df507a4fbf4c0e5f7ecb4c60c217f6decd528e54fcd20c34ff8547384e00",
    R"F18001c770C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001c770C",
    R"F18001c770D(DAT_1803fac80)F18001c770D",
    R"F18001c770T("m_iMaxHealth"
"DT_BaseEntity")F18001c770T",
    R"F18001c770F(44: return *(undefined4 *)(iVar1 + param_1);)F18001c770F",
    R"F18001c770U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001c770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c770() noexcept {
    return kFunction_0x18001c770;
}

// 0x18001c860 FUN_18001c860
// source: re/dump/decompile/0x18001c860_FUN_18001c860.c
// size: 1039 bytes; thunk: false
// body sha256: 30e2cb1b22f2c46c95999d05ab1cc6d779fea8ff88b7b3068b8cb8418ff01cd6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001c860{
    "0x18001c860",
    "FUN_18001c860",
    R"F18001c860S(undefined FUN_18001c860())F18001c860S",
    R"B18001c860(// 0x18001c860  FUN_18001c860
// size=1039 thunk=false
// signature: undefined FUN_18001c860()
// status: ok


longlong * FUN_18001c860(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  longlong *plVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *_Str;
  undefined1 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  int iVar15;
  
  if (-1 < DAT_1803e9958) {
    plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
    cVar1 = FUN_18001ccb0();
    if (cVar1 != '\0') {
      return plVar5;
    }
    DAT_1803e9958 = -1;
  }
  DVar2 = GetTickCount();
  if ((DAT_1803fcf84 == 0) || (999 < DVar2 - DAT_1803fcf84)) {
    DAT_1803fcf84 = DVar2;
    iVar3 = (**(code **)(*DAT_1803fa360 + 0x30))();
    if (DAT_1804260c8 == '\0') {
      DAT_1804260c8 = '\x01';
      FUN_180014410("[ARMOR] scanning entlist 1..%d for resource entity...\n",iVar3);
      pcVar13 = (char *)0x0;
      for (iVar15 = 1; iVar15 <= iVar3; iVar15 = iVar15 + 1) {
        plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar15);
        if (plVar5 != (longlong *)0x0) {
          BVar4 = IsBadReadPtr(plVar5,8);
          pcVar10 = pcVar13;
          if ((((BVar4 == 0) && (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 == 0)) &&
              (pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 != (void *)0x0)) &&
             (((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
               (pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 != (void *)0x0)) &&
              ((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
               ((char *)0xffff < *(char **)((longlong)pvVar6 + 0x18))))))) {
            pcVar10 = *(char **)((longlong)pvVar6 + 0x18);
          }
          pcVar7 = (char *)FUN_18001e410(plVar5);
          _Str = pcVar7;
          if (pcVar7 < (char *)0x10000) {
            _Str = pcVar13;
          }
          if (((pcVar10 != (char *)0x0) &&
              ((pcVar8 = strstr(pcVar10,"Resource"), pcVar8 != (char *)0x0 ||
               (pcVar8 = strstr(pcVar10,"resource"), pcVar8 != (char *)0x0)))) ||
             ((_Str != (char *)0x0 &&
              ((pcVar8 = strstr(_Str,"manager"), pcVar8 != (char *)0x0 ||
               (pcVar8 = strstr(_Str,"resource"), pcVar8 != (char *)0x0)))))) {
            pcVar8 = "?";
            if (pcVar10 != (char *)0x0) {
              pcVar8 = pcVar10;
            }
            pcVar10 = "?";
            if (_Str != (char *)0x0) {
              pcVar10 = _Str;
            }
            FUN_180014410("[ARMOR]   idx=%d class=%s table=%s\n",iVar15,pcVar10,pcVar8,pcVar7);
          }
        }
      }
    }
    puVar14 = (undefined1 *)0x0;
    iVar15 = 1;
    uVar11 = 0xffffffff;
    if (0 < iVar3) {
      do {
        plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar15);
        cVar1 = FUN_18001ccb0();
        if (cVar1 != '\0') {
          if (DAT_1804253a0 != '\0') {
            DAT_1803e9958 = iVar15;
            return plVar5;
          }
          DAT_1804253a0 = 1;
          DAT_1803e9958 = iVar15;
          puVar9 = (undefined1 *)FUN_18001e410(plVar5);
          puVar12 = &DAT_18033e9cc;
          if ((undefined1 *)0x10000 < puVar9) {
            puVar12 = puVar9;
          }
          if (((((plVar5 == (longlong *)0x0) || (BVar4 = IsBadReadPtr(plVar5,8), BVar4 != 0)) ||
               (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 != 0)) ||
              ((pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 == (void *)0x0 ||
               (BVar4 = IsBadReadPtr(pvVar6,8), BVar4 != 0)))) ||
             ((pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 == (void *)0x0 ||
              ((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 != 0 ||
               (*(ulonglong *)((longlong)pvVar6 + 0x18) < 0x10000)))))) {
            puVar14 = &DAT_18033e9cc;
          }
          else {
            BVar4 = IsBadReadPtr(plVar5,8);
            if ((((BVar4 == 0) && (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 == 0)) &&
                (pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 != (void *)0x0)) &&
               (((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
                 (pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 != (void *)0x0)) &&
                ((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
                 (0xffff < *(ulonglong *)((longlong)pvVar6 + 0x18))))))) {
              puVar14 = *(undefined1 **)((longlong)pvVar6 + 0x18);
            }
          }
          FUN_180014410("[ARMOR] player resource entity found: idx=%d class=%s table=%s\n",iVar15,
                        puVar12,puVar14);
          return plVar5;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 <= iVar3);
    }
    if (DAT_1804253f4 == '\0') {
      DAT_1804253f4 = '\x01';
      if (DAT_1803fa608 != 0) {
        uVar11 = *(undefined4 *)(DAT_1803fa608 + 0x1c);
      }
      FUN_180014410("[ARMOR] player resource entity NOT found (high=%d, maxClients=%d)\n",iVar3,
                    uVar11);
    }
  }
  return (longlong *)0x0;
}


)B18001c860",
    "30e2cb1b22f2c46c95999d05ab1cc6d779fea8ff88b7b3068b8cb8418ff01cd6",
    R"F18001c860C(FUN_180014410
FUN_18001ccb0
FUN_18001e410)F18001c860C",
    R"F18001c860D(DAT_18033e9cc
DAT_1803e9958
DAT_1803fa360
DAT_1803fa608
DAT_1803fcf84
DAT_1804253a0
DAT_1804253f4
DAT_1804260c8)F18001c860D",
    R"F18001c860T("?"
"manager"
"Resource"
"resource"
"[ARMOR]   idx=%d class=%s table=%s\\n"
"[ARMOR] scanning entlist 1..%d for resource entity...\\n"
"[ARMOR] player resource entity found: idx=%d class=%s table=%s\\n"
"[ARMOR] player resource entity NOT found (high=%d, maxClients=%d)\\n")F18001c860T",
    R"F18001c860F(27: if (-1 < DAT_1803e9958) {
30: if (cVar1 != '\0') {
31: return plVar5;
36: if ((DAT_1803fcf84 == 0) || (999 < DVar2 - DAT_1803fcf84)) {
39: if (DAT_1804260c8 == '\0') {
43: for (iVar15 = 1; iVar15 <= iVar3; iVar15 = iVar15 + 1) {
45: if (plVar5 != (longlong *)0x0) {
48: if ((((BVar4 == 0) && (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 == 0)) &&
58: if (pcVar7 < (char *)0x10000) {
61: if (((pcVar10 != (char *)0x0) &&
68: if (pcVar10 != (char *)0x0) {
72: if (_Str != (char *)0x0) {
83: if (0 < iVar3) {
84: do {
87: if (cVar1 != '\0') {
88: if (DAT_1804253a0 != '\0') {
90: return plVar5;
96: if ((undefined1 *)0x10000 < puVar9) {
99: if (((((plVar5 == (longlong *)0x0) || (BVar4 = IsBadReadPtr(plVar5,8), BVar4 != 0)) ||
108: else {
110: if ((((BVar4 == 0) && (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 == 0)) &&
121: return plVar5;
126: if (DAT_1804253f4 == '\0') {
128: if (DAT_1803fa608 != 0) {
135: return (longlong *)0x0;)F18001c860F",
    R"F18001c860U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e9cc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9958.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcf84.
TODO: recover the declaration, type and value for global/data reference DAT_1804253a0.
TODO: recover the declaration, type and value for global/data reference DAT_1804253f4.
TODO: recover the declaration, type and value for global/data reference DAT_1804260c8.
TODO: resolve the indirect call in body 28: plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 38: iVar3 = (**(code **)(*DAT_1803fa360 + 0x30))();.
TODO: resolve the indirect call in body 44: plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar15);.
TODO: resolve the indirect call in body 49: (pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 != (void *)0x0)) &&.
TODO: resolve the indirect call in body 85: plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar15);.
TODO: resolve the indirect call in body 101: ((pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 == (void *)0x0 ||.
TODO: resolve the indirect call in body 111: (pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 != (void *)0x0)) &&.)F18001c860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001c860() noexcept {
    return kFunction_0x18001c860;
}

// 0x18001ccb0 FUN_18001ccb0
// source: re/dump/decompile/0x18001ccb0_FUN_18001ccb0.c
// size: 279 bytes; thunk: false
// body sha256: b847e9f511b7d0c125d8406709c3982ec4fc2be6d632ae229c980d4b1989de06
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001ccb0{
    "0x18001ccb0",
    "FUN_18001ccb0",
    R"F18001ccb0S(undefined FUN_18001ccb0())F18001ccb0S",
    R"B18001ccb0(// 0x18001ccb0  FUN_18001ccb0
// size=279 thunk=false
// signature: undefined FUN_18001ccb0()
// status: ok


undefined8 FUN_18001ccb0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  
  if (param_2 != (longlong *)0x0) {
    pcVar4 = (char *)FUN_18001e410(param_2);
    if (((char *)0x10000 < pcVar4) &&
       ((pcVar5 = strstr(pcVar4,"player_manager"), pcVar5 != (char *)0x0 ||
        (pcVar4 = strstr(pcVar4,"player_resource"), pcVar4 != (char *)0x0)))) {
      return 1;
    }
    BVar2 = IsBadReadPtr(param_2,8);
    if ((((BVar2 == 0) && (BVar2 = IsBadReadPtr((void *)*param_2,8), BVar2 == 0)) &&
        (pvVar6 = (void *)(**(code **)(*param_2 + 0x78))(param_2), pvVar6 != (void *)0x0)) &&
       (((BVar2 = IsBadReadPtr(pvVar6,8), BVar2 == 0 &&
         (pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 != (void *)0x0)) &&
        ((BVar2 = IsBadReadPtr(pvVar6,8), BVar2 == 0 &&
         (pcVar4 = *(char **)((longlong)pvVar6 + 0x18), (char *)0xffff < pcVar4)))))) {
      cVar1 = *pcVar4;
      while (cVar1 != '\0') {
        iVar3 = _strnicmp(pcVar4,"PlayerResource",0xe);
        if (iVar3 == 0) {
          return 1;
        }
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
    }
  }
  return 0;
}


)B18001ccb0",
    "b847e9f511b7d0c125d8406709c3982ec4fc2be6d632ae229c980d4b1989de06",
    R"F18001ccb0C(FUN_18001e410)F18001ccb0C",
    R"F18001ccb0D()F18001ccb0D",
    R"F18001ccb0T("PlayerResource"
"player_manager"
"player_resource")F18001ccb0T",
    R"F18001ccb0F(17: if (param_2 != (longlong *)0x0) {
19: if (((char *)0x10000 < pcVar4) &&
22: return 1;
25: if ((((BVar2 == 0) && (BVar2 = IsBadReadPtr((void *)*param_2,8), BVar2 == 0)) &&
32: while (cVar1 != '\0') {
34: if (iVar3 == 0) {
35: return 1;
42: return 0;)F18001ccb0F",
    R"F18001ccb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 26: (pvVar6 = (void *)(**(code **)(*param_2 + 0x78))(param_2), pvVar6 != (void *)0x0)) &&.)F18001ccb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001ccb0() noexcept {
    return kFunction_0x18001ccb0;
}

// 0x18001cdd0 FUN_18001cdd0
// source: re/dump/decompile/0x18001cdd0_FUN_18001cdd0.c
// size: 570 bytes; thunk: false
// body sha256: 9ecb28766492c7b3e9dd9caf39ded7d9b32c13476d675e943a77e6ee7bae4b77
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001cdd0{
    "0x18001cdd0",
    "FUN_18001cdd0",
    R"F18001cdd0S(undefined FUN_18001cdd0())F18001cdd0S",
    R"B18001cdd0(// 0x18001cdd0  FUN_18001cdd0
// size=570 thunk=false
// signature: undefined FUN_18001cdd0()
// status: ok


uint FUN_18001cdd0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar7 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);
    if (iVar2 - 1U < 0x80) {
      DVar3 = GetTickCount();
      lVar1 = (longlong)iVar2 * 4;
      if ((*(int *)(&DAT_1803fd130 + lVar1) != 0) &&
         (DVar3 - *(int *)(&DAT_1803fd130 + lVar1) < 200)) {
        return *(uint *)(&DAT_180425560 + lVar1);
      }
      uVar13 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_18001d080(&local_d8,"DT_PlayerResource",0x11);
      uVar8 = FUN_18016d4c0(local_88,&local_d8);
      uVar8 = FUN_180018ef0(&DAT_1803fac80,uVar8);
      FUN_18020e450(&local_d8);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_18001d080(&local_b8,"m_iArmor",8);
      local_98 = &local_b8;
      local_90 = local_68;
      uVar9 = FUN_18016d4c0(local_68,&local_b8);
      iVar4 = FUN_180018c10(uVar8,uVar9);
      FUN_18020e450(&local_b8);
      if (DAT_180400ae0 == '\0') {
        DAT_180400ae0 = '\x01';
        FUN_180014410("[ARMOR] DT_PlayerResource::m_iArmor offset = 0x%X\n",iVar4);
      }
      uVar11 = 0;
      if (((((iVar4 < 1) || (lVar10 = FUN_18001c860(), uVar11 = 0, lVar10 == 0)) ||
           (uVar12 = *(uint *)(lVar1 + iVar4 + lVar10), 1000 < uVar12)) ||
          (uVar13 = 1, uVar11 = uVar12, (int)uVar12 < 1)) &&
         (((uVar12 = uVar11, DAT_180426010 != (code *)0x0 &&
           (uVar5 = (*DAT_180426010)(iVar2,0xffffffff), -1 < (int)uVar5)) &&
          ((uVar12 = uVar5, DAT_1803fcf1c == '\0' && (0 < (int)uVar5)))))) {
        DAT_1803fcf1c = '\x01';
        FUN_180014410("[ARMOR] lua fallback hit: entIdx=%d netvar=%d(ok=%d) lua=%d\n",iVar2,uVar11,
                      uVar13,uVar5);
      }
      if ((DAT_1804253c8 == '\0') && (0 < (int)uVar12)) {
        DAT_1804253c8 = '\x01';
        FUN_180014410("[ARMOR] first non-zero armor: entIdx=%d armor=%d netvarOk=%d\n",iVar2,uVar12,
                      uVar13);
      }
      DVar6 = 1;
      if (DVar3 != 0) {
        DVar6 = DVar3;
      }
      *(DWORD *)(&DAT_1803fd130 + lVar1) = DVar6;
      *(uint *)(&DAT_180425560 + lVar1) = uVar12;
      return uVar12;
    }
  }
  return 0;
}


)B18001cdd0",
    "9ecb28766492c7b3e9dd9caf39ded7d9b32c13476d675e943a77e6ee7bae4b77",
    R"F18001cdd0C(FUN_180014410
FUN_180018c10
FUN_180018ef0
FUN_18001c860
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001cdd0C",
    R"F18001cdd0D(DAT_1803fac80
DAT_1803fcf1c
DAT_1803fd130
DAT_180400ae0
DAT_1804253c8
DAT_180425560
DAT_180426010)F18001cdd0D",
    R"F18001cdd0T("m_iArmor"
"DT_PlayerResource"
"[ARMOR] DT_PlayerResource::m_iArmor offset = 0x%X\\n"
"[ARMOR] lua fallback hit: entIdx=%d netvar=%d(ok=%d) lua=%d\\n"
"[ARMOR] first non-zero armor: entIdx=%d armor=%d netvarOk=%d\\n")F18001cdd0T",
    R"F18001cdd0F(37: if (plVar7 != (longlong *)0x0) {
39: if (iVar2 - 1U < 0x80) {
42: if ((*(int *)(&DAT_1803fd130 + lVar1) != 0) &&
44: return *(uint *)(&DAT_180425560 + lVar1);
65: if (DAT_180400ae0 == '\0') {
70: if (((((iVar4 < 1) || (lVar10 = FUN_18001c860(), uVar11 = 0, lVar10 == 0)) ||
80: if ((DAT_1804253c8 == '\0') && (0 < (int)uVar12)) {
86: if (DVar3 != 0) {
91: return uVar12;
94: return 0;)F18001cdd0F",
    R"F18001cdd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcf1c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd130.
TODO: recover the declaration, type and value for global/data reference DAT_180400ae0.
TODO: recover the declaration, type and value for global/data reference DAT_1804253c8.
TODO: recover the declaration, type and value for global/data reference DAT_180425560.
TODO: recover the declaration, type and value for global/data reference DAT_180426010.
TODO: resolve the indirect call in body 36: plVar7 = (longlong *)(**(code **)(*param_1 + 0x20))();.
TODO: resolve the indirect call in body 38: iVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);.
TODO: resolve the indirect call in body 73: (((uVar12 = uVar11, DAT_180426010 != (code *)0x0 &&.
TODO: resolve the indirect call in body 74: (uVar5 = (*DAT_180426010)(iVar2,0xffffffff), -1 < (int)uVar5)) &&.)F18001cdd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001cdd0() noexcept {
    return kFunction_0x18001cdd0;
}

// 0x18001d010 FUN_18001d010
// source: re/dump/decompile/0x18001d010_FUN_18001d010.c
// size: 68 bytes; thunk: false
// body sha256: 146d088da1afef270a1f0f4753a398240e9e4c8253c9070cc52997927e1d9fcc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d010{
    "0x18001d010",
    "FUN_18001d010",
    R"F18001d010S(undefined FUN_18001d010())F18001d010S",
    R"B18001d010(// 0x18001d010  FUN_18001d010
// size=68 thunk=false
// signature: undefined FUN_18001d010()
// status: ok


undefined8 * FUN_18001d010(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(param_2);
  FUN_18001d080(param_1,param_2,sVar1);
  return param_1;
}


)B18001d010",
    "146d088da1afef270a1f0f4753a398240e9e4c8253c9070cc52997927e1d9fcc",
    R"F18001d010C(FUN_18001d080)F18001d010C",
    R"F18001d010D()F18001d010D",
    R"F18001d010T()F18001d010T",
    R"F18001d010F(18: return param_1;)F18001d010F",
    R"F18001d010U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001d010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d010() noexcept {
    return kFunction_0x18001d010;
}

// 0x18001d060 FUN_18001d060
// source: re/dump/decompile/0x18001d060_FUN_18001d060.c
// size: 20 bytes; thunk: false
// body sha256: 224c7274382e89550a1fc6363a0863269589758834ae2bc534d291941b16320a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d060{
    "0x18001d060",
    "FUN_18001d060",
    R"F18001d060S(undefined FUN_18001d060())F18001d060S",
    R"B18001d060(// 0x18001d060  FUN_18001d060
// size=20 thunk=false
// signature: undefined FUN_18001d060()
// status: ok


undefined8 * FUN_18001d060(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


)B18001d060",
    "224c7274382e89550a1fc6363a0863269589758834ae2bc534d291941b16320a",
    R"F18001d060C()F18001d060C",
    R"F18001d060D()F18001d060D",
    R"F18001d060T()F18001d060T",
    R"F18001d060F(14: return param_1;)F18001d060F",
    R"F18001d060U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001d060U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d060() noexcept {
    return kFunction_0x18001d060;
}

// 0x18001d080 FUN_18001d080
// source: re/dump/decompile/0x18001d080_FUN_18001d080.c
// size: 247 bytes; thunk: false
// body sha256: 78dc7ed6f0a3b0367cc70d896c145b80b7249fa2b4b4580c67dae9d28084ee20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d080{
    "0x18001d080",
    "FUN_18001d080",
    R"F18001d080S(undefined FUN_18001d080())F18001d080S",
    R"B18001d080(// 0x18001d080  FUN_18001d080
// size=247 thunk=false
// signature: undefined FUN_18001d080()
// status: ok


void FUN_18001d080(undefined8 *param_1,void *param_2,size_t param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar5 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    memcpy(param_1,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 0xf;
  if (uVar2 < 0x8000000000000000) goto LAB_18001d0fb;
  uVar3 = 0x8000000000000027;
  puVar5 = auStack_48;
  uVar2 = 0x7fffffffffffffff;
  do {
    *(undefined8 *)(puVar5 + -8) = 0x18001d0ef;
    lVar4 = FUN_1802d8350(uVar3);
    if (lVar4 != 0) {
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_18001d141:
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      *(undefined8 *)(puVar5 + -8) = 0x18001d15a;
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
      return;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
LAB_18001d0fb:
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    if (uVar2 == 0xffffffffffffffff) {
      _Dst = (void *)0x0;
      goto LAB_18001d141;
    }
    if (uVar2 + 1 < 0x1000) {
      *(undefined8 *)(puVar5 + -8) = 0x18001d13e;
      _Dst = (void *)FUN_1802d8350();
      goto LAB_18001d141;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -8) = &UNK_18001d178;
      FUN_180012fe0();
    }
  } while( true );
}


)B18001d080",
    "78dc7ed6f0a3b0367cc70d896c145b80b7249fa2b4b4580c67dae9d28084ee20",
    R"F18001d080C(FUN_180012fe0
FUN_1800130a0
FUN_1802d8350)F18001d080C",
    R"F18001d080D(LAB_18001d0fb
LAB_18001d141
UNK_18001d178)F18001d080D",
    R"F18001d080T()F18001d080T",
    R"F18001d080F(20: if (0x7fffffffffffffff < param_3) {
24: if (param_3 < 0x10) {
29: return;
32: if (uVar2 < 0x8000000000000000) goto LAB_18001d0fb;
36: do {
39: if (lVar4 != 0) {
42: LAB_18001d141:
49: return;
54: LAB_18001d0fb:
55: if (uVar2 < 0x16) {
58: if (uVar2 == 0xffffffffffffffff) {
60: goto LAB_18001d141;
62: if (uVar2 + 1 < 0x1000) {
65: goto LAB_18001d141;
68: if (uVar3 <= uVar2 + 1) {)F18001d080F",
    R"F18001d080U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18001d0fb.
TODO: recover the declaration, type and value for global/data reference LAB_18001d141.
TODO: recover the declaration, type and value for global/data reference UNK_18001d178.
TODO: resolve the indirect call in body 51: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 52: uVar2 = (*pcVar1)(5);.)F18001d080U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d080() noexcept {
    return kFunction_0x18001d080;
}

// 0x18001d180 FUN_18001d180
// source: re/dump/decompile/0x18001d180_FUN_18001d180.c
// size: 459 bytes; thunk: false
// body sha256: 7c7f72d0e027395da2986d6e695d488fce5d7c84d88e7ab66bb403904a281260
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d180{
    "0x18001d180",
    "FUN_18001d180",
    R"F18001d180S(undefined FUN_18001d180())F18001d180S",
    R"B18001d180(// 0x18001d180  FUN_18001d180
// size=459 thunk=false
// signature: undefined FUN_18001d180()
// status: ok


ulonglong FUN_18001d180(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  DWORD DVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x20))();
  uVar10 = 0;
  uVar11 = uVar10;
  if (plVar6 == (longlong *)0x0) {
LAB_18001d202:
    bVar2 = false;
    DVar4 = GetTickCount();
  }
  else {
    iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
    uVar11 = (ulonglong)iVar3;
    if (0x7f < iVar3 - 1U) goto LAB_18001d202;
    DVar4 = GetTickCount();
    if ((*(int *)(&DAT_1803f8fe0 + uVar11 * 4) != 0) &&
       (DVar4 - *(int *)(&DAT_1803f8fe0 + uVar11 * 4) < 1000)) {
      return (ulonglong)*(uint *)(&DAT_1803fcd00 + uVar11 * 4);
    }
    bVar2 = true;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18001d080(&local_d8,"DT_GMOD_Player",0xe);
  uVar7 = FUN_18016d4c0(local_88,&local_d8);
  uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);
  FUN_18020e450(&local_d8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"m_iMaxArmor",0xb);
  local_98 = &local_b8;
  local_90 = local_68;
  uVar8 = FUN_18016d4c0(local_68,&local_b8);
  iVar3 = FUN_180018c10(uVar7,uVar8);
  FUN_18020e450(&local_b8);
  if ((iVar3 < 1) ||
     (uVar10 = (ulonglong)*(uint *)((longlong)iVar3 + (longlong)param_1),
     (int)*(uint *)((longlong)iVar3 + (longlong)param_1) < 1)) {
    if (bVar2) {
      if ((DAT_1803fd0d0 != (code *)0x0) &&
         (uVar5 = (*DAT_1803fd0d0)(uVar11 & 0xffffffff,0xffffffff), 0 < (int)uVar5)) {
        uVar10 = (ulonglong)uVar5;
        goto LAB_18001d30e;
      }
      if (0 < (int)uVar10) goto LAB_18001d30e;
    }
    uVar10 = 100;
  }
  if (!bVar2) {
    return uVar10;
  }
LAB_18001d30e:
  lVar1 = (longlong)(int)uVar11 * 4;
  DVar9 = 1;
  if (DVar4 != 0) {
    DVar9 = DVar4;
  }
  *(DWORD *)(&DAT_1803f8fe0 + lVar1) = DVar9;
  *(int *)(&DAT_1803fcd00 + lVar1) = (int)uVar10;
  return uVar10;
}


)B18001d180",
    "7c7f72d0e027395da2986d6e695d488fce5d7c84d88e7ab66bb403904a281260",
    R"F18001d180C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001d180C",
    R"F18001d180D(LAB_18001d202
LAB_18001d30e
DAT_1803f8fe0
DAT_1803fac80
DAT_1803fcd00
DAT_1803fd0d0)F18001d180D",
    R"F18001d180T("m_iMaxArmor"
"DT_GMOD_Player")F18001d180T",
    R"F18001d180F(37: if (plVar6 == (longlong *)0x0) {
38: LAB_18001d202:
42: else {
45: if (0x7f < iVar3 - 1U) goto LAB_18001d202;
47: if ((*(int *)(&DAT_1803f8fe0 + uVar11 * 4) != 0) &&
49: return (ulonglong)*(uint *)(&DAT_1803fcd00 + uVar11 * 4);
71: if ((iVar3 < 1) ||
74: if (bVar2) {
75: if ((DAT_1803fd0d0 != (code *)0x0) &&
78: goto LAB_18001d30e;
80: if (0 < (int)uVar10) goto LAB_18001d30e;
84: if (!bVar2) {
85: return uVar10;
87: LAB_18001d30e:
90: if (DVar4 != 0) {
95: return uVar10;)F18001d180F",
    R"F18001d180U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18001d202.
TODO: recover the declaration, type and value for global/data reference LAB_18001d30e.
TODO: recover the declaration, type and value for global/data reference DAT_1803f8fe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcd00.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd0d0.
TODO: resolve the indirect call in body 34: plVar6 = (longlong *)(**(code **)(*param_1 + 0x20))();.
TODO: resolve the indirect call in body 43: iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);.
TODO: resolve the indirect call in body 75: if ((DAT_1803fd0d0 != (code *)0x0) &&.
TODO: resolve the indirect call in body 76: (uVar5 = (*DAT_1803fd0d0)(uVar11 & 0xffffffff,0xffffffff), 0 < (int)uVar5)) {.)F18001d180U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d180() noexcept {
    return kFunction_0x18001d180;
}

// 0x18001d350 FUN_18001d350
// source: re/dump/decompile/0x18001d350_FUN_18001d350.c
// size: 230 bytes; thunk: false
// body sha256: 6c4ab4c4eb296d86b8a9e59942eee8d9f3be0dfca9ec46f57d141da447499231
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d350{
    "0x18001d350",
    "FUN_18001d350",
    R"F18001d350S(undefined FUN_18001d350())F18001d350S",
    R"B18001d350(// 0x18001d350  FUN_18001d350
// size=230 thunk=false
// signature: undefined FUN_18001d350()
// status: ok


longlong FUN_18001d350(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_HL2MP_Player",0xf);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_angEyeAngles[0]",0x11);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + iVar1;
}


)B18001d350",
    "6c4ab4c4eb296d86b8a9e59942eee8d9f3be0dfca9ec46f57d141da447499231",
    R"F18001d350C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001d350C",
    R"F18001d350D(DAT_1803fac80)F18001d350D",
    R"F18001d350T("DT_HL2MP_Player"
"m_angEyeAngles[0]")F18001d350T",
    R"F18001d350F(44: return param_1 + iVar1;)F18001d350F",
    R"F18001d350U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001d350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d350() noexcept {
    return kFunction_0x18001d350;
}

// 0x18001d440 FUN_18001d440
// source: re/dump/decompile/0x18001d440_FUN_18001d440.c
// size: 230 bytes; thunk: false
// body sha256: c3eb9b4e2c831937f88f12eaf1dc6c6c28edc71b5dc1dac3cbe00a2d8aa07856
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d440{
    "0x18001d440",
    "FUN_18001d440",
    R"F18001d440S(undefined FUN_18001d440())F18001d440S",
    R"B18001d440(// 0x18001d440  FUN_18001d440
// size=230 thunk=false
// signature: undefined FUN_18001d440()
// status: ok


longlong FUN_18001d440(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_vecOrigin[0]",0xe);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + iVar1;
}


)B18001d440",
    "c3eb9b4e2c831937f88f12eaf1dc6c6c28edc71b5dc1dac3cbe00a2d8aa07856",
    R"F18001d440C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001d440C",
    R"F18001d440D(DAT_1803fac80)F18001d440D",
    R"F18001d440T("DT_BaseEntity"
"m_vecOrigin[0]")F18001d440T",
    R"F18001d440F(44: return param_1 + iVar1;)F18001d440F",
    R"F18001d440U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001d440U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d440() noexcept {
    return kFunction_0x18001d440;
}

// 0x18001d530 FUN_18001d530
// source: re/dump/decompile/0x18001d530_FUN_18001d530.c
// size: 230 bytes; thunk: false
// body sha256: c57955e4ba9311fb57fbe8f9c77796cb64b0d0bd485afa9d95b9f1f915e1a5fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d530{
    "0x18001d530",
    "FUN_18001d530",
    R"F18001d530S(undefined FUN_18001d530())F18001d530S",
    R"B18001d530(// 0x18001d530  FUN_18001d530
// size=230 thunk=false
// signature: undefined FUN_18001d530()
// status: ok


longlong FUN_18001d530(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_vecVelocity[0]",0x10);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + iVar1;
}


)B18001d530",
    "c57955e4ba9311fb57fbe8f9c77796cb64b0d0bd485afa9d95b9f1f915e1a5fb",
    R"F18001d530C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001d530C",
    R"F18001d530D(DAT_1803fac80)F18001d530D",
    R"F18001d530T("DT_BaseEntity"
"m_vecVelocity[0]")F18001d530T",
    R"F18001d530F(44: return param_1 + iVar1;)F18001d530F",
    R"F18001d530U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001d530U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d530() noexcept {
    return kFunction_0x18001d530;
}

// 0x18001d620 FUN_18001d620
// source: re/dump/decompile/0x18001d620_FUN_18001d620.c
// size: 230 bytes; thunk: false
// body sha256: fe6db4c1fc86d31a9c5202bdb84fcdc142483cb922910aa4058746a295500ee8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d620{
    "0x18001d620",
    "FUN_18001d620",
    R"F18001d620S(undefined FUN_18001d620())F18001d620S",
    R"B18001d620(// 0x18001d620  FUN_18001d620
// size=230 thunk=false
// signature: undefined FUN_18001d620()
// status: ok


longlong FUN_18001d620(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_angRotation",0xd);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + iVar1;
}


)B18001d620",
    "fe6db4c1fc86d31a9c5202bdb84fcdc142483cb922910aa4058746a295500ee8",
    R"F18001d620C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001d620C",
    R"F18001d620D(DAT_1803fac80)F18001d620D",
    R"F18001d620T("DT_BaseEntity"
"m_angRotation")F18001d620T",
    R"F18001d620F(44: return param_1 + iVar1;)F18001d620F",
    R"F18001d620U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001d620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d620() noexcept {
    return kFunction_0x18001d620;
}

// 0x18001d710 FUN_18001d710
// source: re/dump/decompile/0x18001d710_FUN_18001d710.c
// size: 242 bytes; thunk: false
// body sha256: b7b1bdc40c843a77f198cc035749ca0160a2390d0b7f48eb124f17710603b524
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d710{
    "0x18001d710",
    "FUN_18001d710",
    R"F18001d710S(undefined FUN_18001d710())F18001d710S",
    R"B18001d710(// 0x18001d710  FUN_18001d710
// size=242 thunk=false
// signature: undefined FUN_18001d710()
// status: ok


undefined4 * FUN_18001d710(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BasePlayer",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_fFlags",8);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  *param_2 = *(undefined4 *)(iVar1 + param_1);
  return param_2;
}


)B18001d710",
    "b7b1bdc40c843a77f198cc035749ca0160a2390d0b7f48eb124f17710603b524",
    R"F18001d710C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001d710C",
    R"F18001d710D(DAT_1803fac80)F18001d710D",
    R"F18001d710T("m_fFlags"
"DT_BasePlayer")F18001d710T",
    R"F18001d710F(45: return param_2;)F18001d710F",
    R"F18001d710U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001d710U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d710() noexcept {
    return kFunction_0x18001d710;
}

// 0x18001d810 FUN_18001d810
// source: re/dump/decompile/0x18001d810_FUN_18001d810.c
// size: 488 bytes; thunk: false
// body sha256: d66aee35325ee7185df38c1a39657fa033c0e95832b091076f4b36aca3b13510
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001d810{
    "0x18001d810",
    "FUN_18001d810",
    R"F18001d810S(undefined FUN_18001d810())F18001d810S",
    R"B18001d810(// 0x18001d810  FUN_18001d810
// size=488 thunk=false
// signature: undefined FUN_18001d810()
// status: ok


void FUN_18001d810(longlong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_1803ff11c == '\0') {
    DAT_1803ff11c = '\x01';
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_18001d080(&local_98,
                  "8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
                  ,0x53);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_18001d080(&local_78,"client.dll",10);
    pcVar4 = (code *)FUN_180015f40(&local_78,&local_98);
    if (pcVar4 == (code *)0x0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_18001d080(&local_58,
                    "FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3",0x45);
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      local_20 = 0;
      FUN_18001d080(&local_38,"client.dll",10);
      lVar5 = FUN_180015f40(&local_38,&local_58);
      pcVar4 = (code *)(lVar5 + -6);
      if (lVar5 == 0) {
        pcVar4 = (code *)0x0;
      }
      if (pcVar4 == (code *)0x0) {
        FUN_180014410(&DAT_18033fcf0);
        goto LAB_18001d940;
      }
    }
    iVar1 = *(int *)(pcVar4 + 10);
    iVar2 = *(int *)(pcVar4 + 0x1b);
    if (((iVar1 - 0x101U < 0x3eff) && (iVar2 - 0x101U < 0x3eff)) && (iVar2 != iVar1)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((iVar1 != 0x1718) || (pcVar7 = " [matches the documented layout]", iVar2 != 0x1a88)) {
      pcVar7 = "";
    }
    pcVar6 = "REJECTED (offsets outside the bone block)";
    if (bVar3) {
      pcVar6 = "accepted";
    }
    FUN_180014410(&DAT_18033fde0,pcVar4,iVar1,iVar2,pcVar6,pcVar7);
    if (bVar3) goto LAB_18001d947;
  }
LAB_18001d940:
  pcVar4 = DAT_1803fead8;
LAB_18001d947:
  DAT_1803fead8 = pcVar4;
  if (DAT_1803fead8 != (code *)0x0) {
    (*DAT_1803fead8)(param_1);
  }
  return;
}


)B18001d810",
    "d66aee35325ee7185df38c1a39657fa033c0e95832b091076f4b36aca3b13510",
    R"F18001d810C(FUN_180014410
FUN_180015f40
FUN_18001d080)F18001d810C",
    R"F18001d810D(LAB_18001d940
LAB_18001d947
DAT_18033fcf0
DAT_18033fde0
DAT_1803fead8
DAT_1803ff11c)F18001d810D",
    R"F18001d810T(""
"accepted"
"client.dll"
" [matches the documented layout]"
"REJECTED (offsets outside the bone block)"
"FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
"8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3")F18001d810T",
    R"F18001d810F(34: if (param_1 == 0) {
35: return;
37: if (DAT_1803ff11c == '\0') {
52: if (pcVar4 == (code *)0x0) {
66: if (lVar5 == 0) {
69: if (pcVar4 == (code *)0x0) {
71: goto LAB_18001d940;
76: if (((iVar1 - 0x101U < 0x3eff) && (iVar2 - 0x101U < 0x3eff)) && (iVar2 != iVar1)) {
79: else {
82: if ((iVar1 != 0x1718) || (pcVar7 = " [matches the documented layout]", iVar2 != 0x1a88)) {
86: if (bVar3) {
90: if (bVar3) goto LAB_18001d947;
92: LAB_18001d940:
94: LAB_18001d947:
96: if (DAT_1803fead8 != (code *)0x0) {
99: return;)F18001d810F",
    R"F18001d810U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18001d940.
TODO: recover the declaration, type and value for global/data reference LAB_18001d947.
TODO: recover the declaration, type and value for global/data reference DAT_18033fcf0.
TODO: recover the declaration, type and value for global/data reference DAT_18033fde0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fead8.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff11c.
TODO: resolve the indirect call in body 51: pcVar4 = (code *)FUN_180015f40(&local_78,&local_98);.
TODO: resolve the indirect call in body 52: if (pcVar4 == (code *)0x0) {.
TODO: resolve the indirect call in body 65: pcVar4 = (code *)(lVar5 + -6);.
TODO: resolve the indirect call in body 67: pcVar4 = (code *)0x0;.
TODO: resolve the indirect call in body 69: if (pcVar4 == (code *)0x0) {.
TODO: resolve the indirect call in body 96: if (DAT_1803fead8 != (code *)0x0) {.
TODO: resolve the indirect call in body 97: (*DAT_1803fead8)(param_1);.)F18001d810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001d810() noexcept {
    return kFunction_0x18001d810;
}

// 0x18001da00 FUN_18001da00
// source: re/dump/decompile/0x18001da00_FUN_18001da00.c
// size: 229 bytes; thunk: false
// body sha256: 00dee4e34007bab9d777ca63d9c6485f59e4fc14212d8f43c6ca9d18e03c607b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001da00{
    "0x18001da00",
    "FUN_18001da00",
    R"F18001da00S(undefined FUN_18001da00())F18001da00S",
    R"B18001da00(// 0x18001da00  FUN_18001da00
// size=229 thunk=false
// signature: undefined FUN_18001da00()
// status: ok


undefined4 FUN_18001da00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseAnimating",0x10);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_nHitboxSet",0xc);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return *(undefined4 *)(iVar1 + param_1);
}


)B18001da00",
    "00dee4e34007bab9d777ca63d9c6485f59e4fc14212d8f43c6ca9d18e03c607b",
    R"F18001da00C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001da00C",
    R"F18001da00D(DAT_1803fac80)F18001da00D",
    R"F18001da00T("m_nHitboxSet"
"DT_BaseAnimating")F18001da00T",
    R"F18001da00F(44: return *(undefined4 *)(iVar1 + param_1);)F18001da00F",
    R"F18001da00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001da00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001da00() noexcept {
    return kFunction_0x18001da00;
}

// 0x18001daf0 FUN_18001daf0
// source: re/dump/decompile/0x18001daf0_FUN_18001daf0.c
// size: 253 bytes; thunk: false
// body sha256: 2b63862d99a8daee0fd35ce6883367dccae0e8e34d80ad29fe09e32d4cabb7dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001daf0{
    "0x18001daf0",
    "FUN_18001daf0",
    R"F18001daf0S(undefined FUN_18001daf0())F18001daf0S",
    R"B18001daf0(// 0x18001daf0  FUN_18001daf0
// size=253 thunk=false
// signature: undefined FUN_18001daf0()
// status: ok


undefined8 * FUN_18001daf0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BaseAnimating",0x10);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_vecOrigin",0xb);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  *param_2 = *(undefined8 *)(iVar1 + param_1);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)((longlong)iVar1 + 8 + param_1);
  return param_2;
}


)B18001daf0",
    "2b63862d99a8daee0fd35ce6883367dccae0e8e34d80ad29fe09e32d4cabb7dd",
    R"F18001daf0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001daf0C",
    R"F18001daf0D(DAT_1803fac80)F18001daf0D",
    R"F18001daf0T("m_vecOrigin"
"DT_BaseAnimating")F18001daf0T",
    R"F18001daf0F(46: return param_2;)F18001daf0F",
    R"F18001daf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001daf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001daf0() noexcept {
    return kFunction_0x18001daf0;
}

// 0x18001dbf0 FUN_18001dbf0
// source: re/dump/decompile/0x18001dbf0_FUN_18001dbf0.c
// size: 280 bytes; thunk: false
// body sha256: b3807cbe77d617fbbba8ea5ee53e48245e2287207f4dbcec276cd515671b0ddc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001dbf0{
    "0x18001dbf0",
    "FUN_18001dbf0",
    R"F18001dbf0S(undefined FUN_18001dbf0())F18001dbf0S",
    R"B18001dbf0(// 0x18001dbf0  FUN_18001dbf0
// size=280 thunk=false
// signature: undefined FUN_18001dbf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001dbf0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_18001d080(&local_e8,"DT_BaseCombatCharacter",0x16);
  local_a8 = &local_e8;
  local_a0 = local_80;
  uVar2 = FUN_18016d4c0(local_80,&local_e8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_e8);
  local_98 = &local_c8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"m_hActiveWeapon",0xf);
  local_90 = &local_c8;
  local_88 = local_60;
  uVar3 = FUN_18016d4c0(local_60,&local_c8);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_c8);
  local_40[0] = *(undefined4 *)(iVar1 + param_1);
  (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_40);
  return;
}


)B18001dbf0",
    "b3807cbe77d617fbbba8ea5ee53e48245e2287207f4dbcec276cd515671b0ddc",
    R"F18001dbf0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001dbf0C",
    R"F18001dbf0D(DAT_1803da4c0
DAT_1803fa360
DAT_1803fac80)F18001dbf0D",
    R"F18001dbf0T("m_hActiveWeapon"
"DT_BaseCombatCharacter")F18001dbf0T",
    R"F18001dbf0F(58: return;)F18001dbf0F",
    R"F18001dbf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: resolve the indirect call in body 57: (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_40);.)F18001dbf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001dbf0() noexcept {
    return kFunction_0x18001dbf0;
}

// 0x18001dd10 FUN_18001dd10
// source: re/dump/decompile/0x18001dd10_FUN_18001dd10.c
// size: 290 bytes; thunk: false
// body sha256: b3437e64be0cf977c97f98730cc1a08b566afecef8ee8513f96ed7410384ca12
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001dd10{
    "0x18001dd10",
    "FUN_18001dd10",
    R"F18001dd10S(undefined FUN_18001dd10())F18001dd10S",
    R"B18001dd10(// 0x18001dd10  FUN_18001dd10
// size=290 thunk=false
// signature: undefined FUN_18001dd10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18001dd10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_18001d080(&local_e8,"DT_BaseEntity",0xd);
  local_a8 = &local_e8;
  local_a0 = local_80;
  uVar2 = FUN_18016d4c0(local_80,&local_e8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_e8);
  local_98 = &local_c8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"m_hOwnerEntity",0xe);
  local_90 = &local_c8;
  local_88 = local_60;
  uVar3 = FUN_18016d4c0(local_60,&local_c8);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_c8);
  if (*(longlong *)(iVar1 + param_1) == 0) {
    uVar2 = 0;
  }
  else {
    local_40[0] = (undefined4)*(longlong *)(iVar1 + param_1);
    uVar2 = (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_40);
  }
  return uVar2;
}


)B18001dd10",
    "b3437e64be0cf977c97f98730cc1a08b566afecef8ee8513f96ed7410384ca12",
    R"F18001dd10C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001dd10C",
    R"F18001dd10D(DAT_1803da4c0
DAT_1803fa360
DAT_1803fac80)F18001dd10D",
    R"F18001dd10T("DT_BaseEntity"
"m_hOwnerEntity")F18001dd10T",
    R"F18001dd10F(56: if (*(longlong *)(iVar1 + param_1) == 0) {
59: else {
63: return uVar2;)F18001dd10F",
    R"F18001dd10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: resolve the indirect call in body 61: uVar2 = (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_40);.)F18001dd10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001dd10() noexcept {
    return kFunction_0x18001dd10;
}

// 0x18001de40 FUN_18001de40
// source: re/dump/decompile/0x18001de40_FUN_18001de40.c
// size: 360 bytes; thunk: false
// body sha256: 28a5e159b248b4b4c65ae849419b607dbea11caf90f5ddc17a14f1ebbc531a0a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001de40{
    "0x18001de40",
    "FUN_18001de40",
    R"F18001de40S(undefined FUN_18001de40())F18001de40S",
    R"B18001de40(// 0x18001de40  FUN_18001de40
// size=360 thunk=false
// signature: undefined FUN_18001de40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18001de40(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (param_1 != 0) {
    plVar3 = (longlong *)FUN_18001dd10();
    if ((plVar3 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar3 + 0x420))(plVar3), cVar1 != '\0')) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_18001d080(&local_d8,"DT_GMOD_Player",0xe);
      local_98 = &local_d8;
      local_90 = local_70;
      uVar4 = FUN_18016d4c0(local_70,&local_d8);
      uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);
      FUN_18020e450(&local_d8);
      local_88 = &local_b8;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_18001d080(&local_b8,"m_Hands",7);
      local_80 = &local_b8;
      local_78 = local_50;
      uVar5 = FUN_18016d4c0(local_50,&local_b8);
      iVar2 = FUN_180018c10(uVar4,uVar5);
      FUN_18020e450(&local_b8);
      if (*(longlong *)((longlong)iVar2 + (longlong)plVar3) != 0) {
        local_30[0] = (undefined4)*(longlong *)((longlong)iVar2 + (longlong)plVar3);
        lVar6 = (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_30);
        if (lVar6 == param_1) {
          return 1;
        }
      }
    }
  }
  return 0;
}


)B18001de40",
    "28a5e159b248b4b4c65ae849419b607dbea11caf90f5ddc17a14f1ebbc531a0a",
    R"F18001de40C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18001dd10
FUN_18016d4c0
FUN_18020e450)F18001de40C",
    R"F18001de40D(DAT_1803da4c0
DAT_1803fa360
DAT_1803fac80)F18001de40D",
    R"F18001de40T("m_Hands"
"DT_GMOD_Player")F18001de40T",
    R"F18001de40F(38: if (param_1 != 0) {
40: if ((plVar3 != (longlong *)0x0) &&
63: if (*(longlong *)((longlong)iVar2 + (longlong)plVar3) != 0) {
66: if (lVar6 == param_1) {
67: return 1;
72: return 0;)F18001de40F",
    R"F18001de40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: resolve the indirect call in body 41: (cVar1 = (**(code **)(*plVar3 + 0x420))(plVar3), cVar1 != '\0')) {.
TODO: resolve the indirect call in body 65: lVar6 = (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_30);.)F18001de40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001de40() noexcept {
    return kFunction_0x18001de40;
}

// 0x18001dfb0 FUN_18001dfb0
// source: re/dump/decompile/0x18001dfb0_FUN_18001dfb0.c
// size: 230 bytes; thunk: false
// body sha256: 3b817cc8a4cc965ef12ded817e51e198789653fa7c80233d413f5f1b8f30fa14
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001dfb0{
    "0x18001dfb0",
    "FUN_18001dfb0",
    R"F18001dfb0S(undefined FUN_18001dfb0())F18001dfb0S",
    R"B18001dfb0(// 0x18001dfb0  FUN_18001dfb0
// size=230 thunk=false
// signature: undefined FUN_18001dfb0()
// status: ok


longlong FUN_18001dfb0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BasePlayer",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_nTickBase",0xb);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + iVar1;
}


)B18001dfb0",
    "3b817cc8a4cc965ef12ded817e51e198789653fa7c80233d413f5f1b8f30fa14",
    R"F18001dfb0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001dfb0C",
    R"F18001dfb0D(DAT_1803fac80)F18001dfb0D",
    R"F18001dfb0T("m_nTickBase"
"DT_BasePlayer")F18001dfb0T",
    R"F18001dfb0F(44: return param_1 + iVar1;)F18001dfb0F",
    R"F18001dfb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001dfb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001dfb0() noexcept {
    return kFunction_0x18001dfb0;
}

// 0x18001e0a0 FUN_18001e0a0
// source: re/dump/decompile/0x18001e0a0_FUN_18001e0a0.c
// size: 271 bytes; thunk: false
// body sha256: 53927e369a88bc36ae3477422f932bc8dd8515480ac2f547c53469674ddb159b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e0a0{
    "0x18001e0a0",
    "FUN_18001e0a0",
    R"F18001e0a0S(undefined FUN_18001e0a0())F18001e0a0S",
    R"B18001e0a0(// 0x18001e0a0  FUN_18001e0a0
// size=271 thunk=false
// signature: undefined FUN_18001e0a0()
// status: ok


undefined1 FUN_18001e0a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  if (DAT_1803e6f78 < 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
    uVar2 = FUN_18016d4c0(local_68,&local_b8);
    uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
    FUN_18020e450(&local_b8);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_18001d080(&local_98,"m_iParentAttachment",0x13);
    local_78 = &local_98;
    local_70 = local_48;
    uVar3 = FUN_18016d4c0(local_48,&local_98);
    iVar1 = FUN_180018c10(uVar2,uVar3);
    FUN_18020e450(&local_98);
    DAT_1803e6f78 = iVar1 + -2;
    return *(undefined1 *)((iVar1 + -2) + param_1);
  }
  return *(undefined1 *)(DAT_1803e6f78 + param_1);
}


)B18001e0a0",
    "53927e369a88bc36ae3477422f932bc8dd8515480ac2f547c53469674ddb159b",
    R"F18001e0a0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001e0a0C",
    R"F18001e0a0D(DAT_1803e6f78
DAT_1803fac80)F18001e0a0D",
    R"F18001e0a0T("DT_BaseEntity"
"m_iParentAttachment")F18001e0a0T",
    R"F18001e0a0F(26: if (DAT_1803e6f78 < 0) {
46: return *(undefined1 *)((iVar1 + -2) + param_1);
48: return *(undefined1 *)(DAT_1803e6f78 + param_1);)F18001e0a0F",
    R"F18001e0a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6f78.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001e0a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e0a0() noexcept {
    return kFunction_0x18001e0a0;
}

// 0x18001e1b0 FUN_18001e1b0
// source: re/dump/decompile/0x18001e1b0_FUN_18001e1b0.c
// size: 252 bytes; thunk: false
// body sha256: 7e14d8e2e5a4dd30a17f9ec54e4a7f02c574a2b73e977a04d3f4eabc89c69fc9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e1b0{
    "0x18001e1b0",
    "FUN_18001e1b0",
    R"F18001e1b0S(undefined FUN_18001e1b0())F18001e1b0S",
    R"B18001e1b0(// 0x18001e1b0  FUN_18001e1b0
// size=252 thunk=false
// signature: undefined FUN_18001e1b0()
// status: ok


undefined8 FUN_18001e1b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != (longlong *)0x0) && (DAT_1803fcf38 != -1)) {
    iVar3 = (**(code **)*param_2)(param_2);
    cVar1 = FUN_18001bdc0(param_1);
    iVar4 = (**(code **)*param_2)(param_2);
    iVar4 = iVar4 - iVar3;
    if ((cVar1 != '\0') &&
       ((iVar4 == 1 &&
        (cVar2 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9), cVar2 != '\0')))) {
      if (DAT_1803fcf38 == 0) {
        DAT_1803fcf38 = iVar4;
        FUN_180014410("[PUSH] native PushEntity(vt174) verified: +1 ENTITY, no Lua executed\n");
      }
      return 1;
    }
    iVar5 = (**(code **)*param_2)(param_2);
    while (iVar3 < iVar5) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
      iVar5 = (**(code **)*param_2)(param_2);
    }
    if (DAT_1803fcf38 == 0) {
      DAT_1803fcf80 = DAT_1803fcf80 + 1;
      if (2 < DAT_1803fcf80) {
        DAT_1803fcf38 = -1;
        FUN_180014410(&DAT_18033ff10,cVar1,iVar4);
      }
    }
  }
  return 0;
}


)B18001e1b0",
    "7e14d8e2e5a4dd30a17f9ec54e4a7f02c574a2b73e977a04d3f4eabc89c69fc9",
    R"F18001e1b0C(FUN_180014410
FUN_18001bdc0)F18001e1b0C",
    R"F18001e1b0D(DAT_18033ff10
DAT_1803fcf38
DAT_1803fcf80)F18001e1b0D",
    R"F18001e1b0T("[PUSH] native PushEntity(vt174) verified: +1 ENTITY, no Lua executed\\n")F18001e1b0T",
    R"F18001e1b0F(16: if ((param_2 != (longlong *)0x0) && (DAT_1803fcf38 != -1)) {
21: if ((cVar1 != '\0') &&
24: if (DAT_1803fcf38 == 0) {
28: return 1;
31: while (iVar3 < iVar5) {
35: if (DAT_1803fcf38 == 0) {
37: if (2 < DAT_1803fcf80) {
43: return 0;)F18001e1b0F",
    R"F18001e1b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033ff10.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcf38.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcf80.
TODO: resolve the indirect call in body 17: iVar3 = (**(code **)*param_2)(param_2);.
TODO: resolve the indirect call in body 19: iVar4 = (**(code **)*param_2)(param_2);.
TODO: resolve the indirect call in body 23: (cVar2 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9), cVar2 != '\0')))) {.
TODO: resolve the indirect call in body 30: iVar5 = (**(code **)*param_2)(param_2);.
TODO: resolve the indirect call in body 32: (**(code **)(*param_2 + 0x10))(param_2,1);.
TODO: resolve the indirect call in body 33: iVar5 = (**(code **)*param_2)(param_2);.)F18001e1b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e1b0() noexcept {
    return kFunction_0x18001e1b0;
}

// 0x18001e2b0 FUN_18001e2b0
// source: re/dump/decompile/0x18001e2b0_FUN_18001e2b0.c
// size: 301 bytes; thunk: false
// body sha256: 2216b3dfa6bf542031f3a6c2cc23d80f035fae7d4009a6de48337a5a5ac87147
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e2b0{
    "0x18001e2b0",
    "FUN_18001e2b0",
    R"F18001e2b0S(undefined FUN_18001e2b0())F18001e2b0S",
    R"B18001e2b0(// 0x18001e2b0  FUN_18001e2b0
// size=301 thunk=false
// signature: undefined FUN_18001e2b0()
// status: ok


undefined8 FUN_18001e2b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_18001e1b0();
    if (cVar1 != '\0') {
      return 1;
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    if ((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), -1 < iVar2))
    {
      if ((DAT_180426020 == (code *)0x0) ||
         (cVar1 = (*DAT_180426020)(param_2[1],param_2,iVar2), cVar1 == '\0')) {
        if (DAT_1803fd050 == '\0') {
          DAT_1803fd050 = '\x01';
          FUN_180014410(&DAT_18033ffe0,DAT_1803fcf38,DAT_180426020);
        }
        FUN_180023e60(param_2,0);
        (**(code **)(*param_2 + 0x20))(param_2,0xffffffff,"Entity");
        (**(code **)(*param_2 + 0xf0))(param_2,(double)iVar2);
        (**(code **)(*param_2 + 0x50))(param_2,1,1);
        (**(code **)(*param_2 + 0x78))(param_2,0xfffffffe);
        cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9);
        if (cVar1 == '\0') {
          (**(code **)(*param_2 + 0x10))(param_2,1);
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


)B18001e2b0",
    "2216b3dfa6bf542031f3a6c2cc23d80f035fae7d4009a6de48337a5a5ac87147",
    R"F18001e2b0C(FUN_180014410
FUN_18001e1b0
FUN_180023e60)F18001e2b0C",
    R"F18001e2b0D(DAT_18033ffe0
DAT_1803fcf38
DAT_1803fd050
DAT_180426020)F18001e2b0D",
    R"F18001e2b0T("Entity")F18001e2b0T",
    R"F18001e2b0F(14: if (param_2 != (longlong *)0x0) {
16: if (cVar1 != '\0') {
17: return 1;
20: if ((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), -1 < iVar2))
22: if ((DAT_180426020 == (code *)0x0) ||
24: if (DAT_1803fd050 == '\0') {
34: if (cVar1 == '\0') {
36: return 0;
39: return 1;
42: return 0;)F18001e2b0F",
    R"F18001e2b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033ffe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcf38.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd050.
TODO: recover the declaration, type and value for global/data reference DAT_180426020.
TODO: resolve the indirect call in body 19: plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);.
TODO: resolve the indirect call in body 20: if ((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), -1 < iVar2)).
TODO: resolve the indirect call in body 22: if ((DAT_180426020 == (code *)0x0) ||.
TODO: resolve the indirect call in body 23: (cVar1 = (*DAT_180426020)(param_2[1],param_2,iVar2), cVar1 == '\0')) {.
TODO: resolve the indirect call in body 29: (**(code **)(*param_2 + 0x20))(param_2,0xffffffff,"Entity");.
TODO: resolve the indirect call in body 30: (**(code **)(*param_2 + 0xf0))(param_2,(double)iVar2);.
TODO: resolve the indirect call in body 31: (**(code **)(*param_2 + 0x50))(param_2,1,1);.
TODO: resolve the indirect call in body 32: (**(code **)(*param_2 + 0x78))(param_2,0xfffffffe);.
TODO: resolve the indirect call in body 33: cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9);.
TODO: resolve the indirect call in body 35: (**(code **)(*param_2 + 0x10))(param_2,1);.)F18001e2b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e2b0() noexcept {
    return kFunction_0x18001e2b0;
}

}  // namespace sf::reconstructed
